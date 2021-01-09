/**
 * @file
 * Lists.
 */

#ifndef EPILEPSY_LIST_H
#define EPILEPSY_LIST_H

#include <epilepsy/choice.h>
#include <epilepsy/control.h>
#include <epilepsy/logical.h>
#include <epilepsy/priv/pair.h>
#include <epilepsy/uint.h>
#include <epilepsy/variadics.h>

// Desugaring {
/**
 * Prepends @p x to @p xs.
 */
#define EPILEPSY_cons(x, xs) EPILEPSY_call(EPILEPSY_cons, x xs)

/**
 * The empty list.
 */
#define EPILEPSY_nil() EPILEPSY_call(EPILEPSY_nil, )

/**
 * Extracts the head from @p list.
 */
#define EPILEPSY_listHead(list) EPILEPSY_call(EPILEPSY_listHead, list)

/**
 * Extracts the tail from @p list.
 */
#define EPILEPSY_listTail(list) EPILEPSY_call(EPILEPSY_listTail, list)

/**
 * Extracts the last element from @p list.
 */
#define EPILEPSY_listLast(list) EPILEPSY_call(EPILEPSY_listLast, list)

/**
 * Extracts all the elements of @p list except the last one.
 */
#define EPILEPSY_listInit(list) EPILEPSY_call(EPILEPSY_listInit, list)

/**
 * constructs a list from its arguments.
 */
#define EPILEPSY_list(...) EPILEPSY_call(EPILEPSY_list, __VA_ARGS__)

/**
 * Evaluates a metaprogram that reduces to a list, then unwraps it.
 */
#define EPILEPSY_listEval(...) EPILEPSY_call(EPILEPSY_listUnwrap(__VA_ARGS__))

/**
 * Places all the items in @p list as-is.
 */
#define EPILEPSY_listUnwrap(list) EPILEPSY_call(EPILEPSY_listUnwrap, list)

/**
 * Checks @p list for emptiness.
 */
#define EPILEPSY_listIsEmpty(list) EPILEPSY_call(EPILEPSY_listIsEmpty, list)

/**
 * Gets an @p i -indexed element.
 */
#define EPILEPSY_listGet(list, i) EPILEPSY_call(EPILEPSY_listGet, list i)

/**
 * Performs a right-associative fold over @p list.
 */
#define EPILEPSY_listFoldr(list, f, init) EPILEPSY_call(EPILEPSY_listFoldr, list f init)

/**
 * Performs a left-associative fold over @p list.
 */
#define EPILEPSY_listFoldl(list, f, init) EPILEPSY_call(EPILEPSY_listFoldl, list f init)

/**
 * The same as #EPILEPSY_listFoldl but treats the first element of @p list as the initial value.
 */
#define EPILEPSY_listFoldl1(list, f) EPILEPSY_call(EPILEPSY_listFoldl1, list f)

/**
 * Intersperses @p item between the items in @p list.
 */
#define EPILEPSY_listIntersperse(list, item) EPILEPSY_call(EPILEPSY_listIntersperse, list item)

/**
 * Prepends @p item to all items in @p list.
 */
#define EPILEPSY_listPrependToAll(list, item) EPILEPSY_call(EPILEPSY_listPrependToAll, list item)

/**
 * Maps all the elements in @p list with @p f.
 */
#define EPILEPSY_listMap(list, f) EPILEPSY_call(EPILEPSY_listMap, list f)

/**
 * Checks @p list and @p other for equality.
 */
#define EPILEPSY_listEq(list, other, compare) EPILEPSY_call(EPILEPSY_listEq, list other compare)

/**
 * Applies all the items in @p list to @p f.
 */
#define EPILEPSY_listApply(list, f) EPILEPSY_call(EPILEPSY_listApply, list f)
// }

#ifndef DOXYGEN_IGNORE

// Implementation {
#define EPILEPSY_cons_IMPL(x, xs) EPILEPSY_choice(v(cons), v(x, xs))
#define EPILEPSY_nil_IMPL()       EPILEPSY_choiceEmpty(v(nil))

