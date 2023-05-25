// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from saf_msgs:msg/Carrier.idl
// generated code does not contain a copyright notice

#ifndef SAF_MSGS__MSG__DETAIL__CARRIER__STRUCT_H_
#define SAF_MSGS__MSG__DETAIL__CARRIER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Carrier in the package saf_msgs.
typedef struct saf_msgs__msg__Carrier
{
  int64_t carry_id;
  int64_t station_id;
  int8_t hour;
  int8_t minute;
  int8_t second;
} saf_msgs__msg__Carrier;

// Struct for a sequence of saf_msgs__msg__Carrier.
typedef struct saf_msgs__msg__Carrier__Sequence
{
  saf_msgs__msg__Carrier * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} saf_msgs__msg__Carrier__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SAF_MSGS__MSG__DETAIL__CARRIER__STRUCT_H_
