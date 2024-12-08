# CMake generated Testfile for 
# Source directory: /home/kadi/UR5e_ros2/ros2_real/src/ros2_controllers/bicycle_steering_controller
# Build directory: /home/kadi/UR5e_ros2/ros2_real/build/bicycle_steering_controller
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(test_load_bicycle_steering_controller "/usr/bin/python3.10" "-u" "/opt/ros/iron/share/ament_cmake_test/cmake/run_test.py" "/home/kadi/UR5e_ros2/ros2_real/build/bicycle_steering_controller/test_results/bicycle_steering_controller/test_load_bicycle_steering_controller.gtest.xml" "--package-name" "bicycle_steering_controller" "--output-file" "/home/kadi/UR5e_ros2/ros2_real/build/bicycle_steering_controller/test_results/bicycle_steering_controller/test_load_bicycle_steering_controller.txt" "--command" "/home/kadi/UR5e_ros2/ros2_real/build/bicycle_steering_controller/test_load_bicycle_steering_controller" "--ros-args" "--params-file" "/home/kadi/UR5e_ros2/ros2_real/src/ros2_controllers/bicycle_steering_controller/test/bicycle_steering_controller_params.yaml" "--" "--gtest_output=xml:/home/kadi/UR5e_ros2/ros2_real/build/bicycle_steering_controller/test_results/bicycle_steering_controller/test_load_bicycle_steering_controller.gtest.xml")
set_tests_properties(test_load_bicycle_steering_controller PROPERTIES  TIMEOUT "60" WORKING_DIRECTORY "/home/kadi/UR5e_ros2/ros2_real/build/bicycle_steering_controller" _BACKTRACE_TRIPLES "/opt/ros/iron/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/iron/share/generate_parameter_library/cmake/generate_parameter_library.cmake;161;ament_add_test;/home/kadi/UR5e_ros2/ros2_real/src/ros2_controllers/bicycle_steering_controller/CMakeLists.txt;57;add_rostest_with_parameters_gmock;/home/kadi/UR5e_ros2/ros2_real/src/ros2_controllers/bicycle_steering_controller/CMakeLists.txt;0;")
add_test(test_bicycle_steering_controller "/usr/bin/python3.10" "-u" "/opt/ros/iron/share/ament_cmake_test/cmake/run_test.py" "/home/kadi/UR5e_ros2/ros2_real/build/bicycle_steering_controller/test_results/bicycle_steering_controller/test_bicycle_steering_controller.gtest.xml" "--package-name" "bicycle_steering_controller" "--output-file" "/home/kadi/UR5e_ros2/ros2_real/build/bicycle_steering_controller/test_results/bicycle_steering_controller/test_bicycle_steering_controller.txt" "--command" "/home/kadi/UR5e_ros2/ros2_real/build/bicycle_steering_controller/test_bicycle_steering_controller" "--ros-args" "--params-file" "/home/kadi/UR5e_ros2/ros2_real/src/ros2_controllers/bicycle_steering_controller/test/bicycle_steering_controller_params.yaml" "--" "--gtest_output=xml:/home/kadi/UR5e_ros2/ros2_real/build/bicycle_steering_controller/test_results/bicycle_steering_controller/test_bicycle_steering_controller.gtest.xml")
set_tests_properties(test_bicycle_steering_controller PROPERTIES  TIMEOUT "60" WORKING_DIRECTORY "/home/kadi/UR5e_ros2/ros2_real/build/bicycle_steering_controller" _BACKTRACE_TRIPLES "/opt/ros/iron/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/iron/share/generate_parameter_library/cmake/generate_parameter_library.cmake;161;ament_add_test;/home/kadi/UR5e_ros2/ros2_real/src/ros2_controllers/bicycle_steering_controller/CMakeLists.txt;67;add_rostest_with_parameters_gmock;/home/kadi/UR5e_ros2/ros2_real/src/ros2_controllers/bicycle_steering_controller/CMakeLists.txt;0;")
add_test(test_bicycle_steering_controller_preceeding "/usr/bin/python3.10" "-u" "/opt/ros/iron/share/ament_cmake_test/cmake/run_test.py" "/home/kadi/UR5e_ros2/ros2_real/build/bicycle_steering_controller/test_results/bicycle_steering_controller/test_bicycle_steering_controller_preceeding.gtest.xml" "--package-name" "bicycle_steering_controller" "--output-file" "/home/kadi/UR5e_ros2/ros2_real/build/bicycle_steering_controller/test_results/bicycle_steering_controller/test_bicycle_steering_controller_preceeding.txt" "--command" "/home/kadi/UR5e_ros2/ros2_real/build/bicycle_steering_controller/test_bicycle_steering_controller_preceeding" "--ros-args" "--params-file" "/home/kadi/UR5e_ros2/ros2_real/src/ros2_controllers/bicycle_steering_controller/test/bicycle_steering_controller_preceeding_params.yaml" "--" "--gtest_output=xml:/home/kadi/UR5e_ros2/ros2_real/build/bicycle_steering_controller/test_results/bicycle_steering_controller/test_bicycle_steering_controller_preceeding.gtest.xml")
set_tests_properties(test_bicycle_steering_controller_preceeding PROPERTIES  TIMEOUT "60" WORKING_DIRECTORY "/home/kadi/UR5e_ros2/ros2_real/build/bicycle_steering_controller" _BACKTRACE_TRIPLES "/opt/ros/iron/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/iron/share/generate_parameter_library/cmake/generate_parameter_library.cmake;161;ament_add_test;/home/kadi/UR5e_ros2/ros2_real/src/ros2_controllers/bicycle_steering_controller/CMakeLists.txt;78;add_rostest_with_parameters_gmock;/home/kadi/UR5e_ros2/ros2_real/src/ros2_controllers/bicycle_steering_controller/CMakeLists.txt;0;")
subdirs("gmock")
subdirs("gtest")
