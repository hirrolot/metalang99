#ifndef KOSHMAR_REC_H
#define KOSHMAR_REC_H

#include "cat.h"
#include "emptiness.h"
#include "expand.h"
#include "variadics/get.h"

#define KOSHMAR_REC_CALL(op, ...) KOSHMAR_REC_CALL_INDIRECT_0 KOSHMAR_EMPTINESS()(op, __VA_ARGS__)
#define KOSHMAR_REC_CALL_INDIRECT_0(op, ...)                                                       \
    KOSHMAR_REC_CALL_INDIRECT_1 KOSHMAR_EMPTINESS()(op, __VA_ARGS__)
#define KOSHMAR_REC_CALL_INDIRECT_1(op, ...)                                                       \
    KOSHMAR_REC_CALL_INDIRECT_2 KOSHMAR_EMPTINESS()(op, __VA_ARGS__)
#define KOSHMAR_REC_CALL_INDIRECT_2(op, ...) op KOSHMAR_EMPTINESS()(__VA_ARGS__)

#define KOSHMAR_REC KOSHMAR_REC_0

#define KOSHMAR_REC_0(body)                                                                        \
    KOSHMAR_REC_0_AUX(KOSHMAR_VARIADICS_HEAD body, KOSHMAR_VARIADICS_TAIL body)
#define KOSHMAR_REC_0_AUX(choice, ...) KOSHMAR_CAT(KOSHMAR_REC_0_, choice)(__VA_ARGS__)
#define KOSHMAR_REC_0_CONTINUE         KOSHMAR_REC_1
#define KOSHMAR_REC_0_STOP             KOSHMAR_EXPAND

#define KOSHMAR_REC_1(body)                                                                        \
    KOSHMAR_REC_1_AUX(KOSHMAR_VARIADICS_HEAD body, KOSHMAR_VARIADICS_TAIL body)
#define KOSHMAR_REC_1_AUX(choice, ...) KOSHMAR_CAT(KOSHMAR_REC_1_, choice)(__VA_ARGS__)
#define KOSHMAR_REC_1_CONTINUE         KOSHMAR_REC_2
#define KOSHMAR_REC_1_STOP             KOSHMAR_EXPAND

#define KOSHMAR_REC_2(body)                                                                        \
    KOSHMAR_REC_2_AUX(KOSHMAR_VARIADICS_HEAD body, KOSHMAR_VARIADICS_TAIL body)
#define KOSHMAR_REC_2_AUX(choice, ...) KOSHMAR_CAT(KOSHMAR_REC_2_, choice)(__VA_ARGS__)
#define KOSHMAR_REC_2_CONTINUE         KOSHMAR_REC_3
#define KOSHMAR_REC_2_STOP             KOSHMAR_EXPAND

#define KOSHMAR_REC_CONTINUE(...) (CONTINUE, __VA_ARGS__)
#define KOSHMAR_REC_STOP(...)     (STOP, __VA_ARGS__)

#endif // KOSHMAR_REC_H
