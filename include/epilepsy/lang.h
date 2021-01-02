#ifndef EPILEPSY_LANG_H
#define EPILEPSY_LANG_H

#include <epilepsy/lang/closure.h>
#include <epilepsy/priv/aux.h>

// Desugaring {
#define EPILEPSY_CALL(...)        EPILEPSY_PRIV_EPILEPSY_CALL(__VA_ARGS__)
#define EPILEPSY_APPLY(f, ...)    EPILEPSY_DESUGAR(EPILEPSY_APPLY, f __VA_ARGS__)
#define EPILEPSY_APPLY_2(f, a, b) EPILEPSY_DESUGAR(EPILEPSY_APPLY_2, f a b)
#define EPILEPSY_APPLY_WITH_ARITY(f, arity, ...)                                                   \
    EPILEPSY_DESUGAR(EPILEPSY_APPLY_WITH_ARITY, f arity __VA_ARGS__)
#define v(...) (0v, __VA_ARGS__),

#define EPILEPSY_DESUGAR(f, ...) EPILEPSY_CALL(f##_IMPL, __VA_ARGS__)
// }

// Implementation {
#define EPILEPSY_PRIV_EPILEPSY_CALL(op, ...)                                                       \
    EPILEPSY_PRIV_IF(                                                                              \
        EPILEPSY_PRIV_IS_UNPARENTHESISED(op), EPILEPSY_PRIV_call_0args, EPILEPSY_PRIV_call_0op)    \
    (op, __VA_ARGS__),

#define EPILEPSY_PRIV_call_0args(ident, ...)        (0args, ident, __VA_ARGS__)
#define EPILEPSY_PRIV_call_0op(op, _emptiness, ...) (0op, op, __VA_ARGS__)
//

#endif // EPILEPSY_LANG_H
