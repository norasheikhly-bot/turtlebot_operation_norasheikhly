// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from obstacle_interfaces:srv/SetDirection.idl
// generated code does not contain a copyright notice
#include "obstacle_interfaces/srv/detail/set_direction__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `direction`
#include "rosidl_runtime_c/string_functions.h"

bool
obstacle_interfaces__srv__SetDirection_Request__init(obstacle_interfaces__srv__SetDirection_Request * msg)
{
  if (!msg) {
    return false;
  }
  // direction
  if (!rosidl_runtime_c__String__init(&msg->direction)) {
    obstacle_interfaces__srv__SetDirection_Request__fini(msg);
    return false;
  }
  return true;
}

void
obstacle_interfaces__srv__SetDirection_Request__fini(obstacle_interfaces__srv__SetDirection_Request * msg)
{
  if (!msg) {
    return;
  }
  // direction
  rosidl_runtime_c__String__fini(&msg->direction);
}

bool
obstacle_interfaces__srv__SetDirection_Request__are_equal(const obstacle_interfaces__srv__SetDirection_Request * lhs, const obstacle_interfaces__srv__SetDirection_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // direction
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->direction), &(rhs->direction)))
  {
    return false;
  }
  return true;
}

bool
obstacle_interfaces__srv__SetDirection_Request__copy(
  const obstacle_interfaces__srv__SetDirection_Request * input,
  obstacle_interfaces__srv__SetDirection_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // direction
  if (!rosidl_runtime_c__String__copy(
      &(input->direction), &(output->direction)))
  {
    return false;
  }
  return true;
}

