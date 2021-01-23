// To see the result of preprocessing, comment `IGNORE(` with `)` and compile with -E.

#include <epilepsy.h>

#define IGNORE(...)

int main(void) {
    // clang-format off
    IGNORE(

    // List manipulation {
    // "Rachmaninoff" "Bach" "Chopin"
    E_listEval(E_listReverse(E_list(v("Chopin", "Bach", "Rachmaninoff"))))

    // 9 2 5
    E_listEval(E_listFilter(E_list(v(9, 2, 11, 13, 5)), E_appl(v(E_uintGreater), v(10))))

    // 4 5 6
    E_listEval(E_listMap(E_appl(v(E_uintAdd), v(3)), E_list(v(1, 2, 3))))
    // }

    )
    // clang-format on

    // Overloading on a number of arguments {
    typedef struct {
        double width, height;
    } Rect;

#define Rect_new(...)         E_eval(E_overload(v(Rect_new_), v(__VA_ARGS__)))
#define Rect_new_1_IMPL(x)    v(((Rect){.width = x, .height = x}))
#define Rect_new_2_IMPL(x, y) v(((Rect){.width = x, .height = y}))

    Rect _7x8 = Rect_new(7, 8), _10x10 = Rect_new(10);
    // }

    // Loop unrolling {
    int x = 0;

    /*
     * x += 5;
     * x += 5;
     * x += 5;
     */
    E_eval(E_times(v(3), v(x += 5;)));
    // }
}
