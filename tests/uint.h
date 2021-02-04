#include <metalang99/assert.h>
#include <metalang99/uint.h>

// M_uintMatch {
#define MATCH_Z_IMPL()  v(88)
#define MATCH_S_IMPL(x) v(x)

M_assertEq(M_uintMatch(v(0), v(MATCH_)), v(88));
M_assertEq(M_uintMatch(v(123), v(MATCH_)), v(122));

#undef MATCH_Z_IMPL
#undef MATCH_S_IMPL
// }

// M_uintMatchWithArgs {
#define MATCH_Z_IMPL(x, y, z)    v(M_assertPlain(x == 1 && y == 2 && z == 3))
#define MATCH_S_IMPL(n, x, y, z) v(M_assertPlain(n == 122 && x == 1 && y == 2 && z == 3))

M_eval(M_uintMatchWithArgs(v(0), v(MATCH_), v(1, 2, 3)));
M_eval(M_uintMatchWithArgs(v(123), v(MATCH_), v(1, 2, 3)));

#undef MATCH_Z_IMPL
#undef MATCH_S_IMPL
// }

// M_uintInc {
M_assertEq(M_uintInc(v(0)), v(1));
M_assertEq(M_uintInc(v(15)), v(16));
M_assertEq(M_uintInc(v(198)), v(199));
M_assertEq(M_uintInc(v(254)), v(255));
M_assertEq(M_uintInc(v(255)), v(0));
// }

// M_uintDec {
M_assertEq(M_uintDec(v(0)), v(255));
M_assertEq(M_uintDec(v(1)), v(0));
M_assertEq(M_uintDec(v(71)), v(70));
M_assertEq(M_uintDec(v(201)), v(200));
M_assertEq(M_uintDec(v(255)), v(254));
// }

// M_uintEq {
M_assert(M_uintEq(v(0), v(0)));
M_assert(M_uintEq(v(18), v(18)));
M_assert(M_uintEq(v(183), v(183)));
M_assert(M_uintEq(v(255), v(255)));

M_assert(M_not(M_uintEq(v(0), v(1))));
M_assert(M_not(M_uintEq(v(198), v(91))));
// }

// M_uintNeq {
M_assert(M_uintNeq(v(0), v(1)));
M_assert(M_uintNeq(v(0), v(168)));
M_assert(M_uintNeq(v(1), v(34)));
M_assert(M_uintNeq(v(184), v(381)));
M_assert(M_uintNeq(v(3), v(101)));
// }

// M_uintGreater {
M_assert(M_uintGreater(v(1), v(0)));
M_assert(M_uintGreater(v(255), v(0)));
M_assert(M_uintGreater(v(5), v(4)));
M_assert(M_uintGreater(v(147), v(80)));
M_assert(M_uintGreater(v(217), v(209)));

M_assert(M_not(M_uintGreater(v(0), v(13))));
M_assert(M_not(M_uintGreater(v(17), v(120))));
// }

// M_uintLesser {
M_assert(M_uintLesser(v(0), v(1)));
M_assert(M_uintLesser(v(0), v(255)));
M_assert(M_uintLesser(v(19), v(25)));
M_assert(M_uintLesser(v(109), v(110)));
M_assert(M_uintLesser(v(10), v(208)));

M_assert(M_not(M_uintLesser(v(12), v(0))));
M_assert(M_not(M_uintLesser(v(123), v(123))));
// }

// M_uintGreaterEq {
M_assert(M_uintGreaterEq(v(0), v(0)));
M_assert(M_uintGreaterEq(v(18), v(18)));
M_assert(M_uintGreaterEq(v(175), v(175)));
M_assert(M_uintGreaterEq(v(255), v(255)));

M_assert(M_uintGreaterEq(v(1), v(0)));
M_assert(M_uintGreaterEq(v(255), v(0)));
M_assert(M_uintGreaterEq(v(19), v(10)));
M_assert(M_uintGreaterEq(v(178), v(177)));

M_assert(M_not(M_uintGreaterEq(v(0), v(7))));
M_assert(M_not(M_uintGreaterEq(v(1), v(19))));
// }

// M_uintLesserEq {
M_assert(M_uintLesserEq(v(0), v(0)));
M_assert(M_uintLesserEq(v(2), v(2)));
M_assert(M_uintLesserEq(v(1), v(1)));
M_assert(M_uintLesserEq(v(25), v(25)));
M_assert(M_uintLesserEq(v(198), v(198)));

M_assert(M_uintLesserEq(v(0), v(1)));
M_assert(M_uintLesserEq(v(0), v(255)));
M_assert(M_uintLesserEq(v(18), v(27)));
M_assert(M_uintLesserEq(v(82), v(90)));
M_assert(M_uintLesserEq(v(145), v(146)));
M_assert(M_uintLesserEq(v(181), v(255)));

