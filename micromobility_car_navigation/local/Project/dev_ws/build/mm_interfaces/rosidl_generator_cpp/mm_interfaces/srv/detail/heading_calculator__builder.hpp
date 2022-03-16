// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mm_interfaces:srv/HeadingCalculator.idl
// generated code does not contain a copyright notice

#ifndef MM_INTERFACES__SRV__DETAIL__HEADING_CALCULATOR__BUILDER_HPP_
#define MM_INTERFACES__SRV__DETAIL__HEADING_CALCULATOR__BUILDER_HPP_

#include "mm_interfaces/srv/detail/heading_calculator__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace mm_interfaces
{

namespace srv
{

namespace builder
{

class Init_HeadingCalculator_Request_next_node_long
{
public:
  explicit Init_HeadingCalculator_Request_next_node_long(::mm_interfaces::srv::HeadingCalculator_Request & msg)
  : msg_(msg)
  {}
  ::mm_interfaces::srv::HeadingCalculator_Request next_node_long(::mm_interfaces::srv::HeadingCalculator_Request::_next_node_long_type arg)
  {
    msg_.next_node_long = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mm_interfaces::srv::HeadingCalculator_Request msg_;
};

class Init_HeadingCalculator_Request_next_node_lat
{
public:
  explicit Init_HeadingCalculator_Request_next_node_lat(::mm_interfaces::srv::HeadingCalculator_Request & msg)
  : msg_(msg)
  {}
  Init_HeadingCalculator_Request_next_node_long next_node_lat(::mm_interfaces::srv::HeadingCalculator_Request::_next_node_lat_type arg)
  {
    msg_.next_node_lat = std::move(arg);
    return Init_HeadingCalculator_Request_next_node_long(msg_);
  }

private:
  ::mm_interfaces::srv::HeadingCalculator_Request msg_;
};

class Init_HeadingCalculator_Request_cart_long
{
public:
  explicit Init_HeadingCalculator_Request_cart_long(::mm_interfaces::srv::HeadingCalculator_Request & msg)
  : msg_(msg)
  {}
  Init_HeadingCalculator_Request_next_node_lat cart_long(::mm_interfaces::srv::HeadingCalculator_Request::_cart_long_type arg)
  {
    msg_.cart_long = std::move(arg);
    return Init_HeadingCalculator_Request_next_node_lat(msg_);
  }

private:
  ::mm_interfaces::srv::HeadingCalculator_Request msg_;
};

class Init_HeadingCalculator_Request_cart_lat
{
public:
  explicit Init_HeadingCalculator_Request_cart_lat(::mm_interfaces::srv::HeadingCalculator_Request & msg)
  : msg_(msg)
  {}
  Init_HeadingCalculator_Request_cart_long cart_lat(::mm_interfaces::srv::HeadingCalculator_Request::_cart_lat_type arg)
  {
    msg_.cart_lat = std::move(arg);
    return Init_HeadingCalculator_Request_cart_long(msg_);
  }

private:
  ::mm_interfaces::srv::HeadingCalculator_Request msg_;
};

class Init_HeadingCalculator_Request_cart_bearing
{
public:
  Init_HeadingCalculator_Request_cart_bearing()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HeadingCalculator_Request_cart_lat cart_bearing(::mm_interfaces::srv::HeadingCalculator_Request::_cart_bearing_type arg)
  {
    msg_.cart_bearing = std::move(arg);
    return Init_HeadingCalculator_Request_cart_lat(msg_);
  }

private:
  ::mm_interfaces::srv::HeadingCalculator_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mm_interfaces::srv::HeadingCalculator_Request>()
{
  return mm_interfaces::srv::builder::Init_HeadingCalculator_Request_cart_bearing();
}

}  // namespace mm_interfaces


namespace mm_interfaces
{

namespace srv
{

namespace builder
{

class Init_HeadingCalculator_Response_turn_value
{
public:
  Init_HeadingCalculator_Response_turn_value()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::mm_interfaces::srv::HeadingCalculator_Response turn_value(::mm_interfaces::srv::HeadingCalculator_Response::_turn_value_type arg)
  {
    msg_.turn_value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mm_interfaces::srv::HeadingCalculator_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mm_interfaces::srv::HeadingCalculator_Response>()
{
  return mm_interfaces::srv::builder::Init_HeadingCalculator_Response_turn_value();
}

}  // namespace mm_interfaces

#endif  // MM_INTERFACES__SRV__DETAIL__HEADING_CALCULATOR__BUILDER_HPP_
