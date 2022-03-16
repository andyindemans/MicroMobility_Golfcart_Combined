// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mm_interfaces:srv/Pathfinding.idl
// generated code does not contain a copyright notice

#ifndef MM_INTERFACES__SRV__DETAIL__PATHFINDING__TRAITS_HPP_
#define MM_INTERFACES__SRV__DETAIL__PATHFINDING__TRAITS_HPP_

#include "mm_interfaces/srv/detail/pathfinding__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<mm_interfaces::srv::Pathfinding_Request>()
{
  return "mm_interfaces::srv::Pathfinding_Request";
}

template<>
inline const char * name<mm_interfaces::srv::Pathfinding_Request>()
{
  return "mm_interfaces/srv/Pathfinding_Request";
}

template<>
struct has_fixed_size<mm_interfaces::srv::Pathfinding_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<mm_interfaces::srv::Pathfinding_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<mm_interfaces::srv::Pathfinding_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<mm_interfaces::srv::Pathfinding_Response>()
{
  return "mm_interfaces::srv::Pathfinding_Response";
}

template<>
inline const char * name<mm_interfaces::srv::Pathfinding_Response>()
{
  return "mm_interfaces/srv/Pathfinding_Response";
}

template<>
struct has_fixed_size<mm_interfaces::srv::Pathfinding_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mm_interfaces::srv::Pathfinding_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mm_interfaces::srv::Pathfinding_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<mm_interfaces::srv::Pathfinding>()
{
  return "mm_interfaces::srv::Pathfinding";
}

template<>
inline const char * name<mm_interfaces::srv::Pathfinding>()
{
  return "mm_interfaces/srv/Pathfinding";
}

template<>
struct has_fixed_size<mm_interfaces::srv::Pathfinding>
  : std::integral_constant<
    bool,
    has_fixed_size<mm_interfaces::srv::Pathfinding_Request>::value &&
    has_fixed_size<mm_interfaces::srv::Pathfinding_Response>::value
  >
{
};

template<>
struct has_bounded_size<mm_interfaces::srv::Pathfinding>
  : std::integral_constant<
    bool,
    has_bounded_size<mm_interfaces::srv::Pathfinding_Request>::value &&
    has_bounded_size<mm_interfaces::srv::Pathfinding_Response>::value
  >
{
};

template<>
struct is_service<mm_interfaces::srv::Pathfinding>
  : std::true_type
{
};

template<>
struct is_service_request<mm_interfaces::srv::Pathfinding_Request>
  : std::true_type
{
};

template<>
struct is_service_response<mm_interfaces::srv::Pathfinding_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MM_INTERFACES__SRV__DETAIL__PATHFINDING__TRAITS_HPP_
