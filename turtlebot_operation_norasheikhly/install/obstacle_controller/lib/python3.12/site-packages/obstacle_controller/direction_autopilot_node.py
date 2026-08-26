#!/usr/bin/env python3
import math
import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
from sensor_msgs.msg import LaserScan
from obstacle_interfaces.srv import SetDirection

VALID_DIRECTIONS = {"forward", "reverse", "left", "right", "stop"}

class DirectionAutopilotNode(Node):
    def __init__(self):
        super().__init__('direction_autopilot_node')

        self.current_direction = "stop"

        # ROS interfaces
        self.create_subscription(LaserScan, '/scan', self.scan_callback, 10)
        self.cmd_pub = self.create_publisher(Twist, '/cmd_vel', 10)
        self.create_service(SetDirection, '/set_direction', self.handle_request)

        # Parameters
        self.avoid_threshold = 1.2  # meters
        self.forward_velocity = 0.25
        self.reverse_velocity = -0.20
        self.angular_velocity = 0.6  # sharper turns
        self.diagonal_turn_speed = 0.4
        self.sector_half_width = math.radians(25)

        self.get_logger().info("Continuous All-Direction Obstacle Avoidance Node Started")

    def _sector_distance(self, ranges, angle_min, angle_increment, center_angle, half_width, max_range):
        start_angle = center_angle - half_width
        end_angle = center_angle + half_width
        start_index = max(0, int((start_angle - angle_min) / angle_increment))
        end_index = min(len(ranges), int((end_angle - angle_min) / angle_increment))
        sector_ranges = [
            r for r in ranges[start_index:end_index]
            if not math.isinf(r) and not math.isnan(r)
        ]
        return min(sector_ranges) if sector_ranges else max_range

    def scan_callback(self, msg: LaserScan):
        ranges = msg.ranges
        angle_min = msg.angle_min
        angle_increment = msg.angle_increment

        # Distances in key sectors
        front_distance = self._sector_distance(ranges, angle_min, angle_increment, 0.0, self.sector_half_width, msg.range_max)
        back_distance = self._sector_distance(ranges, angle_min, angle_increment, math.pi, self.sector_half_width, msg.range_max)
        left_front_distance = self._sector_distance(ranges, angle_min, angle_increment, math.pi/4, self.sector_half_width, msg.range_max)
        right_front_distance = self._sector_distance(ranges, angle_min, angle_increment, -math.pi/4, self.sector_half_width, msg.range_max)

        self.get_logger().info(
            f"F:{front_distance:.2f} | B:{back_distance:.2f} | LF:{left_front_distance:.2f} | RF:{right_front_distance:.2f} | CMD:{self.current_direction}"
        )

        twist = Twist()

        # Forward movement
        if self.current_direction == "forward":
            if front_distance < self.avoid_threshold:
                if left_front_distance > right_front_distance:
                    twist.linear.x = self.forward_velocity
                    twist.angular.z = self.angular_velocity
                else:
                    twist.linear.x = self.forward_velocity
                    twist.angular.z = -self.angular_velocity
            else:
                twist.linear.x = self.forward_velocity

        # Reverse movement
        elif self.current_direction == "reverse":
            if back_distance < self.avoid_threshold:
                if left_front_distance > right_front_distance:
                    twist.linear.x = self.reverse_velocity
                    twist.angular.z = self.angular_velocity
                else:
                    twist.linear.x = self.reverse_velocity
                    twist.angular.z = -self.angular_velocity
            else:
                twist.linear.x = self.reverse_velocity

        # Left-forward diagonal
        elif self.current_direction == "left":
            if front_distance < self.avoid_threshold or left_front_distance < self.avoid_threshold:
                twist.linear.x = self.forward_velocity
                twist.angular.z = -self.angular_velocity  # turn away
            else:
                twist.linear.x = self.forward_velocity
                twist.angular.z = self.diagonal_turn_speed

        # Right-forward diagonal
        elif self.current_direction == "right":
            if front_distance < self.avoid_threshold or right_front_distance < self.avoid_threshold:
                twist.linear.x = self.forward_velocity
                twist.angular.z = self.angular_velocity  # turn away
            else:
                twist.linear.x = self.forward_velocity
                twist.angular.z = -self.diagonal_turn_speed

        # Stop
        elif self.current_direction == "stop":
            twist.linear.x = 0.0
            twist.angular.z = 0.0

        self.cmd_pub.publish(twist)

    def handle_request(self, request, response):
        direction = request.direction.lower().strip()
        if direction not in VALID_DIRECTIONS:
            response.success = False
            response.message = f"Invalid direction: {direction}"
            self.get_logger().warn(response.message)
            return response

        self.current_direction = direction
        self.get_logger().info(f"Direction overridden to: {direction}")
        response.success = True
        response.message = f"Direction set to {direction}"
        return response


def main(args=None):
    rclpy.init(args=args)
    node = DirectionAutopilotNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()
