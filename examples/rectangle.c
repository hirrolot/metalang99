// Computes the area of a rectangle.

#include <epilepsy.h>

#define Rect(width, height) EPILEPSY_CALL(Rect, width height)
#define RectWidth(rect)     EPILEPSY_CALL(RectWidth, rect)
#define RectHeight(rect)    EPILEPSY_CALL(RectHeight, rect)

#define RectArea(rect) EPILEPSY_CALL(RectArea, rect)

#define Rect_IMPL(width, height) EPILEPSY_RECORD(v(width, height))
#define RectWidth_IMPL(rect)     EPILEPSY_GET(v(rect), v(0))
#define RectHeight_IMPL(rect)    EPILEPSY_GET(v(rect), v(1))

#define RectArea_IMPL(rect) EPILEPSY_UIntMul(RectWidth(v(rect)), RectHeight(v(rect)))

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

EPILEPSY_ASSERT_EQ(RectArea(RECTANGLE), v(15 * 7));

int main(void) {}
