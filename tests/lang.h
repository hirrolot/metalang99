#include <epilepsy/assert.h>

#define F_IMPL(x, y) v(x / y)
#define F_ARITY      2

#define PARTIAL_APPL_0 EPILEPSY_appl(v(F), v(10))
#define PARTIAL_APPL_1 EPILEPSY_appl(PARTIAL_APPL_0, v(5))

EPILEPSY_assertEq(PARTIAL_APPL_1, v(10 / 5));

#undef F_IMPL
#undef F_ARITY

// EPILEPSY_dbg {
EPILEPSY_assertEq(EPILEPSY_dbg(815057), v(815057));

// Ensure that `EPILEPSY_dbg` also works correctly after some evaluations.
#define F_IMPL() EPILEPSY_call(G, v(1, 2) EPILEPSY_call(H, v(123)))
#define G_IMPL(_1, _2, _123_plus_1)                                                                \
    EPILEPSY_dbg(EPILEPSY_assertPlain(_1 == 1); EPILEPSY_assertPlain(_2 == 2);                     \
                 EPILEPSY_assertPlain(_123_plus_1 == 123 + 1);)
#define H_IMPL(a) v(a + 1)

EPILEPSY_eval(EPILEPSY_call(F, ))

#undef F_IMPL
#undef G_IMPL
#undef H_IMPL
    // }
