// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mm_interfaces:msg/CameraImage.idl
// generated code does not contain a copyright notice

#ifndef MM_INTERFACES__MSG__DETAIL__CAMERA_IMAGE__TRAITS_HPP_
#define MM_INTERFACES__MSG__DETAIL__CAMERA_IMAGE__TRAITS_HPP_

#include "mm_interfaces/msg/detail/camera_image__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'image'
#include "sensor_msgs/msg/detail/image__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<mm_interfaces::msg::CameraImage>()
{
  return "mm_interfaces::msg::CameraImage";
}

template<>
inline const char * name<mm_interfaces::msg::CameraImage>()
{
  return "mm_interfaces/msg/CameraImage";
}

template<>
struct has_fixed_size<mm_interfaces::msg::CameraImage>
  : std::integral_constant<bool, has_fixed_size<sensor_msgs::msg::Image>::value> {};

template<>
struct has_bounded_size<mm_interfaces::msg::CameraImage>
  : std::integral_constant<bool, has_bounded_size<sensor_msgs::msg::Image>::value> {};

template<>
struct is_message<mm_interfaces::msg::CameraImage>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MM_INTERFACES__MSG__DETAIL__CAMERA_IMAGE__TRAITS_HPP_
