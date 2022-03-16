// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mm_interfaces:msg/Float.idl
// generated code does not contain a copyright notice

#ifndef MM_INTERFACES__MSG__DETAIL__FLOAT__BUILDER_HPP_
#define MM_INTERFACES__MSG__DETAIL__FLOAT__BUILDER_HPP_

#include "mm_interfaces/msg/detail/float__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace mm_interfaces
{

namespace msg
{

namespace builder
{

class Init_Float_data
{
public:
  explicit Init_Float_data(::mm_interfaces::msg::Float & msg)
  : msg_(msg)
  {}
  ::mm_interfaces::msg::Float data(::mm_interfaces::msg::Float::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mm_interfaces::msg::Float msg_;
};

class Init_Float_sensor_error
{
public:
  Init_Float_sensor_error()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Float_data sensor_error(::mm_interfaces::msg::Float::_sensor_error_type arg)
  {
    msg_.sensor_error = std::move(arg);
    return Init_Float_data(msg_);
  }

private:
  ::mm_interfaces::msg::Float msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mm_interfaces::msg::Float>()
{
  return mm_interfaces::msg::builder::Init_Float_sensor_error();
}

}  // namespace mm_interfaces

#endif  // MM_INTERFACES__MSG__DETAIL__FLOAT__BUILDER_HPP_
