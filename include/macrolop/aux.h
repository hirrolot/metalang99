/**
 * @file
 * @brief Auxiliary macros.
 */

#ifndef MACROLOP_AUX_H
#define MACROLOP_AUX_H

#include "lang.h"

/**
 * @brief Concatenates @p x and @p y.
 */
#define MACROLOP_CAT(x, y) call(MACROLOP_CAT_REAL, x y)

/**
 * @brief Stringifies @p x.
 */
#define MACROLOP_STRINGIFY(x) call(MACROLOP_STRINGIFY_REAL, x)

/**
 * @brief Expands to nothing.
 */
#define MACROLOP_EMPTY() call(MACROLOP_EMPTY_REAL, )

/**
 * @brief Expands to @p x.
 */
#define MACROLOP_ID(x) call(MACROLOP_ID_REAL, )

/**
 * @brief Expands to the provided arguments.
 */
#define MACROLOP_EXPAND(...) call(MACROLOP_EXPAND_REAL, __VA_ARGS__)

/**
 * @brief Expands to nothing, consuming all the provided arguments.
 */
#define MACROLOP_CONSUME(...) call(MACROLOP_CONSUME_REAL, __VA_ARGS__)

/**
 * @brief Puts the specified arguments into parentheses.
 */
#define MACROLOP_PARENTHESISE(...) call(MACROLOP_PARENTHESISE_REAL, __VA_ARGS__)

/**
 * @brief Removes parentheses around @p x.
 */
#define MACROLOP_UNPARENTHESISE(x) call(MACROLOP_UNPARENTHESISE_REAL, x)

#ifndef DOXYGEN_SHOULD_SKIP_THIS

#define MACROLOP_CAT_REAL(x, y)    v(x##y)
#define MACROLOP_STRINGIFY_REAL(x) v(#x)

#define MACROLOP_EMPTY_REAL() v()
#define MACROLOP_ID_REAL(x)   v(x)

#define MACROLOP_EXPAND_REAL(...)  v(__VA_ARGS__)
#define MACROLOP_CONSUME_REAL(...) MACROLOP_EMPTY()

#define MACROLOP_PARENTHESISE_REAL(...) v((__VA_ARGS__))

#define MACROLOP_UNPARENTHESISE_REAL(x)                                                            \
    call(MACROLOP_UNPARENTHESISE_REAL_EXPAND_1, MACROLOP_UNPARENTHESISE_REAL_EXPAND_0 x)
#define MACROLOP_UNPARENTHESISE_REAL_EXPAND_0(...) __VA_ARGS__
#define MACROLOP_UNPARENTHESISE_REAL_EXPAND_1(...) v(__VA_ARGS__)

#endif // DOXYGEN_SHOULD_SKIP_THIS

#endif // MACROLOP_AUX_H
