// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mm_interfaces:srv/Pathfinding.idl
// generated code does not contain a copyright notice

#ifndef MM_INTERFACES__SRV__DETAIL__PATHFINDING__BUILDER_HPP_
#define MM_INTERFACES__SRV__DETAIL__PATHFINDING__BUILDER_HPP_

#include "mm_interfaces/srv/detail/pathfinding__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace mm_interfaces
{

namespace srv
{

namespace builder
{

class Init_Pathfinding_Request_end_node_id
{
public:
  explicit Init_Pathfinding_Request_end_node_id(::mm_interfaces::srv::Pathfinding_Request & msg)
  : msg_(msg)
  {}
  ::mm_interfaces::srv::Pathfinding_Request end_node_id(::mm_interfaces::srv::Pathfinding_Request::_end_node_id_type arg)
  {
    msg_.end_node_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mm_interfaces::srv::Pathfinding_Request msg_;
};

class Init_Pathfinding_Request_start_node_id
{
public:
  Init_Pathfinding_Request_start_node_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Pathfinding_Request_end_node_id start_node_id(::mm_interfaces::srv::Pathfinding_Request::_start_node_id_type arg)
  {
    msg_.start_node_id = std::move(arg);
    return Init_Pathfinding_Request_end_node_id(msg_);
  }

private:
  ::mm_interfaces::srv::Pathfinding_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mm_interfaces::srv::Pathfinding_Request>()
{
  return mm_interfaces::srv::builder::Init_Pathfinding_Request_start_node_id();
}

}  // namespace mm_interfaces


namespace mm_interfaces
{

namespace srv
{

namespace builder
{

class Init_Pathfinding_Response_path
{
public:
  Init_Pathfinding_Response_path()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::mm_interfaces::srv::Pathfinding_Response path(::mm_interfaces::srv::Pathfinding_Response::_path_type arg)
  {
    msg_.path = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mm_interfaces::srv::Pathfinding_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mm_interfaces::srv::Pathfinding_Response>()
{
  return mm_interfaces::srv::builder::Init_Pathfinding_Response_path();
}

}  // namespace mm_interfaces

#endif  // MM_INTERFACES__SRV__DETAIL__PATHFINDING__BUILDER_HPP_
