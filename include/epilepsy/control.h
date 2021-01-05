/**
 * @file
 * Control expressions.
 */

#ifndef EPILEPSY_CONTROL_H
#define EPILEPSY_CONTROL_H

#include <epilepsy/lang.h>
#include <epilepsy/variadics.h>

// Desugaring {
/**
 * If @p cond is true, expands to @p x, otherwise @p y.
 */
#define EPILEPSY_IF(cond, x, y) EPILEPSY_CALL(EPILEPSY_IF, cond x y)

/**
 * Lazy #EPILEPSY_IF.
 */
#define EPILEPSY_IF_LAZY(cond, f, g, ...) EPILEPSY_CALL(EPILEPSY_IF_LAZY, cond f g __VA_ARGS__)
// }

#ifndef DOXYGEN_IGNORE

// Implementation {
#define EPILEPSY_IF_IMPL(cond, x, y)           EPILEPSY_CALL(EPILEPSY_PRIV_CONTROL_IF_##cond, v(x) v(y))
#define EPILEPSY_PRIV_CONTROL_IF_0_IMPL(_x, y) v(y)
#define EPILEPSY_PRIV_CONTROL_IF_1_IMPL(x, _y) v(x)

#define EPILEPSY_IF_LAZY_IMPL(cond, f, g, ...)                                                     \
    EPILEPSY_VARIADICS_APPLY(EPILEPSY_IF(v(cond), v(f), v(g)), v(__VA_ARGS__))
// }

// Arity specifiers {
#define EPILEPSY_IF_ARITY      3
#define EPILEPSY_IF_LAZY_ARITY 4
// }

#endif // DOXYGEN_IGNORE

#endif // EPILEPSY_CONTROL_H
