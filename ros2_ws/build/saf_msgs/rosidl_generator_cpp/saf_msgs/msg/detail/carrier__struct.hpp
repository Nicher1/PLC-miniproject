// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from saf_msgs:msg/Carrier.idl
// generated code does not contain a copyright notice

#ifndef SAF_MSGS__MSG__DETAIL__CARRIER__STRUCT_HPP_
#define SAF_MSGS__MSG__DETAIL__CARRIER__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__saf_msgs__msg__Carrier __attribute__((deprecated))
#else
# define DEPRECATED__saf_msgs__msg__Carrier __declspec(deprecated)
#endif

namespace saf_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Carrier_
{
  using Type = Carrier_<ContainerAllocator>;

  explicit Carrier_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->carry_id = 0ll;
      this->station_id = 0ll;
      this->hour = 0;
      this->minute = 0;
      this->second = 0;
    }
  }

  explicit Carrier_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->carry_id = 0ll;
      this->station_id = 0ll;
      this->hour = 0;
      this->minute = 0;
      this->second = 0;
    }
  }

  // field types and members
  using _carry_id_type =
    int64_t;
  _carry_id_type carry_id;
  using _station_id_type =
    int64_t;
  _station_id_type station_id;
  using _hour_type =
    int8_t;
  _hour_type hour;
  using _minute_type =
    int8_t;
  _minute_type minute;
  using _second_type =
    int8_t;
  _second_type second;

  // setters for named parameter idiom
  Type & set__carry_id(
    const int64_t & _arg)
  {
    this->carry_id = _arg;
    return *this;
  }
  Type & set__station_id(
    const int64_t & _arg)
  {
    this->station_id = _arg;
    return *this;
  }
  Type & set__hour(
    const int8_t & _arg)
  {
    this->hour = _arg;
    return *this;
  }
  Type & set__minute(
    const int8_t & _arg)
  {
    this->minute = _arg;
    return *this;
  }
  Type & set__second(
    const int8_t & _arg)
  {
    this->second = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    saf_msgs::msg::Carrier_<ContainerAllocator> *;
  using ConstRawPtr =
    const saf_msgs::msg::Carrier_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<saf_msgs::msg::Carrier_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<saf_msgs::msg::Carrier_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      saf_msgs::msg::Carrier_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<saf_msgs::msg::Carrier_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      saf_msgs::msg::Carrier_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<saf_msgs::msg::Carrier_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<saf_msgs::msg::Carrier_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<saf_msgs::msg::Carrier_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__saf_msgs__msg__Carrier
    std::shared_ptr<saf_msgs::msg::Carrier_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__saf_msgs__msg__Carrier
    std::shared_ptr<saf_msgs::msg::Carrier_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Carrier_ & other) const
  {
    if (this->carry_id != other.carry_id) {
      return false;
    }
    if (this->station_id != other.station_id) {
      return false;
    }
    if (this->hour != other.hour) {
      return false;
    }
    if (this->minute != other.minute) {
      return false;
    }
    if (this->second != other.second) {
      return false;
    }
    return true;
  }
  bool operator!=(const Carrier_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Carrier_

// alias to use template instance with default allocator
using Carrier =
  saf_msgs::msg::Carrier_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace saf_msgs

#endif  // SAF_MSGS__MSG__DETAIL__CARRIER__STRUCT_HPP_
