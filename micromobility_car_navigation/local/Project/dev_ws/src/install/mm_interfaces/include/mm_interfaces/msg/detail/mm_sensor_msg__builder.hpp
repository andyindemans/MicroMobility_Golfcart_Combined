// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mm_interfaces:msg/MmSensorMsg.idl
// generated code does not contain a copyright notice

#ifndef MM_INTERFACES__MSG__DETAIL__MM_SENSOR_MSG__BUILDER_HPP_
#define MM_INTERFACES__MSG__DETAIL__MM_SENSOR_MSG__BUILDER_HPP_

#include "mm_interfaces/msg/detail/mm_sensor_msg__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace mm_interfaces
{

namespace msg
{

namespace builder
{

class Init_MmSensorMsg_error_sensors
{
public:
  explicit Init_MmSensorMsg_error_sensors(::mm_interfaces::msg::MmSensorMsg & msg)
  : msg_(msg)
  {}
  ::mm_interfaces::msg::MmSensorMsg error_sensors(::mm_interfaces::msg::MmSensorMsg::_error_sensors_type arg)
  {
    msg_.error_sensors = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mm_interfaces::msg::MmSensorMsg msg_;
};

class Init_MmSensorMsg_depth_image
{
public:
  explicit Init_MmSensorMsg_depth_image(::mm_interfaces::msg::MmSensorMsg & msg)
  : msg_(msg)
  {}
  Init_MmSensorMsg_error_sensors depth_image(::mm_interfaces::msg::MmSensorMsg::_depth_image_type arg)
  {
    msg_.depth_image = std::move(arg);
    return Init_MmSensorMsg_error_sensors(msg_);
  }

private:
  ::mm_interfaces::msg::MmSensorMsg msg_;
};

class Init_MmSensorMsg_image
{
public:
  explicit Init_MmSensorMsg_image(::mm_interfaces::msg::MmSensorMsg & msg)
  : msg_(msg)
  {}
  Init_MmSensorMsg_depth_image image(::mm_interfaces::msg::MmSensorMsg::_image_type arg)
  {
    msg_.image = std::move(arg);
    return Init_MmSensorMsg_depth_image(msg_);
  }

private:
  ::mm_interfaces::msg::MmSensorMsg msg_;
};

class Init_MmSensorMsg_brake
{
public:
  explicit Init_MmSensorMsg_brake(::mm_interfaces::msg::MmSensorMsg & msg)
  : msg_(msg)
  {}
  Init_MmSensorMsg_image brake(::mm_interfaces::msg::MmSensorMsg::_brake_type arg)
  {
    msg_.brake = std::move(arg);
    return Init_MmSensorMsg_image(msg_);
  }

private:
  ::mm_interfaces::msg::MmSensorMsg msg_;
};

class Init_MmSensorMsg_gas
{
public:
  explicit Init_MmSensorMsg_gas(::mm_interfaces::msg::MmSensorMsg & msg)
  : msg_(msg)
  {}
  Init_MmSensorMsg_brake gas(::mm_interfaces::msg::MmSensorMsg::_gas_type arg)
  {
    msg_.gas = std::move(arg);
    return Init_MmSensorMsg_brake(msg_);
  }

private:
  ::mm_interfaces::msg::MmSensorMsg msg_;
};

class Init_MmSensorMsg_steer
{
public:
  Init_MmSensorMsg_steer()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MmSensorMsg_gas steer(::mm_interfaces::msg::MmSensorMsg::_steer_type arg)
  {
    msg_.steer = std::move(arg);
    return Init_MmSensorMsg_gas(msg_);
  }

private:
  ::mm_interfaces::msg::MmSensorMsg msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mm_interfaces::msg::MmSensorMsg>()
{
  return mm_interfaces::msg::builder::Init_MmSensorMsg_steer();
}

}  // namespace mm_interfaces

#endif  // MM_INTERFACES__MSG__DETAIL__MM_SENSOR_MSG__BUILDER_HPP_