// EPILEPSY_listHead_IMPL {
#define EPILEPSY_listHead_IMPL(list) EPILEPSY_match(v(list), v(EPILEPSY_PRIV_listHead_))
// clang-format off
#define EPILEPSY_PRIV_listHead_nil_IMPL() EPILEPSY_fatal(EPILEPSY_listHead, expected a non-empty list)
// clang-format on
#define EPILEPSY_PRIV_listHead_cons_IMPL(x, xs) v(x)
// }

// EPILEPSY_listTail_IMPL {
#define EPILEPSY_listTail_IMPL(list) EPILEPSY_match(v(list), v(EPILEPSY_PRIV_listTail_))
// clang-format off
#define EPILEPSY_PRIV_listTail_nil_IMPL() EPILEPSY_fatal(EPILEPSY_listTail, expected a non-empty list)
// clang-format on
#define EPILEPSY_PRIV_listTail_cons_IMPL(x, xs) v(xs)
// }

// EPILEPSY_listLast_IMPL {
#define EPILEPSY_listLast_IMPL(list) EPILEPSY_match(v(list), v(EPILEPSY_PRIV_listLast_))
// clang-format off
#define EPILEPSY_PRIV_listLast_nil_IMPL() EPILEPSY_fatal(EPILEPSY_listLast, expected a non-empty list)
// clang-format on
#define EPILEPSY_PRIV_listLast_cons_IMPL(x, xs)                                                    \
    EPILEPSY_ifLazy(                                                                               \
        EPILEPSY_listIsEmpty(v(xs)),                                                               \
        EPILEPSY_appl(EPILEPSY_const, v(x)),                                                       \
        v(EPILEPSY_listLast),                                                                      \
        v(xs))
// }

// EPILEPSY_listInit_IMPL {
#define EPILEPSY_listInit_IMPL(list) EPILEPSY_match(v(list), v(EPILEPSY_PRIV_listInit_))
// clang-format off
#define EPILEPSY_PRIV_listInit_nil_IMPL(_acc) EPILEPSY_fatal(EPILEPSY_listInit, expected a non-empty list)
// clang-format on
#define EPILEPSY_PRIV_listInit_cons_IMPL(x, xs)                                                    \
    EPILEPSY_ifLazy(                                                                               \
        EPILEPSY_listIsEmpty(v(xs)),                                                               \
        EPILEPSY_appl(EPILEPSY_const, EPILEPSY_nil()),                                             \
        EPILEPSY_appl(EPILEPSY_PRIV_listInit_PROGRESS, v(x)),                                      \
        v(xs))
#define EPILEPSY_PRIV_listInit_PROGRESS_IMPL(x, xs) EPILEPSY_cons(v(x), EPILEPSY_listInit(v(xs)))
// }

// EPILEPSY_list_IMPL {
#define EPILEPSY_list_IMPL(...)                                                                    \
    EPILEPSY_call(EPILEPSY_PRIV_list_AUX, EPILEPSY_variadicsCount(v(__VA_ARGS__)) v(__VA_ARGS__, ~))

#define EPILEPSY_PRIV_list_AUX_IMPL(count, ...)                                                    \
    EPILEPSY_ifLazy(                                                                               \
        EPILEPSY_uintEq(v(count), v(1)),                                                           \
        v(EPILEPSY_PRIV_list_DONE),                                                                \
        EPILEPSY_appl(v(EPILEPSY_PRIV_list_PROGRESS), v(count)),                                   \
        EPILEPSY_parenthesise(v(__VA_ARGS__)))

#define EPILEPSY_PRIV_list_DONE_IMPL(rest)                                                         \
    EPILEPSY_call(EPILEPSY_PRIV_list_DONE_AUX, v(EPILEPSY_unparenthesisePlain(rest)))
#define EPILEPSY_PRIV_list_PROGRESS_IMPL(count, rest)                                              \
    EPILEPSY_call(EPILEPSY_PRIV_list_PROGRESS_AUX, v(count, EPILEPSY_unparenthesisePlain(rest)))

#define EPILEPSY_PRIV_list_DONE_AUX_IMPL(last, _) EPILEPSY_cons(v(last), EPILEPSY_nil())
#define EPILEPSY_PRIV_list_PROGRESS_AUX_IMPL(count, x, ...)                                        \
    EPILEPSY_cons(                                                                                 \
        v(x), EPILEPSY_call(EPILEPSY_PRIV_list_AUX, EPILEPSY_uintDec(v(count)) v(__VA_ARGS__)))
