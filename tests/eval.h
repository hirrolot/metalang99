#include <epilepsy/assert.h>

E_assertEmptyPlain(E_eval());

// A function with zero arguments {
#define FOO_IMPL() v(123)

E_assertEq(E_call(FOO, ), v(123));
E_assertEq(E_call(FOO, v()), v(123));
E_assertEq(E_call(v(FOO), ), v(123));
E_assertEq(E_call(v(FOO), v()), v(123));

#undef FOO_IMPL
// }

// Regular usage of the metalanguage {
#define FOO_IMPL(x, y, z) v(x##y##z)
#define BAR_IMPL(x, y)    v(x + y)

E_assertEq(E_call(BAR, v(5) v(7)), v(5 + 7));
E_assertEq(E_call(E_call(FOO, v(B) v(A) v(R)), v(6) v(11)), v(6 + 11));

// v(x0) ... v(xN) shall be the same as v(x1, ..., xN).
E_assertEq(E_call(BAR, v(5, 7)), v(5 + 7));
E_assertEq(E_call(E_call(FOO, v(B, A, R)), v(6, 11)), v(6 + 11));

#undef FOO_IMPL
#undef BAR_IMPL
// } (Basic tests)

// Recursion might arise from a higher-order macro, if `op` invokes `FOO`, but nonetheless the
// second call to `FOO` must be performed as expected.
#define FOO_IMPL(op) E_call(op, v(123))
#define OP_IMPL(x)   E_call(FOO, v(ID))
#define ID_IMPL(x)   v(x)

E_assertEq(E_call(FOO, v(OP)), v(123));

#undef FOO_IMPL
#undef OP_IMPL
#undef ID_IMPL

// E_dbg {
E_assertEq(E_dbg(815057), v(815057));

// Ensure that `E_dbg` also works correctly after some evaluations.
#define F_IMPL() E_call(G, v(1, 2) E_call(H, v(123)))
#define G_IMPL(_1, _2, _123_plus_1)                                                                \
    E_dbg(E_assertPlain(_1 == 1 && _2 == 2 && _123_plus_1 == 123 + 1))
#define H_IMPL(a) v(a + 1)

E_eval(E_call(F, ));

#undef F_IMPL
#undef G_IMPL
#undef H_IMPL
// }

// Partial application {

// The arity of a function with zero arguments shall be 1 {
#define F_IMPL() v(123)
#define F_ARITY  1

E_assertEq(E_appl(v(F), v()), v(123));

#undef F_IMPL
#undef F_ARITY
// }

// Regular usage of partial application {
#define F_IMPL(x, y, z) v(x##y##z)
#define F_ARITY         3

E_assertEq(E_appl(E_appl(E_appl(v(F), v(10)), v(5)), v(7)), v(1057));
E_assertEq(E_appl(E_appl2(v(F), v(10), v(5)), v(7)), v(1057));
E_assertEq(E_appl3(v(F), v(10), v(5), v(7)), v(1057));

#undef F_IMPL
#undef F_ARITY
// }

// } (Partial application)

// E_compose {
#define F_IMPL(x) v((x + 1))
#define G_IMPL(x) v((x * 8))

#define F_ARITY 1
#define G_ARITY 1

E_assertEq(E_appl(E_compose(v(F), v(G)), v(3)), v((3 * 8) + 1));

#undef F_IMPL
#undef G_IMPL

#undef F_ARITY
#undef G_ARITY
// }
