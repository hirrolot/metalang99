#include <epilepsy/assert.h>

#define F_IMPL(x, y) v(x / y)
#define F_ARITY      2

#define PARTIAL_APPL_0 EPILEPSY_APPLY(v(F), v(10))
#define PARTIAL_APPL_1 EPILEPSY_APPLY(PARTIAL_APPL_0, v(5))

EPILEPSY_ASSERT_EQ(PARTIAL_APPL_1, v(10 / 5));

#undef F_IMPL
#undef F_ARITY
