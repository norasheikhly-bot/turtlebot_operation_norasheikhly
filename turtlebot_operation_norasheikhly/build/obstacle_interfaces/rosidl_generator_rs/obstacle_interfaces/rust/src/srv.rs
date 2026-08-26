#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};




// Corresponds to obstacle_interfaces__srv__SetDirection_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetDirection_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub direction: std::string::String,

}



impl Default for SetDirection_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetDirection_Request::default())
  }
}

impl rosidl_runtime_rs::Message for SetDirection_Request {
  type RmwMsg = super::srv::rmw::SetDirection_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        direction: msg.direction.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        direction: msg.direction.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      direction: msg.direction.to_string(),
    }
  }
}


// Corresponds to obstacle_interfaces__srv__SetDirection_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetDirection_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: std::string::String,

}



impl Default for SetDirection_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetDirection_Response::default())
  }
}

impl rosidl_runtime_rs::Message for SetDirection_Response {
  type RmwMsg = super::srv::rmw::SetDirection_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        message: msg.message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        message: msg.message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      message: msg.message.to_string(),
    }
  }
}






#[link(name = "obstacle_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__obstacle_interfaces__srv__SetDirection() -> *const std::ffi::c_void;
}

// Corresponds to obstacle_interfaces__srv__SetDirection
#[allow(missing_docs, non_camel_case_types)]
pub struct SetDirection;

impl rosidl_runtime_rs::Service for SetDirection {
    type Request = SetDirection_Request;
    type Response = SetDirection_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__obstacle_interfaces__srv__SetDirection() }
    }
}


