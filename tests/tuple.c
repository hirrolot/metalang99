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

// M_tupleGet {
M_assertEmpty(M_tupleGet(0)(v(())));

M_assertEq(M_tupleGet(0)(v((19))), v(19));
M_assertEq(M_tupleGet(0)(v((19, 8))), v(19));
M_assertEq(M_tupleGet(0)(v((19, 8, 7378))), v(19));

M_assertEq(M_tupleGet(1)(v((19, 8))), v(8));
M_assertEq(M_tupleGet(1)(v((19, 8, 7378))), v(8));

M_assertEq(M_tupleGet(2)(v((19, 8, 7378))), v(7378));
M_assertEq(M_tupleGet(2)(v((19, 8, 7378, 10))), v(7378));

M_assertEq(M_tupleGet(3)(v((19, 8, 7378, 10))), v(10));
M_assertEq(M_tupleGet(3)(v((19, 8, 7378, 10, 121))), v(10));

M_assertEq(M_tupleGet(4)(v((19, 8, 7378, 10, 121))), v(121));
M_assertEq(M_tupleGet(4)(v((19, 8, 7378, 10, 121, 1))), v(121));

M_assertEq(M_tupleGet(5)(v((19, 8, 7378, 10, 121, 1))), v(1));
M_assertEq(M_tupleGet(5)(v((19, 8, 7378, 10, 121, 1, 80))), v(1));

M_assertEq(M_tupleGet(6)(v((19, 8, 7378, 10, 121, 1, 80))), v(80));
M_assertEq(M_tupleGet(6)(v((19, 8, 7378, 10, 121, 1, 80, 23))), v(80));

M_assertEq(M_tupleGet(7)(v((19, 8, 7378, 10, 121, 1, 80, 23))), v(23));
M_assertEq(M_tupleGet(7)(v((19, 8, 7378, 10, 121, 1, 80, 23, 7))), v(23));
// }

// M_tupleTail {
#define CHECK_TAIL(...)            CHECK_TAIL_AUX(__VA_ARGS__)
#define CHECK_TAIL_AUX(a, b, c, d) M_assertPlain(a == 51 && b == 21 && c == 1 && d == 7378)

CHECK_TAIL(M_eval(M_tupleTail(v((9191, 51, 21, 1, 7378)))));

#undef CHECK_TAIL
#undef CHECK_TAIL_AUX
// }

// M_tupleAppend, M_tuplePrepend {
#define CHECK(a, b, c) M_assertPlain(a == 1 && b == 2 & c == 3)

M_eval(v(CHECK), M_tupleAppend(M_tuple(v(1)), v(2, 3)));
M_eval(v(CHECK), M_tuplePrepend(M_tuple(v(3)), v(1, 2)));

#undef CHECK
// }

int main(void) {}
