#include <epilepsy/assert.h>
#include <epilepsy/either.h>
#include <epilepsy/uint.h>

#define VAL v(abc ? +-148 % "hello world")

#define MATCH_IMPL(either) EPILEPSY_matchWithArgs(v(either), v(MATCH_), v(123))
#define MATCH_eitherLeft_IMPL(_18, _123)                                                           \
    v(EPILEPSY_assertPlain(_18 == 18); EPILEPSY_assertPlain(_123 == 123);)
#define MATCH_eitherRight_IMPL(_4, _123)                                                           \
    v(EPILEPSY_assertPlain(_4 == 4); EPILEPSY_assertPlain(_123 == 123);)

EPILEPSY_eval(EPILEPSY_call(MATCH, EPILEPSY_eitherLeft(v(18))))
    EPILEPSY_eval(EPILEPSY_call(MATCH, EPILEPSY_eitherRight(v(4))))

#undef MATCH_IMPL
#undef MATCH_LEFT_IMPL
#undef MATCH_RIGHT_IMPL

        EPILEPSY_assert(EPILEPSY_eitherIsLeft(EPILEPSY_eitherLeft(VAL)));
EPILEPSY_assertEq(EPILEPSY_eitherIsLeft(EPILEPSY_eitherRight(VAL)), v(0));

EPILEPSY_assertEq(EPILEPSY_eitherIsRight(EPILEPSY_eitherLeft(VAL)), v(0));
EPILEPSY_assert(EPILEPSY_eitherIsRight(EPILEPSY_eitherRight(VAL)));

#undef VAL
