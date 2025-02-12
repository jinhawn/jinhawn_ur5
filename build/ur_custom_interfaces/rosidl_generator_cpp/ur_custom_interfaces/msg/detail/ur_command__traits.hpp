// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ur_custom_interfaces:msg/URCommand.idl
// generated code does not contain a copyright notice

#ifndef UR_CUSTOM_INTERFACES__MSG__DETAIL__UR_COMMAND__TRAITS_HPP_
#define UR_CUSTOM_INTERFACES__MSG__DETAIL__UR_COMMAND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ur_custom_interfaces/msg/detail/ur_command__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ur_custom_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const URCommand & msg,
  std::ostream & out)
{
  out << "{";
  // member: x
  {
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << ", ";
  }

  // member: y
  {
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << ", ";
  }

  // member: depth
  {
    out << "depth: ";
    rosidl_generator_traits::value_to_yaml(msg.depth, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const URCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << "\n";
  }

  // member: depth
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "depth: ";
    rosidl_generator_traits::value_to_yaml(msg.depth, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const URCommand & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace ur_custom_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use ur_custom_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ur_custom_interfaces::msg::URCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  ur_custom_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ur_custom_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const ur_custom_interfaces::msg::URCommand & msg)
{
  return ur_custom_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ur_custom_interfaces::msg::URCommand>()
{
  return "ur_custom_interfaces::msg::URCommand";
}

template<>
inline const char * name<ur_custom_interfaces::msg::URCommand>()
{
  return "ur_custom_interfaces/msg/URCommand";
}

template<>
struct has_fixed_size<ur_custom_interfaces::msg::URCommand>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ur_custom_interfaces::msg::URCommand>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ur_custom_interfaces::msg::URCommand>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // UR_CUSTOM_INTERFACES__MSG__DETAIL__UR_COMMAND__TRAITS_HPP_
