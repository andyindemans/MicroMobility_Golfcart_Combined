// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mm_interfaces:msg/Int.idl
// generated code does not contain a copyright notice
#include "mm_interfaces/msg/detail/int__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
mm_interfaces__msg__Int__init(mm_interfaces__msg__Int * msg)
{
  if (!msg) {
    return false;
  }
  // sensor_error
  // data
  return true;
}

void
mm_interfaces__msg__Int__fini(mm_interfaces__msg__Int * msg)
{
  if (!msg) {
    return;
  }
  // sensor_error
  // data
}

mm_interfaces__msg__Int *
mm_interfaces__msg__Int__create()
{
  mm_interfaces__msg__Int * msg = (mm_interfaces__msg__Int *)malloc(sizeof(mm_interfaces__msg__Int));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mm_interfaces__msg__Int));
  bool success = mm_interfaces__msg__Int__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
mm_interfaces__msg__Int__destroy(mm_interfaces__msg__Int * msg)
{
  if (msg) {
    mm_interfaces__msg__Int__fini(msg);
  }
  free(msg);
}


bool
mm_interfaces__msg__Int__Sequence__init(mm_interfaces__msg__Int__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  mm_interfaces__msg__Int * data = NULL;
  if (size) {
    data = (mm_interfaces__msg__Int *)calloc(size, sizeof(mm_interfaces__msg__Int));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mm_interfaces__msg__Int__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mm_interfaces__msg__Int__fini(&data[i - 1]);
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
mm_interfaces__msg__Int__Sequence__fini(mm_interfaces__msg__Int__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      mm_interfaces__msg__Int__fini(&array->data[i]);
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

mm_interfaces__msg__Int__Sequence *
mm_interfaces__msg__Int__Sequence__create(size_t size)
{
  mm_interfaces__msg__Int__Sequence * array = (mm_interfaces__msg__Int__Sequence *)malloc(sizeof(mm_interfaces__msg__Int__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = mm_interfaces__msg__Int__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
mm_interfaces__msg__Int__Sequence__destroy(mm_interfaces__msg__Int__Sequence * array)
{
  if (array) {
    mm_interfaces__msg__Int__Sequence__fini(array);
  }
  free(array);
}
