// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mm_interfaces:msg/CurrentNextLocation.idl
// generated code does not contain a copyright notice

#ifndef MM_INTERFACES__MSG__DETAIL__CURRENT_NEXT_LOCATION__STRUCT_HPP_
#define MM_INTERFACES__MSG__DETAIL__CURRENT_NEXT_LOCATION__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'current_position'
// Member 'next_position'
#include "mm_interfaces/msg/detail/coordinate_msg__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mm_interfaces__msg__CurrentNextLocation __attribute__((deprecated))
#else
# define DEPRECATED__mm_interfaces__msg__CurrentNextLocation __declspec(deprecated)
#endif

namespace mm_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CurrentNextLocation_
{
  using Type = CurrentNextLocation_<ContainerAllocator>;

  explicit CurrentNextLocation_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : current_position(_init),
    next_position(_init)
  {
    (void)_init;
  }

  explicit CurrentNextLocation_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : current_position(_alloc, _init),
    next_position(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _current_position_type =
    mm_interfaces::msg::CoordinateMsg_<ContainerAllocator>;
  _current_position_type current_position;
  using _next_position_type =
    mm_interfaces::msg::CoordinateMsg_<ContainerAllocator>;
  _next_position_type next_position;

  // setters for named parameter idiom
  Type & set__current_position(
    const mm_interfaces::msg::CoordinateMsg_<ContainerAllocator> & _arg)
  {
    this->current_position = _arg;
    return *this;
  }
  Type & set__next_position(
    const mm_interfaces::msg::CoordinateMsg_<ContainerAllocator> & _arg)
  {
    this->next_position = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mm_interfaces::msg::CurrentNextLocation_<ContainerAllocator> *;
  using ConstRawPtr =
    const mm_interfaces::msg::CurrentNextLocation_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mm_interfaces::msg::CurrentNextLocation_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mm_interfaces::msg::CurrentNextLocation_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mm_interfaces::msg::CurrentNextLocation_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mm_interfaces::msg::CurrentNextLocation_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mm_interfaces::msg::CurrentNextLocation_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mm_interfaces::msg::CurrentNextLocation_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mm_interfaces::msg::CurrentNextLocation_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mm_interfaces::msg::CurrentNextLocation_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mm_interfaces__msg__CurrentNextLocation
    std::shared_ptr<mm_interfaces::msg::CurrentNextLocation_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mm_interfaces__msg__CurrentNextLocation
    std::shared_ptr<mm_interfaces::msg::CurrentNextLocation_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CurrentNextLocation_ & other) const
  {
    if (this->current_position != other.current_position) {
      return false;
    }
    if (this->next_position != other.next_position) {
      return false;
    }
    return true;
  }
  bool operator!=(const CurrentNextLocation_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CurrentNextLocation_

// alias to use template instance with default allocator
using CurrentNextLocation =
  mm_interfaces::msg::CurrentNextLocation_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mm_interfaces

#endif  // MM_INTERFACES__MSG__DETAIL__CURRENT_NEXT_LOCATION__STRUCT_HPP_
