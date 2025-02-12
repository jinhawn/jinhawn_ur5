// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ur_custom_interfaces:msg/URCommand.idl
// generated code does not contain a copyright notice

#ifndef UR_CUSTOM_INTERFACES__MSG__DETAIL__UR_COMMAND__BUILDER_HPP_
#define UR_CUSTOM_INTERFACES__MSG__DETAIL__UR_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ur_custom_interfaces/msg/detail/ur_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ur_custom_interfaces
{

namespace msg
{

namespace builder
{

class Init_URCommand_depth
{
public:
  explicit Init_URCommand_depth(::ur_custom_interfaces::msg::URCommand & msg)
  : msg_(msg)
  {}
  ::ur_custom_interfaces::msg::URCommand depth(::ur_custom_interfaces::msg::URCommand::_depth_type arg)
  {
    msg_.depth = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ur_custom_interfaces::msg::URCommand msg_;
};

class Init_URCommand_y
{
public:
  explicit Init_URCommand_y(::ur_custom_interfaces::msg::URCommand & msg)
  : msg_(msg)
  {}
  Init_URCommand_depth y(::ur_custom_interfaces::msg::URCommand::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_URCommand_depth(msg_);
  }

private:
  ::ur_custom_interfaces::msg::URCommand msg_;
};

class Init_URCommand_x
{
public:
  Init_URCommand_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_URCommand_y x(::ur_custom_interfaces::msg::URCommand::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_URCommand_y(msg_);
  }

private:
  ::ur_custom_interfaces::msg::URCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ur_custom_interfaces::msg::URCommand>()
{
  return ur_custom_interfaces::msg::builder::Init_URCommand_x();
}

}  // namespace ur_custom_interfaces

#endif  // UR_CUSTOM_INTERFACES__MSG__DETAIL__UR_COMMAND__BUILDER_HPP_
