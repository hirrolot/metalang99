/**
 * @file
 * Overloading on a number of arguments.
 */

#ifndef EPILEPSY_OVERLOAD_H
#define EPILEPSY_OVERLOAD_H

#include <epilepsy/lang.h>
#include <epilepsy/priv/overload.h>

// Desugaring {
/**
 * Overload @p f on a number of arguments.
 */
#define EPILEPSY_OVERLOAD(f, ...) EPILEPSY_CALL(EPILEPSY_OVERLOAD, f __VA_ARGS__)

/**
 * Overloads @p f on a number of arguments an immediately calls it.
 */
#define EPILEPSY_OVERLOAD_CALL(f, ...) EPILEPSY_CALL(EPILEPSY_OVERLOAD_CALL, f __VA_ARGS__)
// }

#ifndef DOXYGEN_IGNORE

// Implementation {
#define EPILEPSY_OVERLOAD_IMPL(f, ...) v(EPILEPSY_PRIV_OVERLOAD(f, __VA_ARGS__))
#define EPILEPSY_OVERLOAD_CALL_IMPL(f, ...)                                                        \
    EPILEPSY_PRIV_OVERLOAD_CALL_AUX(f, EPILEPSY_PRIV_VARIADICS_COUNT(__VA_ARGS__), __VA_ARGS__)
#define EPILEPSY_PRIV_OVERLOAD_CALL_AUX(f, arity, ...)                                             \
    EPILEPSY_VARIADICS_APPLY_WITH_ARITY(v(EPILEPSY_PRIV_CAT(f, arity)), v(arity), v(__VA_ARGS__))
// }

// Arity specifiers {
#define EPILEPSY_OVERLOAD_ARITY      2
#define EPILEPSY_OVERLOAD_CALL_ARITY 2
// }

#endif // DOXYGEN_IGNORE

#endif // EPILEPSY_OVERLOAD_H
