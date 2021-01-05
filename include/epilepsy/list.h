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
#define EPILEPSY_Cons(x, xs) EPILEPSY_CALL(EPILEPSY_Cons, x xs)

/**
 * The empty list.
 */
#define EPILEPSY_Nil() EPILEPSY_CALL(EPILEPSY_Nil, )

/**
 * Constructs a list from its arguments.
 */
#define EPILEPSY_List(...) EPILEPSY_CALL(EPILEPSY_List, __VA_ARGS__)

/**
 * Places all the items in @p list as-is.
 */
#define EPILEPSY_ListUnwrap(list) EPILEPSY_CALL(EPILEPSY_ListUnwrap, list)

/**
 * Checks @p list for emptiness.
 */
#define EPILEPSY_ListIsEmpty(list) EPILEPSY_CALL(EPILEPSY_ListIsEmpty, list)

/**
 * Gets an @p i -indexed element.
 */
#define EPILEPSY_ListGet(list, i) EPILEPSY_CALL(EPILEPSY_ListGet, list i)

/**
 * Performs a right-associative fold over @p list.
 */
#define EPILEPSY_ListFoldr(list, f, init) EPILEPSY_CALL(EPILEPSY_ListFoldr, list f init)

/**
 * Performs a left-associative fold over @p list.
 */
#define EPILEPSY_ListFoldl(list, f, init) EPILEPSY_CALL(EPILEPSY_ListFoldl, list f init)

/**
 * The same as #EPILEPSY_ListFoldl but treats the first element of @p list as the initial value.
 */
#define EPILEPSY_ListFoldl1(list, f) EPILEPSY_CALL(EPILEPSY_ListFoldl1, list f)

/**
 * Intersperses @p item between the items in @p list.
 */
#define EPILEPSY_ListIntersperse(list, item) EPILEPSY_CALL(EPILEPSY_ListIntersperse, list item)

/**
 * Prepends @p item to all items in @p list.
 */
#define EPILEPSY_ListPrependToAll(list, item) EPILEPSY_CALL(EPILEPSY_ListPrependToAll, list item)

/**
 * Maps all the elements in @p list with @p f.
 */
#define EPILEPSY_ListMap(list, f) EPILEPSY_CALL(EPILEPSY_ListMap, list f)

/**
 * Checks @p list and @p other for equality.
 */
#define EPILEPSY_ListEq(list, other, compare) EPILEPSY_CALL(EPILEPSY_ListEq, list other compare)

/**
 * Applies all the items in @p list to @p f.
 */
#define EPILEPSY_ListApply(list, f) EPILEPSY_CALL(EPILEPSY_ListApply, list f)
// }

#ifndef DOXYGEN_IGNORE

// Implementation {
#define EPILEPSY_Cons_IMPL(x, xs) EPILEPSY_CHOICE(v(Cons), v(x, xs))
#define EPILEPSY_Nil_IMPL()       EPILEPSY_CHOICE_EMPTY(v(Nil))

// EPILEPSY_List_IMPL {
#define EPILEPSY_List_IMPL(...)                                                                    \
    EPILEPSY_CALL(                                                                                 \
        EPILEPSY_PRIV_List_AUX, EPILEPSY_VARIADICS_COUNT(v(__VA_ARGS__)) v(__VA_ARGS__, ~))

#define EPILEPSY_PRIV_List_AUX_IMPL(count, ...)                                                    \
    EPILEPSY_IF_LAZY(                                                                              \
        EPILEPSY_UIntEq(v(count), v(1)),                                                           \
        v(EPILEPSY_PRIV_List_DONE),                                                                \
        EPILEPSY_APPLY(v(EPILEPSY_PRIV_List_PROGRESS), v(count)),                                  \
        EPILEPSY_PARENTHESISE(v(__VA_ARGS__)))

#define EPILEPSY_PRIV_List_DONE_IMPL(rest)                                                         \
    EPILEPSY_CALL(EPILEPSY_PRIV_List_DONE_AUX, v(EPILEPSY_UNPARENTHESISE_PLAIN(rest)))
#define EPILEPSY_PRIV_List_PROGRESS_IMPL(count, rest)                                              \
    EPILEPSY_CALL(EPILEPSY_PRIV_List_PROGRESS_AUX, v(count, EPILEPSY_UNPARENTHESISE_PLAIN(rest)))

