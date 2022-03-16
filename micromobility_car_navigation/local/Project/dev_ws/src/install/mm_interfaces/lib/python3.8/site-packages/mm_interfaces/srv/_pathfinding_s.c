// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from mm_interfaces:srv/Pathfinding.idl
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
#include "mm_interfaces/srv/detail/pathfinding__struct.h"
#include "mm_interfaces/srv/detail/pathfinding__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool mm_interfaces__srv__pathfinding__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[51];
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
    assert(strncmp("mm_interfaces.srv._pathfinding.Pathfinding_Request", full_classname_dest, 50) == 0);
  }
  mm_interfaces__srv__Pathfinding_Request * ros_message = _ros_message;
  {  // start_node_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "start_node_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->start_node_id = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // end_node_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "end_node_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->end_node_id = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * mm_interfaces__srv__pathfinding__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Pathfinding_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("mm_interfaces.srv._pathfinding");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Pathfinding_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  mm_interfaces__srv__Pathfinding_Request * ros_message = (mm_interfaces__srv__Pathfinding_Request *)raw_ros_message;
  {  // start_node_id
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->start_node_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "start_node_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // end_node_id
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->end_node_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "end_node_id", field);
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
// #include "mm_interfaces/srv/detail/pathfinding__struct.h"
// already included above
// #include "mm_interfaces/srv/detail/pathfinding__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "mm_interfaces/msg/detail/coordinate_msg__functions.h"
// end nested array functions include
bool mm_interfaces__msg__coordinate_msg__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * mm_interfaces__msg__coordinate_msg__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool mm_interfaces__srv__pathfinding__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[52];
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
    assert(strncmp("mm_interfaces.srv._pathfinding.Pathfinding_Response", full_classname_dest, 51) == 0);
  }
  mm_interfaces__srv__Pathfinding_Response * ros_message = _ros_message;
  {  // path
    PyObject * field = PyObject_GetAttrString(_pymsg, "path");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'path'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!mm_interfaces__msg__CoordinateMsg__Sequence__init(&(ros_message->path), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create mm_interfaces__msg__CoordinateMsg__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    mm_interfaces__msg__CoordinateMsg * dest = ros_message->path.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!mm_interfaces__msg__coordinate_msg__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * mm_interfaces__srv__pathfinding__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Pathfinding_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("mm_interfaces.srv._pathfinding");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Pathfinding_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  mm_interfaces__srv__Pathfinding_Response * ros_message = (mm_interfaces__srv__Pathfinding_Response *)raw_ros_message;
  {  // path
    PyObject * field = NULL;
    size_t size = ros_message->path.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    mm_interfaces__msg__CoordinateMsg * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->path.data[i]);
      PyObject * pyitem = mm_interfaces__msg__coordinate_msg__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "path", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
