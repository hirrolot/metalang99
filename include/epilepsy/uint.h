/**
 * @file
 * Unsigned integers.
 */

#ifndef EPILEPSY_UINT_H
#define EPILEPSY_UINT_H

#include <epilepsy/control.h>
#include <epilepsy/lang.h>
#include <epilepsy/list.h>
#include <epilepsy/logical.h>
#include <epilepsy/uint/dec.h>
#include <epilepsy/uint/eq.h>
#include <epilepsy/uint/inc.h>

// Desugaring {
/**
 * \f$x + 1\f$
 */
#define EPILEPSY_uintInc(x) EPILEPSY_call(EPILEPSY_uintInc, x)

/**
 * \f$x - 1\f$
 */
#define EPILEPSY_uintDec(x) EPILEPSY_call(EPILEPSY_uintDec, x)

/**
 * \f$x = y\f$
 */
#define EPILEPSY_uintEq(x, y) EPILEPSY_call(EPILEPSY_uintEq, x y)

/**
 * \f$x \neq y\f$
 */
#define EPILEPSY_uintNeq(x, y) EPILEPSY_call(EPILEPSY_uintNeq, x y)

/**
 * \f$x > y\f$
 */
#define EPILEPSY_uintGreater(x, y) EPILEPSY_call(EPILEPSY_uintGreater, x y)

/**
 * \f$x \geq y\f$
 */
#define EPILEPSY_uintGreaterEq(x, y) EPILEPSY_call(EPILEPSY_uintGreaterEq, x y)

/**
 * \f$x < y\f$
 */
#define EPILEPSY_uintLesser(x, y) EPILEPSY_call(EPILEPSY_uintLesser, x y)

/**
 * \f$x \leq y\f$
 */
#define EPILEPSY_uintLesserEq(x, y) EPILEPSY_call(EPILEPSY_uintLesserEq, x y)

/**
 * \f$x + y\f$
 */
#define EPILEPSY_uintAdd(x, y) EPILEPSY_call(EPILEPSY_uintAdd, x y)

/**
 * \f$x_1 + \ldots + x_n\f$
 */
#define EPILEPSY_uintAddVariadics(...) EPILEPSY_call(EPILEPSY_uintAddVariadics, __VA_ARGS__)

/**
 * \f$x - y\f$
 */
#define EPILEPSY_uintSub(x, y) EPILEPSY_call(EPILEPSY_uintSub, x y)

/**
 * \f$x_1 - \ldots - x_n\f$
 */
#define EPILEPSY_uintSubVariadics(...) EPILEPSY_call(EPILEPSY_uintSubVariadics, __VA_ARGS__)

/**
 * \f$x * y\f$
 */
#define EPILEPSY_uintMul(x, y) EPILEPSY_call(EPILEPSY_uintMul, x y)

/**
 * \f$x_1 * \ldots * x_n\f$
 */
#define EPILEPSY_uintMulVariadics(...) EPILEPSY_call(EPILEPSY_uintMulVariadics, __VA_ARGS__)
// }

#ifndef DOXYGEN_IGNORE

// Implementation {
#define EPILEPSY_uintNeq_IMPL(x, y) EPILEPSY_not(EPILEPSY_uintEq(v(x), v(y)))

#define EPILEPSY_uintGreater_IMPL(x, y) EPILEPSY_uintLesser(v(y), v(x))

#define EPILEPSY_uintGreaterEq_IMPL(x, y)                                                          \
    EPILEPSY_ifLazy(                                                                               \
        EPILEPSY_uintEq(v(x), v(y)),                                                               \
        EPILEPSY_appl(v(EPILEPSY_const2), v(1)),                                                   \
        v(EPILEPSY_uintGreater),                                                                   \
        v(x, y))

#define EPILEPSY_uintLesser_IMPL(x, y)                                                             \
    EPILEPSY_ifLazy(                                                                               \
        EPILEPSY_uintEq(v(y), v(0)),                                                               \
        EPILEPSY_appl(v(EPILEPSY_const2), v(0)),                                                   \
        v(EPILEPSY_PRIV_uint_LESSER_PROGRESS),                                                     \
        v(x, y))
#define EPILEPSY_PRIV_uint_LESSER_PROGRESS_IMPL(x, y)                                              \
    EPILEPSY_ifLazy(                                                                               \
        EPILEPSY_uintEq(v(x), EPILEPSY_uintDec(v(y))),                                             \
        EPILEPSY_appl(v(EPILEPSY_const2), v(1)),                                                   \
        v(EPILEPSY_uintLesser),                                                                    \
        v(x) EPILEPSY_uintDec(v(y)))

