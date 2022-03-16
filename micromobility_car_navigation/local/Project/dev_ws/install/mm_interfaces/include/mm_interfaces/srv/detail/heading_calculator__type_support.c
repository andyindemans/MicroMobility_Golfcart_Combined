// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from mm_interfaces:srv/HeadingCalculator.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "mm_interfaces/srv/detail/heading_calculator__rosidl_typesupport_introspection_c.h"
#include "mm_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "mm_interfaces/srv/detail/heading_calculator__functions.h"
#include "mm_interfaces/srv/detail/heading_calculator__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void HeadingCalculator_Request__rosidl_typesupport_introspection_c__HeadingCalculator_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mm_interfaces__srv__HeadingCalculator_Request__init(message_memory);
}

void HeadingCalculator_Request__rosidl_typesupport_introspection_c__HeadingCalculator_Request_fini_function(void * message_memory)
{
  mm_interfaces__srv__HeadingCalculator_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember HeadingCalculator_Request__rosidl_typesupport_introspection_c__HeadingCalculator_Request_message_member_array[5] = {
  {
    "cart_bearing",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mm_interfaces__srv__HeadingCalculator_Request, cart_bearing),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cart_lat",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mm_interfaces__srv__HeadingCalculator_Request, cart_lat),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cart_long",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mm_interfaces__srv__HeadingCalculator_Request, cart_long),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "next_node_lat",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mm_interfaces__srv__HeadingCalculator_Request, next_node_lat),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "next_node_long",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mm_interfaces__srv__HeadingCalculator_Request, next_node_long),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers HeadingCalculator_Request__rosidl_typesupport_introspection_c__HeadingCalculator_Request_message_members = {
  "mm_interfaces__srv",  // message namespace
  "HeadingCalculator_Request",  // message name
  5,  // number of fields
  sizeof(mm_interfaces__srv__HeadingCalculator_Request),
  HeadingCalculator_Request__rosidl_typesupport_introspection_c__HeadingCalculator_Request_message_member_array,  // message members
  HeadingCalculator_Request__rosidl_typesupport_introspection_c__HeadingCalculator_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  HeadingCalculator_Request__rosidl_typesupport_introspection_c__HeadingCalculator_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t HeadingCalculator_Request__rosidl_typesupport_introspection_c__HeadingCalculator_Request_message_type_support_handle = {
  0,
  &HeadingCalculator_Request__rosidl_typesupport_introspection_c__HeadingCalculator_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mm_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mm_interfaces, srv, HeadingCalculator_Request)() {
  if (!HeadingCalculator_Request__rosidl_typesupport_introspection_c__HeadingCalculator_Request_message_type_support_handle.typesupport_identifier) {
    HeadingCalculator_Request__rosidl_typesupport_introspection_c__HeadingCalculator_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &HeadingCalculator_Request__rosidl_typesupport_introspection_c__HeadingCalculator_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "mm_interfaces/srv/detail/heading_calculator__rosidl_typesupport_introspection_c.h"
// already included above
// #include "mm_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "mm_interfaces/srv/detail/heading_calculator__functions.h"
// already included above
// #include "mm_interfaces/srv/detail/heading_calculator__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void HeadingCalculator_Response__rosidl_typesupport_introspection_c__HeadingCalculator_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mm_interfaces__srv__HeadingCalculator_Response__init(message_memory);
}

void HeadingCalculator_Response__rosidl_typesupport_introspection_c__HeadingCalculator_Response_fini_function(void * message_memory)
{
  mm_interfaces__srv__HeadingCalculator_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember HeadingCalculator_Response__rosidl_typesupport_introspection_c__HeadingCalculator_Response_message_member_array[1] = {
  {
    "turn_value",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mm_interfaces__srv__HeadingCalculator_Response, turn_value),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers HeadingCalculator_Response__rosidl_typesupport_introspection_c__HeadingCalculator_Response_message_members = {
  "mm_interfaces__srv",  // message namespace
  "HeadingCalculator_Response",  // message name
  1,  // number of fields
  sizeof(mm_interfaces__srv__HeadingCalculator_Response),
  HeadingCalculator_Response__rosidl_typesupport_introspection_c__HeadingCalculator_Response_message_member_array,  // message members
  HeadingCalculator_Response__rosidl_typesupport_introspection_c__HeadingCalculator_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  HeadingCalculator_Response__rosidl_typesupport_introspection_c__HeadingCalculator_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t HeadingCalculator_Response__rosidl_typesupport_introspection_c__HeadingCalculator_Response_message_type_support_handle = {
  0,
  &HeadingCalculator_Response__rosidl_typesupport_introspection_c__HeadingCalculator_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mm_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mm_interfaces, srv, HeadingCalculator_Response)() {
  if (!HeadingCalculator_Response__rosidl_typesupport_introspection_c__HeadingCalculator_Response_message_type_support_handle.typesupport_identifier) {
    HeadingCalculator_Response__rosidl_typesupport_introspection_c__HeadingCalculator_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &HeadingCalculator_Response__rosidl_typesupport_introspection_c__HeadingCalculator_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "mm_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "mm_interfaces/srv/detail/heading_calculator__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers mm_interfaces__srv__detail__heading_calculator__rosidl_typesupport_introspection_c__HeadingCalculator_service_members = {
  "mm_interfaces__srv",  // service namespace
  "HeadingCalculator",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // mm_interfaces__srv__detail__heading_calculator__rosidl_typesupport_introspection_c__HeadingCalculator_Request_message_type_support_handle,
  NULL  // response message
  // mm_interfaces__srv__detail__heading_calculator__rosidl_typesupport_introspection_c__HeadingCalculator_Response_message_type_support_handle
};

static rosidl_service_type_support_t mm_interfaces__srv__detail__heading_calculator__rosidl_typesupport_introspection_c__HeadingCalculator_service_type_support_handle = {
  0,
  &mm_interfaces__srv__detail__heading_calculator__rosidl_typesupport_introspection_c__HeadingCalculator_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mm_interfaces, srv, HeadingCalculator_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mm_interfaces, srv, HeadingCalculator_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mm_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mm_interfaces, srv, HeadingCalculator)() {
  if (!mm_interfaces__srv__detail__heading_calculator__rosidl_typesupport_introspection_c__HeadingCalculator_service_type_support_handle.typesupport_identifier) {
    mm_interfaces__srv__detail__heading_calculator__rosidl_typesupport_introspection_c__HeadingCalculator_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)mm_interfaces__srv__detail__heading_calculator__rosidl_typesupport_introspection_c__HeadingCalculator_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mm_interfaces, srv, HeadingCalculator_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mm_interfaces, srv, HeadingCalculator_Response)()->data;
  }

  return &mm_interfaces__srv__detail__heading_calculator__rosidl_typesupport_introspection_c__HeadingCalculator_service_type_support_handle;
}
