/**
 * @file
 * @brief Metalanguage syntax.
 */

#ifndef MACROLOP_LANG_H
#define MACROLOP_LANG_H

/**
 * @brief Calls @p op with the provided arguments.
 */
#define call(op, ...) MACROLOP_PRIV_call(op, __VA_ARGS__)

/**
 * @brief Expands to the provided arguments as-is.
 */
#define v(...) MACROLOP_PRIV_v(__VA_ARGS__)

#ifndef DOXYGEN_SHOULD_SKIP_THIS

#include "eval/aux.h"

#define MACROLOP_PRIV_call(op, ...)                                                                \
    MACROLOP_PRIV_EVAL_AUX_IF(                                                                     \
        MACROLOP_PRIV_LANG_IS_TRIVIAL_OP(op), MACROLOP_PRIV_EVAL_TERM_TRANSFORM_TRIVIAL_OP_CALL,   \
        MACROLOP_PRIV_EVAL_TERM_TRANSFORM_NON_TRIVIAL_OP_CALL)                                     \
    (op, __VA_ARGS__),

#define MACROLOP_PRIV_EVAL_TERM_TRANSFORM_TRIVIAL_OP_CALL(op, ...) (trivial_call, op, __VA_ARGS__)
#define MACROLOP_PRIV_EVAL_TERM_TRANSFORM_NON_TRIVIAL_OP_CALL(op, _emptiness, ...)                 \
    (call, op, __VA_ARGS__)

#define MACROLOP_PRIV_LANG_IS_TRIVIAL_OP(op)                                                       \
    MACROLOP_PRIV_LANG_IS_TRIVIAL_OP_AUX(MACROLOP_PRIV_LANG_IS_TRIVIAL_OP_NO op, 1, ~)
#define MACROLOP_PRIV_LANG_IS_TRIVIAL_OP_AUX(...)                                                  \
    MACROLOP_PRIV_LANG_IS_TRIVIAL_OP_AUX_AUX(__VA_ARGS__)
#define MACROLOP_PRIV_LANG_IS_TRIVIAL_OP_AUX_AUX(x, y, ...) y
#define MACROLOP_PRIV_LANG_IS_TRIVIAL_OP_NO(...)            ~, 0

#define MACROLOP_PRIV_v(...) (v, __VA_ARGS__),

#endif // DOXYGEN_SHOULD_SKIP_THIS

#endif // MACROLOP_LANG_H