#define EPILEPSY_PRIV_List_DONE_AUX_IMPL(last, _) EPILEPSY_Cons(v(last), EPILEPSY_Nil())
#define EPILEPSY_PRIV_List_PROGRESS_AUX_IMPL(count, x, ...)                                        \
    EPILEPSY_Cons(                                                                                 \
        v(x), EPILEPSY_CALL(EPILEPSY_PRIV_List_AUX, EPILEPSY_UIntDec(v(count)) v(__VA_ARGS__)))
// }

#define EPILEPSY_ListIsEmpty_IMPL(list)              EPILEPSY_MATCH(v(list), v(EPILEPSY_PRIV_ListIsEmpty_))
#define EPILEPSY_PRIV_ListIsEmpty_Nil_IMPL()         v(1)
#define EPILEPSY_PRIV_ListIsEmpty_Cons_IMPL(_x, _xs) v(0)

#define EPILEPSY_ListUnwrap_IMPL(list)            EPILEPSY_MATCH(v(list), v(EPILEPSY_PRIV_ListUnwrap_))
#define EPILEPSY_PRIV_ListUnwrap_Nil_IMPL()       EPILEPSY_EMPTY()
#define EPILEPSY_PRIV_ListUnwrap_Cons_IMPL(x, xs) v(x) EPILEPSY_ListUnwrap(v(xs))

// EPILEPSY_ListGet_IMPL {
#define EPILEPSY_ListGet_IMPL(list, i)                                                             \
    EPILEPSY_MATCH_WITH_ARGS(v(list), v(EPILEPSY_PRIV_ListGet_), v(i))

#define EPILEPSY_PRIV_ListGet_Nil_IMPL(i)                                                          \
    EPILEPSY_ERROR(EPILEPSY_ListGet, "expected a non-empty list")
#define EPILEPSY_PRIV_ListGet_Cons_IMPL(x, xs, i)                                                  \
    EPILEPSY_IF_LAZY(                                                                              \
        EPILEPSY_UIntEq(v(i), v(0)),                                                               \
        v(EPILEPSY_PRIV_ListGet_Cons_DONE),                                                        \
        v(EPILEPSY_PRIV_ListGet_Cons_PROGRESS),                                                    \
        v(x, xs, i))

#define EPILEPSY_PRIV_ListGet_Cons_DONE_IMPL(x, _xs, _i) v(x)
#define EPILEPSY_PRIV_ListGet_Cons_PROGRESS_IMPL(_x, xs, i)                                        \
    EPILEPSY_ListGet(v(xs), EPILEPSY_UIntDec(v(i)))
// }

#define EPILEPSY_ListFoldr_IMPL(list, f, init)                                                     \
    EPILEPSY_MATCH_WITH_ARGS(v(list), v(EPILEPSY_PRIV_ListFoldr_), v(f, init))
#define EPILEPSY_PRIV_ListFoldr_Nil_IMPL(_f, acc) v(acc)
#define EPILEPSY_PRIV_ListFoldr_Cons_IMPL(x, xs, f, acc)                                           \
    EPILEPSY_VARIADICS_APPLY(v(f), v(x) EPILEPSY_ListFoldr(v(xs), v(f), v(acc)))

#define EPILEPSY_ListFoldl_IMPL(list, f, init)                                                     \
    EPILEPSY_MATCH_WITH_ARGS(v(list), v(EPILEPSY_PRIV_ListFoldl_), v(f, init))
#define EPILEPSY_PRIV_ListFoldl_Nil_IMPL(_f, acc) v(acc)
#define EPILEPSY_PRIV_ListFoldl_Cons_IMPL(x, xs, f, acc)                                           \
    EPILEPSY_ListFoldl(v(xs), v(f), EPILEPSY_VARIADICS_APPLY(v(f), v(acc, x)))

#define EPILEPSY_ListFoldl1_IMPL(list, f)                                                          \
    EPILEPSY_MATCH_WITH_ARGS(v(list), v(EPILEPSY_PRIV_ListFoldl1_), v(f))
#define EPILEPSY_PRIV_ListFoldl1_Nil_IMPL(_f)                                                      \
    EPILEPSY_ERROR(EPILEPSY_ListFoldl1, "expected a non-empty list")
#define EPILEPSY_PRIV_ListFoldl1_Cons_IMPL(x, xs, f) EPILEPSY_ListFoldl(v(xs), v(f), v(x))

