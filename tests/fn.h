#include <epilepsy/assert.h>
#include <epilepsy/eval.h>
#include <epilepsy/fn.h>
#include <epilepsy/lang.h>

#define F1(cx, x) v((x % cx))
#define F2(cx, x) v((cx - x))

EPILEPSY_ASSERT_EQ(
    EPILEPSY_APPLY(
        EPILEPSY_COMPOSE(EPILEPSY_CLOSURE(v(F1), v(5)), EPILEPSY_CLOSURE(v(F2), v(456))), v(6)),
    v((456 - 6) % 5));

#undef F1
#undef F2

#define F(x, y, z) v(x / y / z)

EPILEPSY_ASSERT_EQ(EPILEPSY_APPLY(EPILEPSY_LAMBDA(v(F)), v(30, 3, 5)), v(30 / 3 / 5));

#undef F
