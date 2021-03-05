#include <metalang99.h>

// Overloading on a number of arguments {
typedef struct {
    double width, height;
} Rect;

#define Rect_new(...) M_overload(Rect_new_, __VA_ARGS__)
#define Rect_new_1(x)                                                                              \
    { x, x }
#define Rect_new_2(x, y)                                                                           \
    { x, y }

static Rect _7x8 = Rect_new(7, 8), _10x10 = Rect_new(10);

int main(void) {}
