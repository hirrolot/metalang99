/**
 * @file
 * Overloading on a number of arguments.
 */

#ifndef EPILEPSY_overload_H
#define EPILEPSY_overload_H

#include <epilepsy/lang.h>
#include <epilepsy/priv/overload.h>

// Desugaring {
/**
 * Overload @p f on a number of arguments.
 */
#define EPILEPSY_overload(f, ...) EPILEPSY_call(EPILEPSY_overload, f __VA_ARGS__)

/**
 * Overloads @p f on a number of arguments an immediately calls it.
 */
#define EPILEPSY_overloadCall(f, ...) EPILEPSY_call(EPILEPSY_overloadCall, f __VA_ARGS__)
// }

#ifndef DOXYGEN_IGNORE

// Implementation {
#define EPILEPSY_overload_IMPL(f, ...) v(EPILEPSY_PRIV_OVERLOAD(f, __VA_ARGS__))
#define EPILEPSY_overloadCall_IMPL(f, ...)                                                         \
    EPILEPSY_call(EPILEPSY_PRIV_CAT(f, EPILEPSY_PRIV_VARIADICS_COUNT(__VA_ARGS__)), v(__VA_ARGS__))
// }

// Arity specifiers {
#define EPILEPSY_overload_ARITY     2
#define EPILEPSY_overloadCall_ARITY 2
// }

// Aliases {
#ifndef EPILEPSY_NO_SMALL_PREFIX

#define E_overload     EPILEPSY_overload
#define E_overloadCall EPILEPSY_overloadCall

#endif // EPILEPSY_NO_SMALL_PREFIX
// }

#endif // DOXYGEN_IGNORE

#endif // EPILEPSY_overload_H
