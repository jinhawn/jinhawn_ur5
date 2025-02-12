// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from ur_custom_interfaces:msg/URCommand.idl
// generated code does not contain a copyright notice
#include "ur_custom_interfaces/msg/detail/ur_command__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "ur_custom_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "ur_custom_interfaces/msg/detail/ur_command__struct.h"
#include "ur_custom_interfaces/msg/detail/ur_command__functions.h"
#include "fastcdr/Cdr.h"

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

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // depth, x, y
#include "rosidl_runtime_c/string_functions.h"  // depth, x, y

// forward declare type support functions


using _URCommand__ros_msg_type = ur_custom_interfaces__msg__URCommand;

static bool _URCommand__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _URCommand__ros_msg_type * ros_message = static_cast<const _URCommand__ros_msg_type *>(untyped_ros_message);
  // Field name: x
  {
    const rosidl_runtime_c__String * str = &ros_message->x;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: y
  {
    const rosidl_runtime_c__String * str = &ros_message->y;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: depth
  {
    const rosidl_runtime_c__String * str = &ros_message->depth;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _URCommand__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _URCommand__ros_msg_type * ros_message = static_cast<_URCommand__ros_msg_type *>(untyped_ros_message);
  // Field name: x
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->x.data) {
      rosidl_runtime_c__String__init(&ros_message->x);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->x,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'x'\n");
      return false;
    }
  }

  // Field name: y
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->y.data) {
      rosidl_runtime_c__String__init(&ros_message->y);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->y,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'y'\n");
      return false;
    }
  }

  // Field name: depth
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->depth.data) {
      rosidl_runtime_c__String__init(&ros_message->depth);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->depth,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'depth'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ur_custom_interfaces
size_t get_serialized_size_ur_custom_interfaces__msg__URCommand(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _URCommand__ros_msg_type * ros_message = static_cast<const _URCommand__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name x
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->x.size + 1);
  // field.name y
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->y.size + 1);
  // field.name depth
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->depth.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _URCommand__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_ur_custom_interfaces__msg__URCommand(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ur_custom_interfaces
size_t max_serialized_size_ur_custom_interfaces__msg__URCommand(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: x
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: y
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: depth
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = ur_custom_interfaces__msg__URCommand;
    is_plain =
      (
      offsetof(DataType, depth) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _URCommand__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ur_custom_interfaces__msg__URCommand(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_URCommand = {
  "ur_custom_interfaces::msg",
  "URCommand",
  _URCommand__cdr_serialize,
  _URCommand__cdr_deserialize,
  _URCommand__get_serialized_size,
  _URCommand__max_serialized_size
};

static rosidl_message_type_support_t _URCommand__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_URCommand,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ur_custom_interfaces, msg, URCommand)() {
  return &_URCommand__type_support;
}

#if defined(__cplusplus)
}
#endif
