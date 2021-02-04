// Computes the area of a rectangle.

#include <metalang99.h>

#define Rect(width, height) M_call(Rect, width height)
#define RectWidth           v(0)
#define RectHeight          v(1)

#define RectArea(rect) M_call(RectArea, rect)

#define Rect_IMPL(width, height) M_list(v(width, height))
#define RectArea_IMPL(rect)      M_uintMul(M_get(RectWidth, v(rect)), M_get(RectHeight, v(rect)))

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
#define RECTANGLE Rect(v(15), v(7))

M_assertEq(RectArea(RECTANGLE), v(15 * 7));

int main(void) {}
