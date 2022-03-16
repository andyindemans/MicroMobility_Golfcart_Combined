// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mm_interfaces:msg/CurrentNextLocation.idl
// generated code does not contain a copyright notice

#ifndef MM_INTERFACES__MSG__DETAIL__CURRENT_NEXT_LOCATION__STRUCT_H_
#define MM_INTERFACES__MSG__DETAIL__CURRENT_NEXT_LOCATION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'current_position'
// Member 'next_position'
#include "mm_interfaces/msg/detail/coordinate_msg__struct.h"

// Struct defined in msg/CurrentNextLocation in the package mm_interfaces.
typedef struct mm_interfaces__msg__CurrentNextLocation
{
  mm_interfaces__msg__CoordinateMsg current_position;
  mm_interfaces__msg__CoordinateMsg next_position;
} mm_interfaces__msg__CurrentNextLocation;

// Struct for a sequence of mm_interfaces__msg__CurrentNextLocation.
typedef struct mm_interfaces__msg__CurrentNextLocation__Sequence
{
  mm_interfaces__msg__CurrentNextLocation * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mm_interfaces__msg__CurrentNextLocation__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MM_INTERFACES__MSG__DETAIL__CURRENT_NEXT_LOCATION__STRUCT_H_
