// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mm_interfaces:msg/CarInstructions.idl
// generated code does not contain a copyright notice

#ifndef MM_INTERFACES__MSG__DETAIL__CAR_INSTRUCTIONS__STRUCT_HPP_
#define MM_INTERFACES__MSG__DETAIL__CAR_INSTRUCTIONS__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__mm_interfaces__msg__CarInstructions __attribute__((deprecated))
#else
# define DEPRECATED__mm_interfaces__msg__CarInstructions __declspec(deprecated)
#endif

namespace mm_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CarInstructions_
{
  using Type = CarInstructions_<ContainerAllocator>;

  explicit CarInstructions_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->steering_range[0] = 0.0f;
      this->steering_range[1] = 360.0f;
      this->throttle_range[0] = 0l;
      this->throttle_range[1] = 100l;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->steering = 0.0f;
      std::fill<typename std::array<float, 2>::iterator, float>(this->steering_range.begin(), this->steering_range.end(), 0.0f);
      this->throttle = 0l;
      std::fill<typename std::array<int32_t, 2>::iterator, int32_t>(this->throttle_range.begin(), this->throttle_range.end(), 0l);
    }
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->steering = 0.0f;
      this->throttle = 0l;
    }
  }

  explicit CarInstructions_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : steering_range(_alloc),
    throttle_range(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->steering_range[0] = 0.0f;
      this->steering_range[1] = 360.0f;
      this->throttle_range[0] = 0l;
      this->throttle_range[1] = 100l;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->steering = 0.0f;
      std::fill<typename std::array<float, 2>::iterator, float>(this->steering_range.begin(), this->steering_range.end(), 0.0f);
      this->throttle = 0l;
      std::fill<typename std::array<int32_t, 2>::iterator, int32_t>(this->throttle_range.begin(), this->throttle_range.end(), 0l);
    }
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->steering = 0.0f;
      this->throttle = 0l;
    }
  }

  // field types and members
  using _steering_type =
    float;
  _steering_type steering;
  using _steering_range_type =
    std::array<float, 2>;
  _steering_range_type steering_range;
  using _throttle_type =
    int32_t;
  _throttle_type throttle;
  using _throttle_range_type =
    std::array<int32_t, 2>;
  _throttle_range_type throttle_range;

  // setters for named parameter idiom
  Type & set__steering(
    const float & _arg)
  {
    this->steering = _arg;
    return *this;
  }
  Type & set__steering_range(
    const std::array<float, 2> & _arg)
  {
    this->steering_range = _arg;
    return *this;
  }
  Type & set__throttle(
    const int32_t & _arg)
  {
    this->throttle = _arg;
    return *this;
  }
  Type & set__throttle_range(
    const std::array<int32_t, 2> & _arg)
  {
    this->throttle_range = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mm_interfaces::msg::CarInstructions_<ContainerAllocator> *;
  using ConstRawPtr =
    const mm_interfaces::msg::CarInstructions_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mm_interfaces::msg::CarInstructions_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mm_interfaces::msg::CarInstructions_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mm_interfaces::msg::CarInstructions_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mm_interfaces::msg::CarInstructions_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mm_interfaces::msg::CarInstructions_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mm_interfaces::msg::CarInstructions_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mm_interfaces::msg::CarInstructions_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mm_interfaces::msg::CarInstructions_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mm_interfaces__msg__CarInstructions
    std::shared_ptr<mm_interfaces::msg::CarInstructions_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mm_interfaces__msg__CarInstructions
    std::shared_ptr<mm_interfaces::msg::CarInstructions_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CarInstructions_ & other) const
  {
    if (this->steering != other.steering) {
      return false;
    }
    if (this->steering_range != other.steering_range) {
      return false;
    }
    if (this->throttle != other.throttle) {
      return false;
    }
    if (this->throttle_range != other.throttle_range) {
      return false;
    }
    return true;
  }
  bool operator!=(const CarInstructions_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CarInstructions_

// alias to use template instance with default allocator
using CarInstructions =
  mm_interfaces::msg::CarInstructions_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mm_interfaces

#endif  // MM_INTERFACES__MSG__DETAIL__CAR_INSTRUCTIONS__STRUCT_HPP_
