#include "../include/koshmar/cat.h"

{
#define X abc
#define Y def

    int KOSHMAR_CAT(X, Y) = 0;
    abcdef++;

    int KOSHMAR_PRIMITIVE_CAT(X, Y) = 0;
    XY++;

#undef X
#undef Y
}
