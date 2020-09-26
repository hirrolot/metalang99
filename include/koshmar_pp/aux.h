/**
 * @file
 * @brief Auxiliary macros.
 */

#ifndef KOSHMAR_PP_AUX_H
#define KOSHMAR_PP_AUX_H

/**
 * @brief Concatenates @p x and @p y, performing at least one preprocessor scan for both.
 */
#define KOSHMAR_PP_CAT(x, y) KOSHMAR_PP_PRIMITIVE_CAT(x, y)

/**
 * @brief Concatenates @p x and @p y, performing no preprocessor scans for both.
 */
#define KOSHMAR_PP_PRIMITIVE_CAT(x, y) x##y

/**
 * @brief Stringifies @p x, performing at least one preprocessor scan.
 */
#define KOSHMAR_PP_STRINGIFY(x) KOSHMAR_PP_PRIMITIVE_STRINGIFY(x)

/**
 * @brief Stringifies @p x, performing no preprocessor scans.
 */
#define KOSHMAR_PP_PRIMITIVE_STRINGIFY(x) #x

/**
 * @brief Calls @p op with the specified arguments.
 */
#define KOSHMAR_PP_CALL_MACRO(op, ...) op(__VA_ARGS__)

/**
 * @brief Expands to the comma sign.
 */
#define KOSHMAR_PP_COMMA() ,

/**
 * @brief Expands to nothing.
 */
#define KOSHMAR_PP_EMPTY()

/**
 * @brief Expands to @p x.
 */
#define KOSHMAR_PP_ID(x) x

/**
 * @brief Expands to the provided arguments.
 */
#define KOSHMAR_PP_EXPAND(...) __VA_ARGS__

/**
 * @brief Defers @p op for one preprocessor scan.
 */
#define KOSHMAR_PP_DEFER(op) op KOSHMAR_PP_EMPTY()

/**
 * @brief Expands to nothing, consuming all the provided arguments.
 */
#define KOSHMAR_PP_CONSUME(...)

/**
 * @brief Puts the specified arguments into parentheses.
 */
#define KOSHMAR_PP_PARENTHESISE(...) (__VA_ARGS__)

/**
 * @brief Removes parentheses around @p x.
 */
#define KOSHMAR_PP_UNPARENTHESISE(x) KOSHMAR_PP_PRIVATE_UNPARENTHESISE(x)

#ifndef DOXYGEN_SHOULD_SKIP_THIS

#define KOSHMAR_PP_PRIVATE_UNPARENTHESISE(x)                                                       \
    KOSHMAR_PP_PRIVATE_UNPARENTHESISE_EXPAND_0(KOSHMAR_PP_PRIVATE_UNPARENTHESISE_EXPAND_0 x)
#define KOSHMAR_PP_PRIVATE_UNPARENTHESISE_EXPAND_0(...) __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_UNPARENTHESISE_EXPAND_1(...) __VA_ARGS__

#endif // DOXYGEN_SHOULD_SKIP_THIS

#endif // KOSHMAR_PP_AUX_H
