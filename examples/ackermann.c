#include <metalang99.h>

#define ack(m, n) M_natMatchWithArgs(m, v(ack_), n)

#define ack_Z_IMPL(n)      M_inc(v(n))
#define ack_S_IMPL(m, n)   M_natMatchWithArgs(v(n), v(ack_S_), v(m))
#define ack_S_Z_IMPL(m)    ack(v(m), v(1))
#define ack_S_S_IMPL(n, m) ack(v(m), ack(M_inc(v(m)), v(n)))

M_assertEq(ack(v(0), v(0)), v(1));
M_assertEq(ack(v(0), v(1)), v(2));
M_assertEq(ack(v(0), v(2)), v(3));

M_assertEq(ack(v(1), v(0)), v(2));
M_assertEq(ack(v(1), v(1)), v(3));
M_assertEq(ack(v(1), v(2)), v(4));

M_assertEq(ack(v(2), v(0)), v(3));
M_assertEq(ack(v(2), v(1)), v(5));
M_assertEq(ack(v(2), v(2)), v(7));

int main(void) {}
