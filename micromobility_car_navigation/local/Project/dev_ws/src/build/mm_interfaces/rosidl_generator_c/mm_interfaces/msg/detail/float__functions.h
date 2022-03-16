// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from mm_interfaces:msg/Float.idl
// generated code does not contain a copyright notice

#ifndef MM_INTERFACES__MSG__DETAIL__FLOAT__FUNCTIONS_H_
#define MM_INTERFACES__MSG__DETAIL__FLOAT__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "mm_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "mm_interfaces/msg/detail/float__struct.h"

/// Initialize msg/Float message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * mm_interfaces__msg__Float
 * )) before or use
 * mm_interfaces__msg__Float__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_mm_interfaces
bool
mm_interfaces__msg__Float__init(mm_interfaces__msg__Float * msg);

/// Finalize msg/Float message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mm_interfaces
void
mm_interfaces__msg__Float__fini(mm_interfaces__msg__Float * msg);

/// Create msg/Float message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * mm_interfaces__msg__Float__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mm_interfaces
mm_interfaces__msg__Float *
mm_interfaces__msg__Float__create();

/// Destroy msg/Float message.
/**
 * It calls
 * mm_interfaces__msg__Float__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mm_interfaces
void
mm_interfaces__msg__Float__destroy(mm_interfaces__msg__Float * msg);


/// Initialize array of msg/Float messages.
/**
 * It allocates the memory for the number of elements and calls
 * mm_interfaces__msg__Float__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_mm_interfaces
bool
mm_interfaces__msg__Float__Sequence__init(mm_interfaces__msg__Float__Sequence * array, size_t size);

/// Finalize array of msg/Float messages.
/**
 * It calls
 * mm_interfaces__msg__Float__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mm_interfaces
void
mm_interfaces__msg__Float__Sequence__fini(mm_interfaces__msg__Float__Sequence * array);

/// Create array of msg/Float messages.
/**
 * It allocates the memory for the array and calls
 * mm_interfaces__msg__Float__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mm_interfaces
mm_interfaces__msg__Float__Sequence *
mm_interfaces__msg__Float__Sequence__create(size_t size);

/// Destroy array of msg/Float messages.
/**
 * It calls
 * mm_interfaces__msg__Float__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mm_interfaces
void
mm_interfaces__msg__Float__Sequence__destroy(mm_interfaces__msg__Float__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // MM_INTERFACES__MSG__DETAIL__FLOAT__FUNCTIONS_H_
