// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interfaces_ur5ik:action/CalcTheta.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES_UR5IK__ACTION__DETAIL__CALC_THETA__STRUCT_H_
#define INTERFACES_UR5IK__ACTION__DETAIL__CALC_THETA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/CalcTheta in the package interfaces_ur5ik.
typedef struct interfaces_ur5ik__action__CalcTheta_Goal
{
  double act_target[6];
} interfaces_ur5ik__action__CalcTheta_Goal;

// Struct for a sequence of interfaces_ur5ik__action__CalcTheta_Goal.
typedef struct interfaces_ur5ik__action__CalcTheta_Goal__Sequence
{
  interfaces_ur5ik__action__CalcTheta_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces_ur5ik__action__CalcTheta_Goal__Sequence;


// Constants defined in the message

/// Struct defined in action/CalcTheta in the package interfaces_ur5ik.
typedef struct interfaces_ur5ik__action__CalcTheta_Result
{
  double act_theta[6];
} interfaces_ur5ik__action__CalcTheta_Result;

// Struct for a sequence of interfaces_ur5ik__action__CalcTheta_Result.
typedef struct interfaces_ur5ik__action__CalcTheta_Result__Sequence
{
  interfaces_ur5ik__action__CalcTheta_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces_ur5ik__action__CalcTheta_Result__Sequence;


// Constants defined in the message

/// Struct defined in action/CalcTheta in the package interfaces_ur5ik.
typedef struct interfaces_ur5ik__action__CalcTheta_Feedback
{
  double act_l_target[6];
} interfaces_ur5ik__action__CalcTheta_Feedback;

// Struct for a sequence of interfaces_ur5ik__action__CalcTheta_Feedback.
typedef struct interfaces_ur5ik__action__CalcTheta_Feedback__Sequence
{
  interfaces_ur5ik__action__CalcTheta_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces_ur5ik__action__CalcTheta_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "interfaces_ur5ik/action/detail/calc_theta__struct.h"

/// Struct defined in action/CalcTheta in the package interfaces_ur5ik.
typedef struct interfaces_ur5ik__action__CalcTheta_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  interfaces_ur5ik__action__CalcTheta_Goal goal;
} interfaces_ur5ik__action__CalcTheta_SendGoal_Request;

// Struct for a sequence of interfaces_ur5ik__action__CalcTheta_SendGoal_Request.
typedef struct interfaces_ur5ik__action__CalcTheta_SendGoal_Request__Sequence
{
  interfaces_ur5ik__action__CalcTheta_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces_ur5ik__action__CalcTheta_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/CalcTheta in the package interfaces_ur5ik.
typedef struct interfaces_ur5ik__action__CalcTheta_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} interfaces_ur5ik__action__CalcTheta_SendGoal_Response;

// Struct for a sequence of interfaces_ur5ik__action__CalcTheta_SendGoal_Response.
typedef struct interfaces_ur5ik__action__CalcTheta_SendGoal_Response__Sequence
{
  interfaces_ur5ik__action__CalcTheta_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces_ur5ik__action__CalcTheta_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/CalcTheta in the package interfaces_ur5ik.
typedef struct interfaces_ur5ik__action__CalcTheta_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} interfaces_ur5ik__action__CalcTheta_GetResult_Request;

// Struct for a sequence of interfaces_ur5ik__action__CalcTheta_GetResult_Request.
typedef struct interfaces_ur5ik__action__CalcTheta_GetResult_Request__Sequence
{
  interfaces_ur5ik__action__CalcTheta_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces_ur5ik__action__CalcTheta_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "interfaces_ur5ik/action/detail/calc_theta__struct.h"

/// Struct defined in action/CalcTheta in the package interfaces_ur5ik.
typedef struct interfaces_ur5ik__action__CalcTheta_GetResult_Response
{
  int8_t status;
  interfaces_ur5ik__action__CalcTheta_Result result;
} interfaces_ur5ik__action__CalcTheta_GetResult_Response;

// Struct for a sequence of interfaces_ur5ik__action__CalcTheta_GetResult_Response.
typedef struct interfaces_ur5ik__action__CalcTheta_GetResult_Response__Sequence
{
  interfaces_ur5ik__action__CalcTheta_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces_ur5ik__action__CalcTheta_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "interfaces_ur5ik/action/detail/calc_theta__struct.h"

/// Struct defined in action/CalcTheta in the package interfaces_ur5ik.
typedef struct interfaces_ur5ik__action__CalcTheta_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  interfaces_ur5ik__action__CalcTheta_Feedback feedback;
} interfaces_ur5ik__action__CalcTheta_FeedbackMessage;

// Struct for a sequence of interfaces_ur5ik__action__CalcTheta_FeedbackMessage.
typedef struct interfaces_ur5ik__action__CalcTheta_FeedbackMessage__Sequence
{
  interfaces_ur5ik__action__CalcTheta_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces_ur5ik__action__CalcTheta_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACES_UR5IK__ACTION__DETAIL__CALC_THETA__STRUCT_H_
