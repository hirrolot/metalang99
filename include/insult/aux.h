/**
 * @file
 * @brief Auxiliary macros.
 */

#ifndef INSULT_AUX_H
#define INSULT_AUX_H

#include "lang.h"

/**
 * @brief Concatenates @p x and @p y.
 */
#define INSULT_CAT(x, y) c(INSULT_CAT_REAL, x y)

/**
 * @brief Stringifies @p x.
 */
#define INSULT_STRINGIFY(x) c(INSULT_STRINGIFY_REAL, x)

/**
 * @brief Expands to nothing.
 */
#define INSULT_EMPTY() c(INSULT_EMPTY_REAL, )

/**
 * @brief Expands to @p x.
 */
#define INSULT_ID(x) c(INSULT_ID_REAL, )

/**
 * @brief Expands to the provided arguments.
 */
#define INSULT_EXPAND(...) c(INSULT_EXPAND_REAL, __VA_ARGS__)

/**
 * @brief Expands to nothing, consuming all the provided arguments.
 */
#define INSULT_CONSUME(...) c(INSULT_CONSUME_REAL, __VA_ARGS__)

/**
 * @brief Puts the specified arguments into parentheses.
 */
#define INSULT_PARENTHESISE(...) c(INSULT_PARENTHESISE_REAL, __VA_ARGS__)

/**
 * @brief Removes parentheses around @p x.
 */
#define INSULT_UNPARENTHESISE(x) c(INSULT_UNPARENTHESISE_REAL, x)

#ifndef DOXYGEN_SHOULD_SKIP_THIS

#define INSULT_CAT_REAL(x, y)    v(x##y)
#define INSULT_STRINGIFY_REAL(x) v(#x)

#define INSULT_EMPTY_REAL() v()
#define INSULT_ID_REAL(x)   v(x)

#define INSULT_EXPAND_REAL(...)  v(__VA_ARGS__)
#define INSULT_CONSUME_REAL(...) INSULT_EMPTY()

#define INSULT_PARENTHESISE_REAL(...) v((__VA_ARGS__))

#define INSULT_UNPARENTHESISE_REAL(x)                                                              \
    c(INSULT_UNPARENTHESISE_REAL_EXPAND_1, INSULT_UNPARENTHESISE_REAL_EXPAND_0 x)
#define INSULT_UNPARENTHESISE_REAL_EXPAND_0(...) __VA_ARGS__
#define INSULT_UNPARENTHESISE_REAL_EXPAND_1(...) v(__VA_ARGS__)

#endif // DOXYGEN_SHOULD_SKIP_THIS

#endif // INSULT_AUX_H
