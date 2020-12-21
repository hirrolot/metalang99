/**
 * @file
 * @brief Unsigned integers.
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
 * @brief Increments @p x.
 */
#define EPILEPSY_UIntInc(x) call(EPILEPSY_UIntInc_IMPL, x)

/**
 * @brief Decrements @p x.
 */
#define EPILEPSY_UIntDec(x) call(EPILEPSY_UIntDec_IMPL, x)

/**
 * @brief Checks whether @p x and @p y are equal.
 */
#define EPILEPSY_UIntEq(x, y) call(EPILEPSY_UIntEq_IMPL, x y)

/**
 * @brief Checks whether @p x and @p y are **not** equal.
 */
#define EPILEPSY_UIntNeq(x, y) call(EPILEPSY_UIntNeq_IMPL, x y)

/**
 * @brief Checks whether @p x is greater than @p y.
 */
#define EPILEPSY_UIntGreater(x, y) call(EPILEPSY_UIntGreater_IMPL, x y)

/**
 * @brief Checks whether @p x is greater or equal than @p y.
 */
#define EPILEPSY_UIntGreaterEq(x, y) call(EPILEPSY_UIntGreaterEq_IMPL, x y)

/**
 * @brief Checks whether @p x is lesser than @p y.
 */
#define EPILEPSY_UIntLesser(x, y) call(EPILEPSY_UIntLesser_IMPL, x y)

/**
 * @brief Checks whether @p x is lesser or equal than @p y.
 */
#define EPILEPSY_UIntLesserEq(x, y) call(EPILEPSY_UIntLesserEq_IMPL, x y)

/**
 * @Brief @p x + @p y.
 */
#define EPILEPSY_UIntAdd(...) call(EPILEPSY_UIntAdd_IMPL, __VA_ARGS__)
// }

// Implementation {
#define EPILEPSY_UIntNeq_IMPL(x, y)      EPILEPSY_NOT(EPILEPSY_UIntEq(v(x), v(y)))
#define EPILEPSY_UIntGreater_IMPL(x, y)  EPILEPSY_UIntLesser(v(y), v(x))
#define EPILEPSY_UIntLesserEq_IMPL(x, y) EPILEPSY_UIntGreaterEq(v(y), v(x))

#define EPILEPSY_UIntGreaterEq_IMPL(x, y)                                                          \
    EPILEPSY_IF_LAZY(                                                                              \
        EPILEPSY_UIntEq(v(x), v(y)), v(EPILEPSY_TRUE_IMPL), v(EPILEPSY_UIntGreater_IMPL), v(x, y))

#define EPILEPSY_UIntLesser_IMPL(x, y)                                                             \
    EPILEPSY_IF_LAZY(                                                                              \
        EPILEPSY_UIntEq(v(y), v(0)), v(EPILEPSY_FALSE_IMPL),                                       \
        v(EPILEPSY_PRIV_UINT_LESSER_PROGRESS), v(x, y))
#define EPILEPSY_PRIV_UINT_LESSER_PROGRESS(x, y)                                                   \
    EPILEPSY_IF_LAZY(                                                                              \
        EPILEPSY_UIntEq(v(x), EPILEPSY_UIntDec(v(y))), v(EPILEPSY_TRUE_IMPL),                      \
        v(EPILEPSY_UIntLesser_IMPL), v(x) EPILEPSY_UIntDec(v(y)))

#define EPILEPSY_UIntAdd_IMPL(...)                                                                 \
    EPILEPSY_ListFoldr(EPILEPSY_List(v(__VA_ARGS__)), v(EPILEPSY_PRIV_UIntAdd_VISIT), v(0))
#define EPILEPSY_PRIV_UIntAdd_VISIT(x, acc) call(EPILEPSY_PRIV_UIntAdd_TWO, v(x, acc))

#define EPILEPSY_PRIV_UIntAdd_TWO(x, y)                                                            \
    EPILEPSY_IF_LAZY(                                                                              \
        EPILEPSY_UIntEq(v(y), v(0)), v(EPILEPSY_PRIV_UIntAdd_TWO_DONE),                            \
        v(EPILEPSY_PRIV_UIntAdd_TWO_PROGRESS), v(x, y))
#define EPILEPSY_PRIV_UIntAdd_TWO_DONE(x, _y) v(x)
#define EPILEPSY_PRIV_UIntAdd_TWO_PROGRESS(x, y)                                                   \
    call(EPILEPSY_PRIV_UIntAdd_TWO, EPILEPSY_UIntInc(v(x)) EPILEPSY_UIntDec(v(y)))
// }

#endif // EPILEPSY_UINT_H
