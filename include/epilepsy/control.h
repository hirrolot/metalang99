/**
 * @file
 * @brief Control expressions.
 */

#ifndef EPILEPSY_CONTROL_H
#define EPILEPSY_CONTROL_H

#ifndef DOXYGEN_SHOULD_SKIP_THIS

#include <epilepsy/control/if.h>
#include <epilepsy/control/while.h>

#endif // DOXYGEN_SHOULD_SKIP_THIS

/**
 * @brief @p x if @p cond expands to 1, otherwise @p y.
 */
#define EPILEPSY_IF(cond, x, y) call(EPILEPSY_IF_REAL, cond x y)

/**
 * @brief Executes @p op as long as @p predicate holds for @p state.
 */
#define EPILEPSY_WHILE(predicate, op, state) call(EPILEPSY_WHILE_REAL, predicate op state)

#endif // EPILEPSY_CONTROL_H
