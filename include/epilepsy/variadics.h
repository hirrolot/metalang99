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
#define epVariadicsCount(...) epCall(epVariadicsCount, __VA_ARGS__)

/**
 * Extracts a head of its arguments.
 */
#define epVariadicsHead(...) epCall(epVariadicsHead, __VA_ARGS__)

/**
 * Extracts a tail of its arguments.
 */
#define epVariadicsTail(...) epCall(epVariadicsTail, __VA_ARGS__)

#define epVariadicsApply(f, ...) epCall(epVariadicsApply, f __VA_ARGS__)

#define epVariadicsApplyWithArity(f, arity, ...)                                                   \
    epCall(epVariadicsApplyWithArity, f arity __VA_ARGS__)
// }

#ifndef DOXYGEN_IGNORE

// Implementation {
#define epVariadicsCount_IMPL(...)   v(EPILEPSY_PRIV_VARIADICS_COUNT(__VA_ARGS__))
#define epVariadicsHead_IMPL(x, ...) v(x)
#define epVariadicsTail_IMPL(x, ...) v(__VA_ARGS__)

#define epVariadicsApply_IMPL(f, ...)                                                              \
    epVariadicsApplyWithArity(v(f), v(EPILEPSY_PRIV_DETERMINE_ARITY(f)), v(__VA_ARGS__))

#define epVariadicsApplyWithArity_IMPL(f, arity, ...)                                              \
    epCall(                                                                                        \
        EPILEPSY_PRIV_VARIADICS_APPLY_WITH_ARITY_AUX,                                              \
        v(f, arity) epVariadicsCount(v(__VA_ARGS__)) v(__VA_ARGS__, ~))
#define EPILEPSY_PRIV_VARIADICS_APPLY_WITH_ARITY_AUX_IMPL(f, arity, count, ...)                    \
    epCall(                                                                                        \
        epIf(                                                                                      \
            epUIntEq(v(count), v(1)),                                                              \
            v(EPILEPSY_PRIV_VARIADICS_APPLY_WITH_ARITY_DONE),                                      \
            v(EPILEPSY_PRIV_VARIADICS_APPLY_WITH_ARITY_PROGRESS)),                                 \
        v(f, arity, count, __VA_ARGS__))
#define EPILEPSY_PRIV_VARIADICS_APPLY_WITH_ARITY_DONE_IMPL(f, arity, _count, last, _)              \
    epApplyWithArity(v(f), v(arity), v(last))
#define EPILEPSY_PRIV_VARIADICS_APPLY_WITH_ARITY_PROGRESS_IMPL(f, arity, count, x, ...)            \
    epCall(                                                                                        \
        EPILEPSY_PRIV_VARIADICS_APPLY_WITH_ARITY_AUX,                                              \
        epApplyWithArity(v(f), v(arity), v(x)) v(arity) epUIntDec(v(count)) v(__VA_ARGS__))
// }

// Arity specifiers {
#define epVariadicsCount_ARITY          1
#define epVariadicsHead_ARITY           1
#define epVariadicsTail_ARITY           1
#define epVariadicsApply_ARITY          2
#define epVariadicsApplyWithArity_ARITY 3
// }

#endif // DOXYGEN_IGNORE

#endif // EPILEPSY_VARIADICS_H
