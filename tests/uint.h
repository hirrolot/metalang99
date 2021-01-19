#include <epilepsy/assert.h>
#include <epilepsy/uint.h>

// E_uintMatch {
#define MATCH_Z_IMPL()  v(88)
#define MATCH_S_IMPL(x) v(x)

E_assertEq(E_uintMatch(v(0), v(MATCH_)), v(88));
E_assertEq(E_uintMatch(v(123), v(MATCH_)), v(123));

#undef MATCH_0_IMPL
#undef MATCH_N_IMPL
// }

// E_uintMatchWithArgs {
#define MATCH_Z_IMPL(x, y, z)    v(E_assertPlain(x == 1 && y == 2 && z == 3))
#define MATCH_S_IMPL(n, x, y, z) v(E_assertPlain(n == 123 && x == 1 && y == 2 && z == 3))

E_eval(E_uintMatchWithArgs(v(0), v(MATCH_), v(1, 2, 3)));
E_eval(E_uintMatchWithArgs(v(123), v(MATCH_), v(1, 2, 3)));

#undef MATCH_0_IMPL
#undef MATCH_N_IMPL
// }

// E_uintInc {
E_assertEq(E_uintInc(v(0)), v(1));
E_assertEq(E_uintInc(v(15)), v(16));
E_assertEq(E_uintInc(v(198)), v(199));
E_assertEq(E_uintInc(v(254)), v(255));
// }

// E_uintDec {
E_assertEq(E_uintDec(v(1)), v(0));
E_assertEq(E_uintDec(v(71)), v(70));
E_assertEq(E_uintDec(v(201)), v(200));
E_assertEq(E_uintDec(v(255)), v(254));
// }

// E_uintEq {
E_assert(E_uintEq(v(0), v(0)));
E_assert(E_uintEq(v(18), v(18)));
E_assert(E_uintEq(v(183), v(183)));
E_assert(E_uintEq(v(255), v(255)));
// }

// E_uintNeq {
E_assert(E_uintNeq(v(0), v(1)));
E_assert(E_uintNeq(v(0), v(168)));
E_assert(E_uintNeq(v(1), v(34)));
E_assert(E_uintNeq(v(184), v(381)));
E_assert(E_uintNeq(v(3), v(101)));
// }

// E_uintGreater {
E_assert(E_uintGreater(v(1), v(0)));
E_assert(E_uintGreater(v(255), v(0)));
E_assert(E_uintGreater(v(5), v(4)));
E_assert(E_uintGreater(v(147), v(80)));
E_assert(E_uintGreater(v(217), v(209)));
// }

// E_uintLesser {
E_assert(E_uintLesser(v(0), v(1)));
E_assert(E_uintLesser(v(0), v(255)));
E_assert(E_uintLesser(v(19), v(25)));
E_assert(E_uintLesser(v(109), v(110)));
E_assert(E_uintLesser(v(10), v(208)));
// }

// E_uintGreaterEq {
E_assert(E_uintGreaterEq(v(0), v(0)));
E_assert(E_uintGreaterEq(v(18), v(18)));
E_assert(E_uintGreaterEq(v(175), v(175)));
E_assert(E_uintGreaterEq(v(255), v(255)));

E_assert(E_uintGreaterEq(v(1), v(0)));
E_assert(E_uintGreaterEq(v(255), v(0)));
E_assert(E_uintGreaterEq(v(19), v(10)));
E_assert(E_uintGreaterEq(v(178), v(177)));
// }

// E_uintLesserEq {
E_assert(E_uintLesserEq(v(0), v(0)));
E_assert(E_uintLesserEq(v(2), v(2)));
E_assert(E_uintLesserEq(v(1), v(1)));
E_assert(E_uintLesserEq(v(25), v(25)));
E_assert(E_uintLesserEq(v(198), v(198)));

E_assert(E_uintLesserEq(v(0), v(1)));
E_assert(E_uintLesserEq(v(0), v(255)));
E_assert(E_uintLesserEq(v(18), v(27)));
E_assert(E_uintLesserEq(v(82), v(90)));
E_assert(E_uintLesserEq(v(145), v(146)));
E_assert(E_uintLesserEq(v(181), v(255)));
// }

