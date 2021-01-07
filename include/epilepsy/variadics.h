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
#define EPILEPSY_variadicsCount(...) EPILEPSY_call(EPILEPSY_variadicsCount, __VA_ARGS__)

/**
 * Extracts a head of its arguments.
 */
#define EPILEPSY_variadicsHead(...) EPILEPSY_call(EPILEPSY_variadicsHead, __VA_ARGS__)

/**
 * Extracts a tail of its arguments.
 */
#define EPILEPSY_variadicsTail(...) EPILEPSY_call(EPILEPSY_variadicsTail, __VA_ARGS__)

/**
 * Applies given arguments to @p f.
 */
#define EPILEPSY_variadicsAppl(f, ...) EPILEPSY_call(EPILEPSY_variadicsAppl, f __VA_ARGS__)

/**
 * Applies given arguments to @p f with the arity @p arity.
 */
#define EPILEPSY_variadicsApplWithArity(f, arity, ...)                                             \
    EPILEPSY_call(EPILEPSY_variadicsApplWithArity, f arity __VA_ARGS__)
// }

#ifndef DOXYGEN_IGNORE

// Implementation {
#define EPILEPSY_variadicsCount_IMPL(...)   v(EPILEPSY_PRIV_VARIADICS_COUNT(__VA_ARGS__))
#define EPILEPSY_variadicsHead_IMPL(x, ...) v(x)
#define EPILEPSY_variadicsTail_IMPL(x, ...) v(__VA_ARGS__)

#define EPILEPSY_variadicsAppl_IMPL(f, ...)                                                        \
    EPILEPSY_variadicsApplWithArity(v(f), v(EPILEPSY_PRIV_DETERMINE_ARITY(f)), v(__VA_ARGS__))

#define EPILEPSY_variadicsApplWithArity_IMPL(f, arity, ...)                                        \
    EPILEPSY_call(                                                                                 \
        EPILEPSY_PRIV_variadicsApplWithArity_AUX,                                                  \
        v(f, arity) EPILEPSY_variadicsCount(v(__VA_ARGS__)) v(__VA_ARGS__, ~))
#define EPILEPSY_PRIV_variadicsApplWithArity_AUX_IMPL(f, arity, count, ...)                        \
    EPILEPSY_call(                                                                                 \
        EPILEPSY_if(                                                                               \
            EPILEPSY_uintEq(v(count), v(1)),                                                       \
            v(EPILEPSY_PRIV_variadicsApplWithArity_DONE),                                          \
            v(EPILEPSY_PRIV_variadicsApplWithArity_PROGRESS)),                                     \
        v(f, arity, count, __VA_ARGS__))
#define EPILEPSY_PRIV_variadicsApplWithArity_DONE_IMPL(f, arity, _count, last, _)                  \
    EPILEPSY_applWithArity(v(f), v(arity), v(last))
#define EPILEPSY_PRIV_variadicsApplWithArity_PROGRESS_IMPL(f, arity, count, x, ...)                \
    EPILEPSY_call(                                                                                 \
        EPILEPSY_PRIV_variadicsApplWithArity_AUX,                                                  \
        EPILEPSY_applWithArity(v(f), v(arity), v(x)) v(arity) EPILEPSY_uintDec(v(count))           \
            v(__VA_ARGS__))
// }

// Arity specifiers {
#define EPILEPSY_variadicsCount_ARITY         1
#define EPILEPSY_variadicsHead_ARITY          1
#define EPILEPSY_variadicsTail_ARITY          1
#define EPILEPSY_variadicsAppl_ARITY          2
#define EPILEPSY_variadicsApplWithArity_ARITY 3
// }

#endif // DOXYGEN_IGNORE

#endif // EPILEPSY_VARIADICS_H
