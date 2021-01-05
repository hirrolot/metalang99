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
#define EPILEPSY_UIntInc(x) EPILEPSY_CALL(EPILEPSY_UIntInc, x)

/**
 * \f$x - 1\f$
 */
#define EPILEPSY_UIntDec(x) EPILEPSY_CALL(EPILEPSY_UIntDec, x)

/**
 * \f$x = y\f$
 */
#define EPILEPSY_UIntEq(x, y) EPILEPSY_CALL(EPILEPSY_UIntEq, x y)

/**
 * \f$x \neq y\f$
 */
#define EPILEPSY_UIntNeq(x, y) EPILEPSY_CALL(EPILEPSY_UIntNeq, x y)

/**
 * \f$x > y\f$
 */
#define EPILEPSY_UIntGreater(x, y) EPILEPSY_CALL(EPILEPSY_UIntGreater, x y)

/**
 * \f$x \geq y\f$
 */
#define EPILEPSY_UIntGreaterEq(x, y) EPILEPSY_CALL(EPILEPSY_UIntGreaterEq, x y)

/**
 * \f$x < y\f$
 */
#define EPILEPSY_UIntLesser(x, y) EPILEPSY_CALL(EPILEPSY_UIntLesser, x y)

/**
 * \f$x \leq y\f$
 */
#define EPILEPSY_UIntLesserEq(x, y) EPILEPSY_CALL(EPILEPSY_UIntLesserEq, x y)

/**
 * \f$x + y\f$
 */
#define EPILEPSY_UIntAdd(x, y) EPILEPSY_CALL(EPILEPSY_UIntAdd, x y)

/**
 * \f$x_1 + \ldots + x_n\f$
 */
#define EPILEPSY_UIntAddVariadics(...) EPILEPSY_CALL(EPILEPSY_UIntAddVariadics, __VA_ARGS__)

/**
 * \f$x - y\f$
 */
#define EPILEPSY_UIntSub(x, y) EPILEPSY_CALL(EPILEPSY_UIntSub, x y)

/**
 * \f$x_1 - \ldots - x_n\f$
 */
#define EPILEPSY_UIntSubVariadics(...) EPILEPSY_CALL(EPILEPSY_UIntSubVariadics, __VA_ARGS__)

/**
 * \f$x * y\f$
 */
#define EPILEPSY_UIntMul(x, y) EPILEPSY_CALL(EPILEPSY_UIntMul, x y)

/**
 * \f$x_1 * \ldots * x_n\f$
 */
#define EPILEPSY_UIntMulVariadics(...) EPILEPSY_CALL(EPILEPSY_UIntMulVariadics, __VA_ARGS__)
// }

#ifndef DOXYGEN_IGNORE

// Implementation {
#define EPILEPSY_UIntNeq_IMPL(x, y) EPILEPSY_NOT(EPILEPSY_UIntEq(v(x), v(y)))

#define EPILEPSY_UIntGreater_IMPL(x, y) EPILEPSY_UIntLesser(v(y), v(x))

#define EPILEPSY_UIntGreaterEq_IMPL(x, y)                                                          \
    EPILEPSY_IF_LAZY(                                                                              \
        EPILEPSY_UIntEq(v(x), v(y)),                                                               \
        EPILEPSY_APPLY(v(EPILEPSY_CONST_2), v(1)),                                                 \
        v(EPILEPSY_UIntGreater),                                                                   \
        v(x, y))

#define EPILEPSY_UIntLesser_IMPL(x, y)                                                             \
    EPILEPSY_IF_LAZY(                                                                              \
        EPILEPSY_UIntEq(v(y), v(0)),                                                               \
        EPILEPSY_APPLY(v(EPILEPSY_CONST_2), v(0)),                                                 \
        v(EPILEPSY_PRIV_UINT_LESSER_PROGRESS),                                                     \
        v(x, y))
#define EPILEPSY_PRIV_UINT_LESSER_PROGRESS_IMPL(x, y)                                              \
    EPILEPSY_IF_LAZY(                                                                              \
        EPILEPSY_UIntEq(v(x), EPILEPSY_UIntDec(v(y))),                                             \
        EPILEPSY_APPLY(v(EPILEPSY_CONST_2), v(1)),                                                 \
        v(EPILEPSY_UIntLesser),                                                                    \
        v(x) EPILEPSY_UIntDec(v(y)))

#define EPILEPSY_UIntLesserEq_IMPL(x, y) EPILEPSY_UIntGreaterEq(v(y), v(x))