#define EPILEPSY_uintLesserEq_IMPL(x, y) EPILEPSY_uintGreaterEq(v(y), v(x))

#define EPILEPSY_uintAdd_IMPL(x, y)                                                                \
    EPILEPSY_ifLazy(                                                                               \
        EPILEPSY_uintEq(v(y), v(0)),                                                               \
        v(EPILEPSY_PRIV_uintAdd_DONE),                                                             \
        v(EPILEPSY_PRIV_uintAdd_PROGRESS),                                                         \
        v(x, y))
#define EPILEPSY_PRIV_uintAdd_DONE_IMPL(x, _y) v(x)
#define EPILEPSY_PRIV_uintAdd_PROGRESS_IMPL(x, y)                                                  \
    EPILEPSY_uintAdd(EPILEPSY_uintInc(v(x)), EPILEPSY_uintDec(v(y)))

#define EPILEPSY_uintAddVariadics_IMPL(...)                                                        \
    EPILEPSY_listFoldr(EPILEPSY_list(v(__VA_ARGS__)), v(EPILEPSY_uintAdd), v(0))

#define EPILEPSY_uintSub_IMPL(x, y)                                                                \
    EPILEPSY_ifLazy(                                                                               \
        EPILEPSY_uintEq(v(y), v(0)),                                                               \
        v(EPILEPSY_PRIV_uintSub_DONE),                                                             \
        v(EPILEPSY_PRIV_uintSub_PROGRESS),                                                         \
        v(x, y))
#define EPILEPSY_PRIV_uintSub_DONE_IMPL(x, _y) v(x)
#define EPILEPSY_PRIV_uintSub_PROGRESS_IMPL(x, y)                                                  \
    EPILEPSY_uintSub(EPILEPSY_uintDec(v(x)), EPILEPSY_uintDec(v(y)))

#define EPILEPSY_uintSubVariadics_IMPL(...)                                                        \
    EPILEPSY_listFoldl1(EPILEPSY_list(v(__VA_ARGS__)), v(EPILEPSY_uintSub))

#define EPILEPSY_uintMul_IMPL(x, y)                                                                \
    EPILEPSY_ifLazy(                                                                               \
        EPILEPSY_uintEq(v(y), v(0)),                                                               \
        v(EPILEPSY_PRIV_uintMul_DONE),                                                             \
        v(EPILEPSY_PRIV_uintMul_PROGRESS),                                                         \
        v(x, y))
#define EPILEPSY_PRIV_uintMul_DONE_IMPL(x, _y) v(0)
#define EPILEPSY_PRIV_uintMul_PROGRESS_IMPL(x, y)                                                  \
    EPILEPSY_uintAdd(v(x), EPILEPSY_uintMul(v(x), EPILEPSY_uintDec(v(y))))

#define EPILEPSY_uintMulVariadics_IMPL(...)                                                        \
    EPILEPSY_listFoldl1(EPILEPSY_list(v(__VA_ARGS__)), v(EPILEPSY_uintMul))
// }

// Arity specifiers {
#define EPILEPSY_uintInc_ARITY          1
#define EPILEPSY_uintDec_ARITY          1
#define EPILEPSY_uintEq_ARITY           2
#define EPILEPSY_uintNeq_ARITY          2
#define EPILEPSY_uintGreater_ARITY      2
#define EPILEPSY_uintGreaterEq_ARITY    2
#define EPILEPSY_uintLesser_ARITY       2
#define EPILEPSY_uintLesserEq_ARITY     2
#define EPILEPSY_uintAdd_ARITY          2
#define EPILEPSY_uintAddVariadics_ARITY 1
#define EPILEPSY_uintSub_ARITY          2
#define EPILEPSY_uintSubVariadics_ARITY 1
#define EPILEPSY_uintMul_ARITY          2
#define EPILEPSY_uintMulVariadics_ARITY 1

#define EPILEPSY_PRIV_uint_LESSER_PROGRESS_ARITY 2

#define EPILEPSY_PRIV_uintAdd_DONE_ARITY     2
#define EPILEPSY_PRIV_uintAdd_PROGRESS_ARITY 2

#define EPILEPSY_PRIV_uintSub_DONE_ARITY     2
#define EPILEPSY_PRIV_uintSub_PROGRESS_ARITY 2

#define EPILEPSY_PRIV_uintMul_DONE_ARITY     2
#define EPILEPSY_PRIV_uintMul_PROGRESS_ARITY 2
// }

#endif // DOXYGEN_IGNORE

#endif // EPILEPSY_UINT_H
