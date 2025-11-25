// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from my_sim_tesi_ros2_interfaces:action/DronePoseControl.idl
// generated code does not contain a copyright notice

#ifndef MY_SIM_TESI_ROS2_INTERFACES__ACTION__DETAIL__DRONE_POSE_CONTROL__STRUCT_HPP_
#define MY_SIM_TESI_ROS2_INTERFACES__ACTION__DETAIL__DRONE_POSE_CONTROL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__my_sim_tesi_ros2_interfaces__action__DronePoseControl_Goal __attribute__((deprecated))
#else
# define DEPRECATED__my_sim_tesi_ros2_interfaces__action__DronePoseControl_Goal __declspec(deprecated)
#endif

namespace my_sim_tesi_ros2_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct DronePoseControl_Goal_
{
  using Type = DronePoseControl_Goal_<ContainerAllocator>;

  explicit DronePoseControl_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->target_x = 0.0;
      this->target_y = 0.0;
      this->target_yaw = 0.0;
      this->target_altitude = 0.0;
    }
  }

  explicit DronePoseControl_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->target_x = 0.0;
      this->target_y = 0.0;
      this->target_yaw = 0.0;
      this->target_altitude = 0.0;
    }
  }

  // field types and members
  using _target_x_type =
    double;
  _target_x_type target_x;
  using _target_y_type =
    double;
  _target_y_type target_y;
  using _target_yaw_type =
    double;
  _target_yaw_type target_yaw;
  using _target_altitude_type =
    double;
  _target_altitude_type target_altitude;

  // setters for named parameter idiom
  Type & set__target_x(
    const double & _arg)
  {
    this->target_x = _arg;
    return *this;
  }
  Type & set__target_y(
    const double & _arg)
  {
    this->target_y = _arg;
    return *this;
  }
  Type & set__target_yaw(
    const double & _arg)
  {
    this->target_yaw = _arg;
    return *this;
  }
  Type & set__target_altitude(
    const double & _arg)
  {
    this->target_altitude = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_sim_tesi_ros2_interfaces::action::DronePoseControl_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_sim_tesi_ros2_interfaces::action::DronePoseControl_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_sim_tesi_ros2_interfaces::action::DronePoseControl_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_sim_tesi_ros2_interfaces::action::DronePoseControl_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_sim_tesi_ros2_interfaces::action::DronePoseControl_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_sim_tesi_ros2_interfaces::action::DronePoseControl_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_sim_tesi_ros2_interfaces::action::DronePoseControl_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_sim_tesi_ros2_interfaces::action::DronePoseControl_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_sim_tesi_ros2_interfaces::action::DronePoseControl_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_sim_tesi_ros2_interfaces::action::DronePoseControl_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_sim_tesi_ros2_interfaces__action__DronePoseControl_Goal
    std::shared_ptr<my_sim_tesi_ros2_interfaces::action::DronePoseControl_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_sim_tesi_ros2_interfaces__action__DronePoseControl_Goal
    std::shared_ptr<my_sim_tesi_ros2_interfaces::action::DronePoseControl_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DronePoseControl_Goal_ & other) const
  {
    if (this->target_x != other.target_x) {
      return false;
    }
    if (this->target_y != other.target_y) {
      return false;
    }
    if (this->target_yaw != other.target_yaw) {
      return false;
    }
    if (this->target_altitude != other.target_altitude) {
      return false;
    }
    return true;
  }
  bool operator!=(const DronePoseControl_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DronePoseControl_Goal_

// alias to use template instance with default allocator
using DronePoseControl_Goal =
  my_sim_tesi_ros2_interfaces::action::DronePoseControl_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace my_sim_tesi_ros2_interfaces


#ifndef _WIN32
# define DEPRECATED__my_sim_tesi_ros2_interfaces__action__DronePoseControl_Result __attribute__((deprecated))
#else
# define DEPRECATED__my_sim_tesi_ros2_interfaces__action__DronePoseControl_Result __declspec(deprecated)
#endif

namespace my_sim_tesi_ros2_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct DronePoseControl_Result_
{
  using Type = DronePoseControl_Result_<ContainerAllocator>;

  explicit DronePoseControl_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->res_x = 0.0;
      this->res_y = 0.0;
      this->res_yaw = 0.0;
      this->res_altitude = 0.0;
    }
  }

  explicit DronePoseControl_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->res_x = 0.0;
      this->res_y = 0.0;
      this->res_yaw = 0.0;
      this->res_altitude = 0.0;
    }
  }

  // field types and members
  using _res_x_type =
    double;
  _res_x_type res_x;
  using _res_y_type =
    double;
  _res_y_type res_y;
  using _res_yaw_type =
    double;
  _res_yaw_type res_yaw;
  using _res_altitude_type =
    double;
  _res_altitude_type res_altitude;

  // setters for named parameter idiom
  Type & set__res_x(
    const double & _arg)
  {
    this->res_x = _arg;
    return *this;
  }
  Type & set__res_y(
    const double & _arg)
  {
    this->res_y = _arg;
    return *this;
  }
  Type & set__res_yaw(
    const double & _arg)
  {
    this->res_yaw = _arg;
    return *this;
  }
  Type & set__res_altitude(
    const double & _arg)
  {
    this->res_altitude = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_sim_tesi_ros2_interfaces::action::DronePoseControl_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_sim_tesi_ros2_interfaces::action::DronePoseControl_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_sim_tesi_ros2_interfaces::action::DronePoseControl_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_sim_tesi_ros2_interfaces::action::DronePoseControl_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_sim_tesi_ros2_interfaces::action::DronePoseControl_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_sim_tesi_ros2_interfaces::action::DronePoseControl_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_sim_tesi_ros2_interfaces::action::DronePoseControl_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_sim_tesi_ros2_interfaces::action::DronePoseControl_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_sim_tesi_ros2_interfaces::action::DronePoseControl_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_sim_tesi_ros2_interfaces::action::DronePoseControl_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_sim_tesi_ros2_interfaces__action__DronePoseControl_Result
    std::shared_ptr<my_sim_tesi_ros2_interfaces::action::DronePoseControl_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_sim_tesi_ros2_interfaces__action__DronePoseControl_Result
    std::shared_ptr<my_sim_tesi_ros2_interfaces::action::DronePoseControl_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DronePoseControl_Result_ & other) const
  {
    if (this->res_x != other.res_x) {
      return false;
    }
    if (this->res_y != other.res_y) {
      return false;
    }
    if (this->res_yaw != other.res_yaw) {
      return false;
    }
    if (this->res_altitude != other.res_altitude) {
      return false;
    }
    return true;
  }
  bool operator!=(const DronePoseControl_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DronePoseControl_Result_

// alias to use template instance with default allocator
using DronePoseControl_Result =
  my_sim_tesi_ros2_interfaces::action::DronePoseControl_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace my_sim_tesi_ros2_interfaces


#ifndef _WIN32
# define DEPRECATED__my_sim_tesi_ros2_interfaces__action__DronePoseControl_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__my_sim_tesi_ros2_interfaces__action__DronePoseControl_Feedback __declspec(deprecated)
#endif

namespace my_sim_tesi_ros2_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct DronePoseControl_Feedback_
{
  using Type = DronePoseControl_Feedback_<ContainerAllocator>;

  explicit DronePoseControl_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->current_x = 0.0;
      this->current_y = 0.0;
      this->current_yaw = 0.0;
      this->current_altitude = 0.0;
    }
  }

  explicit DronePoseControl_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->current_x = 0.0;
      this->current_y = 0.0;
      this->current_yaw = 0.0;
      this->current_altitude = 0.0;
    }
  }

  // field types and members
  using _current_x_type =
    double;
  _current_x_type current_x;
  using _current_y_type =
    double;
  _current_y_type current_y;
  using _current_yaw_type =
    double;
  _current_yaw_type current_yaw;
  using _current_altitude_type =
    double;
  _current_altitude_type current_altitude;

  // setters for named parameter idiom
  Type & set__current_x(
    const double & _arg)
  {
    this->current_x = _arg;
    return *this;
  }
  Type & set__current_y(
    const double & _arg)
  {
    this->current_y = _arg;
    return *this;
  }
  Type & set__current_yaw(
    const double & _arg)
  {
    this->current_yaw = _arg;
    return *this;
  }
  Type & set__current_altitude(
    const double & _arg)
  {
    this->current_altitude = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_sim_tesi_ros2_interfaces::action::DronePoseControl_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_sim_tesi_ros2_interfaces::action::DronePoseControl_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_sim_tesi_ros2_interfaces::action::DronePoseControl_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_sim_tesi_ros2_interfaces::action::DronePoseControl_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_sim_tesi_ros2_interfaces::action::DronePoseControl_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_sim_tesi_ros2_interfaces::action::DronePoseControl_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_sim_tesi_ros2_interfaces::action::DronePoseControl_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_sim_tesi_ros2_interfaces::action::DronePoseControl_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_sim_tesi_ros2_interfaces::action::DronePoseControl_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_sim_tesi_ros2_interfaces::action::DronePoseControl_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_sim_tesi_ros2_interfaces__action__DronePoseControl_Feedback
    std::shared_ptr<my_sim_tesi_ros2_interfaces::action::DronePoseControl_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_sim_tesi_ros2_interfaces__action__DronePoseControl_Feedback
    std::shared_ptr<my_sim_tesi_ros2_interfaces::action::DronePoseControl_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DronePoseControl_Feedback_ & other) const
  {
    if (this->current_x != other.current_x) {
      return false;
    }
    if (this->current_y != other.current_y) {
      return false;
    }
    if (this->current_yaw != other.current_yaw) {
      return false;
    }
    if (this->current_altitude != other.current_altitude) {
      return false;
    }
    return true;
  }
  bool operator!=(const DronePoseControl_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DronePoseControl_Feedback_

// alias to use template instance with default allocator
using DronePoseControl_Feedback =
  my_sim_tesi_ros2_interfaces::action::DronePoseControl_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace my_sim_tesi_ros2_interfaces


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "my_sim_tesi_ros2_interfaces/action/detail/drone_pose_control__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__my_sim_tesi_ros2_interfaces__action__DronePoseControl_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__my_sim_tesi_ros2_interfaces__action__DronePoseControl_SendGoal_Request __declspec(deprecated)
#endif

namespace my_sim_tesi_ros2_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct DronePoseControl_SendGoal_Request_
{
  using Type = DronePoseControl_SendGoal_Request_<ContainerAllocator>;

  explicit DronePoseControl_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit DronePoseControl_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    my_sim_tesi_ros2_interfaces::action::DronePoseControl_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const my_sim_tesi_ros2_interfaces::action::DronePoseControl_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_sim_tesi_ros2_interfaces::action::DronePoseControl_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_sim_tesi_ros2_interfaces::action::DronePoseControl_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_sim_tesi_ros2_interfaces::action::DronePoseControl_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_sim_tesi_ros2_interfaces::action::DronePoseControl_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_sim_tesi_ros2_interfaces::action::DronePoseControl_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_sim_tesi_ros2_interfaces::action::DronePoseControl_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_sim_tesi_ros2_interfaces::action::DronePoseControl_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_sim_tesi_ros2_interfaces::action::DronePoseControl_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_sim_tesi_ros2_interfaces::action::DronePoseControl_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_sim_tesi_ros2_interfaces::action::DronePoseControl_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_sim_tesi_ros2_interfaces__action__DronePoseControl_SendGoal_Request
    std::shared_ptr<my_sim_tesi_ros2_interfaces::action::DronePoseControl_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_sim_tesi_ros2_interfaces__action__DronePoseControl_SendGoal_Request
    std::shared_ptr<my_sim_tesi_ros2_interfaces::action::DronePoseControl_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DronePoseControl_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const DronePoseControl_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DronePoseControl_SendGoal_Request_

// alias to use template instance with default allocator
using DronePoseControl_SendGoal_Request =
  my_sim_tesi_ros2_interfaces::action::DronePoseControl_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace my_sim_tesi_ros2_interfaces


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__my_sim_tesi_ros2_interfaces__action__DronePoseControl_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__my_sim_tesi_ros2_interfaces__action__DronePoseControl_SendGoal_Response __declspec(deprecated)
#endif

namespace my_sim_tesi_ros2_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct DronePoseControl_SendGoal_Response_
{
  using Type = DronePoseControl_SendGoal_Response_<ContainerAllocator>;

  explicit DronePoseControl_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit DronePoseControl_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_sim_tesi_ros2_interfaces::action::DronePoseControl_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_sim_tesi_ros2_interfaces::action::DronePoseControl_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_sim_tesi_ros2_interfaces::action::DronePoseControl_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_sim_tesi_ros2_interfaces::action::DronePoseControl_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_sim_tesi_ros2_interfaces::action::DronePoseControl_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_sim_tesi_ros2_interfaces::action::DronePoseControl_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_sim_tesi_ros2_interfaces::action::DronePoseControl_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_sim_tesi_ros2_interfaces::action::DronePoseControl_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_sim_tesi_ros2_interfaces::action::DronePoseControl_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_sim_tesi_ros2_interfaces::action::DronePoseControl_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_sim_tesi_ros2_interfaces__action__DronePoseControl_SendGoal_Response
    std::shared_ptr<my_sim_tesi_ros2_interfaces::action::DronePoseControl_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_sim_tesi_ros2_interfaces__action__DronePoseControl_SendGoal_Response
    std::shared_ptr<my_sim_tesi_ros2_interfaces::action::DronePoseControl_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DronePoseControl_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const DronePoseControl_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DronePoseControl_SendGoal_Response_

// alias to use template instance with default allocator
using DronePoseControl_SendGoal_Response =
  my_sim_tesi_ros2_interfaces::action::DronePoseControl_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace my_sim_tesi_ros2_interfaces

namespace my_sim_tesi_ros2_interfaces
{

namespace action
{

struct DronePoseControl_SendGoal
{
  using Request = my_sim_tesi_ros2_interfaces::action::DronePoseControl_SendGoal_Request;
  using Response = my_sim_tesi_ros2_interfaces::action::DronePoseControl_SendGoal_Response;
};

}  // namespace action

}  // namespace my_sim_tesi_ros2_interfaces


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__my_sim_tesi_ros2_interfaces__action__DronePoseControl_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__my_sim_tesi_ros2_interfaces__action__DronePoseControl_GetResult_Request __declspec(deprecated)
#endif

namespace my_sim_tesi_ros2_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct DronePoseControl_GetResult_Request_
{
  using Type = DronePoseControl_GetResult_Request_<ContainerAllocator>;

  explicit DronePoseControl_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit DronePoseControl_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_sim_tesi_ros2_interfaces::action::DronePoseControl_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_sim_tesi_ros2_interfaces::action::DronePoseControl_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_sim_tesi_ros2_interfaces::action::DronePoseControl_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_sim_tesi_ros2_interfaces::action::DronePoseControl_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_sim_tesi_ros2_interfaces::action::DronePoseControl_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_sim_tesi_ros2_interfaces::action::DronePoseControl_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_sim_tesi_ros2_interfaces::action::DronePoseControl_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_sim_tesi_ros2_interfaces::action::DronePoseControl_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_sim_tesi_ros2_interfaces::action::DronePoseControl_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_sim_tesi_ros2_interfaces::action::DronePoseControl_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_sim_tesi_ros2_interfaces__action__DronePoseControl_GetResult_Request
    std::shared_ptr<my_sim_tesi_ros2_interfaces::action::DronePoseControl_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_sim_tesi_ros2_interfaces__action__DronePoseControl_GetResult_Request
    std::shared_ptr<my_sim_tesi_ros2_interfaces::action::DronePoseControl_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DronePoseControl_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const DronePoseControl_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DronePoseControl_GetResult_Request_

// alias to use template instance with default allocator
using DronePoseControl_GetResult_Request =
  my_sim_tesi_ros2_interfaces::action::DronePoseControl_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace my_sim_tesi_ros2_interfaces


// Include directives for member types
// Member 'result'
// already included above
// #include "my_sim_tesi_ros2_interfaces/action/detail/drone_pose_control__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__my_sim_tesi_ros2_interfaces__action__DronePoseControl_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__my_sim_tesi_ros2_interfaces__action__DronePoseControl_GetResult_Response __declspec(deprecated)
#endif

namespace my_sim_tesi_ros2_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct DronePoseControl_GetResult_Response_
{
  using Type = DronePoseControl_GetResult_Response_<ContainerAllocator>;

  explicit DronePoseControl_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit DronePoseControl_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    my_sim_tesi_ros2_interfaces::action::DronePoseControl_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const my_sim_tesi_ros2_interfaces::action::DronePoseControl_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_sim_tesi_ros2_interfaces::action::DronePoseControl_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_sim_tesi_ros2_interfaces::action::DronePoseControl_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_sim_tesi_ros2_interfaces::action::DronePoseControl_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_sim_tesi_ros2_interfaces::action::DronePoseControl_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_sim_tesi_ros2_interfaces::action::DronePoseControl_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_sim_tesi_ros2_interfaces::action::DronePoseControl_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_sim_tesi_ros2_interfaces::action::DronePoseControl_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_sim_tesi_ros2_interfaces::action::DronePoseControl_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_sim_tesi_ros2_interfaces::action::DronePoseControl_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_sim_tesi_ros2_interfaces::action::DronePoseControl_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_sim_tesi_ros2_interfaces__action__DronePoseControl_GetResult_Response
    std::shared_ptr<my_sim_tesi_ros2_interfaces::action::DronePoseControl_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_sim_tesi_ros2_interfaces__action__DronePoseControl_GetResult_Response
    std::shared_ptr<my_sim_tesi_ros2_interfaces::action::DronePoseControl_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DronePoseControl_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const DronePoseControl_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DronePoseControl_GetResult_Response_

// alias to use template instance with default allocator
using DronePoseControl_GetResult_Response =
  my_sim_tesi_ros2_interfaces::action::DronePoseControl_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace my_sim_tesi_ros2_interfaces

namespace my_sim_tesi_ros2_interfaces
{

namespace action
{

struct DronePoseControl_GetResult
{
  using Request = my_sim_tesi_ros2_interfaces::action::DronePoseControl_GetResult_Request;
  using Response = my_sim_tesi_ros2_interfaces::action::DronePoseControl_GetResult_Response;
};

}  // namespace action

}  // namespace my_sim_tesi_ros2_interfaces


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "my_sim_tesi_ros2_interfaces/action/detail/drone_pose_control__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__my_sim_tesi_ros2_interfaces__action__DronePoseControl_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__my_sim_tesi_ros2_interfaces__action__DronePoseControl_FeedbackMessage __declspec(deprecated)
#endif

namespace my_sim_tesi_ros2_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct DronePoseControl_FeedbackMessage_
{
  using Type = DronePoseControl_FeedbackMessage_<ContainerAllocator>;

  explicit DronePoseControl_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit DronePoseControl_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    my_sim_tesi_ros2_interfaces::action::DronePoseControl_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const my_sim_tesi_ros2_interfaces::action::DronePoseControl_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_sim_tesi_ros2_interfaces::action::DronePoseControl_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_sim_tesi_ros2_interfaces::action::DronePoseControl_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_sim_tesi_ros2_interfaces::action::DronePoseControl_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_sim_tesi_ros2_interfaces::action::DronePoseControl_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_sim_tesi_ros2_interfaces::action::DronePoseControl_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_sim_tesi_ros2_interfaces::action::DronePoseControl_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_sim_tesi_ros2_interfaces::action::DronePoseControl_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_sim_tesi_ros2_interfaces::action::DronePoseControl_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_sim_tesi_ros2_interfaces::action::DronePoseControl_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_sim_tesi_ros2_interfaces::action::DronePoseControl_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_sim_tesi_ros2_interfaces__action__DronePoseControl_FeedbackMessage
    std::shared_ptr<my_sim_tesi_ros2_interfaces::action::DronePoseControl_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_sim_tesi_ros2_interfaces__action__DronePoseControl_FeedbackMessage
    std::shared_ptr<my_sim_tesi_ros2_interfaces::action::DronePoseControl_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DronePoseControl_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const DronePoseControl_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DronePoseControl_FeedbackMessage_

// alias to use template instance with default allocator
using DronePoseControl_FeedbackMessage =
  my_sim_tesi_ros2_interfaces::action::DronePoseControl_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace my_sim_tesi_ros2_interfaces

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace my_sim_tesi_ros2_interfaces
{

namespace action
{

struct DronePoseControl
{
  /// The goal message defined in the action definition.
  using Goal = my_sim_tesi_ros2_interfaces::action::DronePoseControl_Goal;
  /// The result message defined in the action definition.
  using Result = my_sim_tesi_ros2_interfaces::action::DronePoseControl_Result;
  /// The feedback message defined in the action definition.
  using Feedback = my_sim_tesi_ros2_interfaces::action::DronePoseControl_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = my_sim_tesi_ros2_interfaces::action::DronePoseControl_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = my_sim_tesi_ros2_interfaces::action::DronePoseControl_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = my_sim_tesi_ros2_interfaces::action::DronePoseControl_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct DronePoseControl DronePoseControl;

}  // namespace action

}  // namespace my_sim_tesi_ros2_interfaces

#endif  // MY_SIM_TESI_ROS2_INTERFACES__ACTION__DETAIL__DRONE_POSE_CONTROL__STRUCT_HPP_
