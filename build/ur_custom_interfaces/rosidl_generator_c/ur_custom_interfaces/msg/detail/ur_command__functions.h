// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from ur_custom_interfaces:msg/URCommand.idl
// generated code does not contain a copyright notice

#ifndef UR_CUSTOM_INTERFACES__MSG__DETAIL__UR_COMMAND__FUNCTIONS_H_
#define UR_CUSTOM_INTERFACES__MSG__DETAIL__UR_COMMAND__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "ur_custom_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "ur_custom_interfaces/msg/detail/ur_command__struct.h"

/// Initialize msg/URCommand message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * ur_custom_interfaces__msg__URCommand
 * )) before or use
 * ur_custom_interfaces__msg__URCommand__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_ur_custom_interfaces
bool
ur_custom_interfaces__msg__URCommand__init(ur_custom_interfaces__msg__URCommand * msg);

/// Finalize msg/URCommand message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ur_custom_interfaces
void
ur_custom_interfaces__msg__URCommand__fini(ur_custom_interfaces__msg__URCommand * msg);

/// Create msg/URCommand message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * ur_custom_interfaces__msg__URCommand__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ur_custom_interfaces
ur_custom_interfaces__msg__URCommand *
ur_custom_interfaces__msg__URCommand__create();

/// Destroy msg/URCommand message.
/**
 * It calls
 * ur_custom_interfaces__msg__URCommand__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ur_custom_interfaces
void
ur_custom_interfaces__msg__URCommand__destroy(ur_custom_interfaces__msg__URCommand * msg);

/// Check for msg/URCommand message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ur_custom_interfaces
bool
ur_custom_interfaces__msg__URCommand__are_equal(const ur_custom_interfaces__msg__URCommand * lhs, const ur_custom_interfaces__msg__URCommand * rhs);

/// Copy a msg/URCommand message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_ur_custom_interfaces
bool
ur_custom_interfaces__msg__URCommand__copy(
  const ur_custom_interfaces__msg__URCommand * input,
  ur_custom_interfaces__msg__URCommand * output);

/// Initialize array of msg/URCommand messages.
/**
 * It allocates the memory for the number of elements and calls
 * ur_custom_interfaces__msg__URCommand__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_ur_custom_interfaces
bool
ur_custom_interfaces__msg__URCommand__Sequence__init(ur_custom_interfaces__msg__URCommand__Sequence * array, size_t size);

/// Finalize array of msg/URCommand messages.
/**
 * It calls
 * ur_custom_interfaces__msg__URCommand__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ur_custom_interfaces
void
ur_custom_interfaces__msg__URCommand__Sequence__fini(ur_custom_interfaces__msg__URCommand__Sequence * array);

/// Create array of msg/URCommand messages.
/**
 * It allocates the memory for the array and calls
 * ur_custom_interfaces__msg__URCommand__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ur_custom_interfaces
ur_custom_interfaces__msg__URCommand__Sequence *
ur_custom_interfaces__msg__URCommand__Sequence__create(size_t size);

/// Destroy array of msg/URCommand messages.
/**
 * It calls
 * ur_custom_interfaces__msg__URCommand__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ur_custom_interfaces
void
ur_custom_interfaces__msg__URCommand__Sequence__destroy(ur_custom_interfaces__msg__URCommand__Sequence * array);

/// Check for msg/URCommand message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ur_custom_interfaces
bool
ur_custom_interfaces__msg__URCommand__Sequence__are_equal(const ur_custom_interfaces__msg__URCommand__Sequence * lhs, const ur_custom_interfaces__msg__URCommand__Sequence * rhs);

/// Copy an array of msg/URCommand messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_ur_custom_interfaces
bool
ur_custom_interfaces__msg__URCommand__Sequence__copy(
  const ur_custom_interfaces__msg__URCommand__Sequence * input,
  ur_custom_interfaces__msg__URCommand__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // UR_CUSTOM_INTERFACES__MSG__DETAIL__UR_COMMAND__FUNCTIONS_H_
