/**
 * @file
 * Auxiliary macros.
 */

#ifndef EPILEPSY_AUX_H
#define EPILEPSY_AUX_H

#include <epilepsy/lang.h>

// Desugaring {
/**
 * Concatenates @p x with @p y.
 */
#define EPILEPSY_CAT(x, y) call(EPILEPSY_CAT_IMPL, x y)

/**
 * Stringifies @p x.
 */
#define EPILEPSY_STRINGIFY(x) call(EPILEPSY_STRINGIFY_IMPL, x)

/**
 * Expands to nothing.
 */
#define EPILEPSY_EMPTY() call(EPILEPSY_EMPTY_IMPL, )

/**
 * Expands to @p x.
 */
#define EPILEPSY_ID(x) call(EPILEPSY_ID_IMPL, )

/**
 * Expands to its arguments.
 */
#define EPILEPSY_EXPAND(...) call(EPILEPSY_EXPAND_IMPL, __VA_ARGS__)

/**
 * Expands to nothing, consuming all arguments.
 */
#define EPILEPSY_CONSUME(...) call(EPILEPSY_CONSUME_IMPL, __VA_ARGS__)

/**
 * Parenthesises a sequence of arguments.
 */
#define EPILEPSY_PARENTHESISE(...) call(EPILEPSY_PARENTHESISE_IMPL, __VA_ARGS__)

/**
 * Unparenthesises a sequence of arguments.
 */
#define EPILEPSY_UNPARENTHESISE(x) call(EPILEPSY_UNPARENTHESISE_IMPL, x)

/**
 * Emits a preprocessor error, consuming all arguments.
 */
#define EPILEPSY_ERROR(...) call(EPILEPSY_ERROR_IMPL, x)
// }

#ifndef DOXYGEN_IGNORE

// Implementation {
#define EPILEPSY_CAT_IMPL(x, y)               v(x##y)
#define EPILEPSY_STRINGIFY_IMPL(x)            v(#x)
#define EPILEPSY_EMPTY_IMPL()                 v()
#define EPILEPSY_ID_IMPL(x)                   v(x)
#define EPILEPSY_EXPAND_IMPL(...)             v(__VA_ARGS__)
#define EPILEPSY_CONSUME_IMPL(...)            EPILEPSY_EMPTY()
#define EPILEPSY_PARENTHESISE_IMPL(...)       v((__VA_ARGS__))
#define EPILEPSY_UNPARENTHESISE_IMPL(x)       EPILEPSY_PRIV_UNPARENTHESISE(x)
#define EPILEPSY_ERROR_IMPL(...)              EPILEPSY_PRIV_ERRROR_AUX()
#define EPILEPSY_PRIV_ERRROR_AUX(missing_arg) EPILEPSY_EMPTY()
// }

#endif // DOXYGEN_IGNORE

#endif // EPILEPSY_AUX_H
