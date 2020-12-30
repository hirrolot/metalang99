#ifndef EPILEPSY_LANG_H
#define EPILEPSY_LANG_H

#include <epilepsy/priv/aux.h>
#include <epilepsy/priv/variadics/get.h>

#define call(...) EPILEPSY_PRIV_call(__VA_ARGS__)
#define v(...)    (0v, __VA_ARGS__),

#define EPILEPSY_PRIV_call(op, ...)                                                                \
    EPILEPSY_PRIV_IF(                                                                              \
        EPILEPSY_PRIV_LANG_IS_IDENT(op), EPILEPSY_PRIV_call_0args, EPILEPSY_PRIV_call_0op)         \
    (op, __VA_ARGS__),

#define EPILEPSY_PRIV_LANG_IS_IDENT(op)                                                            \
    EPILEPSY_PRIV_VARIADICS_SND(EPILEPSY_PRIV_LANG_IS_IDENT_TEST op, 1, ~)
#define EPILEPSY_PRIV_LANG_IS_IDENT_TEST(...) ~, 0

#define EPILEPSY_PRIV_call_0args(ident, ...)        (0args, ident, __VA_ARGS__)
#define EPILEPSY_PRIV_call_0op(op, _emptiness, ...) (0op, op, __VA_ARGS__)

#endif // EPILEPSY_LANG_H
