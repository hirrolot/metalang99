#include <epilepsy/assert.h>
#include <epilepsy/uint.h>

// EPILEPSY_UIntInc {
EPILEPSY_ASSERT_EQ(EPILEPSY_UIntInc(v(0)), v(1));
EPILEPSY_ASSERT_EQ(EPILEPSY_UIntInc(v(15)), v(16));
EPILEPSY_ASSERT_EQ(EPILEPSY_UIntInc(v(198)), v(199));
EPILEPSY_ASSERT_EQ(EPILEPSY_UIntInc(v(1022)), v(1023));
// }

// EPILEPSY_UIntDec {
EPILEPSY_ASSERT_EQ(EPILEPSY_UIntDec(v(1)), v(0));
EPILEPSY_ASSERT_EQ(EPILEPSY_UIntDec(v(71)), v(70));
EPILEPSY_ASSERT_EQ(EPILEPSY_UIntDec(v(918)), v(917));
EPILEPSY_ASSERT_EQ(EPILEPSY_UIntDec(v(1023)), v(1022));
// }

// EPILEPSY_UIntEq {
EPILEPSY_ASSERT(EPILEPSY_UIntEq(v(0), v(0)));
EPILEPSY_ASSERT(EPILEPSY_UIntEq(v(18), v(18)));
EPILEPSY_ASSERT(EPILEPSY_UIntEq(v(910), v(910)));
EPILEPSY_ASSERT(EPILEPSY_UIntEq(v(1023), v(1023)));
// }

// EPILEPSY_UIntNeq {
EPILEPSY_ASSERT(EPILEPSY_UIntNeq(v(0), v(1)));
EPILEPSY_ASSERT(EPILEPSY_UIntNeq(v(0), v(1023)));
EPILEPSY_ASSERT(EPILEPSY_UIntNeq(v(1), v(34)));
EPILEPSY_ASSERT(EPILEPSY_UIntNeq(v(184), v(1019)));
EPILEPSY_ASSERT(EPILEPSY_UIntNeq(v(603), v(16)));
// }

// EPILEPSY_UIntGreater {
EPILEPSY_ASSERT(EPILEPSY_UIntGreater(v(1), v(0)));
// TODO: fix reaching limit. EPILEPSY_ASSERT(EPILEPSY_UIntGreater(v(1023), v(0)));
EPILEPSY_ASSERT(EPILEPSY_UIntGreater(v(5), v(4)));
EPILEPSY_ASSERT(EPILEPSY_UIntGreater(v(147), v(80)));
// TODO: fix reaching limit. EPILEPSY_ASSERT(EPILEPSY_UIntGreater(v(619), v(401)));
// }

// EPILEPSY_UIntLesser {
EPILEPSY_ASSERT(EPILEPSY_UIntLesser(v(0), v(1)));
// TODO: fix reaching limit. EPILEPSY_ASSERT(EPILEPSY_UIntLesser(v(0), v(1023)));
EPILEPSY_ASSERT(EPILEPSY_UIntLesser(v(19), v(25)));
EPILEPSY_ASSERT(EPILEPSY_UIntLesser(v(109), v(110)));
EPILEPSY_ASSERT(EPILEPSY_UIntLesser(v(817), v(1003)));
// }

// EPILEPSY_UIntGreaterEq {
EPILEPSY_ASSERT(EPILEPSY_UIntGreaterEq(v(0), v(0)));
EPILEPSY_ASSERT(EPILEPSY_UIntGreaterEq(v(18), v(18)));
EPILEPSY_ASSERT(EPILEPSY_UIntGreaterEq(v(175), v(175)));
EPILEPSY_ASSERT(EPILEPSY_UIntGreaterEq(v(1023), v(1023)));

EPILEPSY_ASSERT(EPILEPSY_UIntGreaterEq(v(1), v(0)));
// TODO: fix reaching limit. EPILEPSY_ASSERT(EPILEPSY_UIntGreaterEq(v(1023), v(0)));
EPILEPSY_ASSERT(EPILEPSY_UIntGreaterEq(v(19), v(10)));
// TODO: fix reaching limit. EPILEPSY_ASSERT(EPILEPSY_UIntGreaterEq(v(760), v(508)));
// }

// EPILEPSY_UIntLesserEq {
EPILEPSY_ASSERT(EPILEPSY_UIntLesserEq(v(0), v(0)));
EPILEPSY_ASSERT(EPILEPSY_UIntLesserEq(v(2), v(2)));
EPILEPSY_ASSERT(EPILEPSY_UIntLesserEq(v(1), v(1)));
EPILEPSY_ASSERT(EPILEPSY_UIntLesserEq(v(25), v(25)));
EPILEPSY_ASSERT(EPILEPSY_UIntLesserEq(v(498), v(498)));

EPILEPSY_ASSERT(EPILEPSY_UIntLesserEq(v(0), v(1)));
// TODO: fix reaching limit. EPILEPSY_ASSERT(EPILEPSY_UIntLesserEq(v(0), v(1023)));
EPILEPSY_ASSERT(EPILEPSY_UIntLesserEq(v(18), v(27)));
EPILEPSY_ASSERT(EPILEPSY_UIntLesserEq(v(82), v(90)));
EPILEPSY_ASSERT(EPILEPSY_UIntLesserEq(v(345), v(346)));
EPILEPSY_ASSERT(EPILEPSY_UIntLesserEq(v(901), v(1023)));
// }

