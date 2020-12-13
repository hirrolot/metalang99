/**
 * @file
 * @brief Overloading on a number of arguments.
 */

#ifndef MACROLOP_OVERLOAD_H
#define MACROLOP_OVERLOAD_H

#ifndef DOXYGEN_SHOULD_SKIP_THIS

#include <macrolop/priv/overload.h>

#endif // DOXYGEN_SHOULD_SKIP_THIS

#include <macrolop/lang.h>

/**
 * @brief Overload @p op on a number of arguments.
 */
#define MACROLOP_OVERLOAD(op, ...) call(MACROLOP_OVERLOAD_REAL, op __VA_ARGS__)

/**
 * @brief Overloads @p op on a number of arguments an immediately calls it.
 */
#define MACROLOP_OVERLOAD_CALL(op, ...) call(MACROLOP_OVERLOAD_CALL_REAL, op __VA_ARGS__)

#ifndef DOXYGEN_SHOULD_SKIP_THIS

#define MACROLOP_OVERLOAD_REAL(op, ...) v(MACROLOP_PRIV_OVERLOAD(op, __VA_ARGS__))
#define MACROLOP_OVERLOAD_CALL_REAL(op, ...)                                                       \
    call(MACROLOP_OVERLOAD(v(op), v(__VA_ARGS__)), v(__VA_ARGS__))

#endif // DOXYGEN_SHOULD_SKIP_THIS

#endif // MACROLOP_OVERLOAD_H
