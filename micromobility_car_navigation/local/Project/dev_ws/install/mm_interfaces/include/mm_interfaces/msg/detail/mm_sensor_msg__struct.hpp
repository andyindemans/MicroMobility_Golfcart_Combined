// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mm_interfaces:msg/MmSensorMsg.idl
// generated code does not contain a copyright notice

#ifndef MM_INTERFACES__MSG__DETAIL__MM_SENSOR_MSG__STRUCT_HPP_
#define MM_INTERFACES__MSG__DETAIL__MM_SENSOR_MSG__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'image'
// Member 'depth_image'
#include "sensor_msgs/msg/detail/image__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mm_interfaces__msg__MmSensorMsg __attribute__((deprecated))
#else
# define DEPRECATED__mm_interfaces__msg__MmSensorMsg __declspec(deprecated)
#endif

namespace mm_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MmSensorMsg_
{
  using Type = MmSensorMsg_<ContainerAllocator>;

  explicit MmSensorMsg_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : image(_init),
    depth_image(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->steer = 0.0;
      this->gas = 0ll;
      this->brake = 0ll;
    }
  }

  explicit MmSensorMsg_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : image(_alloc, _init),
    depth_image(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->steer = 0.0;
      this->gas = 0ll;
      this->brake = 0ll;
    }
  }

  // field types and members
  using _steer_type =
    double;
  _steer_type steer;
  using _gas_type =
    int64_t;
  _gas_type gas;
  using _brake_type =
    int64_t;
  _brake_type brake;
  using _image_type =
    sensor_msgs::msg::Image_<ContainerAllocator>;
  _image_type image;
  using _depth_image_type =
    sensor_msgs::msg::Image_<ContainerAllocator>;
  _depth_image_type depth_image;
  using _error_sensors_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other>;
  _error_sensors_type error_sensors;

  // setters for named parameter idiom
  Type & set__steer(
    const double & _arg)
  {
    this->steer = _arg;
    return *this;
  }
  Type & set__gas(
    const int64_t & _arg)
  {
    this->gas = _arg;
    return *this;
  }
  Type & set__brake(
    const int64_t & _arg)
  {
    this->brake = _arg;
    return *this;
  }
  Type & set__image(
    const sensor_msgs::msg::Image_<ContainerAllocator> & _arg)
  {
    this->image = _arg;
    return *this;
  }
  Type & set__depth_image(
    const sensor_msgs::msg::Image_<ContainerAllocator> & _arg)
  {
    this->depth_image = _arg;
    return *this;
  }
  Type & set__error_sensors(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other> & _arg)
  {
    this->error_sensors = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mm_interfaces::msg::MmSensorMsg_<ContainerAllocator> *;
  using ConstRawPtr =
    const mm_interfaces::msg::MmSensorMsg_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mm_interfaces::msg::MmSensorMsg_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mm_interfaces::msg::MmSensorMsg_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mm_interfaces::msg::MmSensorMsg_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mm_interfaces::msg::MmSensorMsg_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mm_interfaces::msg::MmSensorMsg_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mm_interfaces::msg::MmSensorMsg_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mm_interfaces::msg::MmSensorMsg_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mm_interfaces::msg::MmSensorMsg_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mm_interfaces__msg__MmSensorMsg
    std::shared_ptr<mm_interfaces::msg::MmSensorMsg_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mm_interfaces__msg__MmSensorMsg
    std::shared_ptr<mm_interfaces::msg::MmSensorMsg_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MmSensorMsg_ & other) const
  {
    if (this->steer != other.steer) {
      return false;
    }
    if (this->gas != other.gas) {
      return false;
    }
    if (this->brake != other.brake) {
      return false;
    }
    if (this->image != other.image) {
      return false;
    }
    if (this->depth_image != other.depth_image) {
      return false;
    }
    if (this->error_sensors != other.error_sensors) {
      return false;
    }
    return true;
  }
  bool operator!=(const MmSensorMsg_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MmSensorMsg_

// alias to use template instance with default allocator
using MmSensorMsg =
  mm_interfaces::msg::MmSensorMsg_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mm_interfaces

#endif  // MM_INTERFACES__MSG__DETAIL__MM_SENSOR_MSG__STRUCT_HPP_
