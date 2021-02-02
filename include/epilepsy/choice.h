/**
 * @file
 * Choice types.
 *
 * A choice type is a type with several alternatives. Perhaps the most common example of a choice
 * type is a binary tree:
 *
 * [<a
 * href="https://github.com/Hirrolot/epilepsy/blob/master/examples/binary_tree.c">examples/binary_tree.c</a>]
 * @include binary_tree.c
 */

#ifndef EPILEPSY_CHOICE_H
#define EPILEPSY_CHOICE_H

#include <epilepsy/aux.h>
#include <epilepsy/lang.h>
#include <epilepsy/priv/aux.h>
#include <epilepsy/priv/pair.h>

// Desugaring {
/**
 * Constructs an instance of a choice type.
 *
 * # Examples
 *
 * See <a
 * href="https://github.com/Hirrolot/epilepsy/blob/master/examples/binary_tree.c">examples/binary_tree.c</a>.
 */
#define EPILEPSY_choice(tag, ...) EPILEPSY_call(EPILEPSY_choice, tag __VA_ARGS__)

/**
 * The same as #EPILEPSY_choice but does not require additional arguments.
 *
 * # Examples
 *
 * @code
 * #include <epilepsy/choice.h>
 *
 * #define MATCH_A_IMPL() v(123)
 *
 * // 123
 * E_eval(E_match(E_choiceEmpty(v(A)), v(MATCH_)))
 * @endcode
 */
#define EPILEPSY_choiceEmpty(tag) EPILEPSY_call(EPILEPSY_choiceEmpty, tag)

/**
 * Matches the instance @p choice of a choice type.
 *
 * # Examples
 *
 * See <a
 * href="https://github.com/Hirrolot/epilepsy/blob/master/examples/binary_tree.c">examples/binary_tree.c</a>.
 */
#define EPILEPSY_match(choice, matcher) EPILEPSY_call(EPILEPSY_match, choice matcher)

/**
 * The same as #EPILEPSY_match but supplies additional arguments to all branches.
 *
 * # Examples
 *
 * @code
 * #include <epilepsy/choice.h>
 *
 * #define MATCH_A_IMPL(x, y, z) v(x ~ y ~ z)
 *
 * // 123 ~ 456 ~ 789
 * E_matchWithArgs(E_choice(v(A), v(123)), v(MATCH_), v(456, 789))
 * @endcode
 */
#define EPILEPSY_matchWithArgs(choice, matcher, ...)                                               \
    EPILEPSY_call(EPILEPSY_matchWithArgs, choice matcher __VA_ARGS__)
// }

#ifndef DOXYGEN_IGNORE

// Implementation {
#define EPILEPSY_choice_IMPL(tag, ...) EPILEPSY_PRIV_choice(tag, __VA_ARGS__)
#define EPILEPSY_choiceEmpty_IMPL(tag) EPILEPSY_PRIV_choiceEmpty(tag)

#define EPILEPSY_PRIV_choice(tag, ...) v((tag, 0non_empty(__VA_ARGS__)))
#define EPILEPSY_PRIV_choiceEmpty(tag) v((tag, 0empty()))

#define EPILEPSY_match_IMPL(choice, matcher)                                                       \
    EPILEPSY_callTrivial(                                                                          \
        EPILEPSY_PRIV_CAT(matcher, EPILEPSY_PRIV_CHOICE_TAG(choice)),                              \
        EPILEPSY_PRIV_CHOICE_DATA(choice))

#define EPILEPSY_matchWithArgs_IMPL(choice, matcher, ...)                                          \
    EPILEPSY_PRIV_IF(                                                                              \
        EPILEPSY_PRIV_CHOICE_IS_EMPTY(choice),                                                     \
        EPILEPSY_PRIV_matchWithArgs_EMPTY,                                                         \
        EPILEPSY_PRIV_matchWithArgs_NON_EMPTY)                                                     \
    (choice, matcher, __VA_ARGS__)
#define EPILEPSY_PRIV_matchWithArgs_EMPTY(choice, matcher, ...)                                    \
    EPILEPSY_callTrivial(EPILEPSY_PRIV_CAT(matcher, EPILEPSY_PRIV_CHOICE_TAG(choice)), __VA_ARGS__)
#define EPILEPSY_PRIV_matchWithArgs_NON_EMPTY(choice, matcher, ...)                                \
    EPILEPSY_callTrivial(                                                                          \
        EPILEPSY_PRIV_CAT(matcher, EPILEPSY_PRIV_CHOICE_TAG(choice)),                              \
        EPILEPSY_PRIV_CHOICE_DATA(choice),                                                         \
        __VA_ARGS__)

#define EPILEPSY_PRIV_CHOICE_IS_EMPTY(choice)                                                      \
    EPILEPSY_PRIV_CAT(EPILEPSY_PRIV_CHOICE_IS_EMPTY_, EPILEPSY_PRIV_PAIR_SND(choice))
#define EPILEPSY_PRIV_CHOICE_IS_EMPTY_0non_empty(...) 0
#define EPILEPSY_PRIV_CHOICE_IS_EMPTY_0empty(...)     1

#define EPILEPSY_PRIV_CHOICE_TAG EPILEPSY_PRIV_PAIR_FST

#define EPILEPSY_PRIV_CHOICE_DATA(choice)                                                          \
    EPILEPSY_PRIV_CAT(EPILEPSY_PRIV_CHOICE_DATA_, EPILEPSY_PRIV_PAIR_SND(choice))
#define EPILEPSY_PRIV_CHOICE_DATA_0non_empty(...) __VA_ARGS__
#define EPILEPSY_PRIV_CHOICE_DATA_0empty(...)     __VA_ARGS__
// }

// Arity specifiers {
#define EPILEPSY_choice_ARITY        2
#define EPILEPSY_choiceEmpty_ARITY   1
#define EPILEPSY_match_ARITY         2
#define EPILEPSY_matchWithArgs_ARITY 3
// }

// Aliases {
#ifndef EPILEPSY_NO_SMALL_PREFIX

#define E_choice        EPILEPSY_choice
#define E_choiceEmpty   EPILEPSY_choiceEmpty
#define E_match         EPILEPSY_match
#define E_matchWithArgs EPILEPSY_matchWithArgs

#endif // EPILEPSY_NO_SMALL_PREFIX
// }

#endif // DOXYGEN_IGNORE

#endif // EPILEPSY_CHOICE_H
