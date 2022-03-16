// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from mm_interfaces:msg/CoordinateMsg.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "mm_interfaces/msg/detail/coordinate_msg__rosidl_typesupport_introspection_c.h"
#include "mm_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "mm_interfaces/msg/detail/coordinate_msg__functions.h"
#include "mm_interfaces/msg/detail/coordinate_msg__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void CoordinateMsg__rosidl_typesupport_introspection_c__CoordinateMsg_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mm_interfaces__msg__CoordinateMsg__init(message_memory);
}

void CoordinateMsg__rosidl_typesupport_introspection_c__CoordinateMsg_fini_function(void * message_memory)
{
  mm_interfaces__msg__CoordinateMsg__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember CoordinateMsg__rosidl_typesupport_introspection_c__CoordinateMsg_message_member_array[4] = {
  {
    "latitude",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mm_interfaces__msg__CoordinateMsg, latitude),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "longitude",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mm_interfaces__msg__CoordinateMsg, longitude),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "heading",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mm_interfaces__msg__CoordinateMsg, heading),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mm_interfaces__msg__CoordinateMsg, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers CoordinateMsg__rosidl_typesupport_introspection_c__CoordinateMsg_message_members = {
  "mm_interfaces__msg",  // message namespace
  "CoordinateMsg",  // message name
  4,  // number of fields
  sizeof(mm_interfaces__msg__CoordinateMsg),
  CoordinateMsg__rosidl_typesupport_introspection_c__CoordinateMsg_message_member_array,  // message members
  CoordinateMsg__rosidl_typesupport_introspection_c__CoordinateMsg_init_function,  // function to initialize message memory (memory has to be allocated)
  CoordinateMsg__rosidl_typesupport_introspection_c__CoordinateMsg_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t CoordinateMsg__rosidl_typesupport_introspection_c__CoordinateMsg_message_type_support_handle = {
  0,
  &CoordinateMsg__rosidl_typesupport_introspection_c__CoordinateMsg_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mm_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mm_interfaces, msg, CoordinateMsg)() {
  if (!CoordinateMsg__rosidl_typesupport_introspection_c__CoordinateMsg_message_type_support_handle.typesupport_identifier) {
    CoordinateMsg__rosidl_typesupport_introspection_c__CoordinateMsg_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &CoordinateMsg__rosidl_typesupport_introspection_c__CoordinateMsg_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
