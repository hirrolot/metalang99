#include "../test.h"

#include "../../include/agony_pp/control.h"
#include "../../include/agony_pp/lang.h"

TEST_EQ(AGONY_PP_IF(v(1), v(24), v(848)), v(24));
TEST_EQ(AGONY_PP_IF(v(1), v(1549), v(1678)), v(1549));

TEST_EQ(AGONY_PP_IF(v(0), v(516), v(115)), v(115));
TEST_EQ(AGONY_PP_IF(v(0), v(10), v(6)), v(6));
