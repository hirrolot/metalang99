/**
 * @file
 * @brief Auxiliary macros.
 */

#ifndef AGONY_PP_AUX_H
#define AGONY_PP_AUX_H

/**
 * @brief Concatenates @p x and @p y, performing at least one preprocessor scan for both.
 */
#define AGONY_PP_CAT(x, y) AGONY_PP_PRIMITIVE_CAT(x, y)

/**
 * @brief Concatenates @p x and @p y, performing no preprocessor scans for both.
 */
#define AGONY_PP_PRIMITIVE_CAT(x, y) x##y

/**
 * @brief Stringifies @p x, performing at least one preprocessor scan.
 */
#define AGONY_PP_STRINGIFY(x) AGONY_PP_PRIMITIVE_STRINGIFY(x)

/**
 * @brief Stringifies @p x, performing no preprocessor scans.
 */
#define AGONY_PP_PRIMITIVE_STRINGIFY(x) #x

/**
 * @brief Calls @p op with the specified arguments.
 */
#define AGONY_PP_CALL_MACRO(op, ...) op(__VA_ARGS__)

/**
 * @brief Expands to the comma sign.
 */
#define AGONY_PP_COMMA() ,

/**
 * @brief Expands to nothing.
 */
#define AGONY_PP_EMPTY()

/**
 * @brief Expands to @p x.
 */
#define AGONY_PP_ID(x) x

/**
 * @brief Expands to the provided arguments.
 */
#define AGONY_PP_EXPAND(...) __VA_ARGS__

/**
 * @brief Expands to the provided arguments, forcing two preprocessor scans.
 */
#define AGONY_PP_EXPAND_2_TIMES(...) AGONY_PP_EXPAND(AGONY_PP_EXPAND(__VA_ARGS__))

/**
 * @brief Defers @p op for one preprocessor scan.
 */
#define AGONY_PP_DEFER(op) op AGONY_PP_EMPTY()

/**
 * @brief Defers @p op for two preprocessor scans.
 */
#define AGONY_PP_DEFER_2_TIMES(op) AGONY_PP_PRIVATE_DEFER_2_TIMES(op)

/**
 * @brief Expands to nothing, consuming all the provided arguments.
 */
#define AGONY_PP_CONSUME(...)

/**
 * @brief Puts the specified arguments into parentheses.
 */
#define AGONY_PP_PARENTHESISE(...) (__VA_ARGS__)

/**
 * @brief Removes parentheses around @p x.
 */
#define AGONY_PP_UNPARENTHESISE(x) AGONY_PP_PRIVATE_EVAL_AUX_UNPARENTHESISE(x)

#ifndef DOXYGEN_SHOULD_SKIP_THIS

#define AGONY_PP_PRIVATE_DEFER_2_TIMES(op)                                                         \
    AGONY_PP_PRIVATE_DEFER_2_TIMES_0(AGONY_PP_PRIVATE_DEFER_2_TIMES_1)(op)
#define AGONY_PP_PRIVATE_DEFER_2_TIMES_0(op) op AGONY_PP_EMPTY()
#define AGONY_PP_PRIVATE_DEFER_2_TIMES_1(op) op AGONY_PP_EMPTY()

#define AGONY_PP_PRIVATE_EVAL_AUX_UNPARENTHESISE(x) AGONY_PP_EXPAND(AGONY_PP_EXPAND x)

#endif // DOXYGEN_SHOULD_SKIP_THIS

#endif // AGONY_PP_AUX_H
