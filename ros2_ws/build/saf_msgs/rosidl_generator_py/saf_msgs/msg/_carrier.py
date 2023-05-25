# generated from rosidl_generator_py/resource/_idl.py.em
# with input from saf_msgs:msg/Carrier.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Carrier(type):
    """Metaclass of message 'Carrier'."""

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
            module = import_type_support('saf_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'saf_msgs.msg.Carrier')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__carrier
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__carrier
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__carrier
            cls._TYPE_SUPPORT = module.type_support_msg__msg__carrier
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__carrier

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Carrier(metaclass=Metaclass_Carrier):
    """Message class 'Carrier'."""

    __slots__ = [
        '_carry_id',
        '_station_id',
        '_hour',
        '_minute',
        '_second',
    ]

    _fields_and_field_types = {
        'carry_id': 'int64',
        'station_id': 'int64',
        'hour': 'int8',
        'minute': 'int8',
        'second': 'int8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.carry_id = kwargs.get('carry_id', int())
        self.station_id = kwargs.get('station_id', int())
        self.hour = kwargs.get('hour', int())
        self.minute = kwargs.get('minute', int())
        self.second = kwargs.get('second', int())

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
        if self.carry_id != other.carry_id:
            return False
        if self.station_id != other.station_id:
            return False
        if self.hour != other.hour:
            return False
        if self.minute != other.minute:
            return False
        if self.second != other.second:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def carry_id(self):
        """Message field 'carry_id'."""
        return self._carry_id

    @carry_id.setter
    def carry_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'carry_id' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'carry_id' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._carry_id = value

    @builtins.property
    def station_id(self):
        """Message field 'station_id'."""
        return self._station_id

    @station_id.setter
    def station_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'station_id' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'station_id' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._station_id = value

    @builtins.property
    def hour(self):
        """Message field 'hour'."""
        return self._hour

    @hour.setter
    def hour(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hour' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'hour' field must be an integer in [-128, 127]"
        self._hour = value

    @builtins.property
    def minute(self):
        """Message field 'minute'."""
        return self._minute

    @minute.setter
    def minute(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'minute' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'minute' field must be an integer in [-128, 127]"
        self._minute = value

    @builtins.property
    def second(self):
        """Message field 'second'."""
        return self._second

    @second.setter
    def second(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'second' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'second' field must be an integer in [-128, 127]"
        self._second = value
