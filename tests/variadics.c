#include <metalang99/assert.h>
#include <metalang99/uint.h>
#include <metalang99/variadics.h>

// M_variadicsHead {
M_assertEmpty(M_variadicsHead(v()));
M_assertEq(M_variadicsHead(v(19)), v(19));
M_assertEq(M_variadicsHead(v(19, 8)), v(19));
M_assertEq(M_variadicsHead(v(19, 8, 7378)), v(19));
// }

// M_variadicsTail {
#define CHECK_TAIL(...) CHECK_TAIL_AUX(__VA_ARGS__)
#define CHECK_TAIL_AUX(a, b, c, d)                                                                 \
    M_assertPlain(a == 51);                                                                        \
    M_assertPlain(b == 21);                                                                        \
    M_assertPlain(c == 1);                                                                         \
    M_assertPlain(d == 7378)

CHECK_TAIL(M_eval(M_variadicsTail(v(9191, 51, 21, 1, 7378))));

#undef CHECK_TAIL
#undef CHECK_TAIL_AUX
// }

// M_variadicsCount, M_variadicsCountPlain {
#define _5_ARGS   v(~, ~, ~, ~, ~)
#define _10_ARGS  _5_ARGS _5_ARGS
#define _50_ARGS  _10_ARGS _10_ARGS _10_ARGS _10_ARGS _10_ARGS
#define _100_ARGS _50_ARGS _50_ARGS

M_assertEq(M_variadicsCount(), v(1));
M_assertEq(M_variadicsCount(v(~)), v(1));
M_assertEq(M_variadicsCount(v(~, ~)), v(2));
M_assertEq(M_variadicsCount(v(~, ~, ~)), v(3));
M_assertEq(M_variadicsCount(v(~, ~, ~, ~)), v(4));
M_assertEq(M_variadicsCount(_5_ARGS), v(5));
M_assertEq(M_variadicsCount(_5_ARGS v(~)), v(6));
M_assertEq(M_variadicsCount(_5_ARGS v(~, ~)), v(7));
M_assertEq(M_variadicsCount(_5_ARGS v(~, ~, ~)), v(8));
M_assertEq(M_variadicsCount(_5_ARGS v(~, ~, ~, ~)), v(9));
M_assertEq(M_variadicsCount(_10_ARGS), v(10));
M_assertEq(M_variadicsCount(_10_ARGS v(~)), v(11));
M_assertEq(M_variadicsCount(_50_ARGS _10_ARGS _5_ARGS v(~)), v(66));
M_assertEq(M_variadicsCount(_100_ARGS _50_ARGS v(~, ~)), v(152));
M_assertEq(M_variadicsCount(_100_ARGS _100_ARGS _50_ARGS _5_ARGS v(~)), v(256));

M_assertEq(v(M_variadicsCountPlain()), v(1));
M_assertEq(v(M_variadicsCountPlain(~)), v(1));
M_assertEq(v(M_variadicsCountPlain(~, ~)), v(2));
M_assertEq(v(M_variadicsCountPlain(~, ~, ~)), v(3));

#undef _5_ARGS
#undef _10_ARGS
#undef _50_ARGS
#undef _100_ARGS
// }

// M_variadicsMap {
#define CHECK(_, x, y, z) M_assertPlain(x == 2 && y == 3 && z == 4)
#define F_IMPL(x)         v(, METALANG99_uintIncPlain(x))
#define F_ARITY           1

M_eval(v(CHECK) M_parenthesise(M_variadicsMap(v(F), v(1, 2, 3))));

#undef CHECK
#undef F_IMPL
#undef F_ARITY
// }

// M_variadicsMapCommaSep {
#define CHECK(x, y, z) M_assertPlain(x == 2 && y == 3 && z == 4)

M_eval(v(CHECK) M_parenthesise(M_variadicsMapCommaSep(M_appl(v(M_uintAdd), v(1)), v(1, 2, 3))));

#undef CHECK
// }

// M_variadicsMapI {
#define CHECK(_, x, y, z) M_assertPlain(x == 1 + 0 && y == 2 + 1 && z == 3 + 2)
#define F_IMPL(x, i)      v(, ) M_uintAdd(v(x), v(i))
#define F_ARITY           2

M_eval(v(CHECK) M_parenthesise(M_variadicsMapI(v(F), v(1, 2, 3))));

#undef CHECK
#undef F_IMPL
#undef F_ARITY
// }

// M_variadicsMapICommaSep {
#define CHECK(x, y, z) M_assertPlain(x == 1 + 0 && y == 2 + 1 && z == 3 + 2)
#define F_IMPL(x, i)   M_uintAdd(v(x), v(i))
#define F_ARITY        2

M_eval(v(CHECK) M_parenthesise(M_variadicsMapICommaSep(v(F), v(1, 2, 3))));

#undef CHECK
#undef F_IMPL
#undef F_ARITY
// }

int main(void) {}
