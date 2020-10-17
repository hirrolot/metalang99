#ifndef MACROLOP_CONTROL_WHILE_H
#define MACROLOP_CONTROL_WHILE_H

#include "../lang.h"
#include "if.h"

#define MACROLOP_WHILE_REAL(predicate, op, state)                                                  \
    call(                                                                                          \
        call(                                                                                      \
            MACROLOP_IF_REAL,                                                                      \
            predicate(v(state)) v(MACROLOP_PRIVATE_CONTROL_WHILE_CONTINUE)                         \
                v(MACROLOP_PRIVATE_CONTROL_WHILE_STOP)),                                           \
        v(predicate) v(op) v(state))

#define MACROLOP_PRIVATE_CONTROL_WHILE_CONTINUE(predicate, op, state)                              \
    call(MACROLOP_WHILE_REAL, v(predicate) v(op) op(v(state)))

#define MACROLOP_PRIVATE_CONTROL_WHILE_STOP(_predicate, _op, state) v(state)

#endif // MACROLOP_CONTROL_WHILE_H
