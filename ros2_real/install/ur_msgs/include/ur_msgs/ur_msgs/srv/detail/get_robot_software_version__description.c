// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ur_msgs:srv/GetRobotSoftwareVersion.idl
// generated code does not contain a copyright notice

#include "ur_msgs/srv/detail/get_robot_software_version__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ur_msgs
const rosidl_type_hash_t *
ur_msgs__srv__GetRobotSoftwareVersion__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xf9, 0x98, 0xc8, 0x82, 0x81, 0x0c, 0x9e, 0x7c,
      0xac, 0x8f, 0x53, 0x8d, 0xd8, 0xc0, 0x53, 0x9b,
      0x73, 0x75, 0x1c, 0x9c, 0xf5, 0xd7, 0xd6, 0x4b,
      0xde, 0xea, 0x5f, 0xe6, 0xf7, 0x04, 0x03, 0xfd,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_ur_msgs
const rosidl_type_hash_t *
ur_msgs__srv__GetRobotSoftwareVersion_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xb4, 0x68, 0x95, 0x29, 0xb4, 0xcd, 0x5d, 0x5f,
      0x72, 0xa9, 0x2c, 0x7d, 0x55, 0xa1, 0x33, 0x6b,
      0xd1, 0xe2, 0x61, 0x73, 0xfe, 0x70, 0x1b, 0x07,
      0x3f, 0xd3, 0xc3, 0x1b, 0x27, 0x68, 0x50, 0x74,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_ur_msgs
const rosidl_type_hash_t *
ur_msgs__srv__GetRobotSoftwareVersion_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x0c, 0x80, 0x08, 0x4c, 0x73, 0x60, 0xea, 0xd6,
      0x60, 0xaf, 0x42, 0xee, 0xb8, 0xfe, 0x8d, 0xa1,
      0x67, 0xc9, 0x10, 0xa6, 0x45, 0xcf, 0x84, 0x1c,
      0xfc, 0xbc, 0xd2, 0x81, 0x56, 0x89, 0x9e, 0xba,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_ur_msgs
const rosidl_type_hash_t *
ur_msgs__srv__GetRobotSoftwareVersion_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x43, 0x79, 0x6e, 0x28, 0x0d, 0xce, 0xdb, 0xe6,
      0x56, 0x65, 0xf7, 0x97, 0xfc, 0xb5, 0x0b, 0x30,
      0x86, 0xa4, 0x9f, 0xcb, 0x95, 0x2e, 0x64, 0xdf,
      0x50, 0xae, 0x83, 0x78, 0x73, 0x0c, 0xed, 0x36,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "service_msgs/msg/detail/service_event_info__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char ur_msgs__srv__GetRobotSoftwareVersion__TYPE_NAME[] = "ur_msgs/srv/GetRobotSoftwareVersion";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";
static char ur_msgs__srv__GetRobotSoftwareVersion_Event__TYPE_NAME[] = "ur_msgs/srv/GetRobotSoftwareVersion_Event";
static char ur_msgs__srv__GetRobotSoftwareVersion_Request__TYPE_NAME[] = "ur_msgs/srv/GetRobotSoftwareVersion_Request";
static char ur_msgs__srv__GetRobotSoftwareVersion_Response__TYPE_NAME[] = "ur_msgs/srv/GetRobotSoftwareVersion_Response";

