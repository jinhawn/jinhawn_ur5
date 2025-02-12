// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interfaces_ur5ik:msg/Target.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES_UR5IK__MSG__DETAIL__TARGET__STRUCT_H_
#define INTERFACES_UR5IK__MSG__DETAIL__TARGET__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Target in the package interfaces_ur5ik.
typedef struct interfaces_ur5ik__msg__Target
{
  double target;
} interfaces_ur5ik__msg__Target;

// Struct for a sequence of interfaces_ur5ik__msg__Target.
typedef struct interfaces_ur5ik__msg__Target__Sequence
{
  interfaces_ur5ik__msg__Target * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces_ur5ik__msg__Target__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACES_UR5IK__MSG__DETAIL__TARGET__STRUCT_H_
