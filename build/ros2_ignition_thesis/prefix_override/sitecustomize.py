import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/moonlab/ros2_ws/install/ros2_ignition_thesis'
