// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_sim_tesi_ros2_interfaces:action/DronePoseControl.idl
// generated code does not contain a copyright notice

#ifndef MY_SIM_TESI_ROS2_INTERFACES__ACTION__DETAIL__DRONE_POSE_CONTROL__BUILDER_HPP_
#define MY_SIM_TESI_ROS2_INTERFACES__ACTION__DETAIL__DRONE_POSE_CONTROL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "my_sim_tesi_ros2_interfaces/action/detail/drone_pose_control__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace my_sim_tesi_ros2_interfaces
{

namespace action
{

namespace builder
{

class Init_DronePoseControl_Goal_target_altitude
{
public:
  explicit Init_DronePoseControl_Goal_target_altitude(::my_sim_tesi_ros2_interfaces::action::DronePoseControl_Goal & msg)
  : msg_(msg)
  {}
  ::my_sim_tesi_ros2_interfaces::action::DronePoseControl_Goal target_altitude(::my_sim_tesi_ros2_interfaces::action::DronePoseControl_Goal::_target_altitude_type arg)
  {
    msg_.target_altitude = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_sim_tesi_ros2_interfaces::action::DronePoseControl_Goal msg_;
};

class Init_DronePoseControl_Goal_target_yaw
{
public:
  explicit Init_DronePoseControl_Goal_target_yaw(::my_sim_tesi_ros2_interfaces::action::DronePoseControl_Goal & msg)
  : msg_(msg)
  {}
  Init_DronePoseControl_Goal_target_altitude target_yaw(::my_sim_tesi_ros2_interfaces::action::DronePoseControl_Goal::_target_yaw_type arg)
  {
    msg_.target_yaw = std::move(arg);
    return Init_DronePoseControl_Goal_target_altitude(msg_);
  }

private:
  ::my_sim_tesi_ros2_interfaces::action::DronePoseControl_Goal msg_;
};

class Init_DronePoseControl_Goal_target_y
{
public:
  explicit Init_DronePoseControl_Goal_target_y(::my_sim_tesi_ros2_interfaces::action::DronePoseControl_Goal & msg)
  : msg_(msg)
  {}
  Init_DronePoseControl_Goal_target_yaw target_y(::my_sim_tesi_ros2_interfaces::action::DronePoseControl_Goal::_target_y_type arg)
  {
    msg_.target_y = std::move(arg);
    return Init_DronePoseControl_Goal_target_yaw(msg_);
  }

private:
  ::my_sim_tesi_ros2_interfaces::action::DronePoseControl_Goal msg_;
};

class Init_DronePoseControl_Goal_target_x
{
public:
  Init_DronePoseControl_Goal_target_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DronePoseControl_Goal_target_y target_x(::my_sim_tesi_ros2_interfaces::action::DronePoseControl_Goal::_target_x_type arg)
  {
    msg_.target_x = std::move(arg);
    return Init_DronePoseControl_Goal_target_y(msg_);
  }

private:
  ::my_sim_tesi_ros2_interfaces::action::DronePoseControl_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_sim_tesi_ros2_interfaces::action::DronePoseControl_Goal>()
{
  return my_sim_tesi_ros2_interfaces::action::builder::Init_DronePoseControl_Goal_target_x();
}

}  // namespace my_sim_tesi_ros2_interfaces


namespace my_sim_tesi_ros2_interfaces
{

namespace action
{

namespace builder
{

class Init_DronePoseControl_Result_res_altitude
{
public:
  explicit Init_DronePoseControl_Result_res_altitude(::my_sim_tesi_ros2_interfaces::action::DronePoseControl_Result & msg)
  : msg_(msg)
  {}
  ::my_sim_tesi_ros2_interfaces::action::DronePoseControl_Result res_altitude(::my_sim_tesi_ros2_interfaces::action::DronePoseControl_Result::_res_altitude_type arg)
  {
    msg_.res_altitude = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_sim_tesi_ros2_interfaces::action::DronePoseControl_Result msg_;
};

class Init_DronePoseControl_Result_res_yaw
{
public:
  explicit Init_DronePoseControl_Result_res_yaw(::my_sim_tesi_ros2_interfaces::action::DronePoseControl_Result & msg)
  : msg_(msg)
  {}
  Init_DronePoseControl_Result_res_altitude res_yaw(::my_sim_tesi_ros2_interfaces::action::DronePoseControl_Result::_res_yaw_type arg)
  {
    msg_.res_yaw = std::move(arg);
    return Init_DronePoseControl_Result_res_altitude(msg_);
  }

private:
  ::my_sim_tesi_ros2_interfaces::action::DronePoseControl_Result msg_;
};

class Init_DronePoseControl_Result_res_y
{
public:
  explicit Init_DronePoseControl_Result_res_y(::my_sim_tesi_ros2_interfaces::action::DronePoseControl_Result & msg)
  : msg_(msg)
  {}
  Init_DronePoseControl_Result_res_yaw res_y(::my_sim_tesi_ros2_interfaces::action::DronePoseControl_Result::_res_y_type arg)
  {
    msg_.res_y = std::move(arg);
    return Init_DronePoseControl_Result_res_yaw(msg_);
  }

private:
  ::my_sim_tesi_ros2_interfaces::action::DronePoseControl_Result msg_;
};

class Init_DronePoseControl_Result_res_x
{
public:
  Init_DronePoseControl_Result_res_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DronePoseControl_Result_res_y res_x(::my_sim_tesi_ros2_interfaces::action::DronePoseControl_Result::_res_x_type arg)
  {
    msg_.res_x = std::move(arg);
    return Init_DronePoseControl_Result_res_y(msg_);
  }

private:
  ::my_sim_tesi_ros2_interfaces::action::DronePoseControl_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_sim_tesi_ros2_interfaces::action::DronePoseControl_Result>()
{
  return my_sim_tesi_ros2_interfaces::action::builder::Init_DronePoseControl_Result_res_x();
}

}  // namespace my_sim_tesi_ros2_interfaces


namespace my_sim_tesi_ros2_interfaces
{

namespace action
{

namespace builder
{

class Init_DronePoseControl_Feedback_current_altitude
{
public:
  explicit Init_DronePoseControl_Feedback_current_altitude(::my_sim_tesi_ros2_interfaces::action::DronePoseControl_Feedback & msg)
  : msg_(msg)
  {}
  ::my_sim_tesi_ros2_interfaces::action::DronePoseControl_Feedback current_altitude(::my_sim_tesi_ros2_interfaces::action::DronePoseControl_Feedback::_current_altitude_type arg)
  {
    msg_.current_altitude = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_sim_tesi_ros2_interfaces::action::DronePoseControl_Feedback msg_;
};

class Init_DronePoseControl_Feedback_current_yaw
{
public:
  explicit Init_DronePoseControl_Feedback_current_yaw(::my_sim_tesi_ros2_interfaces::action::DronePoseControl_Feedback & msg)
  : msg_(msg)
  {}
  Init_DronePoseControl_Feedback_current_altitude current_yaw(::my_sim_tesi_ros2_interfaces::action::DronePoseControl_Feedback::_current_yaw_type arg)
  {
    msg_.current_yaw = std::move(arg);
    return Init_DronePoseControl_Feedback_current_altitude(msg_);
  }

private:
  ::my_sim_tesi_ros2_interfaces::action::DronePoseControl_Feedback msg_;
};

class Init_DronePoseControl_Feedback_current_y
{
public:
  explicit Init_DronePoseControl_Feedback_current_y(::my_sim_tesi_ros2_interfaces::action::DronePoseControl_Feedback & msg)
  : msg_(msg)
  {}
  Init_DronePoseControl_Feedback_current_yaw current_y(::my_sim_tesi_ros2_interfaces::action::DronePoseControl_Feedback::_current_y_type arg)
  {
    msg_.current_y = std::move(arg);
    return Init_DronePoseControl_Feedback_current_yaw(msg_);
  }

private:
  ::my_sim_tesi_ros2_interfaces::action::DronePoseControl_Feedback msg_;
};

class Init_DronePoseControl_Feedback_current_x
{
public:
  Init_DronePoseControl_Feedback_current_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DronePoseControl_Feedback_current_y current_x(::my_sim_tesi_ros2_interfaces::action::DronePoseControl_Feedback::_current_x_type arg)
  {
    msg_.current_x = std::move(arg);
    return Init_DronePoseControl_Feedback_current_y(msg_);
  }

private:
  ::my_sim_tesi_ros2_interfaces::action::DronePoseControl_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_sim_tesi_ros2_interfaces::action::DronePoseControl_Feedback>()
{
  return my_sim_tesi_ros2_interfaces::action::builder::Init_DronePoseControl_Feedback_current_x();
}

}  // namespace my_sim_tesi_ros2_interfaces


namespace my_sim_tesi_ros2_interfaces
{

namespace action
{

namespace builder
{

class Init_DronePoseControl_SendGoal_Request_goal
{
public:
  explicit Init_DronePoseControl_SendGoal_Request_goal(::my_sim_tesi_ros2_interfaces::action::DronePoseControl_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::my_sim_tesi_ros2_interfaces::action::DronePoseControl_SendGoal_Request goal(::my_sim_tesi_ros2_interfaces::action::DronePoseControl_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_sim_tesi_ros2_interfaces::action::DronePoseControl_SendGoal_Request msg_;
};

class Init_DronePoseControl_SendGoal_Request_goal_id
{
public:
  Init_DronePoseControl_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DronePoseControl_SendGoal_Request_goal goal_id(::my_sim_tesi_ros2_interfaces::action::DronePoseControl_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_DronePoseControl_SendGoal_Request_goal(msg_);
  }

private:
  ::my_sim_tesi_ros2_interfaces::action::DronePoseControl_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_sim_tesi_ros2_interfaces::action::DronePoseControl_SendGoal_Request>()
{
  return my_sim_tesi_ros2_interfaces::action::builder::Init_DronePoseControl_SendGoal_Request_goal_id();
}

}  // namespace my_sim_tesi_ros2_interfaces


namespace my_sim_tesi_ros2_interfaces
{

namespace action
{

namespace builder
{

class Init_DronePoseControl_SendGoal_Response_stamp
{
public:
  explicit Init_DronePoseControl_SendGoal_Response_stamp(::my_sim_tesi_ros2_interfaces::action::DronePoseControl_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::my_sim_tesi_ros2_interfaces::action::DronePoseControl_SendGoal_Response stamp(::my_sim_tesi_ros2_interfaces::action::DronePoseControl_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_sim_tesi_ros2_interfaces::action::DronePoseControl_SendGoal_Response msg_;
};

class Init_DronePoseControl_SendGoal_Response_accepted
{
public:
  Init_DronePoseControl_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DronePoseControl_SendGoal_Response_stamp accepted(::my_sim_tesi_ros2_interfaces::action::DronePoseControl_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_DronePoseControl_SendGoal_Response_stamp(msg_);
  }

private:
  ::my_sim_tesi_ros2_interfaces::action::DronePoseControl_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_sim_tesi_ros2_interfaces::action::DronePoseControl_SendGoal_Response>()
{
  return my_sim_tesi_ros2_interfaces::action::builder::Init_DronePoseControl_SendGoal_Response_accepted();
}

}  // namespace my_sim_tesi_ros2_interfaces


namespace my_sim_tesi_ros2_interfaces
{

namespace action
{

namespace builder
{

class Init_DronePoseControl_GetResult_Request_goal_id
{
public:
  Init_DronePoseControl_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::my_sim_tesi_ros2_interfaces::action::DronePoseControl_GetResult_Request goal_id(::my_sim_tesi_ros2_interfaces::action::DronePoseControl_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_sim_tesi_ros2_interfaces::action::DronePoseControl_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_sim_tesi_ros2_interfaces::action::DronePoseControl_GetResult_Request>()
{
  return my_sim_tesi_ros2_interfaces::action::builder::Init_DronePoseControl_GetResult_Request_goal_id();
}

}  // namespace my_sim_tesi_ros2_interfaces


namespace my_sim_tesi_ros2_interfaces
{

namespace action
{

namespace builder
{

class Init_DronePoseControl_GetResult_Response_result
{
public:
  explicit Init_DronePoseControl_GetResult_Response_result(::my_sim_tesi_ros2_interfaces::action::DronePoseControl_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::my_sim_tesi_ros2_interfaces::action::DronePoseControl_GetResult_Response result(::my_sim_tesi_ros2_interfaces::action::DronePoseControl_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_sim_tesi_ros2_interfaces::action::DronePoseControl_GetResult_Response msg_;
};

class Init_DronePoseControl_GetResult_Response_status
{
public:
  Init_DronePoseControl_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DronePoseControl_GetResult_Response_result status(::my_sim_tesi_ros2_interfaces::action::DronePoseControl_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_DronePoseControl_GetResult_Response_result(msg_);
  }

private:
  ::my_sim_tesi_ros2_interfaces::action::DronePoseControl_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_sim_tesi_ros2_interfaces::action::DronePoseControl_GetResult_Response>()
{
  return my_sim_tesi_ros2_interfaces::action::builder::Init_DronePoseControl_GetResult_Response_status();
}

}  // namespace my_sim_tesi_ros2_interfaces


namespace my_sim_tesi_ros2_interfaces
{

namespace action
{

namespace builder
{

class Init_DronePoseControl_FeedbackMessage_feedback
{
public:
  explicit Init_DronePoseControl_FeedbackMessage_feedback(::my_sim_tesi_ros2_interfaces::action::DronePoseControl_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::my_sim_tesi_ros2_interfaces::action::DronePoseControl_FeedbackMessage feedback(::my_sim_tesi_ros2_interfaces::action::DronePoseControl_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_sim_tesi_ros2_interfaces::action::DronePoseControl_FeedbackMessage msg_;
};

class Init_DronePoseControl_FeedbackMessage_goal_id
{
public:
  Init_DronePoseControl_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DronePoseControl_FeedbackMessage_feedback goal_id(::my_sim_tesi_ros2_interfaces::action::DronePoseControl_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_DronePoseControl_FeedbackMessage_feedback(msg_);
  }

private:
  ::my_sim_tesi_ros2_interfaces::action::DronePoseControl_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_sim_tesi_ros2_interfaces::action::DronePoseControl_FeedbackMessage>()
{
  return my_sim_tesi_ros2_interfaces::action::builder::Init_DronePoseControl_FeedbackMessage_goal_id();
}

}  // namespace my_sim_tesi_ros2_interfaces

#endif  // MY_SIM_TESI_ROS2_INTERFACES__ACTION__DETAIL__DRONE_POSE_CONTROL__BUILDER_HPP_
