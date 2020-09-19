{
#define X abc
#define Y def

    int KOSHMAR_PP_CAT(X, Y) = 0;
    abcdef++;

    int KOSHMAR_PP_PRIMITIVE_CAT(X, Y) = 0;
    XY++;

#undef X
#undef Y
}
