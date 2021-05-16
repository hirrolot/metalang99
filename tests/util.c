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

ML99_ASSERT(ML99_detectIdent(v(FOO_), v(x)));
ML99_ASSERT(ML99_not(ML99_detectIdent(v(BAR_), v(x))));

#undef FOO_x
#undef FOO_y
// }

// ML99_IDENT_EQ {
#define FOO_x_x ()
#define FOO_y_y ()

ML99_ASSERT_UNEVAL(ML99_IDENT_EQ(FOO_, x, x));
ML99_ASSERT_UNEVAL(ML99_IDENT_EQ(FOO_, y, y));

ML99_ASSERT_UNEVAL(!ML99_IDENT_EQ(FOO_, x, y));
ML99_ASSERT_UNEVAL(!ML99_IDENT_EQ(FOO_, abc, d));
ML99_ASSERT_UNEVAL(!ML99_IDENT_EQ(FOO_, x, ML99_EMPTY()));
ML99_ASSERT_UNEVAL(!ML99_IDENT_EQ(FOO_, ML99_EMPTY(), y));
ML99_ASSERT_UNEVAL(!ML99_IDENT_EQ(FOO_, ML99_EMPTY(), ML99_EMPTY()));

ML99_ASSERT(ML99_identEq(v(FOO_), v(x), v(x)));
ML99_ASSERT(ML99_not(ML99_identEq(v(FOO_), v(x), v(y))));

#undef FOO_x_x
#undef FOO_y_y
// }

// ML99_C_KEYWORD_DETECTOR {
#define TEST(keyword)                                                                              \
    ML99_ASSERT_UNEVAL(                                                                            \
        ML99_IDENT_EQ(ML99_C_KEYWORD_DETECTOR, keyword, keyword) &&                                \
        !ML99_IDENT_EQ(ML99_C_KEYWORD_DETECTOR, keyword, blah) &&                                  \
        !ML99_IDENT_EQ(ML99_C_KEYWORD_DETECTOR, keyword, ML99_EMPTY()) &&                          \
        !ML99_IDENT_EQ(ML99_C_KEYWORD_DETECTOR, ML99_EMPTY(), keyword))

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

#undef TEST

ML99_ASSERT_UNEVAL(!ML99_IDENT_EQ(ML99_C_KEYWORD_DETECTOR, restrict, void));
ML99_ASSERT_UNEVAL(!ML99_IDENT_EQ(ML99_C_KEYWORD_DETECTOR, case, while));
ML99_ASSERT_UNEVAL(!ML99_IDENT_EQ(ML99_C_KEYWORD_DETECTOR, volatile, _Alignof));
ML99_ASSERT_UNEVAL(!ML99_IDENT_EQ(ML99_C_KEYWORD_DETECTOR, _Generic, _Alignas));

ML99_ASSERT(ML99_identEq(v(ML99_C_KEYWORD_DETECTOR), v(_Bool), v(_Bool)));
ML99_ASSERT(ML99_not(ML99_identEq(v(ML99_C_KEYWORD_DETECTOR), v(_Atomic), v(_Bool))));
// }

// ML99_UNDERSCORE_DETECTOR {
ML99_ASSERT(ML99_detectIdent(v(ML99_UNDERSCORE_DETECTOR), v(_)));
ML99_ASSERT(ML99_not(ML99_detectIdent(v(ML99_UNDERSCORE_DETECTOR), v(blah))));
ML99_ASSERT(ML99_not(ML99_detectIdent(v(ML99_UNDERSCORE_DETECTOR), ML99_empty())));
// }

// ML99_LOWERCASE_DETECTOR {
ML99_ASSERT(ML99_identEq(v(ML99_LOWERCASE_DETECTOR), v(a), v(a)));
ML99_ASSERT(ML99_identEq(v(ML99_LOWERCASE_DETECTOR), v(b), v(b)));
ML99_ASSERT(ML99_identEq(v(ML99_LOWERCASE_DETECTOR), v(c), v(c)));
ML99_ASSERT(ML99_identEq(v(ML99_LOWERCASE_DETECTOR), v(d), v(d)));
ML99_ASSERT(ML99_identEq(v(ML99_LOWERCASE_DETECTOR), v(e), v(e)));
ML99_ASSERT(ML99_identEq(v(ML99_LOWERCASE_DETECTOR), v(f), v(f)));
ML99_ASSERT(ML99_identEq(v(ML99_LOWERCASE_DETECTOR), v(g), v(g)));
ML99_ASSERT(ML99_identEq(v(ML99_LOWERCASE_DETECTOR), v(h), v(h)));
ML99_ASSERT(ML99_identEq(v(ML99_LOWERCASE_DETECTOR), v(i), v(i)));
ML99_ASSERT(ML99_identEq(v(ML99_LOWERCASE_DETECTOR), v(j), v(j)));
ML99_ASSERT(ML99_identEq(v(ML99_LOWERCASE_DETECTOR), v(k), v(k)));
ML99_ASSERT(ML99_identEq(v(ML99_LOWERCASE_DETECTOR), v(l), v(l)));
ML99_ASSERT(ML99_identEq(v(ML99_LOWERCASE_DETECTOR), v(m), v(m)));
ML99_ASSERT(ML99_identEq(v(ML99_LOWERCASE_DETECTOR), v(n), v(n)));
ML99_ASSERT(ML99_identEq(v(ML99_LOWERCASE_DETECTOR), v(o), v(o)));
ML99_ASSERT(ML99_identEq(v(ML99_LOWERCASE_DETECTOR), v(p), v(p)));
ML99_ASSERT(ML99_identEq(v(ML99_LOWERCASE_DETECTOR), v(q), v(q)));
ML99_ASSERT(ML99_identEq(v(ML99_LOWERCASE_DETECTOR), v(r), v(r)));
ML99_ASSERT(ML99_identEq(v(ML99_LOWERCASE_DETECTOR), v(s), v(s)));
ML99_ASSERT(ML99_identEq(v(ML99_LOWERCASE_DETECTOR), v(t), v(t)));
ML99_ASSERT(ML99_identEq(v(ML99_LOWERCASE_DETECTOR), v(u), v(u)));
ML99_ASSERT(ML99_identEq(v(ML99_LOWERCASE_DETECTOR), v(v), v(v)));
ML99_ASSERT(ML99_identEq(v(ML99_LOWERCASE_DETECTOR), v(w), v(w)));
ML99_ASSERT(ML99_identEq(v(ML99_LOWERCASE_DETECTOR), v(x), v(x)));
ML99_ASSERT(ML99_identEq(v(ML99_LOWERCASE_DETECTOR), v(y), v(y)));
ML99_ASSERT(ML99_identEq(v(ML99_LOWERCASE_DETECTOR), v(z), v(z)));
// }

