#ifndef INSULT_TESTS_ASSERT_H
#define INSULT_TESTS_ASSERT_H

#include "../include/insult/aux.h"
#include "../include/insult/eval.h"

#include <assert.h>
#include <stdbool.h>

#define ASSERT_EQ(left_expr, right_expr)                                                           \
    static_assert(INSULT_EVAL(left_expr) == INSULT_EVAL(right_expr), "")

#define ASSERT(expr) ASSERT_EQ(INSULT_EXPAND(expr), v(true))

#endif // INSULT_TESTS_ASSERT_H
