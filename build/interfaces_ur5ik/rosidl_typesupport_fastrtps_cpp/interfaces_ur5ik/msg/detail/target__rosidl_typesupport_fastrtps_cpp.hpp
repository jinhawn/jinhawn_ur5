// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from interfaces_ur5ik:msg/Target.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES_UR5IK__MSG__DETAIL__TARGET__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define INTERFACES_UR5IK__MSG__DETAIL__TARGET__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "interfaces_ur5ik/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "interfaces_ur5ik/msg/detail/target__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace interfaces_ur5ik
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_interfaces_ur5ik
cdr_serialize(
  const interfaces_ur5ik::msg::Target & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_interfaces_ur5ik
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  interfaces_ur5ik::msg::Target & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_interfaces_ur5ik
get_serialized_size(
  const interfaces_ur5ik::msg::Target & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_interfaces_ur5ik
max_serialized_size_Target(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace interfaces_ur5ik

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_interfaces_ur5ik
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, interfaces_ur5ik, msg, Target)();

#ifdef __cplusplus
}
#endif

#endif  // INTERFACES_UR5IK__MSG__DETAIL__TARGET__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
