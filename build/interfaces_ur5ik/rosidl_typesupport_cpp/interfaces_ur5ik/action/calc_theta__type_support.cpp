// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from interfaces_ur5ik:action/CalcTheta.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "interfaces_ur5ik/action/detail/calc_theta__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace interfaces_ur5ik
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _CalcTheta_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _CalcTheta_Goal_type_support_ids_t;

static const _CalcTheta_Goal_type_support_ids_t _CalcTheta_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _CalcTheta_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _CalcTheta_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _CalcTheta_Goal_type_support_symbol_names_t _CalcTheta_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, interfaces_ur5ik, action, CalcTheta_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, interfaces_ur5ik, action, CalcTheta_Goal)),
  }
};

typedef struct _CalcTheta_Goal_type_support_data_t
{
  void * data[2];
} _CalcTheta_Goal_type_support_data_t;

static _CalcTheta_Goal_type_support_data_t _CalcTheta_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _CalcTheta_Goal_message_typesupport_map = {
  2,
  "interfaces_ur5ik",
  &_CalcTheta_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_CalcTheta_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_CalcTheta_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t CalcTheta_Goal_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_CalcTheta_Goal_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace interfaces_ur5ik

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<interfaces_ur5ik::action::CalcTheta_Goal>()
{
  return &::interfaces_ur5ik::action::rosidl_typesupport_cpp::CalcTheta_Goal_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, interfaces_ur5ik, action, CalcTheta_Goal)() {
  return get_message_type_support_handle<interfaces_ur5ik::action::CalcTheta_Goal>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "interfaces_ur5ik/action/detail/calc_theta__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace interfaces_ur5ik
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _CalcTheta_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _CalcTheta_Result_type_support_ids_t;

static const _CalcTheta_Result_type_support_ids_t _CalcTheta_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _CalcTheta_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _CalcTheta_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _CalcTheta_Result_type_support_symbol_names_t _CalcTheta_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, interfaces_ur5ik, action, CalcTheta_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, interfaces_ur5ik, action, CalcTheta_Result)),
  }
};

typedef struct _CalcTheta_Result_type_support_data_t
{
  void * data[2];
} _CalcTheta_Result_type_support_data_t;

static _CalcTheta_Result_type_support_data_t _CalcTheta_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _CalcTheta_Result_message_typesupport_map = {
  2,
  "interfaces_ur5ik",
  &_CalcTheta_Result_message_typesupport_ids.typesupport_identifier[0],
  &_CalcTheta_Result_message_typesupport_symbol_names.symbol_name[0],
  &_CalcTheta_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t CalcTheta_Result_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_CalcTheta_Result_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace interfaces_ur5ik

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<interfaces_ur5ik::action::CalcTheta_Result>()
{
  return &::interfaces_ur5ik::action::rosidl_typesupport_cpp::CalcTheta_Result_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, interfaces_ur5ik, action, CalcTheta_Result)() {
  return get_message_type_support_handle<interfaces_ur5ik::action::CalcTheta_Result>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "interfaces_ur5ik/action/detail/calc_theta__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace interfaces_ur5ik
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _CalcTheta_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _CalcTheta_Feedback_type_support_ids_t;

static const _CalcTheta_Feedback_type_support_ids_t _CalcTheta_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _CalcTheta_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _CalcTheta_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _CalcTheta_Feedback_type_support_symbol_names_t _CalcTheta_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, interfaces_ur5ik, action, CalcTheta_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, interfaces_ur5ik, action, CalcTheta_Feedback)),
  }
};

typedef struct _CalcTheta_Feedback_type_support_data_t
{
  void * data[2];
} _CalcTheta_Feedback_type_support_data_t;

