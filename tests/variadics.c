#include <metalang99/assert.h>
#include <metalang99/nat.h>
#include <metalang99/tuple.h>
#include <metalang99/variadics.h>

// ML99_variadicsGet {
ML99_ASSERT_EMPTY(ML99_variadicsGet(0)(v()));

ML99_ASSERT_EQ(ML99_variadicsGet(0)(v(19)), v(19));
ML99_ASSERT_EQ(ML99_variadicsGet(0)(v(19, 8)), v(19));
ML99_ASSERT_EQ(ML99_variadicsGet(0)(v(19, 8, 7378)), v(19));

ML99_ASSERT_EQ(ML99_variadicsGet(1)(v(19, 8)), v(8));
ML99_ASSERT_EQ(ML99_variadicsGet(1)(v(19, 8, 7378)), v(8));

ML99_ASSERT_EQ(ML99_variadicsGet(2)(v(19, 8, 7378)), v(7378));
ML99_ASSERT_EQ(ML99_variadicsGet(2)(v(19, 8, 7378, 10)), v(7378));

ML99_ASSERT_EQ(ML99_variadicsGet(3)(v(19, 8, 7378, 10)), v(10));
ML99_ASSERT_EQ(ML99_variadicsGet(3)(v(19, 8, 7378, 10, 121)), v(10));

ML99_ASSERT_EQ(ML99_variadicsGet(4)(v(19, 8, 7378, 10, 121)), v(121));
ML99_ASSERT_EQ(ML99_variadicsGet(4)(v(19, 8, 7378, 10, 121, 1)), v(121));

ML99_ASSERT_EQ(ML99_variadicsGet(5)(v(19, 8, 7378, 10, 121, 1)), v(1));
ML99_ASSERT_EQ(ML99_variadicsGet(5)(v(19, 8, 7378, 10, 121, 1, 80)), v(1));

ML99_ASSERT_EQ(ML99_variadicsGet(6)(v(19, 8, 7378, 10, 121, 1, 80)), v(80));
ML99_ASSERT_EQ(ML99_variadicsGet(6)(v(19, 8, 7378, 10, 121, 1, 80, 23)), v(80));

ML99_ASSERT_EQ(ML99_variadicsGet(7)(v(19, 8, 7378, 10, 121, 1, 80, 23)), v(23));
ML99_ASSERT_EQ(ML99_variadicsGet(7)(v(19, 8, 7378, 10, 121, 1, 80, 23, 7)), v(23));
// }

// ML99_variadicsTail {
#define CHECK_TAIL(...)            CHECK_TAIL_AUX(__VA_ARGS__)
#define CHECK_TAIL_AUX(a, b, c, d) ML99_ASSERT_UNEVAL(a == 51 && b == 21 && c == 1 && d == 7378)

CHECK_TAIL(ML99_eval(ML99_variadicsTail(v(9191, 51, 21, 1, 7378))));

#undef CHECK_TAIL
#undef CHECK_TAIL_AUX
// }

// ML99_variadicsCount, ML99_VARIADICS_COUNT {
#define _5_ARGS  v(~, ~, ~, ~, ~)
#define _10_ARGS _5_ARGS, _5_ARGS
#define _50_ARGS _10_ARGS, _10_ARGS, _10_ARGS, _10_ARGS, _10_ARGS

ML99_ASSERT_EQ(ML99_variadicsCount(v()), v(1));
ML99_ASSERT_EQ(ML99_variadicsCount(v(~)), v(1));
ML99_ASSERT_EQ(ML99_variadicsCount(v(~, ~)), v(2));
ML99_ASSERT_EQ(ML99_variadicsCount(v(~, ~, ~)), v(3));
ML99_ASSERT_EQ(ML99_variadicsCount(v(~, ~, ~, ~)), v(4));
ML99_ASSERT_EQ(ML99_variadicsCount(_5_ARGS), v(5));
ML99_ASSERT_EQ(ML99_variadicsCount(_5_ARGS, v(~)), v(6));
ML99_ASSERT_EQ(ML99_variadicsCount(_5_ARGS, v(~, ~)), v(7));
ML99_ASSERT_EQ(ML99_variadicsCount(_5_ARGS, v(~, ~, ~)), v(8));
ML99_ASSERT_EQ(ML99_variadicsCount(_5_ARGS, v(~, ~, ~, ~)), v(9));
ML99_ASSERT_EQ(ML99_variadicsCount(_10_ARGS), v(10));
ML99_ASSERT_EQ(ML99_variadicsCount(_10_ARGS, v(~)), v(11));
ML99_ASSERT_EQ(ML99_variadicsCount(_50_ARGS, _10_ARGS, v(~, ~, ~)), v(63));

ML99_ASSERT_EQ(v(ML99_VARIADICS_COUNT()), v(1));
ML99_ASSERT_EQ(v(ML99_VARIADICS_COUNT(~)), v(1));
ML99_ASSERT_EQ(v(ML99_VARIADICS_COUNT(~, ~)), v(2));
ML99_ASSERT_EQ(v(ML99_VARIADICS_COUNT(~, ~, ~)), v(3));

#undef _5_ARGS
#undef _10_ARGS
#undef _50_ARGS
#undef _100_ARGS
// }

// ML99_variadicsForEach {
#define CHECK(_, x, y, z) ML99_ASSERT_UNEVAL(x == 2 && y == 3 && z == 4)
#define F_IMPL(x)         v(, ML99_INC(x))
#define F_ARITY           1

ML99_eval(v(CHECK), ML99_tuple(ML99_variadicsForEach(v(F), v(1, 2, 3))));

#undef CHECK
#undef F_IMPL
#undef F_ARITY
// }

// ML99_variadicsForEachI {
#define CHECK(_, x, y, z) ML99_ASSERT_UNEVAL(x == 1 + 0 && y == 2 + 1 && z == 3 + 2)
#define F_IMPL(x, i)      v(, ), ML99_add(v(x), v(i))
#define F_ARITY           2

ML99_eval(v(CHECK), ML99_tuple(ML99_variadicsForEachI(v(F), v(1, 2, 3))));

#undef CHECK
#undef F_IMPL
#undef F_ARITY
// }

int main(void) {}
