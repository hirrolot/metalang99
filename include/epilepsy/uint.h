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
#define EPILEPSY_UIntInc(x) call(EPILEPSY_UIntInc_IMPL, x)

/**
 * \f$x - 1\f$
 */
#define EPILEPSY_UIntDec(x) call(EPILEPSY_UIntDec_IMPL, x)

/**
 * \f$x = y\f$
 */
#define EPILEPSY_UIntEq(x, y) call(EPILEPSY_UIntEq_IMPL, x y)

/**
 * \f$x \neq y\f$
 */
#define EPILEPSY_UIntNeq(x, y) call(EPILEPSY_UIntNeq_IMPL, x y)

/**
 * \f$x > y\f$
 */
#define EPILEPSY_UIntGreater(x, y) call(EPILEPSY_UIntGreater_IMPL, x y)

/**
 * \f$x \geq y\f$
 */
#define EPILEPSY_UIntGreaterEq(x, y) call(EPILEPSY_UIntGreaterEq_IMPL, x y)

/**
 * \f$x < y\f$
 */
#define EPILEPSY_UIntLesser(x, y) call(EPILEPSY_UIntLesser_IMPL, x y)

/**
 * \f$x \leq y\f$
 */
#define EPILEPSY_UIntLesserEq(x, y) call(EPILEPSY_UIntLesserEq_IMPL, x y)

/**
 * \f$x + y\f$
 */
#define EPILEPSY_UIntAdd(x, y) call(EPILEPSY_UIntAdd_IMPL, x y)

/**
 * \f$x_1 + \ldots + x_n\f$
 */
#define EPILEPSY_UIntAddVariadics(...) call(EPILEPSY_UIntAddVariadics_IMPL, __VA_ARGS__)

/**
 * \f$x - y\f$
 */
#define EPILEPSY_UIntSub(x, y) call(EPILEPSY_UIntSub_IMPL, x y)

/**
 * \f$x_1 - \ldots - x_n\f$
 */
#define EPILEPSY_UIntSubVariadics(...) call(EPILEPSY_UIntSubVariadics_IMPL, __VA_ARGS__)

/**
 * \f$x * y\f$
 */
#define EPILEPSY_UIntMul(x, y) call(EPILEPSY_UIntMul_IMPL, x y)

/**
 * \f$x_1 * \ldots * x_n\f$
 */
#define EPILEPSY_UIntMulVariadics(...) call(EPILEPSY_UIntMulVariadics_IMPL, __VA_ARGS__)
// }

#ifndef DOXYGEN_IGNORE

// Implementation {
#define EPILEPSY_UIntNeq_IMPL(x, y) EPILEPSY_NOT(EPILEPSY_UIntEq(v(x), v(y)))

#define EPILEPSY_UIntGreater_IMPL(x, y) EPILEPSY_UIntLesser(v(y), v(x))

#define EPILEPSY_UIntGreaterEq_IMPL(x, y)                                                          \
    EPILEPSY_IF_LAZY(                                                                              \
        EPILEPSY_UIntEq(v(x), v(y)), v(EPILEPSY_CONST_TRUE_IMPL), v(EPILEPSY_UIntGreater_IMPL),    \
        v(x, y))

#define EPILEPSY_UIntLesser_IMPL(x, y)                                                             \
    EPILEPSY_IF_LAZY(                                                                              \
        EPILEPSY_UIntEq(v(y), v(0)), v(EPILEPSY_CONST_FALSE_IMPL),                                 \
        v(EPILEPSY_PRIV_UINT_LESSER_PROGRESS), v(x, y))
#define EPILEPSY_PRIV_UINT_LESSER_PROGRESS(x, y)                                                   \
    EPILEPSY_IF_LAZY(                                                                              \
        EPILEPSY_UIntEq(v(x), EPILEPSY_UIntDec(v(y))), v(EPILEPSY_CONST_TRUE_IMPL),                \
        v(EPILEPSY_UIntLesser_IMPL), v(x) EPILEPSY_UIntDec(v(y)))

#define EPILEPSY_UIntLesserEq_IMPL(x, y) EPILEPSY_UIntGreaterEq(v(y), v(x))

#define EPILEPSY_UIntAdd_IMPL(x, y)                                                                \
    EPILEPSY_IF_LAZY(                                                                              \
        EPILEPSY_UIntEq(v(y), v(0)), v(EPILEPSY_PRIV_UIntAdd_DONE),                                \
        v(EPILEPSY_PRIV_UIntAdd_PROGRESS), v(x, y))
#define EPILEPSY_PRIV_UIntAdd_DONE(x, _y) v(x)
#define EPILEPSY_PRIV_UIntAdd_PROGRESS(x, y)                                                       \
    EPILEPSY_UIntAdd(EPILEPSY_UIntInc(v(x)), EPILEPSY_UIntDec(v(y)))

#define EPILEPSY_UIntAddVariadics_IMPL(...)                                                        \
    EPILEPSY_ListFoldr(EPILEPSY_List(v(__VA_ARGS__)), v(EPILEPSY_UIntAdd_IMPL), v(0))

#define EPILEPSY_UIntSub_IMPL(x, y)                                                                \
    EPILEPSY_IF_LAZY(                                                                              \
        EPILEPSY_UIntEq(v(y), v(0)), v(EPILEPSY_PRIV_UIntSub_DONE),                                \
        v(EPILEPSY_PRIV_UIntSub_PROGRESS), v(x, y))
#define EPILEPSY_PRIV_UIntSub_DONE(x, _y) v(x)
#define EPILEPSY_PRIV_UIntSub_PROGRESS(x, y)                                                       \
    EPILEPSY_UIntSub(EPILEPSY_UIntDec(v(x)), EPILEPSY_UIntDec(v(y)))

#define EPILEPSY_UIntSubVariadics_IMPL(...)                                                        \
    EPILEPSY_ListFoldl1(EPILEPSY_List(v(__VA_ARGS__)), v(EPILEPSY_UIntSub_IMPL))

#define EPILEPSY_UIntMul_IMPL(x, y)                                                                \
    EPILEPSY_IF_LAZY(                                                                              \
        EPILEPSY_UIntEq(v(y), v(0)), v(EPILEPSY_PRIV_UIntMul_DONE),                                \
        v(EPILEPSY_PRIV_UIntMul_PROGRESS), v(x, y))
#define EPILEPSY_PRIV_UIntMul_DONE(x, _y) v(0)
#define EPILEPSY_PRIV_UIntMul_PROGRESS(x, y)                                                       \
    EPILEPSY_UIntAdd(v(x), EPILEPSY_UIntMul(v(x), EPILEPSY_UIntDec(v(y))))

#define EPILEPSY_UIntMulVariadics_IMPL(...)                                                        \
    EPILEPSY_ListFoldl1(EPILEPSY_List(v(__VA_ARGS__)), v(EPILEPSY_UIntMul_IMPL))
// }

#endif // DOXYGEN_IGNORE

#endif // EPILEPSY_UINT_H
