// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from saf_msgs:msg/Carrier.idl
// generated code does not contain a copyright notice
#include "saf_msgs/msg/detail/carrier__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
saf_msgs__msg__Carrier__init(saf_msgs__msg__Carrier * msg)
{
  if (!msg) {
    return false;
  }
  // carry_id
  // station_id
  // hour
  // minute
  // second
  return true;
}

void
saf_msgs__msg__Carrier__fini(saf_msgs__msg__Carrier * msg)
{
  if (!msg) {
    return;
  }
  // carry_id
  // station_id
  // hour
  // minute
  // second
}

bool
saf_msgs__msg__Carrier__are_equal(const saf_msgs__msg__Carrier * lhs, const saf_msgs__msg__Carrier * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // carry_id
  if (lhs->carry_id != rhs->carry_id) {
    return false;
  }
  // station_id
  if (lhs->station_id != rhs->station_id) {
    return false;
  }
  // hour
  if (lhs->hour != rhs->hour) {
    return false;
  }
  // minute
  if (lhs->minute != rhs->minute) {
    return false;
  }
  // second
  if (lhs->second != rhs->second) {
    return false;
  }
  return true;
}

bool
saf_msgs__msg__Carrier__copy(
  const saf_msgs__msg__Carrier * input,
  saf_msgs__msg__Carrier * output)
{
  if (!input || !output) {
    return false;
  }
  // carry_id
  output->carry_id = input->carry_id;
  // station_id
  output->station_id = input->station_id;
  // hour
  output->hour = input->hour;
  // minute
  output->minute = input->minute;
  // second
  output->second = input->second;
  return true;
}

saf_msgs__msg__Carrier *
saf_msgs__msg__Carrier__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  saf_msgs__msg__Carrier * msg = (saf_msgs__msg__Carrier *)allocator.allocate(sizeof(saf_msgs__msg__Carrier), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(saf_msgs__msg__Carrier));
  bool success = saf_msgs__msg__Carrier__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
saf_msgs__msg__Carrier__destroy(saf_msgs__msg__Carrier * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    saf_msgs__msg__Carrier__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
saf_msgs__msg__Carrier__Sequence__init(saf_msgs__msg__Carrier__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  saf_msgs__msg__Carrier * data = NULL;

  if (size) {
    data = (saf_msgs__msg__Carrier *)allocator.zero_allocate(size, sizeof(saf_msgs__msg__Carrier), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = saf_msgs__msg__Carrier__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        saf_msgs__msg__Carrier__fini(&data[i - 1]);
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
saf_msgs__msg__Carrier__Sequence__fini(saf_msgs__msg__Carrier__Sequence * array)
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
      saf_msgs__msg__Carrier__fini(&array->data[i]);
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

saf_msgs__msg__Carrier__Sequence *
saf_msgs__msg__Carrier__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  saf_msgs__msg__Carrier__Sequence * array = (saf_msgs__msg__Carrier__Sequence *)allocator.allocate(sizeof(saf_msgs__msg__Carrier__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = saf_msgs__msg__Carrier__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
saf_msgs__msg__Carrier__Sequence__destroy(saf_msgs__msg__Carrier__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    saf_msgs__msg__Carrier__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
saf_msgs__msg__Carrier__Sequence__are_equal(const saf_msgs__msg__Carrier__Sequence * lhs, const saf_msgs__msg__Carrier__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!saf_msgs__msg__Carrier__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
saf_msgs__msg__Carrier__Sequence__copy(
  const saf_msgs__msg__Carrier__Sequence * input,
  saf_msgs__msg__Carrier__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(saf_msgs__msg__Carrier);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    saf_msgs__msg__Carrier * data =
      (saf_msgs__msg__Carrier *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!saf_msgs__msg__Carrier__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          saf_msgs__msg__Carrier__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!saf_msgs__msg__Carrier__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
