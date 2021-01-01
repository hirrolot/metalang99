#include <epilepsy/assert.h>
#include <epilepsy/either.h>
#include <epilepsy/eval.h>
#include <epilepsy/lang.h>
#include <epilepsy/uint.h>

#define VAL v(abc ? +-148 % "hello world")

#define MATCH(either) EPILEPSY_MATCH_WITH_ARGS(v(either), v(MATCH_), v(123))
#define MATCH_EitherLeft(_18, _123)                                                                \
    v(EPILEPSY_STATIC_ASSERT_PLAIN(_18 == 18); EPILEPSY_STATIC_ASSERT_PLAIN(_123 == 123);)
#define MATCH_EitherRight(_4, _123)                                                                \
    v(EPILEPSY_STATIC_ASSERT_PLAIN(_4 == 4); EPILEPSY_STATIC_ASSERT_PLAIN(_123 == 123);)

EPILEPSY_EVAL(EPILEPSY_CALL(MATCH, EPILEPSY_EitherLeft(v(18))))
EPILEPSY_EVAL(EPILEPSY_CALL(MATCH, EPILEPSY_EitherRight(v(4))))

#undef MATCH
#undef MATCH_LEFT
#undef MATCH_RIGHT

EPILEPSY_ASSERT(EPILEPSY_EitherIsLeft(EPILEPSY_EitherLeft(VAL)));
EPILEPSY_ASSERT_EQ(EPILEPSY_EitherIsLeft(EPILEPSY_EitherRight(VAL)), v(0));

EPILEPSY_ASSERT_EQ(EPILEPSY_EitherIsRight(EPILEPSY_EitherLeft(VAL)), v(0));
EPILEPSY_ASSERT(EPILEPSY_EitherIsRight(EPILEPSY_EitherRight(VAL)));

#undef VAL
