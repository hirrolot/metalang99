#include <epilepsy.h>

#define ack(m, n) E_call(ack, m n)

#define ack_IMPL(m, n)                                                                             \
    E_appl2(                                                                                       \
        E_if(E_uintEq(v(m), v(0)), E_appl(v(E_const2), E_uintInc(v(n))), v(ackMPositive)),         \
        v(m),                                                                                      \
        v(n))
#define ackMPositive_IMPL(m, n)                                                                    \
    ack(E_uintDec(v(m)),                                                                           \
        E_appl2(                                                                                   \
            E_if(E_uintEq(v(n), v(0)), E_appl(v(E_const2), v(1)), v(ackNPositive)), v(m), v(n)))
#define ackNPositive_IMPL(m, n) ack(v(m), E_uintDec(v(n)))

#define ackMPositive_ARITY 2
#define ackNPositive_ARITY 2

E_assertEq(ack(v(0), v(0)), v(1));
E_assertEq(ack(v(0), v(1)), v(2));
E_assertEq(ack(v(0), v(2)), v(3));

E_assertEq(ack(v(1), v(0)), v(2));
E_assertEq(ack(v(1), v(1)), v(3));
E_assertEq(ack(v(1), v(2)), v(4));

E_assertEq(ack(v(2), v(0)), v(3));
E_assertEq(ack(v(2), v(1)), v(5));
E_assertEq(ack(v(2), v(2)), v(7));

E_assertEq(ack(v(3), v(0)), v(5));
E_assertEq(ack(v(3), v(1)), v(13));
E_assertEq(ack(v(3), v(2)), v(29));

int main(void) {}
