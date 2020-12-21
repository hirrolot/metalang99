/**
 * @file
 * @brief Auxiliary macros.
 */

#ifndef EPILEPSY_AUX_H
#define EPILEPSY_AUX_H

#include <epilepsy/lang.h>

// Desugaring {
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

#define EPILEPSY_ERROR(...) call(EPILEPSY_ERROR_IMPL, x)
// }

// Implementation {
#define EPILEPSY_CAT_IMPL(x, y)         v(x##y)
#define EPILEPSY_STRINGIFY_IMPL(x)      v(#x)
#define EPILEPSY_EMPTY_IMPL()           v()
#define EPILEPSY_ID_IMPL(x)             v(x)
#define EPILEPSY_EXPAND_IMPL(...)       v(__VA_ARGS__)
#define EPILEPSY_CONSUME_IMPL(...)      EPILEPSY_EMPTY()
#define EPILEPSY_PARENTHESISE_IMPL(...) v((__VA_ARGS__))
#define EPILEPSY_UNPARENTHESISE_IMPL(x) EPILEPSY_PRIV_UNPARENTHESISE(x)
#define EPILEPSY_ERROR_IMPL(...)        EPILEPSY_ERROR_AUX()
#define EPILEPSY_AUX(missing_arg)       EPILEPSY_EMPTY()
// }

#endif // EPILEPSY_AUX_H
