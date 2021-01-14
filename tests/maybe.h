#include <epilepsy/assert.h>
#include <epilepsy/maybe.h>
#include <epilepsy/uint.h>

// Pattern matching {
#define MATCH_IMPL(maybe)          E_matchWithArgs(v(maybe), v(MATCH_), v(123))
#define MATCH_just_IMPL(_87, _123) v(E_assertPlain(_87 == 87); E_assertPlain(_123 == 123))
#define MATCH_nothing_IMPL(_123)   v(E_assertPlain(_123 == 123))

E_eval(E_call(MATCH, E_just(v(87))));
E_eval(E_call(MATCH, E_nothing()));

#undef MATCH_IMPL
#undef MATCH_JUST_IMPL
#undef MATCH_NOTHING_IMPL
// }

#define VAL v(abc ? +-148 % "hello world")

// E_isJust {
E_assert(E_isJust(E_just(VAL)));
E_assertEq(E_isJust(E_nothing()), v(0));
// }

// E_isNothing {
E_assertEq(E_isNothing(E_just(VAL)), v(0));
E_assert(E_isNothing(E_nothing()));
// }

#undef VAL
