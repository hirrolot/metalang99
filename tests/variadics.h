#include <epilepsy/assert.h>
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

// E_variadicsMatch {
#define FOO_IMPL(head, ...) v(E_assertPlain(head == 1);) E_variadicsMatch(v(BAR), v(__VA_ARGS__))
#define BAR_IMPL(head, x)   v(E_assertPlain(head == 2 && x == 3))

#define FOO_ARITY 2
#define BAR_ARITY 2

E_eval(E_variadicsMatch(v(FOO), v(1, 2, 3)));

#undef FOO_IMPL
#undef BAR_IMPL

#undef FOO_ARITY
#undef BAR_ARITY
// }

// E_variadicsCount {
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

#undef _5_ARGS
#undef _10_ARGS
#undef _50_ARGS
#undef _100_ARGS
// }
