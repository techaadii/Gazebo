// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from my_sim_tesi_ros2_interfaces:action/DronePoseControl.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "my_sim_tesi_ros2_interfaces/action/detail/drone_pose_control__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace my_sim_tesi_ros2_interfaces
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void DronePoseControl_Goal_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) my_sim_tesi_ros2_interfaces::action::DronePoseControl_Goal(_init);
}

void DronePoseControl_Goal_fini_function(void * message_memory)
{
  auto typed_message = static_cast<my_sim_tesi_ros2_interfaces::action::DronePoseControl_Goal *>(message_memory);
  typed_message->~DronePoseControl_Goal();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember DronePoseControl_Goal_message_member_array[4] = {
  {
    "target_x",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_sim_tesi_ros2_interfaces::action::DronePoseControl_Goal, target_x),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "target_y",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_sim_tesi_ros2_interfaces::action::DronePoseControl_Goal, target_y),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "target_yaw",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_sim_tesi_ros2_interfaces::action::DronePoseControl_Goal, target_yaw),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "target_altitude",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_sim_tesi_ros2_interfaces::action::DronePoseControl_Goal, target_altitude),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers DronePoseControl_Goal_message_members = {
  "my_sim_tesi_ros2_interfaces::action",  // message namespace
  "DronePoseControl_Goal",  // message name
  4,  // number of fields
  sizeof(my_sim_tesi_ros2_interfaces::action::DronePoseControl_Goal),
  DronePoseControl_Goal_message_member_array,  // message members
  DronePoseControl_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  DronePoseControl_Goal_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t DronePoseControl_Goal_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &DronePoseControl_Goal_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace my_sim_tesi_ros2_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<my_sim_tesi_ros2_interfaces::action::DronePoseControl_Goal>()
{
  return &::my_sim_tesi_ros2_interfaces::action::rosidl_typesupport_introspection_cpp::DronePoseControl_Goal_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, my_sim_tesi_ros2_interfaces, action, DronePoseControl_Goal)() {
  return &::my_sim_tesi_ros2_interfaces::action::rosidl_typesupport_introspection_cpp::DronePoseControl_Goal_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "my_sim_tesi_ros2_interfaces/action/detail/drone_pose_control__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace my_sim_tesi_ros2_interfaces
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void DronePoseControl_Result_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) my_sim_tesi_ros2_interfaces::action::DronePoseControl_Result(_init);
}

void DronePoseControl_Result_fini_function(void * message_memory)
{
  auto typed_message = static_cast<my_sim_tesi_ros2_interfaces::action::DronePoseControl_Result *>(message_memory);
  typed_message->~DronePoseControl_Result();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember DronePoseControl_Result_message_member_array[4] = {
  {
    "res_x",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_sim_tesi_ros2_interfaces::action::DronePoseControl_Result, res_x),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "res_y",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_sim_tesi_ros2_interfaces::action::DronePoseControl_Result, res_y),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "res_yaw",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_sim_tesi_ros2_interfaces::action::DronePoseControl_Result, res_yaw),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "res_altitude",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_sim_tesi_ros2_interfaces::action::DronePoseControl_Result, res_altitude),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers DronePoseControl_Result_message_members = {
  "my_sim_tesi_ros2_interfaces::action",  // message namespace
  "DronePoseControl_Result",  // message name
  4,  // number of fields
  sizeof(my_sim_tesi_ros2_interfaces::action::DronePoseControl_Result),
  DronePoseControl_Result_message_member_array,  // message members
  DronePoseControl_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  DronePoseControl_Result_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t DronePoseControl_Result_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &DronePoseControl_Result_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace my_sim_tesi_ros2_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<my_sim_tesi_ros2_interfaces::action::DronePoseControl_Result>()
{
  return &::my_sim_tesi_ros2_interfaces::action::rosidl_typesupport_introspection_cpp::DronePoseControl_Result_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, my_sim_tesi_ros2_interfaces, action, DronePoseControl_Result)() {
  return &::my_sim_tesi_ros2_interfaces::action::rosidl_typesupport_introspection_cpp::DronePoseControl_Result_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "my_sim_tesi_ros2_interfaces/action/detail/drone_pose_control__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace my_sim_tesi_ros2_interfaces
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void DronePoseControl_Feedback_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) my_sim_tesi_ros2_interfaces::action::DronePoseControl_Feedback(_init);
}

