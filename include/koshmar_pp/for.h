#ifndef KOSHMAR_PP_FOR_H
#define KOSHMAR_PP_FOR_H

#include "aux.h"
#include "if_then_else.h"
#include "rec.h"

#define KOSHMAR_PP_FOR(init, predicate, step, op, context)                                         \
    KOSHMAR_PP_REC(KOSHMAR_PP_PRIVATE_FOR_INDIRECT_0(                                              \
        KOSHMAR_PP_PRIVATE_FOR_ACC(), init, predicate, step, op, context))

#define KOSHMAR_PP_PRIVATE_FOR_INDIRECT_0(acc, current, predicate, step, op, context)              \
    KOSHMAR_PP_PRIVATE_FOR_AUX(                                                                    \
        KOSHMAR_PP_PRIVATE_FOR_INDIRECT_1, acc, current, predicate, step, op, context)

#define KOSHMAR_PP_PRIVATE_FOR_INDIRECT_1(acc, current, predicate, step, op, context)              \
    KOSHMAR_PP_PRIVATE_FOR_AUX(                                                                    \
        KOSHMAR_PP_PRIVATE_FOR_INDIRECT_0, acc, current, predicate, step, op, context)

#define KOSHMAR_PP_PRIVATE_FOR_AUX(indirect_op, acc, current, predicate, step, op, context)        \
    KOSHMAR_PP_IF(                                                                                 \
        predicate(current), KOSHMAR_PP_PRIVATE_FOR_CONTINUE, KOSHMAR_PP_PRIVATE_FOR_STOP)          \
    (indirect_op, KOSHMAR_PP_PRIVATE_FOR_EXTRACT_ACC acc, current, predicate, step, op, context)

#define KOSHMAR_PP_PRIVATE_FOR_CONTINUE(indirect_op, acc, current, predicate, step, op, context)   \
    KOSHMAR_PP_PRIVATE_FOR_CONTINUE_AUX(                                                           \
        indirect_op, acc, current, predicate, step, op, op(context, current), context)

#define KOSHMAR_PP_PRIVATE_FOR_CONTINUE_AUX(                                                       \
    indirect_op, acc, current, predicate, step, op, op_res, context)                               \
    KOSHMAR_PP_REC_CALL(                                                                           \
        indirect_op,                                                                               \
        KOSHMAR_PP_PRIVATE_FOR_ACC(acc KOSHMAR_PP_PRIVATE_FOR_EXTRACT_OP_DATA op_res),             \
        step(current),                                                                             \
        predicate,                                                                                 \
        step,                                                                                      \
        op,                                                                                        \
        KOSHMAR_PP_PRIVATE_FOR_EXTRACT_OP_CONTEXT op_res)

#define KOSHMAR_PP_PRIVATE_FOR_STOP(_indirect_op, acc, _current, _predicate, _step, _op, _context) \
    KOSHMAR_PP_REC_STOP(acc)

#define KOSHMAR_PP_PRIVATE_FOR_ACC(...)         (__VA_ARGS__)
#define KOSHMAR_PP_PRIVATE_FOR_EXTRACT_ACC(...) __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_FOR_EXTRACT_OP_CONTEXT(context) context KOSHMAR_PP_IGNORE
#define KOSHMAR_PP_PRIVATE_FOR_EXTRACT_OP_DATA(_context)   KOSHMAR_PP_EXPAND

#endif // KOSHMAR_PP_FOR_H
