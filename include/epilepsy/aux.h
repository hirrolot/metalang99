/**
 * @file
 * Auxiliary macros.
 */

#ifndef EPILEPSY_AUX_H
#define EPILEPSY_AUX_H

#include <epilepsy/lang.h>
#include <epilepsy/priv/compiler_attr.h>

// Desugaring {
/**
 * Concatenates @p x with @p y.
 */
#define EPILEPSY_cat(x, y) EPILEPSY_call(EPILEPSY_cat, x y)

/**
 * Stringifies @p x.
 */
#define EPILEPSY_stringify(x) EPILEPSY_call(EPILEPSY_stringify, x)

/**
 * Expands to nothing.
 */
#define EPILEPSY_empty() EPILEPSY_call(EPILEPSY_empty, )

/**
 * Expands to @p x.
 */
#define EPILEPSY_id(x) EPILEPSY_call(EPILEPSY_id, )

/**
 * Expands to its arguments.
 */
#define EPILEPSY_expand(...) EPILEPSY_call(EPILEPSY_expand, __VA_ARGS__)

/**
 * Expands to nothing, consuming all arguments.
 */
#define EPILEPSY_consume(...) EPILEPSY_call(EPILEPSY_consume, __VA_ARGS__)

/**
 * Parenthesises a sequence of arguments.
 */
#define EPILEPSY_parenthesise(...) EPILEPSY_call(EPILEPSY_parenthesise, __VA_ARGS__)

/**
 * Unparenthesises a sequence of arguments.
 */
#define EPILEPSY_unparenthesise(x) EPILEPSY_call(EPILEPSY_unparenthesise, x)

/**
 * Expands to @p x, skipping @p a.
 */
#define EPILEPSY_const(x, a) EPILEPSY_call(EPILEPSY_const, x a)

/**
 * Expands to @p x, skipping @p a, and @p b.
 */
#define EPILEPSY_const2(x, a, b) EPILEPSY_call(EPILEPSY_const2, x a b)

/**
 * Expands to @p x, skipping @p a, @p b, and @p c.
 */
#define EPILEPSY_const3(x, a, b, c) EPILEPSY_call(EPILEPSY_const2, x a b c)

/**
 * If @p cond is true, expands to @p x, otherwise @p y.
 */
#define EPILEPSY_if(cond, x, y) EPILEPSY_call(EPILEPSY_if, cond x y)

/**
 * Reverses the order of arguments of the binary function @p f.
 */
#define EPILEPSY_flip(f) EPILEPSY_call(EPILEPSY_flip, f)

/**
 * The same as #EPILEPSY_cat but implemented as an ordinary macro.
 */
#define EPILEPSY_catPlain(x, y) EPILEPSY_catPrimitive(x, y)

/**
 * Concatenates @p x with @p y as-is, without expanding them.
 */
#define EPILEPSY_catPrimitive(x, y) x##y

/**
 * The same as #EPILEPSY_stringify but implemented as an ordinary macro.
 */
#define EPILEPSY_stringifyPlain(x) EPILEPSY_stringifyPrimitive(x)

/**
 * Stringifies @p x as-is, without expanding it.
 */
#define EPILEPSY_stringifyPrimitive(x) #x

/**
 * The same as #EPILEPSY_empty but implemented as an ordinary macro.
 */
#define EPILEPSY_emptyPlain()

/**
 * The same as #EPILEPSY_id but implemented as an ordinary macro.
 */
#define EPILEPSY_idPlain(x) x

/**
 * The same as #EPILEPSY_expand but implemented as an ordinary macro.
 */
#define EPILEPSY_expandPlain(...) __VA_ARGS__

/**
 * The same as #EPILEPSY_consume but implemented as an ordinary macro.
 */
#define EPILEPSY_consumePlain(...) EPILEPSY_emptyPlain()

/**
 * The same as #EPILEPSY_parenthesise but implemented as an ordinary macro.
 */
#define EPILEPSY_parenthesisePlain(...) (__VA_ARGS__)

/**
 * The same as #EPILEPSY_unparenthesise but implemented as an ordinary macro.
 */
