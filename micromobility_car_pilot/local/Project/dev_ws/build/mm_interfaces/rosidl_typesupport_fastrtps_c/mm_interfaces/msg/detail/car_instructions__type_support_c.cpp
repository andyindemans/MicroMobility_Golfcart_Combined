// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from mm_interfaces:msg/CarInstructions.idl
// generated code does not contain a copyright notice
#include "mm_interfaces/msg/detail/car_instructions__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "mm_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "mm_interfaces/msg/detail/car_instructions__struct.h"
#include "mm_interfaces/msg/detail/car_instructions__functions.h"
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


using _CarInstructions__ros_msg_type = mm_interfaces__msg__CarInstructions;

static bool _CarInstructions__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _CarInstructions__ros_msg_type * ros_message = static_cast<const _CarInstructions__ros_msg_type *>(untyped_ros_message);
  // Field name: steering
  {
    cdr << ros_message->steering;
  }

  // Field name: steering_range
  {
    size_t size = 2;
    auto array_ptr = ros_message->steering_range;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: throttle
  {
    cdr << ros_message->throttle;
  }

  // Field name: throttle_range
  {
    size_t size = 2;
    auto array_ptr = ros_message->throttle_range;
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _CarInstructions__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _CarInstructions__ros_msg_type * ros_message = static_cast<_CarInstructions__ros_msg_type *>(untyped_ros_message);
  // Field name: steering
  {
    cdr >> ros_message->steering;
  }

  // Field name: steering_range
  {
    size_t size = 2;
    auto array_ptr = ros_message->steering_range;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: throttle
  {
    cdr >> ros_message->throttle;
  }

  // Field name: throttle_range
  {
    size_t size = 2;
    auto array_ptr = ros_message->throttle_range;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mm_interfaces
size_t get_serialized_size_mm_interfaces__msg__CarInstructions(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _CarInstructions__ros_msg_type * ros_message = static_cast<const _CarInstructions__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name steering
  {
    size_t item_size = sizeof(ros_message->steering);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name steering_range
  {
    size_t array_size = 2;
    auto array_ptr = ros_message->steering_range;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name throttle
  {
    size_t item_size = sizeof(ros_message->throttle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name throttle_range
  {
    size_t array_size = 2;
    auto array_ptr = ros_message->throttle_range;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _CarInstructions__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_mm_interfaces__msg__CarInstructions(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mm_interfaces
size_t max_serialized_size_mm_interfaces__msg__CarInstructions(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: steering
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: steering_range
  {
    size_t array_size = 2;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: throttle
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: throttle_range
  {
    size_t array_size = 2;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _CarInstructions__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_mm_interfaces__msg__CarInstructions(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_CarInstructions = {
  "mm_interfaces::msg",
  "CarInstructions",
  _CarInstructions__cdr_serialize,
  _CarInstructions__cdr_deserialize,
  _CarInstructions__get_serialized_size,
  _CarInstructions__max_serialized_size
};

static rosidl_message_type_support_t _CarInstructions__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_CarInstructions,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mm_interfaces, msg, CarInstructions)() {
  return &_CarInstructions__type_support;
}

#if defined(__cplusplus)
}
#endif
