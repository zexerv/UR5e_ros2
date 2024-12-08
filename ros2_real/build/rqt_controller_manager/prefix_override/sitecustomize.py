import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/kadi/UR5e_ros2/ros2_real/install/rqt_controller_manager'
