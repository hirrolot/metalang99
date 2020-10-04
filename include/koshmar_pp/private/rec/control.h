#ifndef KOSHMAR_PP_PRIVATE_REC_CONTROL_H
#define KOSHMAR_PP_PRIVATE_REC_CONTROL_H

#include "../aux.h"

#define KOSHMAR_PP_PRIVATE_REC_STOP(_k_cx, ...) STOP, __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_CONTINUE(hook, k, k_cx, ...)                                        \
    CONTINUE, KOSHMAR_PP_PRIVATE_REC_DEFER_2_TIMES(hook)()(k, k_cx, __VA_ARGS__)

#define KOSHMAR_PP_PRIVATE_REC_DEFER_2_TIMES(op)                                                   \
    KOSHMAR_PP_PRIVATE_REC_DEFER_0(KOSHMAR_PP_PRIVATE_REC_DEFER_1)(op)
#define KOSHMAR_PP_PRIVATE_REC_DEFER_0(op) op KOSHMAR_PP_PRIVATE_EMPTY()
#define KOSHMAR_PP_PRIVATE_REC_DEFER_1(op) op KOSHMAR_PP_PRIVATE_EMPTY()

#endif // KOSHMAR_PP_PRIVATE_REC_CONTROL_H