void DronePoseControl_Feedback_fini_function(void * message_memory)
{
  auto typed_message = static_cast<my_sim_tesi_ros2_interfaces::action::DronePoseControl_Feedback *>(message_memory);
  typed_message->~DronePoseControl_Feedback();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember DronePoseControl_Feedback_message_member_array[4] = {
  {
    "current_x",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_sim_tesi_ros2_interfaces::action::DronePoseControl_Feedback, current_x),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "current_y",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_sim_tesi_ros2_interfaces::action::DronePoseControl_Feedback, current_y),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "current_yaw",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_sim_tesi_ros2_interfaces::action::DronePoseControl_Feedback, current_yaw),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "current_altitude",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_sim_tesi_ros2_interfaces::action::DronePoseControl_Feedback, current_altitude),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers DronePoseControl_Feedback_message_members = {
  "my_sim_tesi_ros2_interfaces::action",  // message namespace
  "DronePoseControl_Feedback",  // message name
  4,  // number of fields
  sizeof(my_sim_tesi_ros2_interfaces::action::DronePoseControl_Feedback),
  DronePoseControl_Feedback_message_member_array,  // message members
  DronePoseControl_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  DronePoseControl_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t DronePoseControl_Feedback_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &DronePoseControl_Feedback_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace my_sim_tesi_ros2_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<my_sim_tesi_ros2_interfaces::action::DronePoseControl_Feedback>()
{
  return &::my_sim_tesi_ros2_interfaces::action::rosidl_typesupport_introspection_cpp::DronePoseControl_Feedback_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, my_sim_tesi_ros2_interfaces, action, DronePoseControl_Feedback)() {
  return &::my_sim_tesi_ros2_interfaces::action::rosidl_typesupport_introspection_cpp::DronePoseControl_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "my_sim_tesi_ros2_interfaces/action/detail/drone_pose_control__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace my_sim_tesi_ros2_interfaces
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void DronePoseControl_SendGoal_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) my_sim_tesi_ros2_interfaces::action::DronePoseControl_SendGoal_Request(_init);
}

void DronePoseControl_SendGoal_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<my_sim_tesi_ros2_interfaces::action::DronePoseControl_SendGoal_Request *>(message_memory);
  typed_message->~DronePoseControl_SendGoal_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember DronePoseControl_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<unique_identifier_msgs::msg::UUID>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_sim_tesi_ros2_interfaces::action::DronePoseControl_SendGoal_Request, goal_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "goal",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<my_sim_tesi_ros2_interfaces::action::DronePoseControl_Goal>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_sim_tesi_ros2_interfaces::action::DronePoseControl_SendGoal_Request, goal),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers DronePoseControl_SendGoal_Request_message_members = {
  "my_sim_tesi_ros2_interfaces::action",  // message namespace
  "DronePoseControl_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(my_sim_tesi_ros2_interfaces::action::DronePoseControl_SendGoal_Request),
  DronePoseControl_SendGoal_Request_message_member_array,  // message members
  DronePoseControl_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  DronePoseControl_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t DronePoseControl_SendGoal_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &DronePoseControl_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace my_sim_tesi_ros2_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<my_sim_tesi_ros2_interfaces::action::DronePoseControl_SendGoal_Request>()
{
  return &::my_sim_tesi_ros2_interfaces::action::rosidl_typesupport_introspection_cpp::DronePoseControl_SendGoal_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, my_sim_tesi_ros2_interfaces, action, DronePoseControl_SendGoal_Request)() {
  return &::my_sim_tesi_ros2_interfaces::action::rosidl_typesupport_introspection_cpp::DronePoseControl_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "my_sim_tesi_ros2_interfaces/action/detail/drone_pose_control__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace my_sim_tesi_ros2_interfaces
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void DronePoseControl_SendGoal_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) my_sim_tesi_ros2_interfaces::action::DronePoseControl_SendGoal_Response(_init);
}

