Turtlebot-controller-nora-elsheikhly Overview: 

This project implement a ROS 2 turtlebot controller using python The project uses 2 ROS2 nodes:

1. CmdVelPublisher: receives board commands and publishes velocity commands to /cmd_vel
2. CmdVelSubscriber: subscribes to /cmd_vel and displaye the received linear and angular velocities. 

The project was developed and tested in a ROS2 workspace using turtlebot3/gazebo simulation environment

using the Shell (terminal window)
1. Creating and preparing the workspace and packages: 
   check the current directory location: pwd 
   create the directory: mkdir turtlebot-controller-nora-elsheikhly 
   cd turtlebot-controller-nora-elsheikhly # now i'm in the directory created. to check: i use pwd
   mkdir -p turtlebot-controller-nora-elsheikhly/src #to create missing directories
   ls # now i have src directory (we create the package here), we will build the ROS 2 to prepare the code to be found and executed
   from inside the created workspace folder
   cd~/workspaces/turtlebot-controller-nora-elsheikhly
   colcon build
   ls # we will see build install log src
   source install/setup.bash #to recognize the package inside the ws
2. preparing packages:
   in src create a package:
   ros2 pkg create --build-type ament_python turtlebot_controller
   now i have turtlebot_controller inside src which will use in creating the codes and nodes
   now inside src: turtlebot_controller resorce test package.xml setup.cfg setup.py (automatically generated)
   
   now inside the created ws build and source to make sure ros 2 can find the package created

3. create a publisher node
   listens to velocity commands on topic:/cmd_vel
   publish the message to the /cmd_vel so the robot move
   it uses linear.x (forward/backword) and angular.z (turns left/right) input
   
   inside turtlebot-controller-nora-elsheikhly
   verify: topic /cmd_vel
           message type: geometry_msgs/msg/Twist
   inspect the type: ros2 interface show geometry_msgs/msg/Twist

   cd src then cd turtlebot_controller then cd turtlebot_controller we have __init__.py which is a python code for publisher node
   create by using touch
   touch cmd_vel_publisher.py
   open in VS code to copy the code (i amend this code to control the robot by w a s d q and i also gave duration so it will not keep doing the move forever or hit a wall)

   the code:

import rclpy #to create and run ros2 node
from rclpy.node import Node #to create a class
from geometry_msgs.msg import Twist #import the message type used by /cmd_vel it uses type Twist


class CmdVelPublisher(Node):

    def __init__(self):
        super().__init__('cmd_vel_publisher')
        #create a publisher given:
        self.publisher_ = self.create_publisher(
            Twist, #message type
            '/cmd_vel', #topic name
            10 #queue size
        )

        #self timer to stop the robot after few seconds so it will not keep moving and hit the wall
        self.timer = None

        self.get_logger().info('Cmd Vel Publisher started. Use W/A/S/D to move, Q to stop and exit')

    # Publish as per keys selection and duration
    def publish_command(self, key): #define the publish command
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
        #robot stops in (duration) seconds
        self.timer = self.create_timer(duration,self.stop_robot)
        return True

    def stop_robot(self): #define the stop_robot 

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


Update Setup.py: to define the executable name of the node, this step will also be done at the subscriber node step
  open setup.py from (workspaces/turtlebot-controller-nora-elsheikhly/src/turtlebot_controller)
  open in VS code and add
 
  entry_points={
    'console_scripts': [
        'cmd_vel_publisher = turtlebot_controller.cmd_vel_publisher:main',
    ],
},

update package.xml this will be done once we need to list rclpy (using python) and geometry_msgs (Twist msg) as dependencies because the node uses them:
open package.xml in vs code and add after <export>

<exec_depend>rclpy</exec_depend>
<exec_depend>geometry_msgs</exec_depend>

