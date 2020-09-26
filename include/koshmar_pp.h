/**
 * @file
 * @brief Provides all the koshmar-pp stuff.
 *
 * @mainpage Introduction
 *
 * @section Summary
 *
 * @subsection _1 Auxiliary macros
 * @code
 * #include <koshmar_pp/aux.h>
 * @endcode
 *
 *   - #KOSHMAR_PP_CAT(x, y)
 *   - #KOSHMAR_PP_PRIMITIVE_CAT(x, y)
 *   - #KOSHMAR_PP_STRINGIFY(x)
 *   - #KOSHMAR_PP_PRIMITIVE_STRINGIFY(x)
 *   - #KOSHMAR_PP_CALL_MACRO(op, ...)
 *   - #KOSHMAR_PP_COMMA()
 *   - #KOSHMAR_PP_EMPTY()
 *   - #KOSHMAR_PP_ID(x)
 *   - #KOSHMAR_PP_EXPAND(...)
 *   - #KOSHMAR_PP_EXPAND_2_TIMES(...)
 *   - #KOSHMAR_PP_DEFER(op)
 *   - #KOSHMAR_PP_DEFER_2_TIMES(op)
 *   - #KOSHMAR_PP_CONSUME(...)
 *   - #KOSHMAR_PP_PARENTHESISE(...)
 *   - #KOSHMAR_PP_UNPARENTHESISE(x)
 *
 * @subsection _2 Control expressions
 * @code
 * #include <koshmar_pp/control.h>
 * @endcode
 *
 *   - #KOSHMAR_PP_IF(cond, x, y)
 *   - #KOSHMAR_PP_WHILE(predicate, op, context)
 *
 * @subsection _3 Implementation limits
 * @code
 * #include <koshmar_pp/limits.h>
 * @endcode
 *
 *   - #KOSHMAR_PP_UINT_MAX
 *   - #KOSHMAR_PP_REC_LIMIT
 *   - #KOSHMAR_PP_WHILE_LIMIT
 *
 * @subsection _4 Boolean algebra
 * @code
 * #include <koshmar_pp/logical.h>
 * @endcode
 *
 *   - #KOSHMAR_PP_NOT(x)
 *   - #KOSHMAR_PP_AND(x, y)
 *   - #KOSHMAR_PP_OR(x, y)
 *   - #KOSHMAR_PP_XOR(x, y)
 *
 * @subsection _5 Overloading on a number of arguments
 * @code
 * #include <koshmar_pp/overload.h>
 * @endcode
 *
 *   - #KOSHMAR_PP_OVERLOAD(op, ...)
 *
 * @subsection _6 Support for recursion
 * @code
 * #include <koshmar_pp/rec.h>
 * @endcode
 *
 *   - #KOSHMAR_PP_REC
 *   - #KOSHMAR_PP_REC_IF(cond, stop, continue)
 *   - #KOSHMAR_PP_REC_STOP(...)
 *   - #KOSHMAR_PP_REC_CONTINUE(indirect_op, ...)
 *
 * @subsection _7 Unsigned integers
 * @code
 * #include <koshmar_pp/uint.h>
 * @endcode
 *
 *   - #KOSHMAR_PP_UINT_INC(x)
 *   - #KOSHMAR_PP_UINT_DEC(x)
 *   - #KOSHMAR_PP_UINT_EQ(x, y)
 *   - #KOSHMAR_PP_UINT_NEQ(x, y)
 *   - #KOSHMAR_PP_UINT_GREATER(x, y)
 *   - #KOSHMAR_PP_UINT_GREATER_EQUAL(x, y)
 *   - #KOSHMAR_PP_UINT_LESSER(x, y)
 *   - #KOSHMAR_PP_UINT_LESSER_EQUAL(x, y)
 *
 * @subsection _8 Utilities for variadic macros
 * @code
 * #include <koshmar_pp/variadics.h>
 * @endcode
 *
 *   - #KOSHMAR_PP_VARIADICS_COUNT(...)
 *   - #KOSHMAR_PP_VARIADICS_HEAD(...)
 *   - #KOSHMAR_PP_VARIADICS_TAIL(...)
 */

#ifndef KOSHMAR_PP_H
#define KOSHMAR_PP_H

#include "koshmar_pp/aux.h"
#include "koshmar_pp/control.h"
#include "koshmar_pp/limits.h"
#include "koshmar_pp/logical.h"
#include "koshmar_pp/overload.h"
#include "koshmar_pp/rec.h"
#include "koshmar_pp/uint.h"
#include "koshmar_pp/variadics.h"

#endif // KOSHMAR_PP_H
