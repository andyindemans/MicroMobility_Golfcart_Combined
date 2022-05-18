// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mm_interfaces:msg/CarInstructions.idl
// generated code does not contain a copyright notice

#ifndef MM_INTERFACES__MSG__DETAIL__CAR_INSTRUCTIONS__BUILDER_HPP_
#define MM_INTERFACES__MSG__DETAIL__CAR_INSTRUCTIONS__BUILDER_HPP_

#include "mm_interfaces/msg/detail/car_instructions__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace mm_interfaces
{

namespace msg
{

namespace builder
{

class Init_CarInstructions_distance_range
{
public:
  explicit Init_CarInstructions_distance_range(::mm_interfaces::msg::CarInstructions & msg)
  : msg_(msg)
  {}
  ::mm_interfaces::msg::CarInstructions distance_range(::mm_interfaces::msg::CarInstructions::_distance_range_type arg)
  {
    msg_.distance_range = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mm_interfaces::msg::CarInstructions msg_;
};

class Init_CarInstructions_distance
{
public:
  explicit Init_CarInstructions_distance(::mm_interfaces::msg::CarInstructions & msg)
  : msg_(msg)
  {}
  Init_CarInstructions_distance_range distance(::mm_interfaces::msg::CarInstructions::_distance_type arg)
  {
    msg_.distance = std::move(arg);
    return Init_CarInstructions_distance_range(msg_);
  }

private:
  ::mm_interfaces::msg::CarInstructions msg_;
};

class Init_CarInstructions_angle_range
{
public:
  explicit Init_CarInstructions_angle_range(::mm_interfaces::msg::CarInstructions & msg)
  : msg_(msg)
  {}
  Init_CarInstructions_distance angle_range(::mm_interfaces::msg::CarInstructions::_angle_range_type arg)
  {
    msg_.angle_range = std::move(arg);
    return Init_CarInstructions_distance(msg_);
  }

private:
  ::mm_interfaces::msg::CarInstructions msg_;
};

class Init_CarInstructions_angle
{
public:
  explicit Init_CarInstructions_angle(::mm_interfaces::msg::CarInstructions & msg)
  : msg_(msg)
  {}
  Init_CarInstructions_angle_range angle(::mm_interfaces::msg::CarInstructions::_angle_type arg)
  {
    msg_.angle = std::move(arg);
    return Init_CarInstructions_angle_range(msg_);
  }

private:
  ::mm_interfaces::msg::CarInstructions msg_;
};

class Init_CarInstructions_throttle_range
{
public:
  explicit Init_CarInstructions_throttle_range(::mm_interfaces::msg::CarInstructions & msg)
  : msg_(msg)
  {}
  Init_CarInstructions_angle throttle_range(::mm_interfaces::msg::CarInstructions::_throttle_range_type arg)
  {
    msg_.throttle_range = std::move(arg);
    return Init_CarInstructions_angle(msg_);
  }

private:
  ::mm_interfaces::msg::CarInstructions msg_;
};

class Init_CarInstructions_throttle
{
public:
  explicit Init_CarInstructions_throttle(::mm_interfaces::msg::CarInstructions & msg)
  : msg_(msg)
  {}
  Init_CarInstructions_throttle_range throttle(::mm_interfaces::msg::CarInstructions::_throttle_type arg)
  {
    msg_.throttle = std::move(arg);
    return Init_CarInstructions_throttle_range(msg_);
  }

private:
  ::mm_interfaces::msg::CarInstructions msg_;
};

class Init_CarInstructions_steering_range
{
public:
  explicit Init_CarInstructions_steering_range(::mm_interfaces::msg::CarInstructions & msg)
  : msg_(msg)
  {}
  Init_CarInstructions_throttle steering_range(::mm_interfaces::msg::CarInstructions::_steering_range_type arg)
  {
    msg_.steering_range = std::move(arg);
    return Init_CarInstructions_throttle(msg_);
  }

private:
  ::mm_interfaces::msg::CarInstructions msg_;
};

class Init_CarInstructions_steering
{
public:
  Init_CarInstructions_steering()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CarInstructions_steering_range steering(::mm_interfaces::msg::CarInstructions::_steering_type arg)
  {
    msg_.steering = std::move(arg);
    return Init_CarInstructions_steering_range(msg_);
  }

private:
  ::mm_interfaces::msg::CarInstructions msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mm_interfaces::msg::CarInstructions>()
{
  return mm_interfaces::msg::builder::Init_CarInstructions_steering();
}

}  // namespace mm_interfaces

#endif  // MM_INTERFACES__MSG__DETAIL__CAR_INSTRUCTIONS__BUILDER_HPP_
