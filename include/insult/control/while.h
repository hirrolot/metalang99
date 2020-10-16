#ifndef INSULT_CONTROL_WHILE_H
#define INSULT_CONTROL_WHILE_H

#include "../lang.h"
#include "if.h"

#define INSULT_WHILE_REAL(predicate, op, state)                                                    \
    call(                                                                                          \
        call(                                                                                      \
            INSULT_IF_REAL,                                                                        \
            predicate(v(state)) v(INSULT_PRIVATE_CONTROL_WHILE_CONTINUE)                           \
                v(INSULT_PRIVATE_CONTROL_WHILE_STOP)),                                             \
        v(predicate) v(op) v(state))

#define INSULT_PRIVATE_CONTROL_WHILE_CONTINUE(predicate, op, state)                                \
    call(INSULT_WHILE_REAL, v(predicate) v(op) op(v(state)))

#define INSULT_PRIVATE_CONTROL_WHILE_STOP(_predicate, _op, state) v(state)

#endif // INSULT_CONTROL_WHILE_H
