// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from interfaces_ur5ik:msg/Target.idl
// generated code does not contain a copyright notice
#include "interfaces_ur5ik/msg/detail/target__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
interfaces_ur5ik__msg__Target__init(interfaces_ur5ik__msg__Target * msg)
{
  if (!msg) {
    return false;
  }
  // target
  return true;
}

void
interfaces_ur5ik__msg__Target__fini(interfaces_ur5ik__msg__Target * msg)
{
  if (!msg) {
    return;
  }
  // target
}

bool
interfaces_ur5ik__msg__Target__are_equal(const interfaces_ur5ik__msg__Target * lhs, const interfaces_ur5ik__msg__Target * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // target
  if (lhs->target != rhs->target) {
    return false;
  }
  return true;
}

bool
interfaces_ur5ik__msg__Target__copy(
  const interfaces_ur5ik__msg__Target * input,
  interfaces_ur5ik__msg__Target * output)
{
  if (!input || !output) {
    return false;
  }
  // target
  output->target = input->target;
  return true;
}

interfaces_ur5ik__msg__Target *
interfaces_ur5ik__msg__Target__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces_ur5ik__msg__Target * msg = (interfaces_ur5ik__msg__Target *)allocator.allocate(sizeof(interfaces_ur5ik__msg__Target), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(interfaces_ur5ik__msg__Target));
  bool success = interfaces_ur5ik__msg__Target__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
interfaces_ur5ik__msg__Target__destroy(interfaces_ur5ik__msg__Target * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    interfaces_ur5ik__msg__Target__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
interfaces_ur5ik__msg__Target__Sequence__init(interfaces_ur5ik__msg__Target__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces_ur5ik__msg__Target * data = NULL;

  if (size) {
    data = (interfaces_ur5ik__msg__Target *)allocator.zero_allocate(size, sizeof(interfaces_ur5ik__msg__Target), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = interfaces_ur5ik__msg__Target__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        interfaces_ur5ik__msg__Target__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
interfaces_ur5ik__msg__Target__Sequence__fini(interfaces_ur5ik__msg__Target__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      interfaces_ur5ik__msg__Target__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

interfaces_ur5ik__msg__Target__Sequence *
interfaces_ur5ik__msg__Target__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces_ur5ik__msg__Target__Sequence * array = (interfaces_ur5ik__msg__Target__Sequence *)allocator.allocate(sizeof(interfaces_ur5ik__msg__Target__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = interfaces_ur5ik__msg__Target__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
interfaces_ur5ik__msg__Target__Sequence__destroy(interfaces_ur5ik__msg__Target__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    interfaces_ur5ik__msg__Target__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
interfaces_ur5ik__msg__Target__Sequence__are_equal(const interfaces_ur5ik__msg__Target__Sequence * lhs, const interfaces_ur5ik__msg__Target__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!interfaces_ur5ik__msg__Target__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
interfaces_ur5ik__msg__Target__Sequence__copy(
  const interfaces_ur5ik__msg__Target__Sequence * input,
  interfaces_ur5ik__msg__Target__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(interfaces_ur5ik__msg__Target);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    interfaces_ur5ik__msg__Target * data =
      (interfaces_ur5ik__msg__Target *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!interfaces_ur5ik__msg__Target__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          interfaces_ur5ik__msg__Target__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!interfaces_ur5ik__msg__Target__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
