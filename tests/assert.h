#ifndef MACROLOP_TESTS_ASSERT_H
#define MACROLOP_TESTS_ASSERT_H

#include "../include/macrolop/aux.h"
#include "../include/macrolop/eval.h"

#include <assert.h>
#include <stdbool.h>

#define ASSERT_EQ(left_expr, right_expr)                                                           \
    static_assert(MACROLOP_EVAL(left_expr) == MACROLOP_EVAL(right_expr), "")

#define ASSERT(expr) ASSERT_EQ(MACROLOP_EXPAND(expr), v(true))

#endif // MACROLOP_TESTS_ASSERT_H
