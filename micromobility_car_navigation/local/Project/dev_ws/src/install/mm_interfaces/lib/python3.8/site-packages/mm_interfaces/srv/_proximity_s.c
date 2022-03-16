// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from mm_interfaces:srv/Proximity.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "mm_interfaces/srv/detail/proximity__struct.h"
#include "mm_interfaces/srv/detail/proximity__functions.h"

bool mm_interfaces__msg__coordinate_msg__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * mm_interfaces__msg__coordinate_msg__convert_to_py(void * raw_ros_message);
bool mm_interfaces__msg__coordinate_msg__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * mm_interfaces__msg__coordinate_msg__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool mm_interfaces__srv__proximity__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[47];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("mm_interfaces.srv._proximity.Proximity_Request", full_classname_dest, 46) == 0);
  }
  mm_interfaces__srv__Proximity_Request * ros_message = _ros_message;
  {  // current_position
    PyObject * field = PyObject_GetAttrString(_pymsg, "current_position");
    if (!field) {
      return false;
    }
    if (!mm_interfaces__msg__coordinate_msg__convert_from_py(field, &ros_message->current_position)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // next_node
    PyObject * field = PyObject_GetAttrString(_pymsg, "next_node");
    if (!field) {
      return false;
    }
    if (!mm_interfaces__msg__coordinate_msg__convert_from_py(field, &ros_message->next_node)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * mm_interfaces__srv__proximity__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Proximity_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("mm_interfaces.srv._proximity");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Proximity_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  mm_interfaces__srv__Proximity_Request * ros_message = (mm_interfaces__srv__Proximity_Request *)raw_ros_message;
  {  // current_position
    PyObject * field = NULL;
    field = mm_interfaces__msg__coordinate_msg__convert_to_py(&ros_message->current_position);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "current_position", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // next_node
    PyObject * field = NULL;
    field = mm_interfaces__msg__coordinate_msg__convert_to_py(&ros_message->next_node);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "next_node", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "mm_interfaces/srv/detail/proximity__struct.h"
// already included above
// #include "mm_interfaces/srv/detail/proximity__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool mm_interfaces__srv__proximity__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[48];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("mm_interfaces.srv._proximity.Proximity_Response", full_classname_dest, 47) == 0);
  }
  mm_interfaces__srv__Proximity_Response * ros_message = _ros_message;
  {  // distance_to
    PyObject * field = PyObject_GetAttrString(_pymsg, "distance_to");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->distance_to = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * mm_interfaces__srv__proximity__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Proximity_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("mm_interfaces.srv._proximity");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Proximity_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  mm_interfaces__srv__Proximity_Response * ros_message = (mm_interfaces__srv__Proximity_Response *)raw_ros_message;
  {  // distance_to
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->distance_to);
    {
      int rc = PyObject_SetAttrString(_pymessage, "distance_to", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
