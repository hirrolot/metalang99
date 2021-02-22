#include <metalang99/assert.h>
#include <metalang99/uint.h>
#include <metalang99/variadics.h>

// M_variadicsHead {
M_assertEmpty(M_variadicsHead(v()));
M_assertEq(M_variadicsHead(v(19)), v(19));
M_assertEq(M_variadicsHead(v(19, 8)), v(19));
M_assertEq(M_variadicsHead(v(19, 8, 7378)), v(19));
// }

// M_parenthesizedVariadicsHead {
M_assertEmpty(M_parenthesizedVariadicsHead(v(())));
M_assertEq(M_parenthesizedVariadicsHead(v((19))), v(19));
M_assertEq(M_parenthesizedVariadicsHead(v((19, 8))), v(19));
M_assertEq(M_parenthesizedVariadicsHead(v((19, 8, 7378))), v(19));
// }

// M_variadicsTail, M_parenthesizedVariadicsTail {
#define CHECK_TAIL(...) CHECK_TAIL_AUX(__VA_ARGS__)
#define CHECK_TAIL_AUX(a, b, c, d)                                                                 \
    M_assertPlain(a == 51);                                                                        \
    M_assertPlain(b == 21);                                                                        \
    M_assertPlain(c == 1);                                                                         \
    M_assertPlain(d == 7378)

CHECK_TAIL(M_eval(M_variadicsTail(v(9191, 51, 21, 1, 7378))));
CHECK_TAIL(M_eval(M_parenthesizedVariadicsTail(v((9191, 51, 21, 1, 7378)))));
// }

#undef CHECK_TAIL
#undef CHECK_TAIL_AUX

// M_variadicsCount, M_variadicsCountPlain {
#define _5_ARGS  v(~, ~, ~, ~, ~)
#define _10_ARGS _5_ARGS, _5_ARGS
#define _50_ARGS _10_ARGS, _10_ARGS, _10_ARGS, _10_ARGS, _10_ARGS

M_assertEq(M_variadicsCount(v()), v(1));
M_assertEq(M_variadicsCount(v(~)), v(1));
M_assertEq(M_variadicsCount(v(~, ~)), v(2));
M_assertEq(M_variadicsCount(v(~, ~, ~)), v(3));
M_assertEq(M_variadicsCount(v(~, ~, ~, ~)), v(4));
M_assertEq(M_variadicsCount(_5_ARGS), v(5));
M_assertEq(M_variadicsCount(_5_ARGS, v(~)), v(6));
M_assertEq(M_variadicsCount(_5_ARGS, v(~, ~)), v(7));
M_assertEq(M_variadicsCount(_5_ARGS, v(~, ~, ~)), v(8));
M_assertEq(M_variadicsCount(_5_ARGS, v(~, ~, ~, ~)), v(9));
M_assertEq(M_variadicsCount(_10_ARGS), v(10));
M_assertEq(M_variadicsCount(_10_ARGS, v(~)), v(11));
M_assertEq(M_variadicsCount(_50_ARGS, _10_ARGS, v(~, ~, ~)), v(63));

M_assertEq(v(M_variadicsCountPlain()), v(1));
M_assertEq(v(M_variadicsCountPlain(~)), v(1));
M_assertEq(v(M_variadicsCountPlain(~, ~)), v(2));
M_assertEq(v(M_variadicsCountPlain(~, ~, ~)), v(3));

#undef _5_ARGS
#undef _10_ARGS
#undef _50_ARGS
#undef _100_ARGS
// }

int main(void) {}
