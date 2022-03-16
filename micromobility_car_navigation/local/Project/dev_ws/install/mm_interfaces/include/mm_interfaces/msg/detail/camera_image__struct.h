// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mm_interfaces:msg/CameraImage.idl
// generated code does not contain a copyright notice

#ifndef MM_INTERFACES__MSG__DETAIL__CAMERA_IMAGE__STRUCT_H_
#define MM_INTERFACES__MSG__DETAIL__CAMERA_IMAGE__STRUCT_H_

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
#include "sensor_msgs/msg/detail/image__struct.h"

// Struct defined in msg/CameraImage in the package mm_interfaces.
typedef struct mm_interfaces__msg__CameraImage
{
  bool sensor_error;
  sensor_msgs__msg__Image image;
} mm_interfaces__msg__CameraImage;

// Struct for a sequence of mm_interfaces__msg__CameraImage.
typedef struct mm_interfaces__msg__CameraImage__Sequence
{
  mm_interfaces__msg__CameraImage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mm_interfaces__msg__CameraImage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MM_INTERFACES__MSG__DETAIL__CAMERA_IMAGE__STRUCT_H_
