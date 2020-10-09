/**
 * @file
 * @brief Auxiliary macros.
 */

#ifndef AGONY_PP_AUX_H
#define AGONY_PP_AUX_H

#include "eval.h"

/**
 * @brief Concatenates @p x and @p y.
 */
#define AGONY_PP_CAT(x, y) c(AGONY_PP_PRIVATE_CAT, v(x) v(y))

/**
 * @brief Stringifies @p x.
 */
#define AGONY_PP_STRINGIFY(x) c(AGONY_PP_PRIVATE_STRINGIFY, v(x))

/**
 * @brief Expands to nothing.
 */
#define AGONY_PP_EMPTY() v()

/**
 * @brief Expands to @p x.
 */
#define AGONY_PP_ID(x) v(x)

/**
 * @brief Expands to the provided arguments.
 */
#define AGONY_PP_EXPAND(...) v(__VA_ARGS__)

/**
 * @brief Expands to nothing, consuming all the provided arguments.
 */
#define AGONY_PP_CONSUME(...) c(AGONY_PP_EMPTY, )

/**
 * @brief Puts the specified arguments into parentheses.
 */
#define AGONY_PP_PARENTHESISE(...) v((__VA_ARGS__))

/**
 * @brief Removes parentheses around @p x.
 */
#define AGONY_PP_UNPARENTHESISE(x) c(AGONY_PP_PRIVATE_UNPARENTHESISE, v(x))

#ifndef DOXYGEN_SHOULD_SKIP_THIS

#define AGONY_PP_PRIVATE_CAT(x, y)    v(x##y)
#define AGONY_PP_PRIVATE_STRINGIFY(x) v(#x)

#define AGONY_PP_PRIVATE_UNPARENTHESISE(x) c(AGONY_PP_EXPAND, AGONY_PP_EXPAND x)

#endif // DOXYGEN_SHOULD_SKIP_THIS

#endif // AGONY_PP_AUX_H