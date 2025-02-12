// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces_ur5ik:action/CalcTheta.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES_UR5IK__ACTION__DETAIL__CALC_THETA__BUILDER_HPP_
#define INTERFACES_UR5IK__ACTION__DETAIL__CALC_THETA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interfaces_ur5ik/action/detail/calc_theta__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interfaces_ur5ik
{

namespace action
{

namespace builder
{

class Init_CalcTheta_Goal_act_target
{
public:
  Init_CalcTheta_Goal_act_target()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::interfaces_ur5ik::action::CalcTheta_Goal act_target(::interfaces_ur5ik::action::CalcTheta_Goal::_act_target_type arg)
  {
    msg_.act_target = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces_ur5ik::action::CalcTheta_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces_ur5ik::action::CalcTheta_Goal>()
{
  return interfaces_ur5ik::action::builder::Init_CalcTheta_Goal_act_target();
}

}  // namespace interfaces_ur5ik


namespace interfaces_ur5ik
{

namespace action
{

namespace builder
{

class Init_CalcTheta_Result_act_theta
{
public:
  Init_CalcTheta_Result_act_theta()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::interfaces_ur5ik::action::CalcTheta_Result act_theta(::interfaces_ur5ik::action::CalcTheta_Result::_act_theta_type arg)
  {
    msg_.act_theta = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces_ur5ik::action::CalcTheta_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces_ur5ik::action::CalcTheta_Result>()
{
  return interfaces_ur5ik::action::builder::Init_CalcTheta_Result_act_theta();
}

}  // namespace interfaces_ur5ik


namespace interfaces_ur5ik
{

namespace action
{

namespace builder
{

class Init_CalcTheta_Feedback_act_l_target
{
public:
  Init_CalcTheta_Feedback_act_l_target()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::interfaces_ur5ik::action::CalcTheta_Feedback act_l_target(::interfaces_ur5ik::action::CalcTheta_Feedback::_act_l_target_type arg)
  {
    msg_.act_l_target = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces_ur5ik::action::CalcTheta_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces_ur5ik::action::CalcTheta_Feedback>()
{
  return interfaces_ur5ik::action::builder::Init_CalcTheta_Feedback_act_l_target();
}

}  // namespace interfaces_ur5ik


namespace interfaces_ur5ik
{

namespace action
{

namespace builder
{

class Init_CalcTheta_SendGoal_Request_goal
{
public:
  explicit Init_CalcTheta_SendGoal_Request_goal(::interfaces_ur5ik::action::CalcTheta_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::interfaces_ur5ik::action::CalcTheta_SendGoal_Request goal(::interfaces_ur5ik::action::CalcTheta_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces_ur5ik::action::CalcTheta_SendGoal_Request msg_;
};

class Init_CalcTheta_SendGoal_Request_goal_id
{
public:
  Init_CalcTheta_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CalcTheta_SendGoal_Request_goal goal_id(::interfaces_ur5ik::action::CalcTheta_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_CalcTheta_SendGoal_Request_goal(msg_);
  }

private:
  ::interfaces_ur5ik::action::CalcTheta_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces_ur5ik::action::CalcTheta_SendGoal_Request>()
{
  return interfaces_ur5ik::action::builder::Init_CalcTheta_SendGoal_Request_goal_id();
}

}  // namespace interfaces_ur5ik


namespace interfaces_ur5ik
{

namespace action
{

namespace builder
{

class Init_CalcTheta_SendGoal_Response_stamp
{
public:
  explicit Init_CalcTheta_SendGoal_Response_stamp(::interfaces_ur5ik::action::CalcTheta_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::interfaces_ur5ik::action::CalcTheta_SendGoal_Response stamp(::interfaces_ur5ik::action::CalcTheta_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces_ur5ik::action::CalcTheta_SendGoal_Response msg_;
};

class Init_CalcTheta_SendGoal_Response_accepted
{
public:
  Init_CalcTheta_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CalcTheta_SendGoal_Response_stamp accepted(::interfaces_ur5ik::action::CalcTheta_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_CalcTheta_SendGoal_Response_stamp(msg_);
  }

private:
  ::interfaces_ur5ik::action::CalcTheta_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces_ur5ik::action::CalcTheta_SendGoal_Response>()
{
  return interfaces_ur5ik::action::builder::Init_CalcTheta_SendGoal_Response_accepted();
}

}  // namespace interfaces_ur5ik


namespace interfaces_ur5ik
{

namespace action
{

namespace builder
{

class Init_CalcTheta_GetResult_Request_goal_id
{
public:
  Init_CalcTheta_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::interfaces_ur5ik::action::CalcTheta_GetResult_Request goal_id(::interfaces_ur5ik::action::CalcTheta_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces_ur5ik::action::CalcTheta_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces_ur5ik::action::CalcTheta_GetResult_Request>()
{
  return interfaces_ur5ik::action::builder::Init_CalcTheta_GetResult_Request_goal_id();
}

}  // namespace interfaces_ur5ik


namespace interfaces_ur5ik
{

namespace action
{

namespace builder
{

class Init_CalcTheta_GetResult_Response_result
{
public:
  explicit Init_CalcTheta_GetResult_Response_result(::interfaces_ur5ik::action::CalcTheta_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::interfaces_ur5ik::action::CalcTheta_GetResult_Response result(::interfaces_ur5ik::action::CalcTheta_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces_ur5ik::action::CalcTheta_GetResult_Response msg_;
};

class Init_CalcTheta_GetResult_Response_status
{
public:
  Init_CalcTheta_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CalcTheta_GetResult_Response_result status(::interfaces_ur5ik::action::CalcTheta_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_CalcTheta_GetResult_Response_result(msg_);
  }

private:
  ::interfaces_ur5ik::action::CalcTheta_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces_ur5ik::action::CalcTheta_GetResult_Response>()
{
  return interfaces_ur5ik::action::builder::Init_CalcTheta_GetResult_Response_status();
}

}  // namespace interfaces_ur5ik


namespace interfaces_ur5ik
{

namespace action
{

namespace builder
{

class Init_CalcTheta_FeedbackMessage_feedback
{
public:
  explicit Init_CalcTheta_FeedbackMessage_feedback(::interfaces_ur5ik::action::CalcTheta_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::interfaces_ur5ik::action::CalcTheta_FeedbackMessage feedback(::interfaces_ur5ik::action::CalcTheta_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces_ur5ik::action::CalcTheta_FeedbackMessage msg_;
};

class Init_CalcTheta_FeedbackMessage_goal_id
{
public:
  Init_CalcTheta_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CalcTheta_FeedbackMessage_feedback goal_id(::interfaces_ur5ik::action::CalcTheta_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_CalcTheta_FeedbackMessage_feedback(msg_);
  }

private:
  ::interfaces_ur5ik::action::CalcTheta_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces_ur5ik::action::CalcTheta_FeedbackMessage>()
{
  return interfaces_ur5ik::action::builder::Init_CalcTheta_FeedbackMessage_goal_id();
}

}  // namespace interfaces_ur5ik

#endif  // INTERFACES_UR5IK__ACTION__DETAIL__CALC_THETA__BUILDER_HPP_
