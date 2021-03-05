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

#include <metalang99/priv/variadics/get.h>

#include <metalang99/lang.h>
#include <metalang99/util.h>

// Desugaring {
/**
 * Constructs an instance of a choice type.
 *
 * # Examples
 *
 * See <a
 * href="https://github.com/Hirrolot/metalang99/blob/master/examples/binary_tree.c">examples/binary_tree.c</a>.
 *
 * @note Specify `~` if you do not want to supply data; then, to match it, write a `_` parameter to
 * ignore.
 */
#define METALANG99_choice(tag, ...) METALANG99_call(METALANG99_choice, tag, __VA_ARGS__)

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
 * Matches the instance @p choice of a choice type.
 *
 * This macro results in `M_callTrivial(<matcher><a choice's tag>, <choice's data>)`.
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
 * This macro results in `M_callTrivial(<matcher><a choice's tag>, <choice's data>, args...)`.
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

#define METALANG99_choicePlain(tag, ...)  (tag, __VA_ARGS__)
#define METALANG99_choiceTagPlain(choice) METALANG99_PRIV_VARIADICS_HEAD_AUX choice
// }

#ifndef DOXYGEN_IGNORE

// Implementation {

// METALANG99_choice_IMPL {
#define METALANG99_choice_IMPL(tag, ...) v(METALANG99_choicePlain(tag, __VA_ARGS__))
// }

// METALANG99_choiceTag_IMPL {
#define METALANG99_choiceTag_IMPL(choice) v(METALANG99_choiceTagPlain(choice))
// }

// METALANG99_match_IMPL {
#define METALANG99_match_IMPL(choice, matcher)                                                     \
    METALANG99_callTrivial(                                                                        \
        METALANG99_catPlain(matcher, METALANG99_PRIV_VARIADICS_HEAD_AUX choice),                   \
        METALANG99_PRIV_VARIADICS_TAIL_AUX choice)
// }

// METALANG99_matchWithArgs_IMPL {
#define METALANG99_matchWithArgs_IMPL(choice, matcher, ...)                                        \
    METALANG99_callTrivial(                                                                        \
        METALANG99_catPlain(matcher, METALANG99_PRIV_VARIADICS_HEAD_AUX choice),                   \
        METALANG99_PRIV_VARIADICS_TAIL_AUX choice,                                                 \
        __VA_ARGS__)
// }

// } (Implementation)

// Arity specifiers {
#define METALANG99_choice_ARITY        2
#define METALANG99_choiceTag_ARITY     1
#define METALANG99_match_ARITY         2
#define METALANG99_matchWithArgs_ARITY 3
// }

// Aliases {
#ifndef METALANG99_FULL_PREFIX_ONLY

#define M_choice        METALANG99_choice
#define M_choiceTag     METALANG99_choiceTag
#define M_match         METALANG99_match
#define M_matchWithArgs METALANG99_matchWithArgs

#define M_choicePlain    METALANG99_choicePlain
#define M_choiceTagPlain METALANG99_choiceTagPlain

#endif // METALANG99_FULL_PREFIX_ONLY
// }

#endif // DOXYGEN_IGNORE

#endif // METALANG99_CHOICE_H