// EPILEPSY_UIntAdd {

// Basic tests {
EPILEPSY_ASSERT_EQ(EPILEPSY_UIntAdd(v(0), v(0)), v(0));
EPILEPSY_ASSERT_EQ(EPILEPSY_UIntAdd(v(19), v(83)), v(19 + 83));
EPILEPSY_ASSERT_EQ(EPILEPSY_UIntAdd(v(8), v(4)), v(8 + 4));
// TODO: fix reaching limit. EPILEPSY_ASSERT_EQ(EPILEPSY_UIntAdd(v(1), v(1022)), v(1 + 1022));
// }

// Commutativity {
EPILEPSY_ASSERT_EQ(EPILEPSY_UIntAdd(v(1), v(2)), EPILEPSY_UIntAdd(v(2), v(1)));
EPILEPSY_ASSERT_EQ(EPILEPSY_UIntAdd(v(18), v(14)), EPILEPSY_UIntAdd(v(14), v(18)));
EPILEPSY_ASSERT_EQ(EPILEPSY_UIntAdd(v(181), v(30)), EPILEPSY_UIntAdd(v(30), v(181)));
// TODO: fix reaching limit. EPILEPSY_ASSERT_EQ(EPILEPSY_UIntAdd(v(1), v(1022)),
// EPILEPSY_UIntAdd(v(1022), v(1)));
// }

// Associativity {
// 0 + (1 + 2) = (0 + 1) + 2
EPILEPSY_ASSERT_EQ(
    EPILEPSY_UIntAdd(v(0), EPILEPSY_UIntAdd(v(1), v(2))),
    EPILEPSY_UIntAdd(EPILEPSY_UIntAdd(v(0), v(1)), v(2)));

// 16 + (8 + 1) = (16 + 8) + 1
EPILEPSY_ASSERT_EQ(
    EPILEPSY_UIntAdd(v(16), EPILEPSY_UIntAdd(v(8), v(1))),
    EPILEPSY_UIntAdd(EPILEPSY_UIntAdd(v(16), v(8)), v(1)));

// 1020 + (1 + 2) = (1020 + 1) + 2
EPILEPSY_ASSERT_EQ(
    EPILEPSY_UIntAdd(v(1020), EPILEPSY_UIntAdd(v(1), v(2))),
    EPILEPSY_UIntAdd(EPILEPSY_UIntAdd(v(1020), v(1)), v(2)));
// }

// Identity element {
EPILEPSY_ASSERT_EQ(EPILEPSY_UIntAdd(v(1), v(0)), v(1));
EPILEPSY_ASSERT_EQ(EPILEPSY_UIntAdd(v(78), v(0)), v(78));
EPILEPSY_ASSERT_EQ(EPILEPSY_UIntAdd(v(256), v(0)), v(256));
EPILEPSY_ASSERT_EQ(EPILEPSY_UIntAdd(v(1023), v(0)), v(1023));

EPILEPSY_ASSERT_EQ(EPILEPSY_UIntAdd(v(0), v(1)), v(1));
EPILEPSY_ASSERT_EQ(EPILEPSY_UIntAdd(v(0), v(78)), v(78));
EPILEPSY_ASSERT_EQ(EPILEPSY_UIntAdd(v(0), v(256)), v(256));
// TODO: fix reaching limit. EPILEPSY_ASSERT_EQ(EPILEPSY_UIntAdd(v(0), v(1023)), v(1023));
// }

// } (EPILEPSY_UIntAdd)

// EPILEPSY_UIntAddVariadics {
EPILEPSY_ASSERT_EQ(EPILEPSY_UIntAddVariadics(v(0)), v(0));
EPILEPSY_ASSERT_EQ(EPILEPSY_UIntAddVariadics(v(1023)), v(1023));
// TODO: fix reaching limit. EPILEPSY_ASSERT_EQ(EPILEPSY_UIntAddVariadics(v(1, 2, 3, 4, 5)), v(1 + 2
// + 3 + 4 + 5));
// }

// EPILEPSY_UIntSub {

EPILEPSY_ASSERT_EQ(EPILEPSY_UIntSub(v(105), v(19)), v(105 - 19));

// } (EPILEPSY_UIntSub)

// EPILEPSY_UIntSubVariadics {
EPILEPSY_ASSERT_EQ(EPILEPSY_UIntSubVariadics(v(0)), v(0));
EPILEPSY_ASSERT_EQ(EPILEPSY_UIntSubVariadics(v(1023)), v(1023));
// TODO: fix reaching limit. EPILEPSY_ASSERT_EQ(EPILEPSY_UIntSubVariadics(v(198, 13, 29, 10, 1)),
// v(198 - 13 - 29 - 10 - 1));
// }

// EPILEPSY_UIntMul {

EPILEPSY_ASSERT_EQ(EPILEPSY_UIntMul(v(15), v(8)), v(15 * 8));

// } (EPILEPSY_UIntMul)

// EPILEPSY_UIntMulVariadics {
EPILEPSY_ASSERT_EQ(EPILEPSY_UIntMulVariadics(v(0)), v(0));
EPILEPSY_ASSERT_EQ(EPILEPSY_UIntMulVariadics(v(1023)), v(1023));
// TODO: fix reaching limit. EPILEPSY_ASSERT_EQ(EPILEPSY_UIntMulVariadics(v(6, 1, 9, 4)), v(6 * 1 *
// 9 * 4));
// }
