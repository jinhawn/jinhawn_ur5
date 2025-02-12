// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interfaces_ur5ik:srv/SixTheta.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES_UR5IK__SRV__DETAIL__SIX_THETA__STRUCT_H_
#define INTERFACES_UR5IK__SRV__DETAIL__SIX_THETA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/SixTheta in the package interfaces_ur5ik.
typedef struct interfaces_ur5ik__srv__SixTheta_Request
{
  uint8_t structure_needs_at_least_one_member;
} interfaces_ur5ik__srv__SixTheta_Request;

// Struct for a sequence of interfaces_ur5ik__srv__SixTheta_Request.
typedef struct interfaces_ur5ik__srv__SixTheta_Request__Sequence
{
  interfaces_ur5ik__srv__SixTheta_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces_ur5ik__srv__SixTheta_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/SixTheta in the package interfaces_ur5ik.
typedef struct interfaces_ur5ik__srv__SixTheta_Response
{
  double srv_theta[6];
  bool success;
} interfaces_ur5ik__srv__SixTheta_Response;

// Struct for a sequence of interfaces_ur5ik__srv__SixTheta_Response.
typedef struct interfaces_ur5ik__srv__SixTheta_Response__Sequence
{
  interfaces_ur5ik__srv__SixTheta_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces_ur5ik__srv__SixTheta_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACES_UR5IK__SRV__DETAIL__SIX_THETA__STRUCT_H_
