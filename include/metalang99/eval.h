/**
 * @file
 * The metaprogram evaluator.
 */

#ifndef METALANG99_EVAL_H
#define METALANG99_EVAL_H

#include <metalang99/eval/rec/control.h>
#include <metalang99/eval/rec/unroll.h>

#include <metalang99/eval/acc.h>
#include <metalang99/eval/syntax_checker.h>
#include <metalang99/eval/term.h>

#include <metalang99/priv/util.h>

/**
 * Evaluates a metaprogram.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/eval.h>
 * #include <metalang99/lang.h>
 *
 * #define F_IMPL(x, y) v(x + y)
 *
 * M_eval(v(abc ~ 123), M_call(F, v(1, 2)))
 * @endcode
 */
#define METALANG99_eval(...)                                                                       \
    METALANG99_PRIV_REC_UNROLL(METALANG99_PRIV_EVAL_MATCH(                                         \
        METALANG99_PRIV_REC_STOP,                                                                  \
        (~),                                                                                       \
        0fappend,                                                                                  \
        METALANG99_PRIV_EVAL_ACC(),                                                                \
        __VA_ARGS__,                                                                               \
        (0end, ~),                                                                                 \
        ~))

#ifndef DOXYGEN_IGNORE

#define METALANG99_PRIV_REC_UNROLL(...) METALANG99_PRIV_REC_0(__VA_ARGS__)

// Recursion hooks {
#define METALANG99_PRIV_EVAL_MATCH_HOOK()     METALANG99_PRIV_EVAL_MATCH
#define METALANG99_PRIV_EVAL_0v_K_HOOK()      METALANG99_PRIV_EVAL_0v_K
#define METALANG99_PRIV_EVAL_0args_K_HOOK()   METALANG99_PRIV_EVAL_0args_K
#define METALANG99_PRIV_EVAL_0op_K_HOOK()     METALANG99_PRIV_EVAL_0op_K
#define METALANG99_PRIV_EVAL_0callTr_K_HOOK() METALANG99_PRIV_EVAL_0callTr_K
// }

#define METALANG99_PRIV_EVAL_MATCH(k, k_cx, folder, acc, head, ...)                                \
    METALANG99_PRIV_CHECK_TERM(head, METALANG99_PRIV_TERM_MATCH)                                   \
    (head, METALANG99_PRIV_EVAL_)(                                                                 \
        k,                                                                                         \
        k_cx,                                                                                      \
        folder,                                                                                    \
        acc,                                                                                       \
        (__VA_ARGS__),                                                                             \
        METALANG99_PRIV_EVAL_TERM_DATA head)

// Reduction rules {
#define METALANG99_PRIV_EVAL_0v      METALANG99_PRIV_REC_CONTINUE(METALANG99_PRIV_EVAL_0v_K)
#define METALANG99_PRIV_EVAL_0args   METALANG99_PRIV_REC_CONTINUE(METALANG99_PRIV_EVAL_0args_K)
#define METALANG99_PRIV_EVAL_0op     METALANG99_PRIV_REC_CONTINUE(METALANG99_PRIV_EVAL_0op_K)
#define METALANG99_PRIV_EVAL_0callTr METALANG99_PRIV_REC_CONTINUE(METALANG99_PRIV_EVAL_0callTr_K)

#define METALANG99_PRIV_EVAL_0fatal(...) METALANG99_PRIV_EVAL_0fatal_EXPANDED(__VA_ARGS__)
#define METALANG99_PRIV_EVAL_0fatal_EXPANDED(_k, _k_cx, _folder, _acc, _tail, f, message)          \
    /* clang-format off */                                                                         \
    METALANG99_PRIV_REC_CONTINUE(METALANG99_PRIV_REC_STOP)((~), !"Metalang99 error" (f) : message) /* clang-format on */

#define METALANG99_PRIV_EVAL_0abort(_k, k_cx, folder, acc, _tail, ...)                             \
    METALANG99_PRIV_REC_CONTINUE(METALANG99_PRIV_EVAL_MATCH)                                       \
    (METALANG99_PRIV_REC_STOP, (~), 0fappend, METALANG99_PRIV_EVAL_ACC(), __VA_ARGS__, (0end, ~), ~)

