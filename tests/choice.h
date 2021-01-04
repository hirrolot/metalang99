#include <epilepsy/assert.h>
#include <epilepsy/aux.h>
#include <epilepsy/choice.h>
#include <epilepsy/list.h>

#define VAL v(abc ? +-148 % "hello world")

#define FooA(x) EPILEPSY_CHOICE(v(FooA), v(x))
#define FooB(x) EPILEPSY_CHOICE(v(FooB), v(x))
#define FooC(x) EPILEPSY_CHOICE(v(FooC), v(x))

#define MATCH(foo)        EPILEPSY_MATCH_WITH_ARGS(v(foo), v(MATCH_), v(3))
#define MATCH_FooA(x, _3) v(EPILEPSY_ASSERT_PLAIN(x == 19); EPILEPSY_ASSERT_PLAIN(_3 == 3);)
#define MATCH_FooB(x, _3) v(EPILEPSY_ASSERT_PLAIN(x == 1756); EPILEPSY_ASSERT_PLAIN(_3 == 3);)
#define MATCH_FooC(x, _3) v(EPILEPSY_ASSERT_PLAIN(x == 0); EPILEPSY_ASSERT_PLAIN(_3 == 3);)

EPILEPSY_EVAL(EPILEPSY_CALL(MATCH, EPILEPSY_CALL(FooA, v(19))))
EPILEPSY_EVAL(EPILEPSY_CALL(MATCH, EPILEPSY_CALL(FooB, v(1756))))
EPILEPSY_EVAL(EPILEPSY_CALL(MATCH, EPILEPSY_CALL(FooC, v(0))))

#undef MATCH
#undef MATCH_FooA
#undef MATCH_FooB
#undef MATCH_FooC

#undef FooA
#undef FooB
#undef FooC

#undef VAL
