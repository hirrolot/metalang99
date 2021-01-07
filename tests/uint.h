#include <epilepsy/assert.h>
#include <epilepsy/uint.h>

// EPILEPSY_uintInc {
EPILEPSY_assertEq(EPILEPSY_uintInc(v(0)), v(1));
EPILEPSY_assertEq(EPILEPSY_uintInc(v(15)), v(16));
EPILEPSY_assertEq(EPILEPSY_uintInc(v(198)), v(199));
EPILEPSY_assertEq(EPILEPSY_uintInc(v(1022)), v(1023));
// }

// EPILEPSY_uintDec {
EPILEPSY_assertEq(EPILEPSY_uintDec(v(1)), v(0));
EPILEPSY_assertEq(EPILEPSY_uintDec(v(71)), v(70));
EPILEPSY_assertEq(EPILEPSY_uintDec(v(918)), v(917));
EPILEPSY_assertEq(EPILEPSY_uintDec(v(1023)), v(1022));
// }

// EPILEPSY_uintEq {
EPILEPSY_assert(EPILEPSY_uintEq(v(0), v(0)));
EPILEPSY_assert(EPILEPSY_uintEq(v(18), v(18)));
EPILEPSY_assert(EPILEPSY_uintEq(v(910), v(910)));
EPILEPSY_assert(EPILEPSY_uintEq(v(1023), v(1023)));
// }

// EPILEPSY_uintNeq {
EPILEPSY_assert(EPILEPSY_uintNeq(v(0), v(1)));
EPILEPSY_assert(EPILEPSY_uintNeq(v(0), v(1023)));
EPILEPSY_assert(EPILEPSY_uintNeq(v(1), v(34)));
EPILEPSY_assert(EPILEPSY_uintNeq(v(184), v(1019)));
EPILEPSY_assert(EPILEPSY_uintNeq(v(603), v(16)));
// }

// EPILEPSY_uintGreater {
EPILEPSY_assert(EPILEPSY_uintGreater(v(1), v(0)));
// TODO: fix reaching limit. EPILEPSY_assert(EPILEPSY_uintGreater(v(1023), v(0)));
EPILEPSY_assert(EPILEPSY_uintGreater(v(5), v(4)));
EPILEPSY_assert(EPILEPSY_uintGreater(v(147), v(80)));
// TODO: fix reaching limit. EPILEPSY_assert(EPILEPSY_uintGreater(v(619), v(401)));
// }

// EPILEPSY_uintLesser {
EPILEPSY_assert(EPILEPSY_uintLesser(v(0), v(1)));
// TODO: fix reaching limit. EPILEPSY_assert(EPILEPSY_uintLesser(v(0), v(1023)));
EPILEPSY_assert(EPILEPSY_uintLesser(v(19), v(25)));
EPILEPSY_assert(EPILEPSY_uintLesser(v(109), v(110)));
EPILEPSY_assert(EPILEPSY_uintLesser(v(817), v(1003)));
// }

// EPILEPSY_uintGreaterEq {
EPILEPSY_assert(EPILEPSY_uintGreaterEq(v(0), v(0)));
EPILEPSY_assert(EPILEPSY_uintGreaterEq(v(18), v(18)));
EPILEPSY_assert(EPILEPSY_uintGreaterEq(v(175), v(175)));
EPILEPSY_assert(EPILEPSY_uintGreaterEq(v(1023), v(1023)));

EPILEPSY_assert(EPILEPSY_uintGreaterEq(v(1), v(0)));
// TODO: fix reaching limit. EPILEPSY_assert(EPILEPSY_uintGreaterEq(v(1023), v(0)));
EPILEPSY_assert(EPILEPSY_uintGreaterEq(v(19), v(10)));
// TODO: fix reaching limit. EPILEPSY_assert(EPILEPSY_uintGreaterEq(v(760), v(508)));
// }

// EPILEPSY_uintLesserEq {
EPILEPSY_assert(EPILEPSY_uintLesserEq(v(0), v(0)));
EPILEPSY_assert(EPILEPSY_uintLesserEq(v(2), v(2)));
EPILEPSY_assert(EPILEPSY_uintLesserEq(v(1), v(1)));
EPILEPSY_assert(EPILEPSY_uintLesserEq(v(25), v(25)));
EPILEPSY_assert(EPILEPSY_uintLesserEq(v(498), v(498)));

EPILEPSY_assert(EPILEPSY_uintLesserEq(v(0), v(1)));
// TODO: fix reaching limit. EPILEPSY_assert(EPILEPSY_uintLesserEq(v(0), v(1023)));
EPILEPSY_assert(EPILEPSY_uintLesserEq(v(18), v(27)));
EPILEPSY_assert(EPILEPSY_uintLesserEq(v(82), v(90)));
EPILEPSY_assert(EPILEPSY_uintLesserEq(v(345), v(346)));
EPILEPSY_assert(EPILEPSY_uintLesserEq(v(901), v(1023)));
// }

