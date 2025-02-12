// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ur_custom_interfaces:msg/URCommand.idl
// generated code does not contain a copyright notice

#ifndef UR_CUSTOM_INTERFACES__MSG__DETAIL__UR_COMMAND__STRUCT_HPP_
#define UR_CUSTOM_INTERFACES__MSG__DETAIL__UR_COMMAND__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ur_custom_interfaces__msg__URCommand __attribute__((deprecated))
#else
# define DEPRECATED__ur_custom_interfaces__msg__URCommand __declspec(deprecated)
#endif

namespace ur_custom_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct URCommand_
{
  using Type = URCommand_<ContainerAllocator>;

  explicit URCommand_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = "";
      this->y = "";
      this->depth = "";
    }
  }

  explicit URCommand_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : x(_alloc),
    y(_alloc),
    depth(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = "";
      this->y = "";
      this->depth = "";
    }
  }

  // field types and members
  using _x_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _x_type x;
  using _y_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _y_type y;
  using _depth_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _depth_type depth;

  // setters for named parameter idiom
  Type & set__x(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__depth(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->depth = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ur_custom_interfaces::msg::URCommand_<ContainerAllocator> *;
  using ConstRawPtr =
    const ur_custom_interfaces::msg::URCommand_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ur_custom_interfaces::msg::URCommand_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ur_custom_interfaces::msg::URCommand_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ur_custom_interfaces::msg::URCommand_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ur_custom_interfaces::msg::URCommand_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ur_custom_interfaces::msg::URCommand_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ur_custom_interfaces::msg::URCommand_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ur_custom_interfaces::msg::URCommand_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ur_custom_interfaces::msg::URCommand_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ur_custom_interfaces__msg__URCommand
    std::shared_ptr<ur_custom_interfaces::msg::URCommand_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ur_custom_interfaces__msg__URCommand
    std::shared_ptr<ur_custom_interfaces::msg::URCommand_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const URCommand_ & other) const
  {
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->depth != other.depth) {
      return false;
    }
    return true;
  }
  bool operator!=(const URCommand_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct URCommand_

// alias to use template instance with default allocator
using URCommand =
  ur_custom_interfaces::msg::URCommand_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ur_custom_interfaces

#endif  // UR_CUSTOM_INTERFACES__MSG__DETAIL__UR_COMMAND__STRUCT_HPP_
