#include <epilepsy/assert.h>
#include <epilepsy/aux.h>
#include <epilepsy/choice.h>
#include <epilepsy/list.h>

#define VAL v(abc ? +-148 % "hello world")

#define FooA_IMPL(x) EPILEPSY_choice(v(FooA), v(x))
#define FooB_IMPL(x) EPILEPSY_choice(v(FooB), v(x))
#define FooC_IMPL(x) EPILEPSY_choice(v(FooC), v(x))

#define MATCH_IMPL(foo)        EPILEPSY_matchWithArgs(v(foo), v(MATCH_), v(3))
#define MATCH_FooA_IMPL(x, _3) v(EPILEPSY_assertPlain(x == 19); EPILEPSY_assertPlain(_3 == 3);)
#define MATCH_FooB_IMPL(x, _3) v(EPILEPSY_assertPlain(x == 1756); EPILEPSY_assertPlain(_3 == 3);)
#define MATCH_FooC_IMPL(x, _3) v(EPILEPSY_assertPlain(x == 0); EPILEPSY_assertPlain(_3 == 3);)

EPILEPSY_eval(EPILEPSY_call(MATCH, EPILEPSY_call(FooA, v(19))))
    EPILEPSY_eval(EPILEPSY_call(MATCH, EPILEPSY_call(FooB, v(1756))))
        EPILEPSY_eval(EPILEPSY_call(MATCH, EPILEPSY_call(FooC, v(0))))

#undef MATCH_IMPL
#undef MATCH_FooA_IMPL
#undef MATCH_FooB_IMPL
#undef MATCH_FooC_IMPL

#undef FooA_IMPL
#undef FooB_IMPL
#undef FooC_IMPL

#undef VAL
