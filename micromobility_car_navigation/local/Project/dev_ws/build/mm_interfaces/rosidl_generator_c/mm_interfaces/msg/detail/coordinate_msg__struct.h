// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mm_interfaces:msg/CoordinateMsg.idl
// generated code does not contain a copyright notice

#ifndef MM_INTERFACES__MSG__DETAIL__COORDINATE_MSG__STRUCT_H_
#define MM_INTERFACES__MSG__DETAIL__COORDINATE_MSG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/CoordinateMsg in the package mm_interfaces.
typedef struct mm_interfaces__msg__CoordinateMsg
{
  double latitude;
  double longitude;
  double heading;
  int64_t id;
} mm_interfaces__msg__CoordinateMsg;

// Struct for a sequence of mm_interfaces__msg__CoordinateMsg.
typedef struct mm_interfaces__msg__CoordinateMsg__Sequence
{
  mm_interfaces__msg__CoordinateMsg * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mm_interfaces__msg__CoordinateMsg__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MM_INTERFACES__MSG__DETAIL__COORDINATE_MSG__STRUCT_H_