// ML99_UPPERCASE_DETECTOR {
ML99_ASSERT(ML99_identEq(v(ML99_UPPERCASE_DETECTOR), v(A), v(A)));
ML99_ASSERT(ML99_identEq(v(ML99_UPPERCASE_DETECTOR), v(B), v(B)));
ML99_ASSERT(ML99_identEq(v(ML99_UPPERCASE_DETECTOR), v(C), v(C)));
ML99_ASSERT(ML99_identEq(v(ML99_UPPERCASE_DETECTOR), v(D), v(D)));
ML99_ASSERT(ML99_identEq(v(ML99_UPPERCASE_DETECTOR), v(E), v(E)));
ML99_ASSERT(ML99_identEq(v(ML99_UPPERCASE_DETECTOR), v(F), v(F)));
ML99_ASSERT(ML99_identEq(v(ML99_UPPERCASE_DETECTOR), v(G), v(G)));
ML99_ASSERT(ML99_identEq(v(ML99_UPPERCASE_DETECTOR), v(H), v(H)));
ML99_ASSERT(ML99_identEq(v(ML99_UPPERCASE_DETECTOR), v(I), v(I)));
ML99_ASSERT(ML99_identEq(v(ML99_UPPERCASE_DETECTOR), v(J), v(J)));
ML99_ASSERT(ML99_identEq(v(ML99_UPPERCASE_DETECTOR), v(K), v(K)));
ML99_ASSERT(ML99_identEq(v(ML99_UPPERCASE_DETECTOR), v(L), v(L)));
ML99_ASSERT(ML99_identEq(v(ML99_UPPERCASE_DETECTOR), v(M), v(M)));
ML99_ASSERT(ML99_identEq(v(ML99_UPPERCASE_DETECTOR), v(N), v(N)));
ML99_ASSERT(ML99_identEq(v(ML99_UPPERCASE_DETECTOR), v(O), v(O)));
ML99_ASSERT(ML99_identEq(v(ML99_UPPERCASE_DETECTOR), v(P), v(P)));
ML99_ASSERT(ML99_identEq(v(ML99_UPPERCASE_DETECTOR), v(Q), v(Q)));
ML99_ASSERT(ML99_identEq(v(ML99_UPPERCASE_DETECTOR), v(R), v(R)));
ML99_ASSERT(ML99_identEq(v(ML99_UPPERCASE_DETECTOR), v(S), v(S)));
ML99_ASSERT(ML99_identEq(v(ML99_UPPERCASE_DETECTOR), v(T), v(T)));
ML99_ASSERT(ML99_identEq(v(ML99_UPPERCASE_DETECTOR), v(U), v(U)));
ML99_ASSERT(ML99_identEq(v(ML99_UPPERCASE_DETECTOR), v(V), v(V)));
ML99_ASSERT(ML99_identEq(v(ML99_UPPERCASE_DETECTOR), v(W), v(W)));
ML99_ASSERT(ML99_identEq(v(ML99_UPPERCASE_DETECTOR), v(X), v(X)));
ML99_ASSERT(ML99_identEq(v(ML99_UPPERCASE_DETECTOR), v(Y), v(Y)));
ML99_ASSERT(ML99_identEq(v(ML99_UPPERCASE_DETECTOR), v(Z), v(Z)));
// }

// ML99_DIGIT_DETECTOR {
ML99_ASSERT(ML99_identEq(v(ML99_DIGIT_DETECTOR), v(0), v(0)));
ML99_ASSERT(ML99_identEq(v(ML99_DIGIT_DETECTOR), v(1), v(1)));
ML99_ASSERT(ML99_identEq(v(ML99_DIGIT_DETECTOR), v(2), v(2)));
ML99_ASSERT(ML99_identEq(v(ML99_DIGIT_DETECTOR), v(3), v(3)));
ML99_ASSERT(ML99_identEq(v(ML99_DIGIT_DETECTOR), v(4), v(4)));
ML99_ASSERT(ML99_identEq(v(ML99_DIGIT_DETECTOR), v(5), v(5)));
ML99_ASSERT(ML99_identEq(v(ML99_DIGIT_DETECTOR), v(6), v(6)));
ML99_ASSERT(ML99_identEq(v(ML99_DIGIT_DETECTOR), v(7), v(7)));
ML99_ASSERT(ML99_identEq(v(ML99_DIGIT_DETECTOR), v(8), v(8)));
ML99_ASSERT(ML99_identEq(v(ML99_DIGIT_DETECTOR), v(9), v(9)));
// }

int main(void) {}
