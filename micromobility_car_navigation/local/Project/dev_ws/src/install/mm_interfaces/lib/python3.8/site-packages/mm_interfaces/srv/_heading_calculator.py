# generated from rosidl_generator_py/resource/_idl.py.em
# with input from mm_interfaces:srv/HeadingCalculator.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_HeadingCalculator_Request(type):
    """Metaclass of message 'HeadingCalculator_Request'."""

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
                'mm_interfaces.srv.HeadingCalculator_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__heading_calculator__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__heading_calculator__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__heading_calculator__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__heading_calculator__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__heading_calculator__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class HeadingCalculator_Request(metaclass=Metaclass_HeadingCalculator_Request):
    """Message class 'HeadingCalculator_Request'."""

    __slots__ = [
        '_cart_bearing',
        '_cart_lat',
        '_cart_long',
        '_next_node_lat',
        '_next_node_long',
    ]

    _fields_and_field_types = {
        'cart_bearing': 'double',
        'cart_lat': 'double',
        'cart_long': 'double',
        'next_node_lat': 'double',
        'next_node_long': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.cart_bearing = kwargs.get('cart_bearing', float())
        self.cart_lat = kwargs.get('cart_lat', float())
        self.cart_long = kwargs.get('cart_long', float())
        self.next_node_lat = kwargs.get('next_node_lat', float())
        self.next_node_long = kwargs.get('next_node_long', float())

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
        if self.cart_bearing != other.cart_bearing:
            return False
        if self.cart_lat != other.cart_lat:
            return False
        if self.cart_long != other.cart_long:
            return False
        if self.next_node_lat != other.next_node_lat:
            return False
        if self.next_node_long != other.next_node_long:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def cart_bearing(self):
        """Message field 'cart_bearing'."""
        return self._cart_bearing

    @cart_bearing.setter
    def cart_bearing(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cart_bearing' field must be of type 'float'"
        self._cart_bearing = value

    @property
    def cart_lat(self):
        """Message field 'cart_lat'."""
        return self._cart_lat

    @cart_lat.setter
    def cart_lat(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cart_lat' field must be of type 'float'"
        self._cart_lat = value

    @property
    def cart_long(self):
        """Message field 'cart_long'."""
        return self._cart_long

    @cart_long.setter
    def cart_long(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cart_long' field must be of type 'float'"
        self._cart_long = value

    @property
    def next_node_lat(self):
        """Message field 'next_node_lat'."""
        return self._next_node_lat

    @next_node_lat.setter
    def next_node_lat(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'next_node_lat' field must be of type 'float'"
        self._next_node_lat = value

    @property
    def next_node_long(self):
        """Message field 'next_node_long'."""
        return self._next_node_long

    @next_node_long.setter
    def next_node_long(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'next_node_long' field must be of type 'float'"
        self._next_node_long = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_HeadingCalculator_Response(type):
    """Metaclass of message 'HeadingCalculator_Response'."""

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
                'mm_interfaces.srv.HeadingCalculator_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__heading_calculator__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__heading_calculator__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__heading_calculator__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__heading_calculator__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__heading_calculator__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class HeadingCalculator_Response(metaclass=Metaclass_HeadingCalculator_Response):
    """Message class 'HeadingCalculator_Response'."""

    __slots__ = [
        '_turn_value',
    ]

    _fields_and_field_types = {
        'turn_value': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.turn_value = kwargs.get('turn_value', float())

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
        if self.turn_value != other.turn_value:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def turn_value(self):
        """Message field 'turn_value'."""
        return self._turn_value

    @turn_value.setter
    def turn_value(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'turn_value' field must be of type 'float'"
        self._turn_value = value


class Metaclass_HeadingCalculator(type):
    """Metaclass of service 'HeadingCalculator'."""

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
                'mm_interfaces.srv.HeadingCalculator')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__heading_calculator

            from mm_interfaces.srv import _heading_calculator
            if _heading_calculator.Metaclass_HeadingCalculator_Request._TYPE_SUPPORT is None:
                _heading_calculator.Metaclass_HeadingCalculator_Request.__import_type_support__()
            if _heading_calculator.Metaclass_HeadingCalculator_Response._TYPE_SUPPORT is None:
                _heading_calculator.Metaclass_HeadingCalculator_Response.__import_type_support__()


class HeadingCalculator(metaclass=Metaclass_HeadingCalculator):
    from mm_interfaces.srv._heading_calculator import HeadingCalculator_Request as Request
    from mm_interfaces.srv._heading_calculator import HeadingCalculator_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