// Define type names, field names, and default values
static char ur_msgs__srv__GetRobotSoftwareVersion__FIELD_NAME__request_message[] = "request_message";
static char ur_msgs__srv__GetRobotSoftwareVersion__FIELD_NAME__response_message[] = "response_message";
static char ur_msgs__srv__GetRobotSoftwareVersion__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field ur_msgs__srv__GetRobotSoftwareVersion__FIELDS[] = {
  {
    {ur_msgs__srv__GetRobotSoftwareVersion__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {ur_msgs__srv__GetRobotSoftwareVersion_Request__TYPE_NAME, 43, 43},
    },
    {NULL, 0, 0},
  },
  {
    {ur_msgs__srv__GetRobotSoftwareVersion__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {ur_msgs__srv__GetRobotSoftwareVersion_Response__TYPE_NAME, 44, 44},
    },
    {NULL, 0, 0},
  },
  {
    {ur_msgs__srv__GetRobotSoftwareVersion__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {ur_msgs__srv__GetRobotSoftwareVersion_Event__TYPE_NAME, 41, 41},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription ur_msgs__srv__GetRobotSoftwareVersion__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {ur_msgs__srv__GetRobotSoftwareVersion_Event__TYPE_NAME, 41, 41},
    {NULL, 0, 0},
  },
  {
    {ur_msgs__srv__GetRobotSoftwareVersion_Request__TYPE_NAME, 43, 43},
    {NULL, 0, 0},
  },
  {
    {ur_msgs__srv__GetRobotSoftwareVersion_Response__TYPE_NAME, 44, 44},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ur_msgs__srv__GetRobotSoftwareVersion__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ur_msgs__srv__GetRobotSoftwareVersion__TYPE_NAME, 35, 35},
      {ur_msgs__srv__GetRobotSoftwareVersion__FIELDS, 3, 3},
    },
    {ur_msgs__srv__GetRobotSoftwareVersion__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = ur_msgs__srv__GetRobotSoftwareVersion_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = ur_msgs__srv__GetRobotSoftwareVersion_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = ur_msgs__srv__GetRobotSoftwareVersion_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char ur_msgs__srv__GetRobotSoftwareVersion_Request__FIELD_NAME__structure_needs_at_least_one_member[] = "structure_needs_at_least_one_member";

static rosidl_runtime_c__type_description__Field ur_msgs__srv__GetRobotSoftwareVersion_Request__FIELDS[] = {
  {
    {ur_msgs__srv__GetRobotSoftwareVersion_Request__FIELD_NAME__structure_needs_at_least_one_member, 35, 35},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ur_msgs__srv__GetRobotSoftwareVersion_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ur_msgs__srv__GetRobotSoftwareVersion_Request__TYPE_NAME, 43, 43},
      {ur_msgs__srv__GetRobotSoftwareVersion_Request__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char ur_msgs__srv__GetRobotSoftwareVersion_Response__FIELD_NAME__major[] = "major";
static char ur_msgs__srv__GetRobotSoftwareVersion_Response__FIELD_NAME__minor[] = "minor";
static char ur_msgs__srv__GetRobotSoftwareVersion_Response__FIELD_NAME__bugfix[] = "bugfix";
static char ur_msgs__srv__GetRobotSoftwareVersion_Response__FIELD_NAME__build[] = "build";

static rosidl_runtime_c__type_description__Field ur_msgs__srv__GetRobotSoftwareVersion_Response__FIELDS[] = {
  {
    {ur_msgs__srv__GetRobotSoftwareVersion_Response__FIELD_NAME__major, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ur_msgs__srv__GetRobotSoftwareVersion_Response__FIELD_NAME__minor, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ur_msgs__srv__GetRobotSoftwareVersion_Response__FIELD_NAME__bugfix, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ur_msgs__srv__GetRobotSoftwareVersion_Response__FIELD_NAME__build, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ur_msgs__srv__GetRobotSoftwareVersion_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ur_msgs__srv__GetRobotSoftwareVersion_Response__TYPE_NAME, 44, 44},
      {ur_msgs__srv__GetRobotSoftwareVersion_Response__FIELDS, 4, 4},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char ur_msgs__srv__GetRobotSoftwareVersion_Event__FIELD_NAME__info[] = "info";
static char ur_msgs__srv__GetRobotSoftwareVersion_Event__FIELD_NAME__request[] = "request";
static char ur_msgs__srv__GetRobotSoftwareVersion_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field ur_msgs__srv__GetRobotSoftwareVersion_Event__FIELDS[] = {
  {
    {ur_msgs__srv__GetRobotSoftwareVersion_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {ur_msgs__srv__GetRobotSoftwareVersion_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {ur_msgs__srv__GetRobotSoftwareVersion_Request__TYPE_NAME, 43, 43},
    },
    {NULL, 0, 0},
  },
  {
    {ur_msgs__srv__GetRobotSoftwareVersion_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {ur_msgs__srv__GetRobotSoftwareVersion_Response__TYPE_NAME, 44, 44},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription ur_msgs__srv__GetRobotSoftwareVersion_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {ur_msgs__srv__GetRobotSoftwareVersion_Request__TYPE_NAME, 43, 43},
    {NULL, 0, 0},
  },
  {
    {ur_msgs__srv__GetRobotSoftwareVersion_Response__TYPE_NAME, 44, 44},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ur_msgs__srv__GetRobotSoftwareVersion_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ur_msgs__srv__GetRobotSoftwareVersion_Event__TYPE_NAME, 41, 41},
      {ur_msgs__srv__GetRobotSoftwareVersion_Event__FIELDS, 3, 3},
    },
    {ur_msgs__srv__GetRobotSoftwareVersion_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = ur_msgs__srv__GetRobotSoftwareVersion_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = ur_msgs__srv__GetRobotSoftwareVersion_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "---\n"
  "uint32 major    # Major version number\n"
  "uint32 minor    # Minor version number\n"
  "uint32 bugfix   # Bugfix version number\n"
  "uint32 build    # Build number";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ur_msgs__srv__GetRobotSoftwareVersion__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ur_msgs__srv__GetRobotSoftwareVersion__TYPE_NAME, 35, 35},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 153, 153},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
ur_msgs__srv__GetRobotSoftwareVersion_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ur_msgs__srv__GetRobotSoftwareVersion_Request__TYPE_NAME, 43, 43},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
ur_msgs__srv__GetRobotSoftwareVersion_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ur_msgs__srv__GetRobotSoftwareVersion_Response__TYPE_NAME, 44, 44},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
ur_msgs__srv__GetRobotSoftwareVersion_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ur_msgs__srv__GetRobotSoftwareVersion_Event__TYPE_NAME, 41, 41},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ur_msgs__srv__GetRobotSoftwareVersion__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ur_msgs__srv__GetRobotSoftwareVersion__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[3] = *ur_msgs__srv__GetRobotSoftwareVersion_Event__get_individual_type_description_source(NULL);
    sources[4] = *ur_msgs__srv__GetRobotSoftwareVersion_Request__get_individual_type_description_source(NULL);
    sources[5] = *ur_msgs__srv__GetRobotSoftwareVersion_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ur_msgs__srv__GetRobotSoftwareVersion_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ur_msgs__srv__GetRobotSoftwareVersion_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ur_msgs__srv__GetRobotSoftwareVersion_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ur_msgs__srv__GetRobotSoftwareVersion_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ur_msgs__srv__GetRobotSoftwareVersion_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ur_msgs__srv__GetRobotSoftwareVersion_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[3] = *ur_msgs__srv__GetRobotSoftwareVersion_Request__get_individual_type_description_source(NULL);
    sources[4] = *ur_msgs__srv__GetRobotSoftwareVersion_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}