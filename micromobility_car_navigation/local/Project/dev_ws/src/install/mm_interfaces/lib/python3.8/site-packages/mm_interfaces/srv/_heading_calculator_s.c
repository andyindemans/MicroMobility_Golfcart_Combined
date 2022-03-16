// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from mm_interfaces:srv/HeadingCalculator.idl
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
#include "mm_interfaces/srv/detail/heading_calculator__struct.h"
#include "mm_interfaces/srv/detail/heading_calculator__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool mm_interfaces__srv__heading_calculator__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[64];
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
    assert(strncmp("mm_interfaces.srv._heading_calculator.HeadingCalculator_Request", full_classname_dest, 63) == 0);
  }
  mm_interfaces__srv__HeadingCalculator_Request * ros_message = _ros_message;
  {  // cart_bearing
    PyObject * field = PyObject_GetAttrString(_pymsg, "cart_bearing");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->cart_bearing = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // cart_lat
    PyObject * field = PyObject_GetAttrString(_pymsg, "cart_lat");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->cart_lat = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // cart_long
    PyObject * field = PyObject_GetAttrString(_pymsg, "cart_long");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->cart_long = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // next_node_lat
    PyObject * field = PyObject_GetAttrString(_pymsg, "next_node_lat");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->next_node_lat = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // next_node_long
    PyObject * field = PyObject_GetAttrString(_pymsg, "next_node_long");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->next_node_long = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * mm_interfaces__srv__heading_calculator__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of HeadingCalculator_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("mm_interfaces.srv._heading_calculator");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "HeadingCalculator_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  mm_interfaces__srv__HeadingCalculator_Request * ros_message = (mm_interfaces__srv__HeadingCalculator_Request *)raw_ros_message;
  {  // cart_bearing
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->cart_bearing);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cart_bearing", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cart_lat
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->cart_lat);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cart_lat", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cart_long
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->cart_long);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cart_long", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // next_node_lat
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->next_node_lat);
    {
      int rc = PyObject_SetAttrString(_pymessage, "next_node_lat", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // next_node_long
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->next_node_long);
    {
      int rc = PyObject_SetAttrString(_pymessage, "next_node_long", field);
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
// #include "mm_interfaces/srv/detail/heading_calculator__struct.h"
// already included above
// #include "mm_interfaces/srv/detail/heading_calculator__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool mm_interfaces__srv__heading_calculator__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[65];
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
    assert(strncmp("mm_interfaces.srv._heading_calculator.HeadingCalculator_Response", full_classname_dest, 64) == 0);
  }
  mm_interfaces__srv__HeadingCalculator_Response * ros_message = _ros_message;
  {  // turn_value
    PyObject * field = PyObject_GetAttrString(_pymsg, "turn_value");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->turn_value = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * mm_interfaces__srv__heading_calculator__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of HeadingCalculator_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("mm_interfaces.srv._heading_calculator");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "HeadingCalculator_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  mm_interfaces__srv__HeadingCalculator_Response * ros_message = (mm_interfaces__srv__HeadingCalculator_Response *)raw_ros_message;
  {  // turn_value
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->turn_value);
    {
      int rc = PyObject_SetAttrString(_pymessage, "turn_value", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
