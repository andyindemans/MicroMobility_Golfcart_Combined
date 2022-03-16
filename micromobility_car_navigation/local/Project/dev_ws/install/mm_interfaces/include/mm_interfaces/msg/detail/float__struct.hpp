// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mm_interfaces:msg/Float.idl
// generated code does not contain a copyright notice

#ifndef MM_INTERFACES__MSG__DETAIL__FLOAT__STRUCT_HPP_
#define MM_INTERFACES__MSG__DETAIL__FLOAT__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__mm_interfaces__msg__Float __attribute__((deprecated))
#else
# define DEPRECATED__mm_interfaces__msg__Float __declspec(deprecated)
#endif

namespace mm_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Float_
{
  using Type = Float_<ContainerAllocator>;

  explicit Float_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sensor_error = false;
      this->data = 0.0;
    }
  }

  explicit Float_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sensor_error = false;
      this->data = 0.0;
    }
  }

  // field types and members
  using _sensor_error_type =
    bool;
  _sensor_error_type sensor_error;
  using _data_type =
    double;
  _data_type data;

  // setters for named parameter idiom
  Type & set__sensor_error(
    const bool & _arg)
  {
    this->sensor_error = _arg;
    return *this;
  }
  Type & set__data(
    const double & _arg)
  {
    this->data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mm_interfaces::msg::Float_<ContainerAllocator> *;
  using ConstRawPtr =
    const mm_interfaces::msg::Float_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mm_interfaces::msg::Float_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mm_interfaces::msg::Float_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mm_interfaces::msg::Float_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mm_interfaces::msg::Float_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mm_interfaces::msg::Float_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mm_interfaces::msg::Float_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mm_interfaces::msg::Float_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mm_interfaces::msg::Float_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mm_interfaces__msg__Float
    std::shared_ptr<mm_interfaces::msg::Float_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mm_interfaces__msg__Float
    std::shared_ptr<mm_interfaces::msg::Float_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Float_ & other) const
  {
    if (this->sensor_error != other.sensor_error) {
      return false;
    }
    if (this->data != other.data) {
      return false;
    }
    return true;
  }
  bool operator!=(const Float_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Float_

// alias to use template instance with default allocator
using Float =
  mm_interfaces::msg::Float_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mm_interfaces

#endif  // MM_INTERFACES__MSG__DETAIL__FLOAT__STRUCT_HPP_
