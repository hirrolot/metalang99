#ifndef KOSHMAR_PP_EVAL_ARGS_H
#define KOSHMAR_PP_EVAL_ARGS_H

#include "aux.h"
#include "hooks.h"
#include "rec/control.h"
#include "term.h"

#define KOSHMAR_PP_PRIVATE_EVAL_ARGS(k, k_cx, outer_acc, outer_op, outer_tail, ...)                \
    KOSHMAR_PP_PRIVATE_EVAL_ARGS_AUX(                                                              \
        k,                                                                                         \
        k_cx,                                                                                      \
        outer_acc,                                                                                 \
        outer_op,                                                                                  \
        outer_tail,                                                                                \
        KOSHMAR_PP_PRIVATE_EVAL_AUX_EMPTY_ACC(),                                                   \
        __VA_ARGS__ KOSHMAR_PP_PRIVATE_EVAL_TERM_END(),                                            \
        KOSHMAR_PP_PRIVATE_EVAL_TERM_END())

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
    KOSHMAR_PP_PRIVATE_EVAL_REC_CONTINUE(                                                          \
        KOSHMAR_PP_PRIVATE_EVAL_HOOKS_EVAL_AUX,                                                    \
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
    KOSHMAR_PP_PRIVATE_EVAL_REC_CONTINUE(                                                          \
        KOSHMAR_PP_PRIVATE_EVAL_HOOKS_ARGS_AUX,                                                    \
        k,                                                                                         \
        k_cx,                                                                                      \
        outer_acc,                                                                                 \
        outer_op,                                                                                  \
        outer_tail,                                                                                \
        KOSHMAR_PP_PRIVATE_EVAL_AUX_EXTEND_ACC(                                                    \
            inner_acc,                                                                             \
            (__VA_ARGS__)KOSHMAR_PP_PRIVATE_EVAL_COMMA_OR_EMPTY(inner_tail)),                      \
        KOSHMAR_PP_PRIVATE_EVAL_AUX_UNPARENTHESISE(inner_tail))

#define KOSHMAR_PP_PRIVATE_EVAL_ARGS_AUX_end(                                                      \
    k,                                                                                             \
    k_cx,                                                                                          \
    outer_acc,                                                                                     \
    outer_op,                                                                                      \
    outer_tail,                                                                                    \
    inner_acc,                                                                                     \
    _inner_tail,                                                                                   \
    _)                                                                                             \
    KOSHMAR_PP_PRIVATE_EVAL_REC_CONTINUE(                                                          \
        KOSHMAR_PP_PRIVATE_EVAL_HOOKS_EVAL_MATCH,                                                  \
        k,                                                                                         \
        k_cx,                                                                                      \
        outer_acc,                                                                                 \
        KOSHMAR_PP_PRIVATE_EVAL_AUX_CALL_MACRO(                                                    \
            outer_op,                                                                              \
            KOSHMAR_PP_PRIVATE_EVAL_AUX_UNPARENTHESISE(inner_acc))                                 \
            KOSHMAR_PP_PRIVATE_EVAL_AUX_UNPARENTHESISE(outer_tail))

#define KOSHMAR_PP_PRIVATE_EVAL_CALL_AS_ARG(cx, evaluated_call)                                    \
    KOSHMAR_PP_PRIVATE_EVAL_AUX_CALL_MACRO(                                                        \
        KOSHMAR_PP_PRIVATE_EVAL_CALL_AS_ARG_AUX,                                                   \
        KOSHMAR_PP_PRIVATE_EVAL_AUX_UNPARENTHESISE(cx),                                            \
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
    KOSHMAR_PP_PRIVATE_EVAL_REC_CONTINUE(                                                          \
        KOSHMAR_PP_PRIVATE_EVAL_HOOKS_ARGS_AUX,                                                    \
        k,                                                                                         \
        k_cx,                                                                                      \
        outer_acc,                                                                                 \
        outer_op,                                                                                  \
        outer_tail,                                                                                \
        KOSHMAR_PP_PRIVATE_EVAL_AUX_EXTEND_ACC(                                                    \
            inner_acc,                                                                             \
            (evaluated_call)KOSHMAR_PP_PRIVATE_EVAL_COMMA_OR_EMPTY(inner_tail)),                   \
        KOSHMAR_PP_PRIVATE_EVAL_AUX_UNPARENTHESISE(inner_tail))

#define KOSHMAR_PP_PRIVATE_EVAL_COMMA_OR_EMPTY(tail)                                               \
    KOSHMAR_PP_PRIVATE_EVAL_AUX_IF(                                                                \
        KOSHMAR_PP_PRIVATE_EVAL_TERM_IS_END(                                                       \
            KOSHMAR_PP_PRIVATE_EVAL_AUX_HEAD(KOSHMAR_PP_PRIVATE_EVAL_AUX_UNPARENTHESISE(tail))),   \
        KOSHMAR_PP_PRIVATE_EVAL_AUX_EMPTY(),                                                       \
        KOSHMAR_PP_PRIVATE_EVAL_AUX_COMMA())

#endif // KOSHMAR_PP_EVAL_ARGS_H
