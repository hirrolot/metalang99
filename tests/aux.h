#include "test.h"

#include "../include/agony_pp/aux.h"

// AGONY_PP_STRINGIFY

static const char stringified[] = AGONY_PP_EVAL(c(AGONY_PP_STRINGIFY, v(hello)));
// I'm not sure that the stringified version won't contain any whitespaces, so for now just check
// that it contains at least six characters.
TEST(sizeof(stringified) >= 5 + 1);

// AGONY_PP_CAT

inline static void test_cat(void) {
    (void)test_cat;
    int AGONY_PP_EVAL(c(AGONY_PP_CAT, v(ab) v(c))) = 7;
    abc++;
}

// AGONY_PP_CONSUME

AGONY_PP_EVAL(c(AGONY_PP_CONSUME, v(a) v(b) v(c)))
AGONY_PP_EVAL(c(AGONY_PP_CONSUME, v(NULL "hey") v(131.415) v(boom)))
AGONY_PP_EVAL(c(AGONY_PP_CONSUME, ))

// AGONY_PP_PARENTHESISE, AGONY_PP_UNPARENTHESISE

#define TEST_PARENTHESISE(a, b, c) v(TEST(a == 1); TEST(b == 2); TEST(c == 3);)

AGONY_PP_EVAL(TEST_PARENTHESISE AGONY_PP_EVAL(c(AGONY_PP_PARENTHESISE, v(1) v(2) v(3))))

enum {
    AGONY_PP_EVAL(
        c(AGONY_PP_UNPARENTHESISE,
          v((CheckUnparenthesiseA = 9, CheckUnparenthesiseB = 4, CheckUnparenthesiseC = 18))))
};

TEST(CheckUnparenthesiseA == 9);
TEST(CheckUnparenthesiseB == 4);
TEST(CheckUnparenthesiseC == 18);

#define EMPTY AGONY_PP_EVAL(c(AGONY_PP_UNPARENTHESISE, c(AGONY_PP_PARENTHESISE, )))

EMPTY inline EMPTY static EMPTY void EMPTY test_empty EMPTY(EMPTY void EMPTY) EMPTY {
    EMPTY const EMPTY char EMPTY c EMPTY = EMPTY 'A' EMPTY;
    EMPTY(EMPTY void EMPTY) EMPTY c EMPTY;
    EMPTY(EMPTY void EMPTY) EMPTY test_empty EMPTY;
    EMPTY
}
EMPTY

#undef TEST_PARENTHESISE
#undef EMPTY
