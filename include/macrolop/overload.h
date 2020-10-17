/**
 * @file
 * @brief Overloading on a number of arguments.
 */

#ifndef MACROLOP_OVERLOAD_H
#define MACROLOP_OVERLOAD_H

#ifndef DOXYGEN_SHOULD_SKIP_THIS

#include "aux.h"
#include "variadics/count.h"

#endif // DOXYGEN_SHOULD_SKIP_THIS

#include "lang.h"

/**
 * @brief Overload @p op on a number of arguments.
 */
#define MACROLOP_OVERLOAD(op, ...) call(MACROLOP_OVERLOAD_REAL, op __VA_ARGS__)

/**
 * @brief Overloads @p op on a number of arguments an immediately calls it.
 */
#define MACROLOP_OVERLOAD_CALL(op, ...) call(MACROLOP_OVERLOAD_REAL_CALL, op __VA_ARGS__)

#ifndef DOXYGEN_SHOULD_SKIP_THIS

#define MACROLOP_OVERLOAD_REAL(op, ...)                                                            \
    MACROLOP_CAT(v(op), call(MACROLOP_VARIADICS_COUNT_REAL, v(__VA_ARGS__)))

#define MACROLOP_OVERLOAD_REAL_CALL(op, ...)                                                       \
    call(MACROLOP_OVERLOAD(v(op), v(__VA_ARGS__)), v(__VA_ARGS__))

#endif // DOXYGEN_SHOULD_SKIP_THIS

#endif // MACROLOP_OVERLOAD_H
