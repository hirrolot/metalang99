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

// ML99_DETECT_IDENT {
#define FOO_x ()
#define FOO_y ()

ML99_ASSERT_UNEVAL(ML99_DETECT_IDENT(FOO_, x));
ML99_ASSERT_UNEVAL(ML99_DETECT_IDENT(FOO_, y));
ML99_ASSERT_UNEVAL(!ML99_DETECT_IDENT(FOO_, z));

ML99_ASSERT_UNEVAL(!ML99_DETECT_IDENT(BAR_, x));
ML99_ASSERT_UNEVAL(!ML99_DETECT_IDENT(BAR_, abc));
ML99_ASSERT_UNEVAL(!ML99_DETECT_IDENT(BAR_, defghi));

#undef FOO_x
#undef FOO_y
// }

// ML99_DETECTOR {
#define TEST(ident)                                                                                \
    ML99_ASSERT_UNEVAL(                                                                            \
        ML99_DETECT_IDENT(ML99_DETECTOR(ident), ident) &&                                          \
        !ML99_DETECT_IDENT(ML99_DETECTOR(ident), blah) &&                                          \
        !ML99_DETECT_IDENT(ML99_DETECTOR(ident), ML99_EMPTY()))

TEST(auto);
TEST(break);
TEST(case);
TEST(char);
TEST(const);
TEST(continue);
TEST(default);
TEST(do);
TEST(double);
TEST(else);
TEST(enum);
TEST(extern);
TEST(float);
TEST(for);
TEST(goto);
TEST(if);
TEST(inline);
TEST(int);
TEST(long);
TEST(register);
TEST(restrict);
// clang-format off
TEST(return);
// clang-format on
TEST(short);
TEST(signed);
TEST(sizeof);
TEST(static);
TEST(struct);
TEST(switch);
TEST(typedef);
TEST(union);
TEST(unsigned);
TEST(void);
TEST(volatile);
TEST(while);
TEST(_Alignas);
TEST(_Alignof);
TEST(_Atomic);
TEST(_Bool);
TEST(_Complex);
TEST(_Generic);
TEST(_Imaginary);
TEST(_Noreturn);
TEST(_Static_assert);
TEST(_Thread_local);
TEST(_);

#undef TEST

ML99_ASSERT_UNEVAL(!ML99_DETECT_IDENT(ML99_DETECTOR(restrict), void));
ML99_ASSERT_UNEVAL(!ML99_DETECT_IDENT(ML99_DETECTOR(case), while));
ML99_ASSERT_UNEVAL(!ML99_DETECT_IDENT(ML99_DETECTOR(volatile), _Alignof));
ML99_ASSERT_UNEVAL(!ML99_DETECT_IDENT(ML99_DETECTOR(_Generic), _Alignas));
ML99_ASSERT_UNEVAL(!ML99_DETECT_IDENT(ML99_DETECTOR(_), _Bool));
// }

// ML99_UPDATE_COUNTER, ML99_COUNTER {
#include ML99_UPDATE_COUNTER(~, ~, ~)
ML99_ASSERT_UNEVAL(ML99_COUNTER(~, ~, ~) == 0);

#include ML99_UPDATE_COUNTER()
ML99_ASSERT_UNEVAL(ML99_COUNTER() == 1);

#include ML99_UPDATE_COUNTER()
ML99_ASSERT_UNEVAL(ML99_COUNTER() == 2);

#include ML99_UPDATE_COUNTER()
ML99_ASSERT_UNEVAL(ML99_COUNTER() == 3);

#include ML99_UPDATE_COUNTER()
ML99_ASSERT_UNEVAL(ML99_COUNTER() == 4);

#include ML99_UPDATE_COUNTER()
ML99_ASSERT_UNEVAL(ML99_COUNTER() == 5);

#include ML99_UPDATE_COUNTER()
ML99_ASSERT_UNEVAL(ML99_COUNTER() == 6);

#include ML99_UPDATE_COUNTER()
ML99_ASSERT_UNEVAL(ML99_COUNTER() == 7);

#include ML99_UPDATE_COUNTER()
ML99_ASSERT_UNEVAL(ML99_COUNTER() == 8);

#include ML99_UPDATE_COUNTER()
ML99_ASSERT_UNEVAL(ML99_COUNTER() == 9);
// }

int main(void) {}
