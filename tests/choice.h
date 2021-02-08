#include <metalang99/assert.h>
#include <metalang99/choice.h>
#include <metalang99/util.h>

// M_match {
#define MATCH_IMPL(foo)    M_match(v(foo), v(MATCH_))
#define MATCH_FooA_IMPL(x) v(M_assertPlain(x == 19))
#define MATCH_FooB_IMPL(x) v(M_assertPlain(x == 1756))
#define MATCH_FooC_IMPL()  v(M_semicolon())

M_eval(M_call(MATCH, M_choice(v(FooA), v(19))));
M_eval(M_call(MATCH, M_choice(v(FooB), v(1756))));
M_eval(M_call(MATCH, M_choiceEmpty(v(FooC))));

#undef MATCH_IMPL
#undef MATCH_FooA_IMPL
#undef MATCH_FooB_IMPL
#undef MATCH_FooC_IMPL
// }

// M_matchWithArgs {
#define MATCH_IMPL(foo)            M_matchWithArgs(v(foo), v(MATCH_), v(3, 8))
#define MATCH_FooA_IMPL(x, _3, _8) v(M_assertPlain(x == 19 && _3 == 3 && _8 == 8))
#define MATCH_FooB_IMPL(x, _3, _8) v(M_assertPlain(x == 1756 && _3 == 3 && _8 == 8))
#define MATCH_FooC_IMPL(_3, _8)    v(M_assertPlain(_3 == 3 && _8 == 8))

M_eval(M_call(MATCH, M_choice(v(FooA), v(19))));
M_eval(M_call(MATCH, M_choice(v(FooB), v(1756))));
M_eval(M_call(MATCH, M_choiceEmpty(v(FooC))));

#undef MATCH_IMPL
#undef MATCH_FooA_IMPL
#undef MATCH_FooB_IMPL
#undef MATCH_FooC_IMPL
// }
