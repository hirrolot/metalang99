/**
 * @file
 * Choice types.
 *
 * A choice type is a type with several alternatives. Perhaps the most common example of a choice
 * type is a binary tree:
 *
 * [<a
 * href="https://github.com/Hirrolot/metalang99/blob/master/examples/binary_tree.c">examples/binary_tree.c</a>]
 * @include binary_tree.c
 */

#ifndef METALANG99_CHOICE_H
#define METALANG99_CHOICE_H

#include <metalang99/lang.h>
#include <metalang99/priv/pair.h>
#include <metalang99/util.h>

// Desugaring {
/**
 * Constructs an instance of a choice type.
 *
 * # Examples
 *
 * See <a
 * href="https://github.com/Hirrolot/metalang99/blob/master/examples/binary_tree.c">examples/binary_tree.c</a>.
 */
#define METALANG99_choice(tag, ...) METALANG99_call(METALANG99_choice, tag, __VA_ARGS__)

/**
 * The same as #METALANG99_choice but does not require additional arguments.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/choice.h>
 *
 * #define MATCH_A_IMPL() v(123)
 *
 * // 123
 * M_eval(M_match(M_choiceEmpty(v(A)), v(MATCH_)))
 * @endcode
 */
#define METALANG99_choiceEmpty(tag) METALANG99_call(METALANG99_choiceEmpty, tag)

/**
 * Matches the instance @p choice of a choice type.
 *
 * # Examples
 *
 * See <a
 * href="https://github.com/Hirrolot/metalang99/blob/master/examples/binary_tree.c">examples/binary_tree.c</a>.
 */
#define METALANG99_match(choice, matcher) METALANG99_call(METALANG99_match, choice, matcher)

/**
 * The same as #METALANG99_match but supplies additional arguments to all branches.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/choice.h>
 *
 * #define MATCH_A_IMPL(x, y, z) v(x ~ y ~ z)
 *
 * // 123 ~ 456 ~ 789
 * M_matchWithArgs(M_choice(v(A), v(123)), v(MATCH_), v(456, 789))
 * @endcode
 */
#define METALANG99_matchWithArgs(choice, matcher, ...)                                             \
    METALANG99_call(METALANG99_matchWithArgs, choice, matcher, __VA_ARGS__)

/**
 * Evaluates to the tag of @p choice.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/choice.h>
 *
 * // Foo
 * M_choiceTag(M_choice(v(Foo), v(1, 2, 3)))
 * @endcode
 */
#define METALANG99_choiceTag(choice) METALANG99_call(METALANG99_choiceTag, choice)

/**
 * The plain version of #METALANG99_choiceTag.
 *
 * @note @p choice must be already evaluated.
 */
#define METALANG99_choiceTagPlain(choice) METALANG99_PRIV_PAIR_FST(choice)
// }

#ifndef DOXYGEN_IGNORE

// Implementation {
#define METALANG99_choice_IMPL(tag, ...) v(METALANG99_PRIV_choice(tag, __VA_ARGS__))
#define METALANG99_choiceEmpty_IMPL(tag) v(METALANG99_PRIV_choiceEmpty(tag))

#define METALANG99_PRIV_choice(tag, ...) (tag, 0non_empty(__VA_ARGS__))
#define METALANG99_PRIV_choiceEmpty(tag) (tag, 0empty())

// METALANG99_match_IMPL {
#define METALANG99_match_IMPL(choice, matcher)                                                     \
    METALANG99_callTrivial(                                                                        \
        METALANG99_catPlain(matcher, METALANG99_choiceTagPlain(choice)),                           \
        METALANG99_PRIV_CHOICE_DATA(choice))
// }

// METALANG99_matchWithArgs_IMPL {
#define METALANG99_matchWithArgs_IMPL(choice, matcher, ...)                                        \
    METALANG99_PRIV_IF(                                                                            \
        METALANG99_PRIV_CHOICE_IS_EMPTY(choice),                                                   \
        METALANG99_PRIV_matchWithArgs_EMPTY,                                                       \
        METALANG99_PRIV_matchWithArgs_NON_EMPTY)                                                   \
    (choice, matcher, __VA_ARGS__)
#define METALANG99_PRIV_matchWithArgs_EMPTY(choice, matcher, ...)                                  \
    METALANG99_callTrivial(                                                                        \
        METALANG99_catPlain(matcher, METALANG99_choiceTagPlain(choice)),                           \
        __VA_ARGS__)
#define METALANG99_PRIV_matchWithArgs_NON_EMPTY(choice, matcher, ...)                              \
    METALANG99_callTrivial(                                                                        \
        METALANG99_catPlain(matcher, METALANG99_choiceTagPlain(choice)),                           \
        METALANG99_PRIV_CHOICE_DATA(choice),                                                       \
        __VA_ARGS__)
// }

// METALANG99_choiceTag_IMPL {
#define METALANG99_choiceTag_IMPL(choice) v(METALANG99_choiceTagPlain(choice))
// }

// METALANG99_PRIV_CHOICE_IS_EMPTY {
#define METALANG99_PRIV_CHOICE_IS_EMPTY(choice)                                                    \
    METALANG99_catPlain(METALANG99_PRIV_CHOICE_IS_EMPTY_, METALANG99_PRIV_PAIR_SND(choice))
#define METALANG99_PRIV_CHOICE_IS_EMPTY_0non_empty(...) 0
#define METALANG99_PRIV_CHOICE_IS_EMPTY_0empty(...)     1
// }

// METALANG99_PRIV_CHOICE_DATA {
#define METALANG99_PRIV_CHOICE_DATA(choice)                                                        \
    METALANG99_catPlain(METALANG99_PRIV_CHOICE_DATA_, METALANG99_PRIV_PAIR_SND(choice))
#define METALANG99_PRIV_CHOICE_DATA_0non_empty(...) __VA_ARGS__
#define METALANG99_PRIV_CHOICE_DATA_0empty(...)     __VA_ARGS__
// }

// } (Implementation)

// Arity specifiers {
#define METALANG99_choice_ARITY        2
#define METALANG99_choiceEmpty_ARITY   1
#define METALANG99_match_ARITY         2
#define METALANG99_matchWithArgs_ARITY 3
#define METALANG99_choiceTag_ARITY     1
// }

// Aliases {
#ifndef METALANG99_NO_SMALL_PREFIX

#define M_choice        METALANG99_choice
#define M_choiceEmpty   METALANG99_choiceEmpty
#define M_match         METALANG99_match
#define M_matchWithArgs METALANG99_matchWithArgs
#define M_choiceTag     METALANG99_choiceTag

#define M_choiceTagPlain METALANG99_choiceTagPlain

#endif // METALANG99_NO_SMALL_PREFIX
// }

#endif // DOXYGEN_IGNORE

#endif // METALANG99_CHOICE_H
