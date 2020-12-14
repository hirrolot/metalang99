/**
 * @file
 * @brief Evaluation of metaprograms.
 */

#ifndef EPILEPSY_EVAL_H
#define EPILEPSY_EVAL_H

#ifndef DOXYGEN_SHOULD_SKIP_THIS

#include <epilepsy/eval/acc.h>
#include <epilepsy/eval/machine.h>
#include <epilepsy/eval/patch_with_commas.h>
#include <epilepsy/eval/rec/control.h>
#include <epilepsy/eval/rec/unroll.h>
#include <epilepsy/eval/term.h>
#include <epilepsy/priv/aux.h>

#define EPILEPSY_PRIV_EVAL_AUX_HOOK()   EPILEPSY_PRIV_EVAL_AUX
#define EPILEPSY_PRIV_EVAL_MATCH_HOOK() EPILEPSY_PRIV_EVAL_MATCH

#define EPILEPSY_PRIV_EVAL_MATCH_args_TRANSFORM_HOOK() EPILEPSY_PRIV_EVAL_MATCH_args_TRANSFORM
#define EPILEPSY_PRIV_EVAL_MATCH_op_TRANSFORM_HOOK()   EPILEPSY_PRIV_EVAL_MATCH_op_TRANSFORM

#endif // DOXYGEN_SHOULD_SKIP_THIS

/**
 * @brief Evaluates a metaprogram.
 */
#define EPILEPSY_EVAL(...) EPILEPSY_PRIV_EVAL(__VA_ARGS__)

#ifndef DOXYGEN_SHOULD_SKIP_THIS

#define EPILEPSY_PRIV_EVAL(...)                                                                    \
    EPILEPSY_PRIV_EVAL_REC_UNROLL(EPILEPSY_PRIV_EVAL_MATCH(                                        \
        EPILEPSY_PRIV_EVAL_REC_STOP, (~), EPILEPSY_PRIV_EVAL_ACC_EMPTY(),                          \
        __VA_ARGS__ EPILEPSY_PRIV_EVAL_TERM_END(), ~))

#define EPILEPSY_PRIV_EVAL_MATCH(...) EPILEPSY_PRIV_EVAL_MATCH_AUX(__VA_ARGS__)
#define EPILEPSY_PRIV_EVAL_MATCH_AUX(k, k_cx, acc, head, ...)                                      \
    EPILEPSY_PRIV_EVAL_TERM_MATCH(EPILEPSY_PRIV_EVAL_MATCH_, head, k, k_cx, acc, (__VA_ARGS__))

#define EPILEPSY_PRIV_EVAL_MATCH_v(k, k_cx, acc, tail, ...)                                        \
    EPILEPSY_PRIV_EVAL_MACHINE_OP_CONTINUE(                                                        \
        k, k_cx, EPILEPSY_PRIV_EVAL_ACC_EXTEND(acc, __VA_ARGS__),                                  \
        EPILEPSY_PRIV_EVAL_ACC_UNWRAP(tail))

#define EPILEPSY_PRIV_EVAL_MATCH_op(k, k_cx, acc, tail, op, ...)                                   \
    EPILEPSY_PRIV_EVAL_MACHINE_OP_CONTINUE(                                                        \
        EPILEPSY_PRIV_EVAL_MATCH_op_TRANSFORM_HOOK, (k, k_cx, acc, tail, op),                      \
        EPILEPSY_PRIV_EVAL_ACC_EMPTY(),                                                            \
        EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS(__VA_ARGS__) EPILEPSY_PRIV_EVAL_TERM_END(), ~)

#define EPILEPSY_PRIV_EVAL_MATCH_args(k, k_cx, acc, tail, op, ...)                                 \
    EPILEPSY_PRIV_EVAL_MACHINE_OP_CONTINUE(                                                        \
        EPILEPSY_PRIV_EVAL_MATCH_args_TRANSFORM_HOOK, (k, k_cx, acc, tail, (__VA_ARGS__)),         \
        EPILEPSY_PRIV_EVAL_ACC_EMPTY(), op, EPILEPSY_PRIV_EVAL_TERM_END(), ~)

#define EPILEPSY_PRIV_EVAL_MATCH_end(k, k_cx, acc, _tail, _)                                       \
    EPILEPSY_PRIV_EVAL_MACHINE_OP_STOP(k, k_cx, acc)

#define EPILEPSY_PRIV_EVAL_MATCH_op_TRANSFORM(k, k_cx, acc, tail, evaluated_op, ...)               \
    EPILEPSY_PRIV_EVAL_MATCH(                                                                      \
        k, k_cx, acc, evaluated_op(__VA_ARGS__) EPILEPSY_PRIV_EVAL_CONTROL_UNWRAP(tail))

#define EPILEPSY_PRIV_EVAL_MATCH_args_TRANSFORM(k, k_cx, acc, tail, args, evaluated_op)            \
    EPILEPSY_PRIV_EVAL_MATCH(                                                                      \
        k, k_cx, acc,                                                                              \
        call(evaluated_op, EPILEPSY_PRIV_AUX_UNPARENTHESISE(args))                                 \
            EPILEPSY_PRIV_EVAL_CONTROL_UNWRAP(tail))

#endif // DOXYGEN_SHOULD_SKIP_THIS

#endif // EPILEPSY_EVAL_H
