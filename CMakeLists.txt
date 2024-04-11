cmake_minimum_required(VERSION 3.8)
project(ros2_pkg_template_cpp)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# Find 3rdparty packages
include(3rdparty/3rdparty.cmake)

# Include directories
include_directories(include)

# Find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)

# Set dependencies
set(dependencies
  rclcpp
)

# Add libraries
add_library(template_core src/node_template.cpp)
ament_target_dependencies(template_core ${dependencies})
target_link_libraries(template_core ${3rdparty_libs})

# Add plugins

# Add executables
add_executable(template src/main_template.cpp)
ament_target_dependencies(template ${dependencies})
target_link_libraries(template template_core)

# Install
install(TARGETS
  template
  template_core
  ARCHIVE DESTINATION lib
  LIBRARY DESTINATION lib
  RUNTIME DESTINATION lib/${PROJECT_NAME}
)
install(DIRECTORY
  include/${PROJECT_NAME}
  DESTINATION include/${PROJECT_NAME}
)
install(DIRECTORY
  launch
  param
  DESTINATION share/${PROJECT_NAME}
)

# Test
if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  set(ament_cmake_copyright_FOUND TRUE)
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
  find_package(ament_cmake_gtest REQUIRED)
endif()

# Export
ament_export_include_directories(include/${PROJECT_NAME})
ament_export_libraries(template_core)
ament_export_dependencies(${dependencies})

ament_package()
