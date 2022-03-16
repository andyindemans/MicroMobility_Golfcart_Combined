// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from mm_interfaces:msg/CameraImage.idl
// generated code does not contain a copyright notice

#ifndef MM_INTERFACES__MSG__DETAIL__CAMERA_IMAGE__FUNCTIONS_H_
#define MM_INTERFACES__MSG__DETAIL__CAMERA_IMAGE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "mm_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "mm_interfaces/msg/detail/camera_image__struct.h"

/// Initialize msg/CameraImage message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * mm_interfaces__msg__CameraImage
 * )) before or use
 * mm_interfaces__msg__CameraImage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_mm_interfaces
bool
mm_interfaces__msg__CameraImage__init(mm_interfaces__msg__CameraImage * msg);

/// Finalize msg/CameraImage message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mm_interfaces
void
mm_interfaces__msg__CameraImage__fini(mm_interfaces__msg__CameraImage * msg);

/// Create msg/CameraImage message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * mm_interfaces__msg__CameraImage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mm_interfaces
mm_interfaces__msg__CameraImage *
mm_interfaces__msg__CameraImage__create();

/// Destroy msg/CameraImage message.
/**
 * It calls
 * mm_interfaces__msg__CameraImage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mm_interfaces
void
mm_interfaces__msg__CameraImage__destroy(mm_interfaces__msg__CameraImage * msg);


/// Initialize array of msg/CameraImage messages.
/**
 * It allocates the memory for the number of elements and calls
 * mm_interfaces__msg__CameraImage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_mm_interfaces
bool
mm_interfaces__msg__CameraImage__Sequence__init(mm_interfaces__msg__CameraImage__Sequence * array, size_t size);

/// Finalize array of msg/CameraImage messages.
/**
 * It calls
 * mm_interfaces__msg__CameraImage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mm_interfaces
void
mm_interfaces__msg__CameraImage__Sequence__fini(mm_interfaces__msg__CameraImage__Sequence * array);

/// Create array of msg/CameraImage messages.
/**
 * It allocates the memory for the array and calls
 * mm_interfaces__msg__CameraImage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mm_interfaces
mm_interfaces__msg__CameraImage__Sequence *
mm_interfaces__msg__CameraImage__Sequence__create(size_t size);

/// Destroy array of msg/CameraImage messages.
/**
 * It calls
 * mm_interfaces__msg__CameraImage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mm_interfaces
void
mm_interfaces__msg__CameraImage__Sequence__destroy(mm_interfaces__msg__CameraImage__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // MM_INTERFACES__MSG__DETAIL__CAMERA_IMAGE__FUNCTIONS_H_
