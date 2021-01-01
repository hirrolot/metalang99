/**
 * @file
 * Variadic macro utilities.
 */

#ifndef EPILEPSY_VARIADICS_H
#define EPILEPSY_VARIADICS_H

#include <epilepsy/lang.h>
#include <epilepsy/priv/variadics/count.h>

// Desugaring {
/**
 * Computes a count of its arguments.
 */
#define EPILEPSY_VARIADICS_COUNT(...) EPILEPSY_DESUGAR(EPILEPSY_VARIADICS_COUNT, __VA_ARGS__)

/**
 * Extracts a head of its arguments.
 */
#define EPILEPSY_VARIADICS_HEAD(...) EPILEPSY_DESUGAR(EPILEPSY_VARIADICS_HEAD, __VA_ARGS__)

/**
 * Extracts a tail of its arguments.
 */
#define EPILEPSY_VARIADICS_TAIL(...) EPILEPSY_DESUGAR(EPILEPSY_VARIADICS_TAIL, __VA_ARGS__)

#define EPILEPSY_VARIADICS_APPLY(f, ...) EPILEPSY_DESUGAR(EPILEPSY_VARIADICS_APPLY, f __VA_ARGS__)

#define EPILEPSY_VARIADICS_APPLY_WITH_ARITY(f, arity, ...)                                         \
    EPILEPSY_DESUGAR(EPILEPSY_VARIADICS_APPLY_WITH_ARITY, f arity __VA_ARGS__)
// }

#ifndef DOXYGEN_IGNORE

// Implementation {
#define EPILEPSY_VARIADICS_COUNT_IMPL(...)   v(EPILEPSY_PRIV_VARIADICS_COUNT(__VA_ARGS__))
#define EPILEPSY_VARIADICS_HEAD_IMPL(x, ...) v(x)
#define EPILEPSY_VARIADICS_TAIL_IMPL(x, ...) v(__VA_ARGS__)

#define EPILEPSY_VARIADICS_APPLY_IMPL(f, ...)                                                      \
    EPILEPSY_CALL(                                                                                 \
        EPILEPSY_PRIV_VARIADICS_APPLY_AUX,                                                         \
        v(f) EPILEPSY_VARIADICS_COUNT(v(__VA_ARGS__)) v(__VA_ARGS__, ~))
#define EPILEPSY_PRIV_VARIADICS_APPLY_AUX(f, count, ...)                                           \
    EPILEPSY_CALL(                                                                                 \
        EPILEPSY_IF(                                                                               \
            EPILEPSY_UIntEq(v(count), v(1)), v(EPILEPSY_PRIV_VARIADICS_APPLY_DONE),                \
            v(EPILEPSY_PRIV_VARIADICS_APPLY_PROGRESS)),                                            \
        v(f, count, __VA_ARGS__))
#define EPILEPSY_PRIV_VARIADICS_APPLY_DONE(f, _count, last, _) EPILEPSY_APPLY(v(f), v(last))
#define EPILEPSY_PRIV_VARIADICS_APPLY_PROGRESS(f, count, x, ...)                                   \
    EPILEPSY_CALL(                                                                                 \
        EPILEPSY_PRIV_VARIADICS_APPLY_AUX,                                                         \
        EPILEPSY_APPLY(v(f), v(x)) EPILEPSY_UIntDec(v(count)) v(__VA_ARGS__))

#define EPILEPSY_VARIADICS_APPLY_WITH_ARITY_IMPL(f, arity, ...)                                    \
    EPILEPSY_CALL(                                                                                 \
        EPILEPSY_PRIV_VARIADICS_APPLY_WITH_ARITY_AUX,                                              \
        v(f, arity) EPILEPSY_VARIADICS_COUNT(v(__VA_ARGS__)) v(__VA_ARGS__, ~))
#define EPILEPSY_PRIV_VARIADICS_APPLY_WITH_ARITY_AUX(f, arity, count, ...)                         \
    EPILEPSY_CALL(                                                                                 \
        EPILEPSY_IF(                                                                               \
            EPILEPSY_UIntEq(v(count), v(1)), v(EPILEPSY_PRIV_VARIADICS_APPLY_WITH_ARITY_DONE),     \
            v(EPILEPSY_PRIV_VARIADICS_APPLY_WITH_ARITY_PROGRESS)),                                 \
        v(f, arity, count, __VA_ARGS__))
#define EPILEPSY_PRIV_VARIADICS_APPLY_WITH_ARITY_DONE(f, arity, _count, last, _)                   \
    EPILEPSY_APPLY_WITH_ARITY(v(f), v(arity), v(last))
#define EPILEPSY_PRIV_VARIADICS_APPLY_WITH_ARITY_PROGRESS(f, arity, count, x, ...)                 \
    EPILEPSY_CALL(                                                                                 \
        EPILEPSY_PRIV_VARIADICS_APPLY_WITH_ARITY_AUX,                                              \
        EPILEPSY_APPLY_WITH_ARITY(v(f), v(arity), v(x)) v(arity) EPILEPSY_UIntDec(v(count))        \
            v(__VA_ARGS__))
// }

// Arity specifiers {
#define EPILEPSY_VARIADICS_COUNT_IMPL_ARITY            1
#define EPILEPSY_VARIADICS_HEAD_IMPL_ARITY             1
#define EPILEPSY_VARIADICS_TAIL_IMPL_ARITY             1
#define EPILEPSY_VARIADICS_APPLY_IMPL_ARITY            2
#define EPILEPSY_VARIADICS_APPLY_WITH_ARITY_IMPL_ARITY 3
// }

#endif // DOXYGEN_IGNORE

#endif // EPILEPSY_VARIADICS_H
