#include <epilepsy/assert.h>
#include <epilepsy/uint.h>

// epUIntInc {
epAssertEq(epUIntInc(v(0)), v(1));
epAssertEq(epUIntInc(v(15)), v(16));
epAssertEq(epUIntInc(v(198)), v(199));
epAssertEq(epUIntInc(v(1022)), v(1023));
// }

// epUIntDec {
epAssertEq(epUIntDec(v(1)), v(0));
epAssertEq(epUIntDec(v(71)), v(70));
epAssertEq(epUIntDec(v(918)), v(917));
epAssertEq(epUIntDec(v(1023)), v(1022));
// }

// epUIntEq {
epAssert(epUIntEq(v(0), v(0)));
epAssert(epUIntEq(v(18), v(18)));
epAssert(epUIntEq(v(910), v(910)));
epAssert(epUIntEq(v(1023), v(1023)));
// }

// epUIntNeq {
epAssert(epUIntNeq(v(0), v(1)));
epAssert(epUIntNeq(v(0), v(1023)));
epAssert(epUIntNeq(v(1), v(34)));
epAssert(epUIntNeq(v(184), v(1019)));
epAssert(epUIntNeq(v(603), v(16)));
// }

// epUIntGreater {
epAssert(epUIntGreater(v(1), v(0)));
// TODO: fix reaching limit. epAssert(epUIntGreater(v(1023), v(0)));
epAssert(epUIntGreater(v(5), v(4)));
epAssert(epUIntGreater(v(147), v(80)));
// TODO: fix reaching limit. epAssert(epUIntGreater(v(619), v(401)));
// }

// epUIntLesser {
epAssert(epUIntLesser(v(0), v(1)));
// TODO: fix reaching limit. epAssert(epUIntLesser(v(0), v(1023)));
epAssert(epUIntLesser(v(19), v(25)));
epAssert(epUIntLesser(v(109), v(110)));
epAssert(epUIntLesser(v(817), v(1003)));
// }

// epUIntGreaterEq {
epAssert(epUIntGreaterEq(v(0), v(0)));
epAssert(epUIntGreaterEq(v(18), v(18)));
epAssert(epUIntGreaterEq(v(175), v(175)));
epAssert(epUIntGreaterEq(v(1023), v(1023)));

epAssert(epUIntGreaterEq(v(1), v(0)));
// TODO: fix reaching limit. epAssert(epUIntGreaterEq(v(1023), v(0)));
epAssert(epUIntGreaterEq(v(19), v(10)));
// TODO: fix reaching limit. epAssert(epUIntGreaterEq(v(760), v(508)));
// }

// epUIntLesserEq {
epAssert(epUIntLesserEq(v(0), v(0)));
epAssert(epUIntLesserEq(v(2), v(2)));
epAssert(epUIntLesserEq(v(1), v(1)));
epAssert(epUIntLesserEq(v(25), v(25)));
epAssert(epUIntLesserEq(v(498), v(498)));

epAssert(epUIntLesserEq(v(0), v(1)));
// TODO: fix reaching limit. epAssert(epUIntLesserEq(v(0), v(1023)));
epAssert(epUIntLesserEq(v(18), v(27)));
epAssert(epUIntLesserEq(v(82), v(90)));
epAssert(epUIntLesserEq(v(345), v(346)));
epAssert(epUIntLesserEq(v(901), v(1023)));
// }

// epUIntAdd {

// Basic tests {
epAssertEq(epUIntAdd(v(0), v(0)), v(0));
epAssertEq(epUIntAdd(v(19), v(83)), v(19 + 83));
epAssertEq(epUIntAdd(v(8), v(4)), v(8 + 4));
// TODO: fix reaching limit. epAssertEq(epUIntAdd(v(1), v(1022)), v(1 + 1022));
// }

// Commutativity {
epAssertEq(epUIntAdd(v(1), v(2)), epUIntAdd(v(2), v(1)));
epAssertEq(epUIntAdd(v(18), v(14)), epUIntAdd(v(14), v(18)));
epAssertEq(epUIntAdd(v(181), v(30)), epUIntAdd(v(30), v(181)));
// TODO: fix reaching limit. epAssertEq(epUIntAdd(v(1), v(1022)),
// epUIntAdd(v(1022), v(1)));
// }

// Associativity {
// 0 + (1 + 2) = (0 + 1) + 2
epAssertEq(epUIntAdd(v(0), epUIntAdd(v(1), v(2))), epUIntAdd(epUIntAdd(v(0), v(1)), v(2)));

// 16 + (8 + 1) = (16 + 8) + 1
epAssertEq(epUIntAdd(v(16), epUIntAdd(v(8), v(1))), epUIntAdd(epUIntAdd(v(16), v(8)), v(1)));

// 1020 + (1 + 2) = (1020 + 1) + 2
epAssertEq(epUIntAdd(v(1020), epUIntAdd(v(1), v(2))), epUIntAdd(epUIntAdd(v(1020), v(1)), v(2)));
// }

// Identity element {
epAssertEq(epUIntAdd(v(1), v(0)), v(1));
epAssertEq(epUIntAdd(v(78), v(0)), v(78));
epAssertEq(epUIntAdd(v(256), v(0)), v(256));
epAssertEq(epUIntAdd(v(1023), v(0)), v(1023));

epAssertEq(epUIntAdd(v(0), v(1)), v(1));
epAssertEq(epUIntAdd(v(0), v(78)), v(78));
epAssertEq(epUIntAdd(v(0), v(256)), v(256));
// TODO: fix reaching limit. epAssertEq(epUIntAdd(v(0), v(1023)), v(1023));
// }

// } (epUIntAdd)

// epUIntAddVariadics {
epAssertEq(epUIntAddVariadics(v(0)), v(0));
epAssertEq(epUIntAddVariadics(v(1023)), v(1023));
// TODO: fix reaching limit. epAssertEq(epUIntAddVariadics(v(1, 2, 3, 4, 5)), v(1 + 2
// + 3 + 4 + 5));
// }

// epUIntSub {

epAssertEq(epUIntSub(v(105), v(19)), v(105 - 19));

// } (epUIntSub)

// epUIntSubVariadics {
epAssertEq(epUIntSubVariadics(v(0)), v(0));
epAssertEq(epUIntSubVariadics(v(1023)), v(1023));
// TODO: fix reaching limit. epAssertEq(epUIntSubVariadics(v(198, 13, 29, 10, 1)),
// v(198 - 13 - 29 - 10 - 1));
// }

// epUIntMul {

epAssertEq(epUIntMul(v(15), v(8)), v(15 * 8));

// } (epUIntMul)

// epUIntMulVariadics {
epAssertEq(epUIntMulVariadics(v(0)), v(0));
epAssertEq(epUIntMulVariadics(v(1023)), v(1023));
// TODO: fix reaching limit. epAssertEq(epUIntMulVariadics(v(6, 1, 9, 4)), v(6 * 1 *
// 9 * 4));
// }
