// Computes the area of a rectangle.

#include <epilepsy.h>

#define Rectangle(width, height)   call(Rectangle_IMPL, width height)
#define RectangleWidth(rectangle)  call(RectangleWidth_IMPL, rectangle)
#define RectangleHeight(rectangle) call(RectangleHeight_IMPL, rectangle)

#define RectangleArea(rectangle) call(RectangleArea_IMPL, rectangle)

#define Rectangle_IMPL(width, height)   EPILEPSY_RECORD(v(width, height))
#define RectangleWidth_IMPL(rectangle)  EPILEPSY_GET(v(rectangle), v(0))
#define RectangleHeight_IMPL(rectangle) EPILEPSY_GET(v(rectangle), v(1))

#define RectangleArea_IMPL(rectangle)                                                              \
    EPILEPSY_UIntMul(RectangleWidth(v(rectangle)), RectangleHeight(v(rectangle)))

#define RECTANGLE Rectangle(v(8), v(15))

EPILEPSY_ASSERT_EQ(RectangleArea(RECTANGLE), v(8 * 15));

int main(void) {}
