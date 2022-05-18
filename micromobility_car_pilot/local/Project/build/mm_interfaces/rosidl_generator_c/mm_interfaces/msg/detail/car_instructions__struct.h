// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mm_interfaces:msg/CarInstructions.idl
// generated code does not contain a copyright notice

#ifndef MM_INTERFACES__MSG__DETAIL__CAR_INSTRUCTIONS__STRUCT_H_
#define MM_INTERFACES__MSG__DETAIL__CAR_INSTRUCTIONS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/CarInstructions in the package mm_interfaces.
typedef struct mm_interfaces__msg__CarInstructions
{
  float steering;
  float steering_range[2];
  int32_t throttle;
  int32_t throttle_range[2];
  float angle;
  float angle_range[2];
} mm_interfaces__msg__CarInstructions;

// Struct for a sequence of mm_interfaces__msg__CarInstructions.
typedef struct mm_interfaces__msg__CarInstructions__Sequence
{
  mm_interfaces__msg__CarInstructions * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mm_interfaces__msg__CarInstructions__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MM_INTERFACES__MSG__DETAIL__CAR_INSTRUCTIONS__STRUCT_H_
