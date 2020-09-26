/**
 * @file
 * @brief Control expressions.
 */

#ifndef KOSHMAR_PP_CONTROL_H
#define KOSHMAR_PP_CONTROL_H

#ifndef DOXYGEN_SHOULD_SKIP_THIS

#include "control/if.h"
#include "control/while.h"

#endif // DOXYGEN_SHOULD_SKIP_THIS

/**
 * @brief @p x if @p cond expands to 1, otherwise @p y.
 */
#define KOSHMAR_PP_IF(cond, x, y) KOSHMAR_PP_PRIVATE_IF(cond, x, y)

/**
 * @brief Executes @p op as long as @p predicate holds for @p context.
 */
#define KOSHMAR_PP_WHILE(predicate, op, context) KOSHMAR_PP_PRIVATE_WHILE(predicate, op, context)

#endif // KOSHMAR_PP_CONTROL_H
