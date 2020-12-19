/**
 * @file
 * @brief Choice types.
 */

#ifndef EPILEPSY_CHOICE_H
#define EPILEPSY_CHOICE_H

#ifndef DOXYGEN_SHOULD_SKIP_THIS

#include <epilepsy/aux.h>
#include <epilepsy/priv/aux.h>
#include <epilepsy/priv/overload.h>
#include <epilepsy/priv/pair.h>

#endif // DOXYGEN_SHOULD_SKIP_THIS

#include <epilepsy/lang.h>

/**
 * @brief Creates an instance of a choice type.
 */
#define EPILEPSY_CHOICE(tag, ...) call(EPILEPSY_CHOICE_IMPL, tag __VA_ARGS__)

/**
 * @brief Matches an instance of a choice type.
 */
#define EPILEPSY_MATCH(choice, matcher) call(EPILEPSY_MATCH_IMPL, choice matcher)

#ifndef DOXYGEN_SHOULD_SKIP_THIS

#define EPILEPSY_CHOICE_IMPL(tag, ...) v(EPILEPSY_PRIV_PAIR(tag, (__VA_ARGS__)))

#define EPILEPSY_MATCH_IMPL(choice, matcher)                                                       \
    call(                                                                                          \
        EPILEPSY_PRIV_MATCH(matcher, EPILEPSY_PRIV_CHOICE_TAG(choice)),                            \
        v(EPILEPSY_PRIV_UNPARENTHESISE(EPILEPSY_PRIV_CHOICE_DATA(choice))))

#define EPILEPSY_PRIV_CHOICE_TAG  EPILEPSY_PRIV_PAIR_FST
#define EPILEPSY_PRIV_CHOICE_DATA EPILEPSY_PRIV_PAIR_SND

#endif // DOXYGEN_SHOULD_SKIP_THIS

#endif // EPILEPSY_CHOICE_H