void DronePoseControl_SendGoal_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<my_sim_tesi_ros2_interfaces::action::DronePoseControl_SendGoal_Response *>(message_memory);
  typed_message->~DronePoseControl_SendGoal_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember DronePoseControl_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_sim_tesi_ros2_interfaces::action::DronePoseControl_SendGoal_Response, accepted),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "stamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<builtin_interfaces::msg::Time>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_sim_tesi_ros2_interfaces::action::DronePoseControl_SendGoal_Response, stamp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers DronePoseControl_SendGoal_Response_message_members = {
  "my_sim_tesi_ros2_interfaces::action",  // message namespace
  "DronePoseControl_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(my_sim_tesi_ros2_interfaces::action::DronePoseControl_SendGoal_Response),
  DronePoseControl_SendGoal_Response_message_member_array,  // message members
  DronePoseControl_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  DronePoseControl_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t DronePoseControl_SendGoal_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &DronePoseControl_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace my_sim_tesi_ros2_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<my_sim_tesi_ros2_interfaces::action::DronePoseControl_SendGoal_Response>()
{
  return &::my_sim_tesi_ros2_interfaces::action::rosidl_typesupport_introspection_cpp::DronePoseControl_SendGoal_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, my_sim_tesi_ros2_interfaces, action, DronePoseControl_SendGoal_Response)() {
  return &::my_sim_tesi_ros2_interfaces::action::rosidl_typesupport_introspection_cpp::DronePoseControl_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "my_sim_tesi_ros2_interfaces/action/detail/drone_pose_control__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace my_sim_tesi_ros2_interfaces
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers DronePoseControl_SendGoal_service_members = {
  "my_sim_tesi_ros2_interfaces::action",  // service namespace
  "DronePoseControl_SendGoal",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<my_sim_tesi_ros2_interfaces::action::DronePoseControl_SendGoal>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t DronePoseControl_SendGoal_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &DronePoseControl_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace my_sim_tesi_ros2_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<my_sim_tesi_ros2_interfaces::action::DronePoseControl_SendGoal>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::my_sim_tesi_ros2_interfaces::action::rosidl_typesupport_introspection_cpp::DronePoseControl_SendGoal_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::my_sim_tesi_ros2_interfaces::action::DronePoseControl_SendGoal_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::my_sim_tesi_ros2_interfaces::action::DronePoseControl_SendGoal_Response
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, my_sim_tesi_ros2_interfaces, action, DronePoseControl_SendGoal)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<my_sim_tesi_ros2_interfaces::action::DronePoseControl_SendGoal>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "my_sim_tesi_ros2_interfaces/action/detail/drone_pose_control__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace my_sim_tesi_ros2_interfaces
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void DronePoseControl_GetResult_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) my_sim_tesi_ros2_interfaces::action::DronePoseControl_GetResult_Request(_init);
}

void DronePoseControl_GetResult_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<my_sim_tesi_ros2_interfaces::action::DronePoseControl_GetResult_Request *>(message_memory);
  typed_message->~DronePoseControl_GetResult_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember DronePoseControl_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<unique_identifier_msgs::msg::UUID>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_sim_tesi_ros2_interfaces::action::DronePoseControl_GetResult_Request, goal_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers DronePoseControl_GetResult_Request_message_members = {
  "my_sim_tesi_ros2_interfaces::action",  // message namespace
  "DronePoseControl_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(my_sim_tesi_ros2_interfaces::action::DronePoseControl_GetResult_Request),
  DronePoseControl_GetResult_Request_message_member_array,  // message members
  DronePoseControl_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  DronePoseControl_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t DronePoseControl_GetResult_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &DronePoseControl_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace my_sim_tesi_ros2_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<my_sim_tesi_ros2_interfaces::action::DronePoseControl_GetResult_Request>()
{
  return &::my_sim_tesi_ros2_interfaces::action::rosidl_typesupport_introspection_cpp::DronePoseControl_GetResult_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, my_sim_tesi_ros2_interfaces, action, DronePoseControl_GetResult_Request)() {
  return &::my_sim_tesi_ros2_interfaces::action::rosidl_typesupport_introspection_cpp::DronePoseControl_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "my_sim_tesi_ros2_interfaces/action/detail/drone_pose_control__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace my_sim_tesi_ros2_interfaces
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void DronePoseControl_GetResult_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) my_sim_tesi_ros2_interfaces::action::DronePoseControl_GetResult_Response(_init);
}

