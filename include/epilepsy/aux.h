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
#define EPILEPSY_CAT(x, y) desugar(EPILEPSY_CAT, x y)

/**
 * Stringifies @p x.
 */
#define EPILEPSY_STRINGIFY(x) desugar(EPILEPSY_STRINGIFY, x)

/**
 * Expands to nothing.
 */
#define EPILEPSY_EMPTY() desugar(EPILEPSY_EMPTY, )

/**
 * Expands to @p x.
 */
#define EPILEPSY_ID(x) desugar(EPILEPSY_ID, )

/**
 * Expands to its arguments.
 */
#define EPILEPSY_EXPAND(...) desugar(EPILEPSY_EXPAND, __VA_ARGS__)

/**
 * Expands to nothing, consuming all arguments.
 */
#define EPILEPSY_CONSUME(...) desugar(EPILEPSY_CONSUME, __VA_ARGS__)

/**
 * Parenthesises a sequence of arguments.
 */
#define EPILEPSY_PARENTHESISE(...) desugar(EPILEPSY_PARENTHESISE, __VA_ARGS__)

/**
 * Unparenthesises a sequence of arguments.
 */
#define EPILEPSY_UNPARENTHESISE(x) desugar(EPILEPSY_UNPARENTHESISE, x)

/**
 * Emits a preprocessor error, consuming all arguments.
 */
#define EPILEPSY_ERROR(...) desugar(EPILEPSY_ERROR, x)

#define EPILEPSY_EMPTY_PLAIN()
#define EPILEPSY_ID_PLAIN(x)             x
#define EPILEPSY_EXPAND_PLAIN(...)       __VA_ARGS__
#define EPILEPSY_CONSUME_PLAIN(...)      EPILEPSY_EMPTY_PLAIN()
#define EPILEPSY_PARENTHESISE_PLAIN(...) (__VA_ARGS__)
#define EPILEPSY_UNPARENTHESISE_PLAIN(x) EPILEPSY_EXPAND_PLAIN(EPILEPSY_EXPAND_PLAIN x)
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
