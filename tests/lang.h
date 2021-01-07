#include <epilepsy/assert.h>

#define F_IMPL(x, y) v(x / y)
#define F_ARITY      2

#define PARTIAL_APPL_0 epApply(v(F), v(10))
#define PARTIAL_APPL_1 epApply(PARTIAL_APPL_0, v(5))

epAssertEq(PARTIAL_APPL_1, v(10 / 5));

#undef F_IMPL
#undef F_ARITY

// epDbg {
epAssertEq(epDbg(815057), v(815057));

// Ensure that `epDbg` also works correctly after some evaluations.
#define F_IMPL() epCall(G, v(1, 2) epCall(H, v(123)))
#define G_IMPL(_1, _2, _123_plus_1)                                                                \
    epDbg(epAssertPlain(_1 == 1); epAssertPlain(_2 == 2); epAssertPlain(_123_plus_1 == 123 + 1);)
#define H_IMPL(a) v(a + 1)

epEval(epCall(F, ))

#undef F_IMPL
#undef G_IMPL
#undef H_IMPL
    // }
