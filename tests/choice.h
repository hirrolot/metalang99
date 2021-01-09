#include <epilepsy/assert.h>
#include <epilepsy/aux.h>
#include <epilepsy/choice.h>
#include <epilepsy/list.h>

#define VAL v(abc ? +-148 % "hello world")

#define FooA_IMPL(x) E_choice(v(FooA), v(x))
#define FooB_IMPL(x) E_choice(v(FooB), v(x))
#define FooC_IMPL(x) E_choice(v(FooC), v(x))

#define MATCH_IMPL(foo)        E_matchWithArgs(v(foo), v(MATCH_), v(3))
#define MATCH_FooA_IMPL(x, _3) v(E_assertPlain(x == 19); E_assertPlain(_3 == 3);)
#define MATCH_FooB_IMPL(x, _3) v(E_assertPlain(x == 1756); E_assertPlain(_3 == 3);)
#define MATCH_FooC_IMPL(x, _3) v(E_assertPlain(x == 0); E_assertPlain(_3 == 3);)

E_eval(E_call(MATCH, E_call(FooA, v(19)))) E_eval(E_call(MATCH, E_call(FooB, v(1756))))
    E_eval(E_call(MATCH, E_call(FooC, v(0))))

#undef MATCH_IMPL
#undef MATCH_FooA_IMPL
#undef MATCH_FooB_IMPL
#undef MATCH_FooC_IMPL

#undef FooA_IMPL
#undef FooB_IMPL
#undef FooC_IMPL

#undef VAL
