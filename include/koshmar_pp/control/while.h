#ifndef KOSHMAR_PP_CONTROL_WHILE_H
#define KOSHMAR_PP_CONTROL_WHILE_H

#include "../aux.h"
#include "../logical.h"
#include "../rec.h"

#define KOSHMAR_PP_PRIVATE_WHILE(predicate, op, context)                                           \
    KOSHMAR_PP_REC(KOSHMAR_PP_PRIVATE_WHILE_AUX(predicate, op, context, KOSHMAR_PP_EMPTY()))

#define KOSHMAR_PP_PRIVATE_WHILE_AUX(predicate, op, context, acc)                                  \
    KOSHMAR_PP_PRIVATE_WHILE_AUX_AUX(predicate, op, context, op(context), acc)

#define KOSHMAR_PP_PRIVATE_WHILE_AUX_AUX(predicate, op, old_context, op_output, acc)               \
    KOSHMAR_PP_PRIVATE_WHILE_AUX_AUX_AUX(predicate,                                                \
                                         op,                                                       \
                                         old_context,                                              \
                                         KOSHMAR_PP_PRIVATE_WHILE_EXTRACT_OP_CONTEXT op_output,    \
                                         KOSHMAR_PP_PRIVATE_WHILE_EXTRACT_OP_DATA op_output,       \
                                         acc)

#define KOSHMAR_PP_PRIVATE_WHILE_AUX_AUX_AUX(predicate, op, old_context, op_context, op_data, acc) \
    KOSHMAR_PP_REC_IF(                                                                             \
        KOSHMAR_PP_NOT(predicate(old_context)),                                                    \
        KOSHMAR_PP_REC_STOP(acc),                                                                  \
        KOSHMAR_PP_REC_CONTINUE(                                                                   \
            KOSHMAR_PP_PRIVATE_WHILE_AUX_HOOK, predicate, op, op_context, acc op_data))

#define KOSHMAR_PP_PRIVATE_WHILE_AUX_HOOK() KOSHMAR_PP_PRIVATE_WHILE_AUX

#define KOSHMAR_PP_PRIVATE_WHILE_EXTRACT_OP_CONTEXT(context) context KOSHMAR_PP_CONSUME
#define KOSHMAR_PP_PRIVATE_WHILE_EXTRACT_OP_DATA(context)    KOSHMAR_PP_EXPAND

#endif // KOSHMAR_PP_CONTROL_WHILE_H
