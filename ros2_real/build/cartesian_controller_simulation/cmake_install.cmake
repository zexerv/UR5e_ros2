# Install script for directory: /home/kadi/UR5e_ros2/ros2_real/src/cartesian_controllers/cartesian_controller_simulation

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/kadi/UR5e_ros2/ros2_real/install/cartesian_controller_simulation")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/objdump")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cartesian_controller_simulation" TYPE FILE FILES "/home/kadi/UR5e_ros2/ros2_real/src/cartesian_controllers/cartesian_controller_simulation/cartesian_controller_simulation.xml")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE DIRECTORY FILES "/home/kadi/UR5e_ros2/ros2_real/src/cartesian_controllers/cartesian_controller_simulation/include/")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cartesian_controller_simulation" TYPE DIRECTORY FILES
    "/home/kadi/UR5e_ros2/ros2_real/src/cartesian_controllers/cartesian_controller_simulation/config"
    "/home/kadi/UR5e_ros2/ros2_real/src/cartesian_controllers/cartesian_controller_simulation/etc"
    "/home/kadi/UR5e_ros2/ros2_real/src/cartesian_controllers/cartesian_controller_simulation/launch"
    "/home/kadi/UR5e_ros2/ros2_real/src/cartesian_controllers/cartesian_controller_simulation/urdf"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcartesian_controller_simulation.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcartesian_controller_simulation.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcartesian_controller_simulation.so"
         RPATH "/home/kadi/UR5e_ros2/ros2_real/install/cartesian_controller_simulation/lib:/home/kadi/UR5e_ros2/ros2_real/install/hardware_interface/lib:/home/kadi/UR5e_ros2/ros2_real/install/controller_interface/lib:/home/kadi/UR5e_ros2/ros2_real/install/control_msgs/lib:/opt/ros/iron/lib:/opt/ros/iron/lib/x86_64-linux-gnu:/home/kadi/UR5e_ros2/ros2_real/install/cartesian_controller_base/lib:/home/kadi/UR5e_ros2/mujoco-3.0.0/lib")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/kadi/UR5e_ros2/ros2_real/build/cartesian_controller_simulation/libcartesian_controller_simulation.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcartesian_controller_simulation.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcartesian_controller_simulation.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcartesian_controller_simulation.so"
         OLD_RPATH "/home/kadi/UR5e_ros2/ros2_real/install/hardware_interface/lib:/home/kadi/UR5e_ros2/ros2_real/install/controller_interface/lib:/home/kadi/UR5e_ros2/ros2_real/install/control_msgs/lib:/opt/ros/iron/lib:/opt/ros/iron/lib/x86_64-linux-gnu:/home/kadi/UR5e_ros2/ros2_real/install/cartesian_controller_base/lib:/home/kadi/UR5e_ros2/ros2_real/build/cartesian_controller_simulation:/home/kadi/UR5e_ros2/mujoco-3.0.0/lib::::::"
         NEW_RPATH "/home/kadi/UR5e_ros2/ros2_real/install/cartesian_controller_simulation/lib:/home/kadi/UR5e_ros2/ros2_real/install/hardware_interface/lib:/home/kadi/UR5e_ros2/ros2_real/install/controller_interface/lib:/home/kadi/UR5e_ros2/ros2_real/install/control_msgs/lib:/opt/ros/iron/lib:/opt/ros/iron/lib/x86_64-linux-gnu:/home/kadi/UR5e_ros2/ros2_real/install/cartesian_controller_base/lib:/home/kadi/UR5e_ros2/mujoco-3.0.0/lib")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcartesian_controller_simulation.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmujoco_simulator.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmujoco_simulator.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmujoco_simulator.so"
         RPATH "/home/kadi/UR5e_ros2/ros2_real/install/cartesian_controller_simulation/lib:/home/kadi/UR5e_ros2/mujoco-3.0.0/lib")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/kadi/UR5e_ros2/ros2_real/build/cartesian_controller_simulation/libmujoco_simulator.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmujoco_simulator.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmujoco_simulator.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmujoco_simulator.so"
         OLD_RPATH "/home/kadi/UR5e_ros2/mujoco-3.0.0/lib:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::"
         NEW_RPATH "/home/kadi/UR5e_ros2/ros2_real/install/cartesian_controller_simulation/lib:/home/kadi/UR5e_ros2/mujoco-3.0.0/lib")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmujoco_simulator.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/package_run_dependencies" TYPE FILE FILES "/home/kadi/UR5e_ros2/ros2_real/build/cartesian_controller_simulation/ament_cmake_index/share/ament_index/resource_index/package_run_dependencies/cartesian_controller_simulation")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/parent_prefix_path" TYPE FILE FILES "/home/kadi/UR5e_ros2/ros2_real/build/cartesian_controller_simulation/ament_cmake_index/share/ament_index/resource_index/parent_prefix_path/cartesian_controller_simulation")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cartesian_controller_simulation/environment" TYPE FILE FILES "/opt/ros/iron/share/ament_cmake_core/cmake/environment_hooks/environment/ament_prefix_path.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cartesian_controller_simulation/environment" TYPE FILE FILES "/home/kadi/UR5e_ros2/ros2_real/build/cartesian_controller_simulation/ament_cmake_environment_hooks/ament_prefix_path.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cartesian_controller_simulation/environment" TYPE FILE FILES "/opt/ros/iron/share/ament_cmake_core/cmake/environment_hooks/environment/path.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cartesian_controller_simulation/environment" TYPE FILE FILES "/home/kadi/UR5e_ros2/ros2_real/build/cartesian_controller_simulation/ament_cmake_environment_hooks/path.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cartesian_controller_simulation" TYPE FILE FILES "/home/kadi/UR5e_ros2/ros2_real/build/cartesian_controller_simulation/ament_cmake_environment_hooks/local_setup.bash")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cartesian_controller_simulation" TYPE FILE FILES "/home/kadi/UR5e_ros2/ros2_real/build/cartesian_controller_simulation/ament_cmake_environment_hooks/local_setup.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cartesian_controller_simulation" TYPE FILE FILES "/home/kadi/UR5e_ros2/ros2_real/build/cartesian_controller_simulation/ament_cmake_environment_hooks/local_setup.zsh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cartesian_controller_simulation" TYPE FILE FILES "/home/kadi/UR5e_ros2/ros2_real/build/cartesian_controller_simulation/ament_cmake_environment_hooks/local_setup.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cartesian_controller_simulation" TYPE FILE FILES "/home/kadi/UR5e_ros2/ros2_real/build/cartesian_controller_simulation/ament_cmake_environment_hooks/package.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/packages" TYPE FILE FILES "/home/kadi/UR5e_ros2/ros2_real/build/cartesian_controller_simulation/ament_cmake_index/share/ament_index/resource_index/packages/cartesian_controller_simulation")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/hardware_interface__pluginlib__plugin" TYPE FILE FILES "/home/kadi/UR5e_ros2/ros2_real/build/cartesian_controller_simulation/ament_cmake_index/share/ament_index/resource_index/hardware_interface__pluginlib__plugin/cartesian_controller_simulation")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cartesian_controller_simulation/cmake" TYPE FILE FILES
    "/home/kadi/UR5e_ros2/ros2_real/build/cartesian_controller_simulation/ament_cmake_core/cartesian_controller_simulationConfig.cmake"
    "/home/kadi/UR5e_ros2/ros2_real/build/cartesian_controller_simulation/ament_cmake_core/cartesian_controller_simulationConfig-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cartesian_controller_simulation" TYPE FILE FILES "/home/kadi/UR5e_ros2/ros2_real/src/cartesian_controllers/cartesian_controller_simulation/package.xml")
endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/kadi/UR5e_ros2/ros2_real/build/cartesian_controller_simulation/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
