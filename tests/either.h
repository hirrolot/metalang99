#include <epilepsy/assert.h>
#include <epilepsy/either.h>
#include <epilepsy/uint.h>

#define VAL v(abc ? +-148 % "hello world")

#define MATCH_IMPL(either)               epMatchWithArgs(v(either), v(MATCH_), v(123))
#define MATCH_EitherLeft_IMPL(_18, _123) v(epAssertPlain(_18 == 18); epAssertPlain(_123 == 123);)
#define MATCH_EitherRight_IMPL(_4, _123) v(epAssertPlain(_4 == 4); epAssertPlain(_123 == 123);)

epEval(epCall(MATCH, epEitherLeft(v(18)))) epEval(epCall(MATCH, epEitherRight(v(4))))

#undef MATCH_IMPL
#undef MATCH_LEFT_IMPL
#undef MATCH_RIGHT_IMPL

    epAssert(epEitherIsLeft(epEitherLeft(VAL)));
epAssertEq(epEitherIsLeft(epEitherRight(VAL)), v(0));

epAssertEq(epEitherIsRight(epEitherLeft(VAL)), v(0));
epAssert(epEitherIsRight(epEitherRight(VAL)));

#undef VAL
