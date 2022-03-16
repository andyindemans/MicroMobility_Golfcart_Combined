// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mm_interfaces:srv/Proximity.idl
// generated code does not contain a copyright notice

#ifndef MM_INTERFACES__SRV__DETAIL__PROXIMITY__STRUCT_HPP_
#define MM_INTERFACES__SRV__DETAIL__PROXIMITY__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'current_position'
// Member 'next_node'
#include "mm_interfaces/msg/detail/coordinate_msg__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mm_interfaces__srv__Proximity_Request __attribute__((deprecated))
#else
# define DEPRECATED__mm_interfaces__srv__Proximity_Request __declspec(deprecated)
#endif

namespace mm_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Proximity_Request_
{
  using Type = Proximity_Request_<ContainerAllocator>;

  explicit Proximity_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : current_position(_init),
    next_node(_init)
  {
    (void)_init;
  }

  explicit Proximity_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : current_position(_alloc, _init),
    next_node(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _current_position_type =
    mm_interfaces::msg::CoordinateMsg_<ContainerAllocator>;
  _current_position_type current_position;
  using _next_node_type =
    mm_interfaces::msg::CoordinateMsg_<ContainerAllocator>;
  _next_node_type next_node;

  // setters for named parameter idiom
  Type & set__current_position(
    const mm_interfaces::msg::CoordinateMsg_<ContainerAllocator> & _arg)
  {
    this->current_position = _arg;
    return *this;
  }
  Type & set__next_node(
    const mm_interfaces::msg::CoordinateMsg_<ContainerAllocator> & _arg)
  {
    this->next_node = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mm_interfaces::srv::Proximity_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const mm_interfaces::srv::Proximity_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mm_interfaces::srv::Proximity_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mm_interfaces::srv::Proximity_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mm_interfaces::srv::Proximity_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mm_interfaces::srv::Proximity_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mm_interfaces::srv::Proximity_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mm_interfaces::srv::Proximity_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mm_interfaces::srv::Proximity_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mm_interfaces::srv::Proximity_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mm_interfaces__srv__Proximity_Request
    std::shared_ptr<mm_interfaces::srv::Proximity_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mm_interfaces__srv__Proximity_Request
    std::shared_ptr<mm_interfaces::srv::Proximity_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Proximity_Request_ & other) const
  {
    if (this->current_position != other.current_position) {
      return false;
    }
    if (this->next_node != other.next_node) {
      return false;
    }
    return true;
  }
  bool operator!=(const Proximity_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Proximity_Request_

// alias to use template instance with default allocator
using Proximity_Request =
  mm_interfaces::srv::Proximity_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace mm_interfaces


#ifndef _WIN32
# define DEPRECATED__mm_interfaces__srv__Proximity_Response __attribute__((deprecated))
#else
# define DEPRECATED__mm_interfaces__srv__Proximity_Response __declspec(deprecated)
#endif

namespace mm_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Proximity_Response_
{
  using Type = Proximity_Response_<ContainerAllocator>;

  explicit Proximity_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->distance_to = 0.0;
    }
  }

  explicit Proximity_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->distance_to = 0.0;
    }
  }

  // field types and members
  using _distance_to_type =
    double;
  _distance_to_type distance_to;

  // setters for named parameter idiom
  Type & set__distance_to(
    const double & _arg)
  {
    this->distance_to = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mm_interfaces::srv::Proximity_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const mm_interfaces::srv::Proximity_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mm_interfaces::srv::Proximity_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mm_interfaces::srv::Proximity_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mm_interfaces::srv::Proximity_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mm_interfaces::srv::Proximity_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mm_interfaces::srv::Proximity_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mm_interfaces::srv::Proximity_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mm_interfaces::srv::Proximity_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mm_interfaces::srv::Proximity_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mm_interfaces__srv__Proximity_Response
    std::shared_ptr<mm_interfaces::srv::Proximity_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mm_interfaces__srv__Proximity_Response
    std::shared_ptr<mm_interfaces::srv::Proximity_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Proximity_Response_ & other) const
  {
    if (this->distance_to != other.distance_to) {
      return false;
    }
    return true;
  }
  bool operator!=(const Proximity_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Proximity_Response_

// alias to use template instance with default allocator
using Proximity_Response =
  mm_interfaces::srv::Proximity_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace mm_interfaces

namespace mm_interfaces
{

namespace srv
{

struct Proximity
{
  using Request = mm_interfaces::srv::Proximity_Request;
  using Response = mm_interfaces::srv::Proximity_Response;
};

}  // namespace srv

}  // namespace mm_interfaces

#endif  // MM_INTERFACES__SRV__DETAIL__PROXIMITY__STRUCT_HPP_
