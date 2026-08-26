# generated from rosidl_cmake/cmake/rosidl_cmake_aggregate_target-extras.cmake.in

# Create a convenience aggregate target obstacle_interfaces::obstacle_interfaces
# that links all generated interface targets, so downstream packages can use
# a single modern CMake target name instead of ${obstacle_interfaces_TARGETS}.
if(obstacle_interfaces_TARGETS AND NOT TARGET obstacle_interfaces::obstacle_interfaces)
  add_library(obstacle_interfaces::obstacle_interfaces INTERFACE IMPORTED)
  set_target_properties(obstacle_interfaces::obstacle_interfaces PROPERTIES
    INTERFACE_LINK_LIBRARIES "${obstacle_interfaces_TARGETS}")
endif()
