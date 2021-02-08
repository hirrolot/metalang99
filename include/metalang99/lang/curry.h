#ifndef METALANG99_LANG_CURRY_H
#define METALANG99_LANG_CURRY_H

#include <metalang99/priv/util.h>

#define METALANG99_PRIV_CURRY(f, ...)                                                              \
    (METALANG99_PRIV_CAT(METALANG99_PRIV_CAT(METALANG99_PRIV_CURRY_, f##_ARITY), _CLOSURE),        \
     (f, __VA_ARGS__))

#define METALANG99_PRIV_CURRY_1_CLOSURE_IMPL(f, ...) METALANG99_callTrivial(f, __VA_ARGS__)
#define METALANG99_PRIV_CURRY_2_CLOSURE_IMPL(f, ...)                                               \
    v((METALANG99_PRIV_CURRY_1_CLOSURE, (f, __VA_ARGS__)))
#define METALANG99_PRIV_CURRY_3_CLOSURE_IMPL(f, ...)                                               \
    v((METALANG99_PRIV_CURRY_2_CLOSURE, (f, __VA_ARGS__)))
#define METALANG99_PRIV_CURRY_4_CLOSURE_IMPL(f, ...)                                               \
    v((METALANG99_PRIV_CURRY_3_CLOSURE, (f, __VA_ARGS__)))
#define METALANG99_PRIV_CURRY_5_CLOSURE_IMPL(f, ...)                                               \
    v((METALANG99_PRIV_CURRY_4_CLOSURE, (f, __VA_ARGS__)))
#define METALANG99_PRIV_CURRY_6_CLOSURE_IMPL(f, ...)                                               \
    v((METALANG99_PRIV_CURRY_5_CLOSURE, (f, __VA_ARGS__)))
#define METALANG99_PRIV_CURRY_7_CLOSURE_IMPL(f, ...)                                               \
    v((METALANG99_PRIV_CURRY_6_CLOSURE, (f, __VA_ARGS__)))
#define METALANG99_PRIV_CURRY_8_CLOSURE_IMPL(f, ...)                                               \
    v((METALANG99_PRIV_CURRY_7_CLOSURE, (f, __VA_ARGS__)))
#define METALANG99_PRIV_CURRY_9_CLOSURE_IMPL(f, ...)                                               \
    v((METALANG99_PRIV_CURRY_8_CLOSURE, (f, __VA_ARGS__)))
#define METALANG99_PRIV_CURRY_10_CLOSURE_IMPL(f, ...)                                              \
    v((METALANG99_PRIV_CURRY_9_CLOSURE, (f, __VA_ARGS__)))
#define METALANG99_PRIV_CURRY_11_CLOSURE_IMPL(f, ...)                                              \
    v((METALANG99_PRIV_CURRY_10_CLOSURE, (f, __VA_ARGS__)))
#define METALANG99_PRIV_CURRY_12_CLOSURE_IMPL(f, ...)                                              \
    v((METALANG99_PRIV_CURRY_11_CLOSURE, (f, __VA_ARGS__)))
#define METALANG99_PRIV_CURRY_13_CLOSURE_IMPL(f, ...)                                              \
    v((METALANG99_PRIV_CURRY_12_CLOSURE, (f, __VA_ARGS__)))
#define METALANG99_PRIV_CURRY_14_CLOSURE_IMPL(f, ...)                                              \
    v((METALANG99_PRIV_CURRY_13_CLOSURE, (f, __VA_ARGS__)))
#define METALANG99_PRIV_CURRY_15_CLOSURE_IMPL(f, ...)                                              \
    v((METALANG99_PRIV_CURRY_14_CLOSURE, (f, __VA_ARGS__)))
#define METALANG99_PRIV_CURRY_16_CLOSURE_IMPL(f, ...)                                              \
    v((METALANG99_PRIV_CURRY_15_CLOSURE, (f, __VA_ARGS__)))

#endif // METALANG99_LANG_CURRY_H
