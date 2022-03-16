// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mm_interfaces:srv/HeadingCalculator.idl
// generated code does not contain a copyright notice
#include "mm_interfaces/srv/detail/heading_calculator__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

bool
mm_interfaces__srv__HeadingCalculator_Request__init(mm_interfaces__srv__HeadingCalculator_Request * msg)
{
  if (!msg) {
    return false;
  }
  // cart_bearing
  // cart_lat
  // cart_long
  // next_node_lat
  // next_node_long
  return true;
}

void
mm_interfaces__srv__HeadingCalculator_Request__fini(mm_interfaces__srv__HeadingCalculator_Request * msg)
{
  if (!msg) {
    return;
  }
  // cart_bearing
  // cart_lat
  // cart_long
  // next_node_lat
  // next_node_long
}

mm_interfaces__srv__HeadingCalculator_Request *
mm_interfaces__srv__HeadingCalculator_Request__create()
{
  mm_interfaces__srv__HeadingCalculator_Request * msg = (mm_interfaces__srv__HeadingCalculator_Request *)malloc(sizeof(mm_interfaces__srv__HeadingCalculator_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mm_interfaces__srv__HeadingCalculator_Request));
  bool success = mm_interfaces__srv__HeadingCalculator_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
mm_interfaces__srv__HeadingCalculator_Request__destroy(mm_interfaces__srv__HeadingCalculator_Request * msg)
{
  if (msg) {
    mm_interfaces__srv__HeadingCalculator_Request__fini(msg);
  }
  free(msg);
}


bool
mm_interfaces__srv__HeadingCalculator_Request__Sequence__init(mm_interfaces__srv__HeadingCalculator_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  mm_interfaces__srv__HeadingCalculator_Request * data = NULL;
  if (size) {
    data = (mm_interfaces__srv__HeadingCalculator_Request *)calloc(size, sizeof(mm_interfaces__srv__HeadingCalculator_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mm_interfaces__srv__HeadingCalculator_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mm_interfaces__srv__HeadingCalculator_Request__fini(&data[i - 1]);
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
mm_interfaces__srv__HeadingCalculator_Request__Sequence__fini(mm_interfaces__srv__HeadingCalculator_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      mm_interfaces__srv__HeadingCalculator_Request__fini(&array->data[i]);
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

mm_interfaces__srv__HeadingCalculator_Request__Sequence *
mm_interfaces__srv__HeadingCalculator_Request__Sequence__create(size_t size)
{
  mm_interfaces__srv__HeadingCalculator_Request__Sequence * array = (mm_interfaces__srv__HeadingCalculator_Request__Sequence *)malloc(sizeof(mm_interfaces__srv__HeadingCalculator_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = mm_interfaces__srv__HeadingCalculator_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
mm_interfaces__srv__HeadingCalculator_Request__Sequence__destroy(mm_interfaces__srv__HeadingCalculator_Request__Sequence * array)
{
  if (array) {
    mm_interfaces__srv__HeadingCalculator_Request__Sequence__fini(array);
  }
  free(array);
}


bool
mm_interfaces__srv__HeadingCalculator_Response__init(mm_interfaces__srv__HeadingCalculator_Response * msg)
{
  if (!msg) {
    return false;
  }
  // turn_value
  return true;
}

void
mm_interfaces__srv__HeadingCalculator_Response__fini(mm_interfaces__srv__HeadingCalculator_Response * msg)
{
  if (!msg) {
    return;
  }
  // turn_value
}

mm_interfaces__srv__HeadingCalculator_Response *
mm_interfaces__srv__HeadingCalculator_Response__create()
{
  mm_interfaces__srv__HeadingCalculator_Response * msg = (mm_interfaces__srv__HeadingCalculator_Response *)malloc(sizeof(mm_interfaces__srv__HeadingCalculator_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mm_interfaces__srv__HeadingCalculator_Response));
  bool success = mm_interfaces__srv__HeadingCalculator_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
mm_interfaces__srv__HeadingCalculator_Response__destroy(mm_interfaces__srv__HeadingCalculator_Response * msg)
{
  if (msg) {
    mm_interfaces__srv__HeadingCalculator_Response__fini(msg);
  }
  free(msg);
}


bool
mm_interfaces__srv__HeadingCalculator_Response__Sequence__init(mm_interfaces__srv__HeadingCalculator_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  mm_interfaces__srv__HeadingCalculator_Response * data = NULL;
  if (size) {
    data = (mm_interfaces__srv__HeadingCalculator_Response *)calloc(size, sizeof(mm_interfaces__srv__HeadingCalculator_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mm_interfaces__srv__HeadingCalculator_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mm_interfaces__srv__HeadingCalculator_Response__fini(&data[i - 1]);
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
mm_interfaces__srv__HeadingCalculator_Response__Sequence__fini(mm_interfaces__srv__HeadingCalculator_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      mm_interfaces__srv__HeadingCalculator_Response__fini(&array->data[i]);
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

mm_interfaces__srv__HeadingCalculator_Response__Sequence *
mm_interfaces__srv__HeadingCalculator_Response__Sequence__create(size_t size)
{
  mm_interfaces__srv__HeadingCalculator_Response__Sequence * array = (mm_interfaces__srv__HeadingCalculator_Response__Sequence *)malloc(sizeof(mm_interfaces__srv__HeadingCalculator_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = mm_interfaces__srv__HeadingCalculator_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
mm_interfaces__srv__HeadingCalculator_Response__Sequence__destroy(mm_interfaces__srv__HeadingCalculator_Response__Sequence * array)
{
  if (array) {
    mm_interfaces__srv__HeadingCalculator_Response__Sequence__fini(array);
  }
  free(array);
}
