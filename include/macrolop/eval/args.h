#ifndef MACROLOP_EVAL_ARGS_H
#define MACROLOP_EVAL_ARGS_H

#include "../lang.h"
#include "acc.h"
#include "aux.h"
#include "control.h"
#include "rec/control.h"
#include "term.h"

#define MACROLOP_PRIV_EVAL_ARGS_HOOK()     MACROLOP_PRIV_EVAL_ARGS
#define MACROLOP_PRIV_EVAL_ARGS_AUX_HOOK() MACROLOP_PRIV_EVAL_ARGS_AUX
#define MACROLOP_PRIV_EVAL_ARGS_CONTINUE_WITH_EXTENDED_ACC_HOOK()                                  \
    MACROLOP_PRIV_EVAL_ARGS_CONTINUE_WITH_EXTENDED_ACC

#define MACROLOP_PRIV_EVAL_ARGS(k, k_cx, ...)                                                      \
    MACROLOP_PRIV_EVAL_ARGS_AUX(                                                                   \
        k, k_cx, MACROLOP_PRIV_EVAL_ACC_EMPTY(), __VA_ARGS__ MACROLOP_PRIV_EVAL_TERM_END(), ~)

#define MACROLOP_PRIV_EVAL_ARGS_AUX(k, k_cx, acc, head, ...)                                       \
    MACROLOP_PRIV_EVAL_TERM_MATCH(MACROLOP_PRIV_EVAL_ARGS_AUX_, head, k, k_cx, acc, (__VA_ARGS__))

#define MACROLOP_PRIV_EVAL_ARGS_AUX_trivial_call MACROLOP_PRIV_EVAL_ARGS_AUX_CALL
#define MACROLOP_PRIV_EVAL_ARGS_AUX_call         MACROLOP_PRIV_EVAL_ARGS_AUX_CALL
#define MACROLOP_PRIV_EVAL_ARGS_AUX_v            MACROLOP_PRIV_EVAL_ARGS_CONTINUE_WITH_EXTENDED_ACC

#define MACROLOP_PRIV_EVAL_ARGS_AUX_end(k, k_cx, acc, _tail, _)                                    \
    MACROLOP_PRIV_EVAL_ACC_END(k, k_cx, acc)

#define MACROLOP_PRIV_EVAL_ARGS_AUX_CALL(k, k_cx, acc, tail, op, ...)                              \
    MACROLOP_PRIV_EVAL_REC_CONTINUE(                                                               \
        MACROLOP_PRIV_EVAL_AUX_HOOK,                                                               \
        (MACROLOP_PRIV_EVAL_ARGS_CONTINUE_WITH_EXTENDED_ACC_HOOK, (k, k_cx, acc, tail)),           \
        call(op, __VA_ARGS__))

#define MACROLOP_PRIV_EVAL_ARGS_CONTINUE_WITH_EXTENDED_ACC(k, k_cx, acc, tail, ...)                \
    MACROLOP_PRIV_EVAL_ACC_CONTINUE(                                                               \
        MACROLOP_PRIV_EVAL_ARGS_AUX_HOOK, k, k_cx,                                                 \
        MACROLOP_PRIV_EVAL_ACC_EXTEND(                                                             \
            acc, __VA_ARGS__ MACROLOP_PRIV_EVAL_ARGS_COMMA_OR_EMPTY(tail)),                        \
        tail)

#define MACROLOP_PRIV_EVAL_ARGS_COMMA_OR_EMPTY(tail)                                               \
    MACROLOP_PRIV_EVAL_AUX_IF(                                                                     \
        MACROLOP_PRIV_EVAL_CONTROL_IS_EMPTY(tail), MACROLOP_PRIV_EVAL_AUX_EMPTY(),                 \
        MACROLOP_PRIV_EVAL_AUX_COMMA())

#endif // MACROLOP_EVAL_ARGS_H
