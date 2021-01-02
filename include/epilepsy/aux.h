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
#define EPILEPSY_CAT(x, y) EPILEPSY_DESUGAR(EPILEPSY_CAT, x y)

/**
 * Stringifies @p x.
 */
#define EPILEPSY_STRINGIFY(x) EPILEPSY_DESUGAR(EPILEPSY_STRINGIFY, x)

/**
 * Expands to nothing.
 */
#define EPILEPSY_EMPTY() EPILEPSY_DESUGAR(EPILEPSY_EMPTY, )

/**
 * Expands to @p x.
 */
#define EPILEPSY_ID(x) EPILEPSY_DESUGAR(EPILEPSY_ID, )

/**
 * Expands to its arguments.
 */
#define EPILEPSY_EXPAND(...) EPILEPSY_DESUGAR(EPILEPSY_EXPAND, __VA_ARGS__)

/**
 * Expands to nothing, consuming all arguments.
 */
#define EPILEPSY_CONSUME(...) EPILEPSY_DESUGAR(EPILEPSY_CONSUME, __VA_ARGS__)

/**
 * Parenthesises a sequence of arguments.
 */
#define EPILEPSY_PARENTHESISE(...) EPILEPSY_DESUGAR(EPILEPSY_PARENTHESISE, __VA_ARGS__)

/**
 * Unparenthesises a sequence of arguments.
 */
#define EPILEPSY_UNPARENTHESISE(x) EPILEPSY_DESUGAR(EPILEPSY_UNPARENTHESISE, x)

/**
 * Emits a preprocessor error, consuming all arguments.
 */
#define EPILEPSY_ERROR(...) EPILEPSY_DESUGAR(EPILEPSY_ERROR, x)

#define EPILEPSY_CONST(x, a)         EPILEPSY_DESUGAR(EPILEPSY_CONST, x a)
#define EPILEPSY_CONST_2(x, a, b)    EPILEPSY_DESUGAR(EPILEPSY_CONST_2, x a b)
#define EPILEPSY_CONST_3(x, a, b, c) EPILEPSY_DESUGAR(EPILEPSY_CONST_2, x a b c)

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

#define EPILEPSY_CONST_IMPL(x, _a)           v(x)
#define EPILEPSY_CONST_2_IMPL(x, _a, _b)     v(x)
#define EPILEPSY_CONST_3_IMPL(x, _a, _b, _c) v(x)
// }

// Arity specifiers {
#define EPILEPSY_CONST_IMPL_ARITY   2
#define EPILEPSY_CONST_2_IMPL_ARITY 3
#define EPILEPSY_CONST_3_IMPL_ARITY 4
// }

#endif // DOXYGEN_IGNORE

#endif // EPILEPSY_AUX_H
