/**
 * @file
 * Control expressions.
 */

#ifndef EPILEPSY_CONTROL_H
#define EPILEPSY_CONTROL_H

#include <epilepsy/lang.h>

// Desugaring {
/**
 * If @p cond is true, expands to @p x, otherwise @p y.
 */
#define EPILEPSY_IF(cond, x, y) EPILEPSY_DESUGAR(EPILEPSY_IF, cond x y)

/**
 * Lazy #EPILSPY_IF.
 */
#define EPILEPSY_IF_LAZY(cond, f, g, ...) EPILEPSY_DESUGAR(EPILEPSY_IF_LAZY, cond f g __VA_ARGS__)

/**
 * Executes an @p op as long as a @p predicate holds for @p state.
 */
#define EPILEPSY_WHILE(predicate, op, state) EPILEPSY_DESUGAR(EPILEPSY_WHILE, predicate op state)
// }

#ifndef DOXYGEN_IGNORE

// Implementation {
#define EPILEPSY_IF_IMPL(cond, x, y)      call(EPILEPSY_PRIV_CONTROL_IF_##cond, v(x) v(y))
#define EPILEPSY_PRIV_CONTROL_IF_0(_x, y) v(y)
#define EPILEPSY_PRIV_CONTROL_IF_1(x, _y) v(x)

#define EPILEPSY_IF_LAZY_IMPL(cond, f, g, ...)                                                     \
    call(EPILEPSY_IF(v(cond), v(f), v(g)), v(__VA_ARGS__))

#define EPILEPSY_WHILE_IMPL(predicate, op, state)                                                  \
    call(                                                                                          \
        call(                                                                                      \
            EPILEPSY_IF_IMPL, predicate(v(state)) v(EPILEPSY_PRIV_CONTROL_WHILE_CONTINUE)          \
                                  v(EPILEPSY_PRIV_CONTROL_WHILE_STOP)),                            \
        v(predicate, op, state))

#define EPILEPSY_PRIV_CONTROL_WHILE_CONTINUE(predicate, op, state)                                 \
    call(EPILEPSY_WHILE_IMPL, v(predicate, op) op(v(state)))
#define EPILEPSY_PRIV_CONTROL_WHILE_STOP(_predicate, _op, state) v(state)
// }

#endif // DOXYGEN_IGNORE

#endif // EPILEPSY_CONTROL_H
