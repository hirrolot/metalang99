#include <epilepsy/assert.h>
#include <epilepsy/maybe.h>
#include <epilepsy/uint.h>

#define VAL v(abc ? +-148 % "hello world")

#define MATCH_IMPL(maybe)               E_matchWithArgs(v(maybe), v(MATCH_), v(123))
#define MATCH_maybeJust_IMPL(_87, _123) v(E_assertPlain(_87 == 87); E_assertPlain(_123 == 123);)
#define MATCH_maybeNothing_IMPL(_123)   v(E_assertPlain(_123 == 123);)

E_eval(E_call(MATCH, E_maybeJust(v(87)))) E_eval(E_call(MATCH, E_maybeNothing()))

#undef MATCH_IMPL
#undef MATCH_JUST_IMPL
#undef MATCH_NOTHING_IMPL

    E_assert(E_maybeIsJust(E_maybeJust(VAL)));
E_assertEq(E_maybeIsJust(E_maybeNothing()), v(0));

E_assertEq(E_maybeIsNothing(E_maybeJust(VAL)), v(0));
E_assert(E_maybeIsNothing(E_maybeNothing()));

#undef VAL
