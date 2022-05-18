// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from mm_interfaces:msg/CarInstructions.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "mm_interfaces/msg/detail/car_instructions__struct.hpp"
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

void CarInstructions_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) mm_interfaces::msg::CarInstructions(_init);
}

void CarInstructions_fini_function(void * message_memory)
{
  auto typed_message = static_cast<mm_interfaces::msg::CarInstructions *>(message_memory);
  typed_message->~CarInstructions();
}

size_t size_function__CarInstructions__steering_range(const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * get_const_function__CarInstructions__steering_range(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 2> *>(untyped_member);
  return &member[index];
}

void * get_function__CarInstructions__steering_range(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 2> *>(untyped_member);
  return &member[index];
}

size_t size_function__CarInstructions__throttle_range(const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * get_const_function__CarInstructions__throttle_range(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<int32_t, 2> *>(untyped_member);
  return &member[index];
}

void * get_function__CarInstructions__throttle_range(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<int32_t, 2> *>(untyped_member);
  return &member[index];
}

size_t size_function__CarInstructions__angle_range(const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * get_const_function__CarInstructions__angle_range(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 2> *>(untyped_member);
  return &member[index];
}

void * get_function__CarInstructions__angle_range(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 2> *>(untyped_member);
  return &member[index];
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember CarInstructions_message_member_array[6] = {
  {
    "steering",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mm_interfaces::msg::CarInstructions, steering),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "steering_range",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(mm_interfaces::msg::CarInstructions, steering_range),  // bytes offset in struct
    nullptr,  // default value
    size_function__CarInstructions__steering_range,  // size() function pointer
    get_const_function__CarInstructions__steering_range,  // get_const(index) function pointer
    get_function__CarInstructions__steering_range,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "throttle",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mm_interfaces::msg::CarInstructions, throttle),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "throttle_range",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(mm_interfaces::msg::CarInstructions, throttle_range),  // bytes offset in struct
    nullptr,  // default value
    size_function__CarInstructions__throttle_range,  // size() function pointer
    get_const_function__CarInstructions__throttle_range,  // get_const(index) function pointer
    get_function__CarInstructions__throttle_range,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "angle",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mm_interfaces::msg::CarInstructions, angle),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "angle_range",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(mm_interfaces::msg::CarInstructions, angle_range),  // bytes offset in struct
    nullptr,  // default value
    size_function__CarInstructions__angle_range,  // size() function pointer
    get_const_function__CarInstructions__angle_range,  // get_const(index) function pointer
    get_function__CarInstructions__angle_range,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers CarInstructions_message_members = {
  "mm_interfaces::msg",  // message namespace
  "CarInstructions",  // message name
  6,  // number of fields
  sizeof(mm_interfaces::msg::CarInstructions),
  CarInstructions_message_member_array,  // message members
  CarInstructions_init_function,  // function to initialize message memory (memory has to be allocated)
  CarInstructions_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t CarInstructions_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &CarInstructions_message_members,
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
get_message_type_support_handle<mm_interfaces::msg::CarInstructions>()
{
  return &::mm_interfaces::msg::rosidl_typesupport_introspection_cpp::CarInstructions_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mm_interfaces, msg, CarInstructions)() {
  return &::mm_interfaces::msg::rosidl_typesupport_introspection_cpp::CarInstructions_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