#define EPILEPSY_ListIntersperse_IMPL(list, item)                                                  \
    EPILEPSY_MATCH_WITH_ARGS(v(list), v(EPILEPSY_PRIV_ListIntersperse_), v(item))
#define EPILEPSY_PRIV_ListIntersperse_Nil_IMPL(_item) EPILEPSY_Nil()
#define EPILEPSY_PRIV_ListIntersperse_Cons_IMPL(x, xs, item)                                       \
    EPILEPSY_Cons(v(x), EPILEPSY_ListPrependToAll(v(xs), v(item)))

#define EPILEPSY_ListPrependToAll_IMPL(list, item)                                                 \
    EPILEPSY_MATCH_WITH_ARGS(v(list), v(EPILEPSY_PRIV_ListPrependToAll_), v(item))
#define EPILEPSY_PRIV_ListPrependToAll_Nil_IMPL(_item) EPILEPSY_Nil()
#define EPILEPSY_PRIV_ListPrependToAll_Cons_IMPL(x, xs, item)                                      \
    EPILEPSY_Cons(v(item), EPILEPSY_Cons(v(x), EPILEPSY_ListPrependToAll(v(xs), v(item))))

#define EPILEPSY_ListMap_IMPL(list, f)                                                             \
    EPILEPSY_MATCH_WITH_ARGS(v(list), v(EPILEPSY_PRIV_ListMap_), v(f))
#define EPILEPSY_PRIV_ListMap_Nil_IMPL(_f) EPILEPSY_Nil()
#define EPILEPSY_PRIV_ListMap_Cons_IMPL(x, xs, f)                                                  \
    EPILEPSY_Cons(EPILEPSY_APPLY(v(f), v(x)), EPILEPSY_ListMap(v(xs), v(f)))

// EPILEPSY_ListEq_IMPL {
#define EPILEPSY_ListEq_IMPL(list, other, compare)                                                 \
    EPILEPSY_MATCH_WITH_ARGS(v(list), v(EPILEPSY_PRIV_ListEq_), v(other, compare))

#define EPILEPSY_PRIV_ListEq_Nil_IMPL(other, _compare) EPILEPSY_ListIsEmpty(v(other))
#define EPILEPSY_PRIV_ListEq_Cons_IMPL(x, xs, other, compare)                                      \
    EPILEPSY_MATCH_WITH_ARGS(v(other), v(EPILEPSY_PRIV_ListEq_Cons_), v(x, xs, compare))

#define EPILEPSY_PRIV_ListEq_Cons_Nil_IMPL(_x, _xs, _compare) v(0)
#define EPILEPSY_PRIV_ListEq_Cons_Cons_IMPL(other_x, other_xs, x, xs, compare)                     \
    EPILEPSY_IF_LAZY(                                                                              \
        EPILEPSY_APPLY_2(v(compare), v(x), v(other_x)),                                            \
        v(EPILEPSY_ListEq),                                                                        \
        EPILEPSY_APPLY(v(EPILEPSY_CONST_3), v(0)),                                                 \
        v(xs, other_xs, compare))
// }

#define EPILEPSY_ListApply_IMPL(list, f) EPILEPSY_ListFoldl(v(list), v(EPILEPSY_APPLY), v(f))
// } (Implementation)

// Arity specifiers {
#define EPILEPSY_Cons_ARITY             2
#define EPILEPSY_Nil_ARITY              1
#define EPILEPSY_List_ARITY             1
#define EPILEPSY_ListUnwrap_ARITY       1
#define EPILEPSY_ListIsEmpty_ARITY      1
#define EPILEPSY_ListGet_ARITY          2
#define EPILEPSY_ListFoldr_ARITY        3
#define EPILEPSY_ListFoldl_ARITY        3
#define EPILEPSY_ListFoldl1_ARITY       2
#define EPILEPSY_ListIntersperse_ARITY  2
#define EPILEPSY_ListPrependToAll_ARITY 2
#define EPILEPSY_ListMap_ARITY          2
#define EPILEPSY_ListEq_ARITY           3
#define EPILEPSY_ListApply_ARITY        2

#define EPILEPSY_PRIV_List_DONE_ARITY             1
#define EPILEPSY_PRIV_List_PROGRESS_ARITY         2
#define EPILEPSY_PRIV_ListGet_Cons_DONE_ARITY     3
#define EPILEPSY_PRIV_ListGet_Cons_PROGRESS_ARITY 3
// }

#endif // DOXYGEN_IGNORE

#endif // EPILEPSY_LIST_H
