// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from interfaces_ur5ik:srv/SixTheta.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES_UR5IK__SRV__DETAIL__SIX_THETA__TRAITS_HPP_
#define INTERFACES_UR5IK__SRV__DETAIL__SIX_THETA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "interfaces_ur5ik/srv/detail/six_theta__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace interfaces_ur5ik
{

namespace srv
{

inline void to_flow_style_yaml(
  const SixTheta_Request & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SixTheta_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SixTheta_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace interfaces_ur5ik

namespace rosidl_generator_traits
{

[[deprecated("use interfaces_ur5ik::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const interfaces_ur5ik::srv::SixTheta_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  interfaces_ur5ik::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interfaces_ur5ik::srv::to_yaml() instead")]]
inline std::string to_yaml(const interfaces_ur5ik::srv::SixTheta_Request & msg)
{
  return interfaces_ur5ik::srv::to_yaml(msg);
}

template<>
inline const char * data_type<interfaces_ur5ik::srv::SixTheta_Request>()
{
  return "interfaces_ur5ik::srv::SixTheta_Request";
}

template<>
inline const char * name<interfaces_ur5ik::srv::SixTheta_Request>()
{
  return "interfaces_ur5ik/srv/SixTheta_Request";
}

template<>
struct has_fixed_size<interfaces_ur5ik::srv::SixTheta_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<interfaces_ur5ik::srv::SixTheta_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<interfaces_ur5ik::srv::SixTheta_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace interfaces_ur5ik
{

namespace srv
{

inline void to_flow_style_yaml(
  const SixTheta_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: srv_theta
  {
    if (msg.srv_theta.size() == 0) {
      out << "srv_theta: []";
    } else {
      out << "srv_theta: [";
      size_t pending_items = msg.srv_theta.size();
      for (auto item : msg.srv_theta) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SixTheta_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: srv_theta
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.srv_theta.size() == 0) {
      out << "srv_theta: []\n";
    } else {
      out << "srv_theta:\n";
      for (auto item : msg.srv_theta) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SixTheta_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace interfaces_ur5ik

namespace rosidl_generator_traits
{

[[deprecated("use interfaces_ur5ik::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const interfaces_ur5ik::srv::SixTheta_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  interfaces_ur5ik::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interfaces_ur5ik::srv::to_yaml() instead")]]
inline std::string to_yaml(const interfaces_ur5ik::srv::SixTheta_Response & msg)
{
  return interfaces_ur5ik::srv::to_yaml(msg);
}

template<>
inline const char * data_type<interfaces_ur5ik::srv::SixTheta_Response>()
{
  return "interfaces_ur5ik::srv::SixTheta_Response";
}

template<>
inline const char * name<interfaces_ur5ik::srv::SixTheta_Response>()
{
  return "interfaces_ur5ik/srv/SixTheta_Response";
}

template<>
struct has_fixed_size<interfaces_ur5ik::srv::SixTheta_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<interfaces_ur5ik::srv::SixTheta_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<interfaces_ur5ik::srv::SixTheta_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<interfaces_ur5ik::srv::SixTheta>()
{
  return "interfaces_ur5ik::srv::SixTheta";
}

template<>
inline const char * name<interfaces_ur5ik::srv::SixTheta>()
{
  return "interfaces_ur5ik/srv/SixTheta";
}

template<>
struct has_fixed_size<interfaces_ur5ik::srv::SixTheta>
  : std::integral_constant<
    bool,
    has_fixed_size<interfaces_ur5ik::srv::SixTheta_Request>::value &&
    has_fixed_size<interfaces_ur5ik::srv::SixTheta_Response>::value
  >
{
};

template<>
struct has_bounded_size<interfaces_ur5ik::srv::SixTheta>
  : std::integral_constant<
    bool,
    has_bounded_size<interfaces_ur5ik::srv::SixTheta_Request>::value &&
    has_bounded_size<interfaces_ur5ik::srv::SixTheta_Response>::value
  >
{
};

template<>
struct is_service<interfaces_ur5ik::srv::SixTheta>
  : std::true_type
{
};

template<>
struct is_service_request<interfaces_ur5ik::srv::SixTheta_Request>
  : std::true_type
{
};

template<>
struct is_service_response<interfaces_ur5ik::srv::SixTheta_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // INTERFACES_UR5IK__SRV__DETAIL__SIX_THETA__TRAITS_HPP_
