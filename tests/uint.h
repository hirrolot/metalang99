#include <epilepsy/assert.h>
#include <epilepsy/uint.h>

// E_uintInc {
E_assertEq(E_uintInc(v(0)), v(1));
E_assertEq(E_uintInc(v(15)), v(16));
E_assertEq(E_uintInc(v(198)), v(199));
E_assertEq(E_uintInc(v(510)), v(511));
// }

// E_uintDec {
E_assertEq(E_uintDec(v(1)), v(0));
E_assertEq(E_uintDec(v(71)), v(70));
E_assertEq(E_uintDec(v(201)), v(200));
E_assertEq(E_uintDec(v(511)), v(510));
// }

// E_uintEq {
E_assert(E_uintEq(v(0), v(0)));
E_assert(E_uintEq(v(18), v(18)));
E_assert(E_uintEq(v(345), v(345)));
E_assert(E_uintEq(v(511), v(511)));
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
E_assert(E_uintGreater(v(511), v(0)));
E_assert(E_uintGreater(v(5), v(4)));
E_assert(E_uintGreater(v(147), v(80)));
E_assert(E_uintGreater(v(456), v(309)));
// }

// E_uintLesser {
E_assert(E_uintLesser(v(0), v(1)));
E_assert(E_uintLesser(v(0), v(511)));
E_assert(E_uintLesser(v(19), v(25)));
E_assert(E_uintLesser(v(109), v(110)));
E_assert(E_uintLesser(v(10), v(509)));
// }

// E_uintGreaterEq {
E_assert(E_uintGreaterEq(v(0), v(0)));
E_assert(E_uintGreaterEq(v(18), v(18)));
E_assert(E_uintGreaterEq(v(175), v(175)));
E_assert(E_uintGreaterEq(v(511), v(511)));

E_assert(E_uintGreaterEq(v(1), v(0)));
E_assert(E_uintGreaterEq(v(511), v(0)));
E_assert(E_uintGreaterEq(v(19), v(10)));
E_assert(E_uintGreaterEq(v(378), v(377)));
// }

// E_uintLesserEq {
E_assert(E_uintLesserEq(v(0), v(0)));
E_assert(E_uintLesserEq(v(2), v(2)));
E_assert(E_uintLesserEq(v(1), v(1)));
E_assert(E_uintLesserEq(v(25), v(25)));
E_assert(E_uintLesserEq(v(498), v(498)));

E_assert(E_uintLesserEq(v(0), v(1)));
E_assert(E_uintLesserEq(v(0), v(511)));
E_assert(E_uintLesserEq(v(18), v(27)));
E_assert(E_uintLesserEq(v(82), v(90)));
E_assert(E_uintLesserEq(v(345), v(346)));
E_assert(E_uintLesserEq(v(181), v(511)));
// }

// E_uintAdd {
E_assertEq(E_uintAdd(v(0), v(0)), v(0));
E_assertEq(E_uintAdd(v(19), v(83)), v(19 + 83));
E_assertEq(E_uintAdd(v(8), v(4)), v(8 + 4));
E_assertEq(E_uintAdd(v(1), v(510)), v(1 + 510));
// }

// E_uintSub {
E_assertEq(E_uintSub(v(1), v(1)), v(1 - 1));
E_assertEq(E_uintSub(v(5), v(3)), v(5 - 3));
E_assertEq(E_uintSub(v(105), v(19)), v(105 - 19));
E_assertEq(E_uintSub(v(511), v(40)), v(511 - 40));
// }

// E_uintMul {
E_assertEq(E_uintMul(v(11), v(0)), v(0));
E_assertEq(E_uintMul(v(0), v(11)), v(0));
E_assertEq(E_uintMul(v(15), v(8)), v(15 * 8));
E_assertEq(E_uintMul(v(511), v(1)), v(511 * 1));
// }
