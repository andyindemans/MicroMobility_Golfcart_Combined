// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mm_interfaces:srv/HeadingCalculator.idl
// generated code does not contain a copyright notice

#ifndef MM_INTERFACES__SRV__DETAIL__HEADING_CALCULATOR__STRUCT_HPP_
#define MM_INTERFACES__SRV__DETAIL__HEADING_CALCULATOR__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__mm_interfaces__srv__HeadingCalculator_Request __attribute__((deprecated))
#else
# define DEPRECATED__mm_interfaces__srv__HeadingCalculator_Request __declspec(deprecated)
#endif

namespace mm_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct HeadingCalculator_Request_
{
  using Type = HeadingCalculator_Request_<ContainerAllocator>;

  explicit HeadingCalculator_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cart_bearing = 0.0;
      this->cart_lat = 0.0;
      this->cart_long = 0.0;
      this->next_node_lat = 0.0;
      this->next_node_long = 0.0;
    }
  }

  explicit HeadingCalculator_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cart_bearing = 0.0;
      this->cart_lat = 0.0;
      this->cart_long = 0.0;
      this->next_node_lat = 0.0;
      this->next_node_long = 0.0;
    }
  }

  // field types and members
  using _cart_bearing_type =
    double;
  _cart_bearing_type cart_bearing;
  using _cart_lat_type =
    double;
  _cart_lat_type cart_lat;
  using _cart_long_type =
    double;
  _cart_long_type cart_long;
  using _next_node_lat_type =
    double;
  _next_node_lat_type next_node_lat;
  using _next_node_long_type =
    double;
  _next_node_long_type next_node_long;

  // setters for named parameter idiom
  Type & set__cart_bearing(
    const double & _arg)
  {
    this->cart_bearing = _arg;
    return *this;
  }
  Type & set__cart_lat(
    const double & _arg)
  {
    this->cart_lat = _arg;
    return *this;
  }
  Type & set__cart_long(
    const double & _arg)
  {
    this->cart_long = _arg;
    return *this;
  }
  Type & set__next_node_lat(
    const double & _arg)
  {
    this->next_node_lat = _arg;
    return *this;
  }
  Type & set__next_node_long(
    const double & _arg)
  {
    this->next_node_long = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mm_interfaces::srv::HeadingCalculator_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const mm_interfaces::srv::HeadingCalculator_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mm_interfaces::srv::HeadingCalculator_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mm_interfaces::srv::HeadingCalculator_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mm_interfaces::srv::HeadingCalculator_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mm_interfaces::srv::HeadingCalculator_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mm_interfaces::srv::HeadingCalculator_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mm_interfaces::srv::HeadingCalculator_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mm_interfaces::srv::HeadingCalculator_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mm_interfaces::srv::HeadingCalculator_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mm_interfaces__srv__HeadingCalculator_Request
    std::shared_ptr<mm_interfaces::srv::HeadingCalculator_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mm_interfaces__srv__HeadingCalculator_Request
    std::shared_ptr<mm_interfaces::srv::HeadingCalculator_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const HeadingCalculator_Request_ & other) const
  {
    if (this->cart_bearing != other.cart_bearing) {
      return false;
    }
    if (this->cart_lat != other.cart_lat) {
      return false;
    }
    if (this->cart_long != other.cart_long) {
      return false;
    }
    if (this->next_node_lat != other.next_node_lat) {
      return false;
    }
    if (this->next_node_long != other.next_node_long) {
      return false;
    }
    return true;
  }
  bool operator!=(const HeadingCalculator_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct HeadingCalculator_Request_

// alias to use template instance with default allocator
using HeadingCalculator_Request =
  mm_interfaces::srv::HeadingCalculator_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace mm_interfaces


#ifndef _WIN32
# define DEPRECATED__mm_interfaces__srv__HeadingCalculator_Response __attribute__((deprecated))
#else
# define DEPRECATED__mm_interfaces__srv__HeadingCalculator_Response __declspec(deprecated)
#endif

namespace mm_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct HeadingCalculator_Response_
{
  using Type = HeadingCalculator_Response_<ContainerAllocator>;

  explicit HeadingCalculator_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->turn_value = 0.0;
    }
  }

  explicit HeadingCalculator_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->turn_value = 0.0;
    }
  }

  // field types and members
  using _turn_value_type =
    double;
  _turn_value_type turn_value;

  // setters for named parameter idiom
  Type & set__turn_value(
    const double & _arg)
  {
    this->turn_value = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mm_interfaces::srv::HeadingCalculator_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const mm_interfaces::srv::HeadingCalculator_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mm_interfaces::srv::HeadingCalculator_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mm_interfaces::srv::HeadingCalculator_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mm_interfaces::srv::HeadingCalculator_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mm_interfaces::srv::HeadingCalculator_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mm_interfaces::srv::HeadingCalculator_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mm_interfaces::srv::HeadingCalculator_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mm_interfaces::srv::HeadingCalculator_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mm_interfaces::srv::HeadingCalculator_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mm_interfaces__srv__HeadingCalculator_Response
    std::shared_ptr<mm_interfaces::srv::HeadingCalculator_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mm_interfaces__srv__HeadingCalculator_Response
    std::shared_ptr<mm_interfaces::srv::HeadingCalculator_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const HeadingCalculator_Response_ & other) const
  {
    if (this->turn_value != other.turn_value) {
      return false;
    }
    return true;
  }
  bool operator!=(const HeadingCalculator_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct HeadingCalculator_Response_

// alias to use template instance with default allocator
using HeadingCalculator_Response =
  mm_interfaces::srv::HeadingCalculator_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace mm_interfaces

namespace mm_interfaces
{

namespace srv
{

struct HeadingCalculator
{
  using Request = mm_interfaces::srv::HeadingCalculator_Request;
  using Response = mm_interfaces::srv::HeadingCalculator_Response;
};

}  // namespace srv

}  // namespace mm_interfaces

#endif  // MM_INTERFACES__SRV__DETAIL__HEADING_CALCULATOR__STRUCT_HPP_
