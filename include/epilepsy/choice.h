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
#define EPILEPSY_CHOICE(tag, ...) call(EPILEPSY_CHOICE_IMPL, tag __VA_ARGS__)

/**
 * Matches the instance @p choice of a choice type.
 */
#define EPILEPSY_MATCH(choice, matcher) call(EPILEPSY_MATCH_IMPL, choice matcher)

/**
 * The same as #EPILEPSY_MATCH but supplies additional arguments to all branches.
 */
#define EPILEPSY_MATCH_WITH_ARGS(choice, matcher, ...)                                             \
    call(EPILEPSY_MATCH_WITH_ARGS_IMPL, choice matcher __VA_ARGS__)
// }

#ifndef DOXYGEN_IGNORE

// Implementation {
#define EPILEPSY_CHOICE_IMPL(tag, ...) v(EPILEPSY_PRIV_PAIR(tag, (__VA_ARGS__)))

#define EPILEPSY_MATCH_IMPL(choice, matcher)                                                       \
    call(                                                                                          \
        EPILEPSY_PRIV_MATCH(matcher, EPILEPSY_PRIV_CHOICE_TAG(choice)),                            \
        v(EPILEPSY_PRIV_UNPARENTHESISE(EPILEPSY_PRIV_CHOICE_DATA(choice))))

#define EPILEPSY_MATCH_WITH_ARGS_IMPL(choice, matcher, ...)                                        \
    call(                                                                                          \
        EPILEPSY_PRIV_MATCH(matcher, EPILEPSY_PRIV_CHOICE_TAG(choice)),                            \
        v(EPILEPSY_PRIV_UNPARENTHESISE(EPILEPSY_PRIV_CHOICE_DATA(choice)), __VA_ARGS__))

#define EPILEPSY_PRIV_CHOICE_TAG  EPILEPSY_PRIV_PAIR_FST
#define EPILEPSY_PRIV_CHOICE_DATA EPILEPSY_PRIV_PAIR_SND
// }

#endif // DOXYGEN_IGNORE

#endif // EPILEPSY_CHOICE_H
