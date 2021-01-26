#include <epilepsy/assert.h>
#include <epilepsy/aux.h>

#define FOO(x, y) E_assertPlain(x == 518 && y == 1910)

// E_id {
E_eval(v(FOO) E_id(v((518, 1910))));
E_assertEq(E_appl(E_compose(v(E_id), v(E_id)), v(181)), v(181));
// }

// E_parenthesiseUnevaluated {
E_eval(v(FOO) E_parenthesiseUnevaluated(v(518, 1910)));
// }

#undef FOO

// E_unparenthesise {
E_assertEq(E_unparenthesise(v((v(198)))), v(198));
// }

// E_unparenthesiseUnevaluated {
E_assertEq(E_unparenthesiseUnevaluated(v((198))), v(198));
// }

// E_parenthesise + E_unparenthesise {
E_assertEq(E_unparenthesise(E_parenthesise(v(187))), v(187));
// }

// E_parenthesiseUnevaluated + E_unparenthesiseUnevaluated {
E_assertEq(E_unparenthesiseUnevaluated(E_parenthesiseUnevaluated(v(187))), v(187));
// }

// E_const, E_const2, E_const3 {
E_assertEq(E_appl2(v(E_const), v(1810), v(~)), v(1810));
E_assertEq(E_appl3(v(E_const2), v(1810), v(~), v(~)), v(1810));
E_assertEq(E_appl(E_appl3(v(E_const3), v(1810), v(~), v(~)), v(~)), v(1810));
// }

#define ABC v(E_true)

// E_flip {
E_assert(E_appl2(E_flip(v(E_cat)), v(C), v(AB)));
// }

// E_putBefore, E_putAfter, E_putBetween {
E_assertEq(E_putBefore(v(0), v(!)), v(!0));
E_assertEq(E_putAfter(v(!), v(0)), v(!0));
E_assertEq(E_putBetween(v(16), v(9), v(+)), v(16 + 9));
// }

#undef ABC

// E_semicolon {
E_semicolon();
E_semicolon();

void test_semicolon(void) {
    E_semicolon();
    E_semicolon();

    {
        E_semicolon();
        E_semicolon();

        {
            E_semicolon();
            E_semicolon();
        }
    }
}
// }
