// Computes the area of a rectangle.

#include <metalang99.h>

#define rect(width, height) M_tuple(width, height)
#define rectWidth           M_tupleGet(0)
#define rectHeight          M_tupleGet(1)

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
