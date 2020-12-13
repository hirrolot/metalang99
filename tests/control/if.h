#include <macrolop/assert.h>
#include <macrolop/control.h>
#include <macrolop/lang.h>

MACROLOP_ASSERT_EQ(MACROLOP_IF(v(1), v(24), v(848)), v(24));
MACROLOP_ASSERT_EQ(MACROLOP_IF(v(1), v(1549), v(1678)), v(1549));

MACROLOP_ASSERT_EQ(MACROLOP_IF(v(0), v(516), v(115)), v(115));
MACROLOP_ASSERT_EQ(MACROLOP_IF(v(0), v(10), v(6)), v(6));
