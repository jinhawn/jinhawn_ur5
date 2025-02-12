// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ur_custom_interfaces:msg/URCommand.idl
// generated code does not contain a copyright notice

#ifndef UR_CUSTOM_INTERFACES__MSG__DETAIL__UR_COMMAND__STRUCT_H_
#define UR_CUSTOM_INTERFACES__MSG__DETAIL__UR_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'x'
// Member 'y'
// Member 'depth'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/URCommand in the package ur_custom_interfaces.
/**
  * https://www.youtube.com/watch?v=E_xBPI8SQig&ab_channel=RoboticsBack-End
  * https://docs.ros.org/en/humble/Concepts/Basic/About-Interfaces.html
 */
typedef struct ur_custom_interfaces__msg__URCommand
{
  rosidl_runtime_c__String x;
  rosidl_runtime_c__String y;
  rosidl_runtime_c__String depth;
} ur_custom_interfaces__msg__URCommand;

// Struct for a sequence of ur_custom_interfaces__msg__URCommand.
typedef struct ur_custom_interfaces__msg__URCommand__Sequence
{
  ur_custom_interfaces__msg__URCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ur_custom_interfaces__msg__URCommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UR_CUSTOM_INTERFACES__MSG__DETAIL__UR_COMMAND__STRUCT_H_
