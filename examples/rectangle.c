// Computes the area of a rectangle.

#include <epilepsy.h>

#define Rect(width, height) EPILEPSY_call(Rect, width height)
#define RectWidth(rect)     EPILEPSY_call(RectWidth, rect)
#define RectHeight(rect)    EPILEPSY_call(RectHeight, rect)

#define RectArea(rect) EPILEPSY_call(RectArea, rect)

#define Rect_IMPL(width, height) EPILEPSY_record(v(width, height))
#define RectWidth_IMPL(rect)     EPILEPSY_get(v(rect), v(0))
#define RectHeight_IMPL(rect)    EPILEPSY_get(v(rect), v(1))

#define RectArea_IMPL(rect) EPILEPSY_uintMul(RectWidth(v(rect)), RectHeight(v(rect)))

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

EPILEPSY_assertEq(RectArea(RECTANGLE), v(15 * 7));

int main(void) {}