// E_uintAdd {
E_assertEq(E_uintAdd(v(0), v(0)), v(0));
E_assertEq(E_uintAdd(v(19), v(83)), v(19 + 83));
E_assertEq(E_uintAdd(v(8), v(4)), v(8 + 4));
E_assertEq(E_uintAdd(v(1), v(254)), v(1 + 254));
// }

// E_uintSub {
E_assertEq(E_uintSub(v(1), v(1)), v(1 - 1));
E_assertEq(E_uintSub(v(5), v(3)), v(5 - 3));
E_assertEq(E_uintSub(v(105), v(19)), v(105 - 19));
E_assertEq(E_uintSub(v(255), v(40)), v(255 - 40));
// }

// E_uintMul {
E_assertEq(E_uintMul(v(11), v(0)), v(0));
E_assertEq(E_uintMul(v(0), v(11)), v(0));
E_assertEq(E_uintMul(v(15), v(8)), v(15 * 8));
E_assertEq(E_uintMul(v(255), v(1)), v(255 * 1));
// }

// E_uintDiv {
E_assertEq(E_uintDiv(v(15), v(1)), v(15));
E_assertEq(E_uintDiv(v(15), v(15)), v(1));
E_assertEq(E_uintDiv(v(45), v(3)), v(45 / 3));
E_assertEq(E_uintDiv(v(255), v(5)), v(255 / 5));
// }

// E_uintDivChecked {
E_assert(E_maybeEq(v(E_uintEq), E_uintDivChecked(v(15), v(1)), E_just(v(15))));
E_assert(E_maybeEq(v(E_uintEq), E_uintDivChecked(v(15), v(15)), E_just(v(1))));
E_assert(E_maybeEq(v(E_uintEq), E_uintDivChecked(v(45), v(3)), E_just(v(15))));
E_assert(E_maybeEq(v(E_uintEq), E_uintDivChecked(v(255), v(5)), E_just(v(51))));

E_assert(E_maybeEq(v(E_uintEq), E_uintDivChecked(v(4), v(0)), E_nothing()));
E_assert(E_maybeEq(v(E_uintEq), E_uintDivChecked(v(3), v(27)), E_nothing()));
E_assert(E_maybeEq(v(E_uintEq), E_uintDivChecked(v(166), v(9)), E_nothing()));
E_assert(E_maybeEq(v(E_uintEq), E_uintDivChecked(v(0), v(11)), E_nothing()));
// }

// E_uintMod {
E_assertEq(E_uintMod(v(0), v(1)), v(0 % 1));
E_assertEq(E_uintMod(v(0), v(123)), v(0 % 123));

E_assertEq(E_uintMod(v(1), v(28)), v(1 % 28));
E_assertEq(E_uintMod(v(1), v(123)), v(1 % 123));

E_assertEq(E_uintMod(v(1), v(1)), v(0));
E_assertEq(E_uintMod(v(16), v(4)), v(0));
E_assertEq(E_uintMod(v(255), v(255)), v(0));

E_assertEq(E_uintMod(v(8), v(3)), v(8 % 3));
E_assertEq(E_uintMod(v(10), v(4)), v(10 % 4));
E_assertEq(E_uintMod(v(101), v(7)), v(101 % 7));

E_assertEq(E_uintMod(v(13), v(14)), v(13 % 14));
E_assertEq(E_uintMod(v(20), v(36)), v(20 % 36));
E_assertEq(E_uintMod(v(16), v(255)), v(16 % 255));
// }

// E_uintAdd3, E_uintSub3, E_uintMul3, E_uintDiv3 {
E_assertEq(E_uintAdd3(v(8), v(2), v(4)), v(8 + 2 + 4));
E_assertEq(E_uintSub3(v(14), v(1), v(7)), v(14 - 1 - 7));
E_assertEq(E_uintMul3(v(3), v(2), v(6)), v(3 * 2 * 6));
E_assertEq(E_uintDiv3(v(30), v(2), v(3)), v(30 / 2 / 3));
// }
