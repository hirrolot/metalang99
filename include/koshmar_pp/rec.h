#ifndef KOSHMAR_PP_REC_H
#define KOSHMAR_PP_REC_H

#include "aux.h"

#define KOSHMAR_PP_REC_CALL(op, ...)                                                               \
    CONTINUE,                                                                                      \
        KOSHMAR_PP_PRIVATE_REC_CALL_DEFER_0(KOSHMAR_PP_PRIVATE_REC_CALL_DEFER_1)(op)(__VA_ARGS__)
#define KOSHMAR_PP_PRIVATE_REC_CALL_EMPTY_0()
#define KOSHMAR_PP_PRIVATE_REC_CALL_DEFER_0(op) op KOSHMAR_PP_PRIVATE_REC_CALL_EMPTY_0()
#define KOSHMAR_PP_PRIVATE_REC_CALL_EMPTY_1()
#define KOSHMAR_PP_PRIVATE_REC_CALL_DEFER_1(op) op KOSHMAR_PP_PRIVATE_REC_CALL_EMPTY_1()

#define KOSHMAR_PP_REC_STOP(...) STOP, __VA_ARGS__

#define KOSHMAR_PP_REC KOSHMAR_PP_PRIVATE_REC_0

#define KOSHMAR_PP_PRIVATE_REC_0(...)                                                              \
    KOSHMAR_PP_PRIVATE_REC_0_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_0_GET_CHOICE(__VA_ARGS__))            \
    (KOSHMAR_PP_PRIVATE_REC_0_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_0_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_0_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_0_OVERLOAD(choice)                                                  \
    KOSHMAR_PP_PRIVATE_REC_0_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_0_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_0_##choice
#define KOSHMAR_PP_PRIVATE_REC_0_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_1
#define KOSHMAR_PP_PRIVATE_REC_0_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_1(...)                                                              \
    KOSHMAR_PP_PRIVATE_REC_1_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_1_GET_CHOICE(__VA_ARGS__))            \
    (KOSHMAR_PP_PRIVATE_REC_1_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_1_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_1_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_1_OVERLOAD(choice)                                                  \
    KOSHMAR_PP_PRIVATE_REC_1_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_1_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_1_##choice
#define KOSHMAR_PP_PRIVATE_REC_1_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_2
#define KOSHMAR_PP_PRIVATE_REC_1_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_2(...)                                                              \
    KOSHMAR_PP_PRIVATE_REC_2_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_2_GET_CHOICE(__VA_ARGS__))            \
    (KOSHMAR_PP_PRIVATE_REC_2_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_2_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_2_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_2_OVERLOAD(choice)                                                  \
    KOSHMAR_PP_PRIVATE_REC_2_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_2_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_2_##choice
#define KOSHMAR_PP_PRIVATE_REC_2_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_3
#define KOSHMAR_PP_PRIVATE_REC_2_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_3(...)                                                              \
    KOSHMAR_PP_PRIVATE_REC_3_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_3_GET_CHOICE(__VA_ARGS__))            \
    (KOSHMAR_PP_PRIVATE_REC_3_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_3_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_3_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_3_OVERLOAD(choice)                                                  \
    KOSHMAR_PP_PRIVATE_REC_3_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_3_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_3_##choice
#define KOSHMAR_PP_PRIVATE_REC_3_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_4
#define KOSHMAR_PP_PRIVATE_REC_3_STOP(...)                  __VA_ARGS__

#endif // KOSHMAR_PP_REC_H
