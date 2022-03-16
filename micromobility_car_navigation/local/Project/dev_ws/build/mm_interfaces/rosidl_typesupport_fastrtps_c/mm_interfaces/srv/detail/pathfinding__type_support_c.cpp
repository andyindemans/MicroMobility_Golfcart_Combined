// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from mm_interfaces:srv/Pathfinding.idl
// generated code does not contain a copyright notice
#include "mm_interfaces/srv/detail/pathfinding__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "mm_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "mm_interfaces/srv/detail/pathfinding__struct.h"
#include "mm_interfaces/srv/detail/pathfinding__functions.h"
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


using _Pathfinding_Request__ros_msg_type = mm_interfaces__srv__Pathfinding_Request;

static bool _Pathfinding_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Pathfinding_Request__ros_msg_type * ros_message = static_cast<const _Pathfinding_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: current_long
  {
    cdr << ros_message->current_long;
  }

  // Field name: current_lat
  {
    cdr << ros_message->current_lat;
  }

  // Field name: end_node_id
  {
    cdr << ros_message->end_node_id;
  }

  return true;
}

static bool _Pathfinding_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Pathfinding_Request__ros_msg_type * ros_message = static_cast<_Pathfinding_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: current_long
  {
    cdr >> ros_message->current_long;
  }

  // Field name: current_lat
  {
    cdr >> ros_message->current_lat;
  }

  // Field name: end_node_id
  {
    cdr >> ros_message->end_node_id;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mm_interfaces
size_t get_serialized_size_mm_interfaces__srv__Pathfinding_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Pathfinding_Request__ros_msg_type * ros_message = static_cast<const _Pathfinding_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name current_long
  {
    size_t item_size = sizeof(ros_message->current_long);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name current_lat
  {
    size_t item_size = sizeof(ros_message->current_lat);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name end_node_id
  {
    size_t item_size = sizeof(ros_message->end_node_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Pathfinding_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_mm_interfaces__srv__Pathfinding_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mm_interfaces
size_t max_serialized_size_mm_interfaces__srv__Pathfinding_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: current_long
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: current_lat
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: end_node_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _Pathfinding_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_mm_interfaces__srv__Pathfinding_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Pathfinding_Request = {
  "mm_interfaces::srv",
  "Pathfinding_Request",
  _Pathfinding_Request__cdr_serialize,
  _Pathfinding_Request__cdr_deserialize,
  _Pathfinding_Request__get_serialized_size,
  _Pathfinding_Request__max_serialized_size
};

static rosidl_message_type_support_t _Pathfinding_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Pathfinding_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mm_interfaces, srv, Pathfinding_Request)() {
  return &_Pathfinding_Request__type_support;
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
// #include "mm_interfaces/srv/detail/pathfinding__struct.h"
// already included above
// #include "mm_interfaces/srv/detail/pathfinding__functions.h"
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

#include "mm_interfaces/msg/detail/coordinate_msg__functions.h"  // path

// forward declare type support functions
size_t get_serialized_size_mm_interfaces__msg__CoordinateMsg(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_mm_interfaces__msg__CoordinateMsg(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mm_interfaces, msg, CoordinateMsg)();


using _Pathfinding_Response__ros_msg_type = mm_interfaces__srv__Pathfinding_Response;

static bool _Pathfinding_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Pathfinding_Response__ros_msg_type * ros_message = static_cast<const _Pathfinding_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: path
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, mm_interfaces, msg, CoordinateMsg
      )()->data);
    size_t size = ros_message->path.size;
    auto array_ptr = ros_message->path.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  return true;
}

static bool _Pathfinding_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Pathfinding_Response__ros_msg_type * ros_message = static_cast<_Pathfinding_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: path
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, mm_interfaces, msg, CoordinateMsg
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->path.data) {
      mm_interfaces__msg__CoordinateMsg__Sequence__fini(&ros_message->path);
    }
    if (!mm_interfaces__msg__CoordinateMsg__Sequence__init(&ros_message->path, size)) {
      return "failed to create array for field 'path'";
    }
    auto array_ptr = ros_message->path.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mm_interfaces
size_t get_serialized_size_mm_interfaces__srv__Pathfinding_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Pathfinding_Response__ros_msg_type * ros_message = static_cast<const _Pathfinding_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name path
  {
    size_t array_size = ros_message->path.size;
    auto array_ptr = ros_message->path.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_mm_interfaces__msg__CoordinateMsg(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Pathfinding_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_mm_interfaces__srv__Pathfinding_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mm_interfaces
size_t max_serialized_size_mm_interfaces__srv__Pathfinding_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: path
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_mm_interfaces__msg__CoordinateMsg(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _Pathfinding_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_mm_interfaces__srv__Pathfinding_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Pathfinding_Response = {
  "mm_interfaces::srv",
  "Pathfinding_Response",
  _Pathfinding_Response__cdr_serialize,
  _Pathfinding_Response__cdr_deserialize,
  _Pathfinding_Response__get_serialized_size,
  _Pathfinding_Response__max_serialized_size
};

static rosidl_message_type_support_t _Pathfinding_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Pathfinding_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mm_interfaces, srv, Pathfinding_Response)() {
  return &_Pathfinding_Response__type_support;
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
#include "mm_interfaces/srv/pathfinding.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t Pathfinding__callbacks = {
  "mm_interfaces::srv",
  "Pathfinding",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mm_interfaces, srv, Pathfinding_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mm_interfaces, srv, Pathfinding_Response)(),
};

static rosidl_service_type_support_t Pathfinding__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &Pathfinding__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mm_interfaces, srv, Pathfinding)() {
  return &Pathfinding__handle;
}

#if defined(__cplusplus)
}
#endif