#define EPILEPSY_UIntAdd_IMPL(x, y)                                                                \
    EPILEPSY_IF_LAZY(                                                                              \
        EPILEPSY_UIntEq(v(y), v(0)),                                                               \
        v(EPILEPSY_PRIV_UIntAdd_DONE),                                                             \
        v(EPILEPSY_PRIV_UIntAdd_PROGRESS),                                                         \
        v(x, y))
#define EPILEPSY_PRIV_UIntAdd_DONE_IMPL(x, _y) v(x)
#define EPILEPSY_PRIV_UIntAdd_PROGRESS_IMPL(x, y)                                                  \
    EPILEPSY_UIntAdd(EPILEPSY_UIntInc(v(x)), EPILEPSY_UIntDec(v(y)))

#define EPILEPSY_UIntAddVariadics_IMPL(...)                                                        \
    EPILEPSY_ListFoldr(EPILEPSY_List(v(__VA_ARGS__)), v(EPILEPSY_UIntAdd), v(0))

#define EPILEPSY_UIntSub_IMPL(x, y)                                                                \
    EPILEPSY_IF_LAZY(                                                                              \
        EPILEPSY_UIntEq(v(y), v(0)),                                                               \
        v(EPILEPSY_PRIV_UIntSub_DONE),                                                             \
        v(EPILEPSY_PRIV_UIntSub_PROGRESS),                                                         \
        v(x, y))
#define EPILEPSY_PRIV_UIntSub_DONE_IMPL(x, _y) v(x)
#define EPILEPSY_PRIV_UIntSub_PROGRESS_IMPL(x, y)                                                  \
    EPILEPSY_UIntSub(EPILEPSY_UIntDec(v(x)), EPILEPSY_UIntDec(v(y)))

#define EPILEPSY_UIntSubVariadics_IMPL(...)                                                        \
    EPILEPSY_ListFoldl1(EPILEPSY_List(v(__VA_ARGS__)), v(EPILEPSY_UIntSub))

#define EPILEPSY_UIntMul_IMPL(x, y)                                                                \
    EPILEPSY_IF_LAZY(                                                                              \
        EPILEPSY_UIntEq(v(y), v(0)),                                                               \
        v(EPILEPSY_PRIV_UIntMul_DONE),                                                             \
        v(EPILEPSY_PRIV_UIntMul_PROGRESS),                                                         \
        v(x, y))
#define EPILEPSY_PRIV_UIntMul_DONE_IMPL(x, _y) v(0)
#define EPILEPSY_PRIV_UIntMul_PROGRESS_IMPL(x, y)                                                  \
    EPILEPSY_UIntAdd(v(x), EPILEPSY_UIntMul(v(x), EPILEPSY_UIntDec(v(y))))

#define EPILEPSY_UIntMulVariadics_IMPL(...)                                                        \
    EPILEPSY_ListFoldl1(EPILEPSY_List(v(__VA_ARGS__)), v(EPILEPSY_UIntMul))
// }

// Arity specifiers {
#define EPILEPSY_UIntInc_ARITY          1
#define EPILEPSY_UIntDec_ARITY          1
#define EPILEPSY_UIntEq_ARITY           2
#define EPILEPSY_UIntNeq_ARITY          2
#define EPILEPSY_UIntGreater_ARITY      2
#define EPILEPSY_UIntGreaterEq_ARITY    2
#define EPILEPSY_UIntLesser_ARITY       2
#define EPILEPSY_UIntLesserEq_ARITY     2
#define EPILEPSY_UIntAdd_ARITY          2
#define EPILEPSY_UIntAddVariadics_ARITY 1
#define EPILEPSY_UIntSub_ARITY          2
#define EPILEPSY_UIntSubVariadics_ARITY 1
#define EPILEPSY_UIntMul_ARITY          2
#define EPILEPSY_UIntMulVariadics_ARITY 1

#define EPILEPSY_PRIV_UINT_LESSER_PROGRESS_ARITY 2

#define EPILEPSY_PRIV_UIntAdd_DONE_ARITY     2
#define EPILEPSY_PRIV_UIntAdd_PROGRESS_ARITY 2

#define EPILEPSY_PRIV_UIntSub_DONE_ARITY     2
#define EPILEPSY_PRIV_UIntSub_PROGRESS_ARITY 2

#define EPILEPSY_PRIV_UIntMul_DONE_ARITY     2
#define EPILEPSY_PRIV_UIntMul_PROGRESS_ARITY 2
// }

#endif // DOXYGEN_IGNORE

#endif // EPILEPSY_UINT_H
