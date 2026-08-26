// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from obstacle_interfaces:srv/SetDirection.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "obstacle_interfaces/srv/set_direction.h"


#ifndef OBSTACLE_INTERFACES__SRV__DETAIL__SET_DIRECTION__FUNCTIONS_H_
#define OBSTACLE_INTERFACES__SRV__DETAIL__SET_DIRECTION__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_runtime_c/type_description/type_description__struct.h"
#include "rosidl_runtime_c/type_description/type_source__struct.h"
#include "rosidl_runtime_c/type_hash.h"
#include "rosidl_runtime_c/visibility_control.h"
#include "obstacle_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "obstacle_interfaces/srv/detail/set_direction__struct.h"

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_obstacle_interfaces
const rosidl_type_hash_t *
obstacle_interfaces__srv__SetDirection__get_type_hash(
  const rosidl_service_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_obstacle_interfaces
const rosidl_runtime_c__type_description__TypeDescription *
obstacle_interfaces__srv__SetDirection__get_type_description(
  const rosidl_service_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_obstacle_interfaces
const rosidl_runtime_c__type_description__TypeSource *
obstacle_interfaces__srv__SetDirection__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_obstacle_interfaces
const rosidl_runtime_c__type_description__TypeSource__Sequence *
obstacle_interfaces__srv__SetDirection__get_type_description_sources(
  const rosidl_service_type_support_t * type_support);

/// Initialize srv/SetDirection message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * obstacle_interfaces__srv__SetDirection_Request
 * )) before or use
 * obstacle_interfaces__srv__SetDirection_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_obstacle_interfaces
bool
obstacle_interfaces__srv__SetDirection_Request__init(obstacle_interfaces__srv__SetDirection_Request * msg);

/// Finalize srv/SetDirection message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_obstacle_interfaces
void
obstacle_interfaces__srv__SetDirection_Request__fini(obstacle_interfaces__srv__SetDirection_Request * msg);

/// Create srv/SetDirection message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * obstacle_interfaces__srv__SetDirection_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_obstacle_interfaces
obstacle_interfaces__srv__SetDirection_Request *
obstacle_interfaces__srv__SetDirection_Request__create(void);

