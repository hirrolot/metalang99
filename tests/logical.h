#include "assert.h"

#include "../include/insult/lang.h"
#include "../include/insult/logical.h"

ASSERT_EQ(INSULT_NOT(v(0)), v(1));
ASSERT_EQ(INSULT_NOT(v(1)), v(0));

ASSERT_EQ(INSULT_AND(v(0), v(0)), v(0));
ASSERT_EQ(INSULT_AND(v(0), v(1)), v(0));
ASSERT_EQ(INSULT_AND(v(1), v(0)), v(0));
ASSERT_EQ(INSULT_AND(v(1), v(1)), v(1));

ASSERT_EQ(INSULT_OR(v(0), v(0)), v(0));
ASSERT_EQ(INSULT_OR(v(0), v(1)), v(1));
ASSERT_EQ(INSULT_OR(v(1), v(0)), v(1));
ASSERT_EQ(INSULT_OR(v(1), v(1)), v(1));

ASSERT_EQ(INSULT_XOR(v(0), v(0)), v(0));
ASSERT_EQ(INSULT_XOR(v(0), v(1)), v(1));
ASSERT_EQ(INSULT_XOR(v(1), v(0)), v(1));
ASSERT_EQ(INSULT_XOR(v(1), v(1)), v(0));
