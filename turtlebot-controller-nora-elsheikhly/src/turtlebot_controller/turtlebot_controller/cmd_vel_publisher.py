import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist


class CmdVelPublisher(Node):

    def __init__(self):
        super().__init__('cmd_vel_publisher')

        self.publisher_ = self.create_publisher(
            Twist,
            '/cmd_vel',
            10
        )

        #self timer to stop the robot after few seconds so it will not keep moving and hit the wall
        self.timer = None

        self.get_logger().info('Cmd Vel Publisher started. Use W/A/S/D to move, Q to stop and exit')

    # Publish as per keys selection
    def publish_command(self, key):
        key= key.strip().lower()
        #set timer
        if self.timer is not None:
            self.timer.cancel()
            self.timer = None

        msg = Twist()
        
        if key == 'w':
            #forward
            msg.linear.x = 0.2
            msg.angular.z = 0.0
            duration = 10.0
            self.get_logger().info('W: Moving forward')
            
        elif key == 'a':
            #Turn Left
            msg.linear.x = 0.0
            msg.angular.z = 0.5
            duration = 7.0
            self.get_logger().info('A: Turning Left')
        elif key == 's':
            #Backward
            msg.linear.x = -0.2
            msg.angular.z = 0.0
            duration = 10.0
            self.get_logger().info('S: Moving Backward')
        elif key == 'd':
            #Turn Right
            msg.linear.x = 0.0
            msg.angular.z = -0.5
            duration = 7.0
            self.get_logger().info('D: Turning Right')
        elif key =='q':
            #Stop
            msg.linear.x = 0.0
            msg.angular.z = 0.0
            self.publisher_.publish(msg)
            self.get_logger().info('Q: Stop and Exit')
            return False
        else:
            self.get_logger().warn(f"Invalid key")
            return True
        
        #movement command
        self.publisher_.publish(msg)
        #robot stops in few seconds
        self.timer = self.create_timer(duration,self.stop_robot)
        return True

    def stop_robot(self):

        stop_msg = Twist()
        stop_msg.linear.x = 0.0
        stop_msg.linear.y = 0.0
        stop_msg.linear.z = 0.0

        stop_msg.angular.x = 0.0
        stop_msg.angular.y = 0.0
        stop_msg.angular.z = 0.0

        self.publisher_.publish(stop_msg)
        self.get_logger().info('Next Command')

        #cancel the timer 
        if self.timer is not None:
            self.timer.cancel()
            self.timer = None

def main(args=None):

    rclpy.init(args=args)

    node = CmdVelPublisher()

    running = True
    while running:
        key = input("Enter command (W/A/S/D or Q to quit): ")
        running = node.publish_command(key)

        #Callback/timer
        rclpy.spin_once(node,timeout_sec=10)


    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
