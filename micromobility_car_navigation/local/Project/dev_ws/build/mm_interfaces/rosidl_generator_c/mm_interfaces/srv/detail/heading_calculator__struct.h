// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mm_interfaces:srv/HeadingCalculator.idl
// generated code does not contain a copyright notice

#ifndef MM_INTERFACES__SRV__DETAIL__HEADING_CALCULATOR__STRUCT_H_
#define MM_INTERFACES__SRV__DETAIL__HEADING_CALCULATOR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/HeadingCalculator in the package mm_interfaces.
typedef struct mm_interfaces__srv__HeadingCalculator_Request
{
  double cart_bearing;
  double cart_lat;
  double cart_long;
  double next_node_lat;
  double next_node_long;
} mm_interfaces__srv__HeadingCalculator_Request;

// Struct for a sequence of mm_interfaces__srv__HeadingCalculator_Request.
typedef struct mm_interfaces__srv__HeadingCalculator_Request__Sequence
{
  mm_interfaces__srv__HeadingCalculator_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mm_interfaces__srv__HeadingCalculator_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/HeadingCalculator in the package mm_interfaces.
typedef struct mm_interfaces__srv__HeadingCalculator_Response
{
  double turn_value;
} mm_interfaces__srv__HeadingCalculator_Response;

// Struct for a sequence of mm_interfaces__srv__HeadingCalculator_Response.
typedef struct mm_interfaces__srv__HeadingCalculator_Response__Sequence
{
  mm_interfaces__srv__HeadingCalculator_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mm_interfaces__srv__HeadingCalculator_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MM_INTERFACES__SRV__DETAIL__HEADING_CALCULATOR__STRUCT_H_
