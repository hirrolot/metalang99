#include "assert.h"

#include "../include/macrolop/lang.h"
#include "../include/macrolop/logical.h"

ASSERT_EQ(MACROLOP_NOT(v(0)), v(1));
ASSERT_EQ(MACROLOP_NOT(v(1)), v(0));

ASSERT_EQ(MACROLOP_AND(v(0), v(0)), v(0));
ASSERT_EQ(MACROLOP_AND(v(0), v(1)), v(0));
ASSERT_EQ(MACROLOP_AND(v(1), v(0)), v(0));
ASSERT_EQ(MACROLOP_AND(v(1), v(1)), v(1));

ASSERT_EQ(MACROLOP_OR(v(0), v(0)), v(0));
ASSERT_EQ(MACROLOP_OR(v(0), v(1)), v(1));
ASSERT_EQ(MACROLOP_OR(v(1), v(0)), v(1));
ASSERT_EQ(MACROLOP_OR(v(1), v(1)), v(1));

ASSERT_EQ(MACROLOP_XOR(v(0), v(0)), v(0));
ASSERT_EQ(MACROLOP_XOR(v(0), v(1)), v(1));
ASSERT_EQ(MACROLOP_XOR(v(1), v(0)), v(1));
ASSERT_EQ(MACROLOP_XOR(v(1), v(1)), v(0));
