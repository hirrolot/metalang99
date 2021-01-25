// Computes the area of a rectangle.

#include <epilepsy.h>

#define Rect(width, height) E_call(Rect, width height)
#define RectWidth           v(0)
#define RectHeight          v(1)

#define RectArea(rect) E_call(RectArea, rect)

#define Rect_IMPL(width, height) E_list(v(width, height))
#define RectArea_IMPL(rect)      E_uintMul(E_get(RectWidth, v(rect)), E_get(RectHeight, v(rect)))

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

E_assertEq(RectArea(RECTANGLE), v(15 * 7));

int main(void) {}
