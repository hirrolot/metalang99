#include <epilepsy/assert.h>
#include <epilepsy/maybe.h>
#include <epilepsy/uint.h>

#define VAL v(abc ? +-148 % "hello world")

#define MATCH_IMPL(maybe)               epMatchWithArgs(v(maybe), v(MATCH_), v(123))
#define MATCH_MaybeJust_IMPL(_87, _123) v(epAssertPlain(_87 == 87); epAssertPlain(_123 == 123);)
#define MATCH_MaybeNothing_IMPL(_123)   v(epAssertPlain(_123 == 123);)

epEval(epCall(MATCH, epMaybeJust(v(87)))) epEval(epCall(MATCH, epMaybeNothing()))

#undef MATCH_IMPL
#undef MATCH_JUST_IMPL
#undef MATCH_NOTHING_IMPL

    epAssert(epMaybeIsJust(epMaybeJust(VAL)));
epAssertEq(epMaybeIsJust(epMaybeNothing()), v(0));

epAssertEq(epMaybeIsNothing(epMaybeJust(VAL)), v(0));
epAssert(epMaybeIsNothing(epMaybeNothing()));

#undef VAL
