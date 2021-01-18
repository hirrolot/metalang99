#include <epilepsy.h>

// Ackermann function {
#define ACKERMANN(m, n) E_call(ACKERMANN, m n)

#define ACKERMANN_IMPL(m, n)                                                                       \
    E_appl2(                                                                                       \
        E_if(E_uintEq(v(m), v(0)), E_appl(v(E_const2), E_uintInc(v(n))), v(ACKERMANN_M_POSITIVE)), \
        v(m),                                                                                      \
        v(n))
#define ACKERMANN_M_POSITIVE_IMPL(m, n)                                                            \
    ACKERMANN(                                                                                     \
        E_uintDec(v(m)),                                                                           \
        E_appl2(                                                                                   \
            E_if(E_uintEq(v(n), v(0)), E_appl(v(E_const2), v(1)), v(ACKERMANN_N_POSITIVE)),        \
            v(m),                                                                                  \
            v(n)))
#define ACKERMANN_N_POSITIVE_IMPL(m, n) ACKERMANN(v(m), E_uintDec(v(n)))

#define ACKERMANN_M_POSITIVE_ARITY 2
#define ACKERMANN_N_POSITIVE_ARITY 2

E_assertEq(ACKERMANN(v(0), v(0)), v(1));
E_assertEq(ACKERMANN(v(0), v(1)), v(2));
E_assertEq(ACKERMANN(v(0), v(2)), v(3));

E_assertEq(ACKERMANN(v(1), v(0)), v(2));
E_assertEq(ACKERMANN(v(1), v(1)), v(3));
E_assertEq(ACKERMANN(v(1), v(2)), v(4));

E_assertEq(ACKERMANN(v(2), v(0)), v(3));
E_assertEq(ACKERMANN(v(2), v(1)), v(5));
E_assertEq(ACKERMANN(v(2), v(2)), v(7));

E_assertEq(ACKERMANN(v(3), v(0)), v(5));
E_assertEq(ACKERMANN(v(3), v(1)), v(13));
E_assertEq(ACKERMANN(v(3), v(2)), v(29));

#undef ACKERMANN
#undef ACKERMANN_IMPL
#undef ACKERMANN_M_POSITIVE_IMPL
#undef ACKERMANN_N_POSITIVE_IMPL
#undef ACKERMANN_M_POSITIVE_ARITY
#undef ACKERMANN_N_POSITIVE_ARITY
// }
