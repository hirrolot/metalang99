/**
 * @file
 * @brief Overloading on a number of arguments.
 */

#ifndef INSULT_OVERLOAD_H
#define INSULT_OVERLOAD_H

#ifndef DOXYGEN_SHOULD_SKIP_THIS

#include "aux.h"
#include "variadics/count.h"

#endif // DOXYGEN_SHOULD_SKIP_THIS

#include "lang.h"

/**
 * @brief Overload @p op on a number of arguments.
 */
#define INSULT_OVERLOAD(op, ...) c(INSULT_OVERLOAD_REAL, op __VA_ARGS__)

/**
 * @brief Overloads @p op on a number of arguments an immediately calls it.
 */
#define INSULT_OVERLOAD_CALL(op, ...) c(INSULT_OVERLOAD_REAL_CALL, op __VA_ARGS__)

#ifndef DOXYGEN_SHOULD_SKIP_THIS

#define INSULT_OVERLOAD_REAL(op, ...)                                                              \
    INSULT_CAT(v(op), c(INSULT_VARIADICS_COUNT_REAL, v(__VA_ARGS__)))

#define INSULT_OVERLOAD_REAL_CALL(op, ...) c(INSULT_OVERLOAD(v(op), v(__VA_ARGS__)), v(__VA_ARGS__))

#endif // DOXYGEN_SHOULD_SKIP_THIS

#endif // INSULT_OVERLOAD_H
