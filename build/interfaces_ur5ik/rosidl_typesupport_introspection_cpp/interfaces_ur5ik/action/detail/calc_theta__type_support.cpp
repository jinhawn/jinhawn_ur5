// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from interfaces_ur5ik:action/CalcTheta.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "interfaces_ur5ik/action/detail/calc_theta__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace interfaces_ur5ik
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void CalcTheta_Goal_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) interfaces_ur5ik::action::CalcTheta_Goal(_init);
}

void CalcTheta_Goal_fini_function(void * message_memory)
{
  auto typed_message = static_cast<interfaces_ur5ik::action::CalcTheta_Goal *>(message_memory);
  typed_message->~CalcTheta_Goal();
}

size_t size_function__CalcTheta_Goal__act_target(const void * untyped_member)
{
  (void)untyped_member;
  return 6;
}

const void * get_const_function__CalcTheta_Goal__act_target(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 6> *>(untyped_member);
  return &member[index];
}

void * get_function__CalcTheta_Goal__act_target(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 6> *>(untyped_member);
  return &member[index];
}

void fetch_function__CalcTheta_Goal__act_target(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__CalcTheta_Goal__act_target(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__CalcTheta_Goal__act_target(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__CalcTheta_Goal__act_target(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember CalcTheta_Goal_message_member_array[1] = {
  {
    "act_target",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    6,  // array size
    false,  // is upper bound
    offsetof(interfaces_ur5ik::action::CalcTheta_Goal, act_target),  // bytes offset in struct
    nullptr,  // default value
    size_function__CalcTheta_Goal__act_target,  // size() function pointer
    get_const_function__CalcTheta_Goal__act_target,  // get_const(index) function pointer
    get_function__CalcTheta_Goal__act_target,  // get(index) function pointer
    fetch_function__CalcTheta_Goal__act_target,  // fetch(index, &value) function pointer
    assign_function__CalcTheta_Goal__act_target,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers CalcTheta_Goal_message_members = {
  "interfaces_ur5ik::action",  // message namespace
  "CalcTheta_Goal",  // message name
  1,  // number of fields
  sizeof(interfaces_ur5ik::action::CalcTheta_Goal),
  CalcTheta_Goal_message_member_array,  // message members
  CalcTheta_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  CalcTheta_Goal_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t CalcTheta_Goal_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &CalcTheta_Goal_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace interfaces_ur5ik


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<interfaces_ur5ik::action::CalcTheta_Goal>()
{
  return &::interfaces_ur5ik::action::rosidl_typesupport_introspection_cpp::CalcTheta_Goal_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, interfaces_ur5ik, action, CalcTheta_Goal)() {
  return &::interfaces_ur5ik::action::rosidl_typesupport_introspection_cpp::CalcTheta_Goal_message_type_support_handle;
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
// #include "interfaces_ur5ik/action/detail/calc_theta__struct.hpp"
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

namespace interfaces_ur5ik
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void CalcTheta_Result_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) interfaces_ur5ik::action::CalcTheta_Result(_init);
}

void CalcTheta_Result_fini_function(void * message_memory)
{
  auto typed_message = static_cast<interfaces_ur5ik::action::CalcTheta_Result *>(message_memory);
  typed_message->~CalcTheta_Result();
}

size_t size_function__CalcTheta_Result__act_theta(const void * untyped_member)
{
  (void)untyped_member;
  return 6;
}

const void * get_const_function__CalcTheta_Result__act_theta(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 6> *>(untyped_member);
  return &member[index];
}

void * get_function__CalcTheta_Result__act_theta(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 6> *>(untyped_member);
  return &member[index];
}

void fetch_function__CalcTheta_Result__act_theta(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__CalcTheta_Result__act_theta(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__CalcTheta_Result__act_theta(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__CalcTheta_Result__act_theta(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember CalcTheta_Result_message_member_array[1] = {
  {
    "act_theta",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    6,  // array size
    false,  // is upper bound
    offsetof(interfaces_ur5ik::action::CalcTheta_Result, act_theta),  // bytes offset in struct
    nullptr,  // default value
    size_function__CalcTheta_Result__act_theta,  // size() function pointer
    get_const_function__CalcTheta_Result__act_theta,  // get_const(index) function pointer
    get_function__CalcTheta_Result__act_theta,  // get(index) function pointer
    fetch_function__CalcTheta_Result__act_theta,  // fetch(index, &value) function pointer
    assign_function__CalcTheta_Result__act_theta,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers CalcTheta_Result_message_members = {
  "interfaces_ur5ik::action",  // message namespace
  "CalcTheta_Result",  // message name
  1,  // number of fields
  sizeof(interfaces_ur5ik::action::CalcTheta_Result),
  CalcTheta_Result_message_member_array,  // message members
  CalcTheta_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  CalcTheta_Result_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t CalcTheta_Result_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &CalcTheta_Result_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace interfaces_ur5ik


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<interfaces_ur5ik::action::CalcTheta_Result>()
{
  return &::interfaces_ur5ik::action::rosidl_typesupport_introspection_cpp::CalcTheta_Result_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, interfaces_ur5ik, action, CalcTheta_Result)() {
  return &::interfaces_ur5ik::action::rosidl_typesupport_introspection_cpp::CalcTheta_Result_message_type_support_handle;
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
// #include "interfaces_ur5ik/action/detail/calc_theta__struct.hpp"
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

namespace interfaces_ur5ik
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void CalcTheta_Feedback_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) interfaces_ur5ik::action::CalcTheta_Feedback(_init);
}

void CalcTheta_Feedback_fini_function(void * message_memory)
{
  auto typed_message = static_cast<interfaces_ur5ik::action::CalcTheta_Feedback *>(message_memory);
  typed_message->~CalcTheta_Feedback();
}

size_t size_function__CalcTheta_Feedback__act_l_target(const void * untyped_member)
{
  (void)untyped_member;
  return 6;
}

const void * get_const_function__CalcTheta_Feedback__act_l_target(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 6> *>(untyped_member);
  return &member[index];
}

void * get_function__CalcTheta_Feedback__act_l_target(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 6> *>(untyped_member);
  return &member[index];
}

void fetch_function__CalcTheta_Feedback__act_l_target(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__CalcTheta_Feedback__act_l_target(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__CalcTheta_Feedback__act_l_target(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__CalcTheta_Feedback__act_l_target(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember CalcTheta_Feedback_message_member_array[1] = {
  {
    "act_l_target",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    6,  // array size
    false,  // is upper bound
    offsetof(interfaces_ur5ik::action::CalcTheta_Feedback, act_l_target),  // bytes offset in struct
    nullptr,  // default value
    size_function__CalcTheta_Feedback__act_l_target,  // size() function pointer
    get_const_function__CalcTheta_Feedback__act_l_target,  // get_const(index) function pointer
    get_function__CalcTheta_Feedback__act_l_target,  // get(index) function pointer
    fetch_function__CalcTheta_Feedback__act_l_target,  // fetch(index, &value) function pointer
    assign_function__CalcTheta_Feedback__act_l_target,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers CalcTheta_Feedback_message_members = {
  "interfaces_ur5ik::action",  // message namespace
  "CalcTheta_Feedback",  // message name
  1,  // number of fields
  sizeof(interfaces_ur5ik::action::CalcTheta_Feedback),
  CalcTheta_Feedback_message_member_array,  // message members
  CalcTheta_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  CalcTheta_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t CalcTheta_Feedback_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &CalcTheta_Feedback_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace interfaces_ur5ik


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<interfaces_ur5ik::action::CalcTheta_Feedback>()
{
  return &::interfaces_ur5ik::action::rosidl_typesupport_introspection_cpp::CalcTheta_Feedback_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, interfaces_ur5ik, action, CalcTheta_Feedback)() {
  return &::interfaces_ur5ik::action::rosidl_typesupport_introspection_cpp::CalcTheta_Feedback_message_type_support_handle;
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
// #include "interfaces_ur5ik/action/detail/calc_theta__struct.hpp"
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

namespace interfaces_ur5ik
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void CalcTheta_SendGoal_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) interfaces_ur5ik::action::CalcTheta_SendGoal_Request(_init);
}

void CalcTheta_SendGoal_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<interfaces_ur5ik::action::CalcTheta_SendGoal_Request *>(message_memory);
  typed_message->~CalcTheta_SendGoal_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember CalcTheta_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<unique_identifier_msgs::msg::UUID>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces_ur5ik::action::CalcTheta_SendGoal_Request, goal_id),  // bytes offset in struct
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
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<interfaces_ur5ik::action::CalcTheta_Goal>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces_ur5ik::action::CalcTheta_SendGoal_Request, goal),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers CalcTheta_SendGoal_Request_message_members = {
  "interfaces_ur5ik::action",  // message namespace
  "CalcTheta_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(interfaces_ur5ik::action::CalcTheta_SendGoal_Request),
  CalcTheta_SendGoal_Request_message_member_array,  // message members
  CalcTheta_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  CalcTheta_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t CalcTheta_SendGoal_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &CalcTheta_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace interfaces_ur5ik


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<interfaces_ur5ik::action::CalcTheta_SendGoal_Request>()
{
  return &::interfaces_ur5ik::action::rosidl_typesupport_introspection_cpp::CalcTheta_SendGoal_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, interfaces_ur5ik, action, CalcTheta_SendGoal_Request)() {
  return &::interfaces_ur5ik::action::rosidl_typesupport_introspection_cpp::CalcTheta_SendGoal_Request_message_type_support_handle;
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
// #include "interfaces_ur5ik/action/detail/calc_theta__struct.hpp"
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

namespace interfaces_ur5ik
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void CalcTheta_SendGoal_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) interfaces_ur5ik::action::CalcTheta_SendGoal_Response(_init);
}

void CalcTheta_SendGoal_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<interfaces_ur5ik::action::CalcTheta_SendGoal_Response *>(message_memory);
  typed_message->~CalcTheta_SendGoal_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember CalcTheta_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces_ur5ik::action::CalcTheta_SendGoal_Response, accepted),  // bytes offset in struct
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
    offsetof(interfaces_ur5ik::action::CalcTheta_SendGoal_Response, stamp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers CalcTheta_SendGoal_Response_message_members = {
  "interfaces_ur5ik::action",  // message namespace
  "CalcTheta_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(interfaces_ur5ik::action::CalcTheta_SendGoal_Response),
  CalcTheta_SendGoal_Response_message_member_array,  // message members
  CalcTheta_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  CalcTheta_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t CalcTheta_SendGoal_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &CalcTheta_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace interfaces_ur5ik


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<interfaces_ur5ik::action::CalcTheta_SendGoal_Response>()
{
  return &::interfaces_ur5ik::action::rosidl_typesupport_introspection_cpp::CalcTheta_SendGoal_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, interfaces_ur5ik, action, CalcTheta_SendGoal_Response)() {
  return &::interfaces_ur5ik::action::rosidl_typesupport_introspection_cpp::CalcTheta_SendGoal_Response_message_type_support_handle;
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
// #include "interfaces_ur5ik/action/detail/calc_theta__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace interfaces_ur5ik
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers CalcTheta_SendGoal_service_members = {
  "interfaces_ur5ik::action",  // service namespace
  "CalcTheta_SendGoal",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<interfaces_ur5ik::action::CalcTheta_SendGoal>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t CalcTheta_SendGoal_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &CalcTheta_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace interfaces_ur5ik


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<interfaces_ur5ik::action::CalcTheta_SendGoal>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::interfaces_ur5ik::action::rosidl_typesupport_introspection_cpp::CalcTheta_SendGoal_service_type_support_handle;
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
        ::interfaces_ur5ik::action::CalcTheta_SendGoal_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::interfaces_ur5ik::action::CalcTheta_SendGoal_Response
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
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, interfaces_ur5ik, action, CalcTheta_SendGoal)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<interfaces_ur5ik::action::CalcTheta_SendGoal>();
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
// #include "interfaces_ur5ik/action/detail/calc_theta__struct.hpp"
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

namespace interfaces_ur5ik
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void CalcTheta_GetResult_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) interfaces_ur5ik::action::CalcTheta_GetResult_Request(_init);
}

void CalcTheta_GetResult_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<interfaces_ur5ik::action::CalcTheta_GetResult_Request *>(message_memory);
  typed_message->~CalcTheta_GetResult_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember CalcTheta_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<unique_identifier_msgs::msg::UUID>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces_ur5ik::action::CalcTheta_GetResult_Request, goal_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers CalcTheta_GetResult_Request_message_members = {
  "interfaces_ur5ik::action",  // message namespace
  "CalcTheta_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(interfaces_ur5ik::action::CalcTheta_GetResult_Request),
  CalcTheta_GetResult_Request_message_member_array,  // message members
  CalcTheta_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  CalcTheta_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t CalcTheta_GetResult_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &CalcTheta_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace interfaces_ur5ik


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<interfaces_ur5ik::action::CalcTheta_GetResult_Request>()
{
  return &::interfaces_ur5ik::action::rosidl_typesupport_introspection_cpp::CalcTheta_GetResult_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, interfaces_ur5ik, action, CalcTheta_GetResult_Request)() {
  return &::interfaces_ur5ik::action::rosidl_typesupport_introspection_cpp::CalcTheta_GetResult_Request_message_type_support_handle;
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
// #include "interfaces_ur5ik/action/detail/calc_theta__struct.hpp"
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

namespace interfaces_ur5ik
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void CalcTheta_GetResult_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) interfaces_ur5ik::action::CalcTheta_GetResult_Response(_init);
}

void CalcTheta_GetResult_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<interfaces_ur5ik::action::CalcTheta_GetResult_Response *>(message_memory);
  typed_message->~CalcTheta_GetResult_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember CalcTheta_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces_ur5ik::action::CalcTheta_GetResult_Response, status),  // bytes offset in struct
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
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<interfaces_ur5ik::action::CalcTheta_Result>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces_ur5ik::action::CalcTheta_GetResult_Response, result),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers CalcTheta_GetResult_Response_message_members = {
  "interfaces_ur5ik::action",  // message namespace
  "CalcTheta_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(interfaces_ur5ik::action::CalcTheta_GetResult_Response),
  CalcTheta_GetResult_Response_message_member_array,  // message members
  CalcTheta_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  CalcTheta_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t CalcTheta_GetResult_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &CalcTheta_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace interfaces_ur5ik


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<interfaces_ur5ik::action::CalcTheta_GetResult_Response>()
{
  return &::interfaces_ur5ik::action::rosidl_typesupport_introspection_cpp::CalcTheta_GetResult_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, interfaces_ur5ik, action, CalcTheta_GetResult_Response)() {
  return &::interfaces_ur5ik::action::rosidl_typesupport_introspection_cpp::CalcTheta_GetResult_Response_message_type_support_handle;
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
// #include "interfaces_ur5ik/action/detail/calc_theta__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace interfaces_ur5ik
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers CalcTheta_GetResult_service_members = {
  "interfaces_ur5ik::action",  // service namespace
  "CalcTheta_GetResult",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<interfaces_ur5ik::action::CalcTheta_GetResult>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t CalcTheta_GetResult_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &CalcTheta_GetResult_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace interfaces_ur5ik


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<interfaces_ur5ik::action::CalcTheta_GetResult>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::interfaces_ur5ik::action::rosidl_typesupport_introspection_cpp::CalcTheta_GetResult_service_type_support_handle;
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
        ::interfaces_ur5ik::action::CalcTheta_GetResult_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::interfaces_ur5ik::action::CalcTheta_GetResult_Response
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
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, interfaces_ur5ik, action, CalcTheta_GetResult)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<interfaces_ur5ik::action::CalcTheta_GetResult>();
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
// #include "interfaces_ur5ik/action/detail/calc_theta__struct.hpp"
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

namespace interfaces_ur5ik
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void CalcTheta_FeedbackMessage_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) interfaces_ur5ik::action::CalcTheta_FeedbackMessage(_init);
}

void CalcTheta_FeedbackMessage_fini_function(void * message_memory)
{
  auto typed_message = static_cast<interfaces_ur5ik::action::CalcTheta_FeedbackMessage *>(message_memory);
  typed_message->~CalcTheta_FeedbackMessage();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember CalcTheta_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<unique_identifier_msgs::msg::UUID>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces_ur5ik::action::CalcTheta_FeedbackMessage, goal_id),  // bytes offset in struct
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
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<interfaces_ur5ik::action::CalcTheta_Feedback>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces_ur5ik::action::CalcTheta_FeedbackMessage, feedback),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers CalcTheta_FeedbackMessage_message_members = {
  "interfaces_ur5ik::action",  // message namespace
  "CalcTheta_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(interfaces_ur5ik::action::CalcTheta_FeedbackMessage),
  CalcTheta_FeedbackMessage_message_member_array,  // message members
  CalcTheta_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  CalcTheta_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t CalcTheta_FeedbackMessage_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &CalcTheta_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace interfaces_ur5ik


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<interfaces_ur5ik::action::CalcTheta_FeedbackMessage>()
{
  return &::interfaces_ur5ik::action::rosidl_typesupport_introspection_cpp::CalcTheta_FeedbackMessage_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, interfaces_ur5ik, action, CalcTheta_FeedbackMessage)() {
  return &::interfaces_ur5ik::action::rosidl_typesupport_introspection_cpp::CalcTheta_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
