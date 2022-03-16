# generated from rosidl_generator_py/resource/_idl.py.em
# with input from mm_interfaces:srv/Proximity.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Proximity_Request(type):
    """Metaclass of message 'Proximity_Request'."""

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
                'mm_interfaces.srv.Proximity_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__proximity__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__proximity__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__proximity__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__proximity__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__proximity__request

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


class Proximity_Request(metaclass=Metaclass_Proximity_Request):
    """Message class 'Proximity_Request'."""

    __slots__ = [
        '_current_position',
        '_next_node',
    ]

    _fields_and_field_types = {
        'current_position': 'mm_interfaces/CoordinateMsg',
        'next_node': 'mm_interfaces/CoordinateMsg',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['mm_interfaces', 'msg'], 'CoordinateMsg'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['mm_interfaces', 'msg'], 'CoordinateMsg'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from mm_interfaces.msg import CoordinateMsg
        self.current_position = kwargs.get('current_position', CoordinateMsg())
        from mm_interfaces.msg import CoordinateMsg
        self.next_node = kwargs.get('next_node', CoordinateMsg())

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
        if self.current_position != other.current_position:
            return False
        if self.next_node != other.next_node:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def current_position(self):
        """Message field 'current_position'."""
        return self._current_position

    @current_position.setter
    def current_position(self, value):
        if __debug__:
            from mm_interfaces.msg import CoordinateMsg
            assert \
                isinstance(value, CoordinateMsg), \
                "The 'current_position' field must be a sub message of type 'CoordinateMsg'"
        self._current_position = value

    @property
    def next_node(self):
        """Message field 'next_node'."""
        return self._next_node

    @next_node.setter
    def next_node(self, value):
        if __debug__:
            from mm_interfaces.msg import CoordinateMsg
            assert \
                isinstance(value, CoordinateMsg), \
                "The 'next_node' field must be a sub message of type 'CoordinateMsg'"
        self._next_node = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_Proximity_Response(type):
    """Metaclass of message 'Proximity_Response'."""

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
                'mm_interfaces.srv.Proximity_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__proximity__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__proximity__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__proximity__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__proximity__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__proximity__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Proximity_Response(metaclass=Metaclass_Proximity_Response):
    """Message class 'Proximity_Response'."""

    __slots__ = [
        '_distance_to',
    ]

    _fields_and_field_types = {
        'distance_to': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.distance_to = kwargs.get('distance_to', float())

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
        if self.distance_to != other.distance_to:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def distance_to(self):
        """Message field 'distance_to'."""
        return self._distance_to

    @distance_to.setter
    def distance_to(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'distance_to' field must be of type 'float'"
        self._distance_to = value


class Metaclass_Proximity(type):
    """Metaclass of service 'Proximity'."""

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
                'mm_interfaces.srv.Proximity')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__proximity

            from mm_interfaces.srv import _proximity
            if _proximity.Metaclass_Proximity_Request._TYPE_SUPPORT is None:
                _proximity.Metaclass_Proximity_Request.__import_type_support__()
            if _proximity.Metaclass_Proximity_Response._TYPE_SUPPORT is None:
                _proximity.Metaclass_Proximity_Response.__import_type_support__()


class Proximity(metaclass=Metaclass_Proximity):
    from mm_interfaces.srv._proximity import Proximity_Request as Request
    from mm_interfaces.srv._proximity import Proximity_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
