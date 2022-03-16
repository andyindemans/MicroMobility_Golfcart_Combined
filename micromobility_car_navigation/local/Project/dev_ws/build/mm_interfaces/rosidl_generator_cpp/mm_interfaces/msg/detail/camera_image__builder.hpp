// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mm_interfaces:msg/CameraImage.idl
// generated code does not contain a copyright notice

#ifndef MM_INTERFACES__MSG__DETAIL__CAMERA_IMAGE__BUILDER_HPP_
#define MM_INTERFACES__MSG__DETAIL__CAMERA_IMAGE__BUILDER_HPP_

#include "mm_interfaces/msg/detail/camera_image__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace mm_interfaces
{

namespace msg
{

namespace builder
{

class Init_CameraImage_image
{
public:
  explicit Init_CameraImage_image(::mm_interfaces::msg::CameraImage & msg)
  : msg_(msg)
  {}
  ::mm_interfaces::msg::CameraImage image(::mm_interfaces::msg::CameraImage::_image_type arg)
  {
    msg_.image = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mm_interfaces::msg::CameraImage msg_;
};

class Init_CameraImage_sensor_error
{
public:
  Init_CameraImage_sensor_error()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CameraImage_image sensor_error(::mm_interfaces::msg::CameraImage::_sensor_error_type arg)
  {
    msg_.sensor_error = std::move(arg);
    return Init_CameraImage_image(msg_);
  }

private:
  ::mm_interfaces::msg::CameraImage msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mm_interfaces::msg::CameraImage>()
{
  return mm_interfaces::msg::builder::Init_CameraImage_sensor_error();
}

}  // namespace mm_interfaces

#endif  // MM_INTERFACES__MSG__DETAIL__CAMERA_IMAGE__BUILDER_HPP_
