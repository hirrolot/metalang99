#ifndef EPILEPSY_CONTROL_WHILE_H
#define EPILEPSY_CONTROL_WHILE_H

#include <epilepsy/control/if.h>
#include <epilepsy/lang.h>

#define EPILEPSY_WHILE_IMPL(predicate, op, state)                                                  \
    call(                                                                                          \
        call(                                                                                      \
            EPILEPSY_IF_IMPL, predicate(v(state)) v(EPILEPSY_PRIV_CONTROL_WHILE_CONTINUE)          \
                                  v(EPILEPSY_PRIV_CONTROL_WHILE_STOP)),                            \
        v(predicate) v(op) v(state))

#define EPILEPSY_PRIV_CONTROL_WHILE_CONTINUE(predicate, op, state)                                 \
    call(EPILEPSY_WHILE_IMPL, v(predicate) v(op) op(v(state)))

#define EPILEPSY_PRIV_CONTROL_WHILE_STOP(_predicate, _op, state) v(state)

#endif // EPILEPSY_CONTROL_WHILE_H
