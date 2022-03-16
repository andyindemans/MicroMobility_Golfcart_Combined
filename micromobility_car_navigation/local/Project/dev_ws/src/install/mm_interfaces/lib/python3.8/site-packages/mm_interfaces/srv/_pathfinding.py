# generated from rosidl_generator_py/resource/_idl.py.em
# with input from mm_interfaces:srv/Pathfinding.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Pathfinding_Request(type):
    """Metaclass of message 'Pathfinding_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('mm_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'mm_interfaces.srv.Pathfinding_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__pathfinding__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__pathfinding__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__pathfinding__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__pathfinding__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__pathfinding__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Pathfinding_Request(metaclass=Metaclass_Pathfinding_Request):
    """Message class 'Pathfinding_Request'."""

    __slots__ = [
        '_start_node_id',
        '_end_node_id',
    ]

    _fields_and_field_types = {
        'start_node_id': 'int64',
        'end_node_id': 'int64',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.start_node_id = kwargs.get('start_node_id', int())
        self.end_node_id = kwargs.get('end_node_id', int())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.start_node_id != other.start_node_id:
            return False
        if self.end_node_id != other.end_node_id:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def start_node_id(self):
        """Message field 'start_node_id'."""
        return self._start_node_id

    @start_node_id.setter
    def start_node_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'start_node_id' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'start_node_id' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._start_node_id = value

    @property
    def end_node_id(self):
        """Message field 'end_node_id'."""
        return self._end_node_id

    @end_node_id.setter
    def end_node_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'end_node_id' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'end_node_id' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._end_node_id = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_Pathfinding_Response(type):
    """Metaclass of message 'Pathfinding_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('mm_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'mm_interfaces.srv.Pathfinding_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__pathfinding__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__pathfinding__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__pathfinding__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__pathfinding__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__pathfinding__response

            from mm_interfaces.msg import CoordinateMsg
            if CoordinateMsg.__class__._TYPE_SUPPORT is None:
                CoordinateMsg.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Pathfinding_Response(metaclass=Metaclass_Pathfinding_Response):
    """Message class 'Pathfinding_Response'."""

    __slots__ = [
        '_path',
    ]

    _fields_and_field_types = {
        'path': 'sequence<mm_interfaces/CoordinateMsg>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['mm_interfaces', 'msg'], 'CoordinateMsg')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.path = kwargs.get('path', [])

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.path != other.path:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def path(self):
        """Message field 'path'."""
        return self._path

    @path.setter
    def path(self, value):
        if __debug__:
            from mm_interfaces.msg import CoordinateMsg
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, CoordinateMsg) for v in value) and
                 True), \
                "The 'path' field must be a set or sequence and each value of type 'CoordinateMsg'"
        self._path = value


class Metaclass_Pathfinding(type):
    """Metaclass of service 'Pathfinding'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('mm_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'mm_interfaces.srv.Pathfinding')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__pathfinding

            from mm_interfaces.srv import _pathfinding
            if _pathfinding.Metaclass_Pathfinding_Request._TYPE_SUPPORT is None:
                _pathfinding.Metaclass_Pathfinding_Request.__import_type_support__()
            if _pathfinding.Metaclass_Pathfinding_Response._TYPE_SUPPORT is None:
                _pathfinding.Metaclass_Pathfinding_Response.__import_type_support__()


class Pathfinding(metaclass=Metaclass_Pathfinding):
    from mm_interfaces.srv._pathfinding import Pathfinding_Request as Request
    from mm_interfaces.srv._pathfinding import Pathfinding_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
