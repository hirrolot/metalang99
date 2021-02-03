/**
 * @file
 * Miscellaneous stuff.
 */

#ifndef EPILEPSY_MISC_H
#define EPILEPSY_MISC_H

#include <epilepsy/lang.h>
#include <epilepsy/uint.h>

// Desugaring {
/**
 * Invokes @p f @p n times, providing an iteration index each time.
 *
 * # Examples
 *
 * @code
 * #include <epilepsy/misc.h>
 * #include <epilepsy/aux.h>
 *
 * // _0 _1 _2
 * E_repeat(E_appl(v(E_cat), v(_)), v(3))
 * @endcode
 */
#define EPILEPSY_repeat(f, n) EPILEPSY_call(EPILEPSY_repeat, f n)
// }

#ifndef DOXYGEN_IGNORE

// Implementation {
#define EPILEPSY_repeat_IMPL(f, n)                                                                 \
    EPILEPSY_callTrivial(EPILEPSY_uintMatchWithArgs, n, EPILEPSY_PRIV_repeat_, f)
#define EPILEPSY_PRIV_repeat_Z_IMPL(_f) EPILEPSY_empty()
#define EPILEPSY_PRIV_repeat_S_IMPL(i, f)                                                          \
    EPILEPSY_callTrivial(EPILEPSY_repeat, f, i) EPILEPSY_callTrivial(EPILEPSY_appl, f, i)
// }

// Arity specifiers {
#define EPILEPSY_repeat_ARITY 2
// }

// Aliases {
#ifndef EPILEPSY_NO_SMALL_PREFIX

#define E_repeat EPILEPSY_repeat

#endif // EPILEPSY_NO_SMALL_PREFIX
// }

#endif // DOXYGEN_IGNORE

#endif // EPILEPSY_MISC_H
