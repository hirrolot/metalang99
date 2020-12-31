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
#define EPILEPSY_OVERLOAD(f, ...) EPILEPSY_DESUGAR(EPILEPSY_OVERLOAD, f __VA_ARGS__)

/**
 * Overloads @p f on a number of arguments an immediately calls it.
 */
#define EPILEPSY_OVERLOAD_CALL(f, ...) EPILEPSY_DESUGAR(EPILEPSY_OVERLOAD_CALL, f __VA_ARGS__)
// }

#ifndef DOXYGEN_IGNORE

// Implementation {
#define EPILEPSY_OVERLOAD_IMPL(f, ...) v(EPILEPSY_PRIV_OVERLOAD(f, __VA_ARGS__))
#define EPILEPSY_OVERLOAD_CALL_IMPL(f, ...)                                                        \
    call(EPILEPSY_OVERLOAD(v(f), v(__VA_ARGS__)), v(__VA_ARGS__))
// }

#endif // DOXYGEN_IGNORE

#endif // EPILEPSY_OVERLOAD_H
