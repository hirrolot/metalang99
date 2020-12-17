#include <epilepsy/assert.h>
#include <epilepsy/aux.h>
#include <epilepsy/eval.h>
#include <epilepsy/lang.h>
#include <epilepsy/maybe.h>

#define VAL v(abc ? +-148 % "hello world")

#define MATCH(maybe) EPILEPSY_CHOICE_MATCH(v(maybe), v(MATCH_), v(123))
#define MATCH_JUST(_87, _123)                                                                      \
    v(EPILEPSY_C_STATIC_ASSERT(_87 == 87); EPILEPSY_C_STATIC_ASSERT(_123 == 123);)
#define MATCH_NOTHING(_dummy, _123) v(EPILEPSY_C_STATIC_ASSERT(_123 == 123);)

EPILEPSY_EVAL(call(MATCH, EPILEPSY_MAYBE_JUST(v(87))))
EPILEPSY_EVAL(call(MATCH, EPILEPSY_MAYBE_NOTHING()))

#undef MATCH
#undef MATCH_JUST
#undef MATCH_NOTHING

EPILEPSY_ASSERT(EPILEPSY_MAYBE_IS_JUST(EPILEPSY_MAYBE_JUST(VAL)));
EPILEPSY_ASSERT_EQ(EPILEPSY_MAYBE_IS_JUST(EPILEPSY_MAYBE_NOTHING()), v(0));

EPILEPSY_ASSERT_EQ(EPILEPSY_MAYBE_IS_NOTHING(EPILEPSY_MAYBE_JUST(VAL)), v(0));
EPILEPSY_ASSERT(EPILEPSY_MAYBE_IS_NOTHING(EPILEPSY_MAYBE_NOTHING()));

#undef VAL
