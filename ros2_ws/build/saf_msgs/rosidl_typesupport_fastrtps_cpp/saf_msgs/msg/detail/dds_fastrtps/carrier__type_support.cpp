// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from saf_msgs:msg/Carrier.idl
// generated code does not contain a copyright notice
#include "saf_msgs/msg/detail/carrier__rosidl_typesupport_fastrtps_cpp.hpp"
#include "saf_msgs/msg/detail/carrier__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace saf_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_saf_msgs
cdr_serialize(
  const saf_msgs::msg::Carrier & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: carry_id
  cdr << ros_message.carry_id;
  // Member: station_id
  cdr << ros_message.station_id;
  // Member: hour
  cdr << ros_message.hour;
  // Member: minute
  cdr << ros_message.minute;
  // Member: second
  cdr << ros_message.second;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_saf_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  saf_msgs::msg::Carrier & ros_message)
{
  // Member: carry_id
  cdr >> ros_message.carry_id;

  // Member: station_id
  cdr >> ros_message.station_id;

  // Member: hour
  cdr >> ros_message.hour;

  // Member: minute
  cdr >> ros_message.minute;

  // Member: second
  cdr >> ros_message.second;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_saf_msgs
get_serialized_size(
  const saf_msgs::msg::Carrier & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: carry_id
  {
    size_t item_size = sizeof(ros_message.carry_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: station_id
  {
    size_t item_size = sizeof(ros_message.station_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: hour
  {
    size_t item_size = sizeof(ros_message.hour);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: minute
  {
    size_t item_size = sizeof(ros_message.minute);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: second
  {
    size_t item_size = sizeof(ros_message.second);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_saf_msgs
max_serialized_size_Carrier(
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


  // Member: carry_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: station_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: hour
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: minute
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: second
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _Carrier__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const saf_msgs::msg::Carrier *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Carrier__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<saf_msgs::msg::Carrier *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Carrier__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const saf_msgs::msg::Carrier *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Carrier__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_Carrier(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _Carrier__callbacks = {
  "saf_msgs::msg",
  "Carrier",
  _Carrier__cdr_serialize,
  _Carrier__cdr_deserialize,
  _Carrier__get_serialized_size,
  _Carrier__max_serialized_size
};

static rosidl_message_type_support_t _Carrier__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Carrier__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace saf_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_saf_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<saf_msgs::msg::Carrier>()
{
  return &saf_msgs::msg::typesupport_fastrtps_cpp::_Carrier__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, saf_msgs, msg, Carrier)() {
  return &saf_msgs::msg::typesupport_fastrtps_cpp::_Carrier__handle;
}

#ifdef __cplusplus
}
#endif
