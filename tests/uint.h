#include <epilepsy/assert.h>
#include <epilepsy/uint.h>

// E_uintInc {
E_assertEq(E_uintInc(v(0)), v(1));
E_assertEq(E_uintInc(v(15)), v(16));
E_assertEq(E_uintInc(v(198)), v(199));
E_assertEq(E_uintInc(v(1022)), v(1023));
// }

// E_uintDec {
E_assertEq(E_uintDec(v(1)), v(0));
E_assertEq(E_uintDec(v(71)), v(70));
E_assertEq(E_uintDec(v(918)), v(917));
E_assertEq(E_uintDec(v(1023)), v(1022));
// }

// E_uintEq {
E_assert(E_uintEq(v(0), v(0)));
E_assert(E_uintEq(v(18), v(18)));
E_assert(E_uintEq(v(910), v(910)));
E_assert(E_uintEq(v(1023), v(1023)));
// }

// E_uintNeq {
E_assert(E_uintNeq(v(0), v(1)));
E_assert(E_uintNeq(v(0), v(1023)));
E_assert(E_uintNeq(v(1), v(34)));
E_assert(E_uintNeq(v(184), v(1019)));
E_assert(E_uintNeq(v(603), v(16)));
// }

// E_uintGreater {
E_assert(E_uintGreater(v(1), v(0)));
// TODO: fix reaching limit. E_assert(E_uintGreater(v(1023), v(0)));
E_assert(E_uintGreater(v(5), v(4)));
E_assert(E_uintGreater(v(147), v(80)));
// TODO: fix reaching limit. E_assert(E_uintGreater(v(619), v(401)));
// }

// E_uintLesser {
E_assert(E_uintLesser(v(0), v(1)));
// TODO: fix reaching limit. E_assert(E_uintLesser(v(0), v(1023)));
E_assert(E_uintLesser(v(19), v(25)));
E_assert(E_uintLesser(v(109), v(110)));
E_assert(E_uintLesser(v(817), v(1003)));
// }

// E_uintGreaterEq {
E_assert(E_uintGreaterEq(v(0), v(0)));
E_assert(E_uintGreaterEq(v(18), v(18)));
E_assert(E_uintGreaterEq(v(175), v(175)));
E_assert(E_uintGreaterEq(v(1023), v(1023)));

E_assert(E_uintGreaterEq(v(1), v(0)));
// TODO: fix reaching limit. E_assert(E_uintGreaterEq(v(1023), v(0)));
E_assert(E_uintGreaterEq(v(19), v(10)));
// TODO: fix reaching limit. E_assert(E_uintGreaterEq(v(760), v(508)));
// }

// E_uintLesserEq {
E_assert(E_uintLesserEq(v(0), v(0)));
E_assert(E_uintLesserEq(v(2), v(2)));
E_assert(E_uintLesserEq(v(1), v(1)));
E_assert(E_uintLesserEq(v(25), v(25)));
E_assert(E_uintLesserEq(v(498), v(498)));

E_assert(E_uintLesserEq(v(0), v(1)));
// TODO: fix reaching limit. E_assert(E_uintLesserEq(v(0), v(1023)));
E_assert(E_uintLesserEq(v(18), v(27)));
E_assert(E_uintLesserEq(v(82), v(90)));
E_assert(E_uintLesserEq(v(345), v(346)));
E_assert(E_uintLesserEq(v(901), v(1023)));
// }

// E_uintAdd {
E_assertEq(E_uintAdd(v(0), v(0)), v(0));
E_assertEq(E_uintAdd(v(19), v(83)), v(19 + 83));
E_assertEq(E_uintAdd(v(8), v(4)), v(8 + 4));
// TODO: fix reaching limit. E_assertEq(E_uintAdd(v(1), v(1022)), v(1 + 1022));
// }

// E_uintSub {
E_assertEq(E_uintSub(v(105), v(19)), v(105 - 19));
// }

// E_uintMul {
E_assertEq(E_uintMul(v(15), v(8)), v(15 * 8));
// }
