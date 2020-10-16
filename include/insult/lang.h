/**
 * @file
 * @brief Metalanguage syntax.
 */

#ifndef INSULT_LANG_H
#define INSULT_LANG_H

#ifndef DOXYGEN_SHOULD_SKIP_THIS

#include "eval/term.h"

#endif // DOXYGEN_SHOULD_SKIP_THIS

/**
 * @brief Calls @p op with the provided arguments.
 */
#define c(op, ...) INSULT_PRIVATE_c(op, __VA_ARGS__)

/**
 * @brief Expands to the provided arguments as-is.
 */
#define v(...) INSULT_PRIVATE_v(__VA_ARGS__)

#ifndef DOXYGEN_SHOULD_SKIP_THIS

#define INSULT_PRIVATE_c(op, ...)                                                                  \
    INSULT_PRIVATE_EVAL_AUX_IF(                                                                    \
        INSULT_PRIVATE_EVAL_TERM_IS_TRIVIAL_OP(op),                                                \
        INSULT_PRIVATE_EVAL_TERM_TRANSFORM_TRIVIAL_OP_CALL,                                        \
        INSULT_PRIVATE_EVAL_TERM_TRANSFORM_NON_TRIVIAL_OP_CALL)                                    \
    (op, __VA_ARGS__),

#define INSULT_PRIVATE_EVAL_TERM_TRANSFORM_TRIVIAL_OP_CALL(op, ...) (c, op, __VA_ARGS__)
#define INSULT_PRIVATE_EVAL_TERM_TRANSFORM_NON_TRIVIAL_OP_CALL(op, _emptiness, ...)                \
    (c, op, __VA_ARGS__)

#define INSULT_PRIVATE_v(...) (v, __VA_ARGS__),

#endif // DOXYGEN_SHOULD_SKIP_THIS

#endif // INSULT_LANG_H
