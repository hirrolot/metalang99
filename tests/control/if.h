#include <epilepsy/assert.h>
#include <epilepsy/control.h>
#include <epilepsy/lang.h>

EPILEPSY_ASSERT_EQ(EPILEPSY_IF(v(1), v(24), v(848)), v(24));
EPILEPSY_ASSERT_EQ(EPILEPSY_IF(v(1), v(1549), v(1678)), v(1549));

EPILEPSY_ASSERT_EQ(EPILEPSY_IF(v(0), v(516), v(115)), v(115));
EPILEPSY_ASSERT_EQ(EPILEPSY_IF(v(0), v(10), v(6)), v(6));
