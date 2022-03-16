// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from mm_interfaces:srv/Pathfinding.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "mm_interfaces/srv/detail/pathfinding__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace mm_interfaces
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void Pathfinding_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) mm_interfaces::srv::Pathfinding_Request(_init);
}

void Pathfinding_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<mm_interfaces::srv::Pathfinding_Request *>(message_memory);
  typed_message->~Pathfinding_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Pathfinding_Request_message_member_array[2] = {
  {
    "start_node_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mm_interfaces::srv::Pathfinding_Request, start_node_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "end_node_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mm_interfaces::srv::Pathfinding_Request, end_node_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Pathfinding_Request_message_members = {
  "mm_interfaces::srv",  // message namespace
  "Pathfinding_Request",  // message name
  2,  // number of fields
  sizeof(mm_interfaces::srv::Pathfinding_Request),
  Pathfinding_Request_message_member_array,  // message members
  Pathfinding_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  Pathfinding_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Pathfinding_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Pathfinding_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace mm_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<mm_interfaces::srv::Pathfinding_Request>()
{
  return &::mm_interfaces::srv::rosidl_typesupport_introspection_cpp::Pathfinding_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mm_interfaces, srv, Pathfinding_Request)() {
  return &::mm_interfaces::srv::rosidl_typesupport_introspection_cpp::Pathfinding_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "mm_interfaces/srv/detail/pathfinding__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace mm_interfaces
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void Pathfinding_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) mm_interfaces::srv::Pathfinding_Response(_init);
}

void Pathfinding_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<mm_interfaces::srv::Pathfinding_Response *>(message_memory);
  typed_message->~Pathfinding_Response();
}

size_t size_function__Pathfinding_Response__path(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<mm_interfaces::msg::CoordinateMsg> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Pathfinding_Response__path(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<mm_interfaces::msg::CoordinateMsg> *>(untyped_member);
  return &member[index];
}

void * get_function__Pathfinding_Response__path(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<mm_interfaces::msg::CoordinateMsg> *>(untyped_member);
  return &member[index];
}

void resize_function__Pathfinding_Response__path(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<mm_interfaces::msg::CoordinateMsg> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Pathfinding_Response_message_member_array[1] = {
  {
    "path",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<mm_interfaces::msg::CoordinateMsg>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mm_interfaces::srv::Pathfinding_Response, path),  // bytes offset in struct
    nullptr,  // default value
    size_function__Pathfinding_Response__path,  // size() function pointer
    get_const_function__Pathfinding_Response__path,  // get_const(index) function pointer
    get_function__Pathfinding_Response__path,  // get(index) function pointer
    resize_function__Pathfinding_Response__path  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Pathfinding_Response_message_members = {
  "mm_interfaces::srv",  // message namespace
  "Pathfinding_Response",  // message name
  1,  // number of fields
  sizeof(mm_interfaces::srv::Pathfinding_Response),
  Pathfinding_Response_message_member_array,  // message members
  Pathfinding_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  Pathfinding_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Pathfinding_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Pathfinding_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace mm_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<mm_interfaces::srv::Pathfinding_Response>()
{
  return &::mm_interfaces::srv::rosidl_typesupport_introspection_cpp::Pathfinding_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mm_interfaces, srv, Pathfinding_Response)() {
  return &::mm_interfaces::srv::rosidl_typesupport_introspection_cpp::Pathfinding_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "mm_interfaces/srv/detail/pathfinding__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace mm_interfaces
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers Pathfinding_service_members = {
  "mm_interfaces::srv",  // service namespace
  "Pathfinding",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<mm_interfaces::srv::Pathfinding>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t Pathfinding_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Pathfinding_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace mm_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<mm_interfaces::srv::Pathfinding>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::mm_interfaces::srv::rosidl_typesupport_introspection_cpp::Pathfinding_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::mm_interfaces::srv::Pathfinding_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::mm_interfaces::srv::Pathfinding_Response
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mm_interfaces, srv, Pathfinding)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<mm_interfaces::srv::Pathfinding>();
}

#ifdef __cplusplus
}
#endif
