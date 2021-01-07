#include <epilepsy/assert.h>
#include <epilepsy/aux.h>
#include <epilepsy/choice.h>
#include <epilepsy/list.h>

#define VAL v(abc ? +-148 % "hello world")

#define FooA_IMPL(x) epChoice(v(FooA), v(x))
#define FooB_IMPL(x) epChoice(v(FooB), v(x))
#define FooC_IMPL(x) epChoice(v(FooC), v(x))

#define MATCH_IMPL(foo)        epMatchWithArgs(v(foo), v(MATCH_), v(3))
#define MATCH_FooA_IMPL(x, _3) v(epAssertPlain(x == 19); epAssertPlain(_3 == 3);)
#define MATCH_FooB_IMPL(x, _3) v(epAssertPlain(x == 1756); epAssertPlain(_3 == 3);)
#define MATCH_FooC_IMPL(x, _3) v(epAssertPlain(x == 0); epAssertPlain(_3 == 3);)

epEval(epCall(MATCH, epCall(FooA, v(19)))) epEval(epCall(MATCH, epCall(FooB, v(1756))))
    epEval(epCall(MATCH, epCall(FooC, v(0))))

#undef MATCH_IMPL
#undef MATCH_FooA_IMPL
#undef MATCH_FooB_IMPL
#undef MATCH_FooC_IMPL

#undef FooA_IMPL
#undef FooB_IMPL
#undef FooC_IMPL

#undef VAL