/// Destroy srv/SetDirection message.
/**
 * It calls
 * obstacle_interfaces__srv__SetDirection_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_obstacle_interfaces
void
obstacle_interfaces__srv__SetDirection_Request__destroy(obstacle_interfaces__srv__SetDirection_Request * msg);

/// Check for srv/SetDirection message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_obstacle_interfaces
bool
obstacle_interfaces__srv__SetDirection_Request__are_equal(const obstacle_interfaces__srv__SetDirection_Request * lhs, const obstacle_interfaces__srv__SetDirection_Request * rhs);

/// Copy a srv/SetDirection message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_obstacle_interfaces
bool
obstacle_interfaces__srv__SetDirection_Request__copy(
  const obstacle_interfaces__srv__SetDirection_Request * input,
  obstacle_interfaces__srv__SetDirection_Request * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_obstacle_interfaces
const rosidl_type_hash_t *
obstacle_interfaces__srv__SetDirection_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_obstacle_interfaces
const rosidl_runtime_c__type_description__TypeDescription *
obstacle_interfaces__srv__SetDirection_Request__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_obstacle_interfaces
const rosidl_runtime_c__type_description__TypeSource *
obstacle_interfaces__srv__SetDirection_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_obstacle_interfaces
const rosidl_runtime_c__type_description__TypeSource__Sequence *
obstacle_interfaces__srv__SetDirection_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of srv/SetDirection messages.
/**
 * It allocates the memory for the number of elements and calls
 * obstacle_interfaces__srv__SetDirection_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_obstacle_interfaces
bool
obstacle_interfaces__srv__SetDirection_Request__Sequence__init(obstacle_interfaces__srv__SetDirection_Request__Sequence * array, size_t size);

/// Finalize array of srv/SetDirection messages.
/**
 * It calls
 * obstacle_interfaces__srv__SetDirection_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_obstacle_interfaces
void
obstacle_interfaces__srv__SetDirection_Request__Sequence__fini(obstacle_interfaces__srv__SetDirection_Request__Sequence * array);

/// Create array of srv/SetDirection messages.
/**
 * It allocates the memory for the array and calls
 * obstacle_interfaces__srv__SetDirection_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_obstacle_interfaces
obstacle_interfaces__srv__SetDirection_Request__Sequence *
obstacle_interfaces__srv__SetDirection_Request__Sequence__create(size_t size);

/// Destroy array of srv/SetDirection messages.
/**
 * It calls
 * obstacle_interfaces__srv__SetDirection_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_obstacle_interfaces
void
obstacle_interfaces__srv__SetDirection_Request__Sequence__destroy(obstacle_interfaces__srv__SetDirection_Request__Sequence * array);

/// Check for srv/SetDirection message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_obstacle_interfaces
bool
obstacle_interfaces__srv__SetDirection_Request__Sequence__are_equal(const obstacle_interfaces__srv__SetDirection_Request__Sequence * lhs, const obstacle_interfaces__srv__SetDirection_Request__Sequence * rhs);

/// Copy an array of srv/SetDirection messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_obstacle_interfaces
bool
obstacle_interfaces__srv__SetDirection_Request__Sequence__copy(
  const obstacle_interfaces__srv__SetDirection_Request__Sequence * input,
  obstacle_interfaces__srv__SetDirection_Request__Sequence * output);

/// Initialize srv/SetDirection message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * obstacle_interfaces__srv__SetDirection_Response
 * )) before or use
 * obstacle_interfaces__srv__SetDirection_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_obstacle_interfaces
bool
obstacle_interfaces__srv__SetDirection_Response__init(obstacle_interfaces__srv__SetDirection_Response * msg);

/// Finalize srv/SetDirection message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_obstacle_interfaces
void
obstacle_interfaces__srv__SetDirection_Response__fini(obstacle_interfaces__srv__SetDirection_Response * msg);

/// Create srv/SetDirection message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * obstacle_interfaces__srv__SetDirection_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_obstacle_interfaces
obstacle_interfaces__srv__SetDirection_Response *
obstacle_interfaces__srv__SetDirection_Response__create(void);

/// Destroy srv/SetDirection message.
/**
 * It calls
 * obstacle_interfaces__srv__SetDirection_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_obstacle_interfaces
void
obstacle_interfaces__srv__SetDirection_Response__destroy(obstacle_interfaces__srv__SetDirection_Response * msg);

/// Check for srv/SetDirection message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_obstacle_interfaces
bool
obstacle_interfaces__srv__SetDirection_Response__are_equal(const obstacle_interfaces__srv__SetDirection_Response * lhs, const obstacle_interfaces__srv__SetDirection_Response * rhs);

/// Copy a srv/SetDirection message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_obstacle_interfaces
bool
obstacle_interfaces__srv__SetDirection_Response__copy(
  const obstacle_interfaces__srv__SetDirection_Response * input,
  obstacle_interfaces__srv__SetDirection_Response * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_obstacle_interfaces
const rosidl_type_hash_t *
obstacle_interfaces__srv__SetDirection_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_obstacle_interfaces
const rosidl_runtime_c__type_description__TypeDescription *
obstacle_interfaces__srv__SetDirection_Response__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_obstacle_interfaces
const rosidl_runtime_c__type_description__TypeSource *
obstacle_interfaces__srv__SetDirection_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_obstacle_interfaces
const rosidl_runtime_c__type_description__TypeSource__Sequence *
obstacle_interfaces__srv__SetDirection_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of srv/SetDirection messages.
/**
 * It allocates the memory for the number of elements and calls
 * obstacle_interfaces__srv__SetDirection_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_obstacle_interfaces
bool
obstacle_interfaces__srv__SetDirection_Response__Sequence__init(obstacle_interfaces__srv__SetDirection_Response__Sequence * array, size_t size);

/// Finalize array of srv/SetDirection messages.
/**
 * It calls
 * obstacle_interfaces__srv__SetDirection_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_obstacle_interfaces
void
obstacle_interfaces__srv__SetDirection_Response__Sequence__fini(obstacle_interfaces__srv__SetDirection_Response__Sequence * array);

/// Create array of srv/SetDirection messages.
/**
 * It allocates the memory for the array and calls
 * obstacle_interfaces__srv__SetDirection_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_obstacle_interfaces
obstacle_interfaces__srv__SetDirection_Response__Sequence *
obstacle_interfaces__srv__SetDirection_Response__Sequence__create(size_t size);

/// Destroy array of srv/SetDirection messages.
/**
 * It calls
 * obstacle_interfaces__srv__SetDirection_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_obstacle_interfaces
void
obstacle_interfaces__srv__SetDirection_Response__Sequence__destroy(obstacle_interfaces__srv__SetDirection_Response__Sequence * array);

/// Check for srv/SetDirection message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_obstacle_interfaces
bool
obstacle_interfaces__srv__SetDirection_Response__Sequence__are_equal(const obstacle_interfaces__srv__SetDirection_Response__Sequence * lhs, const obstacle_interfaces__srv__SetDirection_Response__Sequence * rhs);

/// Copy an array of srv/SetDirection messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_obstacle_interfaces
bool
obstacle_interfaces__srv__SetDirection_Response__Sequence__copy(
  const obstacle_interfaces__srv__SetDirection_Response__Sequence * input,
  obstacle_interfaces__srv__SetDirection_Response__Sequence * output);

/// Initialize srv/SetDirection message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * obstacle_interfaces__srv__SetDirection_Event
 * )) before or use
 * obstacle_interfaces__srv__SetDirection_Event__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_obstacle_interfaces
bool
obstacle_interfaces__srv__SetDirection_Event__init(obstacle_interfaces__srv__SetDirection_Event * msg);

/// Finalize srv/SetDirection message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_obstacle_interfaces
void
obstacle_interfaces__srv__SetDirection_Event__fini(obstacle_interfaces__srv__SetDirection_Event * msg);

/// Create srv/SetDirection message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * obstacle_interfaces__srv__SetDirection_Event__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_obstacle_interfaces
obstacle_interfaces__srv__SetDirection_Event *
obstacle_interfaces__srv__SetDirection_Event__create(void);

/// Destroy srv/SetDirection message.
/**
 * It calls
 * obstacle_interfaces__srv__SetDirection_Event__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_obstacle_interfaces
void
obstacle_interfaces__srv__SetDirection_Event__destroy(obstacle_interfaces__srv__SetDirection_Event * msg);

/// Check for srv/SetDirection message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_obstacle_interfaces
bool
obstacle_interfaces__srv__SetDirection_Event__are_equal(const obstacle_interfaces__srv__SetDirection_Event * lhs, const obstacle_interfaces__srv__SetDirection_Event * rhs);

/// Copy a srv/SetDirection message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_obstacle_interfaces
bool
obstacle_interfaces__srv__SetDirection_Event__copy(
  const obstacle_interfaces__srv__SetDirection_Event * input,
  obstacle_interfaces__srv__SetDirection_Event * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_obstacle_interfaces
const rosidl_type_hash_t *
obstacle_interfaces__srv__SetDirection_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_obstacle_interfaces
const rosidl_runtime_c__type_description__TypeDescription *
obstacle_interfaces__srv__SetDirection_Event__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_obstacle_interfaces
const rosidl_runtime_c__type_description__TypeSource *
obstacle_interfaces__srv__SetDirection_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_obstacle_interfaces
const rosidl_runtime_c__type_description__TypeSource__Sequence *
obstacle_interfaces__srv__SetDirection_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of srv/SetDirection messages.
/**
 * It allocates the memory for the number of elements and calls
 * obstacle_interfaces__srv__SetDirection_Event__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_obstacle_interfaces
bool
obstacle_interfaces__srv__SetDirection_Event__Sequence__init(obstacle_interfaces__srv__SetDirection_Event__Sequence * array, size_t size);

/// Finalize array of srv/SetDirection messages.
/**
 * It calls
 * obstacle_interfaces__srv__SetDirection_Event__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_obstacle_interfaces
void
obstacle_interfaces__srv__SetDirection_Event__Sequence__fini(obstacle_interfaces__srv__SetDirection_Event__Sequence * array);

/// Create array of srv/SetDirection messages.
/**
 * It allocates the memory for the array and calls
 * obstacle_interfaces__srv__SetDirection_Event__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_obstacle_interfaces
obstacle_interfaces__srv__SetDirection_Event__Sequence *
obstacle_interfaces__srv__SetDirection_Event__Sequence__create(size_t size);

/// Destroy array of srv/SetDirection messages.
/**
 * It calls
 * obstacle_interfaces__srv__SetDirection_Event__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_obstacle_interfaces
void
obstacle_interfaces__srv__SetDirection_Event__Sequence__destroy(obstacle_interfaces__srv__SetDirection_Event__Sequence * array);

/// Check for srv/SetDirection message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_obstacle_interfaces
bool
obstacle_interfaces__srv__SetDirection_Event__Sequence__are_equal(const obstacle_interfaces__srv__SetDirection_Event__Sequence * lhs, const obstacle_interfaces__srv__SetDirection_Event__Sequence * rhs);

/// Copy an array of srv/SetDirection messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_obstacle_interfaces
bool
obstacle_interfaces__srv__SetDirection_Event__Sequence__copy(
  const obstacle_interfaces__srv__SetDirection_Event__Sequence * input,
  obstacle_interfaces__srv__SetDirection_Event__Sequence * output);
#ifdef __cplusplus
}
#endif

#endif  // OBSTACLE_INTERFACES__SRV__DETAIL__SET_DIRECTION__FUNCTIONS_H_
