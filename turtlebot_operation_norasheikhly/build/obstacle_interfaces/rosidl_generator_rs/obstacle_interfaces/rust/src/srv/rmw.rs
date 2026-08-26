#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



#[link(name = "obstacle_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__obstacle_interfaces__srv__SetDirection_Request() -> *const std::ffi::c_void;
}

#[link(name = "obstacle_interfaces__rosidl_generator_c")]
extern "C" {
    fn obstacle_interfaces__srv__SetDirection_Request__init(msg: *mut SetDirection_Request) -> bool;
    fn obstacle_interfaces__srv__SetDirection_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetDirection_Request>, size: usize) -> bool;
    fn obstacle_interfaces__srv__SetDirection_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetDirection_Request>);
    fn obstacle_interfaces__srv__SetDirection_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetDirection_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SetDirection_Request>) -> bool;
}

// Corresponds to obstacle_interfaces__srv__SetDirection_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetDirection_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub direction: rosidl_runtime_rs::String,

}



impl Default for SetDirection_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !obstacle_interfaces__srv__SetDirection_Request__init(&mut msg as *mut _) {
        panic!("Call to obstacle_interfaces__srv__SetDirection_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetDirection_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { obstacle_interfaces__srv__SetDirection_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { obstacle_interfaces__srv__SetDirection_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { obstacle_interfaces__srv__SetDirection_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetDirection_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetDirection_Request where Self: Sized {
  const TYPE_NAME: &'static str = "obstacle_interfaces/srv/SetDirection_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__obstacle_interfaces__srv__SetDirection_Request() }
  }
}


#[link(name = "obstacle_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__obstacle_interfaces__srv__SetDirection_Response() -> *const std::ffi::c_void;
}

#[link(name = "obstacle_interfaces__rosidl_generator_c")]
extern "C" {
    fn obstacle_interfaces__srv__SetDirection_Response__init(msg: *mut SetDirection_Response) -> bool;
    fn obstacle_interfaces__srv__SetDirection_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetDirection_Response>, size: usize) -> bool;
    fn obstacle_interfaces__srv__SetDirection_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetDirection_Response>);
    fn obstacle_interfaces__srv__SetDirection_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetDirection_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SetDirection_Response>) -> bool;
}

// Corresponds to obstacle_interfaces__srv__SetDirection_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetDirection_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,

}



impl Default for SetDirection_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !obstacle_interfaces__srv__SetDirection_Response__init(&mut msg as *mut _) {
        panic!("Call to obstacle_interfaces__srv__SetDirection_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetDirection_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { obstacle_interfaces__srv__SetDirection_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { obstacle_interfaces__srv__SetDirection_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { obstacle_interfaces__srv__SetDirection_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetDirection_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetDirection_Response where Self: Sized {
  const TYPE_NAME: &'static str = "obstacle_interfaces/srv/SetDirection_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__obstacle_interfaces__srv__SetDirection_Response() }
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


