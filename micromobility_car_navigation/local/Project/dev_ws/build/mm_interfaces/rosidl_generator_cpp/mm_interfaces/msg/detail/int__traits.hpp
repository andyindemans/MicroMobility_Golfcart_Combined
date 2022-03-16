// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mm_interfaces:msg/Int.idl
// generated code does not contain a copyright notice

#ifndef MM_INTERFACES__MSG__DETAIL__INT__TRAITS_HPP_
#define MM_INTERFACES__MSG__DETAIL__INT__TRAITS_HPP_

#include "mm_interfaces/msg/detail/int__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<mm_interfaces::msg::Int>()
{
  return "mm_interfaces::msg::Int";
}

template<>
inline const char * name<mm_interfaces::msg::Int>()
{
  return "mm_interfaces/msg/Int";
}

template<>
struct has_fixed_size<mm_interfaces::msg::Int>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<mm_interfaces::msg::Int>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<mm_interfaces::msg::Int>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MM_INTERFACES__MSG__DETAIL__INT__TRAITS_HPP_
