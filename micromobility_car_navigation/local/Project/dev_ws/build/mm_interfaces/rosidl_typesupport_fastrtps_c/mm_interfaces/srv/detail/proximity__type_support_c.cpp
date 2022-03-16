// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from mm_interfaces:srv/Proximity.idl
// generated code does not contain a copyright notice
#include "mm_interfaces/srv/detail/proximity__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "mm_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "mm_interfaces/srv/detail/proximity__struct.h"
#include "mm_interfaces/srv/detail/proximity__functions.h"
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

#include "mm_interfaces/msg/detail/coordinate_msg__functions.h"  // current_position, next_node

// forward declare type support functions
size_t get_serialized_size_mm_interfaces__msg__CoordinateMsg(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_mm_interfaces__msg__CoordinateMsg(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mm_interfaces, msg, CoordinateMsg)();


using _Proximity_Request__ros_msg_type = mm_interfaces__srv__Proximity_Request;

static bool _Proximity_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Proximity_Request__ros_msg_type * ros_message = static_cast<const _Proximity_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: current_position
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, mm_interfaces, msg, CoordinateMsg
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->current_position, cdr))
    {
      return false;
    }
  }

  // Field name: next_node
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, mm_interfaces, msg, CoordinateMsg
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->next_node, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _Proximity_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Proximity_Request__ros_msg_type * ros_message = static_cast<_Proximity_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: current_position
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, mm_interfaces, msg, CoordinateMsg
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->current_position))
    {
      return false;
    }
  }

  // Field name: next_node
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, mm_interfaces, msg, CoordinateMsg
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->next_node))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mm_interfaces
size_t get_serialized_size_mm_interfaces__srv__Proximity_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Proximity_Request__ros_msg_type * ros_message = static_cast<const _Proximity_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name current_position

  current_alignment += get_serialized_size_mm_interfaces__msg__CoordinateMsg(
    &(ros_message->current_position), current_alignment);
  // field.name next_node

  current_alignment += get_serialized_size_mm_interfaces__msg__CoordinateMsg(
    &(ros_message->next_node), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _Proximity_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_mm_interfaces__srv__Proximity_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mm_interfaces
size_t max_serialized_size_mm_interfaces__srv__Proximity_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: current_position
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_mm_interfaces__msg__CoordinateMsg(
        full_bounded, current_alignment);
    }
  }
  // member: next_node
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_mm_interfaces__msg__CoordinateMsg(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _Proximity_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_mm_interfaces__srv__Proximity_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Proximity_Request = {
  "mm_interfaces::srv",
  "Proximity_Request",
  _Proximity_Request__cdr_serialize,
  _Proximity_Request__cdr_deserialize,
  _Proximity_Request__get_serialized_size,
  _Proximity_Request__max_serialized_size
};

static rosidl_message_type_support_t _Proximity_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Proximity_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mm_interfaces, srv, Proximity_Request)() {
  return &_Proximity_Request__type_support;
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
// #include "mm_interfaces/srv/detail/proximity__struct.h"
// already included above
// #include "mm_interfaces/srv/detail/proximity__functions.h"
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


using _Proximity_Response__ros_msg_type = mm_interfaces__srv__Proximity_Response;

static bool _Proximity_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Proximity_Response__ros_msg_type * ros_message = static_cast<const _Proximity_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: distance_to
  {
    cdr << ros_message->distance_to;
  }

  return true;
}

static bool _Proximity_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Proximity_Response__ros_msg_type * ros_message = static_cast<_Proximity_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: distance_to
  {
    cdr >> ros_message->distance_to;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mm_interfaces
size_t get_serialized_size_mm_interfaces__srv__Proximity_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Proximity_Response__ros_msg_type * ros_message = static_cast<const _Proximity_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name distance_to
  {
    size_t item_size = sizeof(ros_message->distance_to);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Proximity_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_mm_interfaces__srv__Proximity_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mm_interfaces
size_t max_serialized_size_mm_interfaces__srv__Proximity_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: distance_to
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _Proximity_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_mm_interfaces__srv__Proximity_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Proximity_Response = {
  "mm_interfaces::srv",
  "Proximity_Response",
  _Proximity_Response__cdr_serialize,
  _Proximity_Response__cdr_deserialize,
  _Proximity_Response__get_serialized_size,
  _Proximity_Response__max_serialized_size
};

static rosidl_message_type_support_t _Proximity_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Proximity_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mm_interfaces, srv, Proximity_Response)() {
  return &_Proximity_Response__type_support;
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
#include "mm_interfaces/srv/proximity.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t Proximity__callbacks = {
  "mm_interfaces::srv",
  "Proximity",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mm_interfaces, srv, Proximity_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mm_interfaces, srv, Proximity_Response)(),
};

static rosidl_service_type_support_t Proximity__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &Proximity__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mm_interfaces, srv, Proximity)() {
  return &Proximity__handle;
}

#if defined(__cplusplus)
}
#endif
