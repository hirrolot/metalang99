#include <epilepsy/assert.h>

EPILEPSY_EVAL()

#define FOO(x) v((x + 1))
#define BAR(x) v((x * 3))

EPILEPSY_ASSERT_EQ(EPILEPSY_CALL(FOO, EPILEPSY_CALL(BAR, v(123))), v((123 * 3) + 1));

#undef FOO
#undef BAR

#define FOO() v(123)

EPILEPSY_ASSERT_EQ(EPILEPSY_CALL(FOO, ), v(123));

#undef FOO

#define FOO(x, y, z) v(x##y##z)
#define BAR(x, y)    v(x + y)

EPILEPSY_ASSERT_EQ(EPILEPSY_CALL(v(BAR), v(5) v(7)), v(5 + 7));
EPILEPSY_ASSERT_EQ(EPILEPSY_CALL(EPILEPSY_CALL(FOO, v(B) v(A) v(R)), v(6) v(11)), v(6 + 11));

#undef FOO
#undef BAR

// Recursion might arise from a higher-order macro, if `op` invokes `FOO`, but nonetheless the
// second call to `FOO` must be performed as expected.
#define FOO(op) EPILEPSY_CALL(op, v(123))
#define OP(x)   EPILEPSY_CALL(FOO, v(ID))
#define ID(x)   v(x)

EPILEPSY_ASSERT_EQ(EPILEPSY_CALL(FOO, v(OP)), v(123));

#undef FOO
#undef OP
#undef ID
