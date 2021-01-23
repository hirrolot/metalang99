// To see the result of preprocessing, comment `IGNORE(` with `)` and compile with -E.

#include <epilepsy.h>

#define STATICS(...)                                                                               \
    E_listEval(E_listFor(E_list(v(__VA_ARGS__)), E_appl2(v(E_putBetween), v(static), v(;))))       \
        E_semicolon()

/*
 * static int a;
 * static const char *b = "abc";
 * static double c = 123.456;
 */
STATICS(int a, const char *b = "abc", double c = 123.456);

#define IGNORE(...)

// clang-format off
IGNORE(

// "Rachmaninoff" "Bach" "Chopin"
E_listEval(E_listReverse(E_list(v("Chopin", "Bach", "Rachmaninoff"))))

// 9 2 5
E_listEval(E_listFilter(E_list(v(9, 2, 11, 13, 5)), E_appl(v(E_uintGreater), v(10))))

// 4 5 6
E_listEval(E_listMap(E_appl(v(E_uintAdd), v(3)), E_list(v(1, 2, 3))))

)
// clang-format on

int main(void) {}
