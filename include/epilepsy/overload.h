/**
 * @file
 * @brief Overloading on a number of arguments.
 */

#ifndef EPILEPSY_OVERLOAD_H
#define EPILEPSY_OVERLOAD_H

#include <epilepsy/lang.h>
#include <epilepsy/priv/overload.h>

// Desugaring {
/**
 * @brief Overload @p op on a number of arguments.
 */
#define EPILEPSY_OVERLOAD(op, ...) call(EPILEPSY_OVERLOAD_IMPL, op __VA_ARGS__)

/**
 * @brief Overloads @p op on a number of arguments an immediately calls it.
 */
#define EPILEPSY_OVERLOAD_CALL(op, ...) call(EPILEPSY_OVERLOAD_CALL_IMPL, op __VA_ARGS__)
// }

// Implementation {
#define EPILEPSY_OVERLOAD_IMPL(op, ...) v(EPILEPSY_PRIV_OVERLOAD(op, __VA_ARGS__))
#define EPILEPSY_OVERLOAD_CALL_IMPL(op, ...)                                                       \
    call(EPILEPSY_OVERLOAD(v(op), v(__VA_ARGS__)), v(__VA_ARGS__))
// }

#endif // EPILEPSY_OVERLOAD_H
