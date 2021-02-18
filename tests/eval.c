#include <metalang99/assert.h>

M_assertEmptyPlain(M_eval(v()));

// A function with zero arguments {
#define F_IMPL() v(123)

M_assertEq(M_call(F, v()), v(123));
M_assertEq(M_call(v(F), v()), v(123));

#undef F_IMPL
// }

// Regular usage of the metalanguage {
#define F_IMPL(x, y, z) v(x##y##z)
#define BAR_IMPL(x, y)  v(x + y)

M_assertEq(M_call(BAR, v(5), v(7)), v(5 + 7));
M_assertEq(M_call(M_call(F, v(B), v(A), v(R)), v(6), v(11)), v(6 + 11));

M_assertEq(M_call(BAR, v(5, 7)), v(5 + 7));
M_assertEq(M_call(M_call(F, v(B, A, R)), v(6, 11)), v(6 + 11));

#undef F_IMPL
#undef BAR_IMPL
// }

// Even if a term in the argument position evaluates to more than one terms, they should be appended
// to each other but not interspersed with a comma.
#define F_IMPL()    v(1), v(2), v(3)
#define BAR_IMPL(x) v(M_semicolon())

M_eval(M_call(BAR, M_call(F, v())));

#undef F_IMPL
#undef BAR_IMPL

// Recursion might arise from a higher-order macro, if `op` invokes `F`, but nonetheless the
// second call to `F` must be performed as expected.
#define F_IMPL(op) M_call(op, v(123))
#define OP_IMPL(x) M_call(F, v(ID))
#define ID_IMPL(x) v(x)

M_assertEq(M_call(F, v(OP)), v(123));

#undef F_IMPL
#undef OP_IMPL
#undef ID_IMPL

// M_abort {
M_assertEmpty(M_abort(v()));
M_assertEq(M_abort(v(815057)), v(815057));

// Ensure that `M_abort` also works correctly after some evaluations.
#define F_IMPL() M_call(G, v(1, 2), M_call(H, v(123)))
#define G_IMPL(_1, _2, _123_plus_1)                                                                \
    M_abort(v(M_assertPlain(_1 == 1 && _2 == 2 && _123_plus_1 == 123 + 1)))
#define H_IMPL(a) v(a + 1)

M_eval(M_call(F, v()));

#undef F_IMPL
#undef G_IMPL
#undef H_IMPL

// Ensure that `M_abort` immediately aborts interpretation even in an argument position.
#define F_IMPL(x) v(~)

M_assertEq(M_call(F, M_abort(v(123))), v(123));

#undef F_IMPL
// }

// Partial application {

// The arity of a function with zero arguments must be 1 {
#define F_IMPL() v(123)
#define F_ARITY  1

M_assertEq(M_appl(v(F), v()), v(123));

#undef F_IMPL
#undef F_ARITY
// }

// Regular usage of partial application {
#define F_IMPL(x, y, z) v(x##y##z)
#define F_ARITY         3

M_assertEq(M_appl(M_appl(M_appl(v(F), v(10)), v(5)), v(7)), v(1057));
M_assertEq(M_appl(M_appl2(v(F), v(10), v(5)), v(7)), v(1057));
M_assertEq(M_appl3(v(F), v(10), v(5), v(7)), v(1057));

#undef F_IMPL
#undef F_ARITY
// }

// } (Partial application)

// M_compose {
#define F_IMPL(x) v((x + 1))
#define G_IMPL(x) v((x * 8))

#define F_ARITY 1
#define G_ARITY 1

M_assertEq(M_appl(M_compose(v(F), v(G)), v(3)), v((3 * 8) + 1));

#undef F_IMPL
#undef G_IMPL

#undef F_ARITY
#undef G_ARITY
// }

int main(void) {}
