#include "test.h"

#include "../include/agony_pp/lang.h"
#include "../include/agony_pp/logical.h"

TEST_EQ(AGONY_PP_NOT(v(0)), v(1));
TEST_EQ(AGONY_PP_NOT(v(1)), v(0));

TEST_EQ(AGONY_PP_AND(v(0), v(0)), v(0));
TEST_EQ(AGONY_PP_AND(v(0), v(1)), v(0));
TEST_EQ(AGONY_PP_AND(v(1), v(0)), v(0));
TEST_EQ(AGONY_PP_AND(v(1), v(1)), v(1));

TEST_EQ(AGONY_PP_OR(v(0), v(0)), v(0));
TEST_EQ(AGONY_PP_OR(v(0), v(1)), v(1));
TEST_EQ(AGONY_PP_OR(v(1), v(0)), v(1));
TEST_EQ(AGONY_PP_OR(v(1), v(1)), v(1));

TEST_EQ(AGONY_PP_XOR(v(0), v(0)), v(0));
TEST_EQ(AGONY_PP_XOR(v(0), v(1)), v(1));
TEST_EQ(AGONY_PP_XOR(v(1), v(0)), v(1));
TEST_EQ(AGONY_PP_XOR(v(1), v(1)), v(0));
