// Computes the area of a rectangle.

#include <metalang99.h>

#define rect(width, height) M_parenthesize(width, height)
#define rectWidth           M_parenthesizedVariadicsHead
#define rectHeight          M_parenthesizedVariadicsTail

#define rectArea(rect) M_mul(rectWidth(rect), rectHeight(rect))

/*
 *                15
 * +------------------------------+
 * |                              |
 * |                              |
 * |                              | 7
 * |                              |
 * |                              |
 * +------------------------------+
 */
#define RECTANGLE rect(v(15), v(7))

M_assertEq(rectArea(RECTANGLE), v(15 * 7));

int main(void) {}
