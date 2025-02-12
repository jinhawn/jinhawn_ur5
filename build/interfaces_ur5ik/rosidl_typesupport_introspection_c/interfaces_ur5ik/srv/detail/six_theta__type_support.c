// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from interfaces_ur5ik:srv/SixTheta.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "interfaces_ur5ik/srv/detail/six_theta__rosidl_typesupport_introspection_c.h"
#include "interfaces_ur5ik/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "interfaces_ur5ik/srv/detail/six_theta__functions.h"
#include "interfaces_ur5ik/srv/detail/six_theta__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void interfaces_ur5ik__srv__SixTheta_Request__rosidl_typesupport_introspection_c__SixTheta_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  interfaces_ur5ik__srv__SixTheta_Request__init(message_memory);
}

void interfaces_ur5ik__srv__SixTheta_Request__rosidl_typesupport_introspection_c__SixTheta_Request_fini_function(void * message_memory)
{
  interfaces_ur5ik__srv__SixTheta_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember interfaces_ur5ik__srv__SixTheta_Request__rosidl_typesupport_introspection_c__SixTheta_Request_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces_ur5ik__srv__SixTheta_Request, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers interfaces_ur5ik__srv__SixTheta_Request__rosidl_typesupport_introspection_c__SixTheta_Request_message_members = {
  "interfaces_ur5ik__srv",  // message namespace
  "SixTheta_Request",  // message name
  1,  // number of fields
  sizeof(interfaces_ur5ik__srv__SixTheta_Request),
  interfaces_ur5ik__srv__SixTheta_Request__rosidl_typesupport_introspection_c__SixTheta_Request_message_member_array,  // message members
  interfaces_ur5ik__srv__SixTheta_Request__rosidl_typesupport_introspection_c__SixTheta_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  interfaces_ur5ik__srv__SixTheta_Request__rosidl_typesupport_introspection_c__SixTheta_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t interfaces_ur5ik__srv__SixTheta_Request__rosidl_typesupport_introspection_c__SixTheta_Request_message_type_support_handle = {
  0,
  &interfaces_ur5ik__srv__SixTheta_Request__rosidl_typesupport_introspection_c__SixTheta_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_interfaces_ur5ik
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interfaces_ur5ik, srv, SixTheta_Request)() {
  if (!interfaces_ur5ik__srv__SixTheta_Request__rosidl_typesupport_introspection_c__SixTheta_Request_message_type_support_handle.typesupport_identifier) {
    interfaces_ur5ik__srv__SixTheta_Request__rosidl_typesupport_introspection_c__SixTheta_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &interfaces_ur5ik__srv__SixTheta_Request__rosidl_typesupport_introspection_c__SixTheta_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "interfaces_ur5ik/srv/detail/six_theta__rosidl_typesupport_introspection_c.h"
// already included above
// #include "interfaces_ur5ik/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "interfaces_ur5ik/srv/detail/six_theta__functions.h"
// already included above
// #include "interfaces_ur5ik/srv/detail/six_theta__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void interfaces_ur5ik__srv__SixTheta_Response__rosidl_typesupport_introspection_c__SixTheta_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  interfaces_ur5ik__srv__SixTheta_Response__init(message_memory);
}

void interfaces_ur5ik__srv__SixTheta_Response__rosidl_typesupport_introspection_c__SixTheta_Response_fini_function(void * message_memory)
{
  interfaces_ur5ik__srv__SixTheta_Response__fini(message_memory);
}

size_t interfaces_ur5ik__srv__SixTheta_Response__rosidl_typesupport_introspection_c__size_function__SixTheta_Response__srv_theta(
  const void * untyped_member)
{
  (void)untyped_member;
  return 6;
}

const void * interfaces_ur5ik__srv__SixTheta_Response__rosidl_typesupport_introspection_c__get_const_function__SixTheta_Response__srv_theta(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * interfaces_ur5ik__srv__SixTheta_Response__rosidl_typesupport_introspection_c__get_function__SixTheta_Response__srv_theta(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void interfaces_ur5ik__srv__SixTheta_Response__rosidl_typesupport_introspection_c__fetch_function__SixTheta_Response__srv_theta(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    interfaces_ur5ik__srv__SixTheta_Response__rosidl_typesupport_introspection_c__get_const_function__SixTheta_Response__srv_theta(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void interfaces_ur5ik__srv__SixTheta_Response__rosidl_typesupport_introspection_c__assign_function__SixTheta_Response__srv_theta(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    interfaces_ur5ik__srv__SixTheta_Response__rosidl_typesupport_introspection_c__get_function__SixTheta_Response__srv_theta(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember interfaces_ur5ik__srv__SixTheta_Response__rosidl_typesupport_introspection_c__SixTheta_Response_message_member_array[2] = {
  {
    "srv_theta",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    6,  // array size
    false,  // is upper bound
    offsetof(interfaces_ur5ik__srv__SixTheta_Response, srv_theta),  // bytes offset in struct
    NULL,  // default value
    interfaces_ur5ik__srv__SixTheta_Response__rosidl_typesupport_introspection_c__size_function__SixTheta_Response__srv_theta,  // size() function pointer
    interfaces_ur5ik__srv__SixTheta_Response__rosidl_typesupport_introspection_c__get_const_function__SixTheta_Response__srv_theta,  // get_const(index) function pointer
    interfaces_ur5ik__srv__SixTheta_Response__rosidl_typesupport_introspection_c__get_function__SixTheta_Response__srv_theta,  // get(index) function pointer
    interfaces_ur5ik__srv__SixTheta_Response__rosidl_typesupport_introspection_c__fetch_function__SixTheta_Response__srv_theta,  // fetch(index, &value) function pointer
    interfaces_ur5ik__srv__SixTheta_Response__rosidl_typesupport_introspection_c__assign_function__SixTheta_Response__srv_theta,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces_ur5ik__srv__SixTheta_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers interfaces_ur5ik__srv__SixTheta_Response__rosidl_typesupport_introspection_c__SixTheta_Response_message_members = {
  "interfaces_ur5ik__srv",  // message namespace
  "SixTheta_Response",  // message name
  2,  // number of fields
  sizeof(interfaces_ur5ik__srv__SixTheta_Response),
  interfaces_ur5ik__srv__SixTheta_Response__rosidl_typesupport_introspection_c__SixTheta_Response_message_member_array,  // message members
  interfaces_ur5ik__srv__SixTheta_Response__rosidl_typesupport_introspection_c__SixTheta_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  interfaces_ur5ik__srv__SixTheta_Response__rosidl_typesupport_introspection_c__SixTheta_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t interfaces_ur5ik__srv__SixTheta_Response__rosidl_typesupport_introspection_c__SixTheta_Response_message_type_support_handle = {
  0,
  &interfaces_ur5ik__srv__SixTheta_Response__rosidl_typesupport_introspection_c__SixTheta_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_interfaces_ur5ik
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interfaces_ur5ik, srv, SixTheta_Response)() {
  if (!interfaces_ur5ik__srv__SixTheta_Response__rosidl_typesupport_introspection_c__SixTheta_Response_message_type_support_handle.typesupport_identifier) {
    interfaces_ur5ik__srv__SixTheta_Response__rosidl_typesupport_introspection_c__SixTheta_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &interfaces_ur5ik__srv__SixTheta_Response__rosidl_typesupport_introspection_c__SixTheta_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "interfaces_ur5ik/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "interfaces_ur5ik/srv/detail/six_theta__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers interfaces_ur5ik__srv__detail__six_theta__rosidl_typesupport_introspection_c__SixTheta_service_members = {
  "interfaces_ur5ik__srv",  // service namespace
  "SixTheta",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // interfaces_ur5ik__srv__detail__six_theta__rosidl_typesupport_introspection_c__SixTheta_Request_message_type_support_handle,
  NULL  // response message
  // interfaces_ur5ik__srv__detail__six_theta__rosidl_typesupport_introspection_c__SixTheta_Response_message_type_support_handle
};

static rosidl_service_type_support_t interfaces_ur5ik__srv__detail__six_theta__rosidl_typesupport_introspection_c__SixTheta_service_type_support_handle = {
  0,
  &interfaces_ur5ik__srv__detail__six_theta__rosidl_typesupport_introspection_c__SixTheta_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interfaces_ur5ik, srv, SixTheta_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interfaces_ur5ik, srv, SixTheta_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_interfaces_ur5ik
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interfaces_ur5ik, srv, SixTheta)() {
  if (!interfaces_ur5ik__srv__detail__six_theta__rosidl_typesupport_introspection_c__SixTheta_service_type_support_handle.typesupport_identifier) {
    interfaces_ur5ik__srv__detail__six_theta__rosidl_typesupport_introspection_c__SixTheta_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)interfaces_ur5ik__srv__detail__six_theta__rosidl_typesupport_introspection_c__SixTheta_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interfaces_ur5ik, srv, SixTheta_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interfaces_ur5ik, srv, SixTheta_Response)()->data;
  }

  return &interfaces_ur5ik__srv__detail__six_theta__rosidl_typesupport_introspection_c__SixTheta_service_type_support_handle;
}
