#include <epilepsy/assert.h>

EPILEPSY_eval()

#define FOO_IMPL(x) v((x + 1))
#define BAR_IMPL(x) v((x * 3))

    EPILEPSY_assertEq(EPILEPSY_call(FOO, EPILEPSY_call(BAR, v(123))), v((123 * 3) + 1));

#undef FOO_IMPL
#undef BAR_IMPL

#define FOO_IMPL() v(123)

EPILEPSY_assertEq(EPILEPSY_call(FOO, ), v(123));

#undef FOO_IMPL

#define FOO_IMPL(x, y, z) v(x##y##z)
#define BAR_IMPL(x, y)    v(x + y)

EPILEPSY_assertEq(EPILEPSY_call(v(BAR), v(5) v(7)), v(5 + 7));
EPILEPSY_assertEq(EPILEPSY_call(EPILEPSY_call(FOO, v(B) v(A) v(R)), v(6) v(11)), v(6 + 11));

#undef FOO_IMPL
#undef BAR_IMPL

// Recursion might arise from a higher-order macro, if `op` invokes `FOO`, but nonetheless the
// second call to `FOO` must be performed as expected.
#define FOO_IMPL(op) EPILEPSY_call(op, v(123))
#define OP_IMPL(x)   EPILEPSY_call(FOO, v(ID))
#define ID_IMPL(x)   v(x)

EPILEPSY_assertEq(EPILEPSY_call(FOO, v(OP)), v(123));

#undef FOO_IMPL
#undef OP_IMPL
#undef ID_IMPL
