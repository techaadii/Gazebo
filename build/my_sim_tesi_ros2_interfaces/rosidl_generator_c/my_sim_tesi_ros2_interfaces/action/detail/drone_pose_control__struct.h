// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from my_sim_tesi_ros2_interfaces:action/DronePoseControl.idl
// generated code does not contain a copyright notice

#ifndef MY_SIM_TESI_ROS2_INTERFACES__ACTION__DETAIL__DRONE_POSE_CONTROL__STRUCT_H_
#define MY_SIM_TESI_ROS2_INTERFACES__ACTION__DETAIL__DRONE_POSE_CONTROL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/DronePoseControl in the package my_sim_tesi_ros2_interfaces.
typedef struct my_sim_tesi_ros2_interfaces__action__DronePoseControl_Goal
{
  double target_x;
  double target_y;
  double target_yaw;
  double target_altitude;
} my_sim_tesi_ros2_interfaces__action__DronePoseControl_Goal;

// Struct for a sequence of my_sim_tesi_ros2_interfaces__action__DronePoseControl_Goal.
typedef struct my_sim_tesi_ros2_interfaces__action__DronePoseControl_Goal__Sequence
{
  my_sim_tesi_ros2_interfaces__action__DronePoseControl_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_sim_tesi_ros2_interfaces__action__DronePoseControl_Goal__Sequence;


// Constants defined in the message

/// Struct defined in action/DronePoseControl in the package my_sim_tesi_ros2_interfaces.
typedef struct my_sim_tesi_ros2_interfaces__action__DronePoseControl_Result
{
  double res_x;
  double res_y;
  double res_yaw;
  double res_altitude;
} my_sim_tesi_ros2_interfaces__action__DronePoseControl_Result;

// Struct for a sequence of my_sim_tesi_ros2_interfaces__action__DronePoseControl_Result.
typedef struct my_sim_tesi_ros2_interfaces__action__DronePoseControl_Result__Sequence
{
  my_sim_tesi_ros2_interfaces__action__DronePoseControl_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_sim_tesi_ros2_interfaces__action__DronePoseControl_Result__Sequence;


// Constants defined in the message

/// Struct defined in action/DronePoseControl in the package my_sim_tesi_ros2_interfaces.
typedef struct my_sim_tesi_ros2_interfaces__action__DronePoseControl_Feedback
{
  double current_x;
  double current_y;
  double current_yaw;
  double current_altitude;
} my_sim_tesi_ros2_interfaces__action__DronePoseControl_Feedback;

// Struct for a sequence of my_sim_tesi_ros2_interfaces__action__DronePoseControl_Feedback.
typedef struct my_sim_tesi_ros2_interfaces__action__DronePoseControl_Feedback__Sequence
{
  my_sim_tesi_ros2_interfaces__action__DronePoseControl_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_sim_tesi_ros2_interfaces__action__DronePoseControl_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "my_sim_tesi_ros2_interfaces/action/detail/drone_pose_control__struct.h"

/// Struct defined in action/DronePoseControl in the package my_sim_tesi_ros2_interfaces.
typedef struct my_sim_tesi_ros2_interfaces__action__DronePoseControl_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  my_sim_tesi_ros2_interfaces__action__DronePoseControl_Goal goal;
} my_sim_tesi_ros2_interfaces__action__DronePoseControl_SendGoal_Request;

// Struct for a sequence of my_sim_tesi_ros2_interfaces__action__DronePoseControl_SendGoal_Request.
typedef struct my_sim_tesi_ros2_interfaces__action__DronePoseControl_SendGoal_Request__Sequence
{
  my_sim_tesi_ros2_interfaces__action__DronePoseControl_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_sim_tesi_ros2_interfaces__action__DronePoseControl_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/DronePoseControl in the package my_sim_tesi_ros2_interfaces.
typedef struct my_sim_tesi_ros2_interfaces__action__DronePoseControl_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} my_sim_tesi_ros2_interfaces__action__DronePoseControl_SendGoal_Response;

// Struct for a sequence of my_sim_tesi_ros2_interfaces__action__DronePoseControl_SendGoal_Response.
typedef struct my_sim_tesi_ros2_interfaces__action__DronePoseControl_SendGoal_Response__Sequence
{
  my_sim_tesi_ros2_interfaces__action__DronePoseControl_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_sim_tesi_ros2_interfaces__action__DronePoseControl_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/DronePoseControl in the package my_sim_tesi_ros2_interfaces.
typedef struct my_sim_tesi_ros2_interfaces__action__DronePoseControl_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} my_sim_tesi_ros2_interfaces__action__DronePoseControl_GetResult_Request;

// Struct for a sequence of my_sim_tesi_ros2_interfaces__action__DronePoseControl_GetResult_Request.
typedef struct my_sim_tesi_ros2_interfaces__action__DronePoseControl_GetResult_Request__Sequence
{
  my_sim_tesi_ros2_interfaces__action__DronePoseControl_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_sim_tesi_ros2_interfaces__action__DronePoseControl_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "my_sim_tesi_ros2_interfaces/action/detail/drone_pose_control__struct.h"

/// Struct defined in action/DronePoseControl in the package my_sim_tesi_ros2_interfaces.
typedef struct my_sim_tesi_ros2_interfaces__action__DronePoseControl_GetResult_Response
{
  int8_t status;
  my_sim_tesi_ros2_interfaces__action__DronePoseControl_Result result;
} my_sim_tesi_ros2_interfaces__action__DronePoseControl_GetResult_Response;

// Struct for a sequence of my_sim_tesi_ros2_interfaces__action__DronePoseControl_GetResult_Response.
typedef struct my_sim_tesi_ros2_interfaces__action__DronePoseControl_GetResult_Response__Sequence
{
  my_sim_tesi_ros2_interfaces__action__DronePoseControl_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_sim_tesi_ros2_interfaces__action__DronePoseControl_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "my_sim_tesi_ros2_interfaces/action/detail/drone_pose_control__struct.h"

/// Struct defined in action/DronePoseControl in the package my_sim_tesi_ros2_interfaces.
typedef struct my_sim_tesi_ros2_interfaces__action__DronePoseControl_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  my_sim_tesi_ros2_interfaces__action__DronePoseControl_Feedback feedback;
} my_sim_tesi_ros2_interfaces__action__DronePoseControl_FeedbackMessage;

// Struct for a sequence of my_sim_tesi_ros2_interfaces__action__DronePoseControl_FeedbackMessage.
typedef struct my_sim_tesi_ros2_interfaces__action__DronePoseControl_FeedbackMessage__Sequence
{
  my_sim_tesi_ros2_interfaces__action__DronePoseControl_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_sim_tesi_ros2_interfaces__action__DronePoseControl_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MY_SIM_TESI_ROS2_INTERFACES__ACTION__DETAIL__DRONE_POSE_CONTROL__STRUCT_H_
