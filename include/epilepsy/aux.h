/**
 * @file
 * @brief Auxiliary macros.
 */

#ifndef EPILEPSY_AUX_H
#define EPILEPSY_AUX_H

#include <epilepsy/lang.h>

/**
 * @brief Concatenates @p x and @p y.
 */
#define EPILEPSY_CAT(x, y) call(EPILEPSY_CAT_REAL, x y)

/**
 * @brief Stringifies @p x.
 */
#define EPILEPSY_STRINGIFY(x) call(EPILEPSY_STRINGIFY_REAL, x)

/**
 * @brief Expands to nothing.
 */
#define EPILEPSY_EMPTY() call(EPILEPSY_EMPTY_REAL, )

/**
 * @brief Expands to @p x.
 */
#define EPILEPSY_ID(x) call(EPILEPSY_ID_REAL, )

/**
 * @brief Expands to the provided arguments.
 */
#define EPILEPSY_EXPAND(...) call(EPILEPSY_EXPAND_REAL, __VA_ARGS__)

/**
 * @brief Expands to nothing, consuming all the provided arguments.
 */
#define EPILEPSY_CONSUME(...) call(EPILEPSY_CONSUME_REAL, __VA_ARGS__)

/**
 * @brief Puts the specified arguments into parentheses.
 */
#define EPILEPSY_PARENTHESISE(...) call(EPILEPSY_PARENTHESISE_REAL, __VA_ARGS__)

/**
 * @brief Removes parentheses around @p x.
 */
#define EPILEPSY_UNPARENTHESISE(x) call(EPILEPSY_UNPARENTHESISE_REAL, x)

#ifndef DOXYGEN_SHOULD_SKIP_THIS

#define EPILEPSY_CAT_REAL(x, y)    v(x##y)
#define EPILEPSY_STRINGIFY_REAL(x) v(#x)

#define EPILEPSY_EMPTY_REAL() v()
#define EPILEPSY_ID_REAL(x)   v(x)

#define EPILEPSY_EXPAND_REAL(...)  v(__VA_ARGS__)
#define EPILEPSY_CONSUME_REAL(...) EPILEPSY_EMPTY()

#define EPILEPSY_PARENTHESISE_REAL(...) v((__VA_ARGS__))

#define EPILEPSY_UNPARENTHESISE_REAL(x)                                                            \
    call(EPILEPSY_UNPARENTHESISE_REAL_EXPAND_1, EPILEPSY_UNPARENTHESISE_REAL_EXPAND_0 x)
#define EPILEPSY_UNPARENTHESISE_REAL_EXPAND_0(...) __VA_ARGS__
#define EPILEPSY_UNPARENTHESISE_REAL_EXPAND_1(...) v(__VA_ARGS__)

#endif // DOXYGEN_SHOULD_SKIP_THIS

#endif // EPILEPSY_AUX_H
