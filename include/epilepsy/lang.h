#ifndef EPILEPSY_LANG_H
#define EPILEPSY_LANG_H

#include <epilepsy/priv/aux.h>
#include <epilepsy/priv/pair.h>
#include <epilepsy/priv/variadics/get.h>

#define EPILEPSY_CALL(...)        EPILEPSY_PRIV_EPILEPSY_CALL(__VA_ARGS__)
#define EPILEPSY_APPLY(f, ...)    EPILEPSY_DESUGAR(EPILEPSY_APPLY, f __VA_ARGS__)
#define EPILEPSY_APPLY_2(f, a, b) EPILEPSY_DESUGAR(EPILEPSY_APPLY_2, f a b)
#define EPILEPSY_APPLY_WITH_ARITY(f, arity, ...)                                                   \
    EPILEPSY_DESUGAR(EPILEPSY_APPLY_WITH_ARITY, f arity __VA_ARGS__)
#define v(...) (0v, __VA_ARGS__),

#define EPILEPSY_DESUGAR(f, ...) EPILEPSY_CALL(f##_IMPL, __VA_ARGS__)

#define EPILEPSY_PRIV_EPILEPSY_CALL(op, ...)                                                       \
    EPILEPSY_PRIV_IF(                                                                              \
        EPILEPSY_PRIV_LANG_IS_UNPARENTHESISED(op),                                                 \
        EPILEPSY_PRIV_call_0args,                                                                  \
        EPILEPSY_PRIV_call_0op)                                                                    \
    (op, __VA_ARGS__),

#define EPILEPSY_PRIV_LANG_IS_UNPARENTHESISED(x)                                                   \
    EPILEPSY_PRIV_VARIADICS_SND(EPILEPSY_PRIV_LANG_IS_UNPARENTHESISED_TEST x, 1, ~)
#define EPILEPSY_PRIV_LANG_IS_UNPARENTHESISED_TEST(...) ~, 0

#define EPILEPSY_PRIV_call_0args(ident, ...)        (0args, ident, __VA_ARGS__)
#define EPILEPSY_PRIV_call_0op(op, _emptiness, ...) (0op, op, __VA_ARGS__)

#define EPILEPSY_APPLY_IMPL(f, ...)                                                                \
    EPILEPSY_PRIV_IF(                                                                              \
        EPILEPSY_PRIV_LANG_IS_UNPARENTHESISED(f),                                                  \
        EPILEPSY_PRIV_APPLY_F,                                                                     \
        EPILEPSY_PRIV_APPLY_CLOSURE)                                                               \
    (f, __VA_ARGS__)
