#ifndef EPILEPSY_EVAL_H
#define EPILEPSY_EVAL_H

#include <epilepsy/eval/acc.h>
#include <epilepsy/eval/config.h>
#include <epilepsy/eval/control.h>
#include <epilepsy/eval/diagnostics.h>
#include <epilepsy/eval/fold.h>
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
        EPILEPSY_PRIV_EVAL_CONFIG(                                                                 \
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

#define EPILEPSY_PRIV_EVAL_MATCH(config, head, ...)                                                \
    EPILEPSY_PRIV_IF(                                                                              \
        EPILEPSY_PRIV_IS_UNPARENTHESISED(head),                                                    \
        EPILEPSY_PRIV_EVAL_MATCH_INVALID_TERM,                                                     \
        EPILEPSY_PRIV_EVAL_MATCH_VALID_TERM)                                                       \
    (config, head, __VA_ARGS__)
#define EPILEPSY_PRIV_EVAL_MATCH_INVALID_TERM(_config, head, ...)                                  \
    EPILEPSY_PRIV_DIAGNOSTICS_SYNTAX_ERROR(head)
#define EPILEPSY_PRIV_EVAL_MATCH_VALID_TERM(config, head, ...)                                     \
    EPILEPSY_PRIV_TERM_MATCH(                                                                      \
        EPILEPSY_PRIV_EVAL_, head, config, EPILEPSY_PRIV_EVAL_CONTROL(__VA_ARGS__))

// Reduction rules {
#define EPILEPSY_PRIV_EVAL_0v(config, tail, ...)                                                   \
    EPILEPSY_PRIV_EVAL_MACHINE_REDUCE(                                                             \
        EPILEPSY_PRIV_EVAL_CONFIG_UPDATE_ACC(                                                      \
            config,                                                                                \
            EPILEPSY_PRIV_EVAL_CONFIG_F(config)(                                                   \
                EPILEPSY_PRIV_EVAL_CONFIG_ACC(config), __VA_ARGS__)),                              \
        EPILEPSY_PRIV_EVAL_CONTROL_UNWRAP(tail))

#define EPILEPSY_PRIV_EVAL_0args(config, tail, op, ...)                                            \
    EPILEPSY_PRIV_EVAL_MACHINE_REDUCE(                                                             \
        EPILEPSY_PRIV_EVAL_CONFIG(                                                                 \
            EPILEPSY_PRIV_EVAL_0args_K,                                                            \
            (config, tail, op),                                                                    \
            EPILEPSY_PRIV_EVAL_FOLD_COMMA,                                                         \
            EPILEPSY_PRIV_EVAL_ACC_EMPTY()),                                                       \
        __VA_ARGS__ EPILEPSY_PRIV_TERM_END(),                                                      \
        ~)

#define EPILEPSY_PRIV_EVAL_0op(config, tail, op, ...)                                              \
    EPILEPSY_PRIV_EVAL_MACHINE_REDUCE(                                                             \
        EPILEPSY_PRIV_EVAL_CONFIG(                                                                 \
            EPILEPSY_PRIV_EVAL_0op_K,                                                              \
            (config, tail, (__VA_ARGS__)),                                                         \
            EPILEPSY_PRIV_EVAL_FOLD_APPEND,                                                        \
            EPILEPSY_PRIV_EVAL_ACC_EMPTY()),                                                       \
        op,                                                                                        \
        EPILEPSY_PRIV_TERM_END(),                                                                  \
        ~)

// clang-format off
#define EPILEPSY_PRIV_EVAL_0error(_config, _tail, f, ...)                        \
    EPILEPSY_PRIV_REC_CONTINUE(EPILEPSY_PRIV_REC_STOP, (~), !Epilepsy error (f): #__VA_ARGS__)
// clang-format on

#define EPILEPSY_PRIV_EVAL_0dbg(_config, _tail, ...)                                               \
    EPILEPSY_PRIV_REC_CONTINUE(EPILEPSY_PRIV_REC_STOP, (~), __VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_0end(config, _tail, _)                                                  \
    EPILEPSY_PRIV_EVAL_MACHINE_CALL_K(                                                             \
        EPILEPSY_PRIV_EVAL_CONFIG_K(config),                                                       \
        EPILEPSY_PRIV_EVAL_CONFIG_K_CX(config),                                                    \
        EPILEPSY_PRIV_EVAL_CONFIG_ACC(config))
// }

// Continuations {
#define EPILEPSY_PRIV_EVAL_0args_K(config, tail, evaluated_op, ...)                                \
    EPILEPSY_PRIV_INVOKE(                                                                          \
        EPILEPSY_PRIV_EVAL_MATCH,                                                                  \
        config,                                                                                    \
        evaluated_op(__VA_ARGS__) EPILEPSY_PRIV_EVAL_CONTROL_UNWRAP(tail))

#define EPILEPSY_PRIV_EVAL_0op_K(config, tail, args, evaluated_op)                                 \
    EPILEPSY_PRIV_INVOKE(                                                                          \
        EPILEPSY_PRIV_EVAL_MATCH,                                                                  \
        config,                                                                                    \
        EPILEPSY_CALL(evaluated_op, EPILEPSY_PRIV_UNPARENTHESISE(args))                            \
            EPILEPSY_PRIV_EVAL_CONTROL_UNWRAP(tail))
// }

#endif // DOXYGEN_IGNORE

#endif // EPILEPSY_EVAL_H
