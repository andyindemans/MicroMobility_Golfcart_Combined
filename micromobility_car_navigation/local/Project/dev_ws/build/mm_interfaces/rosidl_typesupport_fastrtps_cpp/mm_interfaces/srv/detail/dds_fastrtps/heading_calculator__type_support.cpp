// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from mm_interfaces:srv/HeadingCalculator.idl
// generated code does not contain a copyright notice
#include "mm_interfaces/srv/detail/heading_calculator__rosidl_typesupport_fastrtps_cpp.hpp"
#include "mm_interfaces/srv/detail/heading_calculator__struct.hpp"

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

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mm_interfaces
cdr_serialize(
  const mm_interfaces::srv::HeadingCalculator_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: cart_bearing
  cdr << ros_message.cart_bearing;
  // Member: cart_lat
  cdr << ros_message.cart_lat;
  // Member: cart_long
  cdr << ros_message.cart_long;
  // Member: next_node_lat
  cdr << ros_message.next_node_lat;
  // Member: next_node_long
  cdr << ros_message.next_node_long;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mm_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  mm_interfaces::srv::HeadingCalculator_Request & ros_message)
{
  // Member: cart_bearing
  cdr >> ros_message.cart_bearing;

  // Member: cart_lat
  cdr >> ros_message.cart_lat;

  // Member: cart_long
  cdr >> ros_message.cart_long;

  // Member: next_node_lat
  cdr >> ros_message.next_node_lat;

  // Member: next_node_long
  cdr >> ros_message.next_node_long;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mm_interfaces
get_serialized_size(
  const mm_interfaces::srv::HeadingCalculator_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: cart_bearing
  {
    size_t item_size = sizeof(ros_message.cart_bearing);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cart_lat
  {
    size_t item_size = sizeof(ros_message.cart_lat);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cart_long
  {
    size_t item_size = sizeof(ros_message.cart_long);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: next_node_lat
  {
    size_t item_size = sizeof(ros_message.next_node_lat);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: next_node_long
  {
    size_t item_size = sizeof(ros_message.next_node_long);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mm_interfaces
max_serialized_size_HeadingCalculator_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: cart_bearing
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: cart_lat
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: cart_long
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: next_node_lat
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: next_node_long
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static bool _HeadingCalculator_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const mm_interfaces::srv::HeadingCalculator_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _HeadingCalculator_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<mm_interfaces::srv::HeadingCalculator_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _HeadingCalculator_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const mm_interfaces::srv::HeadingCalculator_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _HeadingCalculator_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_HeadingCalculator_Request(full_bounded, 0);
}

static message_type_support_callbacks_t _HeadingCalculator_Request__callbacks = {
  "mm_interfaces::srv",
  "HeadingCalculator_Request",
  _HeadingCalculator_Request__cdr_serialize,
  _HeadingCalculator_Request__cdr_deserialize,
  _HeadingCalculator_Request__get_serialized_size,
  _HeadingCalculator_Request__max_serialized_size
};

static rosidl_message_type_support_t _HeadingCalculator_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_HeadingCalculator_Request__callbacks,
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
get_message_type_support_handle<mm_interfaces::srv::HeadingCalculator_Request>()
{
  return &mm_interfaces::srv::typesupport_fastrtps_cpp::_HeadingCalculator_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mm_interfaces, srv, HeadingCalculator_Request)() {
  return &mm_interfaces::srv::typesupport_fastrtps_cpp::_HeadingCalculator_Request__handle;
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
  const mm_interfaces::srv::HeadingCalculator_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: turn_value
  cdr << ros_message.turn_value;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mm_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  mm_interfaces::srv::HeadingCalculator_Response & ros_message)
{
  // Member: turn_value
  cdr >> ros_message.turn_value;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mm_interfaces
get_serialized_size(
  const mm_interfaces::srv::HeadingCalculator_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: turn_value
  {
    size_t item_size = sizeof(ros_message.turn_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mm_interfaces
max_serialized_size_HeadingCalculator_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: turn_value
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static bool _HeadingCalculator_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const mm_interfaces::srv::HeadingCalculator_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _HeadingCalculator_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<mm_interfaces::srv::HeadingCalculator_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _HeadingCalculator_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const mm_interfaces::srv::HeadingCalculator_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _HeadingCalculator_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_HeadingCalculator_Response(full_bounded, 0);
}

static message_type_support_callbacks_t _HeadingCalculator_Response__callbacks = {
  "mm_interfaces::srv",
  "HeadingCalculator_Response",
  _HeadingCalculator_Response__cdr_serialize,
  _HeadingCalculator_Response__cdr_deserialize,
  _HeadingCalculator_Response__get_serialized_size,
  _HeadingCalculator_Response__max_serialized_size
};

static rosidl_message_type_support_t _HeadingCalculator_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_HeadingCalculator_Response__callbacks,
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
get_message_type_support_handle<mm_interfaces::srv::HeadingCalculator_Response>()
{
  return &mm_interfaces::srv::typesupport_fastrtps_cpp::_HeadingCalculator_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mm_interfaces, srv, HeadingCalculator_Response)() {
  return &mm_interfaces::srv::typesupport_fastrtps_cpp::_HeadingCalculator_Response__handle;
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

static service_type_support_callbacks_t _HeadingCalculator__callbacks = {
  "mm_interfaces::srv",
  "HeadingCalculator",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mm_interfaces, srv, HeadingCalculator_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mm_interfaces, srv, HeadingCalculator_Response)(),
};

static rosidl_service_type_support_t _HeadingCalculator__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_HeadingCalculator__callbacks,
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
get_service_type_support_handle<mm_interfaces::srv::HeadingCalculator>()
{
  return &mm_interfaces::srv::typesupport_fastrtps_cpp::_HeadingCalculator__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mm_interfaces, srv, HeadingCalculator)() {
  return &mm_interfaces::srv::typesupport_fastrtps_cpp::_HeadingCalculator__handle;
}

#ifdef __cplusplus
}
#endif
