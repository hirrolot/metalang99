#include "test.h"

#include "../include/koshmar_pp/if_then_else.h"

TEST(KOSHMAR_PP_IF(1, 24, 848) == 24);
TEST(KOSHMAR_PP_IF(1, 1549, 1678) == 1549);

TEST(KOSHMAR_PP_IF(0, 516, 115) == 115);
TEST(KOSHMAR_PP_IF(0, 10, 6) == 6);
