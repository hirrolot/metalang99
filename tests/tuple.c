#include <metalang99/assert.h>
#include <metalang99/tuple.h>

#define CHECK(x, y) M_assertPlain(x == 518 && y == 1910)

// M_tuple {
M_eval(v(CHECK), M_tuple(v(518, 1910)));
// }

#undef CHECK

// M_untupleEval {
M_assertEq(M_untupleEval(v((v(198)))), v(198));
// }

// M_untuple {
M_assertEq(M_untuple(v((198))), v(198));
// }

// M_tupleEval + M_untupleEval {
M_assertEq(M_untupleEval(M_tupleEval(v(187))), v(187));
// }

// M_tuple + M_untuple {
M_assertEq(M_untuple(M_tuple(v(187))), v(187));
// }

// M_isTuple, M_isUntuple {
M_assert(M_isTuple(v((1, 2, 3))));
M_assert(M_not(M_isTuple(v(123))));

M_assert(M_not(M_isUntuple(v((1, 2, 3)))));
M_assert(M_isUntuple(v(123)));
// }

// M_tupleHead {
M_assertEmpty(M_tupleHead(v(())));
M_assertEq(M_tupleHead(v((19))), v(19));
M_assertEq(M_tupleHead(v((19, 8))), v(19));
M_assertEq(M_tupleHead(v((19, 8, 7378))), v(19));
// }

// M_tupleTail {
#define CHECK_TAIL(...) CHECK_TAIL_AUX(__VA_ARGS__)
#define CHECK_TAIL_AUX(a, b, c, d)                                                                 \
    M_assertPlain(a == 51);                                                                        \
    M_assertPlain(b == 21);                                                                        \
    M_assertPlain(c == 1);                                                                         \
    M_assertPlain(d == 7378)

CHECK_TAIL(M_eval(M_tupleTail(v((9191, 51, 21, 1, 7378)))));

#undef CHECK_TAIL
#undef CHECK_TAIL_AUX
// }

int main(void) {}
