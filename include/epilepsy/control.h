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
#define epIf(cond, x, y) epCall(epIf, cond x y)

/**
 * Lazy #epIf.
 */
#define epIfLazy(cond, f, g, ...) epCall(epIfLazy, cond f g __VA_ARGS__)
// }

#ifndef DOXYGEN_IGNORE

// Implementation {
#define epIf_IMPL(cond, x, y)                  epCall(EPILEPSY_PRIV_CONTROL_IF_##cond, v(x) v(y))
#define EPILEPSY_PRIV_CONTROL_IF_0_IMPL(_x, y) v(y)
#define EPILEPSY_PRIV_CONTROL_IF_1_IMPL(x, _y) v(x)

#define epIfLazy_IMPL(cond, f, g, ...) epVariadicsApply(epIf(v(cond), v(f), v(g)), v(__VA_ARGS__))
// }

// Arity specifiers {
#define epIf_ARITY     3
#define epIfLazy_ARITY 4
// }

#endif // DOXYGEN_IGNORE

#endif // EPILEPSY_CONTROL_H