void DronePoseControl_GetResult_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<my_sim_tesi_ros2_interfaces::action::DronePoseControl_GetResult_Response *>(message_memory);
  typed_message->~DronePoseControl_GetResult_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember DronePoseControl_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_sim_tesi_ros2_interfaces::action::DronePoseControl_GetResult_Response, status),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "result",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<my_sim_tesi_ros2_interfaces::action::DronePoseControl_Result>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_sim_tesi_ros2_interfaces::action::DronePoseControl_GetResult_Response, result),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers DronePoseControl_GetResult_Response_message_members = {
  "my_sim_tesi_ros2_interfaces::action",  // message namespace
  "DronePoseControl_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(my_sim_tesi_ros2_interfaces::action::DronePoseControl_GetResult_Response),
  DronePoseControl_GetResult_Response_message_member_array,  // message members
  DronePoseControl_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  DronePoseControl_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t DronePoseControl_GetResult_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &DronePoseControl_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace my_sim_tesi_ros2_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<my_sim_tesi_ros2_interfaces::action::DronePoseControl_GetResult_Response>()
{
  return &::my_sim_tesi_ros2_interfaces::action::rosidl_typesupport_introspection_cpp::DronePoseControl_GetResult_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, my_sim_tesi_ros2_interfaces, action, DronePoseControl_GetResult_Response)() {
  return &::my_sim_tesi_ros2_interfaces::action::rosidl_typesupport_introspection_cpp::DronePoseControl_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "my_sim_tesi_ros2_interfaces/action/detail/drone_pose_control__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace my_sim_tesi_ros2_interfaces
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers DronePoseControl_GetResult_service_members = {
  "my_sim_tesi_ros2_interfaces::action",  // service namespace
  "DronePoseControl_GetResult",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<my_sim_tesi_ros2_interfaces::action::DronePoseControl_GetResult>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t DronePoseControl_GetResult_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &DronePoseControl_GetResult_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace my_sim_tesi_ros2_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<my_sim_tesi_ros2_interfaces::action::DronePoseControl_GetResult>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::my_sim_tesi_ros2_interfaces::action::rosidl_typesupport_introspection_cpp::DronePoseControl_GetResult_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::my_sim_tesi_ros2_interfaces::action::DronePoseControl_GetResult_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::my_sim_tesi_ros2_interfaces::action::DronePoseControl_GetResult_Response
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, my_sim_tesi_ros2_interfaces, action, DronePoseControl_GetResult)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<my_sim_tesi_ros2_interfaces::action::DronePoseControl_GetResult>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "my_sim_tesi_ros2_interfaces/action/detail/drone_pose_control__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace my_sim_tesi_ros2_interfaces
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void DronePoseControl_FeedbackMessage_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) my_sim_tesi_ros2_interfaces::action::DronePoseControl_FeedbackMessage(_init);
}

void DronePoseControl_FeedbackMessage_fini_function(void * message_memory)
{
  auto typed_message = static_cast<my_sim_tesi_ros2_interfaces::action::DronePoseControl_FeedbackMessage *>(message_memory);
  typed_message->~DronePoseControl_FeedbackMessage();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember DronePoseControl_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<unique_identifier_msgs::msg::UUID>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_sim_tesi_ros2_interfaces::action::DronePoseControl_FeedbackMessage, goal_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "feedback",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<my_sim_tesi_ros2_interfaces::action::DronePoseControl_Feedback>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_sim_tesi_ros2_interfaces::action::DronePoseControl_FeedbackMessage, feedback),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers DronePoseControl_FeedbackMessage_message_members = {
  "my_sim_tesi_ros2_interfaces::action",  // message namespace
  "DronePoseControl_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(my_sim_tesi_ros2_interfaces::action::DronePoseControl_FeedbackMessage),
  DronePoseControl_FeedbackMessage_message_member_array,  // message members
  DronePoseControl_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  DronePoseControl_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t DronePoseControl_FeedbackMessage_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &DronePoseControl_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace my_sim_tesi_ros2_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<my_sim_tesi_ros2_interfaces::action::DronePoseControl_FeedbackMessage>()
{
  return &::my_sim_tesi_ros2_interfaces::action::rosidl_typesupport_introspection_cpp::DronePoseControl_FeedbackMessage_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, my_sim_tesi_ros2_interfaces, action, DronePoseControl_FeedbackMessage)() {
  return &::my_sim_tesi_ros2_interfaces::action::rosidl_typesupport_introspection_cpp::DronePoseControl_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
