#ifndef AGONY_PP_EVAL_ARGS_H
#define AGONY_PP_EVAL_ARGS_H

#include "../lang.h"
#include "aux.h"
#include "rec/control.h"
#include "term.h"

#define AGONY_PP_PRIVATE_EVAL_ARGS_HOOK()        AGONY_PP_PRIVATE_EVAL_ARGS
#define AGONY_PP_PRIVATE_EVAL_ARGS_AUX_HOOK()    AGONY_PP_PRIVATE_EVAL_ARGS_AUX
#define AGONY_PP_PRIVATE_EVAL_CALL_AS_ARG_HOOK() AGONY_PP_PRIVATE_EVAL_CALL_AS_ARG

#define AGONY_PP_PRIVATE_EVAL_ARGS(k, k_cx, ...)                                                   \
    AGONY_PP_PRIVATE_EVAL_ARGS_AUX(                                                                \
        k,                                                                                         \
        k_cx,                                                                                      \
        AGONY_PP_PRIVATE_EVAL_AUX_EMPTY_ACC(),                                                     \
        __VA_ARGS__ AGONY_PP_PRIVATE_EVAL_TERM_END(),                                              \
        AGONY_PP_PRIVATE_EVAL_TERM_END())

#define AGONY_PP_PRIVATE_EVAL_ARGS_AUX(k, k_cx, acc, head, ...)                                    \
    AGONY_PP_PRIVATE_EVAL_TERM_MATCH(                                                              \
        AGONY_PP_PRIVATE_EVAL_ARGS_AUX_,                                                           \
        head,                                                                                      \
        k,                                                                                         \
        k_cx,                                                                                      \
        acc,                                                                                       \
        (__VA_ARGS__))

#define AGONY_PP_PRIVATE_EVAL_ARGS_AUX_c(k, k_cx, acc, tail, op, ...)                              \
    AGONY_PP_PRIVATE_EVAL_REC_CONTINUE(                                                            \
        AGONY_PP_PRIVATE_EVAL_AUX_HOOK,                                                            \
        (AGONY_PP_PRIVATE_EVAL_CALL_AS_ARG_HOOK, (k, k_cx, acc, tail)),                            \
        c(op, __VA_ARGS__))

#define AGONY_PP_PRIVATE_EVAL_ARGS_AUX_v(k, k_cx, acc, tail, ...)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_CONTINUE(                                                            \
        AGONY_PP_PRIVATE_EVAL_ARGS_AUX_HOOK,                                                       \
        (k, k_cx),                                                                                 \
        AGONY_PP_PRIVATE_EVAL_AUX_EXTEND_PARENTHESISED(                                            \
            acc,                                                                                   \
            __VA_ARGS__ AGONY_PP_PRIVATE_EVAL_COMMA_OR_EMPTY(tail)),                               \
        AGONY_PP_PRIVATE_EVAL_AUX_UNPARENTHESISE(tail))

#define AGONY_PP_PRIVATE_EVAL_ARGS_AUX_end(k, k_cx, acc, _tail, _)                                 \
    AGONY_PP_PRIVATE_EVAL_REC_CONTINUE(k, k_cx, AGONY_PP_PRIVATE_EVAL_AUX_UNPARENTHESISE(acc))

#define AGONY_PP_PRIVATE_EVAL_CALL_AS_ARG(k, k_cx, acc, tail, ...)                                 \
    AGONY_PP_PRIVATE_EVAL_REC_CONTINUE(                                                            \
        AGONY_PP_PRIVATE_EVAL_ARGS_AUX_HOOK,                                                       \
        (k, k_cx),                                                                                 \
        AGONY_PP_PRIVATE_EVAL_AUX_EXTEND_PARENTHESISED(                                            \
            acc,                                                                                   \
            __VA_ARGS__ AGONY_PP_PRIVATE_EVAL_COMMA_OR_EMPTY(tail)),                               \
        AGONY_PP_PRIVATE_EVAL_AUX_UNPARENTHESISE(tail))

#define AGONY_PP_PRIVATE_EVAL_COMMA_OR_EMPTY(tail)                                                 \
    AGONY_PP_PRIVATE_EVAL_AUX_IF(                                                                  \
        AGONY_PP_PRIVATE_EVAL_IS_EMPTY_TAIL(tail),                                                 \
        AGONY_PP_PRIVATE_EVAL_AUX_EMPTY(),                                                         \
        AGONY_PP_PRIVATE_EVAL_AUX_COMMA())

#endif // AGONY_PP_EVAL_ARGS_H
