#ifndef AGONY_PP_TESTS_ASSERT_H
#define AGONY_PP_TESTS_ASSERT_H

#include "../include/agony_pp/aux.h"
#include "../include/agony_pp/eval.h"

#include <assert.h>
#include <stdbool.h>

#define ASSERT_EQ(left_expr, right_expr)                                                           \
    static_assert(AGONY_PP_EVAL(left_expr) == AGONY_PP_EVAL(right_expr), "")

#define ASSERT(expr) ASSERT_EQ(AGONY_PP_EXPAND(expr), v(true))

#endif // AGONY_PP_TESTS_ASSERT_H
