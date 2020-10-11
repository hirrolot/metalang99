#ifndef AGONY_PP_CONTROL_WHILE_H
#define AGONY_PP_CONTROL_WHILE_H

#include "../lang.h"
#include "if.h"

#define AGONY_PP_WHILE_REAL(predicate, op, state)                                                  \
    c(c(AGONY_PP_IF_REAL,                                                                          \
        c(predicate, v(state)) v(AGONY_PP_PRIVATE_CONTROL_WHILE_CONTINUE)                          \
            v(AGONY_PP_PRIVATE_CONTROL_WHILE_STOP)),                                               \
      v(predicate) v(op) v(state))

#define AGONY_PP_PRIVATE_CONTROL_WHILE_CONTINUE(predicate, op, state)                              \
    c(AGONY_PP_WHILE_REAL, v(predicate) v(op) c(op, v(state)))

#define AGONY_PP_PRIVATE_CONTROL_WHILE_STOP(_predicate, _op, state) v(state)

#endif // AGONY_PP_CONTROL_WHILE_H
