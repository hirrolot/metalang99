/**
 * @file
 * @brief Choice types.
 */

#ifndef EPILEPSY_CHOICE_H
#define EPILEPSY_CHOICE_H

#ifndef DOXYGEN_SHOULD_SKIP_THIS

#include <epilepsy/priv/aux.h>
#include <epilepsy/priv/overload.h>
#include <epilepsy/priv/pair.h>

#endif // DOXYGEN_SHOULD_SKIP_THIS

#include <epilepsy/lang.h>

/**
 * @brief Creates an instance of a choice type.
 */
#define EPILEPSY_CHOICE(...) call(EPILEPSY_CHOICE_REAL, __VA_ARGS__)

/**
 * @brief Matches an instance of a choice type.
 */
#define EPILEPSY_MATCH(choice, matcher, ...) call(EPILEPSY_MATCH_REAL, choice matcher __VA_ARGS__)

#ifndef DOXYGEN_SHOULD_SKIP_THIS

#define EPILEPSY_CHOICE_REAL(...)         EPILEPSY_PRIV_OVERLOAD_CALL(EPILEPSY_PRIV_CHOICE_, __VA_ARGS__)
#define EPILEPSY_PRIV_CHOICE_1(tag)       v(EPILEPSY_PRIV_PAIR(tag, ~))
#define EPILEPSY_PRIV_CHOICE_2(tag, data) v(EPILEPSY_PRIV_PAIR(tag, data))

#define EPILEPSY_MATCH_REAL(choice, matcher, ...)                                                  \
    call(                                                                                          \
        EPILEPSY_PRIV_AUX_MATCH(matcher, EPILEPSY_PRIV_CHOICE_TAG(choice)),                        \
        v(EPILEPSY_PRIV_CHOICE_DATA(choice)) v(__VA_ARGS__))

#define EPILEPSY_PRIV_CHOICE_TAG  EPILEPSY_PRIV_PAIR_FST
#define EPILEPSY_PRIV_CHOICE_DATA EPILEPSY_PRIV_PAIR_SND

#endif // DOXYGEN_SHOULD_SKIP_THIS

#endif // EPILEPSY_CHOICE_H
