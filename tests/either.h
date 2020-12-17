#include <epilepsy/assert.h>
#include <epilepsy/aux.h>
#include <epilepsy/either.h>
#include <epilepsy/eval.h>
#include <epilepsy/lang.h>

#define VAL v(abc ? +-148 % "hello world")

#define MATCH(either) EPILEPSY_CHOICE_MATCH(v(either), v(MATCH_), v(123))
#define MATCH_LEFT(_18, _123)                                                                      \
    v(EPILEPSY_C_STATIC_ASSERT(_18 == 18); EPILEPSY_C_STATIC_ASSERT(_123 == 123);)
#define MATCH_RIGHT(_4, _123)                                                                      \
    v(EPILEPSY_C_STATIC_ASSERT(_4 == 4); EPILEPSY_C_STATIC_ASSERT(_123 == 123);)

EPILEPSY_EVAL(call(MATCH, EPILEPSY_EITHER_LEFT(v(18))))
EPILEPSY_EVAL(call(MATCH, EPILEPSY_EITHER_RIGHT(v(4))))

#undef MATCH
#undef MATCH_LEFT
#undef MATCH_RIGHT

EPILEPSY_ASSERT(EPILEPSY_EITHER_IS_LEFT(EPILEPSY_EITHER_LEFT(VAL)));
EPILEPSY_ASSERT_EQ(EPILEPSY_EITHER_IS_LEFT(EPILEPSY_EITHER_RIGHT(VAL)), v(0));

EPILEPSY_ASSERT_EQ(EPILEPSY_EITHER_IS_RIGHT(EPILEPSY_EITHER_LEFT(VAL)), v(0));
EPILEPSY_ASSERT(EPILEPSY_EITHER_IS_RIGHT(EPILEPSY_EITHER_RIGHT(VAL)));

#undef VAL