static _CalcTheta_Feedback_type_support_data_t _CalcTheta_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _CalcTheta_Feedback_message_typesupport_map = {
  2,
  "interfaces_ur5ik",
  &_CalcTheta_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_CalcTheta_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_CalcTheta_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t CalcTheta_Feedback_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_CalcTheta_Feedback_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace interfaces_ur5ik

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<interfaces_ur5ik::action::CalcTheta_Feedback>()
{
  return &::interfaces_ur5ik::action::rosidl_typesupport_cpp::CalcTheta_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, interfaces_ur5ik, action, CalcTheta_Feedback)() {
  return get_message_type_support_handle<interfaces_ur5ik::action::CalcTheta_Feedback>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "interfaces_ur5ik/action/detail/calc_theta__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace interfaces_ur5ik
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _CalcTheta_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _CalcTheta_SendGoal_Request_type_support_ids_t;

static const _CalcTheta_SendGoal_Request_type_support_ids_t _CalcTheta_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _CalcTheta_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _CalcTheta_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _CalcTheta_SendGoal_Request_type_support_symbol_names_t _CalcTheta_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, interfaces_ur5ik, action, CalcTheta_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, interfaces_ur5ik, action, CalcTheta_SendGoal_Request)),
  }
};

typedef struct _CalcTheta_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _CalcTheta_SendGoal_Request_type_support_data_t;

static _CalcTheta_SendGoal_Request_type_support_data_t _CalcTheta_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _CalcTheta_SendGoal_Request_message_typesupport_map = {
  2,
  "interfaces_ur5ik",
  &_CalcTheta_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_CalcTheta_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_CalcTheta_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t CalcTheta_SendGoal_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_CalcTheta_SendGoal_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace interfaces_ur5ik

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<interfaces_ur5ik::action::CalcTheta_SendGoal_Request>()
{
  return &::interfaces_ur5ik::action::rosidl_typesupport_cpp::CalcTheta_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, interfaces_ur5ik, action, CalcTheta_SendGoal_Request)() {
  return get_message_type_support_handle<interfaces_ur5ik::action::CalcTheta_SendGoal_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "interfaces_ur5ik/action/detail/calc_theta__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace interfaces_ur5ik
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _CalcTheta_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _CalcTheta_SendGoal_Response_type_support_ids_t;

static const _CalcTheta_SendGoal_Response_type_support_ids_t _CalcTheta_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _CalcTheta_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _CalcTheta_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _CalcTheta_SendGoal_Response_type_support_symbol_names_t _CalcTheta_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, interfaces_ur5ik, action, CalcTheta_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, interfaces_ur5ik, action, CalcTheta_SendGoal_Response)),
  }
};

typedef struct _CalcTheta_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _CalcTheta_SendGoal_Response_type_support_data_t;

static _CalcTheta_SendGoal_Response_type_support_data_t _CalcTheta_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _CalcTheta_SendGoal_Response_message_typesupport_map = {
  2,
  "interfaces_ur5ik",
  &_CalcTheta_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_CalcTheta_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_CalcTheta_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t CalcTheta_SendGoal_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_CalcTheta_SendGoal_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace interfaces_ur5ik

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<interfaces_ur5ik::action::CalcTheta_SendGoal_Response>()
{
  return &::interfaces_ur5ik::action::rosidl_typesupport_cpp::CalcTheta_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, interfaces_ur5ik, action, CalcTheta_SendGoal_Response)() {
  return get_message_type_support_handle<interfaces_ur5ik::action::CalcTheta_SendGoal_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "interfaces_ur5ik/action/detail/calc_theta__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace interfaces_ur5ik
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _CalcTheta_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _CalcTheta_SendGoal_type_support_ids_t;

static const _CalcTheta_SendGoal_type_support_ids_t _CalcTheta_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _CalcTheta_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _CalcTheta_SendGoal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _CalcTheta_SendGoal_type_support_symbol_names_t _CalcTheta_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, interfaces_ur5ik, action, CalcTheta_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, interfaces_ur5ik, action, CalcTheta_SendGoal)),
  }
};

typedef struct _CalcTheta_SendGoal_type_support_data_t
{
  void * data[2];
} _CalcTheta_SendGoal_type_support_data_t;

