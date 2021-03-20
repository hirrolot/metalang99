/**
 * @file
 * A choice type with two cases.
 */

#ifndef ML99_EITHER_H
#define ML99_EITHER_H

#include <metalang99/choice.h>
#include <metalang99/logical.h>
#include <metalang99/util.h>

/**
 * The left value @p x.
 */
#define ML99_left(x) ML99_call(ML99_left, x)

/**
 * The right value @p x.
 */
#define ML99_right(x) ML99_call(ML99_right, x)

/**
 * 1 if @p either contains a left value, otherwise 0.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/either.h>
 *
 * // 1
 * ML99_isLeft(ML99_left(v(123)))
 *
 * // 0
 * ML99_isLeft(ML99_right(v(123)))
 * @endcode
 */
#define ML99_isLeft(either) ML99_call(ML99_isLeft, either)

/**
 * 1 if @p either contains a right value, otherwise 0.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/either.h>
 *
 * // 1
 * ML99_isRight(ML99_right(v(123)))
 *
 * // 0
 * ML99_isRight(ML99_left(v(123)))
 * @endcode
 */
#define ML99_isRight(either) ML99_call(ML99_isRight, either)

/**
 * Tests @p either and @p other for equality.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/either.h>
 * #include <metalang99/nat.h>
 *
 * // 1
 * ML99_eitherEq(v(ML99_natEq), ML99_left(v(123)), ML99_left(v(123)))
 *
 * // 0
 * ML99_eitherEq(v(ML99_natEq), ML99_right(v(123)), ML99_left(v(8)))
 *
 * // 0
 * ML99_eitherEq(v(ML99_natEq), ML99_right(v(123)), ML99_left(v(123)))
 * @endcode
 */
#define ML99_eitherEq(compare, either, other) ML99_call(ML99_eitherEq, compare, either, other)

/**
 * Returns the left value on #ML99_left or emits a fatal error on #ML99_right.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/either.h>
 *
 * // 123
 * ML99_unwrapLeft(ML99_left(v(123)))
 *
 * // Emits a fatal error.
 * ML99_unwrapLeft(ML99_right(v(123)))
 * @endcode
 */
#define ML99_unwrapLeft(either) ML99_call(ML99_unwrapLeft, either)

/**
 * Returns the right value on #ML99_right or emits a fatal error on #ML99_left.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/either.h>
 *
 * // 123
 * ML99_unwrapRight(ML99_right(v(123)))
 *
 * // Emits a fatal error.
 * ML99_unwrapRight(ML99_left(v(123)))
 * @endcode
 */
#define ML99_unwrapRight(either) ML99_call(ML99_unwrapRight, either)

#define ML99_LEFT(x)          ML99_CHOICE(left, x)
#define ML99_RIGHT(x)         ML99_CHOICE(right, x)
#define ML99_IS_LEFT(either)  ML99_PRIV_IS_LEFT(either)
#define ML99_IS_RIGHT(either) ML99_NOT(ML99_IS_LEFT(either))

#ifndef DOXYGEN_IGNORE

#define ML99_left_IMPL(x)  v(ML99_LEFT(x))
#define ML99_right_IMPL(x) v(ML99_RIGHT(x))

#define ML99_isLeft_IMPL(either)  v(ML99_IS_LEFT(either))
#define ML99_isRight_IMPL(either) v(ML99_IS_RIGHT(either))

#define ML99_PRIV_IS_LEFT(either) ML99_DETECT_IDENT(ML99_PRIV_IS_LEFT_, ML99_CHOICE_TAG(either))
#define ML99_PRIV_IS_LEFT_left    ()

// ML99_eitherEq_IMPL {
#define ML99_eitherEq_IMPL(compare, either, other)                                                 \
    ML99_matchWithArgs_IMPL(either, ML99_PRIV_eitherEq_, other, compare)

#define ML99_PRIV_eitherEq_left_IMPL(x, other, compare)                                            \
    ML99_matchWithArgs_IMPL(other, ML99_PRIV_eitherEq_left_, x, compare)
#define ML99_PRIV_eitherEq_right_IMPL(x, other, compare)                                           \
    ML99_matchWithArgs_IMPL(other, ML99_PRIV_eitherEq_right_, x, compare)

#define ML99_PRIV_eitherEq_left_left_IMPL(y, x, compare)   ML99_appl2_IMPL(compare, x, y)
#define ML99_PRIV_eitherEq_left_right_IMPL                 ML99_PRIV_constFalse_IMPL
#define ML99_PRIV_eitherEq_right_left_IMPL                 ML99_PRIV_constFalse_IMPL
#define ML99_PRIV_eitherEq_right_right_IMPL(y, x, compare) ML99_appl2_IMPL(compare, x, y)
// }

// ML99_unwrapLeft_IMPL {
#define ML99_unwrapLeft_IMPL(either)      ML99_match_IMPL(either, ML99_PRIV_unwrapLeft_)
#define ML99_PRIV_unwrapLeft_left_IMPL(x) v(x)
#define ML99_PRIV_unwrapLeft_right_IMPL(_x)                                                        \
    ML99_fatal(ML99_unwrapLeft, expected ML99_left but found ML99_right)
// }

// ML99_unwrapRight_IMPL {
#define ML99_unwrapRight_IMPL(either) ML99_match_IMPL(either, ML99_PRIV_unwrapRight_)
#define ML99_PRIV_unwrapRight_left_IMPL(_x)                                                        \
    ML99_fatal(ML99_unwrapRight, expected ML99_right but found ML99_left)
#define ML99_PRIV_unwrapRight_right_IMPL(x) v(x)
// }

// Arity specifiers {
#define ML99_left_ARITY        1
#define ML99_right_ARITY       1
#define ML99_isLeft_ARITY      1
#define ML99_isRight_ARITY     1
#define ML99_eitherEq_ARITY    3
#define ML99_unwrapLeft_ARITY  1
#define ML99_unwrapRight_ARITY 1
// }

#endif // DOXYGEN_IGNORE

#endif // ML99_EITHER_H
