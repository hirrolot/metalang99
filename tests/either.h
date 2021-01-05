#include <epilepsy/assert.h>
#include <epilepsy/either.h>
#include <epilepsy/uint.h>

#define VAL v(abc ? +-148 % "hello world")

#define MATCH_IMPL(either) EPILEPSY_MATCH_WITH_ARGS(v(either), v(MATCH_), v(123))
#define MATCH_EitherLeft_IMPL(_18, _123)                                                           \
    v(EPILEPSY_ASSERT_PLAIN(_18 == 18); EPILEPSY_ASSERT_PLAIN(_123 == 123);)
#define MATCH_EitherRight_IMPL(_4, _123)                                                           \
    v(EPILEPSY_ASSERT_PLAIN(_4 == 4); EPILEPSY_ASSERT_PLAIN(_123 == 123);)

EPILEPSY_EVAL(EPILEPSY_CALL(MATCH, EPILEPSY_EitherLeft(v(18))))
EPILEPSY_EVAL(EPILEPSY_CALL(MATCH, EPILEPSY_EitherRight(v(4))))

#undef MATCH_IMPL
#undef MATCH_LEFT_IMPL
#undef MATCH_RIGHT_IMPL

EPILEPSY_ASSERT(EPILEPSY_EitherIsLeft(EPILEPSY_EitherLeft(VAL)));
EPILEPSY_ASSERT_EQ(EPILEPSY_EitherIsLeft(EPILEPSY_EitherRight(VAL)), v(0));

EPILEPSY_ASSERT_EQ(EPILEPSY_EitherIsRight(EPILEPSY_EitherLeft(VAL)), v(0));
EPILEPSY_ASSERT(EPILEPSY_EitherIsRight(EPILEPSY_EitherRight(VAL)));

#undef VAL
