#include <epilepsy/assert.h>
#include <epilepsy/either.h>
#include <epilepsy/uint.h>

#define VAL v(abc ? +-148 % "hello world")

#define MATCH_IMPL(either)               E_matchWithArgs(v(either), v(MATCH_), v(123))
#define MATCH_eitherLeft_IMPL(_18, _123) v(E_assertPlain(_18 == 18); E_assertPlain(_123 == 123);)
#define MATCH_eitherRight_IMPL(_4, _123) v(E_assertPlain(_4 == 4); E_assertPlain(_123 == 123);)

E_eval(E_call(MATCH, E_eitherLeft(v(18)))) E_eval(E_call(MATCH, E_eitherRight(v(4))))

#undef MATCH_IMPL
#undef MATCH_LEFT_IMPL
#undef MATCH_RIGHT_IMPL

    E_assert(E_eitherIsLeft(E_eitherLeft(VAL)));
E_assertEq(E_eitherIsLeft(E_eitherRight(VAL)), v(0));

E_assertEq(E_eitherIsRight(E_eitherLeft(VAL)), v(0));
E_assert(E_eitherIsRight(E_eitherRight(VAL)));

#undef VAL
