#ifndef EPILEPSY_EVAL_H
#define EPILEPSY_EVAL_H

#include <epilepsy/eval/acc.h>
#include <epilepsy/eval/control.h>
#include <epilepsy/eval/lfolder.h>
#include <epilepsy/eval/machine.h>
#include <epilepsy/eval/rec/control.h>
#include <epilepsy/eval/rec/unroll.h>
#include <epilepsy/eval/term.h>
#include <epilepsy/priv/aux.h>

/**
 * Evaluates a metaprogram.
 */
#define EPILEPSY_EVAL(...)                                                                         \
    EPILEPSY_PRIV_REC_UNROLL(EPILEPSY_PRIV_EVAL_MATCH(                                             \
        EPILEPSY_PRIV_REC_STOP,                                                                    \
        (~),                                                                                       \
        EPILEPSY_PRIV_EVAL_LFOLDER_APPEND,                                                         \
        EPILEPSY_PRIV_EVAL_ACC_EMPTY(),                                                            \
        __VA_ARGS__ EPILEPSY_PRIV_TERM_END(),                                                      \
        ~))

#ifndef DOXYGEN_IGNORE

#define EPILEPSY_PRIV_EVAL_MATCH_HOOK()   EPILEPSY_PRIV_EVAL_MATCH
#define EPILEPSY_PRIV_EVAL_0op_K_HOOK()   EPILEPSY_PRIV_EVAL_0op_K
#define EPILEPSY_PRIV_EVAL_0args_K_HOOK() EPILEPSY_PRIV_EVAL_0args_K

#define EPILEPSY_PRIV_EVAL_MATCH(k, k_cx, lfolder, acc, head, ...)                                 \
    EPILEPSY_PRIV_TERM_MATCH(                                                                      \
        EPILEPSY_PRIV_EVAL_, head, k, k_cx, lfolder, acc, EPILEPSY_PRIV_EVAL_CONTROL(__VA_ARGS__))

// Reduction rules {
#define EPILEPSY_PRIV_EVAL_0v(k, k_cx, lfolder, acc, tail, ...)                                    \
    EPILEPSY_PRIV_EVAL_MACHINE_REDUCE(                                                             \
        k, k_cx, lfolder, lfolder(acc, __VA_ARGS__), EPILEPSY_PRIV_EVAL_CONTROL_UNWRAP(tail))

#define EPILEPSY_PRIV_EVAL_0args(k, k_cx, lfolder, acc, tail, op, ...)                             \
    EPILEPSY_PRIV_EVAL_MACHINE_REDUCE(                                                             \
        EPILEPSY_PRIV_EVAL_0args_K_HOOK,                                                           \
        (k, k_cx, lfolder, acc, tail, op),                                                         \
        EPILEPSY_PRIV_EVAL_LFOLDER_COMMA,                                                          \
        EPILEPSY_PRIV_EVAL_ACC_EMPTY(),                                                            \
        __VA_ARGS__ EPILEPSY_PRIV_TERM_END(),                                                      \
        ~)

#define EPILEPSY_PRIV_EVAL_0op(k, k_cx, lfolder, acc, tail, op, ...)                               \
    EPILEPSY_PRIV_EVAL_MACHINE_REDUCE(                                                             \
        EPILEPSY_PRIV_EVAL_0op_K_HOOK,                                                             \
        (k, k_cx, lfolder, acc, tail, (__VA_ARGS__)),                                              \
        EPILEPSY_PRIV_EVAL_LFOLDER_APPEND,                                                         \
        EPILEPSY_PRIV_EVAL_ACC_EMPTY(),                                                            \
        op,                                                                                        \
        EPILEPSY_PRIV_TERM_END(),                                                                  \
        ~)

// clang-format off
#define EPILEPSY_PRIV_EVAL_0error(_k, _k_cx, _lfolder, _acc, _tail, f, ...)                        \
    EPILEPSY_PRIV_REC_CONTINUE(EPILEPSY_PRIV_REC_STOP, (~), !Epilepsy error (f): __VA_ARGS__)
// clang-format on

#define EPILEPSY_PRIV_EVAL_0end(k, k_cx, _lfolder, acc, _tail, _)                                  \
    EPILEPSY_PRIV_EVAL_MACHINE_CALL_K(k, k_cx, acc)
// }

// Continuations {
#define EPILEPSY_PRIV_EVAL_0args_K(k, k_cx, lfolder, acc, tail, evaluated_op, ...)                 \
    EPILEPSY_PRIV_INVOKE(                                                                          \
        EPILEPSY_PRIV_EVAL_MATCH,                                                                  \
        k,                                                                                         \
        k_cx,                                                                                      \
        lfolder,                                                                                   \
        acc,                                                                                       \
        evaluated_op(__VA_ARGS__) EPILEPSY_PRIV_EVAL_CONTROL_UNWRAP(tail))

#define EPILEPSY_PRIV_EVAL_0op_K(k, k_cx, lfolder, acc, tail, args, evaluated_op)                  \
    EPILEPSY_PRIV_INVOKE(                                                                          \
        EPILEPSY_PRIV_EVAL_MATCH,                                                                  \
        k,                                                                                         \
        k_cx,                                                                                      \
        lfolder,                                                                                   \
        acc,                                                                                       \
        EPILEPSY_CALL(evaluated_op, EPILEPSY_PRIV_UNPARENTHESISE(args))                            \
            EPILEPSY_PRIV_EVAL_CONTROL_UNWRAP(tail))
// }

#define EPILEPSY_PRIV_REC_UNROLL(...) EPILEPSY_PRIV_REC_0(__VA_ARGS__)

#endif // DOXYGEN_IGNORE

#endif // EPILEPSY_EVAL_H