obstacle_interfaces__srv__SetDirection_Request *
obstacle_interfaces__srv__SetDirection_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  obstacle_interfaces__srv__SetDirection_Request * msg = (obstacle_interfaces__srv__SetDirection_Request *)allocator.allocate(sizeof(obstacle_interfaces__srv__SetDirection_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(obstacle_interfaces__srv__SetDirection_Request));
  bool success = obstacle_interfaces__srv__SetDirection_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
obstacle_interfaces__srv__SetDirection_Request__destroy(obstacle_interfaces__srv__SetDirection_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    obstacle_interfaces__srv__SetDirection_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
obstacle_interfaces__srv__SetDirection_Request__Sequence__init(obstacle_interfaces__srv__SetDirection_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  obstacle_interfaces__srv__SetDirection_Request * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(obstacle_interfaces__srv__SetDirection_Request)) {
      return false;
    }
    data = (obstacle_interfaces__srv__SetDirection_Request *)allocator.zero_allocate(size, sizeof(obstacle_interfaces__srv__SetDirection_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = obstacle_interfaces__srv__SetDirection_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        obstacle_interfaces__srv__SetDirection_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
obstacle_interfaces__srv__SetDirection_Request__Sequence__fini(obstacle_interfaces__srv__SetDirection_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      obstacle_interfaces__srv__SetDirection_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

obstacle_interfaces__srv__SetDirection_Request__Sequence *
obstacle_interfaces__srv__SetDirection_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  obstacle_interfaces__srv__SetDirection_Request__Sequence * array = (obstacle_interfaces__srv__SetDirection_Request__Sequence *)allocator.allocate(sizeof(obstacle_interfaces__srv__SetDirection_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = obstacle_interfaces__srv__SetDirection_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
obstacle_interfaces__srv__SetDirection_Request__Sequence__destroy(obstacle_interfaces__srv__SetDirection_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    obstacle_interfaces__srv__SetDirection_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
obstacle_interfaces__srv__SetDirection_Request__Sequence__are_equal(const obstacle_interfaces__srv__SetDirection_Request__Sequence * lhs, const obstacle_interfaces__srv__SetDirection_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!obstacle_interfaces__srv__SetDirection_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
obstacle_interfaces__srv__SetDirection_Request__Sequence__copy(
  const obstacle_interfaces__srv__SetDirection_Request__Sequence * input,
  obstacle_interfaces__srv__SetDirection_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(obstacle_interfaces__srv__SetDirection_Request)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(obstacle_interfaces__srv__SetDirection_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    obstacle_interfaces__srv__SetDirection_Request * data =
      (obstacle_interfaces__srv__SetDirection_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!obstacle_interfaces__srv__SetDirection_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          obstacle_interfaces__srv__SetDirection_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!obstacle_interfaces__srv__SetDirection_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `message`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
obstacle_interfaces__srv__SetDirection_Response__init(obstacle_interfaces__srv__SetDirection_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    obstacle_interfaces__srv__SetDirection_Response__fini(msg);
    return false;
  }
  return true;
}

void
obstacle_interfaces__srv__SetDirection_Response__fini(obstacle_interfaces__srv__SetDirection_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  // message
  rosidl_runtime_c__String__fini(&msg->message);
}

bool
obstacle_interfaces__srv__SetDirection_Response__are_equal(const obstacle_interfaces__srv__SetDirection_Response * lhs, const obstacle_interfaces__srv__SetDirection_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message), &(rhs->message)))
  {
    return false;
  }
  return true;
}

bool
obstacle_interfaces__srv__SetDirection_Response__copy(
  const obstacle_interfaces__srv__SetDirection_Response * input,
  obstacle_interfaces__srv__SetDirection_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  return true;
}

obstacle_interfaces__srv__SetDirection_Response *
obstacle_interfaces__srv__SetDirection_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  obstacle_interfaces__srv__SetDirection_Response * msg = (obstacle_interfaces__srv__SetDirection_Response *)allocator.allocate(sizeof(obstacle_interfaces__srv__SetDirection_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(obstacle_interfaces__srv__SetDirection_Response));
  bool success = obstacle_interfaces__srv__SetDirection_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
obstacle_interfaces__srv__SetDirection_Response__destroy(obstacle_interfaces__srv__SetDirection_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    obstacle_interfaces__srv__SetDirection_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
obstacle_interfaces__srv__SetDirection_Response__Sequence__init(obstacle_interfaces__srv__SetDirection_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  obstacle_interfaces__srv__SetDirection_Response * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(obstacle_interfaces__srv__SetDirection_Response)) {
      return false;
    }
    data = (obstacle_interfaces__srv__SetDirection_Response *)allocator.zero_allocate(size, sizeof(obstacle_interfaces__srv__SetDirection_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = obstacle_interfaces__srv__SetDirection_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        obstacle_interfaces__srv__SetDirection_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
obstacle_interfaces__srv__SetDirection_Response__Sequence__fini(obstacle_interfaces__srv__SetDirection_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      obstacle_interfaces__srv__SetDirection_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

obstacle_interfaces__srv__SetDirection_Response__Sequence *
obstacle_interfaces__srv__SetDirection_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  obstacle_interfaces__srv__SetDirection_Response__Sequence * array = (obstacle_interfaces__srv__SetDirection_Response__Sequence *)allocator.allocate(sizeof(obstacle_interfaces__srv__SetDirection_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = obstacle_interfaces__srv__SetDirection_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
obstacle_interfaces__srv__SetDirection_Response__Sequence__destroy(obstacle_interfaces__srv__SetDirection_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    obstacle_interfaces__srv__SetDirection_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
obstacle_interfaces__srv__SetDirection_Response__Sequence__are_equal(const obstacle_interfaces__srv__SetDirection_Response__Sequence * lhs, const obstacle_interfaces__srv__SetDirection_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!obstacle_interfaces__srv__SetDirection_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
obstacle_interfaces__srv__SetDirection_Response__Sequence__copy(
  const obstacle_interfaces__srv__SetDirection_Response__Sequence * input,
  obstacle_interfaces__srv__SetDirection_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(obstacle_interfaces__srv__SetDirection_Response)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(obstacle_interfaces__srv__SetDirection_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    obstacle_interfaces__srv__SetDirection_Response * data =
      (obstacle_interfaces__srv__SetDirection_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!obstacle_interfaces__srv__SetDirection_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          obstacle_interfaces__srv__SetDirection_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!obstacle_interfaces__srv__SetDirection_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
#include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "obstacle_interfaces/srv/detail/set_direction__functions.h"

bool
obstacle_interfaces__srv__SetDirection_Event__init(obstacle_interfaces__srv__SetDirection_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    obstacle_interfaces__srv__SetDirection_Event__fini(msg);
    return false;
  }
  // request
  if (!obstacle_interfaces__srv__SetDirection_Request__Sequence__init(&msg->request, 0)) {
    obstacle_interfaces__srv__SetDirection_Event__fini(msg);
    return false;
  }
  // response
  if (!obstacle_interfaces__srv__SetDirection_Response__Sequence__init(&msg->response, 0)) {
    obstacle_interfaces__srv__SetDirection_Event__fini(msg);
    return false;
  }
  return true;
}

void
obstacle_interfaces__srv__SetDirection_Event__fini(obstacle_interfaces__srv__SetDirection_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  obstacle_interfaces__srv__SetDirection_Request__Sequence__fini(&msg->request);
  // response
  obstacle_interfaces__srv__SetDirection_Response__Sequence__fini(&msg->response);
}

bool
obstacle_interfaces__srv__SetDirection_Event__are_equal(const obstacle_interfaces__srv__SetDirection_Event * lhs, const obstacle_interfaces__srv__SetDirection_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!obstacle_interfaces__srv__SetDirection_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!obstacle_interfaces__srv__SetDirection_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
obstacle_interfaces__srv__SetDirection_Event__copy(
  const obstacle_interfaces__srv__SetDirection_Event * input,
  obstacle_interfaces__srv__SetDirection_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!obstacle_interfaces__srv__SetDirection_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!obstacle_interfaces__srv__SetDirection_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

obstacle_interfaces__srv__SetDirection_Event *
obstacle_interfaces__srv__SetDirection_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  obstacle_interfaces__srv__SetDirection_Event * msg = (obstacle_interfaces__srv__SetDirection_Event *)allocator.allocate(sizeof(obstacle_interfaces__srv__SetDirection_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(obstacle_interfaces__srv__SetDirection_Event));
  bool success = obstacle_interfaces__srv__SetDirection_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
obstacle_interfaces__srv__SetDirection_Event__destroy(obstacle_interfaces__srv__SetDirection_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    obstacle_interfaces__srv__SetDirection_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
obstacle_interfaces__srv__SetDirection_Event__Sequence__init(obstacle_interfaces__srv__SetDirection_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  obstacle_interfaces__srv__SetDirection_Event * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(obstacle_interfaces__srv__SetDirection_Event)) {
      return false;
    }
    data = (obstacle_interfaces__srv__SetDirection_Event *)allocator.zero_allocate(size, sizeof(obstacle_interfaces__srv__SetDirection_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = obstacle_interfaces__srv__SetDirection_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        obstacle_interfaces__srv__SetDirection_Event__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
obstacle_interfaces__srv__SetDirection_Event__Sequence__fini(obstacle_interfaces__srv__SetDirection_Event__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      obstacle_interfaces__srv__SetDirection_Event__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

obstacle_interfaces__srv__SetDirection_Event__Sequence *
obstacle_interfaces__srv__SetDirection_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  obstacle_interfaces__srv__SetDirection_Event__Sequence * array = (obstacle_interfaces__srv__SetDirection_Event__Sequence *)allocator.allocate(sizeof(obstacle_interfaces__srv__SetDirection_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = obstacle_interfaces__srv__SetDirection_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
obstacle_interfaces__srv__SetDirection_Event__Sequence__destroy(obstacle_interfaces__srv__SetDirection_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    obstacle_interfaces__srv__SetDirection_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
obstacle_interfaces__srv__SetDirection_Event__Sequence__are_equal(const obstacle_interfaces__srv__SetDirection_Event__Sequence * lhs, const obstacle_interfaces__srv__SetDirection_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!obstacle_interfaces__srv__SetDirection_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
obstacle_interfaces__srv__SetDirection_Event__Sequence__copy(
  const obstacle_interfaces__srv__SetDirection_Event__Sequence * input,
  obstacle_interfaces__srv__SetDirection_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(obstacle_interfaces__srv__SetDirection_Event)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(obstacle_interfaces__srv__SetDirection_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    obstacle_interfaces__srv__SetDirection_Event * data =
      (obstacle_interfaces__srv__SetDirection_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!obstacle_interfaces__srv__SetDirection_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          obstacle_interfaces__srv__SetDirection_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!obstacle_interfaces__srv__SetDirection_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
