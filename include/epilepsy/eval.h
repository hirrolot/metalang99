/**
 * @file
 * The metaprogram evaluator.
 */

#ifndef EPILEPSY_EVAL_H
#define EPILEPSY_EVAL_H

#include <epilepsy/eval/acc.h>
#include <epilepsy/eval/cfg.h>
#include <epilepsy/eval/control.h>
#include <epilepsy/eval/diagnostics.h>
#include <epilepsy/eval/fold.h>
#include <epilepsy/eval/machine.h>
#include <epilepsy/eval/rec/control.h>
#include <epilepsy/eval/rec/unroll.h>
#include <epilepsy/eval/syntax_checker.h>
#include <epilepsy/eval/term.h>
#include <epilepsy/priv/aux.h>

/**
 * Evaluates a metaprogram.
 *
 * # Examples
 *
 * @code
 * #include <epilepsy/eval.h>
 * #include <epilepsy/lang.h>
 *
 * #define FOO_IMPL(x, y) v(x + y)
 *
 * E_eval(v(abc ~ 123) E_call(FOO, v(1, 2)))
 * @endcode
 */
#define EPILEPSY_eval(...)                                                                         \
    EPILEPSY_PRIV_REC_UNROLL(EPILEPSY_PRIV_EVAL_MATCH(                                             \
        EPILEPSY_PRIV_EVAL_CFG(                                                                    \
            EPILEPSY_PRIV_REC_STOP,                                                                \
            (~),                                                                                   \
            EPILEPSY_PRIV_EVAL_FOLD_APPEND,                                                        \
            EPILEPSY_PRIV_EVAL_ACC_EMPTY()),                                                       \
        __VA_ARGS__ EPILEPSY_PRIV_TERM_END(),                                                      \
        ~))

#ifndef DOXYGEN_IGNORE

#define EPILEPSY_PRIV_EVAL_MATCH_HOOK()   EPILEPSY_PRIV_EVAL_MATCH
#define EPILEPSY_PRIV_EVAL_0op_K_HOOK()   EPILEPSY_PRIV_EVAL_0op_K
#define EPILEPSY_PRIV_EVAL_0args_K_HOOK() EPILEPSY_PRIV_EVAL_0args_K

#define EPILEPSY_PRIV_REC_UNROLL(...) EPILEPSY_PRIV_REC_0(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_MATCH(cfg, head, ...)                                                   \
    EPILEPSY_PRIV_CHECK_TERM(head, EPILEPSY_PRIV_EVAL_MATCH_VALID_TERM, cfg, __VA_ARGS__)
#define EPILEPSY_PRIV_EVAL_MATCH_VALID_TERM(head, cfg, ...)                                        \
    EPILEPSY_PRIV_TERM_MATCH(                                                                      \
        EPILEPSY_PRIV_EVAL_,                                                                       \
        head,                                                                                      \
        cfg,                                                                                       \
        EPILEPSY_PRIV_EVAL_CONTROL(__VA_ARGS__))

// Reduction rules {
#define EPILEPSY_PRIV_EVAL_0v(cfg, tail, ...)                                                      \
    EPILEPSY_PRIV_EVAL_MACHINE_REDUCE(                                                             \
        EPILEPSY_PRIV_EVAL_CFG_UPDATE_ACC(                                                         \
            cfg,                                                                                   \
            EPILEPSY_PRIV_EVAL_CFG_F(cfg)(EPILEPSY_PRIV_EVAL_CFG_ACC(cfg), __VA_ARGS__)),          \
        EPILEPSY_PRIV_EVAL_CONTROL_UNWRAP(tail))

#define EPILEPSY_PRIV_EVAL_0args(cfg, tail, op, ...)                                               \
    EPILEPSY_PRIV_EVAL_MACHINE_REDUCE(                                                             \
        EPILEPSY_PRIV_EVAL_CFG(                                                                    \
            EPILEPSY_PRIV_EVAL_0args_K,                                                            \
            (cfg, tail, op),                                                                       \
            EPILEPSY_PRIV_EVAL_FOLD_COMMA,                                                         \
            EPILEPSY_PRIV_EVAL_ACC_EMPTY()),                                                       \
        __VA_ARGS__ EPILEPSY_PRIV_TERM_END(),                                                      \
        ~)

#define EPILEPSY_PRIV_EVAL_0op(cfg, tail, op, ...)                                                 \
    EPILEPSY_PRIV_EVAL_MACHINE_REDUCE(                                                             \
        EPILEPSY_PRIV_EVAL_CFG(                                                                    \
            EPILEPSY_PRIV_EVAL_0op_K,                                                              \
            (cfg, tail, (__VA_ARGS__)),                                                            \
            EPILEPSY_PRIV_EVAL_FOLD_APPEND,                                                        \
            EPILEPSY_PRIV_EVAL_ACC_EMPTY()),                                                       \
        op,                                                                                        \
        EPILEPSY_PRIV_TERM_END(),                                                                  \
        ~)

// clang-format off
#define EPILEPSY_PRIV_EVAL_0fatal(_cfg, _tail, f, message)                        \
    EPILEPSY_PRIV_REC_CONTINUE(EPILEPSY_PRIV_REC_STOP, (~), !"Epilepsy error" (f): message)
// clang-format on

#define EPILEPSY_PRIV_EVAL_0dbg(_cfg, _tail, ...)                                                  \
    EPILEPSY_PRIV_REC_CONTINUE(EPILEPSY_PRIV_REC_STOP, (~), __VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_0end(cfg, _tail, _)                                                     \
    EPILEPSY_PRIV_EVAL_MACHINE_CALL_K(                                                             \
        EPILEPSY_PRIV_EVAL_CFG_K(cfg),                                                             \
        EPILEPSY_PRIV_EVAL_CFG_K_CX(cfg),                                                          \
        EPILEPSY_PRIV_EVAL_CFG_ACC(cfg))
// }

// Continuations {
#define EPILEPSY_PRIV_EVAL_0args_K(cfg, tail, evaluated_op, ...)                                   \
    EPILEPSY_PRIV_INVOKE(                                                                          \
        EPILEPSY_PRIV_EVAL_MATCH,                                                                  \
        cfg,                                                                                       \
        evaluated_op(__VA_ARGS__) EPILEPSY_PRIV_EVAL_CONTROL_UNWRAP(tail))

#define EPILEPSY_PRIV_EVAL_0op_K(cfg, tail, args, evaluated_op)                                    \
    EPILEPSY_PRIV_INVOKE(                                                                          \
        EPILEPSY_PRIV_EVAL_MATCH,                                                                  \
        cfg,                                                                                       \
        EPILEPSY_call(evaluated_op, EPILEPSY_PRIV_UNPARENTHESISE(args))                            \
            EPILEPSY_PRIV_EVAL_CONTROL_UNWRAP(tail))
// }

// Aliases {
#ifndef EPILEPSY_NO_SMALL_PREFIX

#define E_eval EPILEPSY_eval

#endif // EPILEPSY_NO_SMALL_PREFIX
// }

#endif // DOXYGEN_IGNORE

#endif // EPILEPSY_EVAL_H
