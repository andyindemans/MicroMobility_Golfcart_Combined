// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mm_interfaces:msg/MmSensorMsg.idl
// generated code does not contain a copyright notice

#ifndef MM_INTERFACES__MSG__DETAIL__MM_SENSOR_MSG__TRAITS_HPP_
#define MM_INTERFACES__MSG__DETAIL__MM_SENSOR_MSG__TRAITS_HPP_

#include "mm_interfaces/msg/detail/mm_sensor_msg__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'image'
// Member 'depth_image'
#include "sensor_msgs/msg/detail/image__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<mm_interfaces::msg::MmSensorMsg>()
{
  return "mm_interfaces::msg::MmSensorMsg";
}

template<>
inline const char * name<mm_interfaces::msg::MmSensorMsg>()
{
  return "mm_interfaces/msg/MmSensorMsg";
}

template<>
struct has_fixed_size<mm_interfaces::msg::MmSensorMsg>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mm_interfaces::msg::MmSensorMsg>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mm_interfaces::msg::MmSensorMsg>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MM_INTERFACES__MSG__DETAIL__MM_SENSOR_MSG__TRAITS_HPP_
