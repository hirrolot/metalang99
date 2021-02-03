/**
 * @file
 * Variadic macro utilities.
 *
 * Epilepsy does not provide a lot of stuff in this module; invoking #EPILEPSY_list and then
 * manipulating with the resulting Cons-list is more appropriate.
 */

#ifndef EPILEPSY_VARIADICS_H
#define EPILEPSY_VARIADICS_H

#include <epilepsy/lang.h>
#include <epilepsy/priv/variadics/count.h>

// Desugaring {
/**
 * Computes a count of its arguments.
 *
 * # Examples
 *
 * @code
 * #include <epilepsy/variadics.h>
 *
 * // 3
 * E_variadicsCount(v(~, ~, ~))
 *
 * // 1
 * E_variadicsCount()
 * @endcode
 *
 * @note Currently, this function can accept at most 256 arguments.
 */
#define EPILEPSY_variadicsCount(...) EPILEPSY_call(EPILEPSY_variadicsCount, __VA_ARGS__)

/**
 * Extracts a head of its arguments.
 *
 * At least two arguments shall be specified.
 *
 * # Examples
 *
 * @code
 * #include <epilepsy/variadics.h>
 *
 * // 1
 * E_variadicsHead(v(1, 2, 3))
 * @endcode
 */
#define EPILEPSY_variadicsHead(...) EPILEPSY_call(EPILEPSY_variadicsHead, __VA_ARGS__)

/**
 * Extracts a tail of its arguments.
 *
 * At least two arguments shall be specified.
 *
 * # Examples
 *
 * @code
 * #include <epilepsy/variadics.h>
 *
 * // 2, 3
 * E_variadicsTail(v(1, 2, 3))
 * @endcode
 */
#define EPILEPSY_variadicsTail(...) EPILEPSY_call(EPILEPSY_variadicsTail, __VA_ARGS__)

/**
 * The plain version of #EPILEPSY_variadicsCount.
 */
#define EPILEPSY_variadicsCountPlain(...) EPILEPSY_PRIV_VARIADICS_COUNT(__VA_ARGS__)
// }

#ifndef DOXYGEN_IGNORE

// Implementation {
#define EPILEPSY_variadicsCount_IMPL(...)   v(EPILEPSY_PRIV_VARIADICS_COUNT(__VA_ARGS__))
#define EPILEPSY_variadicsHead_IMPL(x, ...) v(x)
#define EPILEPSY_variadicsTail_IMPL(x, ...) v(__VA_ARGS__)
// }

// Arity specifiers {
#define EPILEPSY_variadicsCount_ARITY 1
#define EPILEPSY_variadicsHead_ARITY  1
#define EPILEPSY_variadicsTail_ARITY  1
// }

// Aliases {
#ifndef EPILEPSY_NO_SMALL_PREFIX

#define E_variadicsCount      EPILEPSY_variadicsCount
#define E_variadicsHead       EPILEPSY_variadicsHead
#define E_variadicsTail       EPILEPSY_variadicsTail
#define E_variadicsCountPlain EPILEPSY_variadicsCountPlain

#endif // EPILEPSY_NO_SMALL_PREFIX
// }

#endif // DOXYGEN_IGNORE

#endif // EPILEPSY_VARIADICS_H
