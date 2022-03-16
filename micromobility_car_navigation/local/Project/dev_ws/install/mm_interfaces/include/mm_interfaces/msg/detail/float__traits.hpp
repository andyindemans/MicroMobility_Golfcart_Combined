// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mm_interfaces:msg/Float.idl
// generated code does not contain a copyright notice

#ifndef MM_INTERFACES__MSG__DETAIL__FLOAT__TRAITS_HPP_
#define MM_INTERFACES__MSG__DETAIL__FLOAT__TRAITS_HPP_

#include "mm_interfaces/msg/detail/float__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<mm_interfaces::msg::Float>()
{
  return "mm_interfaces::msg::Float";
}

template<>
inline const char * name<mm_interfaces::msg::Float>()
{
  return "mm_interfaces/msg/Float";
}

template<>
struct has_fixed_size<mm_interfaces::msg::Float>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<mm_interfaces::msg::Float>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<mm_interfaces::msg::Float>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MM_INTERFACES__MSG__DETAIL__FLOAT__TRAITS_HPP_
