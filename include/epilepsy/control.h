/**
 * @file
 * @brief Control expressions.
 */

#ifndef EPILEPSY_CONTROL_H
#define EPILEPSY_CONTROL_H

#include <epilepsy/lang.h>

// Desugaring {
/**
 * @brief @p x if @p cond expands to 1, otherwise @p y.
 */
#define EPILEPSY_IF(cond, x, y) call(EPILEPSY_IF_IMPL, cond x y)

#define EPILEPSY_IF_LAZY(cond, op_if_true, op_if_false, ...)                                       \
    call(EPILEPSY_IF_LAZY_IMPL, cond op_if_true op_if_false __VA_ARGS__)

/**
 * @brief Executes @p op as long as @p predicate holds for @p state.
 */
#define EPILEPSY_WHILE(predicate, op, state) call(EPILEPSY_WHILE_IMPL, predicate op state)
// }

// Implementation {
#define EPILEPSY_IF_IMPL(cond, x, y)      call(EPILEPSY_PRIV_CONTROL_IF_##cond, v(x) v(y))
#define EPILEPSY_PRIV_CONTROL_IF_0(_x, y) v(y)
#define EPILEPSY_PRIV_CONTROL_IF_1(x, _y) v(x)

#define EPILEPSY_IF_LAZY_IMPL(cond, op_if_true, op_if_false, ...)                                  \
    call(EPILEPSY_IF(v(cond), v(op_if_true), v(op_if_false)), v(__VA_ARGS__))

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

#endif // EPILEPSY_CONTROL_H
