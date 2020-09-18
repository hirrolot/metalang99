#ifndef KOSHMAR_PP_REC_H
#define KOSHMAR_PP_REC_H

#include "cat.h"
#include "emptiness.h"
#include "expand.h"
#include "variadics/get.h"

#define KOSHMAR_PP_REC_CALL(op, ...)                                                               \
    KOSHMAR_PP_REC_CALL_INDIRECT_0 KOSHMAR_PP_EMPTINESS()(op, __VA_ARGS__)
#define KOSHMAR_PP_REC_CALL_INDIRECT_0(op, ...)                                                    \
    KOSHMAR_PP_REC_CALL_INDIRECT_1 KOSHMAR_PP_EMPTINESS()(op, __VA_ARGS__)
#define KOSHMAR_PP_REC_CALL_INDIRECT_1(op, ...)                                                    \
    KOSHMAR_PP_REC_CALL_INDIRECT_2 KOSHMAR_PP_EMPTINESS()(op, __VA_ARGS__)
#define KOSHMAR_PP_REC_CALL_INDIRECT_2(op, ...) op KOSHMAR_PP_EMPTINESS()(__VA_ARGS__)

#define KOSHMAR_PP_REC KOSHMAR_PP_REC_0

#define KOSHMAR_PP_REC_0(body)                                                                     \
    KOSHMAR_PP_REC_0_AUX(KOSHMAR_PP_VARIADICS_HEAD body, KOSHMAR_PP_VARIADICS_TAIL body)
#define KOSHMAR_PP_REC_0_AUX(choice, ...) KOSHMAR_PP_CAT(KOSHMAR_PP_REC_0_, choice)(__VA_ARGS__)
#define KOSHMAR_PP_REC_0_CONTINUE         KOSHMAR_PP_REC_1
#define KOSHMAR_PP_REC_0_STOP             KOSHMAR_PP_EXPAND

#define KOSHMAR_PP_REC_1(body)                                                                     \
    KOSHMAR_PP_REC_1_AUX(KOSHMAR_PP_VARIADICS_HEAD body, KOSHMAR_PP_VARIADICS_TAIL body)
#define KOSHMAR_PP_REC_1_AUX(choice, ...) KOSHMAR_PP_CAT(KOSHMAR_PP_REC_1_, choice)(__VA_ARGS__)
#define KOSHMAR_PP_REC_1_CONTINUE         KOSHMAR_PP_REC_2
#define KOSHMAR_PP_REC_1_STOP             KOSHMAR_PP_EXPAND

#define KOSHMAR_PP_REC_2(body)                                                                     \
    KOSHMAR_PP_REC_2_AUX(KOSHMAR_PP_VARIADICS_HEAD body, KOSHMAR_PP_VARIADICS_TAIL body)
#define KOSHMAR_PP_REC_2_AUX(choice, ...) KOSHMAR_PP_CAT(KOSHMAR_PP_REC_2_, choice)(__VA_ARGS__)
#define KOSHMAR_PP_REC_2_CONTINUE         KOSHMAR_PP_REC_3
#define KOSHMAR_PP_REC_2_STOP             KOSHMAR_PP_EXPAND

#define KOSHMAR_PP_REC_CONTINUE(...) (CONTINUE, __VA_ARGS__)
#define KOSHMAR_PP_REC_STOP(...)     (STOP, __VA_ARGS__)

#endif // KOSHMAR_PP_REC_H
