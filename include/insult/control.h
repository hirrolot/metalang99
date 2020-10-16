/**
 * @file
 * @brief Control expressions.
 */

#ifndef INSULT_CONTROL_H
#define INSULT_CONTROL_H

#ifndef DOXYGEN_SHOULD_SKIP_THIS

#include "control/if.h"
#include "control/while.h"

#endif // DOXYGEN_SHOULD_SKIP_THIS

/**
 * @brief @p x if @p cond expands to 1, otherwise @p y.
 */
#define INSULT_IF(cond, x, y) call(INSULT_IF_REAL, cond x y)

/**
 * @brief Executes @p op as long as @p predicate holds for @p state.
 */
#define INSULT_WHILE(predicate, op, state) call(INSULT_WHILE_REAL, predicate op state)

#endif // INSULT_CONTROL_H
