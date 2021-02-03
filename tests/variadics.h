#include <epilepsy/assert.h>
#include <epilepsy/uint.h>
#include <epilepsy/variadics.h>

// E_variadicsHead {
E_assertEq(E_variadicsHead(v(19, 8)), v(19));
E_assertEq(E_variadicsHead(v(19, 8, 7378)), v(19));
// }

// E_variadicsTail {
#define CHECK_TAIL(...) CHECK_TAIL_AUX(__VA_ARGS__)
#define CHECK_TAIL_AUX(a, b, c, d)                                                                 \
    E_assertPlain(a == 51);                                                                        \
    E_assertPlain(b == 21);                                                                        \
    E_assertPlain(c == 1);                                                                         \
    E_assertPlain(d == 7378)

CHECK_TAIL(E_eval(E_variadicsTail(v(9191, 51, 21, 1, 7378))));

#undef CHECK_TAIL
#undef CHECK_TAIL_AUX
// }

// E_variadicsCount, E_variadicsCountPlain {
#define _5_ARGS   v(~) v(~) v(~) v(~) v(~)
#define _10_ARGS  _5_ARGS _5_ARGS
#define _50_ARGS  _10_ARGS _10_ARGS _10_ARGS _10_ARGS _10_ARGS
#define _100_ARGS _50_ARGS _50_ARGS

E_assertEq(E_variadicsCount(), v(1));
E_assertEq(E_variadicsCount(v(~)), v(1));
E_assertEq(E_variadicsCount(v(~) v(~)), v(2));
E_assertEq(E_variadicsCount(v(~) v(~) v(~)), v(3));
E_assertEq(E_variadicsCount(v(~) v(~) v(~) v(~)), v(4));
E_assertEq(E_variadicsCount(_5_ARGS), v(5));
E_assertEq(E_variadicsCount(_5_ARGS v(~)), v(6));
E_assertEq(E_variadicsCount(_5_ARGS v(~) v(~)), v(7));
E_assertEq(E_variadicsCount(_5_ARGS v(~) v(~) v(~)), v(8));
E_assertEq(E_variadicsCount(_5_ARGS v(~) v(~) v(~) v(~)), v(9));
E_assertEq(E_variadicsCount(_10_ARGS), v(10));
E_assertEq(E_variadicsCount(_10_ARGS v(~)), v(11));
E_assertEq(E_variadicsCount(_50_ARGS _10_ARGS _5_ARGS v(~)), v(66));
E_assertEq(E_variadicsCount(_100_ARGS _50_ARGS v(~) v(~)), v(152));
E_assertEq(E_variadicsCount(_100_ARGS _100_ARGS _50_ARGS _5_ARGS v(~)), v(256));

E_assertEq(v(E_variadicsCountPlain()), v(1));
E_assertEq(v(E_variadicsCountPlain(~)), v(1));
E_assertEq(v(E_variadicsCountPlain(~, ~)), v(2));
E_assertEq(v(E_variadicsCountPlain(~, ~, ~)), v(3));

#undef _5_ARGS
#undef _10_ARGS
#undef _50_ARGS
#undef _100_ARGS
// }

// E_variadicsMap {
#define CHECK(_, x, y, z) E_assertPlain(x == 2 && y == 3 && z == 4)
#define F_IMPL(x)         v(, EPILEPSY_uintIncPlain(x))
#define F_ARITY           1

E_eval(v(CHECK) E_parenthesise(E_variadicsMap(v(F), v(1, 2, 3))));

#undef CHECK
#undef F_IMPL
#undef F_ARITY
// }

// E_variadicsMapCommaSep {
#define CHECK(x, y, z) E_assertPlain(x == 2 && y == 3 && z == 4)

E_eval(v(CHECK) E_parenthesise(E_variadicsMapCommaSep(E_appl(v(E_uintAdd), v(1)), v(1, 2, 3))));

#undef CHECK
// }

// E_variadicsMapI {
#define CHECK(_, x, y, z) E_assertPlain(x == 1 + 0 && y == 2 + 1 && z == 3 + 2)
#define F_IMPL(i, x)      v(, ) EPILEPSY_uintAdd(v(x), v(i))
#define F_ARITY           2

E_eval(v(CHECK) E_parenthesise(E_variadicsMapI(v(F), v(1, 2, 3))));

#undef CHECK
#undef F_IMPL
#undef F_ARITY
// }

// E_variadicsMapI {
#define CHECK(x, y, z) E_assertPlain(x == 1 + 0 && y == 2 + 1 && z == 3 + 2)
#define F_IMPL(i, x)   EPILEPSY_uintAdd(v(x), v(i))
#define F_ARITY        2

E_eval(v(CHECK) E_parenthesise(E_variadicsMapICommaSep(v(F), v(1, 2, 3))));

#undef CHECK
#undef F_IMPL
#undef F_ARITY
// }
