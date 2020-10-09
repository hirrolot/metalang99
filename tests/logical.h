#include "test.h"

#include "../include/agony_pp/eval.h"
#include "../include/agony_pp/lang.h"

#include "../include/agony_pp/logical.h"

TEST(AGONY_PP_EVAL(c(AGONY_PP_NOT, v(0))) == 1);
TEST(AGONY_PP_EVAL(c(AGONY_PP_NOT, v(1))) == 0);

TEST(AGONY_PP_EVAL(c(AGONY_PP_AND, v(0) v(0))) == 0);
TEST(AGONY_PP_EVAL(c(AGONY_PP_AND, v(0) v(1))) == 0);
TEST(AGONY_PP_EVAL(c(AGONY_PP_AND, v(1) v(0))) == 0);
TEST(AGONY_PP_EVAL(c(AGONY_PP_AND, v(1) v(1))) == 1);

TEST(AGONY_PP_EVAL(c(AGONY_PP_OR, v(0) v(0))) == 0);
TEST(AGONY_PP_EVAL(c(AGONY_PP_OR, v(0) v(1))) == 1);
TEST(AGONY_PP_EVAL(c(AGONY_PP_OR, v(1) v(0))) == 1);
TEST(AGONY_PP_EVAL(c(AGONY_PP_OR, v(1) v(1))) == 1);

TEST(AGONY_PP_EVAL(c(AGONY_PP_XOR, v(0) v(0))) == 0);
TEST(AGONY_PP_EVAL(c(AGONY_PP_XOR, v(0) v(1))) == 1);
TEST(AGONY_PP_EVAL(c(AGONY_PP_XOR, v(1) v(0))) == 1);
TEST(AGONY_PP_EVAL(c(AGONY_PP_XOR, v(1) v(1))) == 0);
