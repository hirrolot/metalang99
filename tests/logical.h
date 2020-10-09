#include "test.h"

#include "../include/agony_pp/logical.h"

TEST(AGONY_PP_EVAL(c(AGONY_PP_NOT, v(0))) == 1);

/*
TEST(AGONY_PP_NOT(1) == 0);

TEST(AGONY_PP_AND(0, 0) == 0);
TEST(AGONY_PP_AND(0, 1) == 0);
TEST(AGONY_PP_AND(1, 0) == 0);
TEST(AGONY_PP_AND(1, 1) == 1);

TEST(AGONY_PP_OR(0, 0) == 0);
TEST(AGONY_PP_OR(0, 1) == 1);
TEST(AGONY_PP_OR(1, 0) == 1);
TEST(AGONY_PP_OR(1, 1) == 1);

TEST(AGONY_PP_XOR(0, 0) == 0);
TEST(AGONY_PP_XOR(0, 1) == 1);
TEST(AGONY_PP_XOR(1, 0) == 1);
TEST(AGONY_PP_XOR(1, 1) == 0);
*/
