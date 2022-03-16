// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mm_interfaces:srv/HeadingCalculator.idl
// generated code does not contain a copyright notice

#ifndef MM_INTERFACES__SRV__DETAIL__HEADING_CALCULATOR__TRAITS_HPP_
#define MM_INTERFACES__SRV__DETAIL__HEADING_CALCULATOR__TRAITS_HPP_

#include "mm_interfaces/srv/detail/heading_calculator__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<mm_interfaces::srv::HeadingCalculator_Request>()
{
  return "mm_interfaces::srv::HeadingCalculator_Request";
}

template<>
inline const char * name<mm_interfaces::srv::HeadingCalculator_Request>()
{
  return "mm_interfaces/srv/HeadingCalculator_Request";
}

template<>
struct has_fixed_size<mm_interfaces::srv::HeadingCalculator_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<mm_interfaces::srv::HeadingCalculator_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<mm_interfaces::srv::HeadingCalculator_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<mm_interfaces::srv::HeadingCalculator_Response>()
{
  return "mm_interfaces::srv::HeadingCalculator_Response";
}

template<>
inline const char * name<mm_interfaces::srv::HeadingCalculator_Response>()
{
  return "mm_interfaces/srv/HeadingCalculator_Response";
}

template<>
struct has_fixed_size<mm_interfaces::srv::HeadingCalculator_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<mm_interfaces::srv::HeadingCalculator_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<mm_interfaces::srv::HeadingCalculator_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<mm_interfaces::srv::HeadingCalculator>()
{
  return "mm_interfaces::srv::HeadingCalculator";
}

template<>
inline const char * name<mm_interfaces::srv::HeadingCalculator>()
{
  return "mm_interfaces/srv/HeadingCalculator";
}

template<>
struct has_fixed_size<mm_interfaces::srv::HeadingCalculator>
  : std::integral_constant<
    bool,
    has_fixed_size<mm_interfaces::srv::HeadingCalculator_Request>::value &&
    has_fixed_size<mm_interfaces::srv::HeadingCalculator_Response>::value
  >
{
};

template<>
struct has_bounded_size<mm_interfaces::srv::HeadingCalculator>
  : std::integral_constant<
    bool,
    has_bounded_size<mm_interfaces::srv::HeadingCalculator_Request>::value &&
    has_bounded_size<mm_interfaces::srv::HeadingCalculator_Response>::value
  >
{
};

template<>
struct is_service<mm_interfaces::srv::HeadingCalculator>
  : std::true_type
{
};

template<>
struct is_service_request<mm_interfaces::srv::HeadingCalculator_Request>
  : std::true_type
{
};

template<>
struct is_service_response<mm_interfaces::srv::HeadingCalculator_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MM_INTERFACES__SRV__DETAIL__HEADING_CALCULATOR__TRAITS_HPP_
