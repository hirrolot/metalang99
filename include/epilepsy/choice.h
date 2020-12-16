/**
 * @file
 * @brief Choice types.
 */

#ifndef EPILEPSY_CHOICE_H
#define EPILEPSY_CHOICE_H

#ifndef DOXYGEN_SHOULD_SKIP_THIS

#include <epilepsy/priv/aux.h>
#include <epilepsy/priv/overload.h>
#include <epilepsy/priv/variadics/get.h>

#endif // DOXYGEN_SHOULD_SKIP_THIS

#include <epilepsy/lang.h>

/**
 * @brief Creates an instance of a choice type.
 */
#define EPILEPSY_CHOICE(...) call(EPILEPSY_CHOICE_REAL, __VA_ARGS__)

/**
 * @brief Matches an instance of a choice type.
 */
#define EPILEPSY_CHOICE_MATCH(choice, mathcer, ...)                                                \
    call(EPILEPSY_CHOICE_MATCH_REAL, choice matcher __VA_ARGS__)

#ifndef DOXYGEN_SHOULD_SKIP_THIS

#define EPILEPSY_CHOICE_REAL(...)                  EPILEPSY_PRIV_OVERLOAD_CALL(EPILEPSY_PRIV_CHOICE_, __VA_ARGS__)
#define EPILEPSY_PRIV_CHOICE_1(variant_name)       v((variant_name, ~))
#define EPILEPSY_PRIV_CHOICE_2(variant_name, data) v((variant_name, data))

#define EPILEPSY_CHOICE_MATCH_REAL(choice, matcher, ...)                                           \
    call(                                                                                          \
        EPILEPSY_PRIV_AUX_MATCH(matcher, EPILEPSY_PRIV_CHOICE_VARIANT_NAME(choice)),               \
        v(EPILEPSY_PRIV_CHOICE_DATA(choice) v(__VA_ARGS__)))

#define EPILEPSY_PRIV_CHOICE_VARIANT_NAME(choice) EPILEPSY_PRIV_VARIADICS_HEAD choice
#define EPILEPSY_PRIV_CHOICE_DATA(choice)         EPILEPSY_PRIV_VARIADICS_TAIL choice

#endif // DOXYGEN_SHOULD_SKIP_THIS

#endif // EPILEPSY_CHOICE_H