// EPILEPSY_uintAdd {

// Basic tests {
EPILEPSY_assertEq(EPILEPSY_uintAdd(v(0), v(0)), v(0));
EPILEPSY_assertEq(EPILEPSY_uintAdd(v(19), v(83)), v(19 + 83));
EPILEPSY_assertEq(EPILEPSY_uintAdd(v(8), v(4)), v(8 + 4));
// TODO: fix reaching limit. EPILEPSY_assertEq(EPILEPSY_uintAdd(v(1), v(1022)), v(1 + 1022));
// }

// Commutativity {
EPILEPSY_assertEq(EPILEPSY_uintAdd(v(1), v(2)), EPILEPSY_uintAdd(v(2), v(1)));
EPILEPSY_assertEq(EPILEPSY_uintAdd(v(18), v(14)), EPILEPSY_uintAdd(v(14), v(18)));
EPILEPSY_assertEq(EPILEPSY_uintAdd(v(181), v(30)), EPILEPSY_uintAdd(v(30), v(181)));
// TODO: fix reaching limit. EPILEPSY_assertEq(EPILEPSY_uintAdd(v(1), v(1022)),
// EPILEPSY_uintAdd(v(1022), v(1)));
// }

// Associativity {
// 0 + (1 + 2) = (0 + 1) + 2
EPILEPSY_assertEq(
    EPILEPSY_uintAdd(v(0), EPILEPSY_uintAdd(v(1), v(2))),
    EPILEPSY_uintAdd(EPILEPSY_uintAdd(v(0), v(1)), v(2)));

// 16 + (8 + 1) = (16 + 8) + 1
EPILEPSY_assertEq(
    EPILEPSY_uintAdd(v(16), EPILEPSY_uintAdd(v(8), v(1))),
    EPILEPSY_uintAdd(EPILEPSY_uintAdd(v(16), v(8)), v(1)));

// 1020 + (1 + 2) = (1020 + 1) + 2
EPILEPSY_assertEq(
    EPILEPSY_uintAdd(v(1020), EPILEPSY_uintAdd(v(1), v(2))),
    EPILEPSY_uintAdd(EPILEPSY_uintAdd(v(1020), v(1)), v(2)));
// }

// Identity element {
EPILEPSY_assertEq(EPILEPSY_uintAdd(v(1), v(0)), v(1));
EPILEPSY_assertEq(EPILEPSY_uintAdd(v(78), v(0)), v(78));
EPILEPSY_assertEq(EPILEPSY_uintAdd(v(256), v(0)), v(256));
EPILEPSY_assertEq(EPILEPSY_uintAdd(v(1023), v(0)), v(1023));

EPILEPSY_assertEq(EPILEPSY_uintAdd(v(0), v(1)), v(1));
EPILEPSY_assertEq(EPILEPSY_uintAdd(v(0), v(78)), v(78));
EPILEPSY_assertEq(EPILEPSY_uintAdd(v(0), v(256)), v(256));
// TODO: fix reaching limit. EPILEPSY_assertEq(EPILEPSY_uintAdd(v(0), v(1023)), v(1023));
// }

// } (EPILEPSY_uintAdd)

// EPILEPSY_uintAddVariadics {
EPILEPSY_assertEq(EPILEPSY_uintAddVariadics(v(0)), v(0));
EPILEPSY_assertEq(EPILEPSY_uintAddVariadics(v(1023)), v(1023));
// TODO: fix reaching limit. EPILEPSY_assertEq(EPILEPSY_uintAddVariadics(v(1, 2, 3, 4, 5)), v(1 + 2
// + 3 + 4 + 5));
// }

// EPILEPSY_uintSub {

EPILEPSY_assertEq(EPILEPSY_uintSub(v(105), v(19)), v(105 - 19));

// } (EPILEPSY_uintSub)

// EPILEPSY_uintSubVariadics {
EPILEPSY_assertEq(EPILEPSY_uintSubVariadics(v(0)), v(0));
EPILEPSY_assertEq(EPILEPSY_uintSubVariadics(v(1023)), v(1023));
// TODO: fix reaching limit. EPILEPSY_assertEq(EPILEPSY_uintSubVariadics(v(198, 13, 29, 10, 1)),
// v(198 - 13 - 29 - 10 - 1));
// }

// EPILEPSY_uintMul {

EPILEPSY_assertEq(EPILEPSY_uintMul(v(15), v(8)), v(15 * 8));

// } (EPILEPSY_uintMul)

// EPILEPSY_uintMulVariadics {
EPILEPSY_assertEq(EPILEPSY_uintMulVariadics(v(0)), v(0));
EPILEPSY_assertEq(EPILEPSY_uintMulVariadics(v(1023)), v(1023));
// TODO: fix reaching limit. EPILEPSY_assertEq(EPILEPSY_uintMulVariadics(v(6, 1, 9, 4)), v(6 * 1 *
// 9 * 4));
// }
