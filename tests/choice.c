#include <metalang99/assert.h>
#include <metalang99/choice.h>
#include <metalang99/util.h>

// ML99_match {
#define MATCH_IMPL(foo)    ML99_match(v(foo), v(MATCH_))
#define MATCH_FooA_IMPL(x) v(ML99_assertPlain(x == 19))
#define MATCH_FooB_IMPL(x) v(ML99_assertPlain(x == 1756))
#define MATCH_FooC_IMPL(_) v(ML99_assertPlain(1))

ML99_eval(ML99_call(MATCH, ML99_choice(v(FooA), v(19))));
ML99_eval(ML99_call(MATCH, ML99_choice(v(FooB), v(1756))));
ML99_eval(ML99_call(MATCH, ML99_choice(v(FooC), v(~))));

#undef MATCH_IMPL
#undef MATCH_FooA_IMPL
#undef MATCH_FooB_IMPL
#undef MATCH_FooC_IMPL
// }

// ML99_matchWithArgs {
#define MATCH_IMPL(foo)            ML99_matchWithArgs(v(foo), v(MATCH_), v(3, 8))
#define MATCH_FooA_IMPL(x, _3, _8) v(ML99_assertPlain(x == 19 && _3 == 3 && _8 == 8))
#define MATCH_FooB_IMPL(x, _3, _8) v(ML99_assertPlain(x == 1756 && _3 == 3 && _8 == 8))
#define MATCH_FooC_IMPL(_, _3, _8) v(ML99_assertPlain(_3 == 3 && _8 == 8))

ML99_eval(ML99_call(MATCH, ML99_choice(v(FooA), v(19))));
ML99_eval(ML99_call(MATCH, ML99_choice(v(FooB), v(1756))));
ML99_eval(ML99_call(MATCH, ML99_choice(v(FooC), v(~))));

#undef MATCH_IMPL
#undef MATCH_FooA_IMPL
#undef MATCH_FooB_IMPL
#undef MATCH_FooC_IMPL
// }

// ML99_choiceTag, ML99_CHOICE_TAG {
ML99_assertEq(ML99_choiceTag(ML99_choice(v(5), v(1, 2, 3))), v(5));
ML99_assertPlain(ML99_CHOICE_TAG(ML99_CHOICE(5, 1, 2, 3)) == 5);
// }

int main(void) {}
