// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from ur_msgs:srv/GetRobotSoftwareVersion.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "ur_msgs/srv/detail/get_robot_software_version__functions.h"
#include "ur_msgs/srv/detail/get_robot_software_version__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace ur_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _GetRobotSoftwareVersion_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetRobotSoftwareVersion_Request_type_support_ids_t;

static const _GetRobotSoftwareVersion_Request_type_support_ids_t _GetRobotSoftwareVersion_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GetRobotSoftwareVersion_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetRobotSoftwareVersion_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetRobotSoftwareVersion_Request_type_support_symbol_names_t _GetRobotSoftwareVersion_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ur_msgs, srv, GetRobotSoftwareVersion_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ur_msgs, srv, GetRobotSoftwareVersion_Request)),
  }
};

typedef struct _GetRobotSoftwareVersion_Request_type_support_data_t
{
  void * data[2];
} _GetRobotSoftwareVersion_Request_type_support_data_t;

static _GetRobotSoftwareVersion_Request_type_support_data_t _GetRobotSoftwareVersion_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetRobotSoftwareVersion_Request_message_typesupport_map = {
  2,
  "ur_msgs",
  &_GetRobotSoftwareVersion_Request_message_typesupport_ids.typesupport_identifier[0],
  &_GetRobotSoftwareVersion_Request_message_typesupport_symbol_names.symbol_name[0],
  &_GetRobotSoftwareVersion_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GetRobotSoftwareVersion_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetRobotSoftwareVersion_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &ur_msgs__srv__GetRobotSoftwareVersion_Request__get_type_hash,
  &ur_msgs__srv__GetRobotSoftwareVersion_Request__get_type_description,
  &ur_msgs__srv__GetRobotSoftwareVersion_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace ur_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ur_msgs::srv::GetRobotSoftwareVersion_Request>()
{
  return &::ur_msgs::srv::rosidl_typesupport_cpp::GetRobotSoftwareVersion_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, ur_msgs, srv, GetRobotSoftwareVersion_Request)() {
  return get_message_type_support_handle<ur_msgs::srv::GetRobotSoftwareVersion_Request>();
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
// #include "ur_msgs/srv/detail/get_robot_software_version__functions.h"
// already included above
// #include "ur_msgs/srv/detail/get_robot_software_version__struct.hpp"
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

namespace ur_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _GetRobotSoftwareVersion_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetRobotSoftwareVersion_Response_type_support_ids_t;

static const _GetRobotSoftwareVersion_Response_type_support_ids_t _GetRobotSoftwareVersion_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GetRobotSoftwareVersion_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetRobotSoftwareVersion_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetRobotSoftwareVersion_Response_type_support_symbol_names_t _GetRobotSoftwareVersion_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ur_msgs, srv, GetRobotSoftwareVersion_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ur_msgs, srv, GetRobotSoftwareVersion_Response)),
  }
};

typedef struct _GetRobotSoftwareVersion_Response_type_support_data_t
{
  void * data[2];
} _GetRobotSoftwareVersion_Response_type_support_data_t;

static _GetRobotSoftwareVersion_Response_type_support_data_t _GetRobotSoftwareVersion_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetRobotSoftwareVersion_Response_message_typesupport_map = {
  2,
  "ur_msgs",
  &_GetRobotSoftwareVersion_Response_message_typesupport_ids.typesupport_identifier[0],
  &_GetRobotSoftwareVersion_Response_message_typesupport_symbol_names.symbol_name[0],
  &_GetRobotSoftwareVersion_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GetRobotSoftwareVersion_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetRobotSoftwareVersion_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &ur_msgs__srv__GetRobotSoftwareVersion_Response__get_type_hash,
  &ur_msgs__srv__GetRobotSoftwareVersion_Response__get_type_description,
  &ur_msgs__srv__GetRobotSoftwareVersion_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace ur_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ur_msgs::srv::GetRobotSoftwareVersion_Response>()
{
  return &::ur_msgs::srv::rosidl_typesupport_cpp::GetRobotSoftwareVersion_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, ur_msgs, srv, GetRobotSoftwareVersion_Response)() {
  return get_message_type_support_handle<ur_msgs::srv::GetRobotSoftwareVersion_Response>();
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
// #include "ur_msgs/srv/detail/get_robot_software_version__functions.h"
// already included above
// #include "ur_msgs/srv/detail/get_robot_software_version__struct.hpp"
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

namespace ur_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _GetRobotSoftwareVersion_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetRobotSoftwareVersion_Event_type_support_ids_t;

static const _GetRobotSoftwareVersion_Event_type_support_ids_t _GetRobotSoftwareVersion_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GetRobotSoftwareVersion_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetRobotSoftwareVersion_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetRobotSoftwareVersion_Event_type_support_symbol_names_t _GetRobotSoftwareVersion_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ur_msgs, srv, GetRobotSoftwareVersion_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ur_msgs, srv, GetRobotSoftwareVersion_Event)),
  }
};

