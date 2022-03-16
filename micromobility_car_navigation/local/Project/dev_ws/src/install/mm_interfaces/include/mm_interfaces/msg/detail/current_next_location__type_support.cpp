// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from mm_interfaces:msg/CurrentNextLocation.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "mm_interfaces/msg/detail/current_next_location__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace mm_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void CurrentNextLocation_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) mm_interfaces::msg::CurrentNextLocation(_init);
}

void CurrentNextLocation_fini_function(void * message_memory)
{
  auto typed_message = static_cast<mm_interfaces::msg::CurrentNextLocation *>(message_memory);
  typed_message->~CurrentNextLocation();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember CurrentNextLocation_message_member_array[2] = {
  {
    "current_position",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<mm_interfaces::msg::CoordinateMsg>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mm_interfaces::msg::CurrentNextLocation, current_position),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "next_position",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<mm_interfaces::msg::CoordinateMsg>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mm_interfaces::msg::CurrentNextLocation, next_position),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers CurrentNextLocation_message_members = {
  "mm_interfaces::msg",  // message namespace
  "CurrentNextLocation",  // message name
  2,  // number of fields
  sizeof(mm_interfaces::msg::CurrentNextLocation),
  CurrentNextLocation_message_member_array,  // message members
  CurrentNextLocation_init_function,  // function to initialize message memory (memory has to be allocated)
  CurrentNextLocation_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t CurrentNextLocation_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &CurrentNextLocation_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace mm_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<mm_interfaces::msg::CurrentNextLocation>()
{
  return &::mm_interfaces::msg::rosidl_typesupport_introspection_cpp::CurrentNextLocation_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mm_interfaces, msg, CurrentNextLocation)() {
  return &::mm_interfaces::msg::rosidl_typesupport_introspection_cpp::CurrentNextLocation_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
