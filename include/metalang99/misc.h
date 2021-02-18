/**
 * @file
 * Miscellaneous stuff.
 */

#ifndef METALANG99_MISC_H
#define METALANG99_MISC_H

#include <metalang99/lang.h>
#include <metalang99/uint.h>
#include <metalang99/util.h>

// Desugaring {
/**
 * Invokes @p f @p n times, providing an iteration index each time.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/misc.h>
 * #include <metalang99/util.h>
 *
 * // _0 _1 _2
 * M_repeat(M_appl(v(M_cat), v(_)), v(3))
 * @endcode
 */
#define METALANG99_repeat(f, n) METALANG99_call(METALANG99_repeat, f, n)
// }

#ifndef DOXYGEN_IGNORE

// Implementation {
#define METALANG99_repeat_IMPL(f, n)                                                               \
    METALANG99_callTrivial(METALANG99_uintMatchWithArgs, n, METALANG99_PRIV_repeat_, f)
#define METALANG99_PRIV_repeat_Z_IMPL(_f) METALANG99_empty()
#define METALANG99_PRIV_repeat_S_IMPL(i, f)                                                        \
    METALANG99_callTrivial(METALANG99_repeat, f, i), METALANG99_callTrivial(METALANG99_appl, f, i)
// }

// Arity specifiers {
#define METALANG99_repeat_ARITY 2
// }

// Aliases {
#ifndef METALANG99_NO_SMALL_PREFIX

#define M_repeat METALANG99_repeat

#endif // METALANG99_NO_SMALL_PREFIX
// }

#endif // DOXYGEN_IGNORE

#endif // METALANG99_MISC_H
