#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "joint_trajectory_controller::joint_trajectory_controller" for configuration "Release"
set_property(TARGET joint_trajectory_controller::joint_trajectory_controller APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(joint_trajectory_controller::joint_trajectory_controller PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libjoint_trajectory_controller.so"
  IMPORTED_SONAME_RELEASE "libjoint_trajectory_controller.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS joint_trajectory_controller::joint_trajectory_controller )
list(APPEND _IMPORT_CHECK_FILES_FOR_joint_trajectory_controller::joint_trajectory_controller "${_IMPORT_PREFIX}/lib/libjoint_trajectory_controller.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
