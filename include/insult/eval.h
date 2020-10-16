/**
 * @file
 * @brief Evaluation of metaprograms.
 */

#ifndef INSULT_EVAL_H
#define INSULT_EVAL_H

#ifndef DOXYGEN_SHOULD_SKIP_THIS

#include "eval/args.h"
#include "eval/aux.h"
#include "eval/op.h"
#include "eval/rec.h"
#include "eval/term.h"

#define INSULT_PRIVATE_EVAL_AUX_HOOK()   INSULT_PRIVATE_EVAL_AUX
#define INSULT_PRIVATE_EVAL_MATCH_HOOK() INSULT_PRIVATE_EVAL_MATCH

#define INSULT_PRIVATE_EVAL_MATCH_c_EVAL_ARGS_HOOK() INSULT_PRIVATE_EVAL_MATCH_c_EVAL_ARGS
#define INSULT_PRIVATE_EVAL_MATCH_c_CALL_OP_HOOK()   INSULT_PRIVATE_EVAL_MATCH_c_CALL_OP

#endif // DOXYGEN_SHOULD_SKIP_THIS

/**
 * @brief Evaluates a metaprogram.
 */
#define INSULT_EVAL(...) INSULT_PRIVATE_EVAL(__VA_ARGS__)

#ifndef DOXYGEN_SHOULD_SKIP_THIS

#define INSULT_PRIVATE_EVAL(...)                                                                   \
    INSULT_PRIVATE_EVAL_REC_UNROLL(                                                                \
        INSULT_PRIVATE_EVAL_AUX(INSULT_PRIVATE_EVAL_REC_STOP, (~), __VA_ARGS__))

#define INSULT_PRIVATE_EVAL_AUX(k, k_cx, ...)                                                      \
    INSULT_PRIVATE_EVAL_MATCH(                                                                     \
        k,                                                                                         \
        k_cx,                                                                                      \
        INSULT_PRIVATE_EVAL_AUX_EMPTY_ACC(),                                                       \
        __VA_ARGS__ INSULT_PRIVATE_EVAL_TERM_END(),                                                \
        INSULT_PRIVATE_EVAL_TERM_END())

#define INSULT_PRIVATE_EVAL_MATCH(k, k_cx, acc, head, ...)                                         \
    INSULT_PRIVATE_EVAL_TERM_MATCH(INSULT_PRIVATE_EVAL_MATCH_, head, k, k_cx, acc, (__VA_ARGS__))

#define INSULT_PRIVATE_EVAL_MATCH_call(k, k_cx, acc, tail, op, ...)                                \
    INSULT_PRIVATE_EVAL_REC_CONTINUE(                                                              \
        INSULT_PRIVATE_EVAL_OP_HOOK,                                                               \
        (INSULT_PRIVATE_EVAL_MATCH_c_EVAL_ARGS_HOOK, (k, k_cx, acc, tail, (__VA_ARGS__))),         \
        op)

#define INSULT_PRIVATE_EVAL_MATCH_c_EVAL_ARGS(k, k_cx, acc, tail, args, evaluated_op)              \
    INSULT_PRIVATE_EVAL_REC_CONTINUE(                                                              \
        INSULT_PRIVATE_EVAL_ARGS_HOOK,                                                             \
        (INSULT_PRIVATE_EVAL_MATCH_c_CALL_OP_HOOK, (k, k_cx, acc, tail, evaluated_op)),            \
        INSULT_PRIVATE_EVAL_AUX_UNPARENTHESISE(args))

#define INSULT_PRIVATE_EVAL_MATCH_c_CALL_OP(k, k_cx, acc, tail, evaluated_op, ...)                 \
    INSULT_PRIVATE_EVAL_REC_CONTINUE(                                                              \
        INSULT_PRIVATE_EVAL_MATCH_HOOK,                                                            \
        (k, k_cx),                                                                                 \
        acc,                                                                                       \
        evaluated_op(__VA_ARGS__) INSULT_PRIVATE_EVAL_AUX_UNPARENTHESISE(tail))

#define INSULT_PRIVATE_EVAL_MATCH_v(k, k_cx, acc, tail, ...)                                       \
    INSULT_PRIVATE_EVAL_REC_CONTINUE(                                                              \
        INSULT_PRIVATE_EVAL_MATCH_HOOK,                                                            \
        (k, k_cx),                                                                                 \
        INSULT_PRIVATE_EVAL_AUX_EXTEND_PARENTHESISED(acc, __VA_ARGS__),                            \
        INSULT_PRIVATE_EVAL_AUX_UNPARENTHESISE(tail))

#define INSULT_PRIVATE_EVAL_MATCH_end(k, k_cx, acc, _tail, _)                                      \
    INSULT_PRIVATE_EVAL_REC_CONTINUE(k, k_cx, INSULT_PRIVATE_EVAL_AUX_UNPARENTHESISE(acc))

#endif // DOXYGEN_SHOULD_SKIP_THIS

#endif // INSULT_EVAL_H
