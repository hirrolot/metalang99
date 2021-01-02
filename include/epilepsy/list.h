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
#define EPILEPSY_Cons(x, xs) EPILEPSY_DESUGAR(EPILEPSY_Cons, x xs)

/**
 * The empty list.
 */
#define EPILEPSY_Nil() EPILEPSY_DESUGAR(EPILEPSY_Nil, )

/**
 * Constructs a list from its arguments.
 */
#define EPILEPSY_List(...) EPILEPSY_DESUGAR(EPILEPSY_List, __VA_ARGS__)

/**
 * Places all the items in @p list as-is.
 */
#define EPILEPSY_ListUnwrap(list) EPILEPSY_DESUGAR(EPILEPSY_ListUnwrap, list)

/**
 * Checks @p list for emptiness.
 */
#define EPILEPSY_ListIsEmpty(list) EPILEPSY_DESUGAR(EPILEPSY_ListIsEmpty, list)

/**
 * Gets an @p i -indexed element.
 */
#define EPILEPSY_ListGet(list, i) EPILEPSY_DESUGAR(EPILEPSY_ListGet, list i)

/**
 * Performs a right-associative fold over @p list.
 */
#define EPILEPSY_ListFoldr(list, f, init) EPILEPSY_DESUGAR(EPILEPSY_ListFoldr, list f init)

/**
 * Performs a left-associative fold over @p list.
 */
#define EPILEPSY_ListFoldl(list, f, init) EPILEPSY_DESUGAR(EPILEPSY_ListFoldl, list f init)

/**
 * The same as #EPILEPSY_ListFoldl but treats the first element of @p list as the initial value.
 */
#define EPILEPSY_ListFoldl1(list, f) EPILEPSY_DESUGAR(EPILEPSY_ListFoldl1, list f)

/**
 * Intersperses @p item between the items in @p list.
 */
#define EPILEPSY_ListIntersperse(list, item) EPILEPSY_DESUGAR(EPILEPSY_ListIntersperse, list item)

/**
 * Prepends @p item to all items in @p list.
 */
#define EPILEPSY_ListPrependToAll(list, item) EPILEPSY_DESUGAR(EPILEPSY_ListPrependToAll, list item)

/**
 * Maps all the elements in @p list with @p f.
 */
#define EPILEPSY_ListMap(list, f) EPILEPSY_DESUGAR(EPILEPSY_ListMap, list f)

/**
 * Checks @p list and @p other for equality.
 */
#define EPILEPSY_ListEq(list, other, compare) EPILEPSY_DESUGAR(EPILEPSY_ListEq, list other compare)

/**
 * Applies all the items in @p list to @p f.
 */
#define EPILEPSY_ListApply(list, f) EPILEPSY_DESUGAR(EPILEPSY_ListApply, list f)
// }

#ifndef DOXYGEN_IGNORE

// Implementation {
#define EPILEPSY_Cons_IMPL(x, xs) EPILEPSY_CHOICE(v(Cons), v(x, xs))
#define EPILEPSY_Nil_IMPL()       EPILEPSY_CHOICE_EMPTY(v(Nil))

// EPILEPSY_List_IMPL {
#define EPILEPSY_List_IMPL(...)                                                                    \
    EPILEPSY_CALL(                                                                                 \
        EPILEPSY_PRIV_List_AUX, EPILEPSY_VARIADICS_COUNT(v(__VA_ARGS__)) v(__VA_ARGS__, ~))

#define EPILEPSY_PRIV_List_AUX(count, ...)                                                         \
    EPILEPSY_IF_LAZY(                                                                              \
        EPILEPSY_UIntEq(v(count), v(1)),                                                           \
        v(EPILEPSY_PRIV_List_DONE),                                                                \
        EPILEPSY_APPLY(v(EPILEPSY_PRIV_List_PROGRESS), v(count)),                                  \
        EPILEPSY_PARENTHESISE(v(__VA_ARGS__)))

#define EPILEPSY_PRIV_List_DONE(rest)                                                              \
    EPILEPSY_CALL(EPILEPSY_PRIV_List_DONE_AUX, v(EPILEPSY_UNPARENTHESISE_PLAIN(rest)))
#define EPILEPSY_PRIV_List_PROGRESS(count, rest)                                                   \
    EPILEPSY_CALL(EPILEPSY_PRIV_List_PROGRESS_AUX, v(count, EPILEPSY_UNPARENTHESISE_PLAIN(rest)))

