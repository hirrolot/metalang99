#ifndef EPILEPSY_LANG_CLOSURE_H
#define EPILEPSY_LANG_CLOSURE_H

#include <epilepsy/lang/curry.h>
#include <epilepsy/priv/pair.h>

#define EPILEPSY_appl_IMPL(f, ...)                                                                 \
    EPILEPSY_PRIV_IF(                                                                              \
        EPILEPSY_PRIV_IS_UNPARENTHESISED(f),                                                       \
        EPILEPSY_PRIV_APPL_WITH_ARITY_F,                                                           \
        EPILEPSY_PRIV_APPL_WITH_ARITY_CLOSURE)                                                     \
    (f, __VA_ARGS__)
#define EPILEPSY_PRIV_APPL_WITH_ARITY_F(f, ...)                                                    \
    EPILEPSY_PRIV_APPL(                                                                            \
        EPILEPSY_PRIV_CURRY(f, __VA_ARGS__),                                                       \
        EPILEPSY_PRIV_CLOSURE_ENV(EPILEPSY_PRIV_CURRY(f, __VA_ARGS__)))
#define EPILEPSY_PRIV_APPL_WITH_ARITY_CLOSURE(closure, ...)                                        \
    EPILEPSY_PRIV_APPL(closure, EPILEPSY_PRIV_CLOSURE_ENV(closure), __VA_ARGS__)

#define EPILEPSY_PRIV_APPL(closure, ...)                                                           \
    EPILEPSY_callTrivial(EPILEPSY_PRIV_CLOSURE_F(closure), __VA_ARGS__)

#define EPILEPSY_appl2_IMPL(f, a, b) EPILEPSY_appl(EPILEPSY_callTrivial(EPILEPSY_appl, f, a), v(b))
#define EPILEPSY_appl3_IMPL(f, a, b, c)                                                            \
    EPILEPSY_appl(EPILEPSY_callTrivial(EPILEPSY_appl2, f, a, b), v(c))

#define EPILEPSY_PRIV_CLOSURE_F EPILEPSY_PRIV_PAIR_FST
#define EPILEPSY_PRIV_CLOSURE_ENV(closure)                                                         \
    EPILEPSY_PRIV_UNPARENTHESISE(EPILEPSY_PRIV_PAIR_SND(closure))

#endif // EPILEPSY_LANG_CLOSURE_H
