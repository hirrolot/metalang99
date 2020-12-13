/**
 * @file
 * @brief Re-exports all the functionality.
 *
 * @mainpage Introduction
 *
 * @section Summary
 *
 * @subsection _0 Metalanguage syntax
 * @code
 * #include <macrolop/lang.h>
 * @endcode
 *
 *  - #call(op, ...)
 *  - #v(...)
 *
 * @subsection _1 Evaluation of metaprograms
 * @code
 * #include <macrolop/eval.h>
 * @endcode
 *
 *  - #MACROLOP_EVAL(...)
 *
 * @subsection _2 Auxiliary macros
 * @code
 * #include <macrolop/aux.h>
 * @endcode
 *
 *   - #MACROLOP_CAT()
 *   - #MACROLOP_STRINGIFY()
 *   - #MACROLOP_EMPTY()
 *   - #MACROLOP_ID(x)
 *   - #MACROLOP_EXPAND(...)
 *   - #MACROLOP_CONSUME(...)
 *   - #MACROLOP_PARENTHESISE(...)
 *   - #MACROLOP_UNPARENTHESISE(x)
 *
 * @subsection _3 Control expressions
 * @code
 * #include <macrolop/control.h>
 * @endcode
 *
 *   - #MACROLOP_IF(cond, x, y)
 *   - #MACROLOP_WHILE(predicate, op, context)
 *
 * @subsection _4 Implementation limits
 * @code
 * #include <macrolop/limits.h>
 * @endcode
 *
 *   - #MACROLOP_UINT_MAX
 *
 * @subsection _5 Boolean algebra
 * @code
 * #include <macrolop/logical.h>
 * @endcode
 *
 *   - #MACROLOP_NOT(x)
 *   - #MACROLOP_AND(x, y)
 *   - #MACROLOP_OR(x, y)
 *   - #MACROLOP_XOR(x, y)
 *
 * @subsection _6 Overloading on a number of arguments
 * @code
 * #include <macrolop/overload.h>
 * @endcode
 *
 *   - #MACROLOP_OVERLOAD(op, ...)
 *   - #MACROLOP_OVERLOAD_CALL(op, ...)
 *
 * @subsection _7 Unsigned integers
 * @code
 * #include <macrolop/uint.h>
 * @endcode
 *
 *   - #MACROLOP_UINT_INC(x)
 *   - #MACROLOP_UINT_DEC(x)
 *   - #MACROLOP_UINT_EQ(x, y)
 *   - #MACROLOP_UINT_NEQ(x, y)
 *   - #MACROLOP_UINT_GREATER(x, y)
 *   - #MACROLOP_UINT_GREATER_EQUAL(x, y)
 *   - #MACROLOP_UINT_LESSER(x, y)
 *   - #MACROLOP_UINT_LESSER_EQUAL(x, y)
 *
 * @subsection _8 Utilities for variadic macros
 * @code
 * #include <macrolop/variadics.h>
 * @endcode
 *
 *   - #MACROLOP_VARIADICS_COUNT(...)
 *   - #MACROLOP_VARIADICS_HEAD(...)
 *   - #MACROLOP_VARIADICS_TAIL(...)
 *
 * @subsection _9 Static assertions
 * @code
 * #include <macrolop/assert.h>
 * @endcode
 *
 *  - #MACROLOP_ASSERT(expr)
 *  - #MACROLOP_ASSERT_WITH_MSG(expr, message)
 *  - #MACROLOP_ASSERT_EQ(lhs, rhs)
 *  - #MACROLOP_ASSERT_EQ_WITH_MSG(lhs, rhs)
 *  - #MACROLOP_REGULAR_ASSERT(expr)
 *  - #MACROLOP_REGULAR_ASSERT_WITH_MSG(expr, message)
 */

#ifndef MACROLOP_H
#define MACROLOP_H

#include <macrolop/assert.h>
#include <macrolop/aux.h>
#include <macrolop/control.h>
#include <macrolop/eval.h>
#include <macrolop/lang.h>
#include <macrolop/limits.h>
#include <macrolop/overload.h>
#include <macrolop/uint.h>
#include <macrolop/variadics.h>

#endif // MACROLOP_H