#define EPILEPSY_unparenthesisePlain(x) EPILEPSY_expandPlain(EPILEPSY_expandPlain x)

/**
 * Forces to put a semicolon after itself.
 */
#define EPILEPSY_semicolon()                                                                       \
    static const char EPILEPSY_catPlain(epilepsy_semicolon_, __LINE__)                             \
        EPILEPSY_PRIV_COMPILER_ATTR_UNUSED
// }

#ifndef DOXYGEN_IGNORE

// Implementation {
#define EPILEPSY_cat_IMPL(x, y)             v(x##y)
#define EPILEPSY_stringify_IMPL(x)          v(#x)
#define EPILEPSY_empty_IMPL()               v()
#define EPILEPSY_id_IMPL(x)                 v(x)
#define EPILEPSY_expand_IMPL(...)           v(__VA_ARGS__)
#define EPILEPSY_consume_IMPL(...)          EPILEPSY_empty()
#define EPILEPSY_parenthesise_IMPL(...)     v((__VA_ARGS__))
#define EPILEPSY_unparenthesise_IMPL(x)     EPILEPSY_PRIV_UNPARENTHESISE(x)
#define EPILEPSY_const_IMPL(x, _a)          v(x)
#define EPILEPSY_const2_IMPL(x, _a, _b)     v(x)
#define EPILEPSY_const3_IMPL(x, _a, _b, _c) v(x)
#define EPILEPSY_if_IMPL(cond, x, y)        v(EPILEPSY_PRIV_IF(cond, x, y))
#define EPILEPSY_flip_IMPL(f)               EPILEPSY_appl(EPILEPSY_PRIV_flip, v(f))
#define EPILEPSY_PRIV_flip_IMPL(f, a, b)    E_appl2(v(f), v(b), v(a))
// }

// Arity specifiers {
#define EPILEPSY_cat_ARITY            2
#define EPILEPSY_stringify_ARITY      1
#define EPILEPSY_empty_ARITY          1
#define EPILEPSY_id_ARITY             1
#define EPILEPSY_expand_ARITY         1
#define EPILEPSY_consume_ARITY        1
#define EPILEPSY_parenthesise_ARITY   1
#define EPILEPSY_unparenthesise_ARITY 1
#define EPILEPSY_const_ARITY          2
#define EPILEPSY_const2_ARITY         3
#define EPILEPSY_const3_ARITY         4
#define EPILEPSY_if_ARITY             3
#define EPILEPSY_flip_ARITY           1

#define EPILEPSY_PRIV_flip_ARITY 3
// }

// Aliases {
#ifndef EPILEPSY_NO_SMALL_PREFIX

#define E_cat            EPILEPSY_cat
#define E_stringify      EPILEPSY_stringify
#define E_empty          EPILEPSY_empty
#define E_id             EPILEPSY_id
#define E_expand         EPILEPSY_expand
#define E_consume        EPILEPSY_consume
#define E_parenthesise   EPILEPSY_parenthesise
#define E_unparenthesise EPILEPSY_unparenthesise
#define E_const          EPILEPSY_const
#define E_const2         EPILEPSY_const2
#define E_const3         EPILEPSY_const3
#define E_if             EPILEPSY_if
#define E_flip           EPILEPSY_flip

#define E_catPlain            EPILEPSY_catPlain
#define E_catPrimitive        EPILEPSY_catPrimitive
#define E_stringifyPlain      EPILEPSY_stringifyPlain
#define E_stringifyPrimitive  EPILEPSY_stringifyPrimitive
#define E_emptyPlain          EPILEPSY_emptyPlain
#define E_idPlain             EPILEPSY_idPlain
#define E_expandPlain         EPILEPSY_expandPlain
#define E_consumePlain        EPILEPSY_consumePlain
#define E_parenthesisePlain   EPILEPSY_parenthesisePlain
#define E_unparenthesisePlain EPILEPSY_unparenthesisePlain
#define E_semicolon           EPILEPSY_semicolon

#endif // EPILEPSY_NO_SMALL_PREFIX
// }

#endif // DOXYGEN_IGNORE

#endif // EPILEPSY_AUX_H
