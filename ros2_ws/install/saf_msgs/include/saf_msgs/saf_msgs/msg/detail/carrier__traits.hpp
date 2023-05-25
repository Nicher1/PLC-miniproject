// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from saf_msgs:msg/Carrier.idl
// generated code does not contain a copyright notice

#ifndef SAF_MSGS__MSG__DETAIL__CARRIER__TRAITS_HPP_
#define SAF_MSGS__MSG__DETAIL__CARRIER__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "saf_msgs/msg/detail/carrier__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace saf_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Carrier & msg,
  std::ostream & out)
{
  out << "{";
  // member: carry_id
  {
    out << "carry_id: ";
    rosidl_generator_traits::value_to_yaml(msg.carry_id, out);
    out << ", ";
  }

  // member: station_id
  {
    out << "station_id: ";
    rosidl_generator_traits::value_to_yaml(msg.station_id, out);
    out << ", ";
  }

  // member: hour
  {
    out << "hour: ";
    rosidl_generator_traits::value_to_yaml(msg.hour, out);
    out << ", ";
  }

  // member: minute
  {
    out << "minute: ";
    rosidl_generator_traits::value_to_yaml(msg.minute, out);
    out << ", ";
  }

  // member: second
  {
    out << "second: ";
    rosidl_generator_traits::value_to_yaml(msg.second, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Carrier & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: carry_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "carry_id: ";
    rosidl_generator_traits::value_to_yaml(msg.carry_id, out);
    out << "\n";
  }

  // member: station_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "station_id: ";
    rosidl_generator_traits::value_to_yaml(msg.station_id, out);
    out << "\n";
  }

  // member: hour
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hour: ";
    rosidl_generator_traits::value_to_yaml(msg.hour, out);
    out << "\n";
  }

  // member: minute
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "minute: ";
    rosidl_generator_traits::value_to_yaml(msg.minute, out);
    out << "\n";
  }

  // member: second
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "second: ";
    rosidl_generator_traits::value_to_yaml(msg.second, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Carrier & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace saf_msgs

namespace rosidl_generator_traits
{

[[deprecated("use saf_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const saf_msgs::msg::Carrier & msg,
  std::ostream & out, size_t indentation = 0)
{
  saf_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use saf_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const saf_msgs::msg::Carrier & msg)
{
  return saf_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<saf_msgs::msg::Carrier>()
{
  return "saf_msgs::msg::Carrier";
}

template<>
inline const char * name<saf_msgs::msg::Carrier>()
{
  return "saf_msgs/msg/Carrier";
}

template<>
struct has_fixed_size<saf_msgs::msg::Carrier>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<saf_msgs::msg::Carrier>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<saf_msgs::msg::Carrier>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SAF_MSGS__MSG__DETAIL__CARRIER__TRAITS_HPP_
