#include "../include/koshmar_pp/bool.h"

{
    assert(KOSHMAR_PP_NOT(0) == 1);
    assert(KOSHMAR_PP_NOT(1) == 0);

    assert(KOSHMAR_PP_AND(0, 0) == 0);
    assert(KOSHMAR_PP_AND(0, 1) == 0);
    assert(KOSHMAR_PP_AND(1, 0) == 0);
    assert(KOSHMAR_PP_AND(1, 1) == 1);

    assert(KOSHMAR_PP_OR(0, 0) == 0);
    assert(KOSHMAR_PP_OR(0, 1) == 1);
    assert(KOSHMAR_PP_OR(1, 0) == 1);
    assert(KOSHMAR_PP_OR(1, 1) == 1);

    assert(KOSHMAR_PP_XOR(0, 0) == 0);
    assert(KOSHMAR_PP_XOR(0, 1) == 1);
    assert(KOSHMAR_PP_XOR(1, 0) == 1);
    assert(KOSHMAR_PP_XOR(1, 1) == 0);
}
