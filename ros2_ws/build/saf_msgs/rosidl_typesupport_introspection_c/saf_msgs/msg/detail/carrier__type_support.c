// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from saf_msgs:msg/Carrier.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "saf_msgs/msg/detail/carrier__rosidl_typesupport_introspection_c.h"
#include "saf_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "saf_msgs/msg/detail/carrier__functions.h"
#include "saf_msgs/msg/detail/carrier__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void saf_msgs__msg__Carrier__rosidl_typesupport_introspection_c__Carrier_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  saf_msgs__msg__Carrier__init(message_memory);
}

void saf_msgs__msg__Carrier__rosidl_typesupport_introspection_c__Carrier_fini_function(void * message_memory)
{
  saf_msgs__msg__Carrier__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember saf_msgs__msg__Carrier__rosidl_typesupport_introspection_c__Carrier_message_member_array[5] = {
  {
    "carry_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(saf_msgs__msg__Carrier, carry_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "station_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(saf_msgs__msg__Carrier, station_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "hour",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(saf_msgs__msg__Carrier, hour),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "minute",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(saf_msgs__msg__Carrier, minute),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "second",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(saf_msgs__msg__Carrier, second),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers saf_msgs__msg__Carrier__rosidl_typesupport_introspection_c__Carrier_message_members = {
  "saf_msgs__msg",  // message namespace
  "Carrier",  // message name
  5,  // number of fields
  sizeof(saf_msgs__msg__Carrier),
  saf_msgs__msg__Carrier__rosidl_typesupport_introspection_c__Carrier_message_member_array,  // message members
  saf_msgs__msg__Carrier__rosidl_typesupport_introspection_c__Carrier_init_function,  // function to initialize message memory (memory has to be allocated)
  saf_msgs__msg__Carrier__rosidl_typesupport_introspection_c__Carrier_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t saf_msgs__msg__Carrier__rosidl_typesupport_introspection_c__Carrier_message_type_support_handle = {
  0,
  &saf_msgs__msg__Carrier__rosidl_typesupport_introspection_c__Carrier_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_saf_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, saf_msgs, msg, Carrier)() {
  if (!saf_msgs__msg__Carrier__rosidl_typesupport_introspection_c__Carrier_message_type_support_handle.typesupport_identifier) {
    saf_msgs__msg__Carrier__rosidl_typesupport_introspection_c__Carrier_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &saf_msgs__msg__Carrier__rosidl_typesupport_introspection_c__Carrier_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
