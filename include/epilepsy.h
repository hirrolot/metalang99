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
 * #include <epilepsy/lang.h>
 * @endcode
 *
 *  - #call(op, ...)
 *  - #v(...)
 *
 * @subsection _1 Evaluation of metaprograms
 * @code
 * #include <epilepsy/eval.h>
 * @endcode
 *
 *  - #EPILEPSY_EVAL(...)
 *
 * @subsection _2 Auxiliary macros
 * @code
 * #include <epilepsy/aux.h>
 * @endcode
 *
 *   - #EPILEPSY_CAT()
 *   - #EPILEPSY_STRINGIFY()
 *   - #EPILEPSY_EMPTY()
 *   - #EPILEPSY_ID(x)
 *   - #EPILEPSY_EXPAND(...)
 *   - #EPILEPSY_CONSUME(...)
 *   - #EPILEPSY_PARENTHESISE(...)
 *   - #EPILEPSY_UNPARENTHESISE(x)
 *
 * @subsection _3 Control expressions
 * @code
 * #include <epilepsy/control.h>
 * @endcode
 *
 *   - #EPILEPSY_IF(cond, x, y)
 *   - #EPILEPSY_WHILE(predicate, op, context)
 *
 * @subsection _4 Choice types
 * @code
 * #include <epilepsy/choice.h>
 * @endcode
 *
 *   - #EPILEPSY_CHOICE(...)
 *   - #EPILEPSY_MATCH_WITH_ARGS(choice, matcher, ...)
 *
 * @subsection _5 Record types
 * @code
 * #include <epilepsy/record.h>
 * @endcode
 *
 *   - #EPILEPSY_RECORD(...)
 *   - #EPILEPSY_RECORD_GET(record, i)
 *
 * @subsection _6 Maybe
 * @code
 * #include <epilepsy/maybe.h>
 * @endcode
 *
 *   - #EPILEPSY_MaybeJust(x)
 *   - #EPILEPSY_MaybeNothing()
 *   - #EPILEPSY_MaybeIsJust(maybe)
 *   - #EPILEPSY_MaybeIsNothing(maybe)
 *
 * @subsection _7 Either
 * @code
 * #include <epilepsy/either.h>
 * @endcode
 *
 *   - #EPILEPSY_EitherLeft(x)
 *   - #EPILEPSY_EitherRight(x)
 *   - #EPILEPSY_EitherIsLeft(either)
 *   - #EPILEPSY_EitherIsRight(either)
 *
 * @subsection _8 Lists
 * @code
 * #include <epilepsy/list.h>
 * @endcode
 *
 *   - #EPILEPSY_Cons(head, tail)
 *   - #EPILEPSY_Nil()
 *   - #EPILEPSY_List(...)
 *   - #EPILEPSY_ListFoldr(list, op, init)
 *   - #EPILEPSY_ListGet(list, i)
 *
 * @subsection _9 Implementation limits
 * @code
 * #include <epilepsy/limits.h>
 * @endcode
 *
 *   - #EPILEPSY_UINT_MAX
 *
 * @subsection _10 Boolean algebra
 * @code
 * #include <epilepsy/logical.h>
 * @endcode
 *
 *   - #EPILEPSY_NOT(x)
 *   - #EPILEPSY_AND(x, y)
 *   - #EPILEPSY_OR(x, y)
 *   - #EPILEPSY_XOR(x, y)
 *
 * @subsection _11 Overloading on a number of arguments
 * @code
 * #include <epilepsy/overload.h>
 * @endcode
 *
 *   - #EPILEPSY_OVERLOAD(op, ...)
 *   - #EPILEPSY_OVERLOAD_CALL(op, ...)
 *
 * @subsection _12 Unsigned integers
 * @code
 * #include <epilepsy/uint.h>
 * @endcode
 *
 *   - #EPILEPSY_UINT_INC(x)
 *   - #EPILEPSY_UINT_DEC(x)
 *   - #EPILEPSY_UINT_EQ(x, y)
 *   - #EPILEPSY_UINT_NEQ(x, y)
 *   - #EPILEPSY_UINT_GREATER(x, y)
 *   - #EPILEPSY_UINT_GREATER_EQUAL(x, y)
 *   - #EPILEPSY_UINT_LESSER(x, y)
 *   - #EPILEPSY_UINT_LESSER_EQUAL(x, y)
 *
 * @subsection _13 Utilities for variadic macros
 * @code
 * #include <epilepsy/variadics.h>
 * @endcode
 *
 *   - #EPILEPSY_VARIADICS_COUNT(...)
 *   - #EPILEPSY_VARIADICS_HEAD(...)
 *   - #EPILEPSY_VARIADICS_TAIL(...)
 *
 * @subsection _14 Static assertions
 * @code
 * #include <epilepsy/assert.h>
 * @endcode
 *
 *  - #EPILEPSY_ASSERT(expr)
 *  - #EPILEPSY_ASSERT_WITH_MSG(expr, message)
 *  - #EPILEPSY_ASSERT_EQ(lhs, rhs)
 *  - #EPILEPSY_ASSERT_EQ_WITH_MSG(lhs, rhs)
 *  - #EPILEPSY_C_STATIC_ASSERT(expr)
 *  - #EPILEPSY_C_STATIC_ASSERT_WITH_MSG(expr, message)
 */

#ifndef EPILEPSY_H
#define EPILEPSY_H

#include <epilepsy/assert.h>
#include <epilepsy/aux.h>
#include <epilepsy/choice.h>
#include <epilepsy/control.h>
#include <epilepsy/eval.h>
#include <epilepsy/lang.h>
#include <epilepsy/limits.h>
#include <epilepsy/list.h>
#include <epilepsy/maybe.h>
#include <epilepsy/overload.h>
#include <epilepsy/record.h>
#include <epilepsy/uint.h>
#include <epilepsy/variadics.h>

#endif // EPILEPSY_H