// }

#define EPILEPSY_listIsEmpty_IMPL(list)              EPILEPSY_match(v(list), v(EPILEPSY_PRIV_listIsEmpty_))
#define EPILEPSY_PRIV_listIsEmpty_nil_IMPL()         v(1)
#define EPILEPSY_PRIV_listIsEmpty_cons_IMPL(_x, _xs) v(0)

#define EPILEPSY_listUnwrap_IMPL(list)            EPILEPSY_match(v(list), v(EPILEPSY_PRIV_listUnwrap_))
#define EPILEPSY_PRIV_listUnwrap_nil_IMPL()       EPILEPSY_empty()
#define EPILEPSY_PRIV_listUnwrap_cons_IMPL(x, xs) v(x) EPILEPSY_listUnwrap(v(xs))

// EPILEPSY_listGet_IMPL {
#define EPILEPSY_listGet_IMPL(list, i)                                                             \
    EPILEPSY_matchWithArgs(v(list), v(EPILEPSY_PRIV_listGet_), v(i))

// clang-format off
#define EPILEPSY_PRIV_listGet_nil_IMPL(i)                                                          \
    EPILEPSY_fatal(EPILEPSY_listGet, expected a non-empty list)
// clang-format on
#define EPILEPSY_PRIV_listGet_cons_IMPL(x, xs, i)                                                  \
    EPILEPSY_ifLazy(                                                                               \
        EPILEPSY_uintEq(v(i), v(0)),                                                               \
        v(EPILEPSY_PRIV_listGet_cons_DONE),                                                        \
        v(EPILEPSY_PRIV_listGet_cons_PROGRESS),                                                    \
        v(x, xs, i))

#define EPILEPSY_PRIV_listGet_cons_DONE_IMPL(x, _xs, _i) v(x)
#define EPILEPSY_PRIV_listGet_cons_PROGRESS_IMPL(_x, xs, i)                                        \
    EPILEPSY_listGet(v(xs), EPILEPSY_uintDec(v(i)))
// }

#define EPILEPSY_listFoldr_IMPL(list, f, init)                                                     \
    EPILEPSY_matchWithArgs(v(list), v(EPILEPSY_PRIV_listFoldr_), v(f, init))
#define EPILEPSY_PRIV_listFoldr_nil_IMPL(_f, acc) v(acc)
#define EPILEPSY_PRIV_listFoldr_cons_IMPL(x, xs, f, acc)                                           \
    EPILEPSY_variadicsAppl(v(f), v(x) EPILEPSY_listFoldr(v(xs), v(f), v(acc)))

#define EPILEPSY_listFoldl_IMPL(list, f, init)                                                     \
    EPILEPSY_matchWithArgs(v(list), v(EPILEPSY_PRIV_listFoldl_), v(f, init))
#define EPILEPSY_PRIV_listFoldl_nil_IMPL(_f, acc) v(acc)
#define EPILEPSY_PRIV_listFoldl_cons_IMPL(x, xs, f, acc)                                           \
    EPILEPSY_listFoldl(v(xs), v(f), EPILEPSY_variadicsAppl(v(f), v(acc, x)))

#define EPILEPSY_listFoldl1_IMPL(list, f)                                                          \
    EPILEPSY_matchWithArgs(v(list), v(EPILEPSY_PRIV_listFoldl1_), v(f))
// clang-format off
#define EPILEPSY_PRIV_listFoldl1_nil_IMPL(_f)                                                      \
    EPILEPSY_fatal(EPILEPSY_listFoldl1, expected a non-empty list)
// clang-format on
#define EPILEPSY_PRIV_listFoldl1_cons_IMPL(x, xs, f) EPILEPSY_listFoldl(v(xs), v(f), v(x))

#define EPILEPSY_listIntersperse_IMPL(list, item)                                                  \
    EPILEPSY_matchWithArgs(v(list), v(EPILEPSY_PRIV_listIntersperse_), v(item))
