// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mm_interfaces:msg/CarInstructions.idl
// generated code does not contain a copyright notice
#include "mm_interfaces/msg/detail/car_instructions__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
mm_interfaces__msg__CarInstructions__init(mm_interfaces__msg__CarInstructions * msg)
{
  if (!msg) {
    return false;
  }
  // steering
  // steering_range
  msg->steering_range[0] = 0.0f;
  msg->steering_range[1] = 360.0f;
  // throttle
  // throttle_range
  msg->throttle_range[0] = 0l;
  msg->throttle_range[1] = 100l;
  return true;
}

void
mm_interfaces__msg__CarInstructions__fini(mm_interfaces__msg__CarInstructions * msg)
{
  if (!msg) {
    return;
  }
  // steering
  // steering_range
  // throttle
  // throttle_range
}

mm_interfaces__msg__CarInstructions *
mm_interfaces__msg__CarInstructions__create()
{
  mm_interfaces__msg__CarInstructions * msg = (mm_interfaces__msg__CarInstructions *)malloc(sizeof(mm_interfaces__msg__CarInstructions));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mm_interfaces__msg__CarInstructions));
  bool success = mm_interfaces__msg__CarInstructions__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
mm_interfaces__msg__CarInstructions__destroy(mm_interfaces__msg__CarInstructions * msg)
{
  if (msg) {
    mm_interfaces__msg__CarInstructions__fini(msg);
  }
  free(msg);
}


bool
mm_interfaces__msg__CarInstructions__Sequence__init(mm_interfaces__msg__CarInstructions__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  mm_interfaces__msg__CarInstructions * data = NULL;
  if (size) {
    data = (mm_interfaces__msg__CarInstructions *)calloc(size, sizeof(mm_interfaces__msg__CarInstructions));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mm_interfaces__msg__CarInstructions__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mm_interfaces__msg__CarInstructions__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
mm_interfaces__msg__CarInstructions__Sequence__fini(mm_interfaces__msg__CarInstructions__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      mm_interfaces__msg__CarInstructions__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

mm_interfaces__msg__CarInstructions__Sequence *
mm_interfaces__msg__CarInstructions__Sequence__create(size_t size)
{
  mm_interfaces__msg__CarInstructions__Sequence * array = (mm_interfaces__msg__CarInstructions__Sequence *)malloc(sizeof(mm_interfaces__msg__CarInstructions__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = mm_interfaces__msg__CarInstructions__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
mm_interfaces__msg__CarInstructions__Sequence__destroy(mm_interfaces__msg__CarInstructions__Sequence * array)
{
  if (array) {
    mm_interfaces__msg__CarInstructions__Sequence__fini(array);
  }
  free(array);
}
