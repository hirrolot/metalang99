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
#define epUIntInc(x) epCall(epUIntInc, x)

/**
 * \f$x - 1\f$
 */
#define epUIntDec(x) epCall(epUIntDec, x)

/**
 * \f$x = y\f$
 */
#define epUIntEq(x, y) epCall(epUIntEq, x y)

/**
 * \f$x \neq y\f$
 */
#define epUIntNeq(x, y) epCall(epUIntNeq, x y)

/**
 * \f$x > y\f$
 */
#define epUIntGreater(x, y) epCall(epUIntGreater, x y)

/**
 * \f$x \geq y\f$
 */
#define epUIntGreaterEq(x, y) epCall(epUIntGreaterEq, x y)

/**
 * \f$x < y\f$
 */
#define epUIntLesser(x, y) epCall(epUIntLesser, x y)

/**
 * \f$x \leq y\f$
 */
#define epUIntLesserEq(x, y) epCall(epUIntLesserEq, x y)

/**
 * \f$x + y\f$
 */
#define epUIntAdd(x, y) epCall(epUIntAdd, x y)

/**
 * \f$x_1 + \ldots + x_n\f$
 */
#define epUIntAddVariadics(...) epCall(epUIntAddVariadics, __VA_ARGS__)

/**
 * \f$x - y\f$
 */
#define epUIntSub(x, y) epCall(epUIntSub, x y)

/**
 * \f$x_1 - \ldots - x_n\f$
 */
#define epUIntSubVariadics(...) epCall(epUIntSubVariadics, __VA_ARGS__)

/**
 * \f$x * y\f$
 */
#define epUIntMul(x, y) epCall(epUIntMul, x y)

/**
 * \f$x_1 * \ldots * x_n\f$
 */
#define epUIntMulVariadics(...) epCall(epUIntMulVariadics, __VA_ARGS__)
// }

#ifndef DOXYGEN_IGNORE

// Implementation {
#define epUIntNeq_IMPL(x, y) epNot(epUIntEq(v(x), v(y)))

#define epUIntGreater_IMPL(x, y) epUIntLesser(v(y), v(x))

#define epUIntGreaterEq_IMPL(x, y)                                                                 \
    epIfLazy(epUIntEq(v(x), v(y)), epApply(v(epConst2), v(1)), v(epUIntGreater), v(x, y))

#define epUIntLesser_IMPL(x, y)                                                                    \
    epIfLazy(                                                                                      \
        epUIntEq(v(y), v(0)),                                                                      \
        epApply(v(epConst2), v(0)),                                                                \
        v(EPILEPSY_PRIV_UINT_LESSER_PROGRESS),                                                     \
        v(x, y))
#define EPILEPSY_PRIV_UINT_LESSER_PROGRESS_IMPL(x, y)                                              \
    epIfLazy(                                                                                      \
        epUIntEq(v(x), epUIntDec(v(y))),                                                           \
        epApply(v(epConst2), v(1)),                                                                \
        v(epUIntLesser),                                                                           \
        v(x) epUIntDec(v(y)))

#define epUIntLesserEq_IMPL(x, y) epUIntGreaterEq(v(y), v(x))

#define epUIntAdd_IMPL(x, y)                                                                       \
    epIfLazy(                                                                                      \
        epUIntEq(v(y), v(0)),                                                                      \
        v(EPILEPSY_PRIV_UIntAdd_DONE),                                                             \
        v(EPILEPSY_PRIV_UIntAdd_PROGRESS),                                                         \
        v(x, y))
#define EPILEPSY_PRIV_UIntAdd_DONE_IMPL(x, _y)    v(x)
#define EPILEPSY_PRIV_UIntAdd_PROGRESS_IMPL(x, y) epUIntAdd(epUIntInc(v(x)), epUIntDec(v(y)))

#define epUIntAddVariadics_IMPL(...) epListFoldr(epList(v(__VA_ARGS__)), v(epUIntAdd), v(0))

#define epUIntSub_IMPL(x, y)                                                                       \
    epIfLazy(                                                                                      \
        epUIntEq(v(y), v(0)),                                                                      \
        v(EPILEPSY_PRIV_UIntSub_DONE),                                                             \
        v(EPILEPSY_PRIV_UIntSub_PROGRESS),                                                         \
        v(x, y))
#define EPILEPSY_PRIV_UIntSub_DONE_IMPL(x, _y)    v(x)
#define EPILEPSY_PRIV_UIntSub_PROGRESS_IMPL(x, y) epUIntSub(epUIntDec(v(x)), epUIntDec(v(y)))

#define epUIntSubVariadics_IMPL(...) epListFoldl1(epList(v(__VA_ARGS__)), v(epUIntSub))

#define epUIntMul_IMPL(x, y)                                                                       \
    epIfLazy(                                                                                      \
        epUIntEq(v(y), v(0)),                                                                      \
        v(EPILEPSY_PRIV_UIntMul_DONE),                                                             \
        v(EPILEPSY_PRIV_UIntMul_PROGRESS),                                                         \
        v(x, y))
#define EPILEPSY_PRIV_UIntMul_DONE_IMPL(x, _y)    v(0)
#define EPILEPSY_PRIV_UIntMul_PROGRESS_IMPL(x, y) epUIntAdd(v(x), epUIntMul(v(x), epUIntDec(v(y))))

#define epUIntMulVariadics_IMPL(...) epListFoldl1(epList(v(__VA_ARGS__)), v(epUIntMul))
// }

// Arity specifiers {
#define epUIntInc_ARITY          1
#define epUIntDec_ARITY          1
#define epUIntEq_ARITY           2
#define epUIntNeq_ARITY          2
#define epUIntGreater_ARITY      2
#define epUIntGreaterEq_ARITY    2
#define epUIntLesser_ARITY       2
#define epUIntLesserEq_ARITY     2
#define epUIntAdd_ARITY          2
#define epUIntAddVariadics_ARITY 1
#define epUIntSub_ARITY          2
#define epUIntSubVariadics_ARITY 1
#define epUIntMul_ARITY          2
#define epUIntMulVariadics_ARITY 1

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
