/**
 * @file
 * @brief Control expressions.
 */

#ifndef MACROLOP_CONTROL_H
#define MACROLOP_CONTROL_H

#ifndef DOXYGEN_SHOULD_SKIP_THIS

#include <macrolop/control/if.h>
#include <macrolop/control/while.h>

#endif // DOXYGEN_SHOULD_SKIP_THIS

/**
 * @brief @p x if @p cond expands to 1, otherwise @p y.
 */
#define MACROLOP_IF(cond, x, y) call(MACROLOP_IF_REAL, cond x y)

/**
 * @brief Executes @p op as long as @p predicate holds for @p state.
 */
#define MACROLOP_WHILE(predicate, op, state) call(MACROLOP_WHILE_REAL, predicate op state)

#endif // MACROLOP_CONTROL_H
