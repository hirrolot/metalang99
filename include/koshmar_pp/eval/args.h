#ifndef KOSHMAR_PP_EVAL_ARGS_H
#define KOSHMAR_PP_EVAL_ARGS_H

#include "../private/aux.h"
#include "../private/rec/control.h"

#include "term.h"

#define KOSHMAR_PP_PRIVATE_EVAL_ARGS(k, k_cx, outer_acc, outer_op, outer_tail, ...)                \
    KOSHMAR_PP_PRIVATE_EVAL_ARGS_AUX(                                                              \
        k,                                                                                         \
        k_cx,                                                                                      \
        outer_acc,                                                                                 \
        outer_op,                                                                                  \
        outer_tail,                                                                                \
        KOSHMAR_PP_PRIVATE_EMPTY_ACC(),                                                            \
        __VA_ARGS__ KOSHMAR_PP_PRIVATE_FINISH_TERMS())

#define KOSHMAR_PP_PRIVATE_EVAL_ARGS_HOOK() KOSHMAR_PP_PRIVATE_EVAL_ARGS

#define KOSHMAR_PP_PRIVATE_EVAL_ARGS_AUX(                                                          \
    k,                                                                                             \
    k_cx,                                                                                          \
    outer_acc,                                                                                     \
    outer_op,                                                                                      \
    outer_tail,                                                                                    \
    inner_acc,                                                                                     \
    inner_head,                                                                                    \
    ...)                                                                                           \
    KOSHMAR_PP_PRIVATE_EVAL_TERM_MATCH(                                                            \
        KOSHMAR_PP_PRIVATE_EVAL_ARGS_AUX_,                                                         \
        inner_head,                                                                                \
        k,                                                                                         \
        k_cx,                                                                                      \
        outer_acc,                                                                                 \
        outer_op,                                                                                  \
        outer_tail,                                                                                \
        inner_acc,                                                                                 \
        (__VA_ARGS__))

#define KOSHMAR_PP_PRIVATE_EVAL_ARGS_AUX_HOOK() KOSHMAR_PP_PRIVATE_EVAL_ARGS_AUX

#define KOSHMAR_PP_PRIVATE_EVAL_ARGS_AUX_c(                                                        \
    k,                                                                                             \
    k_cx,                                                                                          \
    outer_acc,                                                                                     \
    outer_op,                                                                                      \
    outer_tail,                                                                                    \
    inner_acc,                                                                                     \
    inner_tail,                                                                                    \
    inner_op,                                                                                      \
    ...)                                                                                           \
    KOSHMAR_PP_PRIVATE_REC_CONTINUE(                                                               \
        KOSHMAR_PP_PRIVATE_EVAL_AUX_HOOK,                                                          \
        KOSHMAR_PP_PRIVATE_EVAL_CALL_AS_ARG,                                                       \
        (k, k_cx, outer_acc, outer_op, outer_tail, inner_acc, inner_tail),                         \
        c(inner_op, __VA_ARGS__))

#define KOSHMAR_PP_PRIVATE_EVAL_ARGS_AUX_v(                                                        \
    k,                                                                                             \
    k_cx,                                                                                          \
    outer_acc,                                                                                     \
    outer_op,                                                                                      \
    outer_tail,                                                                                    \
    inner_acc,                                                                                     \
    inner_tail,                                                                                    \
    ...)                                                                                           \
    KOSHMAR_PP_PRIVATE_REC_CONTINUE(                                                               \
        KOSHMAR_PP_PRIVATE_EVAL_ARGS_AUX_HOOK,                                                     \
        k,                                                                                         \
        k_cx,                                                                                      \
        outer_acc,                                                                                 \
        outer_op,                                                                                  \
        outer_tail,                                                                                \
        (KOSHMAR_PP_PRIVATE_UNPARENTHESISE(inner_acc)(__VA_ARGS__)                                 \
             KOSHMAR_PP_PRIVATE_EVAL_COMMA_OR_EMPTY(inner_tail)),                                  \
        KOSHMAR_PP_PRIVATE_UNPARENTHESISE(inner_tail))

#define KOSHMAR_PP_PRIVATE_EVAL_ARGS_AUX_end(                                                      \
    k,                                                                                             \
    k_cx,                                                                                          \
    outer_acc,                                                                                     \
    outer_op,                                                                                      \
    outer_tail,                                                                                    \
    inner_acc,                                                                                     \
    _inner_tail,                                                                                   \
    _)                                                                                             \
    KOSHMAR_PP_PRIVATE_REC_CONTINUE(                                                               \
        KOSHMAR_PP_PRIVATE_EVAL_MATCH_HOOK,                                                        \
        k,                                                                                         \
        k_cx,                                                                                      \
        outer_acc,                                                                                 \
        KOSHMAR_PP_PRIVATE_CALL_MACRO(outer_op, KOSHMAR_PP_PRIVATE_UNPARENTHESISE(inner_acc))      \
            KOSHMAR_PP_PRIVATE_UNPARENTHESISE(outer_tail))

#define KOSHMAR_PP_PRIVATE_EVAL_COMMA_OR_EMPTY(tail)                                               \
    KOSHMAR_PP_PRIVATE_IF(                                                                         \
        KOSHMAR_PP_PRIVATE_EVAL_TERM_IS_END(                                                       \
            KOSHMAR_PP_PRIVATE_HEAD(KOSHMAR_PP_PRIVATE_UNPARENTHESISE(tail))),                     \
        KOSHMAR_PP_PRIVATE_EMPTY(),                                                                \
        KOSHMAR_PP_PRIVATE_COMMA())

#define KOSHMAR_PP_PRIVATE_EVAL_CALL_AS_ARG(cx, evaluated_call)                                    \
    KOSHMAR_PP_PRIVATE_CALL_MACRO(                                                                 \
        KOSHMAR_PP_PRIVATE_EVAL_CALL_AS_ARG_AUX,                                                   \
        KOSHMAR_PP_PRIVATE_UNPARENTHESISE(cx),                                                     \
        evaluated_call)

#define KOSHMAR_PP_PRIVATE_EVAL_CALL_AS_ARG_AUX(                                                   \
    k,                                                                                             \
    k_cx,                                                                                          \
    outer_acc,                                                                                     \
    outer_op,                                                                                      \
    outer_tail,                                                                                    \
    inner_acc,                                                                                     \
    inner_tail,                                                                                    \
    evaluated_call)                                                                                \
    KOSHMAR_PP_PRIVATE_REC_CONTINUE(                                                               \
        KOSHMAR_PP_PRIVATE_EVAL_ARGS_AUX_HOOK,                                                     \
        k,                                                                                         \
        k_cx,                                                                                      \
        outer_acc,                                                                                 \
        outer_op,                                                                                  \
        outer_tail,                                                                                \
        (KOSHMAR_PP_PRIVATE_UNPARENTHESISE(inner_acc)(evaluated_call)                              \
             KOSHMAR_PP_PRIVATE_EVAL_COMMA_OR_EMPTY(inner_tail)),                                  \
        KOSHMAR_PP_PRIVATE_UNPARENTHESISE(inner_tail))

#endif // KOSHMAR_PP_EVAL_ARGS_H
