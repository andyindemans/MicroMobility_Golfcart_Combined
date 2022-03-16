// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mm_interfaces:srv/Proximity.idl
// generated code does not contain a copyright notice

#ifndef MM_INTERFACES__SRV__DETAIL__PROXIMITY__BUILDER_HPP_
#define MM_INTERFACES__SRV__DETAIL__PROXIMITY__BUILDER_HPP_

#include "mm_interfaces/srv/detail/proximity__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace mm_interfaces
{

namespace srv
{

namespace builder
{

class Init_Proximity_Request_next_node
{
public:
  explicit Init_Proximity_Request_next_node(::mm_interfaces::srv::Proximity_Request & msg)
  : msg_(msg)
  {}
  ::mm_interfaces::srv::Proximity_Request next_node(::mm_interfaces::srv::Proximity_Request::_next_node_type arg)
  {
    msg_.next_node = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mm_interfaces::srv::Proximity_Request msg_;
};

class Init_Proximity_Request_current_position
{
public:
  Init_Proximity_Request_current_position()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Proximity_Request_next_node current_position(::mm_interfaces::srv::Proximity_Request::_current_position_type arg)
  {
    msg_.current_position = std::move(arg);
    return Init_Proximity_Request_next_node(msg_);
  }

private:
  ::mm_interfaces::srv::Proximity_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mm_interfaces::srv::Proximity_Request>()
{
  return mm_interfaces::srv::builder::Init_Proximity_Request_current_position();
}

}  // namespace mm_interfaces


namespace mm_interfaces
{

namespace srv
{

namespace builder
{

class Init_Proximity_Response_distance_to
{
public:
  Init_Proximity_Response_distance_to()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::mm_interfaces::srv::Proximity_Response distance_to(::mm_interfaces::srv::Proximity_Response::_distance_to_type arg)
  {
    msg_.distance_to = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mm_interfaces::srv::Proximity_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mm_interfaces::srv::Proximity_Response>()
{
  return mm_interfaces::srv::builder::Init_Proximity_Response_distance_to();
}

}  // namespace mm_interfaces

#endif  // MM_INTERFACES__SRV__DETAIL__PROXIMITY__BUILDER_HPP_
