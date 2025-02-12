// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces_ur5ik:srv/SixTheta.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES_UR5IK__SRV__DETAIL__SIX_THETA__BUILDER_HPP_
#define INTERFACES_UR5IK__SRV__DETAIL__SIX_THETA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interfaces_ur5ik/srv/detail/six_theta__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interfaces_ur5ik
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces_ur5ik::srv::SixTheta_Request>()
{
  return ::interfaces_ur5ik::srv::SixTheta_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace interfaces_ur5ik


namespace interfaces_ur5ik
{

namespace srv
{

namespace builder
{

class Init_SixTheta_Response_success
{
public:
  explicit Init_SixTheta_Response_success(::interfaces_ur5ik::srv::SixTheta_Response & msg)
  : msg_(msg)
  {}
  ::interfaces_ur5ik::srv::SixTheta_Response success(::interfaces_ur5ik::srv::SixTheta_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces_ur5ik::srv::SixTheta_Response msg_;
};

class Init_SixTheta_Response_srv_theta
{
public:
  Init_SixTheta_Response_srv_theta()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SixTheta_Response_success srv_theta(::interfaces_ur5ik::srv::SixTheta_Response::_srv_theta_type arg)
  {
    msg_.srv_theta = std::move(arg);
    return Init_SixTheta_Response_success(msg_);
  }

private:
  ::interfaces_ur5ik::srv::SixTheta_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces_ur5ik::srv::SixTheta_Response>()
{
  return interfaces_ur5ik::srv::builder::Init_SixTheta_Response_srv_theta();
}

}  // namespace interfaces_ur5ik

#endif  // INTERFACES_UR5IK__SRV__DETAIL__SIX_THETA__BUILDER_HPP_