#define METALANG99_PRIV_EVAL_0end(k, k_cx, _folder, acc, _tail, _)                                 \
    METALANG99_PRIV_REC_CONTINUE(k)                                                                \
    (METALANG99_PRIV_EXPAND k_cx, METALANG99_PRIV_EVAL_ACC_UNWRAP acc)
// } (Reduction rules)

// Continuations {
#define METALANG99_PRIV_EVAL_0v_K(k, k_cx, folder, acc, tail, ...)                                 \
    METALANG99_PRIV_MACHINE_REDUCE(                                                                \
        k,                                                                                         \
        k_cx,                                                                                      \
        folder,                                                                                    \
        METALANG99_PRIV_EVAL_##folder(acc, __VA_ARGS__),                                           \
        METALANG99_PRIV_EXPAND tail)

#define METALANG99_PRIV_EVAL_0args_K(k, k_cx, folder, acc, tail, op, ...)                          \
    METALANG99_PRIV_MACHINE_REDUCE(                                                                \
        METALANG99_PRIV_EVAL_0callTr_K,                                                            \
        (k, k_cx, folder, acc, tail, op),                                                          \
        0fcomma,                                                                                   \
        METALANG99_PRIV_EVAL_ACC_COMMA_SEP(),                                                      \
        __VA_ARGS__,                                                                               \
        (0end, ~),                                                                                 \
        ~)

#define METALANG99_PRIV_EVAL_0op_K(k, k_cx, folder, acc, tail, op, ...)                            \
    METALANG99_PRIV_MACHINE_REDUCE(                                                                \
        METALANG99_PRIV_EVAL_0callTr_K,                                                            \
        (k, k_cx, folder, acc, tail),                                                              \
        0fcomma,                                                                                   \
        METALANG99_PRIV_EVAL_ACC_COMMA_SEP(),                                                      \
        op,                                                                                        \
        __VA_ARGS__,                                                                               \
        (0end, ~),                                                                                 \
        ~)

#define METALANG99_PRIV_EVAL_0callTr_K(k, k_cx, folder, acc, tail, evaluated_op, ...)              \
    /* If the metafunction `evaluated_op` expands to many terms, we first evaluate these terms and \
     * accumulate them, otherwise, we just paste the single term with the rest of the tail. This   \
     * optimisation results in a huge performance improvement.*/                                   \
    METALANG99_PRIV_IF(                                                                            \
        METALANG99_PRIV_CONTAINS_COMMA(evaluated_op##_IMPL(__VA_ARGS__)),                          \
        METALANG99_PRIV_EVAL_0callTr_K_REGULAR,                                                    \
        METALANG99_PRIV_EVAL_0callTr_K_OPTIMIZED)                                                  \
    (k, k_cx, folder, acc, tail, evaluated_op##_IMPL(__VA_ARGS__))

#define METALANG99_PRIV_EVAL_0callTr_K_OPTIMIZED(k, k_cx, folder, acc, tail, ...)                  \
    METALANG99_PRIV_MACHINE_REDUCE(k, k_cx, folder, acc, __VA_ARGS__, METALANG99_PRIV_EXPAND tail)

#define METALANG99_PRIV_EVAL_0callTr_K_REGULAR(k, k_cx, folder, acc, tail, ...)                    \
    METALANG99_PRIV_MACHINE_REDUCE(                                                                \
        METALANG99_PRIV_EVAL_0v_K,                                                                 \
        (k, k_cx, folder, acc, tail),                                                              \
        0fappend,                                                                                  \
        METALANG99_PRIV_EVAL_ACC(),                                                                \
        __VA_ARGS__,                                                                               \
        (0end, ~),                                                                                 \
        ~)

#define METALANG99_PRIV_MACHINE_REDUCE(...) METALANG99_PRIV_EVAL_MATCH(__VA_ARGS__)
// } (Continuations)

// Aliases {
#ifndef METALANG99_NO_SMALL_PREFIX

#define M_eval METALANG99_eval

#endif // METALANG99_NO_SMALL_PREFIX
// }

#endif // DOXYGEN_IGNORE

#endif // METALANG99_EVAL_H
