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
 * #include <insult/lang.h>
 * @endcode
 *
 *  - #c(op, ...)
 *  - #v(...)
 *
 * @subsection _1 Evaluation of metaprograms
 * @code
 * #include <insult/eval.h>
 * @endcode
 *
 *  - #INSULT_EVAL(...)
 *
 * @subsection _2 Auxiliary macros
 * @code
 * #include <insult/aux.h>
 * @endcode
 *
 *   - #INSULT_CAT()
 *   - #INSULT_STRINGIFY()
 *   - #INSULT_EMPTY()
 *   - #INSULT_ID(x)
 *   - #INSULT_EXPAND(...)
 *   - #INSULT_CONSUME(...)
 *   - #INSULT_PARENTHESISE(...)
 *   - #INSULT_UNPARENTHESISE(x)
 *
 * @subsection _3 Control expressions
 * @code
 * #include <insult/control.h>
 * @endcode
 *
 *   - #INSULT_IF(cond, x, y)
 *   - #INSULT_WHILE(predicate, op, context)
 *
 * @subsection _4 Implementation limits
 * @code
 * #include <insult/limits.h>
 * @endcode
 *
 *   - #INSULT_UINT_MAX
 *
 * @subsection _5 Boolean algebra
 * @code
 * #include <insult/logical.h>
 * @endcode
 *
 *   - #INSULT_NOT(x)
 *   - #INSULT_AND(x, y)
 *   - #INSULT_OR(x, y)
 *   - #INSULT_XOR(x, y)
 *
 * @subsection _6 Overloading on a number of arguments
 * @code
 * #include <insult/overload.h>
 * @endcode
 *
 *   - #INSULT_OVERLOAD(op, ...)
 *   - #INSULT_OVERLOAD_CALL(op, ...)
 *
 * @subsection _7 Unsigned integers
 * @code
 * #include <insult/uint.h>
 * @endcode
 *
 *   - #INSULT_UINT_INC(x)
 *   - #INSULT_UINT_DEC(x)
 *   - #INSULT_UINT_EQ(x, y)
 *   - #INSULT_UINT_NEQ(x, y)
 *   - #INSULT_UINT_GREATER(x, y)
 *   - #INSULT_UINT_GREATER_EQUAL(x, y)
 *   - #INSULT_UINT_LESSER(x, y)
 *   - #INSULT_UINT_LESSER_EQUAL(x, y)
 *
 * @subsection _8 Utilities for variadic macros
 * @code
 * #include <insult/variadics.h>
 * @endcode
 *
 *   - #INSULT_VARIADICS_COUNT(...)
 *   - #INSULT_VARIADICS_HEAD(...)
 *   - #INSULT_VARIADICS_TAIL(...)
 */

#ifndef INSULT_H
#define INSULT_H

#include "insult/aux.h"
#include "insult/control.h"
#include "insult/eval.h"
#include "insult/lang.h"
#include "insult/limits.h"
#include "insult/overload.h"
#include "insult/uint.h"
#include "insult/variadics.h"

#endif // INSULT_H
