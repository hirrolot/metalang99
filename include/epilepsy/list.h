/**
 * @file
 * Lists.
 */

#ifndef EPILEPSY_LIST_H
#define EPILEPSY_LIST_H

#include <epilepsy/choice.h>
#include <epilepsy/control.h>
#include <epilepsy/fn.h>
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
// }

#ifndef DOXYGEN_IGNORE

// Implementation {
#define EPILEPSY_Cons_IMPL(x, xs) EPILEPSY_CHOICE(v(Cons), v(x, xs))
#define EPILEPSY_Nil_IMPL()       EPILEPSY_CHOICE_EMPTY(v(Nil))

#define EPILEPSY_List_IMPL(...)                                                                    \
    EPILEPSY_CALL(                                                                                 \
        EPILEPSY_PRIV_List_AUX, EPILEPSY_VARIADICS_COUNT(v(__VA_ARGS__)) v(__VA_ARGS__, ~))
#define EPILEPSY_PRIV_List_AUX(count, ...)                                                         \
    EPILEPSY_IF_LAZY(                                                                              \
        EPILEPSY_UIntEq(v(count), v(1)), v(EPILEPSY_PRIV_List_DONE),                               \
        v(EPILEPSY_PRIV_List_PROGRESS), v(count, __VA_ARGS__))
#define EPILEPSY_PRIV_List_DONE(_count, last, _) EPILEPSY_Cons(v(last), EPILEPSY_Nil())
#define EPILEPSY_PRIV_List_PROGRESS(count, x, ...)                                                 \
    EPILEPSY_Cons(                                                                                 \
        v(x), EPILEPSY_CALL(EPILEPSY_PRIV_List_AUX, EPILEPSY_UIntDec(v(count)) v(__VA_ARGS__)))

#define EPILEPSY_ListUnwrap_IMPL(list)       EPILEPSY_MATCH(v(list), v(EPILEPSY_PRIV_ListUnwrap_))
#define EPILEPSY_PRIV_ListUnwrap_Nil()       EPILEPSY_EMPTY()
#define EPILEPSY_PRIV_ListUnwrap_Cons(x, xs) v(x) EPILEPSY_ListUnwrap(v(xs))

#define EPILEPSY_ListGet_IMPL(list, i)                                                             \
    EPILEPSY_MATCH_WITH_ARGS(v(list), v(EPILEPSY_PRIV_ListGet_), v(i))
#define EPILEPSY_PRIV_ListGet_Nil(i) EPILEPSY_ERROR()
#define EPILEPSY_PRIV_ListGet_Cons(x, xs, i)                                                       \
    EPILEPSY_IF_LAZY(                                                                              \
        EPILEPSY_UIntEq(v(i), v(0)), v(EPILEPSY_PRIV_ListGet_Cons_DONE),                           \
        v(EPILEPSY_PRIV_ListGet_Cons_PROGRESS), v(x, xs, i))
#define EPILEPSY_PRIV_ListGet_Cons_DONE(x, _xs, _i) v(x)
#define EPILEPSY_PRIV_ListGet_Cons_PROGRESS(_x, xs, i)                                             \
    EPILEPSY_ListGet(v(xs), EPILEPSY_UIntDec(v(i)))

#define EPILEPSY_ListFoldr_IMPL(list, f, init)                                                     \
    EPILEPSY_MATCH_WITH_ARGS(v(list), v(EPILEPSY_PRIV_ListFoldr_), v(f, init))
#define EPILEPSY_PRIV_ListFoldr_Nil(_f, acc) v(acc)
#define EPILEPSY_PRIV_ListFoldr_Cons(x, xs, f, acc)                                                \
    EPILEPSY_CALL(f, v(x) EPILEPSY_ListFoldr(v(xs), v(f), v(acc)))

#define EPILEPSY_ListFoldl_IMPL(list, f, init)                                                     \
    EPILEPSY_MATCH_WITH_ARGS(v(list), v(EPILEPSY_PRIV_ListFoldl_), v(f, init))
#define EPILEPSY_PRIV_ListFoldl_Nil(_f, acc) v(acc)
#define EPILEPSY_PRIV_ListFoldl_Cons(x, xs, f, acc)                                                \
    EPILEPSY_ListFoldl(v(xs), v(f), EPILEPSY_CALL(f, v(acc, x)))

#define EPILEPSY_ListFoldl1_IMPL(list, f)                                                          \
    EPILEPSY_MATCH_WITH_ARGS(v(list), v(EPILEPSY_PRIV_ListFoldl1_), v(f))
#define EPILEPSY_PRIV_ListFoldl1_Nil(_f)        EPILEPSY_ERROR()
#define EPILEPSY_PRIV_ListFoldl1_Cons(x, xs, f) EPILEPSY_ListFoldl(v(xs), v(f), v(x))

#define EPILEPSY_ListIntersperse_IMPL(list, item)                                                  \
    EPILEPSY_MATCH_WITH_ARGS(v(list), v(EPILEPSY_PRIV_ListIntersperse_), v(item))
#define EPILEPSY_PRIV_ListIntersperse_Nil(_x) EPILEPSY_Nil()
#define EPILEPSY_PRIV_ListIntersperse_Cons(x, xs, item)                                            \
    EPILEPSY_Cons(v(x), EPILEPSY_ListPrependToAll(v(xs), v(item)))

#define EPILEPSY_ListPrependToAll_IMPL(list, item)                                                 \
    EPILEPSY_MATCH_WITH_ARGS(v(list), v(EPILEPSY_PRIV_ListPrependToAll_), v(item))
#define EPILEPSY_PRIV_ListPrependToAll_Nil(_x) EPILEPSY_Nil()
#define EPILEPSY_PRIV_ListPrependToAll_Cons(x, xs, item)                                           \
    EPILEPSY_Cons(v(item), EPILEPSY_Cons(v(x), EPILEPSY_ListPrependToAll(v(xs), v(item))))
// }

#endif // DOXYGEN_IGNORE

#endif // EPILEPSY_LIST_H
