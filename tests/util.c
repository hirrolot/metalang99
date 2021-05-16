#include <metalang99/assert.h>
#include <metalang99/util.h>

// ML99_id {
#define CHECK(x, y) ML99_ASSERT_UNEVAL(x == 518 && y == 1910)

ML99_EVAL(v(CHECK), ML99_id(v((518, 1910))));
ML99_ASSERT_EQ(ML99_appl(ML99_compose(v(ML99_id), v(ML99_id)), v(181)), v(181));

#undef CHECK
// }

// ML99_const {
ML99_ASSERT_EQ(ML99_appl2(v(ML99_const), v(1810), v(~)), v(1810));
// }

// ML99_flip {
#define ABC ML99_true()

ML99_ASSERT(ML99_appl2(ML99_flip(v(ML99_catEval)), v(C), v(AB)));

#undef ABC
// }

// ML99_uncomma {
ML99_ASSERT_EMPTY(ML99_uncomma(ML99_QUOTE(v())));
ML99_ASSERT_EQ(ML99_uncomma(ML99_QUOTE(v(1), v(+), v(2), v(+), v(3))), v(1 + 2 + 3));
// }

// ML99_reify {
#define F(x, y, z) x + y + z

ML99_ASSERT_EQ(ML99_appl(ML99_reify(v(F)), v(1, 2, 3)), v(1 + 2 + 3));

#undef F
// }

// ML99_empty {
ML99_ASSERT_EMPTY(ML99_empty(v()));
ML99_ASSERT_EMPTY(ML99_empty(v(1, 2, 3)));
// }

int main(void) {}