M_assert(M_not(M_uintLesserEq(v(7), v(0))));
M_assert(M_not(M_uintLesserEq(v(182), v(181))));
// }

// M_uintAdd {
M_assertEq(M_uintAdd(v(0), v(0)), v(0));
M_assertEq(M_uintAdd(v(19), v(83)), v(19 + 83));
M_assertEq(M_uintAdd(v(8), v(4)), v(8 + 4));
M_assertEq(M_uintAdd(v(1), v(254)), v(1 + 254));
// }

// M_uintSub {
M_assertEq(M_uintSub(v(1), v(1)), v(1 - 1));
M_assertEq(M_uintSub(v(5), v(3)), v(5 - 3));
M_assertEq(M_uintSub(v(105), v(19)), v(105 - 19));
M_assertEq(M_uintSub(v(255), v(40)), v(255 - 40));
// }

// M_uintMul {
M_assertEq(M_uintMul(v(11), v(0)), v(0));
M_assertEq(M_uintMul(v(0), v(11)), v(0));
M_assertEq(M_uintMul(v(15), v(8)), v(15 * 8));
M_assertEq(M_uintMul(v(255), v(1)), v(255 * 1));
// }

// M_uintDiv {
M_assertEq(M_uintDiv(v(15), v(1)), v(15));
M_assertEq(M_uintDiv(v(15), v(15)), v(1));
M_assertEq(M_uintDiv(v(45), v(3)), v(45 / 3));
M_assertEq(M_uintDiv(v(255), v(5)), v(255 / 5));
// }

// M_uintDivChecked {
M_assert(M_maybeEq(v(M_uintEq), M_uintDivChecked(v(15), v(1)), M_just(v(15))));
M_assert(M_maybeEq(v(M_uintEq), M_uintDivChecked(v(15), v(15)), M_just(v(1))));
M_assert(M_maybeEq(v(M_uintEq), M_uintDivChecked(v(45), v(3)), M_just(v(15))));
M_assert(M_maybeEq(v(M_uintEq), M_uintDivChecked(v(255), v(5)), M_just(v(51))));

M_assert(M_maybeEq(v(M_uintEq), M_uintDivChecked(v(4), v(0)), M_nothing()));
M_assert(M_maybeEq(v(M_uintEq), M_uintDivChecked(v(3), v(27)), M_nothing()));
M_assert(M_maybeEq(v(M_uintEq), M_uintDivChecked(v(166), v(9)), M_nothing()));
M_assert(M_maybeEq(v(M_uintEq), M_uintDivChecked(v(0), v(11)), M_nothing()));
// }

// M_uintMod {
M_assertEq(M_uintMod(v(0), v(1)), v(0 % 1));
M_assertEq(M_uintMod(v(0), v(123)), v(0 % 123));

M_assertEq(M_uintMod(v(1), v(28)), v(1 % 28));
M_assertEq(M_uintMod(v(1), v(123)), v(1 % 123));

M_assertEq(M_uintMod(v(1), v(1)), v(0));
M_assertEq(M_uintMod(v(16), v(4)), v(0));
M_assertEq(M_uintMod(v(255), v(255)), v(0));

M_assertEq(M_uintMod(v(8), v(3)), v(8 % 3));
M_assertEq(M_uintMod(v(10), v(4)), v(10 % 4));
M_assertEq(M_uintMod(v(101), v(7)), v(101 % 7));

M_assertEq(M_uintMod(v(13), v(14)), v(13 % 14));
M_assertEq(M_uintMod(v(20), v(36)), v(20 % 36));
M_assertEq(M_uintMod(v(16), v(255)), v(16 % 255));
// }

// M_uintAdd3, M_uintSub3, M_uintMul3, M_uintDiv3 {
M_assertEq(M_uintAdd3(v(8), v(2), v(4)), v(8 + 2 + 4));
M_assertEq(M_uintSub3(v(14), v(1), v(7)), v(14 - 1 - 7));
M_assertEq(M_uintMul3(v(3), v(2), v(6)), v(3 * 2 * 6));
M_assertEq(M_uintDiv3(v(30), v(2), v(3)), v(30 / 2 / 3));
// }

// M_uintMin {
M_assertEq(M_uintMin(v(0), v(1)), v(0));
M_assertEq(M_uintMin(v(5), v(7)), v(5));
M_assertEq(M_uintMin(v(200), v(255)), v(200));
// }

// M_uintMax {
M_assertEq(M_uintMax(v(0), v(1)), v(1));
M_assertEq(M_uintMax(v(5), v(7)), v(7));
M_assertEq(M_uintMax(v(200), v(255)), v(255));
// }
