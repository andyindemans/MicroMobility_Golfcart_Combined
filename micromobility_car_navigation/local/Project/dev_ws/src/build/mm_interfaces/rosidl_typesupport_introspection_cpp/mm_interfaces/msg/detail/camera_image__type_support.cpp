// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from mm_interfaces:msg/CameraImage.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "mm_interfaces/msg/detail/camera_image__struct.hpp"
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

void CameraImage_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) mm_interfaces::msg::CameraImage(_init);
}

void CameraImage_fini_function(void * message_memory)
{
  auto typed_message = static_cast<mm_interfaces::msg::CameraImage *>(message_memory);
  typed_message->~CameraImage();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember CameraImage_message_member_array[2] = {
  {
    "sensor_error",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mm_interfaces::msg::CameraImage, sensor_error),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "image",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<sensor_msgs::msg::Image>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mm_interfaces::msg::CameraImage, image),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers CameraImage_message_members = {
  "mm_interfaces::msg",  // message namespace
  "CameraImage",  // message name
  2,  // number of fields
  sizeof(mm_interfaces::msg::CameraImage),
  CameraImage_message_member_array,  // message members
  CameraImage_init_function,  // function to initialize message memory (memory has to be allocated)
  CameraImage_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t CameraImage_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &CameraImage_message_members,
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
get_message_type_support_handle<mm_interfaces::msg::CameraImage>()
{
  return &::mm_interfaces::msg::rosidl_typesupport_introspection_cpp::CameraImage_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mm_interfaces, msg, CameraImage)() {
  return &::mm_interfaces::msg::rosidl_typesupport_introspection_cpp::CameraImage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
