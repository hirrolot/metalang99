#include <metalang99/assert.h>
#include <metalang99/maybe.h>
#include <metalang99/uint.h>

// Pattern matching {
#define MATCH_IMPL(maybe)    M_match(v(maybe), v(MATCH_))
#define MATCH_just_IMPL(x)   v(M_assertPlain(x == 87))
#define MATCH_nothing_IMPL() v(M_semicolon())

M_eval(M_call(MATCH, M_just(v(87))));
M_eval(M_call(MATCH, M_nothing()));

#undef MATCH_IMPL
#undef MATCH_just_IMPL
#undef MATCH_nothing_IMPL
// }

#define VAL v(abc ? +-148 % "hello world")

// M_isJust {
M_assert(M_isJust(M_just(VAL)));
M_assert(M_not(M_isJust(M_nothing())));
// }

// M_isNothing {
M_assert(M_isNothing(M_nothing()));
M_assert(M_not(M_isNothing(M_just(VAL))));
// }

// M_maybeEq {
M_assert(M_maybeEq(v(M_uintEq), M_just(v(123)), M_just(v(123))));

M_assert(M_not(M_maybeEq(v(M_uintEq), M_just(v(123)), M_just(v(4)))));
M_assert(M_not(M_maybeEq(v(M_uintEq), M_just(v(123)), M_nothing())));
M_assert(M_not(M_maybeEq(v(M_uintEq), M_nothing(), M_just(v(123)))));
// }

// M_maybeUnwrap {
M_assertEq(M_maybeUnwrap(M_just(v(123))), v(123));
// }

#undef VAL

int main(void) {}
