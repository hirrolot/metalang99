#include "test.h"

#include "../include/agony_pp/aux.h"

// AGONY_PP_STRINGIFY

static const char stringified[] = AGONY_PP_EVAL(c(AGONY_PP_STRINGIFY, v(hello)));
TEST(sizeof(stringified) == 5 + 1);

// AGONY_PP_CAT

static const char cat[] = AGONY_PP_EVAL(c(AGONY_PP_STRINGIFY, c(AGONY_PP_CAT, v(ab) v(c))));
TEST(sizeof(cat) == 3 + 1);

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

EMPTY static EMPTY inline EMPTY void EMPTY test_empty EMPTY(EMPTY void EMPTY) EMPTY {
    EMPTY const EMPTY char EMPTY c EMPTY = EMPTY 'A' EMPTY;
    EMPTY(EMPTY void EMPTY) EMPTY c EMPTY;
    EMPTY(EMPTY void EMPTY) EMPTY test_empty EMPTY;
    EMPTY
}
EMPTY

#undef TEST_PARENTHESISE
#undef EMPTY
