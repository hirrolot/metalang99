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
#define epOverload(f, ...) epCall(epOverload, f __VA_ARGS__)

/**
 * Overloads @p f on a number of arguments an immediately calls it.
 */
#define epOverloadCall(f, ...) epCall(epOverloadCall, f __VA_ARGS__)
// }

#ifndef DOXYGEN_IGNORE

// Implementation {
#define epOverload_IMPL(f, ...) v(EPILEPSY_PRIV_OVERLOAD(f, __VA_ARGS__))
#define epOverloadCall_IMPL(f, ...)                                                                \
    EPILEPSY_PRIV_OVERLOAD_CALL_AUX(f, EPILEPSY_PRIV_VARIADICS_COUNT(__VA_ARGS__), __VA_ARGS__)
#define EPILEPSY_PRIV_OVERLOAD_CALL_AUX(f, arity, ...)                                             \
    epVariadicsApplyWithArity(v(EPILEPSY_PRIV_CAT(f, arity)), v(arity), v(__VA_ARGS__))
// }

// Arity specifiers {
#define epOverload_ARITY     2
#define epOverloadCall_ARITY 2
// }

#endif // DOXYGEN_IGNORE

#endif // EPILEPSY_OVERLOAD_H
