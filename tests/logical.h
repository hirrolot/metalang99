#include "assert.h"

#include "../include/agony_pp/lang.h"
#include "../include/agony_pp/logical.h"

ASSERT_EQ(AGONY_PP_NOT(v(0)), v(1));
ASSERT_EQ(AGONY_PP_NOT(v(1)), v(0));

ASSERT_EQ(AGONY_PP_AND(v(0), v(0)), v(0));
ASSERT_EQ(AGONY_PP_AND(v(0), v(1)), v(0));
ASSERT_EQ(AGONY_PP_AND(v(1), v(0)), v(0));
ASSERT_EQ(AGONY_PP_AND(v(1), v(1)), v(1));

ASSERT_EQ(AGONY_PP_OR(v(0), v(0)), v(0));
ASSERT_EQ(AGONY_PP_OR(v(0), v(1)), v(1));
ASSERT_EQ(AGONY_PP_OR(v(1), v(0)), v(1));
ASSERT_EQ(AGONY_PP_OR(v(1), v(1)), v(1));

ASSERT_EQ(AGONY_PP_XOR(v(0), v(0)), v(0));
ASSERT_EQ(AGONY_PP_XOR(v(0), v(1)), v(1));
ASSERT_EQ(AGONY_PP_XOR(v(1), v(0)), v(1));
ASSERT_EQ(AGONY_PP_XOR(v(1), v(1)), v(0));
