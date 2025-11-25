# generated from rosidl_generator_py/resource/_idl.py.em
# with input from my_sim_tesi_ros2_interfaces:action/DronePoseControl.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_DronePoseControl_Goal(type):
    """Metaclass of message 'DronePoseControl_Goal'."""

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
            module = import_type_support('my_sim_tesi_ros2_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'my_sim_tesi_ros2_interfaces.action.DronePoseControl_Goal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__drone_pose_control__goal
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__drone_pose_control__goal
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__drone_pose_control__goal
            cls._TYPE_SUPPORT = module.type_support_msg__action__drone_pose_control__goal
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__drone_pose_control__goal

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class DronePoseControl_Goal(metaclass=Metaclass_DronePoseControl_Goal):
    """Message class 'DronePoseControl_Goal'."""

    __slots__ = [
        '_target_x',
        '_target_y',
        '_target_yaw',
        '_target_altitude',
    ]

    _fields_and_field_types = {
        'target_x': 'double',
        'target_y': 'double',
        'target_yaw': 'double',
        'target_altitude': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.target_x = kwargs.get('target_x', float())
        self.target_y = kwargs.get('target_y', float())
        self.target_yaw = kwargs.get('target_yaw', float())
        self.target_altitude = kwargs.get('target_altitude', float())

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
        if self.target_x != other.target_x:
            return False
        if self.target_y != other.target_y:
            return False
        if self.target_yaw != other.target_yaw:
            return False
        if self.target_altitude != other.target_altitude:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def target_x(self):
        """Message field 'target_x'."""
        return self._target_x

    @target_x.setter
    def target_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'target_x' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'target_x' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._target_x = value

    @builtins.property
    def target_y(self):
        """Message field 'target_y'."""
        return self._target_y

    @target_y.setter
    def target_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'target_y' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'target_y' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._target_y = value

    @builtins.property
    def target_yaw(self):
        """Message field 'target_yaw'."""
        return self._target_yaw

    @target_yaw.setter
    def target_yaw(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'target_yaw' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'target_yaw' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._target_yaw = value

    @builtins.property
    def target_altitude(self):
        """Message field 'target_altitude'."""
        return self._target_altitude

    @target_altitude.setter
    def target_altitude(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'target_altitude' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'target_altitude' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._target_altitude = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import math

# already imported above
# import rosidl_parser.definition


class Metaclass_DronePoseControl_Result(type):
    """Metaclass of message 'DronePoseControl_Result'."""

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
            module = import_type_support('my_sim_tesi_ros2_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'my_sim_tesi_ros2_interfaces.action.DronePoseControl_Result')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__drone_pose_control__result
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__drone_pose_control__result
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__drone_pose_control__result
            cls._TYPE_SUPPORT = module.type_support_msg__action__drone_pose_control__result
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__drone_pose_control__result

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class DronePoseControl_Result(metaclass=Metaclass_DronePoseControl_Result):
    """Message class 'DronePoseControl_Result'."""

    __slots__ = [
        '_res_x',
        '_res_y',
        '_res_yaw',
        '_res_altitude',
    ]

    _fields_and_field_types = {
        'res_x': 'double',
        'res_y': 'double',
        'res_yaw': 'double',
        'res_altitude': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.res_x = kwargs.get('res_x', float())
        self.res_y = kwargs.get('res_y', float())
        self.res_yaw = kwargs.get('res_yaw', float())
        self.res_altitude = kwargs.get('res_altitude', float())

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
        if self.res_x != other.res_x:
            return False
        if self.res_y != other.res_y:
            return False
        if self.res_yaw != other.res_yaw:
            return False
        if self.res_altitude != other.res_altitude:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def res_x(self):
        """Message field 'res_x'."""
        return self._res_x

    @res_x.setter
    def res_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'res_x' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'res_x' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._res_x = value

    @builtins.property
    def res_y(self):
        """Message field 'res_y'."""
        return self._res_y

    @res_y.setter
    def res_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'res_y' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'res_y' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._res_y = value

    @builtins.property
    def res_yaw(self):
        """Message field 'res_yaw'."""
        return self._res_yaw

    @res_yaw.setter
    def res_yaw(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'res_yaw' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'res_yaw' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._res_yaw = value

    @builtins.property
    def res_altitude(self):
        """Message field 'res_altitude'."""
        return self._res_altitude

    @res_altitude.setter
    def res_altitude(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'res_altitude' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'res_altitude' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._res_altitude = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import math

# already imported above
# import rosidl_parser.definition


class Metaclass_DronePoseControl_Feedback(type):
    """Metaclass of message 'DronePoseControl_Feedback'."""

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
            module = import_type_support('my_sim_tesi_ros2_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'my_sim_tesi_ros2_interfaces.action.DronePoseControl_Feedback')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__drone_pose_control__feedback
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__drone_pose_control__feedback
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__drone_pose_control__feedback
            cls._TYPE_SUPPORT = module.type_support_msg__action__drone_pose_control__feedback
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__drone_pose_control__feedback

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class DronePoseControl_Feedback(metaclass=Metaclass_DronePoseControl_Feedback):
    """Message class 'DronePoseControl_Feedback'."""

    __slots__ = [
        '_current_x',
        '_current_y',
        '_current_yaw',
        '_current_altitude',
    ]

    _fields_and_field_types = {
        'current_x': 'double',
        'current_y': 'double',
        'current_yaw': 'double',
        'current_altitude': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.current_x = kwargs.get('current_x', float())
        self.current_y = kwargs.get('current_y', float())
        self.current_yaw = kwargs.get('current_yaw', float())
        self.current_altitude = kwargs.get('current_altitude', float())

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
        if self.current_x != other.current_x:
            return False
        if self.current_y != other.current_y:
            return False
        if self.current_yaw != other.current_yaw:
            return False
        if self.current_altitude != other.current_altitude:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def current_x(self):
        """Message field 'current_x'."""
        return self._current_x

    @current_x.setter
    def current_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'current_x' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'current_x' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._current_x = value

    @builtins.property
    def current_y(self):
        """Message field 'current_y'."""
        return self._current_y

    @current_y.setter
    def current_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'current_y' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'current_y' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._current_y = value

    @builtins.property
    def current_yaw(self):
        """Message field 'current_yaw'."""
        return self._current_yaw

    @current_yaw.setter
    def current_yaw(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'current_yaw' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'current_yaw' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._current_yaw = value

    @builtins.property
    def current_altitude(self):
        """Message field 'current_altitude'."""
        return self._current_altitude

    @current_altitude.setter
    def current_altitude(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'current_altitude' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'current_altitude' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._current_altitude = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_DronePoseControl_SendGoal_Request(type):
    """Metaclass of message 'DronePoseControl_SendGoal_Request'."""

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
            module = import_type_support('my_sim_tesi_ros2_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'my_sim_tesi_ros2_interfaces.action.DronePoseControl_SendGoal_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__drone_pose_control__send_goal__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__drone_pose_control__send_goal__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__drone_pose_control__send_goal__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__drone_pose_control__send_goal__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__drone_pose_control__send_goal__request

            from my_sim_tesi_ros2_interfaces.action import DronePoseControl
            if DronePoseControl.Goal.__class__._TYPE_SUPPORT is None:
                DronePoseControl.Goal.__class__.__import_type_support__()

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class DronePoseControl_SendGoal_Request(metaclass=Metaclass_DronePoseControl_SendGoal_Request):
    """Message class 'DronePoseControl_SendGoal_Request'."""

    __slots__ = [
        '_goal_id',
        '_goal',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'goal': 'my_sim_tesi_ros2_interfaces/DronePoseControl_Goal',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['my_sim_tesi_ros2_interfaces', 'action'], 'DronePoseControl_Goal'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from my_sim_tesi_ros2_interfaces.action._drone_pose_control import DronePoseControl_Goal
        self.goal = kwargs.get('goal', DronePoseControl_Goal())

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
        if self.goal_id != other.goal_id:
            return False
        if self.goal != other.goal:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value

    @builtins.property
    def goal(self):
        """Message field 'goal'."""
        return self._goal

    @goal.setter
    def goal(self, value):
        if __debug__:
            from my_sim_tesi_ros2_interfaces.action._drone_pose_control import DronePoseControl_Goal
            assert \
                isinstance(value, DronePoseControl_Goal), \
                "The 'goal' field must be a sub message of type 'DronePoseControl_Goal'"
        self._goal = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_DronePoseControl_SendGoal_Response(type):
    """Metaclass of message 'DronePoseControl_SendGoal_Response'."""

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
            module = import_type_support('my_sim_tesi_ros2_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'my_sim_tesi_ros2_interfaces.action.DronePoseControl_SendGoal_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__drone_pose_control__send_goal__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__drone_pose_control__send_goal__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__drone_pose_control__send_goal__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__drone_pose_control__send_goal__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__drone_pose_control__send_goal__response

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class DronePoseControl_SendGoal_Response(metaclass=Metaclass_DronePoseControl_SendGoal_Response):
    """Message class 'DronePoseControl_SendGoal_Response'."""

    __slots__ = [
        '_accepted',
        '_stamp',
    ]

    _fields_and_field_types = {
        'accepted': 'boolean',
        'stamp': 'builtin_interfaces/Time',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.accepted = kwargs.get('accepted', bool())
        from builtin_interfaces.msg import Time
        self.stamp = kwargs.get('stamp', Time())

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
        if self.accepted != other.accepted:
            return False
        if self.stamp != other.stamp:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def accepted(self):
        """Message field 'accepted'."""
        return self._accepted

    @accepted.setter
    def accepted(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'accepted' field must be of type 'bool'"
        self._accepted = value

    @builtins.property
    def stamp(self):
        """Message field 'stamp'."""
        return self._stamp

    @stamp.setter
    def stamp(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'stamp' field must be a sub message of type 'Time'"
        self._stamp = value


class Metaclass_DronePoseControl_SendGoal(type):
    """Metaclass of service 'DronePoseControl_SendGoal'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('my_sim_tesi_ros2_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'my_sim_tesi_ros2_interfaces.action.DronePoseControl_SendGoal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__drone_pose_control__send_goal

            from my_sim_tesi_ros2_interfaces.action import _drone_pose_control
            if _drone_pose_control.Metaclass_DronePoseControl_SendGoal_Request._TYPE_SUPPORT is None:
                _drone_pose_control.Metaclass_DronePoseControl_SendGoal_Request.__import_type_support__()
            if _drone_pose_control.Metaclass_DronePoseControl_SendGoal_Response._TYPE_SUPPORT is None:
                _drone_pose_control.Metaclass_DronePoseControl_SendGoal_Response.__import_type_support__()


class DronePoseControl_SendGoal(metaclass=Metaclass_DronePoseControl_SendGoal):
    from my_sim_tesi_ros2_interfaces.action._drone_pose_control import DronePoseControl_SendGoal_Request as Request
    from my_sim_tesi_ros2_interfaces.action._drone_pose_control import DronePoseControl_SendGoal_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_DronePoseControl_GetResult_Request(type):
    """Metaclass of message 'DronePoseControl_GetResult_Request'."""

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
            module = import_type_support('my_sim_tesi_ros2_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'my_sim_tesi_ros2_interfaces.action.DronePoseControl_GetResult_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__drone_pose_control__get_result__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__drone_pose_control__get_result__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__drone_pose_control__get_result__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__drone_pose_control__get_result__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__drone_pose_control__get_result__request

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class DronePoseControl_GetResult_Request(metaclass=Metaclass_DronePoseControl_GetResult_Request):
    """Message class 'DronePoseControl_GetResult_Request'."""

    __slots__ = [
        '_goal_id',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())

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
        if self.goal_id != other.goal_id:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_DronePoseControl_GetResult_Response(type):
    """Metaclass of message 'DronePoseControl_GetResult_Response'."""

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
            module = import_type_support('my_sim_tesi_ros2_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'my_sim_tesi_ros2_interfaces.action.DronePoseControl_GetResult_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__drone_pose_control__get_result__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__drone_pose_control__get_result__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__drone_pose_control__get_result__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__drone_pose_control__get_result__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__drone_pose_control__get_result__response

            from my_sim_tesi_ros2_interfaces.action import DronePoseControl
            if DronePoseControl.Result.__class__._TYPE_SUPPORT is None:
                DronePoseControl.Result.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class DronePoseControl_GetResult_Response(metaclass=Metaclass_DronePoseControl_GetResult_Response):
    """Message class 'DronePoseControl_GetResult_Response'."""

    __slots__ = [
        '_status',
        '_result',
    ]

    _fields_and_field_types = {
        'status': 'int8',
        'result': 'my_sim_tesi_ros2_interfaces/DronePoseControl_Result',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['my_sim_tesi_ros2_interfaces', 'action'], 'DronePoseControl_Result'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.status = kwargs.get('status', int())
        from my_sim_tesi_ros2_interfaces.action._drone_pose_control import DronePoseControl_Result
        self.result = kwargs.get('result', DronePoseControl_Result())

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
        if self.status != other.status:
            return False
        if self.result != other.result:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'status' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'status' field must be an integer in [-128, 127]"
        self._status = value

    @builtins.property
    def result(self):
        """Message field 'result'."""
        return self._result

    @result.setter
    def result(self, value):
        if __debug__:
            from my_sim_tesi_ros2_interfaces.action._drone_pose_control import DronePoseControl_Result
            assert \
                isinstance(value, DronePoseControl_Result), \
                "The 'result' field must be a sub message of type 'DronePoseControl_Result'"
        self._result = value


class Metaclass_DronePoseControl_GetResult(type):
    """Metaclass of service 'DronePoseControl_GetResult'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('my_sim_tesi_ros2_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'my_sim_tesi_ros2_interfaces.action.DronePoseControl_GetResult')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__drone_pose_control__get_result

            from my_sim_tesi_ros2_interfaces.action import _drone_pose_control
            if _drone_pose_control.Metaclass_DronePoseControl_GetResult_Request._TYPE_SUPPORT is None:
                _drone_pose_control.Metaclass_DronePoseControl_GetResult_Request.__import_type_support__()
            if _drone_pose_control.Metaclass_DronePoseControl_GetResult_Response._TYPE_SUPPORT is None:
                _drone_pose_control.Metaclass_DronePoseControl_GetResult_Response.__import_type_support__()


class DronePoseControl_GetResult(metaclass=Metaclass_DronePoseControl_GetResult):
    from my_sim_tesi_ros2_interfaces.action._drone_pose_control import DronePoseControl_GetResult_Request as Request
    from my_sim_tesi_ros2_interfaces.action._drone_pose_control import DronePoseControl_GetResult_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_DronePoseControl_FeedbackMessage(type):
    """Metaclass of message 'DronePoseControl_FeedbackMessage'."""

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
            module = import_type_support('my_sim_tesi_ros2_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'my_sim_tesi_ros2_interfaces.action.DronePoseControl_FeedbackMessage')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__drone_pose_control__feedback_message
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__drone_pose_control__feedback_message
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__drone_pose_control__feedback_message
            cls._TYPE_SUPPORT = module.type_support_msg__action__drone_pose_control__feedback_message
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__drone_pose_control__feedback_message

            from my_sim_tesi_ros2_interfaces.action import DronePoseControl
            if DronePoseControl.Feedback.__class__._TYPE_SUPPORT is None:
                DronePoseControl.Feedback.__class__.__import_type_support__()

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class DronePoseControl_FeedbackMessage(metaclass=Metaclass_DronePoseControl_FeedbackMessage):
    """Message class 'DronePoseControl_FeedbackMessage'."""

    __slots__ = [
        '_goal_id',
        '_feedback',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'feedback': 'my_sim_tesi_ros2_interfaces/DronePoseControl_Feedback',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['my_sim_tesi_ros2_interfaces', 'action'], 'DronePoseControl_Feedback'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from my_sim_tesi_ros2_interfaces.action._drone_pose_control import DronePoseControl_Feedback
        self.feedback = kwargs.get('feedback', DronePoseControl_Feedback())

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
        if self.goal_id != other.goal_id:
            return False
        if self.feedback != other.feedback:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value

    @builtins.property
    def feedback(self):
        """Message field 'feedback'."""
        return self._feedback

    @feedback.setter
    def feedback(self, value):
        if __debug__:
            from my_sim_tesi_ros2_interfaces.action._drone_pose_control import DronePoseControl_Feedback
            assert \
                isinstance(value, DronePoseControl_Feedback), \
                "The 'feedback' field must be a sub message of type 'DronePoseControl_Feedback'"
        self._feedback = value


class Metaclass_DronePoseControl(type):
    """Metaclass of action 'DronePoseControl'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('my_sim_tesi_ros2_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'my_sim_tesi_ros2_interfaces.action.DronePoseControl')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_action__action__drone_pose_control

            from action_msgs.msg import _goal_status_array
            if _goal_status_array.Metaclass_GoalStatusArray._TYPE_SUPPORT is None:
                _goal_status_array.Metaclass_GoalStatusArray.__import_type_support__()
            from action_msgs.srv import _cancel_goal
            if _cancel_goal.Metaclass_CancelGoal._TYPE_SUPPORT is None:
                _cancel_goal.Metaclass_CancelGoal.__import_type_support__()

            from my_sim_tesi_ros2_interfaces.action import _drone_pose_control
            if _drone_pose_control.Metaclass_DronePoseControl_SendGoal._TYPE_SUPPORT is None:
                _drone_pose_control.Metaclass_DronePoseControl_SendGoal.__import_type_support__()
            if _drone_pose_control.Metaclass_DronePoseControl_GetResult._TYPE_SUPPORT is None:
                _drone_pose_control.Metaclass_DronePoseControl_GetResult.__import_type_support__()
            if _drone_pose_control.Metaclass_DronePoseControl_FeedbackMessage._TYPE_SUPPORT is None:
                _drone_pose_control.Metaclass_DronePoseControl_FeedbackMessage.__import_type_support__()


class DronePoseControl(metaclass=Metaclass_DronePoseControl):

    # The goal message defined in the action definition.
    from my_sim_tesi_ros2_interfaces.action._drone_pose_control import DronePoseControl_Goal as Goal
    # The result message defined in the action definition.
    from my_sim_tesi_ros2_interfaces.action._drone_pose_control import DronePoseControl_Result as Result
    # The feedback message defined in the action definition.
    from my_sim_tesi_ros2_interfaces.action._drone_pose_control import DronePoseControl_Feedback as Feedback

    class Impl:

        # The send_goal service using a wrapped version of the goal message as a request.
        from my_sim_tesi_ros2_interfaces.action._drone_pose_control import DronePoseControl_SendGoal as SendGoalService
        # The get_result service using a wrapped version of the result message as a response.
        from my_sim_tesi_ros2_interfaces.action._drone_pose_control import DronePoseControl_GetResult as GetResultService
        # The feedback message with generic fields which wraps the feedback message.
        from my_sim_tesi_ros2_interfaces.action._drone_pose_control import DronePoseControl_FeedbackMessage as FeedbackMessage

        # The generic service to cancel a goal.
        from action_msgs.srv._cancel_goal import CancelGoal as CancelGoalService
        # The generic message for get the status of a goal.
        from action_msgs.msg._goal_status_array import GoalStatusArray as GoalStatusMessage

    def __init__(self):
        raise NotImplementedError('Action classes can not be instantiated')
