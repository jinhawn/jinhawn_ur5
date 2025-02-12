// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from interfaces_ur5ik:srv/SixTheta.idl
// generated code does not contain a copyright notice
#include "interfaces_ur5ik/srv/detail/six_theta__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
interfaces_ur5ik__srv__SixTheta_Request__init(interfaces_ur5ik__srv__SixTheta_Request * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
interfaces_ur5ik__srv__SixTheta_Request__fini(interfaces_ur5ik__srv__SixTheta_Request * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
interfaces_ur5ik__srv__SixTheta_Request__are_equal(const interfaces_ur5ik__srv__SixTheta_Request * lhs, const interfaces_ur5ik__srv__SixTheta_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // structure_needs_at_least_one_member
  if (lhs->structure_needs_at_least_one_member != rhs->structure_needs_at_least_one_member) {
    return false;
  }
  return true;
}

bool
interfaces_ur5ik__srv__SixTheta_Request__copy(
  const interfaces_ur5ik__srv__SixTheta_Request * input,
  interfaces_ur5ik__srv__SixTheta_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

interfaces_ur5ik__srv__SixTheta_Request *
interfaces_ur5ik__srv__SixTheta_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces_ur5ik__srv__SixTheta_Request * msg = (interfaces_ur5ik__srv__SixTheta_Request *)allocator.allocate(sizeof(interfaces_ur5ik__srv__SixTheta_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(interfaces_ur5ik__srv__SixTheta_Request));
  bool success = interfaces_ur5ik__srv__SixTheta_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
interfaces_ur5ik__srv__SixTheta_Request__destroy(interfaces_ur5ik__srv__SixTheta_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    interfaces_ur5ik__srv__SixTheta_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
interfaces_ur5ik__srv__SixTheta_Request__Sequence__init(interfaces_ur5ik__srv__SixTheta_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces_ur5ik__srv__SixTheta_Request * data = NULL;

  if (size) {
    data = (interfaces_ur5ik__srv__SixTheta_Request *)allocator.zero_allocate(size, sizeof(interfaces_ur5ik__srv__SixTheta_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = interfaces_ur5ik__srv__SixTheta_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        interfaces_ur5ik__srv__SixTheta_Request__fini(&data[i - 1]);
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
interfaces_ur5ik__srv__SixTheta_Request__Sequence__fini(interfaces_ur5ik__srv__SixTheta_Request__Sequence * array)
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
      interfaces_ur5ik__srv__SixTheta_Request__fini(&array->data[i]);
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

interfaces_ur5ik__srv__SixTheta_Request__Sequence *
interfaces_ur5ik__srv__SixTheta_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces_ur5ik__srv__SixTheta_Request__Sequence * array = (interfaces_ur5ik__srv__SixTheta_Request__Sequence *)allocator.allocate(sizeof(interfaces_ur5ik__srv__SixTheta_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = interfaces_ur5ik__srv__SixTheta_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
interfaces_ur5ik__srv__SixTheta_Request__Sequence__destroy(interfaces_ur5ik__srv__SixTheta_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    interfaces_ur5ik__srv__SixTheta_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
interfaces_ur5ik__srv__SixTheta_Request__Sequence__are_equal(const interfaces_ur5ik__srv__SixTheta_Request__Sequence * lhs, const interfaces_ur5ik__srv__SixTheta_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!interfaces_ur5ik__srv__SixTheta_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
interfaces_ur5ik__srv__SixTheta_Request__Sequence__copy(
  const interfaces_ur5ik__srv__SixTheta_Request__Sequence * input,
  interfaces_ur5ik__srv__SixTheta_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(interfaces_ur5ik__srv__SixTheta_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    interfaces_ur5ik__srv__SixTheta_Request * data =
      (interfaces_ur5ik__srv__SixTheta_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!interfaces_ur5ik__srv__SixTheta_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          interfaces_ur5ik__srv__SixTheta_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!interfaces_ur5ik__srv__SixTheta_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
interfaces_ur5ik__srv__SixTheta_Response__init(interfaces_ur5ik__srv__SixTheta_Response * msg)
{
  if (!msg) {
    return false;
  }
  // srv_theta
  // success
  return true;
}

void
interfaces_ur5ik__srv__SixTheta_Response__fini(interfaces_ur5ik__srv__SixTheta_Response * msg)
{
  if (!msg) {
    return;
  }
  // srv_theta
  // success
}

bool
interfaces_ur5ik__srv__SixTheta_Response__are_equal(const interfaces_ur5ik__srv__SixTheta_Response * lhs, const interfaces_ur5ik__srv__SixTheta_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // srv_theta
  for (size_t i = 0; i < 6; ++i) {
    if (lhs->srv_theta[i] != rhs->srv_theta[i]) {
      return false;
    }
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  return true;
}

bool
interfaces_ur5ik__srv__SixTheta_Response__copy(
  const interfaces_ur5ik__srv__SixTheta_Response * input,
  interfaces_ur5ik__srv__SixTheta_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // srv_theta
  for (size_t i = 0; i < 6; ++i) {
    output->srv_theta[i] = input->srv_theta[i];
  }
  // success
  output->success = input->success;
  return true;
}

interfaces_ur5ik__srv__SixTheta_Response *
interfaces_ur5ik__srv__SixTheta_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces_ur5ik__srv__SixTheta_Response * msg = (interfaces_ur5ik__srv__SixTheta_Response *)allocator.allocate(sizeof(interfaces_ur5ik__srv__SixTheta_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(interfaces_ur5ik__srv__SixTheta_Response));
  bool success = interfaces_ur5ik__srv__SixTheta_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
interfaces_ur5ik__srv__SixTheta_Response__destroy(interfaces_ur5ik__srv__SixTheta_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    interfaces_ur5ik__srv__SixTheta_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
interfaces_ur5ik__srv__SixTheta_Response__Sequence__init(interfaces_ur5ik__srv__SixTheta_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces_ur5ik__srv__SixTheta_Response * data = NULL;

  if (size) {
    data = (interfaces_ur5ik__srv__SixTheta_Response *)allocator.zero_allocate(size, sizeof(interfaces_ur5ik__srv__SixTheta_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = interfaces_ur5ik__srv__SixTheta_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        interfaces_ur5ik__srv__SixTheta_Response__fini(&data[i - 1]);
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
interfaces_ur5ik__srv__SixTheta_Response__Sequence__fini(interfaces_ur5ik__srv__SixTheta_Response__Sequence * array)
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
      interfaces_ur5ik__srv__SixTheta_Response__fini(&array->data[i]);
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

interfaces_ur5ik__srv__SixTheta_Response__Sequence *
interfaces_ur5ik__srv__SixTheta_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces_ur5ik__srv__SixTheta_Response__Sequence * array = (interfaces_ur5ik__srv__SixTheta_Response__Sequence *)allocator.allocate(sizeof(interfaces_ur5ik__srv__SixTheta_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = interfaces_ur5ik__srv__SixTheta_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
interfaces_ur5ik__srv__SixTheta_Response__Sequence__destroy(interfaces_ur5ik__srv__SixTheta_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    interfaces_ur5ik__srv__SixTheta_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
interfaces_ur5ik__srv__SixTheta_Response__Sequence__are_equal(const interfaces_ur5ik__srv__SixTheta_Response__Sequence * lhs, const interfaces_ur5ik__srv__SixTheta_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!interfaces_ur5ik__srv__SixTheta_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
interfaces_ur5ik__srv__SixTheta_Response__Sequence__copy(
  const interfaces_ur5ik__srv__SixTheta_Response__Sequence * input,
  interfaces_ur5ik__srv__SixTheta_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(interfaces_ur5ik__srv__SixTheta_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    interfaces_ur5ik__srv__SixTheta_Response * data =
      (interfaces_ur5ik__srv__SixTheta_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!interfaces_ur5ik__srv__SixTheta_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          interfaces_ur5ik__srv__SixTheta_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!interfaces_ur5ik__srv__SixTheta_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
