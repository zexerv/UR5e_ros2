# CMake generated Testfile for 
# Source directory: /home/kadi/UR5e_ros2/ros2_real/src/kinematics_interface/kinematics_interface_kdl
# Build directory: /home/kadi/UR5e_ros2/ros2_real/build/kinematics_interface_kdl
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(test_kinematics_interface_kdl "/usr/bin/python3.10" "-u" "/opt/ros/iron/share/ament_cmake_test/cmake/run_test.py" "/home/kadi/UR5e_ros2/ros2_real/build/kinematics_interface_kdl/test_results/kinematics_interface_kdl/test_kinematics_interface_kdl.gtest.xml" "--package-name" "kinematics_interface_kdl" "--output-file" "/home/kadi/UR5e_ros2/ros2_real/build/kinematics_interface_kdl/ament_cmake_gmock/test_kinematics_interface_kdl.txt" "--command" "/home/kadi/UR5e_ros2/ros2_real/build/kinematics_interface_kdl/test_kinematics_interface_kdl" "--gtest_output=xml:/home/kadi/UR5e_ros2/ros2_real/build/kinematics_interface_kdl/test_results/kinematics_interface_kdl/test_kinematics_interface_kdl.gtest.xml")
set_tests_properties(test_kinematics_interface_kdl PROPERTIES  LABELS "gmock" REQUIRED_FILES "/home/kadi/UR5e_ros2/ros2_real/build/kinematics_interface_kdl/test_kinematics_interface_kdl" TIMEOUT "60" WORKING_DIRECTORY "/home/kadi/UR5e_ros2/ros2_real/build/kinematics_interface_kdl" _BACKTRACE_TRIPLES "/opt/ros/iron/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/iron/share/ament_cmake_gmock/cmake/ament_add_gmock.cmake;106;ament_add_test;/opt/ros/iron/share/ament_cmake_gmock/cmake/ament_add_gmock.cmake;52;_ament_add_gmock;/home/kadi/UR5e_ros2/ros2_real/src/kinematics_interface/kinematics_interface_kdl/CMakeLists.txt;45;ament_add_gmock;/home/kadi/UR5e_ros2/ros2_real/src/kinematics_interface/kinematics_interface_kdl/CMakeLists.txt;0;")
subdirs("gmock")
subdirs("gtest")
