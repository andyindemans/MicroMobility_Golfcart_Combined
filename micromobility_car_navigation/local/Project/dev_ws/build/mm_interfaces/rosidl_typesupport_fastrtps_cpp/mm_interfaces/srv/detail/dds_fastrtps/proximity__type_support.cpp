// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from mm_interfaces:srv/Proximity.idl
// generated code does not contain a copyright notice
#include "mm_interfaces/srv/detail/proximity__rosidl_typesupport_fastrtps_cpp.hpp"
#include "mm_interfaces/srv/detail/proximity__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace mm_interfaces
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const mm_interfaces::msg::CoordinateMsg &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  mm_interfaces::msg::CoordinateMsg &);
size_t get_serialized_size(
  const mm_interfaces::msg::CoordinateMsg &,
  size_t current_alignment);
size_t
max_serialized_size_CoordinateMsg(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace mm_interfaces

namespace mm_interfaces
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const mm_interfaces::msg::CoordinateMsg &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  mm_interfaces::msg::CoordinateMsg &);
size_t get_serialized_size(
  const mm_interfaces::msg::CoordinateMsg &,
  size_t current_alignment);
size_t
max_serialized_size_CoordinateMsg(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace mm_interfaces


namespace mm_interfaces
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mm_interfaces
cdr_serialize(
  const mm_interfaces::srv::Proximity_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: current_position
  mm_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.current_position,
    cdr);
  // Member: next_node
  mm_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.next_node,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mm_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  mm_interfaces::srv::Proximity_Request & ros_message)
{
  // Member: current_position
  mm_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.current_position);

  // Member: next_node
  mm_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.next_node);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mm_interfaces
get_serialized_size(
  const mm_interfaces::srv::Proximity_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: current_position

  current_alignment +=
    mm_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.current_position, current_alignment);
  // Member: next_node

  current_alignment +=
    mm_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.next_node, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mm_interfaces
max_serialized_size_Proximity_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: current_position
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        mm_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_CoordinateMsg(
        full_bounded, current_alignment);
    }
  }

  // Member: next_node
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        mm_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_CoordinateMsg(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _Proximity_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const mm_interfaces::srv::Proximity_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Proximity_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<mm_interfaces::srv::Proximity_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Proximity_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const mm_interfaces::srv::Proximity_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Proximity_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_Proximity_Request(full_bounded, 0);
}

static message_type_support_callbacks_t _Proximity_Request__callbacks = {
  "mm_interfaces::srv",
  "Proximity_Request",
  _Proximity_Request__cdr_serialize,
  _Proximity_Request__cdr_deserialize,
  _Proximity_Request__get_serialized_size,
  _Proximity_Request__max_serialized_size
};

static rosidl_message_type_support_t _Proximity_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Proximity_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace mm_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_mm_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<mm_interfaces::srv::Proximity_Request>()
{
  return &mm_interfaces::srv::typesupport_fastrtps_cpp::_Proximity_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mm_interfaces, srv, Proximity_Request)() {
  return &mm_interfaces::srv::typesupport_fastrtps_cpp::_Proximity_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace mm_interfaces
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mm_interfaces
cdr_serialize(
  const mm_interfaces::srv::Proximity_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: distance_to
  cdr << ros_message.distance_to;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mm_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  mm_interfaces::srv::Proximity_Response & ros_message)
{
  // Member: distance_to
  cdr >> ros_message.distance_to;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mm_interfaces
get_serialized_size(
  const mm_interfaces::srv::Proximity_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: distance_to
  {
    size_t item_size = sizeof(ros_message.distance_to);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mm_interfaces
max_serialized_size_Proximity_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: distance_to
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static bool _Proximity_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const mm_interfaces::srv::Proximity_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Proximity_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<mm_interfaces::srv::Proximity_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Proximity_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const mm_interfaces::srv::Proximity_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Proximity_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_Proximity_Response(full_bounded, 0);
}

static message_type_support_callbacks_t _Proximity_Response__callbacks = {
  "mm_interfaces::srv",
  "Proximity_Response",
  _Proximity_Response__cdr_serialize,
  _Proximity_Response__cdr_deserialize,
  _Proximity_Response__get_serialized_size,
  _Proximity_Response__max_serialized_size
};

static rosidl_message_type_support_t _Proximity_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Proximity_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace mm_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_mm_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<mm_interfaces::srv::Proximity_Response>()
{
  return &mm_interfaces::srv::typesupport_fastrtps_cpp::_Proximity_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mm_interfaces, srv, Proximity_Response)() {
  return &mm_interfaces::srv::typesupport_fastrtps_cpp::_Proximity_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace mm_interfaces
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _Proximity__callbacks = {
  "mm_interfaces::srv",
  "Proximity",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mm_interfaces, srv, Proximity_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mm_interfaces, srv, Proximity_Response)(),
};

static rosidl_service_type_support_t _Proximity__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Proximity__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace mm_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_mm_interfaces
const rosidl_service_type_support_t *
get_service_type_support_handle<mm_interfaces::srv::Proximity>()
{
  return &mm_interfaces::srv::typesupport_fastrtps_cpp::_Proximity__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mm_interfaces, srv, Proximity)() {
  return &mm_interfaces::srv::typesupport_fastrtps_cpp::_Proximity__handle;
}

#ifdef __cplusplus
}
#endif
