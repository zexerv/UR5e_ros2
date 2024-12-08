// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from ur_dashboard_msgs:msg/SafetyMode.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "ur_dashboard_msgs/msg/detail/safety_mode__functions.h"
#include "ur_dashboard_msgs/msg/detail/safety_mode__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace ur_dashboard_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void SafetyMode_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) ur_dashboard_msgs::msg::SafetyMode(_init);
}

void SafetyMode_fini_function(void * message_memory)
{
  auto typed_message = static_cast<ur_dashboard_msgs::msg::SafetyMode *>(message_memory);
  typed_message->~SafetyMode();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SafetyMode_message_member_array[1] = {
  {
    "mode",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur_dashboard_msgs::msg::SafetyMode, mode),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SafetyMode_message_members = {
  "ur_dashboard_msgs::msg",  // message namespace
  "SafetyMode",  // message name
  1,  // number of fields
  sizeof(ur_dashboard_msgs::msg::SafetyMode),
  SafetyMode_message_member_array,  // message members
  SafetyMode_init_function,  // function to initialize message memory (memory has to be allocated)
  SafetyMode_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SafetyMode_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SafetyMode_message_members,
  get_message_typesupport_handle_function,
  &ur_dashboard_msgs__msg__SafetyMode__get_type_hash,
  &ur_dashboard_msgs__msg__SafetyMode__get_type_description,
  &ur_dashboard_msgs__msg__SafetyMode__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace ur_dashboard_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ur_dashboard_msgs::msg::SafetyMode>()
{
  return &::ur_dashboard_msgs::msg::rosidl_typesupport_introspection_cpp::SafetyMode_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ur_dashboard_msgs, msg, SafetyMode)() {
  return &::ur_dashboard_msgs::msg::rosidl_typesupport_introspection_cpp::SafetyMode_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif