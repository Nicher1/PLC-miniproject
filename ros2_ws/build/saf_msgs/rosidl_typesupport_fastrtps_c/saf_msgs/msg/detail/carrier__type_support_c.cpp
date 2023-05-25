// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from saf_msgs:msg/Carrier.idl
// generated code does not contain a copyright notice
#include "saf_msgs/msg/detail/carrier__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "saf_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "saf_msgs/msg/detail/carrier__struct.h"
#include "saf_msgs/msg/detail/carrier__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _Carrier__ros_msg_type = saf_msgs__msg__Carrier;

static bool _Carrier__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Carrier__ros_msg_type * ros_message = static_cast<const _Carrier__ros_msg_type *>(untyped_ros_message);
  // Field name: carry_id
  {
    cdr << ros_message->carry_id;
  }

  // Field name: station_id
  {
    cdr << ros_message->station_id;
  }

  // Field name: hour
  {
    cdr << ros_message->hour;
  }

  // Field name: minute
  {
    cdr << ros_message->minute;
  }

  // Field name: second
  {
    cdr << ros_message->second;
  }

  return true;
}

static bool _Carrier__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Carrier__ros_msg_type * ros_message = static_cast<_Carrier__ros_msg_type *>(untyped_ros_message);
  // Field name: carry_id
  {
    cdr >> ros_message->carry_id;
  }

  // Field name: station_id
  {
    cdr >> ros_message->station_id;
  }

  // Field name: hour
  {
    cdr >> ros_message->hour;
  }

  // Field name: minute
  {
    cdr >> ros_message->minute;
  }

  // Field name: second
  {
    cdr >> ros_message->second;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_saf_msgs
size_t get_serialized_size_saf_msgs__msg__Carrier(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Carrier__ros_msg_type * ros_message = static_cast<const _Carrier__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name carry_id
  {
    size_t item_size = sizeof(ros_message->carry_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name station_id
  {
    size_t item_size = sizeof(ros_message->station_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hour
  {
    size_t item_size = sizeof(ros_message->hour);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name minute
  {
    size_t item_size = sizeof(ros_message->minute);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name second
  {
    size_t item_size = sizeof(ros_message->second);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Carrier__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_saf_msgs__msg__Carrier(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_saf_msgs
size_t max_serialized_size_saf_msgs__msg__Carrier(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: carry_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: station_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: hour
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: minute
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: second
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _Carrier__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_saf_msgs__msg__Carrier(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Carrier = {
  "saf_msgs::msg",
  "Carrier",
  _Carrier__cdr_serialize,
  _Carrier__cdr_deserialize,
  _Carrier__get_serialized_size,
  _Carrier__max_serialized_size
};

static rosidl_message_type_support_t _Carrier__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Carrier,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, saf_msgs, msg, Carrier)() {
  return &_Carrier__type_support;
}

#if defined(__cplusplus)
}
#endif
