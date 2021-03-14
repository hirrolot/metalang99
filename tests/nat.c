#include <metalang99/assert.h>
#include <metalang99/nat.h>

// ML99_natMatch {
#define MATCH_Z_IMPL()  v(88)
#define MATCH_S_IMPL(x) v(x)

ML99_assertEq(ML99_natMatch(v(0), v(MATCH_)), v(88));
ML99_assertEq(ML99_natMatch(v(123), v(MATCH_)), v(122));

#undef MATCH_Z_IMPL
#undef MATCH_S_IMPL
// }

// ML99_natMatchWithArgs {
#define MATCH_Z_IMPL(x, y, z)    v(ML99_assertPlain(x == 1 && y == 2 && z == 3))
#define MATCH_S_IMPL(n, x, y, z) v(ML99_assertPlain(n == 122 && x == 1 && y == 2 && z == 3))

ML99_eval(ML99_natMatchWithArgs(v(0), v(MATCH_), v(1, 2, 3)));
ML99_eval(ML99_natMatchWithArgs(v(123), v(MATCH_), v(1, 2, 3)));

#undef MATCH_Z_IMPL
#undef MATCH_S_IMPL
// }

// ML99_inc {
ML99_assertEq(ML99_inc(v(0)), v(1));
ML99_assertEq(ML99_inc(v(15)), v(16));
ML99_assertEq(ML99_inc(v(198)), v(199));
ML99_assertEq(ML99_inc(v(254)), v(255));
ML99_assertEq(ML99_inc(v(255)), v(0));
// }

// ML99_dec {
ML99_assertEq(ML99_dec(v(0)), v(255));
ML99_assertEq(ML99_dec(v(1)), v(0));
ML99_assertEq(ML99_dec(v(71)), v(70));
ML99_assertEq(ML99_dec(v(201)), v(200));
ML99_assertEq(ML99_dec(v(255)), v(254));
// }

// ML99_natEq {
ML99_assert(ML99_natEq(v(0), v(0)));
ML99_assert(ML99_natEq(v(18), v(18)));
ML99_assert(ML99_natEq(v(183), v(183)));
ML99_assert(ML99_natEq(v(255), v(255)));

ML99_assert(ML99_not(ML99_natEq(v(0), v(1))));
ML99_assert(ML99_not(ML99_natEq(v(198), v(91))));
// }

// ML99_natNeq {
ML99_assert(ML99_natNeq(v(0), v(1)));
ML99_assert(ML99_natNeq(v(0), v(168)));
ML99_assert(ML99_natNeq(v(1), v(34)));
ML99_assert(ML99_natNeq(v(184), v(381)));
ML99_assert(ML99_natNeq(v(3), v(101)));
// }

// ML99_greater {
ML99_assert(ML99_greater(v(1), v(0)));
ML99_assert(ML99_greater(v(255), v(0)));
ML99_assert(ML99_greater(v(5), v(4)));
ML99_assert(ML99_greater(v(147), v(80)));
ML99_assert(ML99_greater(v(217), v(209)));

ML99_assert(ML99_not(ML99_greater(v(0), v(13))));
ML99_assert(ML99_not(ML99_greater(v(17), v(120))));
// }

// ML99_lesser {
ML99_assert(ML99_lesser(v(0), v(1)));
ML99_assert(ML99_lesser(v(0), v(255)));
ML99_assert(ML99_lesser(v(19), v(25)));
ML99_assert(ML99_lesser(v(109), v(110)));
ML99_assert(ML99_lesser(v(10), v(208)));

ML99_assert(ML99_not(ML99_lesser(v(12), v(0))));
ML99_assert(ML99_not(ML99_lesser(v(123), v(123))));
// }

// ML99_greaterEq {
ML99_assert(ML99_greaterEq(v(0), v(0)));
ML99_assert(ML99_greaterEq(v(18), v(18)));
ML99_assert(ML99_greaterEq(v(175), v(175)));
ML99_assert(ML99_greaterEq(v(255), v(255)));

ML99_assert(ML99_greaterEq(v(1), v(0)));
ML99_assert(ML99_greaterEq(v(255), v(0)));
ML99_assert(ML99_greaterEq(v(19), v(10)));
ML99_assert(ML99_greaterEq(v(178), v(177)));

ML99_assert(ML99_not(ML99_greaterEq(v(0), v(7))));
ML99_assert(ML99_not(ML99_greaterEq(v(1), v(19))));
// }

// ML99_lesserEq {
ML99_assert(ML99_lesserEq(v(0), v(0)));
ML99_assert(ML99_lesserEq(v(2), v(2)));
ML99_assert(ML99_lesserEq(v(1), v(1)));
ML99_assert(ML99_lesserEq(v(25), v(25)));
ML99_assert(ML99_lesserEq(v(198), v(198)));

ML99_assert(ML99_lesserEq(v(0), v(1)));
ML99_assert(ML99_lesserEq(v(0), v(255)));
ML99_assert(ML99_lesserEq(v(18), v(27)));
ML99_assert(ML99_lesserEq(v(82), v(90)));
ML99_assert(ML99_lesserEq(v(145), v(146)));
ML99_assert(ML99_lesserEq(v(181), v(255)));

