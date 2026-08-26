import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/root/workspaces/turtlebot_operation_norasheikhly/src/obstacle_controller/install/obstacle_controller'
