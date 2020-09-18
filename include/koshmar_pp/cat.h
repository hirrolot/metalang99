#ifndef KOSHMAR_PP_CAT_H
#define KOSHMAR_PP_CAT_H

#define KOSHMAR_PP_CAT(x, y)           KOSHMAR_PP_PRIMITIVE_CAT(x, y)
#define KOSHMAR_PP_PRIMITIVE_CAT(x, y) x##y

#endif // KOSHMAR_PP_CAT_H
