#ifndef AGONY_PP_TESTS_TEST_H
#define AGONY_PP_TESTS_TEST_H

#include "../include/agony_pp/aux.h"
#include "../include/agony_pp/eval.h"

#include <assert.h>
#include <stdbool.h>

#define TEST_EQ(left_expr, right_expr)                                                             \
    static_assert(AGONY_PP_EVAL(left_expr) == AGONY_PP_EVAL(right_expr), "")

#define TEST(expr) TEST_EQ(AGONY_PP_EXPAND(expr), v(true))

#endif // AGONY_PP_TESTS_TEST_H
