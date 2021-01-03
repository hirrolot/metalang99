#include <epilepsy/assert.h>
#include <epilepsy/eval.h>
#include <epilepsy/lang.h>
#include <epilepsy/maybe.h>
#include <epilepsy/uint.h>

#define VAL v(abc ? +-148 % "hello world")

#define MATCH(maybe) EPILEPSY_MATCH_WITH_ARGS(v(maybe), v(MATCH_), v(123))
#define MATCH_MaybeJust(_87, _123)                                                                 \
    v(EPILEPSY_ASSERT_PLAIN(_87 == 87); EPILEPSY_ASSERT_PLAIN(_123 == 123);)
#define MATCH_MaybeNothing(_123) v(EPILEPSY_ASSERT_PLAIN(_123 == 123);)

EPILEPSY_EVAL(EPILEPSY_CALL(MATCH, EPILEPSY_MaybeJust(v(87))))
EPILEPSY_EVAL(EPILEPSY_CALL(MATCH, EPILEPSY_MaybeNothing()))

#undef MATCH
#undef MATCH_JUST
#undef MATCH_NOTHING

EPILEPSY_ASSERT(EPILEPSY_MaybeIsJust(EPILEPSY_MaybeJust(VAL)));
EPILEPSY_ASSERT_EQ(EPILEPSY_MaybeIsJust(EPILEPSY_MaybeNothing()), v(0));

EPILEPSY_ASSERT_EQ(EPILEPSY_MaybeIsNothing(EPILEPSY_MaybeJust(VAL)), v(0));
EPILEPSY_ASSERT(EPILEPSY_MaybeIsNothing(EPILEPSY_MaybeNothing()));

#undef VAL
