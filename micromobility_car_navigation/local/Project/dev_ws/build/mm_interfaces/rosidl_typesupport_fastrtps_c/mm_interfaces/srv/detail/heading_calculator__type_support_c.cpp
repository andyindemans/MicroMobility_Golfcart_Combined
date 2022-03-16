// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from mm_interfaces:srv/HeadingCalculator.idl
// generated code does not contain a copyright notice
#include "mm_interfaces/srv/detail/heading_calculator__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "mm_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "mm_interfaces/srv/detail/heading_calculator__struct.h"
#include "mm_interfaces/srv/detail/heading_calculator__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _HeadingCalculator_Request__ros_msg_type = mm_interfaces__srv__HeadingCalculator_Request;

static bool _HeadingCalculator_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _HeadingCalculator_Request__ros_msg_type * ros_message = static_cast<const _HeadingCalculator_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: cart_bearing
  {
    cdr << ros_message->cart_bearing;
  }

  // Field name: cart_lat
  {
    cdr << ros_message->cart_lat;
  }

  // Field name: cart_long
  {
    cdr << ros_message->cart_long;
  }

  // Field name: next_node_lat
  {
    cdr << ros_message->next_node_lat;
  }

  // Field name: next_node_long
  {
    cdr << ros_message->next_node_long;
  }

  return true;
}

static bool _HeadingCalculator_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _HeadingCalculator_Request__ros_msg_type * ros_message = static_cast<_HeadingCalculator_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: cart_bearing
  {
    cdr >> ros_message->cart_bearing;
  }

  // Field name: cart_lat
  {
    cdr >> ros_message->cart_lat;
  }

  // Field name: cart_long
  {
    cdr >> ros_message->cart_long;
  }

  // Field name: next_node_lat
  {
    cdr >> ros_message->next_node_lat;
  }

  // Field name: next_node_long
  {
    cdr >> ros_message->next_node_long;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mm_interfaces
size_t get_serialized_size_mm_interfaces__srv__HeadingCalculator_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _HeadingCalculator_Request__ros_msg_type * ros_message = static_cast<const _HeadingCalculator_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name cart_bearing
  {
    size_t item_size = sizeof(ros_message->cart_bearing);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cart_lat
  {
    size_t item_size = sizeof(ros_message->cart_lat);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cart_long
  {
    size_t item_size = sizeof(ros_message->cart_long);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name next_node_lat
  {
    size_t item_size = sizeof(ros_message->next_node_lat);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name next_node_long
  {
    size_t item_size = sizeof(ros_message->next_node_long);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _HeadingCalculator_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_mm_interfaces__srv__HeadingCalculator_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mm_interfaces
size_t max_serialized_size_mm_interfaces__srv__HeadingCalculator_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: cart_bearing
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: cart_lat
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: cart_long
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: next_node_lat
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: next_node_long
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _HeadingCalculator_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_mm_interfaces__srv__HeadingCalculator_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_HeadingCalculator_Request = {
  "mm_interfaces::srv",
  "HeadingCalculator_Request",
  _HeadingCalculator_Request__cdr_serialize,
  _HeadingCalculator_Request__cdr_deserialize,
  _HeadingCalculator_Request__get_serialized_size,
  _HeadingCalculator_Request__max_serialized_size
};

static rosidl_message_type_support_t _HeadingCalculator_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_HeadingCalculator_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mm_interfaces, srv, HeadingCalculator_Request)() {
  return &_HeadingCalculator_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "mm_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "mm_interfaces/srv/detail/heading_calculator__struct.h"
// already included above
// #include "mm_interfaces/srv/detail/heading_calculator__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _HeadingCalculator_Response__ros_msg_type = mm_interfaces__srv__HeadingCalculator_Response;

static bool _HeadingCalculator_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _HeadingCalculator_Response__ros_msg_type * ros_message = static_cast<const _HeadingCalculator_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: turn_value
  {
    cdr << ros_message->turn_value;
  }

  return true;
}

static bool _HeadingCalculator_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _HeadingCalculator_Response__ros_msg_type * ros_message = static_cast<_HeadingCalculator_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: turn_value
  {
    cdr >> ros_message->turn_value;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mm_interfaces
size_t get_serialized_size_mm_interfaces__srv__HeadingCalculator_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _HeadingCalculator_Response__ros_msg_type * ros_message = static_cast<const _HeadingCalculator_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name turn_value
  {
    size_t item_size = sizeof(ros_message->turn_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _HeadingCalculator_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_mm_interfaces__srv__HeadingCalculator_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mm_interfaces
size_t max_serialized_size_mm_interfaces__srv__HeadingCalculator_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: turn_value
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _HeadingCalculator_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_mm_interfaces__srv__HeadingCalculator_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_HeadingCalculator_Response = {
  "mm_interfaces::srv",
  "HeadingCalculator_Response",
  _HeadingCalculator_Response__cdr_serialize,
  _HeadingCalculator_Response__cdr_deserialize,
  _HeadingCalculator_Response__get_serialized_size,
  _HeadingCalculator_Response__max_serialized_size
};

static rosidl_message_type_support_t _HeadingCalculator_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_HeadingCalculator_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mm_interfaces, srv, HeadingCalculator_Response)() {
  return &_HeadingCalculator_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "mm_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "mm_interfaces/srv/heading_calculator.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t HeadingCalculator__callbacks = {
  "mm_interfaces::srv",
  "HeadingCalculator",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mm_interfaces, srv, HeadingCalculator_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mm_interfaces, srv, HeadingCalculator_Response)(),
};

static rosidl_service_type_support_t HeadingCalculator__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &HeadingCalculator__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mm_interfaces, srv, HeadingCalculator)() {
  return &HeadingCalculator__handle;
}

#if defined(__cplusplus)
}
#endif
