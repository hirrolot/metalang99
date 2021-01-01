/**
 * @file
 * Choice types.
 */

#ifndef EPILEPSY_CHOICE_H
#define EPILEPSY_CHOICE_H

#include <epilepsy/aux.h>
#include <epilepsy/lang.h>
#include <epilepsy/priv/aux.h>
#include <epilepsy/priv/overload.h>
#include <epilepsy/priv/pair.h>

// Desugaring {
/**
 * Constructs an instance of a choice type.
 */
#define EPILEPSY_CHOICE(tag, ...) EPILEPSY_DESUGAR(EPILEPSY_CHOICE, tag __VA_ARGS__)

/**
 * The same as #EPILEPSY_CHOICE but does not require additional arguments.
 */
#define EPILEPSY_CHOICE_EMPTY(tag) EPILEPSY_DESUGAR(EPILEPSY_CHOICE_EMPTY, tag)

/**
 * Matches the instance @p choice of a choice type.
 */
#define EPILEPSY_MATCH(choice, matcher) EPILEPSY_DESUGAR(EPILEPSY_MATCH, choice matcher)

/**
 * The same as #EPILEPSY_MATCH but supplies additional arguments to all branches.
 */
#define EPILEPSY_MATCH_WITH_ARGS(choice, matcher, ...)                                             \
    EPILEPSY_DESUGAR(EPILEPSY_MATCH_WITH_ARGS, choice matcher __VA_ARGS__)
// }

#ifndef DOXYGEN_IGNORE

// Implementation {
#define EPILEPSY_CHOICE_IMPL(tag, ...)  v(EPILEPSY_PRIV_PAIR(tag, 0non_empty(__VA_ARGS__)))
#define EPILEPSY_CHOICE_EMPTY_IMPL(tag) v(EPILEPSY_PRIV_PAIR(tag, 0empty()))

#define EPILEPSY_MATCH_IMPL(choice, matcher)                                                       \
    EPILEPSY_CALL(                                                                                 \
        EPILEPSY_PRIV_MATCH(matcher, EPILEPSY_PRIV_CHOICE_TAG(choice)),                            \
        v(EPILEPSY_PRIV_CHOICE_DATA(choice)))

#define EPILEPSY_MATCH_WITH_ARGS_IMPL(choice, matcher, ...)                                        \
    EPILEPSY_PRIV_IF(                                                                              \
        EPILEPSY_PRIV_CHOICE_IS_EMPTY(choice), EPILEPSY_PRIV_MATCH_WITH_ARGS_EMPTY,                \
        EPILEPSY_PRIV_MATCH_WITH_ARGS_NON_EMPTY)                                                   \
    (choice, matcher, __VA_ARGS__)
#define EPILEPSY_PRIV_MATCH_WITH_ARGS_EMPTY(choice, matcher, ...)                                  \
    EPILEPSY_CALL(EPILEPSY_PRIV_MATCH(matcher, EPILEPSY_PRIV_CHOICE_TAG(choice)), v(__VA_ARGS__))
#define EPILEPSY_PRIV_MATCH_WITH_ARGS_NON_EMPTY(choice, matcher, ...)                              \
    EPILEPSY_CALL(                                                                                 \
        EPILEPSY_PRIV_MATCH(matcher, EPILEPSY_PRIV_CHOICE_TAG(choice)),                            \
        v(EPILEPSY_PRIV_CHOICE_DATA(choice), __VA_ARGS__))

#define EPILEPSY_PRIV_CHOICE_IS_EMPTY(choice)                                                      \
    EPILEPSY_PRIV_MATCH(EPILEPSY_PRIV_CHOICE_IS_EMPTY_, EPILEPSY_PRIV_PAIR_SND(choice))
#define EPILEPSY_PRIV_CHOICE_IS_EMPTY_0non_empty(...) 0
#define EPILEPSY_PRIV_CHOICE_IS_EMPTY_0empty(...)     1

#define EPILEPSY_PRIV_CHOICE_TAG EPILEPSY_PRIV_PAIR_FST

#define EPILEPSY_PRIV_CHOICE_DATA(choice)                                                          \
    EPILEPSY_PRIV_MATCH(EPILEPSY_PRIV_CHOICE_DATA_, EPILEPSY_PRIV_PAIR_SND(choice))
#define EPILEPSY_PRIV_CHOICE_DATA_0non_empty(...) __VA_ARGS__
#define EPILEPSY_PRIV_CHOICE_DATA_0empty(...)     __VA_ARGS__
// }

// Arity specifiers {
#define EPILEPSY_CHOICE_IMPL_ARITY          2
#define EPILEPSY_CHOICE_EMPTY_IMPL_ARITY    1
#define EPILEPSY_MATCH_IMPL_ARITY           2
#define EPILEPSY_MATCH_WITH_ARGS_IMPL_ARITY 3
// }

#endif // DOXYGEN_IGNORE

#endif // EPILEPSY_CHOICE_H
