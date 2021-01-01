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
#define EPILEPSY_UIntInc(x) EPILEPSY_DESUGAR(EPILEPSY_UIntInc, x)

/**
 * \f$x - 1\f$
 */
#define EPILEPSY_UIntDec(x) EPILEPSY_DESUGAR(EPILEPSY_UIntDec, x)

/**
 * \f$x = y\f$
 */
#define EPILEPSY_UIntEq(x, y) EPILEPSY_DESUGAR(EPILEPSY_UIntEq, x y)

/**
 * \f$x \neq y\f$
 */
#define EPILEPSY_UIntNeq(x, y) EPILEPSY_DESUGAR(EPILEPSY_UIntNeq, x y)

/**
 * \f$x > y\f$
 */
#define EPILEPSY_UIntGreater(x, y) EPILEPSY_DESUGAR(EPILEPSY_UIntGreater, x y)

/**
 * \f$x \geq y\f$
 */
#define EPILEPSY_UIntGreaterEq(x, y) EPILEPSY_DESUGAR(EPILEPSY_UIntGreaterEq, x y)

/**
 * \f$x < y\f$
 */
#define EPILEPSY_UIntLesser(x, y) EPILEPSY_DESUGAR(EPILEPSY_UIntLesser, x y)

/**
 * \f$x \leq y\f$
 */
#define EPILEPSY_UIntLesserEq(x, y) EPILEPSY_DESUGAR(EPILEPSY_UIntLesserEq, x y)

/**
 * \f$x + y\f$
 */
#define EPILEPSY_UIntAdd(x, y) EPILEPSY_DESUGAR(EPILEPSY_UIntAdd, x y)

/**
 * \f$x_1 + \ldots + x_n\f$
 */
#define EPILEPSY_UIntAddVariadics(...) EPILEPSY_DESUGAR(EPILEPSY_UIntAddVariadics, __VA_ARGS__)

/**
 * \f$x - y\f$
 */
#define EPILEPSY_UIntSub(x, y) EPILEPSY_DESUGAR(EPILEPSY_UIntSub, x y)

/**
 * \f$x_1 - \ldots - x_n\f$
 */
#define EPILEPSY_UIntSubVariadics(...) EPILEPSY_DESUGAR(EPILEPSY_UIntSubVariadics, __VA_ARGS__)

/**
 * \f$x * y\f$
 */
#define EPILEPSY_UIntMul(x, y) EPILEPSY_DESUGAR(EPILEPSY_UIntMul, x y)

/**
 * \f$x_1 * \ldots * x_n\f$
 */
#define EPILEPSY_UIntMulVariadics(...) EPILEPSY_DESUGAR(EPILEPSY_UIntMulVariadics, __VA_ARGS__)
// }

#ifndef DOXYGEN_IGNORE

// Implementation {
#define EPILEPSY_UIntNeq_IMPL(x, y) EPILEPSY_NOT(EPILEPSY_UIntEq(v(x), v(y)))

#define EPILEPSY_UIntGreater_IMPL(x, y) EPILEPSY_UIntLesser(v(y), v(x))

#define EPILEPSY_UIntGreaterEq_IMPL(x, y)                                                          \
    EPILEPSY_IF_LAZY(                                                                              \
        EPILEPSY_UIntEq(v(x), v(y)), EPILEPSY_APPLY(v(EPILEPSY_CONST_2_IMPL), v(1)),               \
        v(EPILEPSY_UIntGreater_IMPL), v(x, y))

#define EPILEPSY_UIntLesser_IMPL(x, y)                                                             \
    EPILEPSY_IF_LAZY(                                                                              \
        EPILEPSY_UIntEq(v(y), v(0)), EPILEPSY_APPLY(v(EPILEPSY_CONST_2_IMPL), v(0)),               \
        v(EPILEPSY_PRIV_UINT_LESSER_PROGRESS), v(x, y))
#define EPILEPSY_PRIV_UINT_LESSER_PROGRESS(x, y)                                                   \
    EPILEPSY_IF_LAZY(                                                                              \
        EPILEPSY_UIntEq(v(x), EPILEPSY_UIntDec(v(y))),                                             \
        EPILEPSY_APPLY(v(EPILEPSY_CONST_2_IMPL), v(1)), v(EPILEPSY_UIntLesser_IMPL),               \
        v(x) EPILEPSY_UIntDec(v(y)))

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

// Arity specifiers {
#define EPILEPSY_UIntInc_IMPL_ARITY          1
#define EPILEPSY_UIntDec_IMPL_ARITY          1
#define EPILEPSY_UIntEq_IMPL_ARITY           2
#define EPILEPSY_UIntNeq_IMPL_ARITY          2
#define EPILEPSY_UIntGreater_IMPL_ARITY      2
#define EPILEPSY_UIntGreaterEq_IMPL_ARITY    2
#define EPILEPSY_UIntLesser_IMPL_ARITY       2
#define EPILEPSY_UIntLesserEq_IMPL_ARITY     2
#define EPILEPSY_UIntAdd_IMPL_ARITY          2
#define EPILEPSY_UIntAddVariadics_IMPL_ARITY 1
#define EPILEPSY_UIntSub_IMPL_ARITY          2
#define EPILEPSY_UIntSubVariadics_IMPL_ARITY 1
#define EPILEPSY_UIntMul_IMPL_ARITY          2
#define EPILEPSY_UIntMulVariadics_IMPL_ARITY 1

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
