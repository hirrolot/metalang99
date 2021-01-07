// Computes the area of a rectangle.

#include <epilepsy.h>

#define Rect(width, height) epCall(Rect, width height)
#define RectWidth(rect)     epCall(RectWidth, rect)
#define RectHeight(rect)    epCall(RectHeight, rect)

#define RectArea(rect) epCall(RectArea, rect)

#define Rect_IMPL(width, height) epRecord(v(width, height))
#define RectWidth_IMPL(rect)     epGet(v(rect), v(0))
#define RectHeight_IMPL(rect)    epGet(v(rect), v(1))

#define RectArea_IMPL(rect) epUIntMul(RectWidth(v(rect)), RectHeight(v(rect)))

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

epAssertEq(RectArea(RECTANGLE), v(15 * 7));

int main(void) {}
