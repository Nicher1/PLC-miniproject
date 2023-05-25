// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from saf_msgs:msg/Carrier.idl
// generated code does not contain a copyright notice

#ifndef SAF_MSGS__MSG__DETAIL__CARRIER__BUILDER_HPP_
#define SAF_MSGS__MSG__DETAIL__CARRIER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "saf_msgs/msg/detail/carrier__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace saf_msgs
{

namespace msg
{

namespace builder
{

class Init_Carrier_second
{
public:
  explicit Init_Carrier_second(::saf_msgs::msg::Carrier & msg)
  : msg_(msg)
  {}
  ::saf_msgs::msg::Carrier second(::saf_msgs::msg::Carrier::_second_type arg)
  {
    msg_.second = std::move(arg);
    return std::move(msg_);
  }

private:
  ::saf_msgs::msg::Carrier msg_;
};

class Init_Carrier_minute
{
public:
  explicit Init_Carrier_minute(::saf_msgs::msg::Carrier & msg)
  : msg_(msg)
  {}
  Init_Carrier_second minute(::saf_msgs::msg::Carrier::_minute_type arg)
  {
    msg_.minute = std::move(arg);
    return Init_Carrier_second(msg_);
  }

private:
  ::saf_msgs::msg::Carrier msg_;
};

class Init_Carrier_hour
{
public:
  explicit Init_Carrier_hour(::saf_msgs::msg::Carrier & msg)
  : msg_(msg)
  {}
  Init_Carrier_minute hour(::saf_msgs::msg::Carrier::_hour_type arg)
  {
    msg_.hour = std::move(arg);
    return Init_Carrier_minute(msg_);
  }

private:
  ::saf_msgs::msg::Carrier msg_;
};

class Init_Carrier_station_id
{
public:
  explicit Init_Carrier_station_id(::saf_msgs::msg::Carrier & msg)
  : msg_(msg)
  {}
  Init_Carrier_hour station_id(::saf_msgs::msg::Carrier::_station_id_type arg)
  {
    msg_.station_id = std::move(arg);
    return Init_Carrier_hour(msg_);
  }

private:
  ::saf_msgs::msg::Carrier msg_;
};

class Init_Carrier_carry_id
{
public:
  Init_Carrier_carry_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Carrier_station_id carry_id(::saf_msgs::msg::Carrier::_carry_id_type arg)
  {
    msg_.carry_id = std::move(arg);
    return Init_Carrier_station_id(msg_);
  }

private:
  ::saf_msgs::msg::Carrier msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::saf_msgs::msg::Carrier>()
{
  return saf_msgs::msg::builder::Init_Carrier_carry_id();
}

}  // namespace saf_msgs

#endif  // SAF_MSGS__MSG__DETAIL__CARRIER__BUILDER_HPP_
