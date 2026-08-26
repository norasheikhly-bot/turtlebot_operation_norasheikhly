// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from obstacle_interfaces:srv/SetDirection.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "obstacle_interfaces/srv/set_direction.hpp"


#ifndef OBSTACLE_INTERFACES__SRV__DETAIL__SET_DIRECTION__BUILDER_HPP_
#define OBSTACLE_INTERFACES__SRV__DETAIL__SET_DIRECTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "obstacle_interfaces/srv/detail/set_direction__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace obstacle_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetDirection_Request_direction
{
public:
  Init_SetDirection_Request_direction()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::obstacle_interfaces::srv::SetDirection_Request direction(::obstacle_interfaces::srv::SetDirection_Request::_direction_type arg)
  {
    msg_.direction = std::move(arg);
    return std::move(msg_);
  }

private:
  ::obstacle_interfaces::srv::SetDirection_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::obstacle_interfaces::srv::SetDirection_Request>()
{
  return obstacle_interfaces::srv::builder::Init_SetDirection_Request_direction();
}

}  // namespace obstacle_interfaces


namespace obstacle_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetDirection_Response_message
{
public:
  explicit Init_SetDirection_Response_message(::obstacle_interfaces::srv::SetDirection_Response & msg)
  : msg_(msg)
  {}
  ::obstacle_interfaces::srv::SetDirection_Response message(::obstacle_interfaces::srv::SetDirection_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::obstacle_interfaces::srv::SetDirection_Response msg_;
};

class Init_SetDirection_Response_success
{
public:
  Init_SetDirection_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetDirection_Response_message success(::obstacle_interfaces::srv::SetDirection_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_SetDirection_Response_message(msg_);
  }

private:
  ::obstacle_interfaces::srv::SetDirection_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::obstacle_interfaces::srv::SetDirection_Response>()
{
  return obstacle_interfaces::srv::builder::Init_SetDirection_Response_success();
}

}  // namespace obstacle_interfaces


namespace obstacle_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetDirection_Event_response
{
public:
  explicit Init_SetDirection_Event_response(::obstacle_interfaces::srv::SetDirection_Event & msg)
  : msg_(msg)
  {}
  ::obstacle_interfaces::srv::SetDirection_Event response(::obstacle_interfaces::srv::SetDirection_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::obstacle_interfaces::srv::SetDirection_Event msg_;
};

class Init_SetDirection_Event_request
{
public:
  explicit Init_SetDirection_Event_request(::obstacle_interfaces::srv::SetDirection_Event & msg)
  : msg_(msg)
  {}
  Init_SetDirection_Event_response request(::obstacle_interfaces::srv::SetDirection_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_SetDirection_Event_response(msg_);
  }

private:
  ::obstacle_interfaces::srv::SetDirection_Event msg_;
};

class Init_SetDirection_Event_info
{
public:
  Init_SetDirection_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetDirection_Event_request info(::obstacle_interfaces::srv::SetDirection_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_SetDirection_Event_request(msg_);
  }

private:
  ::obstacle_interfaces::srv::SetDirection_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::obstacle_interfaces::srv::SetDirection_Event>()
{
  return obstacle_interfaces::srv::builder::Init_SetDirection_Event_info();
}

}  // namespace obstacle_interfaces

#endif  // OBSTACLE_INTERFACES__SRV__DETAIL__SET_DIRECTION__BUILDER_HPP_
