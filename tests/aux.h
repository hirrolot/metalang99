#include <epilepsy/assert.h>
#include <epilepsy/aux.h>

#define CHECK_EMPTY(unique_fn_id, empty)                                                           \
    inline empty static empty void empty test_empty_##unique_fn_id empty(empty void empty) empty { \
        empty const empty char empty c empty = empty 'A' empty;                                    \
        empty(empty void empty) empty c empty;                                                     \
        empty(empty void empty) empty test_empty_##unique_fn_id empty;                             \
        empty                                                                                      \
    }                                                                                              \
    empty

// EPILEPSY_STRINGIFY

static const char stringified[] = EPILEPSY_EVAL(EPILEPSY_STRINGIFY(v(hello)));

// I'm not sure that the stringified version won't contain any whitespaces, so for now just check
// that it contains _at least_ six characters.
EPILEPSY_ASSERT_PLAIN(sizeof(stringified) >= 5 + 1);

// EPILEPSY_CAT

inline static void test_cat(void) {
    (void)test_cat;
    int EPILEPSY_EVAL(EPILEPSY_CAT(v(ab), v(c))) = 7;
    abc++;
}

#define EMPTY EPILEPSY_EVAL(EPILEPSY_CAT(v(), v()))
CHECK_EMPTY(0, EMPTY)
#undef EMPTY

// EPILEPSY_CONSUME

EPILEPSY_EVAL(EPILEPSY_CONSUME(v(a) v(b) v(c)))
EPILEPSY_EVAL(EPILEPSY_CONSUME(v(NULL "hey") v(131.415) v(boom)))
EPILEPSY_EVAL(EPILEPSY_CONSUME())

// EPILEPSY_PARENTHESISE, EPILEPSY_UNPARENTHESISE
/*
#define ASSERT_PARENTHESISE(a, b, c) v(ASSERT(a == 1); ASSERT(b == 2); ASSERT(c == 3);)

EPILEPSY_EVAL(ASSERT_PARENTHESISE EPILEPSY_EVAL(EPILEPSY_CALL(EPILEPSY_PARENTHESISE, v(1) v(2)
v(3))))

enum {
    EPILEPSY_EVAL(
        EPILEPSY_CALL(EPILEPSY_UNPARENTHESISE,
          v((CheckUnparenthesiseA = 9, CheckUnparenthesiseB = 4, CheckUnparenthesiseC = 18))))
};

ASSERT(CheckUnparenthesiseA == 9);
ASSERT(CheckUnparenthesiseB == 4);
ASSERT(CheckUnparenthesiseC == 18);

#define EMPTY EPILEPSY_EVAL(EPILEPSY_CALL(EPILEPSY_UNPARENTHESISE,
EPILEPSY_CALL(EPILEPSY_PARENTHESISE, ))) CHECK_EMPTY(1, EMPTY) #undef EMPTY

#undef ASSERT_PARENTHESISE

#undef CHECK_EMPTY
*/
