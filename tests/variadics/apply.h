#include <epilepsy/assert.h>
#include <epilepsy/list.h>
#include <epilepsy/variadics.h>

#define F(x, y, z) v(x / y / z)
#define F_ARITY    3

EPILEPSY_ASSERT_EQ(EPILEPSY_VARIADICS_APPLY(v(F), v(10, 5, 2)), v(10 / 5 / 2));
EPILEPSY_ASSERT_EQ(
    EPILEPSY_VARIADICS_APPLY(EPILEPSY_VARIADICS_APPLY(v(F), v(10)), v(5, 2)), v(10 / 5 / 2));
EPILEPSY_ASSERT_EQ(
    EPILEPSY_VARIADICS_APPLY(
        EPILEPSY_VARIADICS_APPLY(EPILEPSY_VARIADICS_APPLY(v(F), v(10)), v(5)), v(2)),
    v(10 / 5 / 2));

#undef F
#undef F_ARITY
