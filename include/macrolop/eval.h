/**
 * @file
 * @brief Evaluation of metaprograms.
 */

#ifndef MACROLOP_EVAL_H
#define MACROLOP_EVAL_H

#ifndef DOXYGEN_SHOULD_SKIP_THIS

#include "eval/acc.h"
#include "eval/args.h"
#include "eval/aux.h"
#include "eval/rec/control.h"
#include "eval/rec/unroll.h"
#include "eval/term.h"

#define MACROLOP_PRIV_EVAL_AUX_HOOK()   MACROLOP_PRIV_EVAL_AUX
#define MACROLOP_PRIV_EVAL_MATCH_HOOK() MACROLOP_PRIV_EVAL_MATCH

#define MACROLOP_PRIV_EVAL_MATCH_TRIVIAL_CALL_HOOK() MACROLOP_PRIV_EVAL_MATCH_TRIVIAL_CALL
#define MACROLOP_PRIV_EVAL_MATCH_CALL_OP_HOOK()      MACROLOP_PRIV_EVAL_MATCH_CALL_OP

#endif // DOXYGEN_SHOULD_SKIP_THIS

/**
 * @brief Evaluates a metaprogram.
 */
#define MACROLOP_EVAL(...) MACROLOP_PRIV_EVAL(__VA_ARGS__)

#ifndef DOXYGEN_SHOULD_SKIP_THIS

#define MACROLOP_PRIV_EVAL(...)                                                                    \
    MACROLOP_PRIV_EVAL_REC_UNROLL(                                                                 \
        MACROLOP_PRIV_EVAL_AUX(MACROLOP_PRIV_EVAL_REC_STOP, (~), __VA_ARGS__))

#define MACROLOP_PRIV_EVAL_AUX(k, k_cx, ...)                                                       \
    MACROLOP_PRIV_EVAL_MATCH(                                                                      \
        k, k_cx, MACROLOP_PRIV_EVAL_ACC_EMPTY(), __VA_ARGS__ MACROLOP_PRIV_EVAL_TERM_END(), ~)

#define MACROLOP_PRIV_EVAL_MATCH(...) MACROLOP_PRIV_EVAL_MATCH_AUX(__VA_ARGS__)
#define MACROLOP_PRIV_EVAL_MATCH_AUX(k, k_cx, acc, head, ...)                                      \
    MACROLOP_PRIV_EVAL_TERM_MATCH(MACROLOP_PRIV_EVAL_MATCH_, head, k, k_cx, acc, (__VA_ARGS__))

#define MACROLOP_PRIV_EVAL_MATCH_trivial_call(k, k_cx, acc, tail, op, ...)                         \
    MACROLOP_PRIV_EVAL_REC_CONTINUE(                                                               \
        MACROLOP_PRIV_EVAL_ARGS_HOOK,                                                              \
        (MACROLOP_PRIV_EVAL_MATCH_CALL_OP_HOOK, (k, k_cx, acc, tail, op)), __VA_ARGS__)

#define MACROLOP_PRIV_EVAL_MATCH_call(k, k_cx, acc, tail, op, ...)                                 \
    MACROLOP_PRIV_EVAL_REC_CONTINUE(                                                               \
        MACROLOP_PRIV_EVAL_AUX_HOOK,                                                               \
        (MACROLOP_PRIV_EVAL_MATCH_TRIVIAL_CALL_HOOK, (k, k_cx, acc, tail, (__VA_ARGS__))), op,     \
        MACROLOP_PRIV_EVAL_AUX_EMPTY())

#define MACROLOP_PRIV_EVAL_MATCH_v(k, k_cx, acc, tail, ...)                                        \
    MACROLOP_PRIV_EVAL_MACHINE_OP_CONTINUE(                                                        \
        MACROLOP_PRIV_EVAL_MATCH_HOOK, k, k_cx, MACROLOP_PRIV_EVAL_ACC_EXTEND(acc, __VA_ARGS__),   \
        tail)

#define MACROLOP_PRIV_EVAL_MATCH_end(k, k_cx, acc, _tail, _)                                       \
    MACROLOP_PRIV_EVAL_MACHINE_OP_STOP(k, k_cx, acc)

#define MACROLOP_PRIV_EVAL_MATCH_TRIVIAL_CALL(k, k_cx, acc, tail, args, evaluated_op)              \
    MACROLOP_PRIV_EVAL_MATCH(                                                                      \
        k, k_cx, acc,                                                                              \
        call(evaluated_op, MACROLOP_PRIV_EVAL_AUX_UNPARENTHESISE(args))                            \
            MACROLOP_PRIV_EVAL_CONTROL_UNWRAP(tail))

#define MACROLOP_PRIV_EVAL_MATCH_CALL_OP(k, k_cx, acc, tail, evaluated_op, ...)                    \
    MACROLOP_PRIV_EVAL_MACHINE_OP_CONTINUE(                                                        \
        MACROLOP_PRIV_EVAL_MATCH_HOOK, k, k_cx, acc,                                               \
        (evaluated_op(__VA_ARGS__) MACROLOP_PRIV_EVAL_CONTROL_UNWRAP(tail)))

#endif // DOXYGEN_SHOULD_SKIP_THIS

#endif // MACROLOP_EVAL_H
