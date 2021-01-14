#include <epilepsy/assert.h>
#include <epilepsy/maybe.h>

// Pattern matching {
#define MATCH_IMPL(maybe)    E_match(v(maybe), v(MATCH_))
#define MATCH_just_IMPL(x)   v(E_assertPlain(_87 == 87))
#define MATCH_nothing_IMPL() v(E_assertPlain(1))

E_eval(E_call(MATCH, E_just(v(87))));
E_eval(E_call(MATCH, E_nothing()));

#undef MATCH_IMPL
#undef MATCH_just_IMPL
#undef MATCH_nothing_IMPL
// }

#define VAL v(abc ? +-148 % "hello world")

// E_isJust {
E_assert(E_isJust(E_just(VAL)));
E_assertEq(E_not(E_isJust(E_nothing())));
// }

// E_isNothing {
E_assert(E_isNothing(E_nothing()));
E_assert(E_not(E_isNothing(E_just(VAL))));
// }

#undef VAL
