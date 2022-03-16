// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from mm_interfaces:msg/Float.idl
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
#include "mm_interfaces/msg/detail/float__struct.h"
#include "mm_interfaces/msg/detail/float__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool mm_interfaces__msg__float__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[31];
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
    assert(strncmp("mm_interfaces.msg._float.Float", full_classname_dest, 30) == 0);
  }
  mm_interfaces__msg__Float * ros_message = _ros_message;
  {  // sensor_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "sensor_error");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->sensor_error = (Py_True == field);
    Py_DECREF(field);
  }
  {  // data
    PyObject * field = PyObject_GetAttrString(_pymsg, "data");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->data = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * mm_interfaces__msg__float__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Float */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("mm_interfaces.msg._float");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Float");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  mm_interfaces__msg__Float * ros_message = (mm_interfaces__msg__Float *)raw_ros_message;
  {  // sensor_error
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->sensor_error ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sensor_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // data
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->data);
    {
      int rc = PyObject_SetAttrString(_pymessage, "data", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
