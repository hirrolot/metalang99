/**
 * @file
 * @brief Re-exports all the functionality.
 *
 * @mainpage Introduction
 *
 * @section Summary
 *
 * @subsection _1 Auxiliary macros
 * @code
 * #include <agony_pp/aux.h>
 * @endcode
 *
 *   - #AGONY_PP_CAT(x, y)
 *   - #AGONY_PP_STRINGIFY(x)
 *   - #AGONY_PP_EMPTY()
 *   - #AGONY_PP_ID(x)
 *   - #AGONY_PP_EXPAND(...)
 *   - #AGONY_PP_CONSUME(...)
 *   - #AGONY_PP_PARENTHESISE(...)
 *   - #AGONY_PP_UNPARENTHESISE(x)
 *
 * @subsection _2 Control expressions
 * @code
 * #include <agony_pp/control.h>
 * @endcode
 *
 *   - #AGONY_PP_IF(cond, x, y)
 *   - #AGONY_PP_WHILE(predicate, op, context)
 *
 * @subsection _3 Implementation limits
 * @code
 * #include <agony_pp/limits.h>
 * @endcode
 *
 *   - #AGONY_PP_UINT_MAX
 *   - #AGONY_PP_REC_LIMIT
 *   - #AGONY_PP_WHILE_LIMIT
 *
 * @subsection _4 Boolean algebra
 * @code
 * #include <agony_pp/logical.h>
 * @endcode
 *
 *   - #AGONY_PP_NOT(x)
 *   - #AGONY_PP_AND(x, y)
 *   - #AGONY_PP_OR(x, y)
 *   - #AGONY_PP_XOR(x, y)
 *
 * @subsection _5 Overloading on a number of arguments
 * @code
 * #include <agony_pp/overload.h>
 * @endcode
 *
 *   - #AGONY_PP_OVERLOAD(op, ...)
 *
 * @subsection _6 Support for recursion
 * @code
 * #include <agony_pp/rec.h>
 * @endcode
 *
 *   - #AGONY_PP_REC
 *   - #AGONY_PP_REC_IF(cond, stop, continue)
 *   - #AGONY_PP_REC_STOP(...)
 *   - #AGONY_PP_REC_CONTINUE(indirect_op, ...)
 *
 * @subsection _7 Unsigned integers
 * @code
 * #include <agony_pp/uint.h>
 * @endcode
 *
 *   - #AGONY_PP_UINT_INC(x)
 *   - #AGONY_PP_UINT_DEC(x)
 *   - #AGONY_PP_UINT_EQ(x, y)
 *   - #AGONY_PP_UINT_NEQ(x, y)
 *   - #AGONY_PP_UINT_GREATER(x, y)
 *   - #AGONY_PP_UINT_GREATER_EQUAL(x, y)
 *   - #AGONY_PP_UINT_LESSER(x, y)
 *   - #AGONY_PP_UINT_LESSER_EQUAL(x, y)
 *
 * @subsection _8 Utilities for variadic macros
 * @code
 * #include <agony_pp/variadics.h>
 * @endcode
 *
 *   - #AGONY_PP_VARIADICS_COUNT(...)
 *   - #AGONY_PP_VARIADICS_HEAD(...)
 *   - #AGONY_PP_VARIADICS_TAIL(...)
 */

#ifndef AGONY_PP_H
#define AGONY_PP_H

#include "agony_pp/aux.h"
#include "agony_pp/lang.h"
#include "agony_pp/uint.h"

#endif // AGONY_PP_H
