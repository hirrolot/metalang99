#include <epilepsy.h>

#define ack(m, n) E_call(ack, m n)

#define ack_IMPL(m, n)     E_uintMatchWithArgs(v(m), v(ack_), v(n))
#define ack_0_IMPL(n)      E_uintInc(v(n))
#define ack_N_IMPL(m, n)   E_uintMatchWithArgs(v(n), v(ack_N_), v(m))
#define ack_N_0_IMPL(m)    ack(E_uintDec(v(m)), v(1))
#define ack_N_N_IMPL(n, m) ack(E_uintDec(v(m)), ack(v(m), E_uintDec(v(n))))

E_assertEq(ack(v(0), v(0)), v(1));
E_assertEq(ack(v(0), v(1)), v(2));
E_assertEq(ack(v(0), v(2)), v(3));

E_assertEq(ack(v(1), v(0)), v(2));
E_assertEq(ack(v(1), v(1)), v(3));
E_assertEq(ack(v(1), v(2)), v(4));

E_assertEq(ack(v(2), v(0)), v(3));
E_assertEq(ack(v(2), v(1)), v(5));
E_assertEq(ack(v(2), v(2)), v(7));

int main(void) {}
