/**
 * @file
 * @brief Auxiliary macros.
 */

#ifndef AGONY_PP_AUX_H
#define AGONY_PP_AUX_H

#include "lang.h"

/**
 * @brief Concatenates @p x and @p y.
 */
#define AGONY_PP_CAT(x, y) c(AGONY_PP_CAT_REAL, x y)

/**
 * @brief Stringifies @p x.
 */
#define AGONY_PP_STRINGIFY(x) c(AGONY_PP_STRINGIFY_REAL, x)

/**
 * @brief Expands to nothing.
 */
#define AGONY_PP_EMPTY() c(AGONY_PP_EMPTY_REAL, )

/**
 * @brief Expands to @p x.
 */
#define AGONY_PP_ID(x) c(AGONY_PP_ID_REAL, )

/**
 * @brief Expands to the provided arguments.
 */
#define AGONY_PP_EXPAND(...) c(AGONY_PP_EXPAND_REAL, __VA_ARGS__)

/**
 * @brief Expands to nothing, consuming all the provided arguments.
 */
#define AGONY_PP_CONSUME(...) c(AGONY_PP_CONSUME_REAL, __VA_ARGS__)

/**
 * @brief Puts the specified arguments into parentheses.
 */
#define AGONY_PP_PARENTHESISE(...) c(AGONY_PP_PARENTHESISE_REAL, __VA_ARGS__)

/**
 * @brief Removes parentheses around @p x.
 */
#define AGONY_PP_UNPARENTHESISE(x) c(AGONY_PP_UNPARENTHESISE_REAL, x)

#ifndef DOXYGEN_SHOULD_SKIP_THIS

#define AGONY_PP_CAT_REAL(x, y)    v(x##y)
#define AGONY_PP_STRINGIFY_REAL(x) v(#x)

#define AGONY_PP_EMPTY_REAL() v()
#define AGONY_PP_ID_REAL(x)   v(x)

#define AGONY_PP_EXPAND_REAL(...)  v(__VA_ARGS__)
#define AGONY_PP_CONSUME_REAL(...) AGONY_PP_EMPTY()

#define AGONY_PP_PARENTHESISE_REAL(...) v((__VA_ARGS__))

#define AGONY_PP_UNPARENTHESISE_REAL(x)                                                            \
    c(AGONY_PP_UNPARENTHESISE_REAL_EXPAND_1, AGONY_PP_UNPARENTHESISE_REAL_EXPAND_0 x)
#define AGONY_PP_UNPARENTHESISE_REAL_EXPAND_0(...) __VA_ARGS__
#define AGONY_PP_UNPARENTHESISE_REAL_EXPAND_1(...) v(__VA_ARGS__)

#endif // DOXYGEN_SHOULD_SKIP_THIS

#endif // AGONY_PP_AUX_H
