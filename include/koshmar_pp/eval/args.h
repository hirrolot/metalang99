#ifndef KOSHMAR_PP_EVAL_ARGS_H
#define KOSHMAR_PP_EVAL_ARGS_H

#include "aux.h"
#include "hooks.h"
#include "rec/control.h"
#include "term.h"

#define KOSHMAR_PP_PRIVATE_EVAL_ARGS(k, k_cx, ...)                                                 \
    KOSHMAR_PP_PRIVATE_EVAL_ARGS_AUX(                                                              \
        k,                                                                                         \
        k_cx,                                                                                      \
        KOSHMAR_PP_PRIVATE_EVAL_AUX_EMPTY_ACC(),                                                   \
        __VA_ARGS__ KOSHMAR_PP_PRIVATE_EVAL_TERM_END(),                                            \
        KOSHMAR_PP_PRIVATE_EVAL_TERM_END())

#define KOSHMAR_PP_PRIVATE_EVAL_ARGS_AUX(k, k_cx, acc, head, ...)                                  \
    KOSHMAR_PP_PRIVATE_EVAL_TERM_MATCH(                                                            \
        KOSHMAR_PP_PRIVATE_EVAL_ARGS_AUX_,                                                         \
        head,                                                                                      \
        k,                                                                                         \
        k_cx,                                                                                      \
        acc,                                                                                       \
        (__VA_ARGS__))

#define KOSHMAR_PP_PRIVATE_EVAL_ARGS_AUX_c(k, k_cx, acc, tail, op, ...)                            \
    KOSHMAR_PP_PRIVATE_EVAL_REC_CONTINUE(                                                          \
        KOSHMAR_PP_PRIVATE_EVAL_HOOKS_EVAL_AUX,                                                    \
        (KOSHMAR_PP_PRIVATE_EVAL_HOOKS_CALL_AS_ARG, (k, k_cx, acc, tail)),                         \
        c(op, __VA_ARGS__))

#define KOSHMAR_PP_PRIVATE_EVAL_ARGS_AUX_v(k, k_cx, acc, tail, ...)                                \
    KOSHMAR_PP_PRIVATE_EVAL_REC_CONTINUE(                                                          \
        KOSHMAR_PP_PRIVATE_EVAL_HOOKS_EVAL_ARGS_AUX,                                               \
        (k, k_cx),                                                                                 \
        KOSHMAR_PP_PRIVATE_EVAL_AUX_EXTEND_PARENTHESISED(                                          \
            acc,                                                                                   \
            __VA_ARGS__ KOSHMAR_PP_PRIVATE_EVAL_COMMA_OR_EMPTY(tail)),                             \
        KOSHMAR_PP_PRIVATE_EVAL_AUX_UNPARENTHESISE(tail))

#define KOSHMAR_PP_PRIVATE_EVAL_ARGS_AUX_end(k, k_cx, acc, _tail, _)                               \
    KOSHMAR_PP_PRIVATE_EVAL_REC_CONTINUE(k, k_cx, KOSHMAR_PP_PRIVATE_EVAL_AUX_UNPARENTHESISE(acc))

#define KOSHMAR_PP_PRIVATE_EVAL_CALL_AS_ARG(k, k_cx, acc, tail, evaluated_call)                    \
    KOSHMAR_PP_PRIVATE_EVAL_REC_CONTINUE(                                                          \
        KOSHMAR_PP_PRIVATE_EVAL_HOOKS_EVAL_ARGS_AUX,                                               \
        (k, k_cx),                                                                                 \
        KOSHMAR_PP_PRIVATE_EVAL_AUX_EXTEND_PARENTHESISED(                                          \
            acc,                                                                                   \
            evaluated_call KOSHMAR_PP_PRIVATE_EVAL_COMMA_OR_EMPTY(tail)),                          \
        KOSHMAR_PP_PRIVATE_EVAL_AUX_UNPARENTHESISE(tail))

#define KOSHMAR_PP_PRIVATE_EVAL_COMMA_OR_EMPTY(tail)                                               \
    KOSHMAR_PP_PRIVATE_EVAL_AUX_IF(                                                                \
        KOSHMAR_PP_PRIVATE_EVAL_IS_EMPTY_TAIL(tail),                                               \
        KOSHMAR_PP_PRIVATE_EVAL_AUX_EMPTY(),                                                       \
        KOSHMAR_PP_PRIVATE_EVAL_AUX_COMMA())

#endif // KOSHMAR_PP_EVAL_ARGS_H
