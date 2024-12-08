// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ur_msgs:srv/SetPayload.idl
// generated code does not contain a copyright notice

#ifndef UR_MSGS__SRV__DETAIL__SET_PAYLOAD__STRUCT_H_
#define UR_MSGS__SRV__DETAIL__SET_PAYLOAD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'center_of_gravity'
#include "geometry_msgs/msg/detail/vector3__struct.h"

/// Struct defined in srv/SetPayload in the package ur_msgs.
typedef struct ur_msgs__srv__SetPayload_Request
{
  float mass;
  geometry_msgs__msg__Vector3 center_of_gravity;
} ur_msgs__srv__SetPayload_Request;

// Struct for a sequence of ur_msgs__srv__SetPayload_Request.
typedef struct ur_msgs__srv__SetPayload_Request__Sequence
{
  ur_msgs__srv__SetPayload_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ur_msgs__srv__SetPayload_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/SetPayload in the package ur_msgs.
typedef struct ur_msgs__srv__SetPayload_Response
{
  bool success;
} ur_msgs__srv__SetPayload_Response;

// Struct for a sequence of ur_msgs__srv__SetPayload_Response.
typedef struct ur_msgs__srv__SetPayload_Response__Sequence
{
  ur_msgs__srv__SetPayload_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ur_msgs__srv__SetPayload_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  ur_msgs__srv__SetPayload_Event__request__MAX_SIZE = 1
};
// response
enum
{
  ur_msgs__srv__SetPayload_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/SetPayload in the package ur_msgs.
typedef struct ur_msgs__srv__SetPayload_Event
{
  service_msgs__msg__ServiceEventInfo info;
  ur_msgs__srv__SetPayload_Request__Sequence request;
  ur_msgs__srv__SetPayload_Response__Sequence response;
} ur_msgs__srv__SetPayload_Event;

// Struct for a sequence of ur_msgs__srv__SetPayload_Event.
typedef struct ur_msgs__srv__SetPayload_Event__Sequence
{
  ur_msgs__srv__SetPayload_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ur_msgs__srv__SetPayload_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UR_MSGS__SRV__DETAIL__SET_PAYLOAD__STRUCT_H_
