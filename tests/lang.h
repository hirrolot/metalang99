#include <epilepsy/assert.h>

#define F_IMPL(x, y) v(x / y)
#define F_ARITY      2

#define PARTIAL_APPL_0 EPILEPSY_APPLY(v(F), v(10))
#define PARTIAL_APPL_1 EPILEPSY_APPLY(PARTIAL_APPL_0, v(5))

EPILEPSY_ASSERT_EQ(PARTIAL_APPL_1, v(10 / 5));

#undef F_IMPL
#undef F_ARITY

// EPILEPSY_DBG {
EPILEPSY_ASSERT_EQ(EPILEPSY_DBG(815057), v(815057));

// Ensure that `EPILEPSY_DBG` also works correctly after some evaluations.
#define F_IMPL() EPILEPSY_CALL(G, v(1, 2) EPILEPSY_CALL(H, v(123)))
#define G_IMPL(_1, _2, _123_plus_1)                                                                \
    EPILEPSY_DBG(EPILEPSY_ASSERT_PLAIN(_1 == 1); EPILEPSY_ASSERT_PLAIN(_2 == 2);                   \
                 EPILEPSY_ASSERT_PLAIN(_123_plus_1 == 123 + 1);)
#define H_IMPL(a) v(a + 1)

EPILEPSY_EVAL(EPILEPSY_CALL(F, ))

#undef F_IMPL
#undef G_IMPL
#undef H_IMPL
// }
