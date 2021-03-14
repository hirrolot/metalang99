#include <metalang99/assert.h>
#include <metalang99/maybe.h>
#include <metalang99/nat.h>

// Pattern matching {
#define MATCH_IMPL(maybe)     ML99_match(v(maybe), v(MATCH_))
#define MATCH_just_IMPL(x)    v(ML99_assertPlain(x == 87))
#define MATCH_nothing_IMPL(_) v(ML99_assertPlain(1))

ML99_eval(ML99_call(MATCH, ML99_just(v(87))));
ML99_eval(ML99_call(MATCH, ML99_nothing()));

#undef MATCH_IMPL
#undef MATCH_just_IMPL
#undef MATCH_nothing_IMPL
// }

#define VAL v(abc ? +-148 % "hello world")

// ML99_isJust {
ML99_assert(ML99_isJust(ML99_just(VAL)));
ML99_assert(ML99_not(ML99_isJust(ML99_nothing())));
// }

// ML99_isNothing {
ML99_assert(ML99_isNothing(ML99_nothing()));
ML99_assert(ML99_not(ML99_isNothing(ML99_just(VAL))));
// }

// ML99_maybeEq {
ML99_assert(ML99_maybeEq(v(ML99_natEq), ML99_just(v(123)), ML99_just(v(123))));

ML99_assert(ML99_not(ML99_maybeEq(v(ML99_natEq), ML99_just(v(123)), ML99_just(v(4)))));
ML99_assert(ML99_not(ML99_maybeEq(v(ML99_natEq), ML99_just(v(123)), ML99_nothing())));
ML99_assert(ML99_not(ML99_maybeEq(v(ML99_natEq), ML99_nothing(), ML99_just(v(123)))));
// }

// ML99_maybeUnwrap {
ML99_assertEq(ML99_maybeUnwrap(ML99_just(v(123))), v(123));
// }

#undef VAL

int main(void) {}
