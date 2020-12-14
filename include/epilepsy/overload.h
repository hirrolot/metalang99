/**
 * @file
 * @brief Overloading on a number of arguments.
 */

#ifndef EPILEPSY_OVERLOAD_H
#define EPILEPSY_OVERLOAD_H

#ifndef DOXYGEN_SHOULD_SKIP_THIS

#include <epilepsy/priv/overload.h>

#endif // DOXYGEN_SHOULD_SKIP_THIS

#include <epilepsy/lang.h>

/**
 * @brief Overload @p op on a number of arguments.
 */
#define EPILEPSY_OVERLOAD(op, ...) call(EPILEPSY_OVERLOAD_REAL, op __VA_ARGS__)

/**
 * @brief Overloads @p op on a number of arguments an immediately calls it.
 */
#define EPILEPSY_OVERLOAD_CALL(op, ...) call(EPILEPSY_OVERLOAD_CALL_REAL, op __VA_ARGS__)

#ifndef DOXYGEN_SHOULD_SKIP_THIS

#define EPILEPSY_OVERLOAD_REAL(op, ...) v(EPILEPSY_PRIV_OVERLOAD(op, __VA_ARGS__))
#define EPILEPSY_OVERLOAD_CALL_REAL(op, ...)                                                       \
    call(EPILEPSY_OVERLOAD(v(op), v(__VA_ARGS__)), v(__VA_ARGS__))

#endif // DOXYGEN_SHOULD_SKIP_THIS

#endif // EPILEPSY_OVERLOAD_H
