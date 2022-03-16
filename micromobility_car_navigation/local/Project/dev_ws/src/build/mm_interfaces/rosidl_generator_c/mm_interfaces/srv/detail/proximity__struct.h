// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mm_interfaces:srv/Proximity.idl
// generated code does not contain a copyright notice

#ifndef MM_INTERFACES__SRV__DETAIL__PROXIMITY__STRUCT_H_
#define MM_INTERFACES__SRV__DETAIL__PROXIMITY__STRUCT_H_

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
// Member 'next_node'
#include "mm_interfaces/msg/detail/coordinate_msg__struct.h"

// Struct defined in srv/Proximity in the package mm_interfaces.
typedef struct mm_interfaces__srv__Proximity_Request
{
  mm_interfaces__msg__CoordinateMsg current_position;
  mm_interfaces__msg__CoordinateMsg next_node;
} mm_interfaces__srv__Proximity_Request;

// Struct for a sequence of mm_interfaces__srv__Proximity_Request.
typedef struct mm_interfaces__srv__Proximity_Request__Sequence
{
  mm_interfaces__srv__Proximity_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mm_interfaces__srv__Proximity_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/Proximity in the package mm_interfaces.
typedef struct mm_interfaces__srv__Proximity_Response
{
  double distance_to;
} mm_interfaces__srv__Proximity_Response;

// Struct for a sequence of mm_interfaces__srv__Proximity_Response.
typedef struct mm_interfaces__srv__Proximity_Response__Sequence
{
  mm_interfaces__srv__Proximity_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mm_interfaces__srv__Proximity_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MM_INTERFACES__SRV__DETAIL__PROXIMITY__STRUCT_H_
