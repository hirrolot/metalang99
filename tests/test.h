#ifndef AGONY_PP_TESTS_TEST_H
#define AGONY_PP_TESTS_TEST_H

#include <assert.h>

#define TEST(expr) static_assert(expr, "")

#endif // AGONY_PP_TESTS_TEST_H
