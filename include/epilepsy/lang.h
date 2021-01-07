#ifndef EPILEPSY_LANG_H
#define EPILEPSY_LANG_H

#include <epilepsy/lang/closure.h>
#include <epilepsy/priv/aux.h>

// Desugaring {

/**
 * Invokes a metafunction with arguments.
 */
#define epCall(...) EPILEPSY_PRIV_epCall(__VA_ARGS__)

/**
 * Applies arguments to @p f.
 */
#define epApply(f, ...) EPILEPSY_PRIV_epApply(f, __VA_ARGS__)

/**
 * Applies @p a and @p b to @p f.
 */
#define epApply2(f, a, b) epCall(epApply2, f a b)

/**
 * Applies arguments to @p f with the arity @p arity.
 */
#define epApplyWithArity(f, arity, ...) epCall(epApplyWithArity, f arity __VA_ARGS__)

/**
 * Represents a <a href="https://en.wikipedia.org/wiki/Beta_normal_form">normal form</a> of an
 * Epilepsy term.
 */
#define v(...) (0v, __VA_ARGS__),

/**
 * Emits a fatal error.
 */
#define epFatal(f, ...) (0error, f, __VA_ARGS__),

/**
 * Emits a debugging message.
 */
#define epDbg(...) (0dbg, __VA_ARGS__),
// }

#ifndef DOXYGEN_IGNORE

// Implementation {
#define EPILEPSY_PRIV_epCall(op, ...)                                                              \
    EPILEPSY_PRIV_IF(                                                                              \
        EPILEPSY_PRIV_IS_UNPARENTHESISED(op), EPILEPSY_PRIV_call_0args, EPILEPSY_PRIV_call_0op)    \
    (op, __VA_ARGS__),
#define EPILEPSY_PRIV_call_0args(ident, ...)        (0args, ident##_IMPL, __VA_ARGS__)
#define EPILEPSY_PRIV_call_0op(op, _emptiness, ...) (0op, op, __VA_ARGS__)

#define EPILEPSY_PRIV_epApply(f, ...)                                                              \
    EPILEPSY_PRIV_IF(                                                                              \
        EPILEPSY_PRIV_IS_UNPARENTHESISED(f),                                                       \
        EPILEPSY_PRIV_epApply_IDENT,                                                               \
        EPILEPSY_PRIV_epApply_TERM)                                                                \
    (f, __VA_ARGS__)
#define EPILEPSY_PRIV_epApply_IDENT(f, ...)            epCall(epApply, v(f) __VA_ARGS__)
#define EPILEPSY_PRIV_epApply_TERM(f, _emptiness, ...) epCall(epApply, f, __VA_ARGS__)
//

#endif // DOXYGEN_IGNORE

#endif // EPILEPSY_LANG_H
