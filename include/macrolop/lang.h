/**
 * @file
 * @brief Metalanguage syntax.
 */

#ifndef MACROLOP_LANG_H
#define MACROLOP_LANG_H

#ifndef DOXYGEN_SHOULD_SKIP_THIS

#include "eval/term.h"

#endif // DOXYGEN_SHOULD_SKIP_THIS

/**
 * @brief Calls @p op with the provided arguments.
 */
#define call(op, ...) MACROLOP_PRIVATE_call(op, __VA_ARGS__)

/**
 * @brief Expands to the provided arguments as-is.
 */
#define v(...) MACROLOP_PRIVATE_v(__VA_ARGS__)

#ifndef DOXYGEN_SHOULD_SKIP_THIS

#define MACROLOP_PRIVATE_call(op, ...)                                                             \
    MACROLOP_PRIVATE_EVAL_AUX_IF(                                                                  \
        MACROLOP_PRIVATE_EVAL_TERM_IS_TRIVIAL_OP(op),                                              \
        MACROLOP_PRIVATE_EVAL_TERM_TRANSFORM_TRIVIAL_OP_CALL,                                      \
        MACROLOP_PRIVATE_EVAL_TERM_TRANSFORM_NON_TRIVIAL_OP_CALL)                                  \
    (op, __VA_ARGS__),

#define MACROLOP_PRIVATE_EVAL_TERM_TRANSFORM_TRIVIAL_OP_CALL(op, ...) (call, op, __VA_ARGS__)
#define MACROLOP_PRIVATE_EVAL_TERM_TRANSFORM_NON_TRIVIAL_OP_CALL(op, _emptiness, ...)              \
    (call, op, __VA_ARGS__)

#define MACROLOP_PRIVATE_v(...) (v, __VA_ARGS__),

#endif // DOXYGEN_SHOULD_SKIP_THIS

#endif // MACROLOP_LANG_H