#define EPILEPSY_PRIV_APPLY_F(f, ...)                                                              \
    EPILEPSY_PRIV_APPLY_WITHOUT_ARGS(EPILEPSY_PRIV_CLOSURE(v(f), v(f##_ARITY), v(__VA_ARGS__)))
#define EPILEPSY_PRIV_APPLY_CLOSURE(closure, ...)                                                  \
    EPILEPSY_CALL(                                                                                 \
        EPILEPSY_PRIV_CLOSURE_F(closure), v(EPILEPSY_PRIV_CLOSURE_ENV(closure), __VA_ARGS__))

#define EPILEPSY_APPLY_2_IMPL(f, a, b) EPILEPSY_APPLY(EPILEPSY_APPLY(v(f), v(a)), v(b))

#define EPILEPSY_APPLY_WITH_ARITY_IMPL(f, arity, ...)                                              \
    EPILEPSY_PRIV_IF(                                                                              \
        EPILEPSY_PRIV_LANG_IS_UNPARENTHESISED(f),                                                  \
        EPILEPSY_PRIV_APPLY_WITH_ARITY_F,                                                          \
        EPILEPSY_PRIV_APPLY_WITH_ARITY_CLOSURE)                                                    \
    (f, arity, __VA_ARGS__)
#define EPILEPSY_PRIV_APPLY_WITH_ARITY_F(f, arity, ...)                                            \
    EPILEPSY_PRIV_APPLY_WITHOUT_ARGS(EPILEPSY_PRIV_CLOSURE(v(f), v(arity), v(__VA_ARGS__)))
#define EPILEPSY_PRIV_APPLY_WITH_ARITY_CLOSURE(closure, _arity, ...)                               \
    EPILEPSY_CALL(                                                                                 \
        EPILEPSY_PRIV_CLOSURE_F(closure), v(EPILEPSY_PRIV_CLOSURE_ENV(closure), __VA_ARGS__))

#define EPILEPSY_PRIV_APPLY_WITHOUT_ARGS(closure)                                                  \
    EPILEPSY_DESUGAR(EPILEPSY_PRIV_APPLY_WITHOUT_ARGS, closure)
#define EPILEPSY_PRIV_APPLY_WITHOUT_ARGS_IMPL(closure)                                             \
    EPILEPSY_CALL(EPILEPSY_PRIV_CLOSURE_F(closure), v(EPILEPSY_PRIV_CLOSURE_ENV(closure)))

#define EPILEPSY_PRIV_CLOSURE(f, arity, ...)                                                       \
    EPILEPSY_DESUGAR(EPILEPSY_PRIV_CLOSURE, f arity __VA_ARGS__)
#define EPILEPSY_PRIV_CLOSURE_IMPL(f, arity, ...)                                                  \
    EPILEPSY_PRIV_MATCH(EPILEPSY_PRIV_CURRY_, arity)(f, __VA_ARGS__)

#define EPILEPSY_PRIV_CURRY_1(f, ...)                                                              \
    EPILEPSY_PRIV_CLOSURE_UNCURRIED(v(EPILEPSY_PRIV_CURRY_1_CLOSURE), v(f, __VA_ARGS__))
#define EPILEPSY_PRIV_CURRY_1_CLOSURE(f, ...) EPILEPSY_CALL(f, v(__VA_ARGS__))

#define EPILEPSY_PRIV_CURRY_2(f, ...)                                                              \
    EPILEPSY_PRIV_CLOSURE_UNCURRIED(v(EPILEPSY_PRIV_CURRY_2_CLOSURE), v(f, __VA_ARGS__))
#define EPILEPSY_PRIV_CURRY_2_CLOSURE(f, ...)                                                      \
    EPILEPSY_PRIV_CLOSURE_UNCURRIED(v(EPILEPSY_PRIV_CURRY_1_CLOSURE), v(f, __VA_ARGS__))

#define EPILEPSY_PRIV_CURRY_3(f, ...)                                                              \
    EPILEPSY_PRIV_CLOSURE_UNCURRIED(v(EPILEPSY_PRIV_CURRY_3_CLOSURE), v(f, __VA_ARGS__))
#define EPILEPSY_PRIV_CURRY_3_CLOSURE(f, ...)                                                      \
    EPILEPSY_PRIV_CLOSURE_UNCURRIED(v(EPILEPSY_PRIV_CURRY_2_CLOSURE), v(f, __VA_ARGS__))

#define EPILEPSY_PRIV_CURRY_4(f, ...)                                                              \
    EPILEPSY_PRIV_CLOSURE_UNCURRIED(v(EPILEPSY_PRIV_CURRY_4_CLOSURE), v(f, __VA_ARGS__))
#define EPILEPSY_PRIV_CURRY_4_CLOSURE(f, ...)                                                      \
    EPILEPSY_PRIV_CLOSURE_UNCURRIED(v(EPILEPSY_PRIV_CURRY_3_CLOSURE), v(f, __VA_ARGS__))

#define EPILEPSY_PRIV_CURRY_5(f, ...)                                                              \
    EPILEPSY_PRIV_CLOSURE_UNCURRIED(v(EPILEPSY_PRIV_CURRY_5_CLOSURE), v(f, __VA_ARGS__))
#define EPILEPSY_PRIV_CURRY_5_CLOSURE(f, ...)                                                      \
    EPILEPSY_PRIV_CLOSURE_UNCURRIED(v(EPILEPSY_PRIV_CURRY_4_CLOSURE), v(f, __VA_ARGS__))

#define EPILEPSY_PRIV_CURRY_6(f, ...)                                                              \
    EPILEPSY_PRIV_CLOSURE_UNCURRIED(v(EPILEPSY_PRIV_CURRY_6_CLOSURE), v(f, __VA_ARGS__))
#define EPILEPSY_PRIV_CURRY_6_CLOSURE(f, ...)                                                      \
    EPILEPSY_PRIV_CLOSURE_UNCURRIED(v(EPILEPSY_PRIV_CURRY_5_CLOSURE), v(f, __VA_ARGS__))

#define EPILEPSY_PRIV_CURRY_7(f, ...)                                                              \
    EPILEPSY_PRIV_CLOSURE_UNCURRIED(v(EPILEPSY_PRIV_CURRY_7_CLOSURE), v(f, __VA_ARGS__))
#define EPILEPSY_PRIV_CURRY_7_CLOSURE(f, ...)                                                      \
    EPILEPSY_PRIV_CLOSURE_UNCURRIED(v(EPILEPSY_PRIV_CURRY_6_CLOSURE), v(f, __VA_ARGS__))

#define EPILEPSY_PRIV_CURRY_8(f, ...)                                                              \
    EPILEPSY_PRIV_CLOSURE_UNCURRIED(v(EPILEPSY_PRIV_CURRY_8_CLOSURE), v(f, __VA_ARGS__))
#define EPILEPSY_PRIV_CURRY_8_CLOSURE(f, ...)                                                      \
    EPILEPSY_PRIV_CLOSURE_UNCURRIED(v(EPILEPSY_PRIV_CURRY_7_CLOSURE), v(f, __VA_ARGS__))

#define EPILEPSY_PRIV_CURRY_9(f, ...)                                                              \
    EPILEPSY_PRIV_CLOSURE_UNCURRIED(v(EPILEPSY_PRIV_CURRY_9_CLOSURE), v(f, __VA_ARGS__))
#define EPILEPSY_PRIV_CURRY_9_CLOSURE(f, ...)                                                      \
    EPILEPSY_PRIV_CLOSURE_UNCURRIED(v(EPILEPSY_PRIV_CURRY_8_CLOSURE), v(f, __VA_ARGS__))

#define EPILEPSY_PRIV_CURRY_10(f, ...)                                                             \
    EPILEPSY_PRIV_CLOSURE_UNCURRIED(v(EPILEPSY_PRIV_CURRY_10_CLOSURE), v(f, __VA_ARGS__))
#define EPILEPSY_PRIV_CURRY_10_CLOSURE(f, ...)                                                     \
    EPILEPSY_PRIV_CLOSURE_UNCURRIED(v(EPILEPSY_PRIV_CURRY_9_CLOSURE), v(f, __VA_ARGS__))

#define EPILEPSY_PRIV_CURRY_11(f, ...)                                                             \
    EPILEPSY_PRIV_CLOSURE_UNCURRIED(v(EPILEPSY_PRIV_CURRY_11_CLOSURE), v(f, __VA_ARGS__))
#define EPILEPSY_PRIV_CURRY_11_CLOSURE(f, ...)                                                     \
    EPILEPSY_PRIV_CLOSURE_UNCURRIED(v(EPILEPSY_PRIV_CURRY_10_CLOSURE), v(f, __VA_ARGS__))

#define EPILEPSY_PRIV_CURRY_12(f, ...)                                                             \
    EPILEPSY_PRIV_CLOSURE_UNCURRIED(v(EPILEPSY_PRIV_CURRY_12_CLOSURE), v(f, __VA_ARGS__))
#define EPILEPSY_PRIV_CURRY_12_CLOSURE(f, ...)                                                     \
    EPILEPSY_PRIV_CLOSURE_UNCURRIED(v(EPILEPSY_PRIV_CURRY_11_CLOSURE), v(f, __VA_ARGS__))

#define EPILEPSY_PRIV_CURRY_13(f, ...)                                                             \
    EPILEPSY_PRIV_CLOSURE_UNCURRIED(v(EPILEPSY_PRIV_CURRY_13_CLOSURE), v(f, __VA_ARGS__))
#define EPILEPSY_PRIV_CURRY_13_CLOSURE(f, ...)                                                     \
    EPILEPSY_PRIV_CLOSURE_UNCURRIED(v(EPILEPSY_PRIV_CURRY_12_CLOSURE), v(f, __VA_ARGS__))

#define EPILEPSY_PRIV_CURRY_14(f, ...)                                                             \
    EPILEPSY_PRIV_CLOSURE_UNCURRIED(v(EPILEPSY_PRIV_CURRY_14_CLOSURE), v(f, __VA_ARGS__))
#define EPILEPSY_PRIV_CURRY_14_CLOSURE(f, ...)                                                     \
    EPILEPSY_PRIV_CLOSURE_UNCURRIED(v(EPILEPSY_PRIV_CURRY_13_CLOSURE), v(f, __VA_ARGS__))

#define EPILEPSY_PRIV_CURRY_15(f, ...)                                                             \
    EPILEPSY_PRIV_CLOSURE_UNCURRIED(v(EPILEPSY_PRIV_CURRY_15_CLOSURE), v(f, __VA_ARGS__))
#define EPILEPSY_PRIV_CURRY_15_CLOSURE(f, ...)                                                     \
    EPILEPSY_PRIV_CLOSURE_UNCURRIED(v(EPILEPSY_PRIV_CURRY_14_CLOSURE), v(f, __VA_ARGS__))

#define EPILEPSY_PRIV_CURRY_16(f, ...)                                                             \
    EPILEPSY_PRIV_CLOSURE_UNCURRIED(v(EPILEPSY_PRIV_CURRY_16_CLOSURE), v(f, __VA_ARGS__))
#define EPILEPSY_PRIV_CURRY_16_CLOSURE(f, ...)                                                     \
    EPILEPSY_PRIV_CLOSURE_UNCURRIED(v(EPILEPSY_PRIV_CURRY_15_CLOSURE), v(f, __VA_ARGS__))

#define EPILEPSY_PRIV_CLOSURE_UNCURRIED(f, ...)                                                    \
    EPILEPSY_DESUGAR(EPILEPSY_PRIV_CLOSURE_UNCURRIED, f __VA_ARGS__)
#define EPILEPSY_PRIV_CLOSURE_UNCURRIED_IMPL(f, ...) v(EPILEPSY_PRIV_PAIR(f, (__VA_ARGS__)))

#define EPILEPSY_PRIV_CLOSURE_F EPILEPSY_PRIV_PAIR_FST
#define EPILEPSY_PRIV_CLOSURE_ENV(closure)                                                         \
    EPILEPSY_PRIV_UNPARENTHESISE(EPILEPSY_PRIV_PAIR_SND(closure))

#endif // EPILEPSY_LANG_H
