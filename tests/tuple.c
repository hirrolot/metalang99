#include <metalang99/assert.h>
#include <metalang99/tuple.h>

#define CHECK(x, y) ML99_ASSERT_UNEVAL(x == 518 && y == 1910)

// ML99_tuple {
ML99_EVAL(v(CHECK), ML99_tuple(v(518, 1910)));
// }

#undef CHECK

// ML99_untupleEval {
ML99_ASSERT_EQ(ML99_untupleEval(v((v(198)))), v(198));
// }

// ML99_untuple, ML99_untupleChecked {
ML99_ASSERT_EQ(ML99_untuple(v((198))), v(198));
ML99_ASSERT_EQ(ML99_untupleChecked(v((198))), v(198));
// }

// ML99_tupleEval + ML99_untupleEval {
ML99_ASSERT_EQ(ML99_untupleEval(ML99_tupleEval(v(187))), v(187));
// }

// ML99_tuple + ML99_untuple {
ML99_ASSERT_EQ(ML99_untuple(ML99_tuple(v(187))), v(187));
// }

// ML99_isTuple, ML99_isUntuple {
ML99_ASSERT(ML99_isTuple(v((1, 2, 3))));
ML99_ASSERT(ML99_not(ML99_isTuple(v(123))));

ML99_ASSERT(ML99_not(ML99_isUntuple(v((1, 2, 3)))));

ML99_ASSERT(ML99_isUntuple(v(123)));
ML99_ASSERT(ML99_isUntuple(v(123())));
ML99_ASSERT(ML99_isUntuple(v(123(~))));
ML99_ASSERT(ML99_isUntuple(v(123(~, ~, ~))));

ML99_ASSERT(ML99_isUntuple(v(()())));
ML99_ASSERT(ML99_isUntuple(v(()() ~)));

ML99_ASSERT(ML99_isUntuple(v((~)(~))));
ML99_ASSERT(ML99_isUntuple(v((~)(~) ~)));

ML99_ASSERT(ML99_isUntuple(v((~, ~, ~)(~, ~, ~))));
ML99_ASSERT(ML99_isUntuple(v((~, ~, ~)(~, ~, ~) ~)));

ML99_ASSERT(ML99_isUntuple(v((~, ~, ~)(~, ~, ~)(~, ~, ~))));
ML99_ASSERT(ML99_isUntuple(v((~, ~, ~)(~, ~, ~)(~, ~, ~) ~)));
// }

// ML99_tupleCount {
ML99_ASSERT_EQ(ML99_tupleCount(v((1, 2, 3))), v(3));
ML99_ASSERT_EQ(ML99_tupleCount(v((*))), v(1));

ML99_ASSERT_UNEVAL(ML99_TUPLE_COUNT((1, 2, 3)) == 3);
ML99_ASSERT_UNEVAL(ML99_TUPLE_COUNT((*)) == 1);
// }

// ML99_tupleIsSingle {
ML99_ASSERT(ML99_not(ML99_tupleIsSingle(v((1, 2, 3)))));
ML99_ASSERT(ML99_tupleIsSingle(v((*))));

ML99_ASSERT_UNEVAL(!ML99_TUPLE_IS_SINGLE((1, 2, 3)));
ML99_ASSERT_UNEVAL(ML99_TUPLE_IS_SINGLE((*)));
// }

// ML99_tupleGet {
ML99_ASSERT_EMPTY(ML99_tupleGet(0)(v(())));

ML99_ASSERT_EQ(ML99_tupleGet(0)(v((19))), v(19));
ML99_ASSERT_EQ(ML99_tupleGet(0)(v((19, 8))), v(19));
ML99_ASSERT_EQ(ML99_tupleGet(0)(v((19, 8, 7378))), v(19));

ML99_ASSERT_EQ(ML99_tupleGet(1)(v((19, 8))), v(8));
ML99_ASSERT_EQ(ML99_tupleGet(1)(v((19, 8, 7378))), v(8));

ML99_ASSERT_EQ(ML99_tupleGet(2)(v((19, 8, 7378))), v(7378));
ML99_ASSERT_EQ(ML99_tupleGet(2)(v((19, 8, 7378, 10))), v(7378));

ML99_ASSERT_EQ(ML99_tupleGet(3)(v((19, 8, 7378, 10))), v(10));
ML99_ASSERT_EQ(ML99_tupleGet(3)(v((19, 8, 7378, 10, 121))), v(10));

ML99_ASSERT_EQ(ML99_tupleGet(4)(v((19, 8, 7378, 10, 121))), v(121));
ML99_ASSERT_EQ(ML99_tupleGet(4)(v((19, 8, 7378, 10, 121, 1))), v(121));

ML99_ASSERT_EQ(ML99_tupleGet(5)(v((19, 8, 7378, 10, 121, 1))), v(1));
ML99_ASSERT_EQ(ML99_tupleGet(5)(v((19, 8, 7378, 10, 121, 1, 80))), v(1));

ML99_ASSERT_EQ(ML99_tupleGet(6)(v((19, 8, 7378, 10, 121, 1, 80))), v(80));
ML99_ASSERT_EQ(ML99_tupleGet(6)(v((19, 8, 7378, 10, 121, 1, 80, 23))), v(80));

ML99_ASSERT_EQ(ML99_tupleGet(7)(v((19, 8, 7378, 10, 121, 1, 80, 23))), v(23));
ML99_ASSERT_EQ(ML99_tupleGet(7)(v((19, 8, 7378, 10, 121, 1, 80, 23, 7))), v(23));
// }

// ML99_tupleTail {
#define CHECK_TAIL(...)            CHECK_TAIL_AUX(__VA_ARGS__)
#define CHECK_TAIL_AUX(a, b, c, d) ML99_ASSERT_UNEVAL(a == 51 && b == 21 && c == 1 && d == 7378)

CHECK_TAIL(ML99_EVAL(ML99_tupleTail(v((9191, 51, 21, 1, 7378)))));

#undef CHECK_TAIL
#undef CHECK_TAIL_AUX
// }

// ML99_tupleAppend, ML99_tuplePrepend {
#define CHECK(a, b, c) ML99_ASSERT_UNEVAL(a == 1 && b == 2 && c == 3)

ML99_EVAL(v(CHECK), ML99_tupleAppend(ML99_tuple(v(1)), v(2, 3)));
ML99_EVAL(v(CHECK), ML99_tuplePrepend(ML99_tuple(v(3)), v(1, 2)));

#undef CHECK
// }

// ML99_tupleForEach {
#define CHECK(_, x, y, z) ML99_ASSERT_UNEVAL(x == 1987 && y == 2987 && z == 3987)
#define F_IMPL(x)         v(, x##987)
#define F_ARITY           1

ML99_EVAL(v(CHECK), ML99_tuple(ML99_tupleForEach(v(F), v((1, 2, 3)))));

#undef CHECK
#undef F_IMPL
#undef F_ARITY
// }

// ML99_tupleForEachI {
#define CHECK(_, x, y, z) ML99_ASSERT_UNEVAL(x == 10 && y == 21 && z == 32)
#define F_IMPL(x, i)      v(, ), v(x##i)
#define F_ARITY           2

ML99_EVAL(v(CHECK), ML99_tuple(ML99_tupleForEachI(v(F), v((1, 2, 3)))));

#undef CHECK
#undef F_IMPL
#undef F_ARITY
// }

// ML99_assertIsTuple {
ML99_EVAL(ML99_assertIsTuple(ML99_tuple(v(1, 2, 3))))
// }

int main(void) {}
