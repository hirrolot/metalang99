#ifndef KOSHMAR_PP_EVAL_H
#define KOSHMAR_PP_EVAL_H

#ifndef DOXYGEN_SHOULD_IGNORE_THIS

#include "eval/args.h"
#include "eval/aux.h"
#include "eval/hooks.h"
#include "eval/rec.h"
#include "eval/term.h"

#endif // DOXYGEN_SHOULD_IGNORE_THIS

#define KOSHMAR_PP_EVAL(...) KOSHMAR_PP_PRIVATE_EVAL(__VA_ARGS__)

#ifndef DOXYGEN_SHOULD_IGNORE_THIS

#define KOSHMAR_PP_PRIVATE_EVAL(...)                                                               \
    KOSHMAR_PP_PRIVATE_EVAL_REC_UNROLL(                                                            \
        KOSHMAR_PP_PRIVATE_EVAL_AUX(KOSHMAR_PP_PRIVATE_EVAL_REC_STOP, (~), __VA_ARGS__))

#define KOSHMAR_PP_PRIVATE_EVAL_AUX(k, k_cx, ...)                                                  \
    KOSHMAR_PP_PRIVATE_EVAL_MATCH(                                                                 \
        k,                                                                                         \
        k_cx,                                                                                      \
        KOSHMAR_PP_PRIVATE_EVAL_AUX_EMPTY_ACC(),                                                   \
        __VA_ARGS__ KOSHMAR_PP_PRIVATE_EVAL_TERM_END(),                                            \
        KOSHMAR_PP_PRIVATE_EVAL_TERM_END())

#define KOSHMAR_PP_PRIVATE_EVAL_MATCH(k, k_cx, acc, head, ...)                                     \
    KOSHMAR_PP_PRIVATE_EVAL_TERM_MATCH(                                                            \
        KOSHMAR_PP_PRIVATE_EVAL_MATCH_,                                                            \
        head,                                                                                      \
        k,                                                                                         \
        k_cx,                                                                                      \
        acc,                                                                                       \
        (__VA_ARGS__))

#define KOSHMAR_PP_PRIVATE_EVAL_MATCH_c(k, k_cx, acc, tail, op, ...)                               \
    KOSHMAR_PP_PRIVATE_EVAL_REC_CONTINUE(                                                          \
        KOSHMAR_PP_PRIVATE_EVAL_HOOKS_EVAL_ARGS,                                                   \
        KOSHMAR_PP_PRIVATE_EVAL_HOOKS_CALL_OP,                                                     \
        (k, k_cx, acc, tail, op),                                                                  \
        __VA_ARGS__)

#define KOSHMAR_PP_PRIVATE_EVAL_MATCH_v(k, k_cx, acc, tail, ...)                                   \
    KOSHMAR_PP_PRIVATE_EVAL_REC_CONTINUE(                                                          \
        KOSHMAR_PP_PRIVATE_EVAL_HOOKS_EVAL_MATCH,                                                  \
        k,                                                                                         \
        k_cx,                                                                                      \
        KOSHMAR_PP_PRIVATE_EVAL_AUX_EXTEND_ACC(acc, __VA_ARGS__),                                  \
        KOSHMAR_PP_PRIVATE_EVAL_AUX_UNPARENTHESISE(tail))

#define KOSHMAR_PP_PRIVATE_EVAL_MATCH_end(k, k_cx, acc, _tail, _)                                  \
    k(k_cx, KOSHMAR_PP_PRIVATE_EVAL_AUX_UNPARENTHESISE(acc))

#define KOSHMAR_PP_PRIVATE_EVAL_CALL_OP(cx, ...)                                                   \
    KOSHMAR_PP_PRIVATE_EVAL_AUX_CALL_MACRO(                                                        \
        KOSHMAR_PP_PRIVATE_EVAL_CALL_OP_AUX,                                                       \
        KOSHMAR_PP_PRIVATE_EVAL_AUX_UNPARENTHESISE(cx),                                            \
        __VA_ARGS__)

#define KOSHMAR_PP_PRIVATE_EVAL_CALL_OP_AUX(k, k_cx, acc, tail, op, ...)                           \
    KOSHMAR_PP_PRIVATE_EVAL_REC_CONTINUE(                                                          \
        KOSHMAR_PP_PRIVATE_EVAL_HOOKS_EVAL_MATCH,                                                  \
        k,                                                                                         \
        k_cx,                                                                                      \
        acc,                                                                                       \
        op(__VA_ARGS__) KOSHMAR_PP_PRIVATE_EVAL_AUX_UNPARENTHESISE(tail))

#endif // DOXYGEN_SHOULD_IGNORE_THIS

#endif // KOSHMAR_PP_EVAL_H
