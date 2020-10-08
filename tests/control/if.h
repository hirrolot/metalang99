#include "../test.h"

#include "../../include/agony_pp/control.h"

TEST(AGONY_PP_IF(1, 24, 848) == 24);
TEST(AGONY_PP_IF(1, 1549, 1678) == 1549);

TEST(AGONY_PP_IF(0, 516, 115) == 115);
TEST(AGONY_PP_IF(0, 10, 6) == 6);
