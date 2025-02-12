// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces_ur5ik:msg/Target.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES_UR5IK__MSG__DETAIL__TARGET__BUILDER_HPP_
#define INTERFACES_UR5IK__MSG__DETAIL__TARGET__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interfaces_ur5ik/msg/detail/target__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interfaces_ur5ik
{

namespace msg
{

namespace builder
{

class Init_Target_target
{
public:
  Init_Target_target()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::interfaces_ur5ik::msg::Target target(::interfaces_ur5ik::msg::Target::_target_type arg)
  {
    msg_.target = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces_ur5ik::msg::Target msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces_ur5ik::msg::Target>()
{
  return interfaces_ur5ik::msg::builder::Init_Target_target();
}

}  // namespace interfaces_ur5ik

#endif  // INTERFACES_UR5IK__MSG__DETAIL__TARGET__BUILDER_HPP_