ML99_assert(ML99_not(ML99_lesserEq(v(7), v(0))));
ML99_assert(ML99_not(ML99_lesserEq(v(182), v(181))));
// }

// ML99_add {
ML99_assertEq(ML99_add(v(0), v(0)), v(0));
ML99_assertEq(ML99_add(v(19), v(83)), v(19 + 83));
ML99_assertEq(ML99_add(v(8), v(4)), v(8 + 4));
ML99_assertEq(ML99_add(v(1), v(254)), v(1 + 254));
// }

// ML99_sub {
ML99_assertEq(ML99_sub(v(1), v(1)), v(1 - 1));
ML99_assertEq(ML99_sub(v(5), v(3)), v(5 - 3));
ML99_assertEq(ML99_sub(v(105), v(19)), v(105 - 19));
ML99_assertEq(ML99_sub(v(255), v(40)), v(255 - 40));
// }

// ML99_mul {
ML99_assertEq(ML99_mul(v(11), v(0)), v(0));
ML99_assertEq(ML99_mul(v(0), v(11)), v(0));
ML99_assertEq(ML99_mul(v(15), v(8)), v(15 * 8));
ML99_assertEq(ML99_mul(v(255), v(1)), v(255 * 1));
// }

// ML99_div {
ML99_assertEq(ML99_div(v(15), v(1)), v(15));
ML99_assertEq(ML99_div(v(15), v(15)), v(1));
ML99_assertEq(ML99_div(v(45), v(3)), v(45 / 3));
ML99_assertEq(ML99_div(v(255), v(5)), v(255 / 5));
// }

// ML99_divChecked {
ML99_assert(ML99_maybeEq(v(ML99_natEq), ML99_divChecked(v(15), v(1)), ML99_just(v(15))));
ML99_assert(ML99_maybeEq(v(ML99_natEq), ML99_divChecked(v(15), v(15)), ML99_just(v(1))));
ML99_assert(ML99_maybeEq(v(ML99_natEq), ML99_divChecked(v(45), v(3)), ML99_just(v(15))));
ML99_assert(ML99_maybeEq(v(ML99_natEq), ML99_divChecked(v(255), v(5)), ML99_just(v(51))));

ML99_assert(ML99_maybeEq(v(ML99_natEq), ML99_divChecked(v(4), v(0)), ML99_nothing()));
ML99_assert(ML99_maybeEq(v(ML99_natEq), ML99_divChecked(v(3), v(27)), ML99_nothing()));
ML99_assert(ML99_maybeEq(v(ML99_natEq), ML99_divChecked(v(166), v(9)), ML99_nothing()));
ML99_assert(ML99_maybeEq(v(ML99_natEq), ML99_divChecked(v(0), v(11)), ML99_nothing()));
// }

// ML99_mod {
ML99_assertEq(ML99_mod(v(0), v(1)), v(0 % 1));
ML99_assertEq(ML99_mod(v(0), v(123)), v(0 % 123));

ML99_assertEq(ML99_mod(v(1), v(28)), v(1 % 28));
ML99_assertEq(ML99_mod(v(1), v(123)), v(1 % 123));

ML99_assertEq(ML99_mod(v(1), v(1)), v(0));
ML99_assertEq(ML99_mod(v(16), v(4)), v(0));
ML99_assertEq(ML99_mod(v(255), v(255)), v(0));

ML99_assertEq(ML99_mod(v(8), v(3)), v(8 % 3));
ML99_assertEq(ML99_mod(v(10), v(4)), v(10 % 4));
ML99_assertEq(ML99_mod(v(101), v(7)), v(101 % 7));

ML99_assertEq(ML99_mod(v(13), v(14)), v(13 % 14));
ML99_assertEq(ML99_mod(v(20), v(36)), v(20 % 36));
ML99_assertEq(ML99_mod(v(16), v(255)), v(16 % 255));
// }

// ML99_add3, ML99_sub3, ML99_mul3, ML99_div3 {
ML99_assertEq(ML99_add3(v(8), v(2), v(4)), v(8 + 2 + 4));
ML99_assertEq(ML99_sub3(v(14), v(1), v(7)), v(14 - 1 - 7));
ML99_assertEq(ML99_mul3(v(3), v(2), v(6)), v(3 * 2 * 6));
ML99_assertEq(ML99_div3(v(30), v(2), v(3)), v(30 / 2 / 3));
// }

// ML99_min {
ML99_assertEq(ML99_min(v(0), v(1)), v(0));
ML99_assertEq(ML99_min(v(5), v(7)), v(5));
ML99_assertEq(ML99_min(v(200), v(255)), v(200));
// }

// ML99_max {
ML99_assertEq(ML99_max(v(0), v(1)), v(1));
ML99_assertEq(ML99_max(v(5), v(7)), v(7));
ML99_assertEq(ML99_max(v(200), v(255)), v(255));
// }

int main(void) {}
