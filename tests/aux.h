#include "test.h"

#include "../include/koshmar_pp/aux.h"

// KOSHMAR_PP_PRIMITIVE_STRINGIFY, KOSHMAR_PP_STRINGIFY

#define HELLO_MACRO      hello
#define HELLO_MACRO_SIZE 11 + 1
#define HELLO_SIZE       5 + 1

static const char stringified_0[] = KOSHMAR_PP_PRIMITIVE_STRINGIFY(HELLO_MACRO);
TEST(sizeof(stringified_0) == HELLO_MACRO_SIZE);

static const char stringified_1[] = KOSHMAR_PP_STRINGIFY(HELLO_MACRO);
TEST(sizeof(stringified_1) == HELLO_SIZE);

#undef HELLO_MACRO
#undef HELLO_MACRO_SIZE
#undef HELLO_SIZE

// KOSHMAR_PP_PRIMITIVE_CAT, KOSHMAR_PP_CAT

#define X          abc
#define Y          abcdef
#define CAT_0_SIZE 2 + 1
#define CAT_1_SIZE 9 + 1

static const char cat_0[] = KOSHMAR_PP_STRINGIFY(KOSHMAR_PP_PRIMITIVE_CAT(X, Y));
TEST(sizeof(cat_0) == CAT_0_SIZE);

static const char cat_1[] = KOSHMAR_PP_STRINGIFY(KOSHMAR_PP_CAT(X, Y));
TEST(sizeof(cat_1) == CAT_1_SIZE);

#undef X
#undef Y
#undef CAT_0_SIZE
#undef CAT_1_SIZE

// KOSHMAR_PP_CONSUME

KOSHMAR_PP_CONSUME(a, b, c)
KOSHMAR_PP_CONSUME(NULL "hey", 131.415, boom)
KOSHMAR_PP_CONSUME()

// KOSHMAR_PP_EXPAND, KOSHMAR_PP_DEFER

#define TEST_DEFER_0(_0, _1, expected)         TEST(_0 == expected);
#define TEST_DEFER_1(_0, _1, _2, expected)     TEST(_1 == expected);
#define TEST_DEFER_2(_0, _1, _2, _3, expected) TEST(_2 == expected);

#define X(blah)  blah, KOSHMAR_PP_DEFER(X_HOOK)()(blah)
#define X_HOOK() X

// X(4) ---> 4, X_HOOK ()(4)
KOSHMAR_PP_CALL_MACRO(TEST_DEFER_0, X(4), 4)
// KOSHMAR_PP_EXPAND(X(4)) ---> 4, 4, X_HOOK ()(4)
KOSHMAR_PP_CALL_MACRO(TEST_DEFER_1, KOSHMAR_PP_EXPAND(X(4)), 4)
/// KOSHMAR_PP_EXPAND(KOSHMAR_PP_EXPAND(X(4))) ---> 4, 4, 4, X_HOOK ()(4)
KOSHMAR_PP_CALL_MACRO(TEST_DEFER_2, KOSHMAR_PP_EXPAND(KOSHMAR_PP_EXPAND(X(4))), 4)

#undef TEST_DEFER_0
#undef TEST_DEFER_1
#undef TEST_DEFER_2
#undef X

// KOSHMAR_PP_EXPAND_2_TIMES, KOSHMAR_PP_DEFER_2_TIMES

#define TEST_DEFER_0(_0, _1, expected)         TEST(_0 == expected);
#define TEST_DEFER_1(_0, _1, _2, expected)     TEST(_1 == expected);
#define TEST_DEFER_2(_0, _1, _2, _3, expected) TEST(_2 == expected);

#define X(blah)  blah, KOSHMAR_PP_DEFER_2_TIMES(X_HOOK)()(blah)
#define X_HOOK() X

// x(4) ---> 4, KOSHMAR_PP_PRIVATE_DEFER_2_TIMES_1 (X_HOOK)()(4)
KOSHMAR_PP_CALL_MACRO(TEST_DEFER_0, X(4), 4)
// KOSHMAR_PP_EXPAND_2_TIMES(X(4)) ---> 4, 4, X_HOOK ()(4)
KOSHMAR_PP_CALL_MACRO(TEST_DEFER_1, KOSHMAR_PP_EXPAND_2_TIMES(X(4)), 4)
// KOSHMAR_PP_EXPAND_2_TIMES(KOSHMAR_PP_EXPAND_2_TIMES(X(4))) ---> 4, 4, 4, 4,
// KOSHMAR_PP_PRIVATE_DEFER_2_TIMES_1 (X_HOOK)()(4)
KOSHMAR_PP_CALL_MACRO(TEST_DEFER_2, KOSHMAR_PP_EXPAND(KOSHMAR_PP_EXPAND_2_TIMES(X(4))), 4)

#undef TEST_DEFER_0
#undef TEST_DEFER_1
#undef TEST_DEFER_2
#undef X

// KOSHMAR_PP_PARENTHESISE, KOSHMAR_PP_UNPARENTHESISE

#define TEST_PARENTHESISE(a, b, c)                                                                 \
    TEST(a == 1);                                                                                  \
    TEST(b == 2);                                                                                  \
    TEST(c == 3);

KOSHMAR_PP_EXPAND(TEST_PARENTHESISE KOSHMAR_PP_PARENTHESISE(1, 2, 3))
enum {
    KOSHMAR_PP_UNPARENTHESISE((CheckUnparenthesiseA, CheckUnparenthesiseB, CheckUnparenthesiseC))
};
KOSHMAR_PP_UNPARENTHESISE(KOSHMAR_PP_PARENTHESISE())
KOSHMAR_PP_CALL_MACRO(
    TEST_PARENTHESISE, KOSHMAR_PP_UNPARENTHESISE(KOSHMAR_PP_PARENTHESISE(1, 2, 3)))

#undef TEST_PARENTHESISE
