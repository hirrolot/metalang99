#ifndef KOSHMAR_PP_EVAL_EVAL_H
#define KOSHMAR_PP_EVAL_EVAL_H

#include "../private/aux.h"
#include "../private/rec.h"

#include "args.h"
#include "term.h"

#define KOSHMAR_PP_PRIVATE_EVAL(...)                                                               \
    KOSHMAR_PP_PRIVATE_REC_UNROLL(                                                                 \
        KOSHMAR_PP_PRIVATE_EVAL_AUX(KOSHMAR_PP_PRIVATE_REC_STOP, (~), __VA_ARGS__))

#define KOSHMAR_PP_PRIVATE_EVAL_AUX(k, k_cx, ...)                                                  \
    KOSHMAR_PP_PRIVATE_EVAL_MATCH(                                                                 \
        (KOSHMAR_PP_PRIVATE_EMPTY()),                                                              \
        k,                                                                                         \
        k_cx,                                                                                      \
        __VA_ARGS__ KOSHMAR_PP_PRIVATE_EVAL_TERM_END(),                                            \
        KOSHMAR_PP_PRIVATE_EVAL_TERM_END())

#define KOSHMAR_PP_PRIVATE_EVAL_AUX_HOOK()   KOSHMAR_PP_PRIVATE_EVAL_AUX
#define KOSHMAR_PP_PRIVATE_EVAL_MATCH_HOOK() KOSHMAR_PP_PRIVATE_EVAL_MATCH

#define KOSHMAR_PP_PRIVATE_EVAL_MATCH(acc, k, k_cx, head, ...)                                     \
    KOSHMAR_PP_PRIVATE_EVAL_TERM_MATCH(                                                            \
        KOSHMAR_PP_PRIVATE_EVAL_MATCH_,                                                            \
        head,                                                                                      \
        acc,                                                                                       \
        k,                                                                                         \
        k_cx,                                                                                      \
        (__VA_ARGS__))

#define KOSHMAR_PP_PRIVATE_EVAL_MATCH_c(acc, k, k_cx, tail, op, ...)                               \
    KOSHMAR_PP_PRIVATE_REC_CONTINUE(                                                               \
        KOSHMAR_PP_PRIVATE_EVAL_ARGS_HOOK,                                                         \
        k,                                                                                         \
        k_cx,                                                                                      \
        acc,                                                                                       \
        op,                                                                                        \
        tail,                                                                                      \
        __VA_ARGS__)

#define KOSHMAR_PP_PRIVATE_EVAL_MATCH_v(acc, k, k_cx, tail, ...)                                   \
    KOSHMAR_PP_PRIVATE_REC_CONTINUE(                                                               \
        KOSHMAR_PP_PRIVATE_EVAL_MATCH_HOOK,                                                        \
        (KOSHMAR_PP_PRIVATE_UNPARENTHESISE(acc) __VA_ARGS__),                                      \
        k,                                                                                         \
        k_cx,                                                                                      \
        KOSHMAR_PP_PRIVATE_UNPARENTHESISE(tail))

#define KOSHMAR_PP_PRIVATE_EVAL_MATCH_end(acc, k, k_cx, _tail, _)                                  \
    k(k_cx, KOSHMAR_PP_PRIVATE_UNPARENTHESISE(acc))

#endif // KOSHMAR_PP_EVAL_EVAL_H
