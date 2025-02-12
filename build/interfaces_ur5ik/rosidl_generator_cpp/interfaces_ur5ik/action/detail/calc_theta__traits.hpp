// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from interfaces_ur5ik:action/CalcTheta.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES_UR5IK__ACTION__DETAIL__CALC_THETA__TRAITS_HPP_
#define INTERFACES_UR5IK__ACTION__DETAIL__CALC_THETA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "interfaces_ur5ik/action/detail/calc_theta__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace interfaces_ur5ik
{

namespace action
{

inline void to_flow_style_yaml(
  const CalcTheta_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: act_target
  {
    if (msg.act_target.size() == 0) {
      out << "act_target: []";
    } else {
      out << "act_target: [";
      size_t pending_items = msg.act_target.size();
      for (auto item : msg.act_target) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CalcTheta_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: act_target
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.act_target.size() == 0) {
      out << "act_target: []\n";
    } else {
      out << "act_target:\n";
      for (auto item : msg.act_target) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CalcTheta_Goal & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace interfaces_ur5ik

namespace rosidl_generator_traits
{

[[deprecated("use interfaces_ur5ik::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const interfaces_ur5ik::action::CalcTheta_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  interfaces_ur5ik::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interfaces_ur5ik::action::to_yaml() instead")]]
inline std::string to_yaml(const interfaces_ur5ik::action::CalcTheta_Goal & msg)
{
  return interfaces_ur5ik::action::to_yaml(msg);
}

template<>
inline const char * data_type<interfaces_ur5ik::action::CalcTheta_Goal>()
{
  return "interfaces_ur5ik::action::CalcTheta_Goal";
}

template<>
inline const char * name<interfaces_ur5ik::action::CalcTheta_Goal>()
{
  return "interfaces_ur5ik/action/CalcTheta_Goal";
}

template<>
struct has_fixed_size<interfaces_ur5ik::action::CalcTheta_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<interfaces_ur5ik::action::CalcTheta_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<interfaces_ur5ik::action::CalcTheta_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace interfaces_ur5ik
{

namespace action
{

inline void to_flow_style_yaml(
  const CalcTheta_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: act_theta
  {
    if (msg.act_theta.size() == 0) {
      out << "act_theta: []";
    } else {
      out << "act_theta: [";
      size_t pending_items = msg.act_theta.size();
      for (auto item : msg.act_theta) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CalcTheta_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: act_theta
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.act_theta.size() == 0) {
      out << "act_theta: []\n";
    } else {
      out << "act_theta:\n";
      for (auto item : msg.act_theta) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CalcTheta_Result & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace interfaces_ur5ik

namespace rosidl_generator_traits
{

[[deprecated("use interfaces_ur5ik::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const interfaces_ur5ik::action::CalcTheta_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  interfaces_ur5ik::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interfaces_ur5ik::action::to_yaml() instead")]]
inline std::string to_yaml(const interfaces_ur5ik::action::CalcTheta_Result & msg)
{
  return interfaces_ur5ik::action::to_yaml(msg);
}

template<>
inline const char * data_type<interfaces_ur5ik::action::CalcTheta_Result>()
{
  return "interfaces_ur5ik::action::CalcTheta_Result";
}

template<>
inline const char * name<interfaces_ur5ik::action::CalcTheta_Result>()
{
  return "interfaces_ur5ik/action/CalcTheta_Result";
}

template<>
struct has_fixed_size<interfaces_ur5ik::action::CalcTheta_Result>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<interfaces_ur5ik::action::CalcTheta_Result>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<interfaces_ur5ik::action::CalcTheta_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace interfaces_ur5ik
{

namespace action
{

inline void to_flow_style_yaml(
  const CalcTheta_Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: act_l_target
  {
    if (msg.act_l_target.size() == 0) {
      out << "act_l_target: []";
    } else {
      out << "act_l_target: [";
      size_t pending_items = msg.act_l_target.size();
      for (auto item : msg.act_l_target) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CalcTheta_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: act_l_target
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.act_l_target.size() == 0) {
      out << "act_l_target: []\n";
    } else {
      out << "act_l_target:\n";
      for (auto item : msg.act_l_target) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CalcTheta_Feedback & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace interfaces_ur5ik

namespace rosidl_generator_traits
{

[[deprecated("use interfaces_ur5ik::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const interfaces_ur5ik::action::CalcTheta_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  interfaces_ur5ik::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interfaces_ur5ik::action::to_yaml() instead")]]
inline std::string to_yaml(const interfaces_ur5ik::action::CalcTheta_Feedback & msg)
{
  return interfaces_ur5ik::action::to_yaml(msg);
}

template<>
inline const char * data_type<interfaces_ur5ik::action::CalcTheta_Feedback>()
{
  return "interfaces_ur5ik::action::CalcTheta_Feedback";
}

template<>
inline const char * name<interfaces_ur5ik::action::CalcTheta_Feedback>()
{
  return "interfaces_ur5ik/action/CalcTheta_Feedback";
}

template<>
struct has_fixed_size<interfaces_ur5ik::action::CalcTheta_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<interfaces_ur5ik::action::CalcTheta_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<interfaces_ur5ik::action::CalcTheta_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "interfaces_ur5ik/action/detail/calc_theta__traits.hpp"

namespace interfaces_ur5ik
{

namespace action
{

inline void to_flow_style_yaml(
  const CalcTheta_SendGoal_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    to_flow_style_yaml(msg.goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CalcTheta_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_block_style_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CalcTheta_SendGoal_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace interfaces_ur5ik

namespace rosidl_generator_traits
{

[[deprecated("use interfaces_ur5ik::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const interfaces_ur5ik::action::CalcTheta_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  interfaces_ur5ik::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interfaces_ur5ik::action::to_yaml() instead")]]
inline std::string to_yaml(const interfaces_ur5ik::action::CalcTheta_SendGoal_Request & msg)
{
  return interfaces_ur5ik::action::to_yaml(msg);
}

template<>
inline const char * data_type<interfaces_ur5ik::action::CalcTheta_SendGoal_Request>()
{
  return "interfaces_ur5ik::action::CalcTheta_SendGoal_Request";
}

template<>
inline const char * name<interfaces_ur5ik::action::CalcTheta_SendGoal_Request>()
{
  return "interfaces_ur5ik/action/CalcTheta_SendGoal_Request";
}

template<>
struct has_fixed_size<interfaces_ur5ik::action::CalcTheta_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<interfaces_ur5ik::action::CalcTheta_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<interfaces_ur5ik::action::CalcTheta_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<interfaces_ur5ik::action::CalcTheta_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<interfaces_ur5ik::action::CalcTheta_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace interfaces_ur5ik
{

namespace action
{

inline void to_flow_style_yaml(
  const CalcTheta_SendGoal_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CalcTheta_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CalcTheta_SendGoal_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace interfaces_ur5ik

namespace rosidl_generator_traits
{

[[deprecated("use interfaces_ur5ik::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const interfaces_ur5ik::action::CalcTheta_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  interfaces_ur5ik::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interfaces_ur5ik::action::to_yaml() instead")]]
inline std::string to_yaml(const interfaces_ur5ik::action::CalcTheta_SendGoal_Response & msg)
{
  return interfaces_ur5ik::action::to_yaml(msg);
}

template<>
inline const char * data_type<interfaces_ur5ik::action::CalcTheta_SendGoal_Response>()
{
  return "interfaces_ur5ik::action::CalcTheta_SendGoal_Response";
}

template<>
inline const char * name<interfaces_ur5ik::action::CalcTheta_SendGoal_Response>()
{
  return "interfaces_ur5ik/action/CalcTheta_SendGoal_Response";
}

template<>
struct has_fixed_size<interfaces_ur5ik::action::CalcTheta_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<interfaces_ur5ik::action::CalcTheta_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<interfaces_ur5ik::action::CalcTheta_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<interfaces_ur5ik::action::CalcTheta_SendGoal>()
{
  return "interfaces_ur5ik::action::CalcTheta_SendGoal";
}

template<>
inline const char * name<interfaces_ur5ik::action::CalcTheta_SendGoal>()
{
  return "interfaces_ur5ik/action/CalcTheta_SendGoal";
}

template<>
struct has_fixed_size<interfaces_ur5ik::action::CalcTheta_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<interfaces_ur5ik::action::CalcTheta_SendGoal_Request>::value &&
    has_fixed_size<interfaces_ur5ik::action::CalcTheta_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<interfaces_ur5ik::action::CalcTheta_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<interfaces_ur5ik::action::CalcTheta_SendGoal_Request>::value &&
    has_bounded_size<interfaces_ur5ik::action::CalcTheta_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<interfaces_ur5ik::action::CalcTheta_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<interfaces_ur5ik::action::CalcTheta_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<interfaces_ur5ik::action::CalcTheta_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace interfaces_ur5ik
{

namespace action
{

inline void to_flow_style_yaml(
  const CalcTheta_GetResult_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CalcTheta_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CalcTheta_GetResult_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace interfaces_ur5ik

namespace rosidl_generator_traits
{

[[deprecated("use interfaces_ur5ik::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const interfaces_ur5ik::action::CalcTheta_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  interfaces_ur5ik::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interfaces_ur5ik::action::to_yaml() instead")]]
inline std::string to_yaml(const interfaces_ur5ik::action::CalcTheta_GetResult_Request & msg)
{
  return interfaces_ur5ik::action::to_yaml(msg);
}

template<>
inline const char * data_type<interfaces_ur5ik::action::CalcTheta_GetResult_Request>()
{
  return "interfaces_ur5ik::action::CalcTheta_GetResult_Request";
}

template<>
inline const char * name<interfaces_ur5ik::action::CalcTheta_GetResult_Request>()
{
  return "interfaces_ur5ik/action/CalcTheta_GetResult_Request";
}

template<>
struct has_fixed_size<interfaces_ur5ik::action::CalcTheta_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<interfaces_ur5ik::action::CalcTheta_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<interfaces_ur5ik::action::CalcTheta_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "interfaces_ur5ik/action/detail/calc_theta__traits.hpp"

namespace interfaces_ur5ik
{

namespace action
{

inline void to_flow_style_yaml(
  const CalcTheta_GetResult_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CalcTheta_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CalcTheta_GetResult_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace interfaces_ur5ik

namespace rosidl_generator_traits
{

[[deprecated("use interfaces_ur5ik::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const interfaces_ur5ik::action::CalcTheta_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  interfaces_ur5ik::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interfaces_ur5ik::action::to_yaml() instead")]]
inline std::string to_yaml(const interfaces_ur5ik::action::CalcTheta_GetResult_Response & msg)
{
  return interfaces_ur5ik::action::to_yaml(msg);
}

template<>
inline const char * data_type<interfaces_ur5ik::action::CalcTheta_GetResult_Response>()
{
  return "interfaces_ur5ik::action::CalcTheta_GetResult_Response";
}

template<>
inline const char * name<interfaces_ur5ik::action::CalcTheta_GetResult_Response>()
{
  return "interfaces_ur5ik/action/CalcTheta_GetResult_Response";
}

template<>
struct has_fixed_size<interfaces_ur5ik::action::CalcTheta_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<interfaces_ur5ik::action::CalcTheta_Result>::value> {};

template<>
struct has_bounded_size<interfaces_ur5ik::action::CalcTheta_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<interfaces_ur5ik::action::CalcTheta_Result>::value> {};

template<>
struct is_message<interfaces_ur5ik::action::CalcTheta_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<interfaces_ur5ik::action::CalcTheta_GetResult>()
{
  return "interfaces_ur5ik::action::CalcTheta_GetResult";
}

template<>
inline const char * name<interfaces_ur5ik::action::CalcTheta_GetResult>()
{
  return "interfaces_ur5ik/action/CalcTheta_GetResult";
}

template<>
struct has_fixed_size<interfaces_ur5ik::action::CalcTheta_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<interfaces_ur5ik::action::CalcTheta_GetResult_Request>::value &&
    has_fixed_size<interfaces_ur5ik::action::CalcTheta_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<interfaces_ur5ik::action::CalcTheta_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<interfaces_ur5ik::action::CalcTheta_GetResult_Request>::value &&
    has_bounded_size<interfaces_ur5ik::action::CalcTheta_GetResult_Response>::value
  >
{
};

template<>
struct is_service<interfaces_ur5ik::action::CalcTheta_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<interfaces_ur5ik::action::CalcTheta_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<interfaces_ur5ik::action::CalcTheta_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "interfaces_ur5ik/action/detail/calc_theta__traits.hpp"

namespace interfaces_ur5ik
{

namespace action
{

inline void to_flow_style_yaml(
  const CalcTheta_FeedbackMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: feedback
  {
    out << "feedback: ";
    to_flow_style_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CalcTheta_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_block_style_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CalcTheta_FeedbackMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace interfaces_ur5ik

namespace rosidl_generator_traits
{

[[deprecated("use interfaces_ur5ik::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const interfaces_ur5ik::action::CalcTheta_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  interfaces_ur5ik::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interfaces_ur5ik::action::to_yaml() instead")]]
inline std::string to_yaml(const interfaces_ur5ik::action::CalcTheta_FeedbackMessage & msg)
{
  return interfaces_ur5ik::action::to_yaml(msg);
}

template<>
inline const char * data_type<interfaces_ur5ik::action::CalcTheta_FeedbackMessage>()
{
  return "interfaces_ur5ik::action::CalcTheta_FeedbackMessage";
}

template<>
inline const char * name<interfaces_ur5ik::action::CalcTheta_FeedbackMessage>()
{
  return "interfaces_ur5ik/action/CalcTheta_FeedbackMessage";
}

template<>
struct has_fixed_size<interfaces_ur5ik::action::CalcTheta_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<interfaces_ur5ik::action::CalcTheta_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<interfaces_ur5ik::action::CalcTheta_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<interfaces_ur5ik::action::CalcTheta_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<interfaces_ur5ik::action::CalcTheta_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<interfaces_ur5ik::action::CalcTheta>
  : std::true_type
{
};

template<>
struct is_action_goal<interfaces_ur5ik::action::CalcTheta_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<interfaces_ur5ik::action::CalcTheta_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<interfaces_ur5ik::action::CalcTheta_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // INTERFACES_UR5IK__ACTION__DETAIL__CALC_THETA__TRAITS_HPP_
