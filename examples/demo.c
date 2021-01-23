// To see the result of preprocessing, comment `IGNORE(` with `)` and compile with -E.

#include <epilepsy.h>

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

int main(void) {
    int x = 0;

    // Unroll loops at compile-time without code clutter.
    E_eval(E_times(v(3), v(x += 5;)));

    /*
     * It is equivalent to:
     * x += 5;
     * x += 5;
     * x += 5;
     */
}
