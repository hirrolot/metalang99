#include <metalang99/assert.h>
#include <metalang99/util.h>

int main(void) {

    // ML99_cat, ML99_cat(3|4)
    {
        ML99_ASSERT_EQ(ML99_cat(v(12), v(345)), v(12345));
        ML99_ASSERT_EQ(ML99_cat3(v(12), v(3), v(45)), v(12345));
        ML99_ASSERT_EQ(ML99_cat4(v(12), v(3), v(4), v(5)), v(12345));
    }

    // ML99_CAT, ML99_CAT(3|4)
    {
        ML99_ASSERT_UNEVAL(ML99_CAT(12, 345) == 12345);
        ML99_ASSERT_UNEVAL(ML99_CAT3(12, 3, 45) == 12345);
        ML99_ASSERT_UNEVAL(ML99_CAT4(12, 3, 4, 5) == 12345);
    }

#define CHECK(x, y)        ML99_ASSERT_UNEVAL(x == 518 && y == 1910)
#define CHECK_EXPAND(args) CHECK args

    // ML99_id
    {
        ML99_ASSERT_EMPTY(ML99_id(v()));
        CHECK_EXPAND(ML99_EVAL(ML99_id(v((518, 1910)))));
        ML99_ASSERT_EQ(ML99_appl(ML99_compose(v(ML99_id), v(ML99_id)), v(181)), v(181));
    }

#undef CHECK
#undef CHECK_EXPAND

    // ML99_ID
    {
        ML99_ASSERT_EMPTY_UNEVAL(ML99_ID());
        ML99_ASSERT_UNEVAL(ML99_ID(123) == 123);
    }

    // ML99_const
    { ML99_ASSERT_EQ(ML99_appl2(v(ML99_const), v(1810), v(~)), v(1810)); }

#define ABC ML99_true()

    // ML99_flip
    { ML99_ASSERT(ML99_appl2(ML99_flip(v(ML99_catEval)), v(C), v(AB))); }

#undef ABC

    // ML99_uncomma
    {
        ML99_ASSERT_EMPTY(ML99_uncomma(ML99_QUOTE(v())));
        ML99_ASSERT_EQ(ML99_uncomma(ML99_QUOTE(v(1), v(+), v(2), v(+), v(3))), v(1 + 2 + 3));
    }

#define F(x, y, z) x + y + z

    // ML99_reify
    { ML99_ASSERT_EQ(ML99_appl(ML99_reify(v(F)), v(1, 2, 3)), v(1 + 2 + 3)); }

#undef F

    // ML99_empty
    {
        ML99_ASSERT_EMPTY(ML99_empty(v()));
        ML99_ASSERT_EMPTY(ML99_empty(v(1, 2, 3)));
    }

    // ML99_EMPTY
    {
        ML99_ASSERT_EMPTY_UNEVAL(ML99_EMPTY());
        ML99_ASSERT_EMPTY_UNEVAL(ML99_EMPTY(1, 2, 3));
    }

#define F             3 ML99_RPAREN(~, ~, ~) + G ML99_LPAREN(~, ~, ~) 1, 2,
#define G(_1, _2, _3) _1##_2##_3

    // ML99_LPAREN, ML99_RPAREN
    {

        // G(1, 2, 3) + G(1, 2, 3) + G(1, 2, 3) + G(1, 2, 3)
        ML99_ASSERT_UNEVAL(ML99_ID(G ML99_LPAREN() 1, 2, F F F 3 ML99_RPAREN() == 123 * 4));
    }

#undef F
#undef G
}