static _CalcTheta_SendGoal_type_support_data_t _CalcTheta_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _CalcTheta_SendGoal_service_typesupport_map = {
  2,
  "interfaces_ur5ik",
  &_CalcTheta_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_CalcTheta_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_CalcTheta_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t CalcTheta_SendGoal_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_CalcTheta_SendGoal_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace interfaces_ur5ik

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<interfaces_ur5ik::action::CalcTheta_SendGoal>()
{
  return &::interfaces_ur5ik::action::rosidl_typesupport_cpp::CalcTheta_SendGoal_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "interfaces_ur5ik/action/detail/calc_theta__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace interfaces_ur5ik
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _CalcTheta_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _CalcTheta_GetResult_Request_type_support_ids_t;

static const _CalcTheta_GetResult_Request_type_support_ids_t _CalcTheta_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _CalcTheta_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _CalcTheta_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _CalcTheta_GetResult_Request_type_support_symbol_names_t _CalcTheta_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, interfaces_ur5ik, action, CalcTheta_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, interfaces_ur5ik, action, CalcTheta_GetResult_Request)),
  }
};

typedef struct _CalcTheta_GetResult_Request_type_support_data_t
{
  void * data[2];
} _CalcTheta_GetResult_Request_type_support_data_t;

static _CalcTheta_GetResult_Request_type_support_data_t _CalcTheta_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _CalcTheta_GetResult_Request_message_typesupport_map = {
  2,
  "interfaces_ur5ik",
  &_CalcTheta_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_CalcTheta_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_CalcTheta_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t CalcTheta_GetResult_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_CalcTheta_GetResult_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace interfaces_ur5ik

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<interfaces_ur5ik::action::CalcTheta_GetResult_Request>()
{
  return &::interfaces_ur5ik::action::rosidl_typesupport_cpp::CalcTheta_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, interfaces_ur5ik, action, CalcTheta_GetResult_Request)() {
  return get_message_type_support_handle<interfaces_ur5ik::action::CalcTheta_GetResult_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "interfaces_ur5ik/action/detail/calc_theta__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace interfaces_ur5ik
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _CalcTheta_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _CalcTheta_GetResult_Response_type_support_ids_t;

static const _CalcTheta_GetResult_Response_type_support_ids_t _CalcTheta_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _CalcTheta_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _CalcTheta_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _CalcTheta_GetResult_Response_type_support_symbol_names_t _CalcTheta_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, interfaces_ur5ik, action, CalcTheta_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, interfaces_ur5ik, action, CalcTheta_GetResult_Response)),
  }
};

typedef struct _CalcTheta_GetResult_Response_type_support_data_t
{
  void * data[2];
} _CalcTheta_GetResult_Response_type_support_data_t;

static _CalcTheta_GetResult_Response_type_support_data_t _CalcTheta_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _CalcTheta_GetResult_Response_message_typesupport_map = {
  2,
  "interfaces_ur5ik",
  &_CalcTheta_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_CalcTheta_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_CalcTheta_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t CalcTheta_GetResult_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_CalcTheta_GetResult_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace interfaces_ur5ik

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<interfaces_ur5ik::action::CalcTheta_GetResult_Response>()
{
  return &::interfaces_ur5ik::action::rosidl_typesupport_cpp::CalcTheta_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, interfaces_ur5ik, action, CalcTheta_GetResult_Response)() {
  return get_message_type_support_handle<interfaces_ur5ik::action::CalcTheta_GetResult_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "interfaces_ur5ik/action/detail/calc_theta__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace interfaces_ur5ik
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _CalcTheta_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _CalcTheta_GetResult_type_support_ids_t;

static const _CalcTheta_GetResult_type_support_ids_t _CalcTheta_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _CalcTheta_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _CalcTheta_GetResult_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _CalcTheta_GetResult_type_support_symbol_names_t _CalcTheta_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, interfaces_ur5ik, action, CalcTheta_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, interfaces_ur5ik, action, CalcTheta_GetResult)),
  }
};

