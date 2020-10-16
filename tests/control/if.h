#include "../assert.h"

#include "../../include/insult/control.h"
#include "../../include/insult/lang.h"

ASSERT_EQ(INSULT_IF(v(1), v(24), v(848)), v(24));
ASSERT_EQ(INSULT_IF(v(1), v(1549), v(1678)), v(1549));

ASSERT_EQ(INSULT_IF(v(0), v(516), v(115)), v(115));
ASSERT_EQ(INSULT_IF(v(0), v(10), v(6)), v(6));
