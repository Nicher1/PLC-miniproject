// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from saf_msgs:msg/Carrier.idl
// generated code does not contain a copyright notice

#ifndef SAF_MSGS__MSG__DETAIL__CARRIER__FUNCTIONS_H_
#define SAF_MSGS__MSG__DETAIL__CARRIER__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "saf_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "saf_msgs/msg/detail/carrier__struct.h"

/// Initialize msg/Carrier message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * saf_msgs__msg__Carrier
 * )) before or use
 * saf_msgs__msg__Carrier__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_saf_msgs
bool
saf_msgs__msg__Carrier__init(saf_msgs__msg__Carrier * msg);

/// Finalize msg/Carrier message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_saf_msgs
void
saf_msgs__msg__Carrier__fini(saf_msgs__msg__Carrier * msg);

/// Create msg/Carrier message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * saf_msgs__msg__Carrier__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_saf_msgs
saf_msgs__msg__Carrier *
saf_msgs__msg__Carrier__create();

/// Destroy msg/Carrier message.
/**
 * It calls
 * saf_msgs__msg__Carrier__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_saf_msgs
void
saf_msgs__msg__Carrier__destroy(saf_msgs__msg__Carrier * msg);

/// Check for msg/Carrier message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_saf_msgs
bool
saf_msgs__msg__Carrier__are_equal(const saf_msgs__msg__Carrier * lhs, const saf_msgs__msg__Carrier * rhs);

/// Copy a msg/Carrier message.
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
ROSIDL_GENERATOR_C_PUBLIC_saf_msgs
bool
saf_msgs__msg__Carrier__copy(
  const saf_msgs__msg__Carrier * input,
  saf_msgs__msg__Carrier * output);

/// Initialize array of msg/Carrier messages.
/**
 * It allocates the memory for the number of elements and calls
 * saf_msgs__msg__Carrier__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_saf_msgs
bool
saf_msgs__msg__Carrier__Sequence__init(saf_msgs__msg__Carrier__Sequence * array, size_t size);

/// Finalize array of msg/Carrier messages.
/**
 * It calls
 * saf_msgs__msg__Carrier__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_saf_msgs
void
saf_msgs__msg__Carrier__Sequence__fini(saf_msgs__msg__Carrier__Sequence * array);

/// Create array of msg/Carrier messages.
/**
 * It allocates the memory for the array and calls
 * saf_msgs__msg__Carrier__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_saf_msgs
saf_msgs__msg__Carrier__Sequence *
saf_msgs__msg__Carrier__Sequence__create(size_t size);

/// Destroy array of msg/Carrier messages.
/**
 * It calls
 * saf_msgs__msg__Carrier__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_saf_msgs
void
saf_msgs__msg__Carrier__Sequence__destroy(saf_msgs__msg__Carrier__Sequence * array);

/// Check for msg/Carrier message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_saf_msgs
bool
saf_msgs__msg__Carrier__Sequence__are_equal(const saf_msgs__msg__Carrier__Sequence * lhs, const saf_msgs__msg__Carrier__Sequence * rhs);

/// Copy an array of msg/Carrier messages.
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
ROSIDL_GENERATOR_C_PUBLIC_saf_msgs
bool
saf_msgs__msg__Carrier__Sequence__copy(
  const saf_msgs__msg__Carrier__Sequence * input,
  saf_msgs__msg__Carrier__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // SAF_MSGS__MSG__DETAIL__CARRIER__FUNCTIONS_H_
