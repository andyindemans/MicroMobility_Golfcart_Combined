// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from mm_interfaces:srv/Proximity.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "mm_interfaces/srv/detail/proximity__rosidl_typesupport_introspection_c.h"
#include "mm_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "mm_interfaces/srv/detail/proximity__functions.h"
#include "mm_interfaces/srv/detail/proximity__struct.h"


// Include directives for member types
// Member `current_position`
// Member `next_node`
#include "mm_interfaces/msg/coordinate_msg.h"
// Member `current_position`
// Member `next_node`
#include "mm_interfaces/msg/detail/coordinate_msg__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Proximity_Request__rosidl_typesupport_introspection_c__Proximity_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mm_interfaces__srv__Proximity_Request__init(message_memory);
}

void Proximity_Request__rosidl_typesupport_introspection_c__Proximity_Request_fini_function(void * message_memory)
{
  mm_interfaces__srv__Proximity_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Proximity_Request__rosidl_typesupport_introspection_c__Proximity_Request_message_member_array[2] = {
  {
    "current_position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mm_interfaces__srv__Proximity_Request, current_position),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "next_node",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mm_interfaces__srv__Proximity_Request, next_node),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Proximity_Request__rosidl_typesupport_introspection_c__Proximity_Request_message_members = {
  "mm_interfaces__srv",  // message namespace
  "Proximity_Request",  // message name
  2,  // number of fields
  sizeof(mm_interfaces__srv__Proximity_Request),
  Proximity_Request__rosidl_typesupport_introspection_c__Proximity_Request_message_member_array,  // message members
  Proximity_Request__rosidl_typesupport_introspection_c__Proximity_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  Proximity_Request__rosidl_typesupport_introspection_c__Proximity_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Proximity_Request__rosidl_typesupport_introspection_c__Proximity_Request_message_type_support_handle = {
  0,
  &Proximity_Request__rosidl_typesupport_introspection_c__Proximity_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mm_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mm_interfaces, srv, Proximity_Request)() {
  Proximity_Request__rosidl_typesupport_introspection_c__Proximity_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mm_interfaces, msg, CoordinateMsg)();
  Proximity_Request__rosidl_typesupport_introspection_c__Proximity_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mm_interfaces, msg, CoordinateMsg)();
  if (!Proximity_Request__rosidl_typesupport_introspection_c__Proximity_Request_message_type_support_handle.typesupport_identifier) {
    Proximity_Request__rosidl_typesupport_introspection_c__Proximity_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Proximity_Request__rosidl_typesupport_introspection_c__Proximity_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "mm_interfaces/srv/detail/proximity__rosidl_typesupport_introspection_c.h"
// already included above
// #include "mm_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "mm_interfaces/srv/detail/proximity__functions.h"
// already included above
// #include "mm_interfaces/srv/detail/proximity__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void Proximity_Response__rosidl_typesupport_introspection_c__Proximity_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mm_interfaces__srv__Proximity_Response__init(message_memory);
}

void Proximity_Response__rosidl_typesupport_introspection_c__Proximity_Response_fini_function(void * message_memory)
{
  mm_interfaces__srv__Proximity_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Proximity_Response__rosidl_typesupport_introspection_c__Proximity_Response_message_member_array[1] = {
  {
    "distance_to",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mm_interfaces__srv__Proximity_Response, distance_to),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Proximity_Response__rosidl_typesupport_introspection_c__Proximity_Response_message_members = {
  "mm_interfaces__srv",  // message namespace
  "Proximity_Response",  // message name
  1,  // number of fields
  sizeof(mm_interfaces__srv__Proximity_Response),
  Proximity_Response__rosidl_typesupport_introspection_c__Proximity_Response_message_member_array,  // message members
  Proximity_Response__rosidl_typesupport_introspection_c__Proximity_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  Proximity_Response__rosidl_typesupport_introspection_c__Proximity_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Proximity_Response__rosidl_typesupport_introspection_c__Proximity_Response_message_type_support_handle = {
  0,
  &Proximity_Response__rosidl_typesupport_introspection_c__Proximity_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mm_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mm_interfaces, srv, Proximity_Response)() {
  if (!Proximity_Response__rosidl_typesupport_introspection_c__Proximity_Response_message_type_support_handle.typesupport_identifier) {
    Proximity_Response__rosidl_typesupport_introspection_c__Proximity_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Proximity_Response__rosidl_typesupport_introspection_c__Proximity_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "mm_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "mm_interfaces/srv/detail/proximity__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers mm_interfaces__srv__detail__proximity__rosidl_typesupport_introspection_c__Proximity_service_members = {
  "mm_interfaces__srv",  // service namespace
  "Proximity",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // mm_interfaces__srv__detail__proximity__rosidl_typesupport_introspection_c__Proximity_Request_message_type_support_handle,
  NULL  // response message
  // mm_interfaces__srv__detail__proximity__rosidl_typesupport_introspection_c__Proximity_Response_message_type_support_handle
};

static rosidl_service_type_support_t mm_interfaces__srv__detail__proximity__rosidl_typesupport_introspection_c__Proximity_service_type_support_handle = {
  0,
  &mm_interfaces__srv__detail__proximity__rosidl_typesupport_introspection_c__Proximity_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mm_interfaces, srv, Proximity_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mm_interfaces, srv, Proximity_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mm_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mm_interfaces, srv, Proximity)() {
  if (!mm_interfaces__srv__detail__proximity__rosidl_typesupport_introspection_c__Proximity_service_type_support_handle.typesupport_identifier) {
    mm_interfaces__srv__detail__proximity__rosidl_typesupport_introspection_c__Proximity_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)mm_interfaces__srv__detail__proximity__rosidl_typesupport_introspection_c__Proximity_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mm_interfaces, srv, Proximity_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mm_interfaces, srv, Proximity_Response)()->data;
  }

  return &mm_interfaces__srv__detail__proximity__rosidl_typesupport_introspection_c__Proximity_service_type_support_handle;
}
