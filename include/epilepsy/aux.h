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
#define EPILEPSY_CAT(x, y) call(EPILEPSY_CAT_IMPL, x y)

/**
 * @brief Stringifies @p x.
 */
#define EPILEPSY_STRINGIFY(x) call(EPILEPSY_STRINGIFY_IMPL, x)

/**
 * @brief Expands to nothing.
 */
#define EPILEPSY_EMPTY() call(EPILEPSY_EMPTY_IMPL, )

/**
 * @brief Expands to @p x.
 */
#define EPILEPSY_ID(x) call(EPILEPSY_ID_IMPL, )

/**
 * @brief Expands to the provided arguments.
 */
#define EPILEPSY_EXPAND(...) call(EPILEPSY_EXPAND_IMPL, __VA_ARGS__)

/**
 * @brief Expands to nothing, consuming all the provided arguments.
 */
#define EPILEPSY_CONSUME(...) call(EPILEPSY_CONSUME_IMPL, __VA_ARGS__)

/**
 * @brief Puts the specified arguments into parentheses.
 */
#define EPILEPSY_PARENTHESISE(...) call(EPILEPSY_PARENTHESISE_IMPL, __VA_ARGS__)

/**
 * @brief Removes parentheses around @p x.
 */
#define EPILEPSY_UNPARENTHESISE(x) call(EPILEPSY_UNPARENTHESISE_IMPL, x)

#ifndef DOXYGEN_SHOULD_SKIP_THIS

#define EPILEPSY_CAT_IMPL(x, y)    v(x##y)
#define EPILEPSY_STRINGIFY_IMPL(x) v(#x)

#define EPILEPSY_EMPTY_IMPL() v()
#define EPILEPSY_ID_IMPL(x)   v(x)

#define EPILEPSY_EXPAND_IMPL(...)  v(__VA_ARGS__)
#define EPILEPSY_CONSUME_IMPL(...) EPILEPSY_EMPTY()

#define EPILEPSY_PARENTHESISE_IMPL(...) v((__VA_ARGS__))

#define EPILEPSY_UNPARENTHESISE_IMPL(x)                                                            \
    call(EPILEPSY_UNPARENTHESISE_IMPL_EXPAND_1, EPILEPSY_UNPARENTHESISE_IMPL_EXPAND_0 x)
#define EPILEPSY_UNPARENTHESISE_IMPL_EXPAND_0(...) __VA_ARGS__
#define EPILEPSY_UNPARENTHESISE_IMPL_EXPAND_1(...) v(__VA_ARGS__)

#endif // DOXYGEN_SHOULD_SKIP_THIS

#endif // EPILEPSY_AUX_H
