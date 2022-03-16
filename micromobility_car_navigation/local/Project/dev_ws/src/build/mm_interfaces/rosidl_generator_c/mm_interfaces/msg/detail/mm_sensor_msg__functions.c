// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mm_interfaces:msg/MmSensorMsg.idl
// generated code does not contain a copyright notice
#include "mm_interfaces/msg/detail/mm_sensor_msg__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `image`
// Member `depth_image`
#include "sensor_msgs/msg/detail/image__functions.h"
// Member `error_sensors`
#include "rosidl_runtime_c/string_functions.h"

bool
mm_interfaces__msg__MmSensorMsg__init(mm_interfaces__msg__MmSensorMsg * msg)
{
  if (!msg) {
    return false;
  }
  // steer
  // gas
  // brake
  // image
  if (!sensor_msgs__msg__Image__init(&msg->image)) {
    mm_interfaces__msg__MmSensorMsg__fini(msg);
    return false;
  }
  // depth_image
  if (!sensor_msgs__msg__Image__init(&msg->depth_image)) {
    mm_interfaces__msg__MmSensorMsg__fini(msg);
    return false;
  }
  // error_sensors
  if (!rosidl_runtime_c__String__Sequence__init(&msg->error_sensors, 0)) {
    mm_interfaces__msg__MmSensorMsg__fini(msg);
    return false;
  }
  return true;
}

void
mm_interfaces__msg__MmSensorMsg__fini(mm_interfaces__msg__MmSensorMsg * msg)
{
  if (!msg) {
    return;
  }
  // steer
  // gas
  // brake
  // image
  sensor_msgs__msg__Image__fini(&msg->image);
  // depth_image
  sensor_msgs__msg__Image__fini(&msg->depth_image);
  // error_sensors
  rosidl_runtime_c__String__Sequence__fini(&msg->error_sensors);
}

mm_interfaces__msg__MmSensorMsg *
mm_interfaces__msg__MmSensorMsg__create()
{
  mm_interfaces__msg__MmSensorMsg * msg = (mm_interfaces__msg__MmSensorMsg *)malloc(sizeof(mm_interfaces__msg__MmSensorMsg));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mm_interfaces__msg__MmSensorMsg));
  bool success = mm_interfaces__msg__MmSensorMsg__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
mm_interfaces__msg__MmSensorMsg__destroy(mm_interfaces__msg__MmSensorMsg * msg)
{
  if (msg) {
    mm_interfaces__msg__MmSensorMsg__fini(msg);
  }
  free(msg);
}


bool
mm_interfaces__msg__MmSensorMsg__Sequence__init(mm_interfaces__msg__MmSensorMsg__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  mm_interfaces__msg__MmSensorMsg * data = NULL;
  if (size) {
    data = (mm_interfaces__msg__MmSensorMsg *)calloc(size, sizeof(mm_interfaces__msg__MmSensorMsg));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mm_interfaces__msg__MmSensorMsg__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mm_interfaces__msg__MmSensorMsg__fini(&data[i - 1]);
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
mm_interfaces__msg__MmSensorMsg__Sequence__fini(mm_interfaces__msg__MmSensorMsg__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      mm_interfaces__msg__MmSensorMsg__fini(&array->data[i]);
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

mm_interfaces__msg__MmSensorMsg__Sequence *
mm_interfaces__msg__MmSensorMsg__Sequence__create(size_t size)
{
  mm_interfaces__msg__MmSensorMsg__Sequence * array = (mm_interfaces__msg__MmSensorMsg__Sequence *)malloc(sizeof(mm_interfaces__msg__MmSensorMsg__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = mm_interfaces__msg__MmSensorMsg__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
mm_interfaces__msg__MmSensorMsg__Sequence__destroy(mm_interfaces__msg__MmSensorMsg__Sequence * array)
{
  if (array) {
    mm_interfaces__msg__MmSensorMsg__Sequence__fini(array);
  }
  free(array);
}
