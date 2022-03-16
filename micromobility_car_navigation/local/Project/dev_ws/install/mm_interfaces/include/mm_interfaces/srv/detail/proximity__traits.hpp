// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mm_interfaces:srv/Proximity.idl
// generated code does not contain a copyright notice

#ifndef MM_INTERFACES__SRV__DETAIL__PROXIMITY__TRAITS_HPP_
#define MM_INTERFACES__SRV__DETAIL__PROXIMITY__TRAITS_HPP_

#include "mm_interfaces/srv/detail/proximity__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'current_position'
// Member 'next_node'
#include "mm_interfaces/msg/detail/coordinate_msg__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<mm_interfaces::srv::Proximity_Request>()
{
  return "mm_interfaces::srv::Proximity_Request";
}

template<>
inline const char * name<mm_interfaces::srv::Proximity_Request>()
{
  return "mm_interfaces/srv/Proximity_Request";
}

template<>
struct has_fixed_size<mm_interfaces::srv::Proximity_Request>
  : std::integral_constant<bool, has_fixed_size<mm_interfaces::msg::CoordinateMsg>::value> {};

template<>
struct has_bounded_size<mm_interfaces::srv::Proximity_Request>
  : std::integral_constant<bool, has_bounded_size<mm_interfaces::msg::CoordinateMsg>::value> {};

template<>
struct is_message<mm_interfaces::srv::Proximity_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<mm_interfaces::srv::Proximity_Response>()
{
  return "mm_interfaces::srv::Proximity_Response";
}

template<>
inline const char * name<mm_interfaces::srv::Proximity_Response>()
{
  return "mm_interfaces/srv/Proximity_Response";
}

template<>
struct has_fixed_size<mm_interfaces::srv::Proximity_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<mm_interfaces::srv::Proximity_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<mm_interfaces::srv::Proximity_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<mm_interfaces::srv::Proximity>()
{
  return "mm_interfaces::srv::Proximity";
}

template<>
inline const char * name<mm_interfaces::srv::Proximity>()
{
  return "mm_interfaces/srv/Proximity";
}

template<>
struct has_fixed_size<mm_interfaces::srv::Proximity>
  : std::integral_constant<
    bool,
    has_fixed_size<mm_interfaces::srv::Proximity_Request>::value &&
    has_fixed_size<mm_interfaces::srv::Proximity_Response>::value
  >
{
};

template<>
struct has_bounded_size<mm_interfaces::srv::Proximity>
  : std::integral_constant<
    bool,
    has_bounded_size<mm_interfaces::srv::Proximity_Request>::value &&
    has_bounded_size<mm_interfaces::srv::Proximity_Response>::value
  >
{
};

template<>
struct is_service<mm_interfaces::srv::Proximity>
  : std::true_type
{
};

template<>
struct is_service_request<mm_interfaces::srv::Proximity_Request>
  : std::true_type
{
};

template<>
struct is_service_response<mm_interfaces::srv::Proximity_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MM_INTERFACES__SRV__DETAIL__PROXIMITY__TRAITS_HPP_
