/**
 * @file
 * Control expressions.
 */

#ifndef EPILEPSY_CONTROL_H
#define EPILEPSY_CONTROL_H

#include <epilepsy/lang.h>
#include <epilepsy/priv/aux.h>
#include <epilepsy/variadics.h>

// Desugaring {
/**
 * If @p cond is true, expands to @p x, otherwise @p y.
 */
#define EPILEPSY_if(cond, x, y) EPILEPSY_call(EPILEPSY_if, cond x y)

/**
 * Lazy #EPILEPSY_if.
 */
#define EPILEPSY_ifLazy(cond, f, g, ...) EPILEPSY_call(EPILEPSY_ifLazy, cond f g __VA_ARGS__)
// }

#ifndef DOXYGEN_IGNORE

// Implementation {
#define EPILEPSY_if_IMPL(cond, x, y) v(EPILEPSY_PRIV_IF(cond, x, y))

#define EPILEPSY_ifLazy_IMPL(cond, f, g, ...)                                                      \
    EPILEPSY_variadicsAppl(EPILEPSY_if(v(cond), v(f), v(g)), v(__VA_ARGS__))
// }

// Arity specifiers {
#define EPILEPSY_if_ARITY     3
#define EPILEPSY_ifLazy_ARITY 4
// }

#endif // DOXYGEN_IGNORE

#endif // EPILEPSY_CONTROL_H
