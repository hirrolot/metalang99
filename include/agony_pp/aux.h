/**
 * @file
 * @brief Auxiliary macros.
 */

#ifndef AGONY_PP_AUX_H
#define AGONY_PP_AUX_H

#include "lang.h"

/**
 * @brief Expands to nothing.
 */
#define AGONY_PP_EMPTY() c(AGONY_PP_PRIVATE_EMPTY, )

/**
 * @brief Expands to @p x.
 */
#define AGONY_PP_ID(x) c(AGONY_PP_PRIVATE_ID, )

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

#define AGONY_PP_PRIVATE_EMPTY() v()
#define AGONY_PP_PRIVATE_ID(x)   v(x)

#define AGONY_PP_PRIVATE_UNPARENTHESISE(x)                                                         \
    v(AGONY_PP_PRIVATE_UNPARENTHESISE_EXPAND(AGONY_PP_PRIVATE_UNPARENTHESISE_EXPAND x))
#define AGONY_PP_PRIVATE_UNPARENTHESISE_EXPAND(...) __VA_ARGS__

#endif // DOXYGEN_SHOULD_SKIP_THIS

#endif // AGONY_PP_AUX_H
