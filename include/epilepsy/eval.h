/**
 * @file
 * @brief Evaluation of metaprograms.
 */

#ifndef EPILEPSY_EVAL_H
#define EPILEPSY_EVAL_H

#ifndef DOXYGEN_SHOULD_SKIP_THIS

#include <epilepsy/eval/acc.h>
#include <epilepsy/eval/control.h>
#include <epilepsy/eval/lfolder.h>
#include <epilepsy/eval/machine.h>
#include <epilepsy/eval/rec/control.h>
#include <epilepsy/eval/rec/unroll.h>
#include <epilepsy/eval/term.h>
#include <epilepsy/priv/aux.h>

#define EPILEPSY_PRIV_EVAL_MATCH_HOOK()          EPILEPSY_PRIV_EVAL_MATCH
#define EPILEPSY_PRIV_EVAL_args_TRANSFORM_HOOK() EPILEPSY_PRIV_EVAL_args_TRANSFORM
#define EPILEPSY_PRIV_EVAL_op_TRANSFORM_HOOK()   EPILEPSY_PRIV_EVAL_op_TRANSFORM

#endif // DOXYGEN_SHOULD_SKIP_THIS

/**
 * @brief Evaluates a metaprogram.
 */
#define EPILEPSY_EVAL(...) EPILEPSY_PRIV_EVAL(__VA_ARGS__)

#ifndef DOXYGEN_SHOULD_SKIP_THIS

#define EPILEPSY_PRIV_EVAL(...)                                                                    \
    EPILEPSY_PRIV_EVAL_REC_UNROLL(EPILEPSY_PRIV_EVAL_MATCH(                                        \
        EPILEPSY_PRIV_EVAL_REC_STOP, (~), EPILEPSY_PRIV_EVAL_LFOLDER_APPEND,                       \
        EPILEPSY_PRIV_EVAL_ACC_EMPTY(), __VA_ARGS__ EPILEPSY_PRIV_EVAL_TERM_END(), ~))

#define EPILEPSY_PRIV_EVAL_MATCH(...) EPILEPSY_PRIV_EVAL_MATCH_AUX(__VA_ARGS__)
#define EPILEPSY_PRIV_EVAL_MATCH_AUX(k, k_cx, lfolder, acc, head, ...)                             \
    EPILEPSY_PRIV_EVAL_TERM_MATCH(EPILEPSY_PRIV_EVAL_, head, k, k_cx, lfolder, acc, (__VA_ARGS__))

// Reduction rules {
#define EPILEPSY_PRIV_EVAL_v(k, k_cx, lfolder, acc, tail, ...)                                     \
    EPILEPSY_PRIV_EVAL_MACHINE_OP_CONTINUE(                                                        \
        k, k_cx, lfolder, lfolder(acc, __VA_ARGS__), EPILEPSY_PRIV_EVAL_CONTROL_UNWRAP(tail))

#define EPILEPSY_PRIV_EVAL_op(k, k_cx, lfolder, acc, tail, op, ...)                                \
    EPILEPSY_PRIV_EVAL_MACHINE_OP_CONTINUE(                                                        \
        EPILEPSY_PRIV_EVAL_op_TRANSFORM_HOOK, (k, k_cx, lfolder, acc, tail, op),                   \
        EPILEPSY_PRIV_EVAL_LFOLDER_INTERSPERSE_COMMA, EPILEPSY_PRIV_EVAL_ACC_EMPTY(),              \
        __VA_ARGS__ EPILEPSY_PRIV_EVAL_TERM_END(), ~)

#define EPILEPSY_PRIV_EVAL_args(k, k_cx, lfolder, acc, tail, op, ...)                              \
    EPILEPSY_PRIV_EVAL_MACHINE_OP_CONTINUE(                                                        \
        EPILEPSY_PRIV_EVAL_args_TRANSFORM_HOOK, (k, k_cx, lfolder, acc, tail, (__VA_ARGS__)),      \
        EPILEPSY_PRIV_EVAL_LFOLDER_APPEND, EPILEPSY_PRIV_EVAL_ACC_EMPTY(), op,                     \
        EPILEPSY_PRIV_EVAL_TERM_END(), ~)

#define EPILEPSY_PRIV_EVAL_end(k, k_cx, _lfolder, acc, _tail, _)                                   \
    EPILEPSY_PRIV_EVAL_MACHINE_OP_STOP(k, k_cx, acc)
// }

// Continuations {
#define EPILEPSY_PRIV_EVAL_op_TRANSFORM(k, k_cx, lfolder, acc, tail, evaluated_op, ...)            \
    EPILEPSY_PRIV_EVAL_MATCH(                                                                      \
        k, k_cx, lfolder, acc, evaluated_op(__VA_ARGS__) EPILEPSY_PRIV_EVAL_CONTROL_UNWRAP(tail))

#define EPILEPSY_PRIV_EVAL_args_TRANSFORM(k, k_cx, lfolder, acc, tail, args, evaluated_op)         \
    EPILEPSY_PRIV_EVAL_MATCH(                                                                      \
        k, k_cx, lfolder, acc,                                                                     \
        call(evaluated_op, EPILEPSY_PRIV_UNPARENTHESISE(args))                                     \
            EPILEPSY_PRIV_EVAL_CONTROL_UNWRAP(tail))
// }

#endif // DOXYGEN_SHOULD_SKIP_THIS

#endif // EPILEPSY_EVAL_H
