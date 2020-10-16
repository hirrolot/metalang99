#ifndef INSULT_EVAL_ARGS_H
#define INSULT_EVAL_ARGS_H

#include "../lang.h"
#include "aux.h"
#include "rec/control.h"
#include "term.h"

#define INSULT_PRIVATE_EVAL_ARGS_HOOK()        INSULT_PRIVATE_EVAL_ARGS
#define INSULT_PRIVATE_EVAL_ARGS_AUX_HOOK()    INSULT_PRIVATE_EVAL_ARGS_AUX
#define INSULT_PRIVATE_EVAL_CALL_AS_ARG_HOOK() INSULT_PRIVATE_EVAL_CALL_AS_ARG

#define INSULT_PRIVATE_EVAL_ARGS(k, k_cx, ...)                                                     \
    INSULT_PRIVATE_EVAL_ARGS_AUX(                                                                  \
        k,                                                                                         \
        k_cx,                                                                                      \
        INSULT_PRIVATE_EVAL_AUX_EMPTY_ACC(),                                                       \
        __VA_ARGS__ INSULT_PRIVATE_EVAL_TERM_END(),                                                \
        INSULT_PRIVATE_EVAL_TERM_END())

#define INSULT_PRIVATE_EVAL_ARGS_AUX(k, k_cx, acc, head, ...)                                      \
    INSULT_PRIVATE_EVAL_TERM_MATCH(INSULT_PRIVATE_EVAL_ARGS_AUX_, head, k, k_cx, acc, (__VA_ARGS__))

#define INSULT_PRIVATE_EVAL_ARGS_AUX_call(k, k_cx, acc, tail, op, ...)                             \
    INSULT_PRIVATE_EVAL_REC_CONTINUE(                                                              \
        INSULT_PRIVATE_EVAL_AUX_HOOK,                                                              \
        (INSULT_PRIVATE_EVAL_CALL_AS_ARG_HOOK, (k, k_cx, acc, tail)),                              \
        call(op, __VA_ARGS__))

#define INSULT_PRIVATE_EVAL_ARGS_AUX_v(k, k_cx, acc, tail, ...)                                    \
    INSULT_PRIVATE_EVAL_REC_CONTINUE(                                                              \
        INSULT_PRIVATE_EVAL_ARGS_AUX_HOOK,                                                         \
        (k, k_cx),                                                                                 \
        INSULT_PRIVATE_EVAL_AUX_EXTEND_PARENTHESISED(                                              \
            acc,                                                                                   \
            __VA_ARGS__ INSULT_PRIVATE_EVAL_COMMA_OR_EMPTY(tail)),                                 \
        INSULT_PRIVATE_EVAL_AUX_UNPARENTHESISE(tail))

#define INSULT_PRIVATE_EVAL_ARGS_AUX_end(k, k_cx, acc, _tail, _)                                   \
    INSULT_PRIVATE_EVAL_REC_CONTINUE(k, k_cx, INSULT_PRIVATE_EVAL_AUX_UNPARENTHESISE(acc))

#define INSULT_PRIVATE_EVAL_CALL_AS_ARG(k, k_cx, acc, tail, ...)                                   \
    INSULT_PRIVATE_EVAL_REC_CONTINUE(                                                              \
        INSULT_PRIVATE_EVAL_ARGS_AUX_HOOK,                                                         \
        (k, k_cx),                                                                                 \
        INSULT_PRIVATE_EVAL_AUX_EXTEND_PARENTHESISED(                                              \
            acc,                                                                                   \
            __VA_ARGS__ INSULT_PRIVATE_EVAL_COMMA_OR_EMPTY(tail)),                                 \
        INSULT_PRIVATE_EVAL_AUX_UNPARENTHESISE(tail))

#define INSULT_PRIVATE_EVAL_COMMA_OR_EMPTY(tail)                                                   \
    INSULT_PRIVATE_EVAL_AUX_IF(                                                                    \
        INSULT_PRIVATE_EVAL_IS_EMPTY_TAIL(tail),                                                   \
        INSULT_PRIVATE_EVAL_AUX_EMPTY(),                                                           \
        INSULT_PRIVATE_EVAL_AUX_COMMA())

#endif // INSULT_EVAL_ARGS_H
