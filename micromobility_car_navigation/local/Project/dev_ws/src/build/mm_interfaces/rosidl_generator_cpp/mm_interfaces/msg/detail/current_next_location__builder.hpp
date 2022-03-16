// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mm_interfaces:msg/CurrentNextLocation.idl
// generated code does not contain a copyright notice

#ifndef MM_INTERFACES__MSG__DETAIL__CURRENT_NEXT_LOCATION__BUILDER_HPP_
#define MM_INTERFACES__MSG__DETAIL__CURRENT_NEXT_LOCATION__BUILDER_HPP_

#include "mm_interfaces/msg/detail/current_next_location__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace mm_interfaces
{

namespace msg
{

namespace builder
{

class Init_CurrentNextLocation_next_position
{
public:
  explicit Init_CurrentNextLocation_next_position(::mm_interfaces::msg::CurrentNextLocation & msg)
  : msg_(msg)
  {}
  ::mm_interfaces::msg::CurrentNextLocation next_position(::mm_interfaces::msg::CurrentNextLocation::_next_position_type arg)
  {
    msg_.next_position = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mm_interfaces::msg::CurrentNextLocation msg_;
};

class Init_CurrentNextLocation_current_position
{
public:
  Init_CurrentNextLocation_current_position()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CurrentNextLocation_next_position current_position(::mm_interfaces::msg::CurrentNextLocation::_current_position_type arg)
  {
    msg_.current_position = std::move(arg);
    return Init_CurrentNextLocation_next_position(msg_);
  }

private:
  ::mm_interfaces::msg::CurrentNextLocation msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mm_interfaces::msg::CurrentNextLocation>()
{
  return mm_interfaces::msg::builder::Init_CurrentNextLocation_current_position();
}

}  // namespace mm_interfaces

#endif  // MM_INTERFACES__MSG__DETAIL__CURRENT_NEXT_LOCATION__BUILDER_HPP_
