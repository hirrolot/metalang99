/**
 * @file
 * The metaprogram evaluator.
 */

#ifndef METALANG99_EVAL_H
#define METALANG99_EVAL_H

#include <metalang99/eval/rec/control.h>
#include <metalang99/eval/rec/unroll.h>

#include <metalang99/eval/acc.h>
#include <metalang99/eval/diagnostics.h>
#include <metalang99/eval/fold.h>
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
        METALANG99_PRIV_EVAL_FAPPEND,                                                              \
        METALANG99_PRIV_EVAL_ACC_EMPTY(),                                                          \
        __VA_ARGS__,                                                                               \
        (0end, ~),                                                                                 \
        ~))

#ifndef DOXYGEN_IGNORE

#define METALANG99_PRIV_REC_UNROLL(...) METALANG99_PRIV_REC_0(__VA_ARGS__)

#define METALANG99_PRIV_EVAL_MATCH_HOOK()          METALANG99_PRIV_EVAL_MATCH
#define METALANG99_PRIV_EVAL_0op_K_HOOK()          METALANG99_PRIV_EVAL_0op_K
#define METALANG99_PRIV_EVAL_0callTrivial_K_HOOK() METALANG99_PRIV_EVAL_0callTrivial_K
#define METALANG99_PRIV_EVAL_0v_K_HOOK()           METALANG99_PRIV_EVAL_0v_K

#define METALANG99_PRIV_EVAL_0args(...)        METALANG99_PRIV_EVAL_0args_AUX(__VA_ARGS__)
#define METALANG99_PRIV_EVAL_0op(...)          METALANG99_PRIV_EVAL_0op_AUX(__VA_ARGS__)
#define METALANG99_PRIV_EVAL_0callTrivial(...) METALANG99_PRIV_EVAL_0callTrivial_AUX(__VA_ARGS__)
#define METALANG99_PRIV_EVAL_0fatal(...)       METALANG99_PRIV_EVAL_0fatal_AUX(__VA_ARGS__)

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
#define METALANG99_PRIV_EVAL_0v(k, k_cx, folder, acc, tail, ...)                                   \
    METALANG99_PRIV_EVAL_REDUCE(                                                                   \
        k,                                                                                         \
        k_cx,                                                                                      \
        folder,                                                                                    \
        folder(acc, __VA_ARGS__),                                                                  \
        METALANG99_PRIV_EXPAND tail)

#define METALANG99_PRIV_EVAL_0args_AUX(k, k_cx, folder, acc, tail, op, ...)                        \
    METALANG99_PRIV_EVAL_REDUCE(                                                                   \
        METALANG99_PRIV_EVAL_0callTrivial_K,                                                       \
        (k, k_cx, folder, acc, tail, op),                                                          \
        METALANG99_PRIV_EVAL_FCOMMA,                                                               \
        METALANG99_PRIV_EVAL_ACC_EMPTY(),                                                          \
        __VA_ARGS__,                                                                               \
        (0end, ~),                                                                                 \
        ~)

#define METALANG99_PRIV_EVAL_0op_AUX(k, k_cx, folder, acc, tail, op, ...)                          \
    METALANG99_PRIV_EVAL_REDUCE(                                                                   \
        METALANG99_PRIV_EVAL_0callTrivial_K,                                                       \
        (k, k_cx, folder, acc, tail),                                                              \
        METALANG99_PRIV_EVAL_FCOMMA,                                                               \
        METALANG99_PRIV_EVAL_ACC_EMPTY(),                                                          \
        op,                                                                                        \
        __VA_ARGS__,                                                                               \
        (0end, ~),                                                                                 \
        ~)

#define METALANG99_PRIV_EVAL_0callTrivial_AUX(k, k_cx, folder, acc, tail, ident, ...)              \
    METALANG99_PRIV_EVAL_REDUCE(                                                                   \
        METALANG99_PRIV_EVAL_0v_K,                                                                 \
        (k, k_cx, folder, acc, tail),                                                              \
        METALANG99_PRIV_EVAL_FAPPEND,                                                              \
        METALANG99_PRIV_EVAL_ACC_EMPTY(),                                                          \
        ident##_IMPL(__VA_ARGS__),                                                                 \
        (0end, ~),                                                                                 \
        ~)

// clang-format off
#define METALANG99_PRIV_EVAL_0fatal_AUX(_k, _k_cx, _folder, _acc, _tail, f, message)               \
    METALANG99_PRIV_REC_CONTINUE(METALANG99_PRIV_REC_STOP)((~), !"Metalang99 error" (f): message)
// clang-format on

#define METALANG99_PRIV_EVAL_0abort(_k, k_cx, folder, acc, _tail, ...)                             \
    METALANG99_PRIV_EVAL_REDUCE(                                                                   \
        METALANG99_PRIV_REC_STOP,                                                                  \
        (~),                                                                                       \
        METALANG99_PRIV_EVAL_FAPPEND,                                                              \
        METALANG99_PRIV_EVAL_ACC_EMPTY(),                                                          \
        __VA_ARGS__,                                                                               \
        (0end, ~),                                                                                 \
        ~)

#define METALANG99_PRIV_EVAL_0end(k, k_cx, _folder, acc, _tail, _)                                 \
    METALANG99_PRIV_REC_CONTINUE(k)                                                                \
    (METALANG99_PRIV_EXPAND k_cx, METALANG99_PRIV_EVAL_ACC_UNWRAP acc)
// }

// Continuations {
#define METALANG99_PRIV_EVAL_0callTrivial_K(k, k_cx, folder, acc, tail, evaluated_op, ...)         \
    METALANG99_PRIV_INVOKE(                                                                        \
        METALANG99_PRIV_EVAL_MATCH,                                                                \
        METALANG99_PRIV_EVAL_0v_K,                                                                 \
        (k, k_cx, folder, acc, tail),                                                              \
        METALANG99_PRIV_EVAL_FAPPEND,                                                              \
        METALANG99_PRIV_EVAL_ACC_EMPTY(),                                                          \
        evaluated_op##_IMPL(__VA_ARGS__),                                                          \
        (0end, ~),                                                                                 \
        ~)

#define METALANG99_PRIV_EVAL_0v_K(k, k_cx, folder, acc, tail, ...)                                 \
    METALANG99_PRIV_INVOKE(                                                                        \
        METALANG99_PRIV_EVAL_MATCH,                                                                \
        k,                                                                                         \
        k_cx,                                                                                      \
        folder,                                                                                    \
        folder(acc, __VA_ARGS__),                                                                  \
        METALANG99_PRIV_EXPAND tail)
// }

#define METALANG99_PRIV_EVAL_REDUCE METALANG99_PRIV_REC_CONTINUE(METALANG99_PRIV_EVAL_MATCH)

// Aliases {
#ifndef METALANG99_NO_SMALL_PREFIX

#define M_eval METALANG99_eval

#endif // METALANG99_NO_SMALL_PREFIX
// }

#endif // DOXYGEN_IGNORE

#endif // METALANG99_EVAL_H
