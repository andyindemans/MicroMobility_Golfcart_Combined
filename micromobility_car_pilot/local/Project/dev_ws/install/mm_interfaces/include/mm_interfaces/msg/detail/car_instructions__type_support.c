// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from mm_interfaces:msg/CarInstructions.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "mm_interfaces/msg/detail/car_instructions__rosidl_typesupport_introspection_c.h"
#include "mm_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "mm_interfaces/msg/detail/car_instructions__functions.h"
#include "mm_interfaces/msg/detail/car_instructions__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void CarInstructions__rosidl_typesupport_introspection_c__CarInstructions_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mm_interfaces__msg__CarInstructions__init(message_memory);
}

void CarInstructions__rosidl_typesupport_introspection_c__CarInstructions_fini_function(void * message_memory)
{
  mm_interfaces__msg__CarInstructions__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember CarInstructions__rosidl_typesupport_introspection_c__CarInstructions_message_member_array[8] = {
  {
    "steering",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mm_interfaces__msg__CarInstructions, steering),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "steering_range",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(mm_interfaces__msg__CarInstructions, steering_range),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "throttle",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mm_interfaces__msg__CarInstructions, throttle),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "throttle_range",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(mm_interfaces__msg__CarInstructions, throttle_range),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "angle",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mm_interfaces__msg__CarInstructions, angle),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "angle_range",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(mm_interfaces__msg__CarInstructions, angle_range),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "distance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mm_interfaces__msg__CarInstructions, distance),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "distance_range",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(mm_interfaces__msg__CarInstructions, distance_range),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers CarInstructions__rosidl_typesupport_introspection_c__CarInstructions_message_members = {
  "mm_interfaces__msg",  // message namespace
  "CarInstructions",  // message name
  8,  // number of fields
  sizeof(mm_interfaces__msg__CarInstructions),
  CarInstructions__rosidl_typesupport_introspection_c__CarInstructions_message_member_array,  // message members
  CarInstructions__rosidl_typesupport_introspection_c__CarInstructions_init_function,  // function to initialize message memory (memory has to be allocated)
  CarInstructions__rosidl_typesupport_introspection_c__CarInstructions_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t CarInstructions__rosidl_typesupport_introspection_c__CarInstructions_message_type_support_handle = {
  0,
  &CarInstructions__rosidl_typesupport_introspection_c__CarInstructions_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mm_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mm_interfaces, msg, CarInstructions)() {
  if (!CarInstructions__rosidl_typesupport_introspection_c__CarInstructions_message_type_support_handle.typesupport_identifier) {
    CarInstructions__rosidl_typesupport_introspection_c__CarInstructions_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &CarInstructions__rosidl_typesupport_introspection_c__CarInstructions_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
