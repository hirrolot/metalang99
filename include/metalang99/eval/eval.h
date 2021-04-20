#ifndef ML99_EVAL_EVAL_H
#define ML99_EVAL_EVAL_H

#include <metalang99/priv/util.h>

#include <metalang99/eval/acc.h>
#include <metalang99/eval/rec.h>
#include <metalang99/eval/syntax_checker.h>
#include <metalang99/eval/term.h>

#define ML99_PRIV_EVAL(...)                                                                        \
    ML99_PRIV_REC_UNROLL(ML99_PRIV_EVAL_MATCH(                                                     \
        ML99_PRIV_REC_STOP,                                                                        \
        (~),                                                                                       \
        0fspace,                                                                                   \
        ML99_PRIV_EVAL_ACC,                                                                        \
        __VA_ARGS__,                                                                               \
        (0end, ~),                                                                                 \
        ~))

// Recursion hooks {
#define ML99_PRIV_EVAL_MATCH_HOOK()         ML99_PRIV_EVAL_MATCH
#define ML99_PRIV_EVAL_0v_K_HOOK()          ML99_PRIV_EVAL_0v_K
#define ML99_PRIV_EVAL_0args_K_HOOK()       ML99_PRIV_EVAL_0args_K
#define ML99_PRIV_EVAL_0op_K_HOOK()         ML99_PRIV_EVAL_0op_K
#define ML99_PRIV_EVAL_0callUneval_K_HOOK() ML99_PRIV_EVAL_0callUneval_K
// }

#define ML99_PRIV_EVAL_MATCH(k, k_cx, folder, acc, head, ...)                                      \
    ML99_PRIV_CHECK_TERM(head, ML99_PRIV_TERM_MATCH)                                               \
    (head, ML99_PRIV_EVAL_)(k, k_cx, folder, acc, (__VA_ARGS__), ML99_PRIV_EVAL_TERM_DATA head)

// Reduction rules {
#define ML99_PRIV_EVAL_0v          ML99_PRIV_REC_CONTINUE(ML99_PRIV_EVAL_0v_K)
#define ML99_PRIV_EVAL_0args       ML99_PRIV_REC_CONTINUE(ML99_PRIV_EVAL_0args_K)
#define ML99_PRIV_EVAL_0op         ML99_PRIV_REC_CONTINUE(ML99_PRIV_EVAL_0op_K)
#define ML99_PRIV_EVAL_0callUneval ML99_PRIV_REC_CONTINUE(ML99_PRIV_EVAL_0callUneval_K)

// clang-format off
#define ML99_PRIV_EVAL_0fatal(...) ML99_PRIV_EVAL_0fatal_AUX(__VA_ARGS__)
#define ML99_PRIV_EVAL_0fatal_AUX(_k, _k_cx, _folder, _acc, _tail, f, message) \
    ML99_PRIV_REC_CONTINUE(ML99_PRIV_REC_STOP)((~), !"Metalang99 error" (f): message)
// clang-format on

#define ML99_PRIV_EVAL_0abort(_k, k_cx, folder, acc, _tail, ...)                                   \
    ML99_PRIV_REC_CONTINUE(ML99_PRIV_EVAL_MATCH)                                                   \
    (ML99_PRIV_REC_STOP, (~), 0fspace, ML99_PRIV_EVAL_ACC, __VA_ARGS__, (0end, ~), ~)

#define ML99_PRIV_EVAL_0end(k, k_cx, _folder, acc, _tail, _)                                       \
    ML99_PRIV_REC_CONTINUE(k)                                                                      \
    (ML99_PRIV_EXPAND k_cx, ML99_PRIV_EVAL_ACC_UNWRAP acc)
// } (Reduction rules)

// Continuations {
#define ML99_PRIV_EVAL_0v_K(k, k_cx, folder, acc, tail, ...)                                       \
    ML99_PRIV_MACHINE_REDUCE(                                                                      \
        k,                                                                                         \
        k_cx,                                                                                      \
        folder,                                                                                    \
        ML99_PRIV_EVAL_##folder(acc, __VA_ARGS__),                                                 \
        ML99_PRIV_EXPAND tail)

#define ML99_PRIV_EVAL_0args_K(k, k_cx, folder, acc, tail, op, ...)                                \
    ML99_PRIV_MACHINE_REDUCE(                                                                      \
        ML99_PRIV_EVAL_0callUneval_K,                                                              \
        (k, k_cx, folder, acc, tail, op),                                                          \
        0fcomma,                                                                                   \
        ML99_PRIV_EVAL_ACC_COMMA_SEP,                                                              \
        __VA_ARGS__,                                                                               \
        (0end, ~),                                                                                 \
        ~)

#define ML99_PRIV_EVAL_0op_K(k, k_cx, folder, acc, tail, op, ...)                                  \
    ML99_PRIV_MACHINE_REDUCE(                                                                      \
        ML99_PRIV_EVAL_0callUneval_K,                                                              \
        (k, k_cx, folder, acc, tail),                                                              \
        0fcomma,                                                                                   \
        ML99_PRIV_EVAL_ACC_COMMA_SEP,                                                              \
        op,                                                                                        \
        __VA_ARGS__,                                                                               \
        (0end, ~),                                                                                 \
        ~)

#define ML99_PRIV_EVAL_0callUneval_K(k, k_cx, folder, acc, tail, evaluated_op, ...)                \
    /* If the metafunction `evaluated_op` expands to many terms, we first evaluate these terms and \
     * accumulate them, otherwise, we just paste the single term with the rest of the tail. This   \
     * optimisation results in a huge performance improvement. */                                  \
    ML99_PRIV_IF(                                                                                  \
        ML99_PRIV_CONTAINS_COMMA(evaluated_op##_IMPL(__VA_ARGS__)),                                \
        ML99_PRIV_EVAL_0callUneval_K_REGULAR,                                                      \
        ML99_PRIV_EVAL_0callUneval_K_OPTIMIZED)                                                    \
    (k, k_cx, folder, acc, tail, evaluated_op##_IMPL(__VA_ARGS__))

#define ML99_PRIV_EVAL_0callUneval_K_OPTIMIZED(k, k_cx, folder, acc, tail, body)                   \
    ML99_PRIV_MACHINE_REDUCE(k, k_cx, folder, acc, body, ML99_PRIV_EXPAND tail)

#define ML99_PRIV_EVAL_0callUneval_K_REGULAR(k, k_cx, folder, acc, tail, ...)                      \
    ML99_PRIV_MACHINE_REDUCE(                                                                      \
        ML99_PRIV_EVAL_0v_K,                                                                       \
        (k, k_cx, folder, acc, tail),                                                              \
        0fspace,                                                                                   \
        ML99_PRIV_EVAL_ACC,                                                                        \
        __VA_ARGS__,                                                                               \
        (0end, ~),                                                                                 \
        ~)

#define ML99_PRIV_MACHINE_REDUCE(...) ML99_PRIV_EVAL_MATCH(__VA_ARGS__)
// } (Continuations)

#endif // ML99_EVAL_EVAL_H
