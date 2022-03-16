// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mm_interfaces:msg/CurrentNextLocation.idl
// generated code does not contain a copyright notice

#ifndef MM_INTERFACES__MSG__DETAIL__CURRENT_NEXT_LOCATION__TRAITS_HPP_
#define MM_INTERFACES__MSG__DETAIL__CURRENT_NEXT_LOCATION__TRAITS_HPP_

#include "mm_interfaces/msg/detail/current_next_location__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'current_position'
// Member 'next_position'
#include "mm_interfaces/msg/detail/coordinate_msg__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<mm_interfaces::msg::CurrentNextLocation>()
{
  return "mm_interfaces::msg::CurrentNextLocation";
}

template<>
inline const char * name<mm_interfaces::msg::CurrentNextLocation>()
{
  return "mm_interfaces/msg/CurrentNextLocation";
}

template<>
struct has_fixed_size<mm_interfaces::msg::CurrentNextLocation>
  : std::integral_constant<bool, has_fixed_size<mm_interfaces::msg::CoordinateMsg>::value> {};

template<>
struct has_bounded_size<mm_interfaces::msg::CurrentNextLocation>
  : std::integral_constant<bool, has_bounded_size<mm_interfaces::msg::CoordinateMsg>::value> {};

template<>
struct is_message<mm_interfaces::msg::CurrentNextLocation>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MM_INTERFACES__MSG__DETAIL__CURRENT_NEXT_LOCATION__TRAITS_HPP_
