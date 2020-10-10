#include "../test.h"

#include "../../include/agony_pp/eval.h"
#include "../../include/agony_pp/lang.h"

#include "../../include/agony_pp/control.h"

TEST(AGONY_PP_EVAL(c(AGONY_PP_IF, v(1) v(24) v(848))) == 24);
TEST(AGONY_PP_EVAL(c(AGONY_PP_IF, v(1) v(1549) v(1678))) == 1549);

TEST(AGONY_PP_EVAL(c(AGONY_PP_IF, v(0) v(516) v(115))) == 115);
TEST(AGONY_PP_EVAL(c(AGONY_PP_IF, v(0) v(10) v(6))) == 6);
