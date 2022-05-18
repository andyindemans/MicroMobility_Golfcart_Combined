// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from mm_interfaces:msg/CarInstructions.idl
// generated code does not contain a copyright notice
#include "mm_interfaces/msg/detail/car_instructions__rosidl_typesupport_fastrtps_cpp.hpp"
#include "mm_interfaces/msg/detail/car_instructions__struct.hpp"

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

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mm_interfaces
cdr_serialize(
  const mm_interfaces::msg::CarInstructions & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: steering
  cdr << ros_message.steering;
  // Member: steering_range
  {
    cdr << ros_message.steering_range;
  }
  // Member: throttle
  cdr << ros_message.throttle;
  // Member: throttle_range
  {
    cdr << ros_message.throttle_range;
  }
  // Member: angle
  cdr << ros_message.angle;
  // Member: angle_range
  {
    cdr << ros_message.angle_range;
  }
  // Member: distance
  cdr << ros_message.distance;
  // Member: distance_range
  {
    cdr << ros_message.distance_range;
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mm_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  mm_interfaces::msg::CarInstructions & ros_message)
{
  // Member: steering
  cdr >> ros_message.steering;

  // Member: steering_range
  {
    cdr >> ros_message.steering_range;
  }

  // Member: throttle
  cdr >> ros_message.throttle;

  // Member: throttle_range
  {
    cdr >> ros_message.throttle_range;
  }

  // Member: angle
  cdr >> ros_message.angle;

  // Member: angle_range
  {
    cdr >> ros_message.angle_range;
  }

  // Member: distance
  cdr >> ros_message.distance;

  // Member: distance_range
  {
    cdr >> ros_message.distance_range;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mm_interfaces
get_serialized_size(
  const mm_interfaces::msg::CarInstructions & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: steering
  {
    size_t item_size = sizeof(ros_message.steering);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: steering_range
  {
    size_t array_size = 2;
    size_t item_size = sizeof(ros_message.steering_range[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: throttle
  {
    size_t item_size = sizeof(ros_message.throttle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: throttle_range
  {
    size_t array_size = 2;
    size_t item_size = sizeof(ros_message.throttle_range[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: angle
  {
    size_t item_size = sizeof(ros_message.angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: angle_range
  {
    size_t array_size = 2;
    size_t item_size = sizeof(ros_message.angle_range[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: distance
  {
    size_t item_size = sizeof(ros_message.distance);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: distance_range
  {
    size_t array_size = 2;
    size_t item_size = sizeof(ros_message.distance_range[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mm_interfaces
max_serialized_size_CarInstructions(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: steering
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: steering_range
  {
    size_t array_size = 2;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: throttle
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: throttle_range
  {
    size_t array_size = 2;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: angle
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: angle_range
  {
    size_t array_size = 2;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: distance
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: distance_range
  {
    size_t array_size = 2;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _CarInstructions__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const mm_interfaces::msg::CarInstructions *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _CarInstructions__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<mm_interfaces::msg::CarInstructions *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _CarInstructions__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const mm_interfaces::msg::CarInstructions *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _CarInstructions__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_CarInstructions(full_bounded, 0);
}

static message_type_support_callbacks_t _CarInstructions__callbacks = {
  "mm_interfaces::msg",
  "CarInstructions",
  _CarInstructions__cdr_serialize,
  _CarInstructions__cdr_deserialize,
  _CarInstructions__get_serialized_size,
  _CarInstructions__max_serialized_size
};

static rosidl_message_type_support_t _CarInstructions__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_CarInstructions__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace mm_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_mm_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<mm_interfaces::msg::CarInstructions>()
{
  return &mm_interfaces::msg::typesupport_fastrtps_cpp::_CarInstructions__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mm_interfaces, msg, CarInstructions)() {
  return &mm_interfaces::msg::typesupport_fastrtps_cpp::_CarInstructions__handle;
}

#ifdef __cplusplus
}
#endif