typedef struct _CalcTheta_GetResult_type_support_data_t
{
  void * data[2];
} _CalcTheta_GetResult_type_support_data_t;

static _CalcTheta_GetResult_type_support_data_t _CalcTheta_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _CalcTheta_GetResult_service_typesupport_map = {
  2,
  "interfaces_ur5ik",
  &_CalcTheta_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_CalcTheta_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_CalcTheta_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t CalcTheta_GetResult_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_CalcTheta_GetResult_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace interfaces_ur5ik

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<interfaces_ur5ik::action::CalcTheta_GetResult>()
{
  return &::interfaces_ur5ik::action::rosidl_typesupport_cpp::CalcTheta_GetResult_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "interfaces_ur5ik/action/detail/calc_theta__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace interfaces_ur5ik
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _CalcTheta_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _CalcTheta_FeedbackMessage_type_support_ids_t;

static const _CalcTheta_FeedbackMessage_type_support_ids_t _CalcTheta_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _CalcTheta_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _CalcTheta_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _CalcTheta_FeedbackMessage_type_support_symbol_names_t _CalcTheta_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, interfaces_ur5ik, action, CalcTheta_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, interfaces_ur5ik, action, CalcTheta_FeedbackMessage)),
  }
};

typedef struct _CalcTheta_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _CalcTheta_FeedbackMessage_type_support_data_t;

static _CalcTheta_FeedbackMessage_type_support_data_t _CalcTheta_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _CalcTheta_FeedbackMessage_message_typesupport_map = {
  2,
  "interfaces_ur5ik",
  &_CalcTheta_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_CalcTheta_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_CalcTheta_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t CalcTheta_FeedbackMessage_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_CalcTheta_FeedbackMessage_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace interfaces_ur5ik

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<interfaces_ur5ik::action::CalcTheta_FeedbackMessage>()
{
  return &::interfaces_ur5ik::action::rosidl_typesupport_cpp::CalcTheta_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, interfaces_ur5ik, action, CalcTheta_FeedbackMessage)() {
  return get_message_type_support_handle<interfaces_ur5ik::action::CalcTheta_FeedbackMessage>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

#include "action_msgs/msg/goal_status_array.hpp"
#include "action_msgs/srv/cancel_goal.hpp"
// already included above
// #include "interfaces_ur5ik/action/detail/calc_theta__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_typesupport_cpp/action_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"

namespace interfaces_ur5ik
{

namespace action
{

namespace rosidl_typesupport_cpp
{

static rosidl_action_type_support_t CalcTheta_action_type_support_handle = {
  NULL, NULL, NULL, NULL, NULL};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace interfaces_ur5ik

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
get_action_type_support_handle<interfaces_ur5ik::action::CalcTheta>()
{
  using ::interfaces_ur5ik::action::rosidl_typesupport_cpp::CalcTheta_action_type_support_handle;
  // Thread-safe by always writing the same values to the static struct
  CalcTheta_action_type_support_handle.goal_service_type_support = get_service_type_support_handle<::interfaces_ur5ik::action::CalcTheta::Impl::SendGoalService>();
  CalcTheta_action_type_support_handle.result_service_type_support = get_service_type_support_handle<::interfaces_ur5ik::action::CalcTheta::Impl::GetResultService>();
  CalcTheta_action_type_support_handle.cancel_service_type_support = get_service_type_support_handle<::interfaces_ur5ik::action::CalcTheta::Impl::CancelGoalService>();
  CalcTheta_action_type_support_handle.feedback_message_type_support = get_message_type_support_handle<::interfaces_ur5ik::action::CalcTheta::Impl::FeedbackMessage>();
  CalcTheta_action_type_support_handle.status_message_type_support = get_message_type_support_handle<::interfaces_ur5ik::action::CalcTheta::Impl::GoalStatusMessage>();
  return &CalcTheta_action_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp
