
cmake_minimum_required(VERSION 3.5)
project(mm_interfaces)

# Default to C99
if(NOT CMAKE_C_STANDARD)
  set(CMAKE_C_STANDARD 99)
endif()

# Default to C++14
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

find_package(ament_cmake REQUIRED)
find_package(builtin_interfaces REQUIRED)
find_package(rosidl_default_generators REQUIRED)
find_package(sensor_msgs REQUIRED)

rosidl_generate_interfaces(mm_interfaces
  "msg/MmSensorMsg.msg"
  "msg/Float.msg"
  "msg/Int.msg"
  "msg/CameraImage.msg"
  DEPENDENCIES builtin_interfaces sensor_msgs
)

ament_package()