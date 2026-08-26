#!/usr/bin/env python3

import math
import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
from sensor_msgs.msg import LaserScan
from obstacle_mode_interfaces.srv import SetDirection


class DirectionAutopilotNode(Node):

    def __init__(self):
        super().__init__('direction_autopilot_node')

        # Subscriber
        self.scan_subscription = self.create_subscription(
            LaserScan,
            '/scan',
            self.scan_callback,
            10
        )

        # Publisher
        self.cmd_vel_publisher = self.create_publisher(
            Twist,
            '/cmd_vel',
            10
        )

        # Service server
        self.mode_service = self.create_service(
            SetDirection,
            '/set_direction',
            self.set_direction_callback
        )

        # Parameters
        self.obstacle_distance = 0.60
        #self.free_forward_threshold = 1.00
        self.forward_speed = 0.20
        self.turn_speed = 0.80
        #self.state = 'forward'
        #self.driving_mode = 'CAUTIOUS'

        self.get_logger().info('Direction Autopilot Node Started, waiting for LiDAR data...')

    def scan_callback(self, msg: LaserScan):
        """Process LiDAR scan and compute distances using angles."""
    #Lidar Distance
        ranges = msg.ranges
        if len(ranges) == 0:
            return
    #replace invalid LiDAR values with infinity
        valid_range = []
        for distance in ranges:
            if math.isin(distance) or math.isnan(distance):
                valid_ranges.append(float('inf'))
            else:
                valid_ranges.append(distance)

        #divide LiDAR into left front right

        total_points = len(valid_ranges)
        center = total_points // 2
        #approximate sectors
        front_start = max(0, center -20)
        front_end = min(total_points, center +20)
        left_start = max(0, center +20)
        left_end = min(total_points,center +80)
        right_start = max(0, center -80)
        right_end = min(total_points,center -20)

        front_ranges = valid_ranges[front_start:front_end]
        left_ranges = valid_ranges[left_start:left_end]
        right_ranges = valid_ranges[right_start:right_end]

        #safety check
        if not front_ranges:
            return

        #minimum distance detected in each direction 

        front_distance = min(front_ranges)
        left_distance = min(left_ranges) if left_ranges else float('inf')
        right_distance = min(right_ranges) if right_ranges else float ('inf')
        #create movement command
        cmd = Twist()
        #nothing in front >> go forward
        if front_distance > self.obstacle_distance:
            cmd.linear.x = self.forward_speed
            cmd.angular.z = 0.0

            self.get_logger().info(
            f'FORWARD | Front: {front_distance:.2f}m'
        )
    #obstacle infront >decide left or right
        else:
            #stop forward movement
            cmd.linear.x = 0.0
            #if left side has more free space > turn left
            if left_distance > right_distance:
                cmd.angular.z = self.turn_speed
        self.get_logger().info(f'OBSTACLE | Turning LEFT | '
        f'Front: {front_distance: .2f} m|'
        f'Right:{right_distance: .2f} m'
        )
        else:
            cmd.angular.z = -self.turn_speed
        self.get_logger().info(f'OBSTACLE | Turning RIGHT | '
        f'Front: {front_distance: .2f} m|'
        f'Left:{left_distance: .2f} m'
        f'Right:{right_distance: .2f} m'
        )

 #publish direction command
self.cmd_vel_publisher.publish(cmd)

   

def main(args=None):
    rclpy.init(args=args)
    node = DirectionAutopilotNode()

    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        stop_cmd = Twist()
        node.cmd_vel_publisher.publish(stop_cmd)
        node.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()
