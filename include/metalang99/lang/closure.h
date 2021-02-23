#ifndef METALANG99_LANG_CLOSURE_H
#define METALANG99_LANG_CLOSURE_H

#include <metalang99/priv/util.h>

#define METALANG99_appl_IMPL(f, ...)                                                               \
    METALANG99_PRIV_IF(                                                                            \
        METALANG99_PRIV_IS_UNPARENTHESIZED(f),                                                     \
        METALANG99_PRIV_APPL_F,                                                                    \
        METALANG99_PRIV_APPL_CLOSURE)                                                              \
    (f, __VA_ARGS__)

#define METALANG99_PRIV_APPL_F(f, ...)                                                             \
    METALANG99_callTrivial(METALANG99_PRIV_CAT(METALANG99_PRIV_CURRY_, f##_ARITY), f, __VA_ARGS__)

#define METALANG99_PRIV_APPL_CLOSURE(closure, ...)                                                 \
    METALANG99_callTrivial(METALANG99_PRIV_EXPAND closure, __VA_ARGS__)

#define METALANG99_appl2_IMPL(f, a, b)                                                             \
    METALANG99_appl(METALANG99_callTrivial(METALANG99_appl, f, a), v(b))
#define METALANG99_appl3_IMPL(f, a, b, c)                                                          \
    METALANG99_appl(METALANG99_callTrivial(METALANG99_appl2, f, a, b), v(c))

#define METALANG99_PRIV_CURRY_1_IMPL(f, ...) METALANG99_callTrivial(f, __VA_ARGS__)
#define METALANG99_PRIV_CURRY_2_IMPL(...)    v((METALANG99_PRIV_CURRY_1, __VA_ARGS__))
#define METALANG99_PRIV_CURRY_3_IMPL(...)    v((METALANG99_PRIV_CURRY_2, __VA_ARGS__))
#define METALANG99_PRIV_CURRY_4_IMPL(...)    v((METALANG99_PRIV_CURRY_3, __VA_ARGS__))
#define METALANG99_PRIV_CURRY_5_IMPL(...)    v((METALANG99_PRIV_CURRY_4, __VA_ARGS__))
#define METALANG99_PRIV_CURRY_6_IMPL(...)    v((METALANG99_PRIV_CURRY_5, __VA_ARGS__))
#define METALANG99_PRIV_CURRY_7_IMPL(...)    v((METALANG99_PRIV_CURRY_6, __VA_ARGS__))
#define METALANG99_PRIV_CURRY_8_IMPL(...)    v((METALANG99_PRIV_CURRY_7, __VA_ARGS__))
#define METALANG99_PRIV_CURRY_9_IMPL(...)    v((METALANG99_PRIV_CURRY_8, __VA_ARGS__))
#define METALANG99_PRIV_CURRY_10_IMPL(...)   v((METALANG99_PRIV_CURRY_9, __VA_ARGS__))
#define METALANG99_PRIV_CURRY_11_IMPL(...)   v((METALANG99_PRIV_CURRY_10, __VA_ARGS__))
#define METALANG99_PRIV_CURRY_12_IMPL(...)   v((METALANG99_PRIV_CURRY_11, __VA_ARGS__))
#define METALANG99_PRIV_CURRY_13_IMPL(...)   v((METALANG99_PRIV_CURRY_12, __VA_ARGS__))
#define METALANG99_PRIV_CURRY_14_IMPL(...)   v((METALANG99_PRIV_CURRY_13, __VA_ARGS__))
#define METALANG99_PRIV_CURRY_15_IMPL(...)   v((METALANG99_PRIV_CURRY_14, __VA_ARGS__))
#define METALANG99_PRIV_CURRY_16_IMPL(...)   v((METALANG99_PRIV_CURRY_15, __VA_ARGS__))

#endif // METALANG99_LANG_CLOSURE_H
