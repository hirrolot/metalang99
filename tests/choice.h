#include <epilepsy/assert.h>
#include <epilepsy/aux.h>
#include <epilepsy/choice.h>

// E_match {
#define MATCH_IMPL(foo)    E_match(v(foo), v(MATCH_))
#define MATCH_FooA_IMPL(x) v(E_assertPlain(x == 19))
#define MATCH_FooB_IMPL(x) v(E_assertPlain(x == 1756))
#define MATCH_FooC_IMPL()  v(E_semicolon())

E_eval(E_call(MATCH, E_choice(v(FooA), v(19))));
E_eval(E_call(MATCH, E_choice(v(FooB), v(1756))));
E_eval(E_call(MATCH, E_choiceEmpty(v(FooC))));

#undef MATCH_IMPL
#undef MATCH_FooA_IMPL
#undef MATCH_FooB_IMPL
#undef MATCH_FooC_IMPL
// }

// E_matchWithArgs {
#define MATCH_IMPL(foo)            E_matchWithArgs(v(foo), v(MATCH_), v(3, 8))
#define MATCH_FooA_IMPL(x, _3, _8) v(E_assertPlain(x == 19 && _3 == 3 && _8 == 8))
#define MATCH_FooB_IMPL(x, _3, _8) v(E_assertPlain(x == 1756 && _3 == 3 && _8 == 8))
#define MATCH_FooC_IMPL(_3, _8)    v(E_assertPlain(_3 == 3 && _8 == 8))

E_eval(E_call(MATCH, E_choice(v(FooA), v(19))));
E_eval(E_call(MATCH, E_choice(v(FooB), v(1756))));
E_eval(E_call(MATCH, E_choiceEmpty(v(FooC))));

#undef MATCH_IMPL
#undef MATCH_FooA_IMPL
#undef MATCH_FooB_IMPL
#undef MATCH_FooC_IMPL
// }
