# generated from rosidl_generator_py/resource/_idl.py.em
# with input from mm_interfaces:msg/CarInstructions.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'steering_range'
# Member 'throttle_range'
# Member 'angle_range'
# Member 'distance_range'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_CarInstructions(type):
    """Metaclass of message 'CarInstructions'."""

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
                'mm_interfaces.msg.CarInstructions')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__car_instructions
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__car_instructions
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__car_instructions
            cls._TYPE_SUPPORT = module.type_support_msg__msg__car_instructions
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__car_instructions

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'STEERING_RANGE__DEFAULT': numpy.array((0.0, 360.0, ), dtype=numpy.float32),
            'THROTTLE_RANGE__DEFAULT': numpy.array((0, 100, ), dtype=numpy.int32),
            'ANGLE_RANGE__DEFAULT': numpy.array((0.0, 900.0, ), dtype=numpy.float32),
            'DISTANCE_RANGE__DEFAULT': numpy.array((0.0, 900.0, ), dtype=numpy.float32),
        }

    @property
    def STEERING_RANGE__DEFAULT(cls):
        """Return default value for message field 'steering_range'."""
        return numpy.array((0.0, 360.0, ), dtype=numpy.float32)

    @property
    def THROTTLE_RANGE__DEFAULT(cls):
        """Return default value for message field 'throttle_range'."""
        return numpy.array((0, 100, ), dtype=numpy.int32)

    @property
    def ANGLE_RANGE__DEFAULT(cls):
        """Return default value for message field 'angle_range'."""
        return numpy.array((0.0, 900.0, ), dtype=numpy.float32)

    @property
    def DISTANCE_RANGE__DEFAULT(cls):
        """Return default value for message field 'distance_range'."""
        return numpy.array((0.0, 900.0, ), dtype=numpy.float32)


class CarInstructions(metaclass=Metaclass_CarInstructions):
    """Message class 'CarInstructions'."""

    __slots__ = [
        '_steering',
        '_steering_range',
        '_throttle',
        '_throttle_range',
        '_angle',
        '_angle_range',
        '_distance',
        '_distance_range',
    ]

    _fields_and_field_types = {
        'steering': 'float',
        'steering_range': 'float[2]',
        'throttle': 'int32',
        'throttle_range': 'int32[2]',
        'angle': 'float',
        'angle_range': 'float[2]',
        'distance': 'float',
        'distance_range': 'float[2]',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 2),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('int32'), 2),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 2),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 2),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.steering = kwargs.get('steering', float())
        self.steering_range = kwargs.get(
            'steering_range', CarInstructions.STEERING_RANGE__DEFAULT)
        self.throttle = kwargs.get('throttle', int())
        self.throttle_range = kwargs.get(
            'throttle_range', CarInstructions.THROTTLE_RANGE__DEFAULT)
        self.angle = kwargs.get('angle', float())
        self.angle_range = kwargs.get(
            'angle_range', CarInstructions.ANGLE_RANGE__DEFAULT)
        self.distance = kwargs.get('distance', float())
        self.distance_range = kwargs.get(
            'distance_range', CarInstructions.DISTANCE_RANGE__DEFAULT)

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
        if self.steering != other.steering:
            return False
        if all(self.steering_range != other.steering_range):
            return False
        if self.throttle != other.throttle:
            return False
        if all(self.throttle_range != other.throttle_range):
            return False
        if self.angle != other.angle:
            return False
        if all(self.angle_range != other.angle_range):
            return False
        if self.distance != other.distance:
            return False
        if all(self.distance_range != other.distance_range):
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def steering(self):
        """Message field 'steering'."""
        return self._steering

    @steering.setter
    def steering(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'steering' field must be of type 'float'"
        self._steering = value

    @property
    def steering_range(self):
        """Message field 'steering_range'."""
        return self._steering_range

    @steering_range.setter
    def steering_range(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'steering_range' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 2, \
                "The 'steering_range' numpy.ndarray() must have a size of 2"
            self._steering_range = value
            return
        if __debug__:
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
                 len(value) == 2 and
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'steering_range' field must be a set or sequence with length 2 and each value of type 'float'"
        self._steering_range = numpy.array(value, dtype=numpy.float32)

    @property
    def throttle(self):
        """Message field 'throttle'."""
        return self._throttle

    @throttle.setter
    def throttle(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'throttle' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'throttle' field must be an integer in [-2147483648, 2147483647]"
        self._throttle = value

    @property
    def throttle_range(self):
        """Message field 'throttle_range'."""
        return self._throttle_range

    @throttle_range.setter
    def throttle_range(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.int32, \
                "The 'throttle_range' numpy.ndarray() must have the dtype of 'numpy.int32'"
            assert value.size == 2, \
                "The 'throttle_range' numpy.ndarray() must have a size of 2"
            self._throttle_range = value
            return
        if __debug__:
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
                 len(value) == 2 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= -2147483648 and val < 2147483648 for val in value)), \
                "The 'throttle_range' field must be a set or sequence with length 2 and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._throttle_range = numpy.array(value, dtype=numpy.int32)

    @property
    def angle(self):
        """Message field 'angle'."""
        return self._angle

    @angle.setter
    def angle(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'angle' field must be of type 'float'"
        self._angle = value

    @property
    def angle_range(self):
        """Message field 'angle_range'."""
        return self._angle_range

    @angle_range.setter
    def angle_range(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'angle_range' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 2, \
                "The 'angle_range' numpy.ndarray() must have a size of 2"
            self._angle_range = value
            return
        if __debug__:
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
                 len(value) == 2 and
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'angle_range' field must be a set or sequence with length 2 and each value of type 'float'"
        self._angle_range = numpy.array(value, dtype=numpy.float32)

    @property
    def distance(self):
        """Message field 'distance'."""
        return self._distance

    @distance.setter
    def distance(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'distance' field must be of type 'float'"
        self._distance = value

    @property
    def distance_range(self):
        """Message field 'distance_range'."""
        return self._distance_range

    @distance_range.setter
    def distance_range(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'distance_range' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 2, \
                "The 'distance_range' numpy.ndarray() must have a size of 2"
            self._distance_range = value
            return
        if __debug__:
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
                 len(value) == 2 and
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'distance_range' field must be a set or sequence with length 2 and each value of type 'float'"
        self._distance_range = numpy.array(value, dtype=numpy.float32)
