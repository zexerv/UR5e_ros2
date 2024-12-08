// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from control_msgs:srv/QueryTrajectoryState.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "control_msgs/srv/detail/query_trajectory_state__functions.h"
#include "control_msgs/srv/detail/query_trajectory_state__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace control_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _QueryTrajectoryState_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _QueryTrajectoryState_Request_type_support_ids_t;

static const _QueryTrajectoryState_Request_type_support_ids_t _QueryTrajectoryState_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _QueryTrajectoryState_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _QueryTrajectoryState_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _QueryTrajectoryState_Request_type_support_symbol_names_t _QueryTrajectoryState_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, control_msgs, srv, QueryTrajectoryState_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, control_msgs, srv, QueryTrajectoryState_Request)),
  }
};

typedef struct _QueryTrajectoryState_Request_type_support_data_t
{
  void * data[2];
} _QueryTrajectoryState_Request_type_support_data_t;

static _QueryTrajectoryState_Request_type_support_data_t _QueryTrajectoryState_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _QueryTrajectoryState_Request_message_typesupport_map = {
  2,
  "control_msgs",
  &_QueryTrajectoryState_Request_message_typesupport_ids.typesupport_identifier[0],
  &_QueryTrajectoryState_Request_message_typesupport_symbol_names.symbol_name[0],
  &_QueryTrajectoryState_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t QueryTrajectoryState_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_QueryTrajectoryState_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &control_msgs__srv__QueryTrajectoryState_Request__get_type_hash,
  &control_msgs__srv__QueryTrajectoryState_Request__get_type_description,
  &control_msgs__srv__QueryTrajectoryState_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace control_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<control_msgs::srv::QueryTrajectoryState_Request>()
{
  return &::control_msgs::srv::rosidl_typesupport_cpp::QueryTrajectoryState_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, control_msgs, srv, QueryTrajectoryState_Request)() {
  return get_message_type_support_handle<control_msgs::srv::QueryTrajectoryState_Request>();
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
// #include "control_msgs/srv/detail/query_trajectory_state__functions.h"
// already included above
// #include "control_msgs/srv/detail/query_trajectory_state__struct.hpp"
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

namespace control_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _QueryTrajectoryState_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _QueryTrajectoryState_Response_type_support_ids_t;

static const _QueryTrajectoryState_Response_type_support_ids_t _QueryTrajectoryState_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _QueryTrajectoryState_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _QueryTrajectoryState_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _QueryTrajectoryState_Response_type_support_symbol_names_t _QueryTrajectoryState_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, control_msgs, srv, QueryTrajectoryState_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, control_msgs, srv, QueryTrajectoryState_Response)),
  }
};

typedef struct _QueryTrajectoryState_Response_type_support_data_t
{
  void * data[2];
} _QueryTrajectoryState_Response_type_support_data_t;

static _QueryTrajectoryState_Response_type_support_data_t _QueryTrajectoryState_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _QueryTrajectoryState_Response_message_typesupport_map = {
  2,
  "control_msgs",
  &_QueryTrajectoryState_Response_message_typesupport_ids.typesupport_identifier[0],
  &_QueryTrajectoryState_Response_message_typesupport_symbol_names.symbol_name[0],
  &_QueryTrajectoryState_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t QueryTrajectoryState_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_QueryTrajectoryState_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &control_msgs__srv__QueryTrajectoryState_Response__get_type_hash,
  &control_msgs__srv__QueryTrajectoryState_Response__get_type_description,
  &control_msgs__srv__QueryTrajectoryState_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace control_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<control_msgs::srv::QueryTrajectoryState_Response>()
{
  return &::control_msgs::srv::rosidl_typesupport_cpp::QueryTrajectoryState_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, control_msgs, srv, QueryTrajectoryState_Response)() {
  return get_message_type_support_handle<control_msgs::srv::QueryTrajectoryState_Response>();
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
// #include "control_msgs/srv/detail/query_trajectory_state__functions.h"
// already included above
// #include "control_msgs/srv/detail/query_trajectory_state__struct.hpp"
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

namespace control_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _QueryTrajectoryState_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _QueryTrajectoryState_Event_type_support_ids_t;

static const _QueryTrajectoryState_Event_type_support_ids_t _QueryTrajectoryState_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _QueryTrajectoryState_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _QueryTrajectoryState_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _QueryTrajectoryState_Event_type_support_symbol_names_t _QueryTrajectoryState_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, control_msgs, srv, QueryTrajectoryState_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, control_msgs, srv, QueryTrajectoryState_Event)),
  }
};

typedef struct _QueryTrajectoryState_Event_type_support_data_t
{
  void * data[2];
} _QueryTrajectoryState_Event_type_support_data_t;

static _QueryTrajectoryState_Event_type_support_data_t _QueryTrajectoryState_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _QueryTrajectoryState_Event_message_typesupport_map = {
  2,
  "control_msgs",
  &_QueryTrajectoryState_Event_message_typesupport_ids.typesupport_identifier[0],
  &_QueryTrajectoryState_Event_message_typesupport_symbol_names.symbol_name[0],
  &_QueryTrajectoryState_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t QueryTrajectoryState_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_QueryTrajectoryState_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &control_msgs__srv__QueryTrajectoryState_Event__get_type_hash,
  &control_msgs__srv__QueryTrajectoryState_Event__get_type_description,
  &control_msgs__srv__QueryTrajectoryState_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace control_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<control_msgs::srv::QueryTrajectoryState_Event>()
{
  return &::control_msgs::srv::rosidl_typesupport_cpp::QueryTrajectoryState_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, control_msgs, srv, QueryTrajectoryState_Event)() {
  return get_message_type_support_handle<control_msgs::srv::QueryTrajectoryState_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "control_msgs/srv/detail/query_trajectory_state__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace control_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _QueryTrajectoryState_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _QueryTrajectoryState_type_support_ids_t;

static const _QueryTrajectoryState_type_support_ids_t _QueryTrajectoryState_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _QueryTrajectoryState_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _QueryTrajectoryState_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _QueryTrajectoryState_type_support_symbol_names_t _QueryTrajectoryState_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, control_msgs, srv, QueryTrajectoryState)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, control_msgs, srv, QueryTrajectoryState)),
  }
};

typedef struct _QueryTrajectoryState_type_support_data_t
{
  void * data[2];
} _QueryTrajectoryState_type_support_data_t;

static _QueryTrajectoryState_type_support_data_t _QueryTrajectoryState_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _QueryTrajectoryState_service_typesupport_map = {
  2,
  "control_msgs",
  &_QueryTrajectoryState_service_typesupport_ids.typesupport_identifier[0],
  &_QueryTrajectoryState_service_typesupport_symbol_names.symbol_name[0],
  &_QueryTrajectoryState_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t QueryTrajectoryState_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_QueryTrajectoryState_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<control_msgs::srv::QueryTrajectoryState_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<control_msgs::srv::QueryTrajectoryState_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<control_msgs::srv::QueryTrajectoryState_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<control_msgs::srv::QueryTrajectoryState>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<control_msgs::srv::QueryTrajectoryState>,
  &control_msgs__srv__QueryTrajectoryState__get_type_hash,
  &control_msgs__srv__QueryTrajectoryState__get_type_description,
  &control_msgs__srv__QueryTrajectoryState__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace control_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<control_msgs::srv::QueryTrajectoryState>()
{
  return &::control_msgs::srv::rosidl_typesupport_cpp::QueryTrajectoryState_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp