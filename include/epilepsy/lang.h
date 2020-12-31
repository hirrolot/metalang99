#ifndef EPILEPSY_LANG_H
#define EPILEPSY_LANG_H

#include <epilepsy/priv/aux.h>
#include <epilepsy/priv/variadics/get.h>

#define EPILEPSY_CALL(...) EPILEPSY_PRIV_EPILEPSY_CALL(__VA_ARGS__)
#define v(...)             (0v, __VA_ARGS__),

#define EPILEPSY_DESUGAR(f, ...) EPILEPSY_CALL(f##_IMPL, __VA_ARGS__)

#define EPILEPSY_PRIV_EPILEPSY_CALL(op, ...)                                                       \
    EPILEPSY_PRIV_IF(                                                                              \
        EPILEPSY_PRIV_LANG_IS_UNPARENTHESISED(op), EPILEPSY_PRIV_call_0args,                       \
        EPILEPSY_PRIV_call_0op)                                                                    \
    (op, __VA_ARGS__),

#define EPILEPSY_PRIV_LANG_IS_UNPARENTHESISED(x)                                                   \
    EPILEPSY_PRIV_VARIADICS_SND(EPILEPSY_PRIV_LANG_IS_UNPARENTHESISED_TEST x, 1, ~)
#define EPILEPSY_PRIV_LANG_IS_UNPARENTHESISED_TEST(...) ~, 0

#define EPILEPSY_PRIV_call_0args(ident, ...)        (0args, ident, __VA_ARGS__)
#define EPILEPSY_PRIV_call_0op(op, _emptiness, ...) (0op, op, __VA_ARGS__)

#endif // EPILEPSY_LANG_H
