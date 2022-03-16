// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mm_interfaces:msg/CoordinateMsg.idl
// generated code does not contain a copyright notice

#ifndef MM_INTERFACES__MSG__DETAIL__COORDINATE_MSG__BUILDER_HPP_
#define MM_INTERFACES__MSG__DETAIL__COORDINATE_MSG__BUILDER_HPP_

#include "mm_interfaces/msg/detail/coordinate_msg__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace mm_interfaces
{

namespace msg
{

namespace builder
{

class Init_CoordinateMsg_heading
{
public:
  explicit Init_CoordinateMsg_heading(::mm_interfaces::msg::CoordinateMsg & msg)
  : msg_(msg)
  {}
  ::mm_interfaces::msg::CoordinateMsg heading(::mm_interfaces::msg::CoordinateMsg::_heading_type arg)
  {
    msg_.heading = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mm_interfaces::msg::CoordinateMsg msg_;
};

class Init_CoordinateMsg_longitude
{
public:
  explicit Init_CoordinateMsg_longitude(::mm_interfaces::msg::CoordinateMsg & msg)
  : msg_(msg)
  {}
  Init_CoordinateMsg_heading longitude(::mm_interfaces::msg::CoordinateMsg::_longitude_type arg)
  {
    msg_.longitude = std::move(arg);
    return Init_CoordinateMsg_heading(msg_);
  }

private:
  ::mm_interfaces::msg::CoordinateMsg msg_;
};

class Init_CoordinateMsg_latitude
{
public:
  Init_CoordinateMsg_latitude()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CoordinateMsg_longitude latitude(::mm_interfaces::msg::CoordinateMsg::_latitude_type arg)
  {
    msg_.latitude = std::move(arg);
    return Init_CoordinateMsg_longitude(msg_);
  }

private:
  ::mm_interfaces::msg::CoordinateMsg msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mm_interfaces::msg::CoordinateMsg>()
{
  return mm_interfaces::msg::builder::Init_CoordinateMsg_latitude();
}

}  // namespace mm_interfaces

#endif  // MM_INTERFACES__MSG__DETAIL__COORDINATE_MSG__BUILDER_HPP_
