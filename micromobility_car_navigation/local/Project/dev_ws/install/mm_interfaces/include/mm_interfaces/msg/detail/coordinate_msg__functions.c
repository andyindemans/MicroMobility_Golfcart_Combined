// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mm_interfaces:msg/CoordinateMsg.idl
// generated code does not contain a copyright notice
#include "mm_interfaces/msg/detail/coordinate_msg__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
mm_interfaces__msg__CoordinateMsg__init(mm_interfaces__msg__CoordinateMsg * msg)
{
  if (!msg) {
    return false;
  }
  // latitude
  // longitude
  // heading
  // id
  return true;
}

void
mm_interfaces__msg__CoordinateMsg__fini(mm_interfaces__msg__CoordinateMsg * msg)
{
  if (!msg) {
    return;
  }
  // latitude
  // longitude
  // heading
  // id
}

mm_interfaces__msg__CoordinateMsg *
mm_interfaces__msg__CoordinateMsg__create()
{
  mm_interfaces__msg__CoordinateMsg * msg = (mm_interfaces__msg__CoordinateMsg *)malloc(sizeof(mm_interfaces__msg__CoordinateMsg));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mm_interfaces__msg__CoordinateMsg));
  bool success = mm_interfaces__msg__CoordinateMsg__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
mm_interfaces__msg__CoordinateMsg__destroy(mm_interfaces__msg__CoordinateMsg * msg)
{
  if (msg) {
    mm_interfaces__msg__CoordinateMsg__fini(msg);
  }
  free(msg);
}


bool
mm_interfaces__msg__CoordinateMsg__Sequence__init(mm_interfaces__msg__CoordinateMsg__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  mm_interfaces__msg__CoordinateMsg * data = NULL;
  if (size) {
    data = (mm_interfaces__msg__CoordinateMsg *)calloc(size, sizeof(mm_interfaces__msg__CoordinateMsg));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mm_interfaces__msg__CoordinateMsg__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mm_interfaces__msg__CoordinateMsg__fini(&data[i - 1]);
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
mm_interfaces__msg__CoordinateMsg__Sequence__fini(mm_interfaces__msg__CoordinateMsg__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      mm_interfaces__msg__CoordinateMsg__fini(&array->data[i]);
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

mm_interfaces__msg__CoordinateMsg__Sequence *
mm_interfaces__msg__CoordinateMsg__Sequence__create(size_t size)
{
  mm_interfaces__msg__CoordinateMsg__Sequence * array = (mm_interfaces__msg__CoordinateMsg__Sequence *)malloc(sizeof(mm_interfaces__msg__CoordinateMsg__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = mm_interfaces__msg__CoordinateMsg__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
mm_interfaces__msg__CoordinateMsg__Sequence__destroy(mm_interfaces__msg__CoordinateMsg__Sequence * array)
{
  if (array) {
    mm_interfaces__msg__CoordinateMsg__Sequence__fini(array);
  }
  free(array);
}
