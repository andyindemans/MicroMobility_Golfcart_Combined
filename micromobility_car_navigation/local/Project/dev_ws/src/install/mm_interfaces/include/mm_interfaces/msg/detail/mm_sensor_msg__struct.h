// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mm_interfaces:msg/MmSensorMsg.idl
// generated code does not contain a copyright notice

#ifndef MM_INTERFACES__MSG__DETAIL__MM_SENSOR_MSG__STRUCT_H_
#define MM_INTERFACES__MSG__DETAIL__MM_SENSOR_MSG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'image'
// Member 'depth_image'
#include "sensor_msgs/msg/detail/image__struct.h"
// Member 'error_sensors'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/MmSensorMsg in the package mm_interfaces.
typedef struct mm_interfaces__msg__MmSensorMsg
{
  double steer;
  int64_t gas;
  int64_t brake;
  sensor_msgs__msg__Image image;
  sensor_msgs__msg__Image depth_image;
  rosidl_runtime_c__String__Sequence error_sensors;
} mm_interfaces__msg__MmSensorMsg;

// Struct for a sequence of mm_interfaces__msg__MmSensorMsg.
typedef struct mm_interfaces__msg__MmSensorMsg__Sequence
{
  mm_interfaces__msg__MmSensorMsg * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mm_interfaces__msg__MmSensorMsg__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MM_INTERFACES__MSG__DETAIL__MM_SENSOR_MSG__STRUCT_H_