build the package colcon build --packages-select turtlebot_controller
source the package source install/setup.bash
run the publisher ros2 run turtlebot_controller cmd_vel_publisher
open 3D simulator to view the robot moving after giving the command
it will look like this in the terminal and the robot will do few turns to the right 
Enter command (W/A/S/D or Q to quit): d
[INFO] [1787137858.680260010] [cmd_vel_publisher]: D: Turning Right
[INFO] [1787137865.681409341] [cmd_vel_publisher]: Next Command

every time the x and z changed in the VS code we have to build source and run again

4. create subscriber node
go to:
cd ~/workspaces/turtlebot-controller-nora-elsheikhly/src/turtlebot_controller/turtlebot_controller
list file ls ( __init__.py  cmd_vel_publisher.py)
add new file:
touch cmd_vel_subscriber.py
open in VS code coopy the following code inside the file 

the code:
import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist


class CmdVelSubscriber(Node):
    def __init__(self):
        super().__init__('cmd_vel_subscriber')
       #create the subscriber
        self.subscription = self.create_subscription(
            Twist, #type
            '/cmd_vel', #topic
            self.cmd_vel_callback, # callback with the msg arrive
            10 #queue size
        )

        self.get_logger().info('Cmd Vel Subscriber Node has started.')

    def cmd_vel_callback(self, msg): #callback function
        self.get_logger().info(
            f'Received: linear.x={msg.linear.x}, angular.z={msg.angular.z}'
        )


def main(args=None):
    rclpy.init(args=args)

    node = CmdVelSubscriber()

    rclpy.spin(node)

    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()

update setup.py 
in workspaces/my_roboturtlebot-controller-nora-elsheikhly/src/turtlebot_controller
open setup.py and add to the VS code so the ros2 will execute the main function inside cmd_vel_subscriber

entry_points={
    'console_scripts': [
        'cmd_vel_publisher = turtlebot_controller.cmd_vel_publisher:main',
        'cmd_vel_subscriber = turtlebot_controller.cmd_vel_subscriber:main',
    ],
},

no update for package.xml we already did the prev node

build colcon build --packages-select turtlebot_controller
source source install/setup.bash
run  ros2 run turtlebot_controller cmd_vel_publisher

open new terminal:
source: source ~/workspaces/turtlebot-controller-nora-elsheikhly/install/setup.bash
run: ros2 run turtlebot_controller cmd_vel_subscriber

will get this:
[INFO] [1787136029.634665110] [cmd_vel_subscriber]: Cmd Vel Subscriber Node has started.

everytime i change my command in the terminal we run the publisher i start getting the x and z in this terminal inaddition to the movemnt of the robot in the 3D simulation

command W
[INFO] [1787136799.804232681] [cmd_vel_subscriber]: Received: linear.x=0.2, angular.z=0.0
this shows because i'm stopping him in specific duration
[INFO] [1787136809.804666566] [cmd_vel_subscriber]: Received: linear.x=0.0, angular.z=0.0

command a turn left
[INFO] [1787137094.013820314] [cmd_vel_subscriber]: Received: linear.x=0.0, angular.z=0.5
[INFO] [1787137101.014689770] [cmd_vel_subscriber]: Received: linear.x=0.0, angular.z=0.0

command d turn right
[INFO] [1787137858.681259093] [cmd_vel_subscriber]: Received: linear.x=0.0, angular.z=-0.5
[INFO] [1787137865.681760681] [cmd_vel_subscriber]: Received: linear.x=0.0, angular.z=0.0

command s move backward
[INFO] [1787137871.248958605] [cmd_vel_subscriber]: Received: linear.x=-0.2, angular.z=0.0
[INFO] [1787137881.248786296] [cmd_vel_subscriber]: Received: linear.x=0.0, angular.z=0.0

command q stop and exit
[INFO] [1787145360.885724946] [cmd_vel_subscriber]: Received: linear.x=0.0, angular.z=0.0

i also used 
ros2 node list  to check if my nodes are running
and i used
ros2 node info /cmd_vel_subscriber  to check that both nodes connected to the topic /cmd_vel
then i wanted to check if my publisher is sending the commands so i used
ros2 topic echo /cmd_vel









