import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/root/workspaces/turtlebot_operation_norasheikhly/install/obstacle_controller'
