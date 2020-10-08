#ifndef AGONY_PP_CONTROL_WHILE_H
#define AGONY_PP_CONTROL_WHILE_H

#include "../aux.h"
#include "../logical.h"
#include "../rec.h"

#define AGONY_PP_PRIVATE_WHILE(predicate, op, context)                                             \
    AGONY_PP_REC(AGONY_PP_PRIVATE_WHILE_AUX(predicate, op, context, AGONY_PP_EMPTY()))

#define AGONY_PP_PRIVATE_WHILE_AUX(predicate, op, context, acc)                                    \
    AGONY_PP_PRIVATE_WHILE_AUX_AUX(predicate, op, context, op(context), acc)

#define AGONY_PP_PRIVATE_WHILE_AUX_AUX(predicate, op, old_context, op_output, acc)                 \
    AGONY_PP_PRIVATE_WHILE_AUX_AUX_AUX(                                                            \
        predicate,                                                                                 \
        op,                                                                                        \
        old_context,                                                                               \
        AGONY_PP_PRIVATE_WHILE_EXTRACT_OP_CONTEXT op_output,                                       \
        AGONY_PP_PRIVATE_WHILE_EXTRACT_OP_DATA op_output,                                          \
        acc)

#define AGONY_PP_PRIVATE_WHILE_AUX_AUX_AUX(predicate, op, old_context, op_context, op_data, acc)   \
    AGONY_PP_REC_IF(                                                                               \
        AGONY_PP_NOT(predicate(old_context)),                                                      \
        AGONY_PP_REC_STOP(acc),                                                                    \
        AGONY_PP_REC_CONTINUE(                                                                     \
            AGONY_PP_PRIVATE_WHILE_AUX_HOOK,                                                       \
            predicate,                                                                             \
            op,                                                                                    \
            op_context,                                                                            \
            acc op_data))

#define AGONY_PP_PRIVATE_WHILE_AUX_HOOK() AGONY_PP_PRIVATE_WHILE_AUX

#define AGONY_PP_PRIVATE_WHILE_EXTRACT_OP_CONTEXT(context) context AGONY_PP_CONSUME
#define AGONY_PP_PRIVATE_WHILE_EXTRACT_OP_DATA(context)    AGONY_PP_EXPAND

#endif // AGONY_PP_CONTROL_WHILE_H