#define EPILEPSY_PRIV_List_DONE_AUX(last, _) EPILEPSY_Cons(v(last), EPILEPSY_Nil())
#define EPILEPSY_PRIV_List_PROGRESS_AUX(count, x, ...)                                             \
    EPILEPSY_Cons(                                                                                 \
        v(x), EPILEPSY_CALL(EPILEPSY_PRIV_List_AUX, EPILEPSY_UIntDec(v(count)) v(__VA_ARGS__)))
// }

#define EPILEPSY_ListIsEmpty_IMPL(list)         EPILEPSY_MATCH(v(list), v(EPILEPSY_PRIV_ListIsEmpty_))
#define EPILEPSY_PRIV_ListIsEmpty_Nil()         v(1)
#define EPILEPSY_PRIV_ListIsEmpty_Cons(_x, _xs) v(0)

#define EPILEPSY_ListUnwrap_IMPL(list)       EPILEPSY_MATCH(v(list), v(EPILEPSY_PRIV_ListUnwrap_))
#define EPILEPSY_PRIV_ListUnwrap_Nil()       EPILEPSY_EMPTY()
#define EPILEPSY_PRIV_ListUnwrap_Cons(x, xs) v(x) EPILEPSY_ListUnwrap(v(xs))

// EPILEPSY_ListGet_IMPL {
#define EPILEPSY_ListGet_IMPL(list, i)                                                             \
    EPILEPSY_MATCH_WITH_ARGS(v(list), v(EPILEPSY_PRIV_ListGet_), v(i))

#define EPILEPSY_PRIV_ListGet_Nil(i) EPILEPSY_ERROR()
#define EPILEPSY_PRIV_ListGet_Cons(x, xs, i)                                                       \
    EPILEPSY_IF_LAZY(                                                                              \
        EPILEPSY_UIntEq(v(i), v(0)),                                                               \
        v(EPILEPSY_PRIV_ListGet_Cons_DONE),                                                        \
        v(EPILEPSY_PRIV_ListGet_Cons_PROGRESS),                                                    \
        v(x, xs, i))

#define EPILEPSY_PRIV_ListGet_Cons_DONE(x, _xs, _i) v(x)
#define EPILEPSY_PRIV_ListGet_Cons_PROGRESS(_x, xs, i)                                             \
    EPILEPSY_ListGet(v(xs), EPILEPSY_UIntDec(v(i)))
// }

#define EPILEPSY_ListFoldr_IMPL(list, f, init)                                                     \
    EPILEPSY_MATCH_WITH_ARGS(v(list), v(EPILEPSY_PRIV_ListFoldr_), v(f, init))
#define EPILEPSY_PRIV_ListFoldr_Nil(_f, acc) v(acc)
#define EPILEPSY_PRIV_ListFoldr_Cons(x, xs, f, acc)                                                \
    EPILEPSY_VARIADICS_APPLY(v(f), v(x) EPILEPSY_ListFoldr(v(xs), v(f), v(acc)))

#define EPILEPSY_ListFoldl_IMPL(list, f, init)                                                     \
    EPILEPSY_MATCH_WITH_ARGS(v(list), v(EPILEPSY_PRIV_ListFoldl_), v(f, init))
#define EPILEPSY_PRIV_ListFoldl_Nil(_f, acc) v(acc)
#define EPILEPSY_PRIV_ListFoldl_Cons(x, xs, f, acc)                                                \
    EPILEPSY_ListFoldl(v(xs), v(f), EPILEPSY_VARIADICS_APPLY(v(f), v(acc, x)))

#define EPILEPSY_ListFoldl1_IMPL(list, f)                                                          \
    EPILEPSY_MATCH_WITH_ARGS(v(list), v(EPILEPSY_PRIV_ListFoldl1_), v(f))
#define EPILEPSY_PRIV_ListFoldl1_Nil(_f)        EPILEPSY_ERROR()
#define EPILEPSY_PRIV_ListFoldl1_Cons(x, xs, f) EPILEPSY_ListFoldl(v(xs), v(f), v(x))

#define EPILEPSY_ListIntersperse_IMPL(list, item)                                                  \
    EPILEPSY_MATCH_WITH_ARGS(v(list), v(EPILEPSY_PRIV_ListIntersperse_), v(item))
