#include <metalang99/assert.h>
#include <metalang99/either.h>
#include <metalang99/uint.h>

// Pattern matching {
#define MATCH_IMPL(either)  M_match(v(either), v(MATCH_))
#define MATCH_left_IMPL(x)  v(M_assertPlain(x == 18))
#define MATCH_right_IMPL(x) v(M_assertPlain(x == 4))

M_eval(M_call(MATCH, M_left(v(18))));
M_eval(M_call(MATCH, M_right(v(4))));

#undef MATCH_IMPL
#undef MATCH_left_IMPL
#undef MATCH_right_IMPL
// }

#define VAL v(abc ? +-148 % "hello world")

// M_isLeft {
M_assert(M_isLeft(M_left(VAL)));
M_assert(M_not(M_isLeft(M_right(VAL))));
// }

// M_isRight {
M_assert(M_isRight(M_right(VAL)));
M_assert(M_not(M_isRight(M_left(VAL))));
// }

// M_eitherEq {
M_assert(M_eitherEq(v(M_uintEq), M_left(v(123)), M_left(v(123))));
M_assert(M_not(M_eitherEq(v(M_uintEq), M_left(v(18)), M_left(v(123)))));

M_assert(M_eitherEq(v(M_uintEq), M_right(v(123)), M_right(v(123))));
M_assert(M_not(M_eitherEq(v(M_uintEq), M_right(v(18)), M_right(v(123)))));

M_assert(M_not(M_eitherEq(v(M_uintEq), M_left(v(123)), M_right(v(123)))));
M_assert(M_not(M_eitherEq(v(M_uintEq), M_left(v(123)), M_right(v(4)))));
M_assert(M_not(M_eitherEq(v(M_uintEq), M_right(v(123)), M_left(v(123)))));
M_assert(M_not(M_eitherEq(v(M_uintEq), M_right(v(123)), M_left(v(4)))));
// }

// M_unwrapLeft {
M_assertEq(M_unwrapLeft(M_left(v(123))), v(123));
// }

// M_unwrapRight {
M_assertEq(M_unwrapRight(M_right(v(123))), v(123));
// }

#undef VAL

int main(void) {}
