// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mm_interfaces:srv/Pathfinding.idl
// generated code does not contain a copyright notice

#ifndef MM_INTERFACES__SRV__DETAIL__PATHFINDING__STRUCT_H_
#define MM_INTERFACES__SRV__DETAIL__PATHFINDING__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/Pathfinding in the package mm_interfaces.
typedef struct mm_interfaces__srv__Pathfinding_Request
{
  double current_long;
  double current_lat;
  int64_t end_node_id;
} mm_interfaces__srv__Pathfinding_Request;

// Struct for a sequence of mm_interfaces__srv__Pathfinding_Request.
typedef struct mm_interfaces__srv__Pathfinding_Request__Sequence
{
  mm_interfaces__srv__Pathfinding_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mm_interfaces__srv__Pathfinding_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'path'
#include "mm_interfaces/msg/detail/coordinate_msg__struct.h"

// Struct defined in srv/Pathfinding in the package mm_interfaces.
typedef struct mm_interfaces__srv__Pathfinding_Response
{
  mm_interfaces__msg__CoordinateMsg__Sequence path;
} mm_interfaces__srv__Pathfinding_Response;

// Struct for a sequence of mm_interfaces__srv__Pathfinding_Response.
typedef struct mm_interfaces__srv__Pathfinding_Response__Sequence
{
  mm_interfaces__srv__Pathfinding_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mm_interfaces__srv__Pathfinding_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MM_INTERFACES__SRV__DETAIL__PATHFINDING__STRUCT_H_