#define EPILEPSY_PRIV_listIntersperse_nil_IMPL(_item) EPILEPSY_nil()
#define EPILEPSY_PRIV_listIntersperse_cons_IMPL(x, xs, item)                                       \
    EPILEPSY_cons(v(x), EPILEPSY_listPrependToAll(v(xs), v(item)))

#define EPILEPSY_listPrependToAll_IMPL(list, item)                                                 \
    EPILEPSY_matchWithArgs(v(list), v(EPILEPSY_PRIV_listPrependToAll_), v(item))
#define EPILEPSY_PRIV_listPrependToAll_nil_IMPL(_item) EPILEPSY_nil()
#define EPILEPSY_PRIV_listPrependToAll_cons_IMPL(x, xs, item)                                      \
    EPILEPSY_cons(v(item), EPILEPSY_cons(v(x), EPILEPSY_listPrependToAll(v(xs), v(item))))

#define EPILEPSY_listMap_IMPL(list, f)                                                             \
    EPILEPSY_matchWithArgs(v(list), v(EPILEPSY_PRIV_listMap_), v(f))
#define EPILEPSY_PRIV_listMap_nil_IMPL(_f) EPILEPSY_nil()
#define EPILEPSY_PRIV_listMap_cons_IMPL(x, xs, f)                                                  \
    EPILEPSY_cons(EPILEPSY_appl(v(f), v(x)), EPILEPSY_listMap(v(xs), v(f)))

// EPILEPSY_listEq_IMPL {
#define EPILEPSY_listEq_IMPL(list, other, compare)                                                 \
    EPILEPSY_matchWithArgs(v(list), v(EPILEPSY_PRIV_listEq_), v(other, compare))

#define EPILEPSY_PRIV_listEq_nil_IMPL(other, _compare) EPILEPSY_listIsEmpty(v(other))
#define EPILEPSY_PRIV_listEq_cons_IMPL(x, xs, other, compare)                                      \
    EPILEPSY_matchWithArgs(v(other), v(EPILEPSY_PRIV_listEq_cons_), v(x, xs, compare))

#define EPILEPSY_PRIV_listEq_cons_nil_IMPL(_x, _xs, _compare) v(0)
#define EPILEPSY_PRIV_listEq_cons_cons_IMPL(other_x, other_xs, x, xs, compare)                     \
    EPILEPSY_ifLazy(                                                                               \
        EPILEPSY_appl2(v(compare), v(x), v(other_x)),                                              \
        v(EPILEPSY_listEq),                                                                        \
        EPILEPSY_appl(v(EPILEPSY_const3), v(0)),                                                   \
        v(xs, other_xs, compare))
// }

#define EPILEPSY_listApply_IMPL(list, f) EPILEPSY_listFoldl(v(list), v(EPILEPSY_appl), v(f))
// } (Implementation)

// Arity specifiers {
#define EPILEPSY_cons_ARITY             2
#define EPILEPSY_nil_ARITY              1
#define EPILEPSY_listHead_ARITY         1
#define EPILEPSY_listTail_ARITY         1
#define EPILEPSY_listLast_ARITY         1
#define EPILEPSY_listInit_ARITY         1
#define EPILEPSY_list_ARITY             1
#define EPILEPSY_listUnwrap_ARITY       1
#define EPILEPSY_listIsEmpty_ARITY      1
#define EPILEPSY_listGet_ARITY          2
#define EPILEPSY_listFoldr_ARITY        3
#define EPILEPSY_listFoldl_ARITY        3
#define EPILEPSY_listFoldl1_ARITY       2
#define EPILEPSY_listIntersperse_ARITY  2
#define EPILEPSY_listPrependToAll_ARITY 2
#define EPILEPSY_listMap_ARITY          2
#define EPILEPSY_listEq_ARITY           3
#define EPILEPSY_listApply_ARITY        2

#define EPILEPSY_PRIV_listInit_PROGRESS_ARITY     2
#define EPILEPSY_PRIV_list_DONE_ARITY             1
#define EPILEPSY_PRIV_list_PROGRESS_ARITY         2
#define EPILEPSY_PRIV_listGet_cons_DONE_ARITY     3
#define EPILEPSY_PRIV_listGet_cons_PROGRESS_ARITY 3
// }

#endif // DOXYGEN_IGNORE

#endif // EPILEPSY_LIST_H
