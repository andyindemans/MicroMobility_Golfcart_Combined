// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mm_interfaces:msg/Int.idl
// generated code does not contain a copyright notice

#ifndef MM_INTERFACES__MSG__DETAIL__INT__BUILDER_HPP_
#define MM_INTERFACES__MSG__DETAIL__INT__BUILDER_HPP_

#include "mm_interfaces/msg/detail/int__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace mm_interfaces
{

namespace msg
{

namespace builder
{

class Init_Int_data
{
public:
  explicit Init_Int_data(::mm_interfaces::msg::Int & msg)
  : msg_(msg)
  {}
  ::mm_interfaces::msg::Int data(::mm_interfaces::msg::Int::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mm_interfaces::msg::Int msg_;
};

class Init_Int_sensor_error
{
public:
  Init_Int_sensor_error()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Int_data sensor_error(::mm_interfaces::msg::Int::_sensor_error_type arg)
  {
    msg_.sensor_error = std::move(arg);
    return Init_Int_data(msg_);
  }

private:
  ::mm_interfaces::msg::Int msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mm_interfaces::msg::Int>()
{
  return mm_interfaces::msg::builder::Init_Int_sensor_error();
}

}  // namespace mm_interfaces

#endif  // MM_INTERFACES__MSG__DETAIL__INT__BUILDER_HPP_
