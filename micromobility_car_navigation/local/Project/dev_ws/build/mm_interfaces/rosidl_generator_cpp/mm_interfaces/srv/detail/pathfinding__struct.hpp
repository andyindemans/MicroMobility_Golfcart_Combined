// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mm_interfaces:srv/Pathfinding.idl
// generated code does not contain a copyright notice

#ifndef MM_INTERFACES__SRV__DETAIL__PATHFINDING__STRUCT_HPP_
#define MM_INTERFACES__SRV__DETAIL__PATHFINDING__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__mm_interfaces__srv__Pathfinding_Request __attribute__((deprecated))
#else
# define DEPRECATED__mm_interfaces__srv__Pathfinding_Request __declspec(deprecated)
#endif

namespace mm_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Pathfinding_Request_
{
  using Type = Pathfinding_Request_<ContainerAllocator>;

  explicit Pathfinding_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->current_long = 0.0;
      this->current_lat = 0.0;
      this->end_node_id = 0ll;
    }
  }

  explicit Pathfinding_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->current_long = 0.0;
      this->current_lat = 0.0;
      this->end_node_id = 0ll;
    }
  }

  // field types and members
  using _current_long_type =
    double;
  _current_long_type current_long;
  using _current_lat_type =
    double;
  _current_lat_type current_lat;
  using _end_node_id_type =
    int64_t;
  _end_node_id_type end_node_id;

  // setters for named parameter idiom
  Type & set__current_long(
    const double & _arg)
  {
    this->current_long = _arg;
    return *this;
  }
  Type & set__current_lat(
    const double & _arg)
  {
    this->current_lat = _arg;
    return *this;
  }
  Type & set__end_node_id(
    const int64_t & _arg)
  {
    this->end_node_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mm_interfaces::srv::Pathfinding_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const mm_interfaces::srv::Pathfinding_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mm_interfaces::srv::Pathfinding_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mm_interfaces::srv::Pathfinding_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mm_interfaces::srv::Pathfinding_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mm_interfaces::srv::Pathfinding_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mm_interfaces::srv::Pathfinding_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mm_interfaces::srv::Pathfinding_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mm_interfaces::srv::Pathfinding_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mm_interfaces::srv::Pathfinding_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mm_interfaces__srv__Pathfinding_Request
    std::shared_ptr<mm_interfaces::srv::Pathfinding_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mm_interfaces__srv__Pathfinding_Request
    std::shared_ptr<mm_interfaces::srv::Pathfinding_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Pathfinding_Request_ & other) const
  {
    if (this->current_long != other.current_long) {
      return false;
    }
    if (this->current_lat != other.current_lat) {
      return false;
    }
    if (this->end_node_id != other.end_node_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const Pathfinding_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Pathfinding_Request_

// alias to use template instance with default allocator
using Pathfinding_Request =
  mm_interfaces::srv::Pathfinding_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace mm_interfaces


// Include directives for member types
// Member 'path'
#include "mm_interfaces/msg/detail/coordinate_msg__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mm_interfaces__srv__Pathfinding_Response __attribute__((deprecated))
#else
# define DEPRECATED__mm_interfaces__srv__Pathfinding_Response __declspec(deprecated)
#endif

namespace mm_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Pathfinding_Response_
{
  using Type = Pathfinding_Response_<ContainerAllocator>;

  explicit Pathfinding_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit Pathfinding_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _path_type =
    std::vector<mm_interfaces::msg::CoordinateMsg_<ContainerAllocator>, typename ContainerAllocator::template rebind<mm_interfaces::msg::CoordinateMsg_<ContainerAllocator>>::other>;
  _path_type path;

  // setters for named parameter idiom
  Type & set__path(
    const std::vector<mm_interfaces::msg::CoordinateMsg_<ContainerAllocator>, typename ContainerAllocator::template rebind<mm_interfaces::msg::CoordinateMsg_<ContainerAllocator>>::other> & _arg)
  {
    this->path = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mm_interfaces::srv::Pathfinding_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const mm_interfaces::srv::Pathfinding_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mm_interfaces::srv::Pathfinding_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mm_interfaces::srv::Pathfinding_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mm_interfaces::srv::Pathfinding_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mm_interfaces::srv::Pathfinding_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mm_interfaces::srv::Pathfinding_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mm_interfaces::srv::Pathfinding_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mm_interfaces::srv::Pathfinding_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mm_interfaces::srv::Pathfinding_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mm_interfaces__srv__Pathfinding_Response
    std::shared_ptr<mm_interfaces::srv::Pathfinding_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mm_interfaces__srv__Pathfinding_Response
    std::shared_ptr<mm_interfaces::srv::Pathfinding_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Pathfinding_Response_ & other) const
  {
    if (this->path != other.path) {
      return false;
    }
    return true;
  }
  bool operator!=(const Pathfinding_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Pathfinding_Response_

// alias to use template instance with default allocator
using Pathfinding_Response =
  mm_interfaces::srv::Pathfinding_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace mm_interfaces

namespace mm_interfaces
{

namespace srv
{

struct Pathfinding
{
  using Request = mm_interfaces::srv::Pathfinding_Request;
  using Response = mm_interfaces::srv::Pathfinding_Response;
};

}  // namespace srv

}  // namespace mm_interfaces

#endif  // MM_INTERFACES__SRV__DETAIL__PATHFINDING__STRUCT_HPP_
