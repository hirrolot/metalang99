// Computes the area of a rectangle.

#include <epilepsy.h>

#define Rect(width, height) E_call(Rect, width height)
#define RectWidth(rect)     E_call(RectWidth, rect)
#define RectHeight(rect)    E_call(RectHeight, rect)

#define RectArea(rect) E_call(RectArea, rect)

#define Rect_IMPL(width, height) E_record(v(width, height))
#define RectWidth_IMPL(rect)     E_get(v(rect), v(0))
#define RectHeight_IMPL(rect)    E_get(v(rect), v(1))

#define RectArea_IMPL(rect) E_uintMul(RectWidth(v(rect)), RectHeight(v(rect)))

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
