/**
 * @file
 * @brief Evaluation of metaprograms.
 */

#ifndef AGONY_PP_EVAL_H
#define AGONY_PP_EVAL_H

#ifndef DOXYGEN_SHOULD_SKIP_THIS

#include "eval/args.h"
#include "eval/aux.h"
#include "eval/op.h"
#include "eval/rec.h"
#include "eval/term.h"

#define AGONY_PP_PRIVATE_EVAL_AUX_HOOK()   AGONY_PP_PRIVATE_EVAL_AUX
#define AGONY_PP_PRIVATE_EVAL_MATCH_HOOK() AGONY_PP_PRIVATE_EVAL_MATCH

#define AGONY_PP_PRIVATE_EVAL_MATCH_c_EVAL_ARGS_HOOK() AGONY_PP_PRIVATE_EVAL_MATCH_c_EVAL_ARGS
#define AGONY_PP_PRIVATE_EVAL_MATCH_c_CALL_OP_HOOK()   AGONY_PP_PRIVATE_EVAL_MATCH_c_CALL_OP

#endif // DOXYGEN_SHOULD_SKIP_THIS

/**
 * @brief Evaluates a metaprogram.
 */
#define AGONY_PP_EVAL(...) AGONY_PP_PRIVATE_EVAL(__VA_ARGS__)

#ifndef DOXYGEN_SHOULD_SKIP_THIS

#define AGONY_PP_PRIVATE_EVAL(...)                                                                 \
    AGONY_PP_PRIVATE_EVAL_REC_UNROLL(                                                              \
        AGONY_PP_PRIVATE_EVAL_AUX(AGONY_PP_PRIVATE_EVAL_REC_STOP, (~), __VA_ARGS__))

#define AGONY_PP_PRIVATE_EVAL_AUX(k, k_cx, ...)                                                    \
    AGONY_PP_PRIVATE_EVAL_MATCH(                                                                   \
        k,                                                                                         \
        k_cx,                                                                                      \
        AGONY_PP_PRIVATE_EVAL_AUX_EMPTY_ACC(),                                                     \
        __VA_ARGS__ AGONY_PP_PRIVATE_EVAL_TERM_END(),                                              \
        AGONY_PP_PRIVATE_EVAL_TERM_END())

#define AGONY_PP_PRIVATE_EVAL_MATCH(k, k_cx, acc, head, ...)                                       \
    AGONY_PP_PRIVATE_EVAL_TERM_MATCH(                                                              \
        AGONY_PP_PRIVATE_EVAL_MATCH_,                                                              \
        head,                                                                                      \
        k,                                                                                         \
        k_cx,                                                                                      \
        acc,                                                                                       \
        (__VA_ARGS__))

#define AGONY_PP_PRIVATE_EVAL_MATCH_c(k, k_cx, acc, tail, op, ...)                                 \
    AGONY_PP_PRIVATE_EVAL_REC_CONTINUE(                                                            \
        AGONY_PP_PRIVATE_EVAL_OP_HOOK,                                                             \
        (AGONY_PP_PRIVATE_EVAL_MATCH_c_EVAL_ARGS_HOOK, (k, k_cx, acc, tail, (__VA_ARGS__))),       \
        op)

#define AGONY_PP_PRIVATE_EVAL_MATCH_c_EVAL_ARGS(k, k_cx, acc, tail, args, evaluated_op)            \
    AGONY_PP_PRIVATE_EVAL_REC_CONTINUE(                                                            \
        AGONY_PP_PRIVATE_EVAL_ARGS_HOOK,                                                           \
        (AGONY_PP_PRIVATE_EVAL_MATCH_c_CALL_OP_HOOK, (k, k_cx, acc, tail, evaluated_op)),          \
        AGONY_PP_PRIVATE_EVAL_AUX_UNPARENTHESISE(args))

#define AGONY_PP_PRIVATE_EVAL_MATCH_c_CALL_OP(k, k_cx, acc, tail, evaluated_op, ...)               \
    AGONY_PP_PRIVATE_EVAL_REC_CONTINUE(                                                            \
        AGONY_PP_PRIVATE_EVAL_MATCH_HOOK,                                                          \
        (k, k_cx),                                                                                 \
        acc,                                                                                       \
        evaluated_op(__VA_ARGS__) AGONY_PP_PRIVATE_EVAL_AUX_UNPARENTHESISE(tail))

#define AGONY_PP_PRIVATE_EVAL_MATCH_v(k, k_cx, acc, tail, ...)                                     \
    AGONY_PP_PRIVATE_EVAL_REC_CONTINUE(                                                            \
        AGONY_PP_PRIVATE_EVAL_MATCH_HOOK,                                                          \
        (k, k_cx),                                                                                 \
        AGONY_PP_PRIVATE_EVAL_AUX_EXTEND_PARENTHESISED(acc, __VA_ARGS__),                          \
        AGONY_PP_PRIVATE_EVAL_AUX_UNPARENTHESISE(tail))

#define AGONY_PP_PRIVATE_EVAL_MATCH_end(k, k_cx, acc, _tail, _)                                    \
    AGONY_PP_PRIVATE_EVAL_REC_CONTINUE(k, k_cx, AGONY_PP_PRIVATE_EVAL_AUX_UNPARENTHESISE(acc))

#endif // DOXYGEN_SHOULD_SKIP_THIS

#endif // AGONY_PP_EVAL_H
