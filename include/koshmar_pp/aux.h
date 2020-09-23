#ifndef KOSHMAR_PP_AUX_H
#define KOSHMAR_PP_AUX_H

#define KOSHMAR_PP_CAT(x, y)           KOSHMAR_PP_PRIMITIVE_CAT(x, y)
#define KOSHMAR_PP_PRIMITIVE_CAT(x, y) x##y

#define KOSHMAR_PP_STRINGIFY(x)           KOSHMAR_PP_PRIMITIVE_STRINGIFY(x)
#define KOSHMAR_PP_PRIMITIVE_STRINGIFY(x) #x

#define KOSHMAR_PP_CALL_MACRO(op, ...) op(__VA_ARGS__)

#define KOSHMAR_PP_COMMA() ,
#define KOSHMAR_PP_EMPTY()
#define KOSHMAR_PP_ID(x)       x
#define KOSHMAR_PP_EXPAND(...) __VA_ARGS__
#define KOSHMAR_PP_DEFER(op)   op KOSHMAR_PP_EMPTY()
#define KOSHMAR_PP_IGNORE(...)

#endif // KOSHMAR_PP_AUX_H
