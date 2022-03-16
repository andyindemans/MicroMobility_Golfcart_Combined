// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from mm_interfaces:srv/Pathfinding.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "mm_interfaces/srv/detail/pathfinding__rosidl_typesupport_introspection_c.h"
#include "mm_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "mm_interfaces/srv/detail/pathfinding__functions.h"
#include "mm_interfaces/srv/detail/pathfinding__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void Pathfinding_Request__rosidl_typesupport_introspection_c__Pathfinding_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mm_interfaces__srv__Pathfinding_Request__init(message_memory);
}

void Pathfinding_Request__rosidl_typesupport_introspection_c__Pathfinding_Request_fini_function(void * message_memory)
{
  mm_interfaces__srv__Pathfinding_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Pathfinding_Request__rosidl_typesupport_introspection_c__Pathfinding_Request_message_member_array[2] = {
  {
    "start_node_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mm_interfaces__srv__Pathfinding_Request, start_node_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "end_node_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mm_interfaces__srv__Pathfinding_Request, end_node_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Pathfinding_Request__rosidl_typesupport_introspection_c__Pathfinding_Request_message_members = {
  "mm_interfaces__srv",  // message namespace
  "Pathfinding_Request",  // message name
  2,  // number of fields
  sizeof(mm_interfaces__srv__Pathfinding_Request),
  Pathfinding_Request__rosidl_typesupport_introspection_c__Pathfinding_Request_message_member_array,  // message members
  Pathfinding_Request__rosidl_typesupport_introspection_c__Pathfinding_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  Pathfinding_Request__rosidl_typesupport_introspection_c__Pathfinding_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Pathfinding_Request__rosidl_typesupport_introspection_c__Pathfinding_Request_message_type_support_handle = {
  0,
  &Pathfinding_Request__rosidl_typesupport_introspection_c__Pathfinding_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mm_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mm_interfaces, srv, Pathfinding_Request)() {
  if (!Pathfinding_Request__rosidl_typesupport_introspection_c__Pathfinding_Request_message_type_support_handle.typesupport_identifier) {
    Pathfinding_Request__rosidl_typesupport_introspection_c__Pathfinding_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Pathfinding_Request__rosidl_typesupport_introspection_c__Pathfinding_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "mm_interfaces/srv/detail/pathfinding__rosidl_typesupport_introspection_c.h"
// already included above
// #include "mm_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "mm_interfaces/srv/detail/pathfinding__functions.h"
// already included above
// #include "mm_interfaces/srv/detail/pathfinding__struct.h"


// Include directives for member types
// Member `path`
#include "mm_interfaces/msg/coordinate_msg.h"
// Member `path`
#include "mm_interfaces/msg/detail/coordinate_msg__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Pathfinding_Response__rosidl_typesupport_introspection_c__Pathfinding_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mm_interfaces__srv__Pathfinding_Response__init(message_memory);
}

void Pathfinding_Response__rosidl_typesupport_introspection_c__Pathfinding_Response_fini_function(void * message_memory)
{
  mm_interfaces__srv__Pathfinding_Response__fini(message_memory);
}

size_t Pathfinding_Response__rosidl_typesupport_introspection_c__size_function__CoordinateMsg__path(
  const void * untyped_member)
{
  const mm_interfaces__msg__CoordinateMsg__Sequence * member =
    (const mm_interfaces__msg__CoordinateMsg__Sequence *)(untyped_member);
  return member->size;
}

const void * Pathfinding_Response__rosidl_typesupport_introspection_c__get_const_function__CoordinateMsg__path(
  const void * untyped_member, size_t index)
{
  const mm_interfaces__msg__CoordinateMsg__Sequence * member =
    (const mm_interfaces__msg__CoordinateMsg__Sequence *)(untyped_member);
  return &member->data[index];
}

void * Pathfinding_Response__rosidl_typesupport_introspection_c__get_function__CoordinateMsg__path(
  void * untyped_member, size_t index)
{
  mm_interfaces__msg__CoordinateMsg__Sequence * member =
    (mm_interfaces__msg__CoordinateMsg__Sequence *)(untyped_member);
  return &member->data[index];
}

bool Pathfinding_Response__rosidl_typesupport_introspection_c__resize_function__CoordinateMsg__path(
  void * untyped_member, size_t size)
{
  mm_interfaces__msg__CoordinateMsg__Sequence * member =
    (mm_interfaces__msg__CoordinateMsg__Sequence *)(untyped_member);
  mm_interfaces__msg__CoordinateMsg__Sequence__fini(member);
  return mm_interfaces__msg__CoordinateMsg__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember Pathfinding_Response__rosidl_typesupport_introspection_c__Pathfinding_Response_message_member_array[1] = {
  {
    "path",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mm_interfaces__srv__Pathfinding_Response, path),  // bytes offset in struct
    NULL,  // default value
    Pathfinding_Response__rosidl_typesupport_introspection_c__size_function__CoordinateMsg__path,  // size() function pointer
    Pathfinding_Response__rosidl_typesupport_introspection_c__get_const_function__CoordinateMsg__path,  // get_const(index) function pointer
    Pathfinding_Response__rosidl_typesupport_introspection_c__get_function__CoordinateMsg__path,  // get(index) function pointer
    Pathfinding_Response__rosidl_typesupport_introspection_c__resize_function__CoordinateMsg__path  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Pathfinding_Response__rosidl_typesupport_introspection_c__Pathfinding_Response_message_members = {
  "mm_interfaces__srv",  // message namespace
  "Pathfinding_Response",  // message name
  1,  // number of fields
  sizeof(mm_interfaces__srv__Pathfinding_Response),
  Pathfinding_Response__rosidl_typesupport_introspection_c__Pathfinding_Response_message_member_array,  // message members
  Pathfinding_Response__rosidl_typesupport_introspection_c__Pathfinding_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  Pathfinding_Response__rosidl_typesupport_introspection_c__Pathfinding_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Pathfinding_Response__rosidl_typesupport_introspection_c__Pathfinding_Response_message_type_support_handle = {
  0,
  &Pathfinding_Response__rosidl_typesupport_introspection_c__Pathfinding_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mm_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mm_interfaces, srv, Pathfinding_Response)() {
  Pathfinding_Response__rosidl_typesupport_introspection_c__Pathfinding_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mm_interfaces, msg, CoordinateMsg)();
  if (!Pathfinding_Response__rosidl_typesupport_introspection_c__Pathfinding_Response_message_type_support_handle.typesupport_identifier) {
    Pathfinding_Response__rosidl_typesupport_introspection_c__Pathfinding_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Pathfinding_Response__rosidl_typesupport_introspection_c__Pathfinding_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "mm_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "mm_interfaces/srv/detail/pathfinding__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers mm_interfaces__srv__detail__pathfinding__rosidl_typesupport_introspection_c__Pathfinding_service_members = {
  "mm_interfaces__srv",  // service namespace
  "Pathfinding",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // mm_interfaces__srv__detail__pathfinding__rosidl_typesupport_introspection_c__Pathfinding_Request_message_type_support_handle,
  NULL  // response message
  // mm_interfaces__srv__detail__pathfinding__rosidl_typesupport_introspection_c__Pathfinding_Response_message_type_support_handle
};

static rosidl_service_type_support_t mm_interfaces__srv__detail__pathfinding__rosidl_typesupport_introspection_c__Pathfinding_service_type_support_handle = {
  0,
  &mm_interfaces__srv__detail__pathfinding__rosidl_typesupport_introspection_c__Pathfinding_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mm_interfaces, srv, Pathfinding_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mm_interfaces, srv, Pathfinding_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mm_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mm_interfaces, srv, Pathfinding)() {
  if (!mm_interfaces__srv__detail__pathfinding__rosidl_typesupport_introspection_c__Pathfinding_service_type_support_handle.typesupport_identifier) {
    mm_interfaces__srv__detail__pathfinding__rosidl_typesupport_introspection_c__Pathfinding_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)mm_interfaces__srv__detail__pathfinding__rosidl_typesupport_introspection_c__Pathfinding_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mm_interfaces, srv, Pathfinding_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mm_interfaces, srv, Pathfinding_Response)()->data;
  }

  return &mm_interfaces__srv__detail__pathfinding__rosidl_typesupport_introspection_c__Pathfinding_service_type_support_handle;
}