typedef struct _GetRobotSoftwareVersion_Event_type_support_data_t
{
  void * data[2];
} _GetRobotSoftwareVersion_Event_type_support_data_t;

static _GetRobotSoftwareVersion_Event_type_support_data_t _GetRobotSoftwareVersion_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetRobotSoftwareVersion_Event_message_typesupport_map = {
  2,
  "ur_msgs",
  &_GetRobotSoftwareVersion_Event_message_typesupport_ids.typesupport_identifier[0],
  &_GetRobotSoftwareVersion_Event_message_typesupport_symbol_names.symbol_name[0],
  &_GetRobotSoftwareVersion_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GetRobotSoftwareVersion_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetRobotSoftwareVersion_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &ur_msgs__srv__GetRobotSoftwareVersion_Event__get_type_hash,
  &ur_msgs__srv__GetRobotSoftwareVersion_Event__get_type_description,
  &ur_msgs__srv__GetRobotSoftwareVersion_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace ur_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ur_msgs::srv::GetRobotSoftwareVersion_Event>()
{
  return &::ur_msgs::srv::rosidl_typesupport_cpp::GetRobotSoftwareVersion_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, ur_msgs, srv, GetRobotSoftwareVersion_Event)() {
  return get_message_type_support_handle<ur_msgs::srv::GetRobotSoftwareVersion_Event>();
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
// #include "ur_msgs/srv/detail/get_robot_software_version__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace ur_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _GetRobotSoftwareVersion_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetRobotSoftwareVersion_type_support_ids_t;

static const _GetRobotSoftwareVersion_type_support_ids_t _GetRobotSoftwareVersion_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GetRobotSoftwareVersion_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetRobotSoftwareVersion_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetRobotSoftwareVersion_type_support_symbol_names_t _GetRobotSoftwareVersion_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ur_msgs, srv, GetRobotSoftwareVersion)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ur_msgs, srv, GetRobotSoftwareVersion)),
  }
};

typedef struct _GetRobotSoftwareVersion_type_support_data_t
{
  void * data[2];
} _GetRobotSoftwareVersion_type_support_data_t;

static _GetRobotSoftwareVersion_type_support_data_t _GetRobotSoftwareVersion_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetRobotSoftwareVersion_service_typesupport_map = {
  2,
  "ur_msgs",
  &_GetRobotSoftwareVersion_service_typesupport_ids.typesupport_identifier[0],
  &_GetRobotSoftwareVersion_service_typesupport_symbol_names.symbol_name[0],
  &_GetRobotSoftwareVersion_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t GetRobotSoftwareVersion_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetRobotSoftwareVersion_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<ur_msgs::srv::GetRobotSoftwareVersion_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<ur_msgs::srv::GetRobotSoftwareVersion_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<ur_msgs::srv::GetRobotSoftwareVersion_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<ur_msgs::srv::GetRobotSoftwareVersion>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<ur_msgs::srv::GetRobotSoftwareVersion>,
  &ur_msgs__srv__GetRobotSoftwareVersion__get_type_hash,
  &ur_msgs__srv__GetRobotSoftwareVersion__get_type_description,
  &ur_msgs__srv__GetRobotSoftwareVersion__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace ur_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<ur_msgs::srv::GetRobotSoftwareVersion>()
{
  return &::ur_msgs::srv::rosidl_typesupport_cpp::GetRobotSoftwareVersion_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp
