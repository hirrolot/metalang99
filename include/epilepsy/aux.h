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

/**
 * Expands to @p x, skipping @p a.
 */
#define EPILEPSY_CONST(x, a) EPILEPSY_DESUGAR(EPILEPSY_CONST, x a)

/**
 * Expands to @p x, skipping @p a, and @p b.
 */
#define EPILEPSY_CONST_2(x, a, b) EPILEPSY_DESUGAR(EPILEPSY_CONST_2, x a b)

/**
 * Expands to @p x, skipping @p a, @p b, and @p c.
 */
#define EPILEPSY_CONST_3(x, a, b, c) EPILEPSY_DESUGAR(EPILEPSY_CONST_2, x a b c)

/**
 * The same as #EPILEPSY_CAT but implemented as an ordinary macro.
 */
#define EPILEPSY_CAT_PLAIN(x, y) EPILEPSY_CAT_PRIMITIVE(x, y)

/**
 * Concatenates @p x with @p y as-is, without expanding them.
 */
#define EPILEPSY_CAT_PRIMITIVE(x, y) x##y

/**
 * The same as #EPILEPSY_STRINGIFY but implemented as an ordinary macro.
 */
#define EPILEPSY_STRINGIFY_PLAIN(x) EPILEPSY_STRINGIFY_PRIMITIVE(x)

/**
 * Stringifies @p x as-is, without expanding it.
 */
#define EPILEPSY_STRINGIFY_PRIMITIVE(x) #x

/**
 * The same as #EPILEPSY_EMPTY but implemented as an ordinary macro.
 */
#define EPILEPSY_EMPTY_PLAIN()

/**
 * The same as #EPILEPSY_ID but implemented as an ordinary macro.
 */
#define EPILEPSY_ID_PLAIN(x) x

/**
 * The same as #EPILEPSY_EXPAND but implemented as an ordinary macro.
 */
#define EPILEPSY_EXPAND_PLAIN(...) __VA_ARGS__

/**
 * The same as #EPILEPSY_CONSUME but implemented as an ordinary macro.
 */
#define EPILEPSY_CONSUME_PLAIN(...) EPILEPSY_EMPTY_PLAIN()

/**
 * The same as #EPILEPSY_PARENTHESISE but implemented as an ordinary macro.
 */
#define EPILEPSY_PARENTHESISE_PLAIN(...) (__VA_ARGS__)

/**
 * The same as #EPILEPSY_UNPARENTHESISE but implemented as an ordinary macro.
 */
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
#define EPILEPSY_CONST_IMPL(x, _a)            v(x)
#define EPILEPSY_CONST_2_IMPL(x, _a, _b)      v(x)
#define EPILEPSY_CONST_3_IMPL(x, _a, _b, _c)  v(x)
// }

// Arity specifiers {
#define EPILEPSY_CAT_IMPL_ARITY            2
#define EPILEPSY_STRINGIFY_IMPL_ARITY      1
#define EPILEPSY_EMPTY_IMPL_ARITY          1
#define EPILEPSY_ID_IMPL_ARITY             1
#define EPILEPSY_EXPAND_IMPL_ARITY         1
#define EPILEPSY_CONSUME_IMPL_ARITY        1
#define EPILEPSY_PARENTHESISE_IMPL_ARITY   1
#define EPILEPSY_UNPARENTHESISE_IMPL_ARITY 1
#define EPILEPSY_ERROR_IMPL_ARITY          1
#define EPILEPSY_CONST_IMPL_ARITY          2
#define EPILEPSY_CONST_2_IMPL_ARITY        3
#define EPILEPSY_CONST_3_IMPL_ARITY        4
// }

#endif // DOXYGEN_IGNORE

#endif // EPILEPSY_AUX_H
