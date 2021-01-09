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

// E_stringify

static const char stringified[] = E_eval(E_stringify(v(hello)));

// I'm not sure that the stringified version won't contain any whitespaces, so for now just check
// that it contains _at least_ six characters.
E_assertPlain(sizeof(stringified) >= 5 + 1);

// E_cat

inline static void test_cat(void) {
    (void)test_cat;
    int E_eval(E_cat(v(ab), v(c))) = 7;
    abc++;
}

#define EMPTY E_eval(E_cat(v(), v()))
CHECK_EMPTY(0, EMPTY)
#undef EMPTY

// E_consume

E_eval(E_consume(v(a) v(b) v(c))) E_eval(E_consume(v(NULL "hey") v(131.415) v(boom)))
    E_eval(E_consume())

    // E_parenthesise, E_unparenthesise
    /*
    #define ASSERT_PARENTHESISE(a, b, c) v(ASSERT(a == 1); ASSERT(b == 2); ASSERT(c == 3);)

    E_eval(ASSERT_PARENTHESISE E_eval(E_call(E_parenthesise, v(1) v(2)
    v(3))))

    enum {
        E_eval(
            E_call(E_unparenthesise,
              v((CheckUnparenthesiseA = 9, CheckUnparenthesiseB = 4, CheckUnparenthesiseC = 18))))
    };

    ASSERT(CheckUnparenthesiseA == 9);
    ASSERT(CheckUnparenthesiseB == 4);
    ASSERT(CheckUnparenthesiseC == 18);

    #define EMPTY E_eval(E_call(E_unparenthesise,
    E_call(E_parenthesise, ))) CHECK_EMPTY(1, EMPTY) #undef EMPTY

    #undef ASSERT_PARENTHESISE

    #undef CHECK_EMPTY
    */
