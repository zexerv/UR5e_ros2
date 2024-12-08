#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "transmission_interface::transmission_interface" for configuration "Release"
set_property(TARGET transmission_interface::transmission_interface APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(transmission_interface::transmission_interface PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libtransmission_interface.so"
  IMPORTED_SONAME_RELEASE "libtransmission_interface.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS transmission_interface::transmission_interface )
list(APPEND _IMPORT_CHECK_FILES_FOR_transmission_interface::transmission_interface "${_IMPORT_PREFIX}/lib/libtransmission_interface.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)