// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mm_interfaces:msg/CurrentNextLocation.idl
// generated code does not contain a copyright notice
#include "mm_interfaces/msg/detail/current_next_location__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `current_position`
// Member `next_position`
#include "mm_interfaces/msg/detail/coordinate_msg__functions.h"

bool
mm_interfaces__msg__CurrentNextLocation__init(mm_interfaces__msg__CurrentNextLocation * msg)
{
  if (!msg) {
    return false;
  }
  // current_position
  if (!mm_interfaces__msg__CoordinateMsg__init(&msg->current_position)) {
    mm_interfaces__msg__CurrentNextLocation__fini(msg);
    return false;
  }
  // next_position
  if (!mm_interfaces__msg__CoordinateMsg__init(&msg->next_position)) {
    mm_interfaces__msg__CurrentNextLocation__fini(msg);
    return false;
  }
  return true;
}

void
mm_interfaces__msg__CurrentNextLocation__fini(mm_interfaces__msg__CurrentNextLocation * msg)
{
  if (!msg) {
    return;
  }
  // current_position
  mm_interfaces__msg__CoordinateMsg__fini(&msg->current_position);
  // next_position
  mm_interfaces__msg__CoordinateMsg__fini(&msg->next_position);
}

mm_interfaces__msg__CurrentNextLocation *
mm_interfaces__msg__CurrentNextLocation__create()
{
  mm_interfaces__msg__CurrentNextLocation * msg = (mm_interfaces__msg__CurrentNextLocation *)malloc(sizeof(mm_interfaces__msg__CurrentNextLocation));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mm_interfaces__msg__CurrentNextLocation));
  bool success = mm_interfaces__msg__CurrentNextLocation__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
mm_interfaces__msg__CurrentNextLocation__destroy(mm_interfaces__msg__CurrentNextLocation * msg)
{
  if (msg) {
    mm_interfaces__msg__CurrentNextLocation__fini(msg);
  }
  free(msg);
}


bool
mm_interfaces__msg__CurrentNextLocation__Sequence__init(mm_interfaces__msg__CurrentNextLocation__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  mm_interfaces__msg__CurrentNextLocation * data = NULL;
  if (size) {
    data = (mm_interfaces__msg__CurrentNextLocation *)calloc(size, sizeof(mm_interfaces__msg__CurrentNextLocation));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mm_interfaces__msg__CurrentNextLocation__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mm_interfaces__msg__CurrentNextLocation__fini(&data[i - 1]);
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
mm_interfaces__msg__CurrentNextLocation__Sequence__fini(mm_interfaces__msg__CurrentNextLocation__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      mm_interfaces__msg__CurrentNextLocation__fini(&array->data[i]);
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

mm_interfaces__msg__CurrentNextLocation__Sequence *
mm_interfaces__msg__CurrentNextLocation__Sequence__create(size_t size)
{
  mm_interfaces__msg__CurrentNextLocation__Sequence * array = (mm_interfaces__msg__CurrentNextLocation__Sequence *)malloc(sizeof(mm_interfaces__msg__CurrentNextLocation__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = mm_interfaces__msg__CurrentNextLocation__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
mm_interfaces__msg__CurrentNextLocation__Sequence__destroy(mm_interfaces__msg__CurrentNextLocation__Sequence * array)
{
  if (array) {
    mm_interfaces__msg__CurrentNextLocation__Sequence__fini(array);
  }
  free(array);
}