#define EPILEPSY_PRIV_ListIntersperse_Nil(_item) EPILEPSY_Nil()
#define EPILEPSY_PRIV_ListIntersperse_Cons(x, xs, item)                                            \
    EPILEPSY_Cons(v(x), EPILEPSY_ListPrependToAll(v(xs), v(item)))

#define EPILEPSY_ListPrependToAll_IMPL(list, item)                                                 \
    EPILEPSY_MATCH_WITH_ARGS(v(list), v(EPILEPSY_PRIV_ListPrependToAll_), v(item))
#define EPILEPSY_PRIV_ListPrependToAll_Nil(_item) EPILEPSY_Nil()
#define EPILEPSY_PRIV_ListPrependToAll_Cons(x, xs, item)                                           \
    EPILEPSY_Cons(v(item), EPILEPSY_Cons(v(x), EPILEPSY_ListPrependToAll(v(xs), v(item))))

#define EPILEPSY_ListMap_IMPL(list, f)                                                             \
    EPILEPSY_MATCH_WITH_ARGS(v(list), v(EPILEPSY_PRIV_ListMap_), v(f))
#define EPILEPSY_PRIV_ListMap_Nil(_f) EPILEPSY_Nil()
#define EPILEPSY_PRIV_ListMap_Cons(x, xs, f)                                                       \
    EPILEPSY_Cons(EPILEPSY_APPLY(v(f), v(x)), EPILEPSY_ListMap(v(xs), v(f)))

// EPILEPSY_ListEq_IMPL {
#define EPILEPSY_ListEq_IMPL(list, other, compare)                                                 \
    EPILEPSY_MATCH_WITH_ARGS(v(list), v(EPILEPSY_PRIV_ListEq_), v(other, compare))

#define EPILEPSY_PRIV_ListEq_Nil(other, _compare) EPILEPSY_ListIsEmpty(v(other))
#define EPILEPSY_PRIV_ListEq_Cons(x, xs, other, compare)                                           \
    EPILEPSY_MATCH_WITH_ARGS(v(other), v(EPILEPSY_PRIV_ListEq_Cons_), v(x, xs, compare))

#define EPILEPSY_PRIV_ListEq_Cons_Nil(_x, _xs, _compare) v(0)
#define EPILEPSY_PRIV_ListEq_Cons_Cons(other_x, other_xs, x, xs, compare)                          \
    EPILEPSY_IF_LAZY(                                                                              \
        EPILEPSY_APPLY_2(v(compare), v(x), v(other_x)),                                            \
        v(EPILEPSY_ListEq_IMPL),                                                                   \
        EPILEPSY_APPLY(v(EPILEPSY_CONST_3_IMPL), v(0)),                                            \
        v(xs, other_xs, compare))
// }

#define EPILEPSY_ListApply_IMPL(list, f) EPILEPSY_ListFoldl(v(list), v(EPILEPSY_APPLY_IMPL), v(f))
// } (Implementation)

// Arity specifiers {
#define EPILEPSY_Cons_IMPL_ARITY             2
#define EPILEPSY_Nil_ARITY                   1
#define EPILEPSY_List_IMPL_ARITY             1
#define EPILEPSY_ListUnwrap_IMPL_ARITY       1
#define EPILEPSY_ListIsEmpty_IMPL_ARITY      1
#define EPILEPSY_ListGet_IMPL_ARITY          2
#define EPILEPSY_ListFoldr_IMPL_ARITY        3
#define EPILEPSY_ListFoldl_IMPL_ARITY        3
#define EPILEPSY_ListFoldl1_IMPL_ARITY       2
#define EPILEPSY_ListIntersperse_IMPL_ARITY  2
#define EPILEPSY_ListPrependToAll_IMPL_ARITY 2
#define EPILEPSY_ListMap_IMPL_ARITY          2
#define EPILEPSY_ListEq_IMPL_ARITY           3
#define EPILEPSY_ListApply_IMPL_ARITY        2

#define EPILEPSY_PRIV_List_DONE_ARITY             1
#define EPILEPSY_PRIV_List_PROGRESS_ARITY         2
#define EPILEPSY_PRIV_ListGet_Cons_DONE_ARITY     3
#define EPILEPSY_PRIV_ListGet_Cons_PROGRESS_ARITY 3
// }

#endif // DOXYGEN_IGNORE

#endif // EPILEPSY_LIST_H
