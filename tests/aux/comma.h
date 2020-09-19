{
#define X(a, _b) a
#define Y(...)   Y_AUX(__VA_ARGS__)
#define Y_AUX(_1, _2)                                                                              \
    assert(_1 == 1);                                                                               \
    assert(_2 == 2);

    Y(X(1 KOSHMAR_PP_COMMA() 2, 3))

#undef X
#undef Y
#undef Y_AUX
}
