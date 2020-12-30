// Computes the area of a rectangle.

#include <epilepsy.h>

#define Rect(width, height) desugar(Rect, width height)
#define RectWidth(rect)     desugar(RectWidth, rect)
#define RectHeight(rect)    desugar(RectHeight, rect)

#define RectArea(rect) desugar(RectArea, rect)

#define Rect_IMPL(width, height) EPILEPSY_RECORD(v(width, height))
#define RectWidth_IMPL(rect)     EPILEPSY_GET(v(rect), v(0))
#define RectHeight_IMPL(rect)    EPILEPSY_GET(v(rect), v(1))

#define RectArea_IMPL(rect) EPILEPSY_UIntMul(RectWidth(v(rect)), RectHeight(v(rect)))

/*
 *                 15
 * +--------------------------------+
 * |                                |
 * |                                |
 * |                                | 6
 * |                                |
 * |                                |
 * |                                |
 * +--------------------------------+
 */
#define RECTANGLE Rect(v(15), v(6))

EPILEPSY_ASSERT_EQ(RectArea(RECTANGLE), v(15 * 6));

int main(void) {}
