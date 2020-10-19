#ifndef MACROLOP_EVAL_ARGS_H
#define MACROLOP_EVAL_ARGS_H

#include "../lang.h"
#include "aux.h"
#include "rec/control.h"
#include "term.h"

#define MACROLOP_PRIVATE_EVAL_ARGS_HOOK()     MACROLOP_PRIVATE_EVAL_ARGS
#define MACROLOP_PRIVATE_EVAL_ARGS_AUX_HOOK() MACROLOP_PRIVATE_EVAL_ARGS_AUX
#define MACROLOP_PRIVATE_EVAL_ARGS_SAVE_IN_ACC_AND_CONTINUE_HOOK()                                 \
    MACROLOP_PRIVATE_EVAL_ARGS_SAVE_IN_ACC_AND_CONTINUE

#define MACROLOP_PRIVATE_EVAL_ARGS(k, k_cx, ...)                                                   \
    MACROLOP_PRIVATE_EVAL_ARGS_AUX(                                                                \
        k, k_cx, MACROLOP_PRIVATE_EVAL_AUX_EMPTY_ACC(),                                            \
        __VA_ARGS__ MACROLOP_PRIVATE_EVAL_TERM_END(), MACROLOP_PRIVATE_EVAL_TERM_END())

#define MACROLOP_PRIVATE_EVAL_ARGS_AUX(k, k_cx, acc, head, ...)                                    \
    MACROLOP_PRIVATE_EVAL_TERM_MATCH(                                                              \
        MACROLOP_PRIVATE_EVAL_ARGS_AUX_, head, k, k_cx, acc, (__VA_ARGS__))

#define MACROLOP_PRIVATE_EVAL_ARGS_AUX_trivial_call MACROLOP_PRIVATE_EVAL_ARGS_AUX_CALL
#define MACROLOP_PRIVATE_EVAL_ARGS_AUX_call         MACROLOP_PRIVATE_EVAL_ARGS_AUX_CALL
#define MACROLOP_PRIVATE_EVAL_ARGS_AUX_v            MACROLOP_PRIVATE_EVAL_ARGS_SAVE_IN_ACC_AND_CONTINUE

#define MACROLOP_PRIVATE_EVAL_ARGS_AUX_end(k, k_cx, acc, _tail, _)                                 \
    MACROLOP_PRIVATE_EVAL_REC_CONTINUE(k, k_cx, MACROLOP_PRIVATE_EVAL_AUX_UNPARENTHESISE(acc))

#define MACROLOP_PRIVATE_EVAL_ARGS_AUX_CALL(k, k_cx, acc, tail, op, ...)                           \
    MACROLOP_PRIVATE_EVAL_REC_CONTINUE(                                                            \
        MACROLOP_PRIVATE_EVAL_AUX_HOOK,                                                            \
        (MACROLOP_PRIVATE_EVAL_ARGS_SAVE_IN_ACC_AND_CONTINUE_HOOK, (k, k_cx, acc, tail)),          \
        call(op, __VA_ARGS__))

#define MACROLOP_PRIVATE_EVAL_ARGS_SAVE_IN_ACC_AND_CONTINUE(k, k_cx, acc, tail, ...)               \
    MACROLOP_PRIVATE_EVAL_REC_CONTINUE(                                                            \
        MACROLOP_PRIVATE_EVAL_ARGS_AUX_HOOK, (k, k_cx),                                            \
        MACROLOP_PRIVATE_EVAL_AUX_EXTEND_PARENTHESISED(                                            \
            acc, __VA_ARGS__ MACROLOP_PRIVATE_EVAL_ARGS_COMMA_OR_EMPTY(tail)),                     \
        MACROLOP_PRIVATE_EVAL_AUX_UNPARENTHESISE(tail))

#define MACROLOP_PRIVATE_EVAL_ARGS_COMMA_OR_EMPTY(tail)                                            \
    MACROLOP_PRIVATE_EVAL_AUX_IF(                                                                  \
        MACROLOP_PRIVATE_EVAL_IS_EMPTY_TAIL(tail), MACROLOP_PRIVATE_EVAL_AUX_EMPTY(),              \
        MACROLOP_PRIVATE_EVAL_AUX_COMMA())

#endif // MACROLOP_EVAL_ARGS_H
