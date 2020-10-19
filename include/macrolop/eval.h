/**
 * @file
 * @brief Evaluation of metaprograms.
 */

#ifndef MACROLOP_EVAL_H
#define MACROLOP_EVAL_H

#ifndef DOXYGEN_SHOULD_SKIP_THIS

#include "eval/args.h"
#include "eval/aux.h"
#include "eval/rec/control.h"
#include "eval/rec/unroll.h"
#include "eval/term.h"

#define MACROLOP_PRIVATE_EVAL_AUX_HOOK()   MACROLOP_PRIVATE_EVAL_AUX
#define MACROLOP_PRIVATE_EVAL_MATCH_HOOK() MACROLOP_PRIVATE_EVAL_MATCH

#define MACROLOP_PRIVATE_EVAL_MATCH_REORDER_TRIVIAL_CALL_ARGS_HOOK()                               \
    MACROLOP_PRIVATE_EVAL_MATCH_REORDER_TRIVIAL_CALL_ARGS
#define MACROLOP_PRIVATE_EVAL_MATCH_CALL_OP_HOOK() MACROLOP_PRIVATE_EVAL_MATCH_CALL_OP

#endif // DOXYGEN_SHOULD_SKIP_THIS

/**
 * @brief Evaluates a metaprogram.
 */
#define MACROLOP_EVAL(...) MACROLOP_PRIVATE_EVAL(__VA_ARGS__)

#ifndef DOXYGEN_SHOULD_SKIP_THIS

#define MACROLOP_PRIVATE_EVAL(...)                                                                 \
    MACROLOP_PRIVATE_EVAL_REC_UNROLL(                                                              \
        MACROLOP_PRIVATE_EVAL_AUX(MACROLOP_PRIVATE_EVAL_REC_STOP, (~), __VA_ARGS__))

#define MACROLOP_PRIVATE_EVAL_AUX(k, k_cx, ...)                                                    \
    MACROLOP_PRIVATE_EVAL_MATCH(                                                                   \
        k,                                                                                         \
        k_cx,                                                                                      \
        MACROLOP_PRIVATE_EVAL_AUX_EMPTY_ACC(),                                                     \
        __VA_ARGS__ MACROLOP_PRIVATE_EVAL_TERM_END(),                                              \
        MACROLOP_PRIVATE_EVAL_TERM_END())

#define MACROLOP_PRIVATE_EVAL_MATCH(k, k_cx, acc, head, ...)                                       \
    MACROLOP_PRIVATE_EVAL_TERM_MATCH(                                                              \
        MACROLOP_PRIVATE_EVAL_MATCH_,                                                              \
        head,                                                                                      \
        k,                                                                                         \
        k_cx,                                                                                      \
        acc,                                                                                       \
        (__VA_ARGS__))

#define MACROLOP_PRIVATE_EVAL_MATCH_trivial_call(k, k_cx, acc, tail, op, ...)                      \
    MACROLOP_PRIVATE_EVAL_REC_CONTINUE(                                                            \
        MACROLOP_PRIVATE_EVAL_ARGS_HOOK,                                                           \
        (MACROLOP_PRIVATE_EVAL_MATCH_CALL_OP_HOOK, (k, k_cx, acc, tail, op)),                      \
        __VA_ARGS__)

#define MACROLOP_PRIVATE_EVAL_MATCH_call(k, k_cx, acc, tail, op, ...)                              \
    MACROLOP_PRIVATE_EVAL_REC_CONTINUE(                                                            \
        MACROLOP_PRIVATE_EVAL_AUX_HOOK,                                                            \
        (MACROLOP_PRIVATE_EVAL_MATCH_REORDER_TRIVIAL_CALL_ARGS_HOOK,                               \
         (k, k_cx, acc, tail, (__VA_ARGS__))),                                                     \
        op,                                                                                        \
        MACROLOP_PRIVATE_EVAL_AUX_EMPTY())

#define MACROLOP_PRIVATE_EVAL_MATCH_REORDER_TRIVIAL_CALL_ARGS(                                     \
    k,                                                                                             \
    k_cx,                                                                                          \
    acc,                                                                                           \
    tail,                                                                                          \
    args,                                                                                          \
    evaluated_op)                                                                                  \
    MACROLOP_PRIVATE_EVAL_MATCH_trivial_call(                                                      \
        k,                                                                                         \
        k_cx,                                                                                      \
        acc,                                                                                       \
        tail,                                                                                      \
        evaluated_op,                                                                              \
        MACROLOP_PRIVATE_EVAL_AUX_UNPARENTHESISE(args))

#define MACROLOP_PRIVATE_EVAL_MATCH_CALL_OP(k, k_cx, acc, tail, evaluated_op, ...)                 \
    MACROLOP_PRIVATE_EVAL_REC_CONTINUE(                                                            \
        MACROLOP_PRIVATE_EVAL_MATCH_HOOK,                                                          \
        (k, k_cx),                                                                                 \
        acc,                                                                                       \
        evaluated_op(__VA_ARGS__) MACROLOP_PRIVATE_EVAL_AUX_UNPARENTHESISE(tail))

#define MACROLOP_PRIVATE_EVAL_MATCH_v(k, k_cx, acc, tail, ...)                                     \
    MACROLOP_PRIVATE_EVAL_REC_CONTINUE(                                                            \
        MACROLOP_PRIVATE_EVAL_MATCH_HOOK,                                                          \
        (k, k_cx),                                                                                 \
        MACROLOP_PRIVATE_EVAL_AUX_EXTEND_PARENTHESISED(acc, __VA_ARGS__),                          \
        MACROLOP_PRIVATE_EVAL_AUX_UNPARENTHESISE(tail))

#define MACROLOP_PRIVATE_EVAL_MATCH_end(k, k_cx, acc, _tail, _)                                    \
    MACROLOP_PRIVATE_EVAL_REC_CONTINUE(k, k_cx, MACROLOP_PRIVATE_EVAL_AUX_UNPARENTHESISE(acc))

#endif // DOXYGEN_SHOULD_SKIP_THIS

#endif // MACROLOP_EVAL_H
