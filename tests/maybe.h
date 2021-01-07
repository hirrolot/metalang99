#include <epilepsy/assert.h>
#include <epilepsy/maybe.h>
#include <epilepsy/uint.h>

#define VAL v(abc ? +-148 % "hello world")

#define MATCH_IMPL(maybe) EPILEPSY_matchWithArgs(v(maybe), v(MATCH_), v(123))
#define MATCH_maybeJust_IMPL(_87, _123)                                                            \
    v(EPILEPSY_assertPlain(_87 == 87); EPILEPSY_assertPlain(_123 == 123);)
#define MATCH_maybeNothing_IMPL(_123) v(EPILEPSY_assertPlain(_123 == 123);)

EPILEPSY_eval(EPILEPSY_call(MATCH, EPILEPSY_maybeJust(v(87))))
    EPILEPSY_eval(EPILEPSY_call(MATCH, EPILEPSY_maybeNothing()))

#undef MATCH_IMPL
#undef MATCH_JUST_IMPL
#undef MATCH_NOTHING_IMPL

        EPILEPSY_assert(EPILEPSY_maybeIsJust(EPILEPSY_maybeJust(VAL)));
EPILEPSY_assertEq(EPILEPSY_maybeIsJust(EPILEPSY_maybeNothing()), v(0));

EPILEPSY_assertEq(EPILEPSY_maybeIsNothing(EPILEPSY_maybeJust(VAL)), v(0));
EPILEPSY_assert(EPILEPSY_maybeIsNothing(EPILEPSY_maybeNothing()));

#undef VAL
