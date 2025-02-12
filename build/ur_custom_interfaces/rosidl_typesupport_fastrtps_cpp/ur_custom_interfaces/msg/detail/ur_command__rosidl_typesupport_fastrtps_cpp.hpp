// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from ur_custom_interfaces:msg/URCommand.idl
// generated code does not contain a copyright notice

#ifndef UR_CUSTOM_INTERFACES__MSG__DETAIL__UR_COMMAND__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define UR_CUSTOM_INTERFACES__MSG__DETAIL__UR_COMMAND__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "ur_custom_interfaces/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "ur_custom_interfaces/msg/detail/ur_command__struct.hpp"

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

namespace ur_custom_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ur_custom_interfaces
cdr_serialize(
  const ur_custom_interfaces::msg::URCommand & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ur_custom_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  ur_custom_interfaces::msg::URCommand & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ur_custom_interfaces
get_serialized_size(
  const ur_custom_interfaces::msg::URCommand & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ur_custom_interfaces
max_serialized_size_URCommand(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace ur_custom_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ur_custom_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ur_custom_interfaces, msg, URCommand)();

#ifdef __cplusplus
}
#endif

#endif  // UR_CUSTOM_INTERFACES__MSG__DETAIL__UR_COMMAND__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
