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
#define epCat(x, y) epCall(epCat, x y)

/**
 * Stringifies @p x.
 */
#define epStringify(x) epCall(epStringify, x)

/**
 * Expands to nothing.
 */
#define epEmpty() epCall(epEmpty, )

/**
 * Expands to @p x.
 */
#define epId(x) epCall(epId, )

/**
 * Expands to its arguments.
 */
#define epExpand(...) epCall(epExpand, __VA_ARGS__)

/**
 * Expands to nothing, consuming all arguments.
 */
#define epConsume(...) epCall(epConsume, __VA_ARGS__)

/**
 * Parenthesises a sequence of arguments.
 */
#define epParenthesise(...) epCall(epParenthesise, __VA_ARGS__)

/**
 * Unparenthesises a sequence of arguments.
 */
#define epUnparenthesise(x) epCall(epUnparenthesise, x)

/**
 * Expands to @p x, skipping @p a.
 */
#define epConst(x, a) epCall(epConst, x a)

/**
 * Expands to @p x, skipping @p a, and @p b.
 */
#define epConst2(x, a, b) epCall(epConst2, x a b)

/**
 * Expands to @p x, skipping @p a, @p b, and @p c.
 */
#define epConst3(x, a, b, c) epCall(epConst2, x a b c)

/**
 * The same as #epCat but implemented as an ordinary macro.
 */
#define epCatPlain(x, y) epCatPrimitive(x, y)

/**
 * Concatenates @p x with @p y as-is, without expanding them.
 */
#define epCatPrimitive(x, y) x##y

/**
 * The same as #epStringify but implemented as an ordinary macro.
 */
#define epStringify_PLAIN(x) epStringifyPrimitive(x)

/**
 * Stringifies @p x as-is, without expanding it.
 */
#define epStringifyPrimitive(x) #x

/**
 * The same as #epEmpty but implemented as an ordinary macro.
 */
#define epEmptyPlain()

/**
 * The same as #epId but implemented as an ordinary macro.
 */
#define epIdPlain(x) x

/**
 * The same as #epExpand but implemented as an ordinary macro.
 */
#define epExpandPlain(...) __VA_ARGS__

/**
 * The same as #epConsume but implemented as an ordinary macro.
 */
#define epConsumePlain(...) epEmptyPlain()

/**
 * The same as #epParenthesise but implemented as an ordinary macro.
 */
#define epParenthesisePlain(...) (__VA_ARGS__)

/**
 * The same as #epUnparenthesise but implemented as an ordinary macro.
 */
#define epUnparenthesise_PLAIN(x) epExpandPlain(epExpandPlain x)
// }

#ifndef DOXYGEN_IGNORE

// Implementation {
#define epCat_IMPL(x, y)             v(x##y)
#define epStringify_IMPL(x)          v(#x)
#define epEmpty_IMPL()               v()
#define epId_IMPL(x)                 v(x)
#define epExpand_IMPL(...)           v(__VA_ARGS__)
#define epConsume_IMPL(...)          epEmpty()
#define epParenthesise_IMPL(...)     v((__VA_ARGS__))
#define epUnparenthesise_IMPL(x)     EPILEPSY_PRIV_UNPARENTHESISE(x)
#define epConst_IMPL(x, _a)          v(x)
#define epConst2_IMPL(x, _a, _b)     v(x)
#define epConst3_IMPL(x, _a, _b, _c) v(x)
// }

// Arity specifiers {
#define epCat_ARITY            2
#define epStringify_ARITY      1
#define epEmpty_ARITY          1
#define epId_ARITY             1
#define epExpand_ARITY         1
#define epConsume_ARITY        1
#define epParenthesise_ARITY   1
#define epUnparenthesise_ARITY 1
#define epConst_ARITY          2
#define epConst2_ARITY         3
#define epConst3_ARITY         4
// }

#endif // DOXYGEN_IGNORE

#endif // EPILEPSY_AUX_H
