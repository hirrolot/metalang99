#include <epilepsy.h>

#define ack(m, n) E_call(ack, m n)

#define ack_IMPL(m, n)   E_uintMatchWithArgs(v(m), v(ack_), v(n))
#define ack_S_IMPL(m, n) E_uintMatchWithArgs(v(n), v(ack_S_), v(m))

#define ack_Z_IMPL(n)      E_uintInc(v(n))
#define ack_S_Z_IMPL(m)    ack(v(m), v(1))
#define ack_S_S_IMPL(n, m) ack(v(m), ack(E_uintInc(v(m)), v(n)))

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
