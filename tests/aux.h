#include "assert.h"

#include "../include/insult/aux.h"
#include "../include/insult/eval.h"
#include "../include/insult/lang.h"

#include <assert.h>

#define CHECK_EMPTY(unique_fn_id, empty)                                                           \
    inline empty static empty void empty test_empty_##unique_fn_id empty(empty void empty) empty { \
        empty const empty char empty c empty = empty 'A' empty;                                    \
        empty(empty void empty) empty c empty;                                                     \
        empty(empty void empty) empty test_empty_##unique_fn_id empty;                             \
        empty                                                                                      \
    }                                                                                              \
    empty

// INSULT_STRINGIFY

static const char stringified[] = INSULT_EVAL(INSULT_STRINGIFY(v(hello)));

// I'm not sure that the stringified version won't contain any whitespaces, so for now just check
// that it contains _at least_ six characters.
static_assert(sizeof(stringified) >= 5 + 1, "");

// INSULT_CAT

inline static void test_cat(void) {
    (void)test_cat;
    int INSULT_EVAL(INSULT_CAT(v(ab), v(c))) = 7;
    abc++;
}

#define EMPTY INSULT_EVAL(INSULT_CAT(v(), v()))
CHECK_EMPTY(0, EMPTY)
#undef EMPTY

// INSULT_CONSUME

INSULT_EVAL(INSULT_CONSUME(v(a) v(b) v(c)))
INSULT_EVAL(INSULT_CONSUME(v(NULL "hey") v(131.415) v(boom)))
INSULT_EVAL(INSULT_CONSUME())

// INSULT_PARENTHESISE, INSULT_UNPARENTHESISE
/*
#define ASSERT_PARENTHESISE(a, b, c) v(ASSERT(a == 1); ASSERT(b == 2); ASSERT(c == 3);)

INSULT_EVAL(ASSERT_PARENTHESISE INSULT_EVAL(c(INSULT_PARENTHESISE, v(1) v(2) v(3))))

enum {
    INSULT_EVAL(
        c(INSULT_UNPARENTHESISE,
          v((CheckUnparenthesiseA = 9, CheckUnparenthesiseB = 4, CheckUnparenthesiseC = 18))))
};

ASSERT(CheckUnparenthesiseA == 9);
ASSERT(CheckUnparenthesiseB == 4);
ASSERT(CheckUnparenthesiseC == 18);

#define EMPTY INSULT_EVAL(c(INSULT_UNPARENTHESISE, c(INSULT_PARENTHESISE, )))
CHECK_EMPTY(1, EMPTY)
#undef EMPTY

#undef ASSERT_PARENTHESISE

#undef CHECK_EMPTY
*/
