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
#define epCons(x, xs) epCall(epCons, x xs)

/**
 * The empty list.
 */
#define epNil() epCall(epNil, )

/**
 * Constructs a list from its arguments.
 */
#define epList(...) epCall(epList, __VA_ARGS__)

/**
 * Places all the items in @p list as-is.
 */
#define epListUnwrap(list) epCall(epListUnwrap, list)

/**
 * Checks @p list for emptiness.
 */
#define epListIsEmpty(list) epCall(epListIsEmpty, list)

/**
 * Gets an @p i -indexed element.
 */
#define epListGet(list, i) epCall(epListGet, list i)

/**
 * Performs a right-associative fold over @p list.
 */
#define epListFoldr(list, f, init) epCall(epListFoldr, list f init)

/**
 * Performs a left-associative fold over @p list.
 */
#define epListFoldl(list, f, init) epCall(epListFoldl, list f init)

/**
 * The same as #epListFoldl but treats the first element of @p list as the initial value.
 */
#define epListFoldl1(list, f) epCall(epListFoldl1, list f)

/**
 * Intersperses @p item between the items in @p list.
 */
#define epListIntersperse(list, item) epCall(epListIntersperse, list item)

/**
 * Prepends @p item to all items in @p list.
 */
#define epListPrependToAll(list, item) epCall(epListPrependToAll, list item)

/**
 * Maps all the elements in @p list with @p f.
 */
#define epListMap(list, f) epCall(epListMap, list f)

/**
 * Checks @p list and @p other for equality.
 */
#define epListEq(list, other, compare) epCall(epListEq, list other compare)

/**
 * Applies all the items in @p list to @p f.
 */
#define epListApply(list, f) epCall(epListApply, list f)
// }

#ifndef DOXYGEN_IGNORE

// Implementation {
#define epCons_IMPL(x, xs) epChoice(v(Cons), v(x, xs))
#define epNil_IMPL()       epChoiceEmpty(v(Nil))

// epList_IMPL {
#define epList_IMPL(...)                                                                           \
    epCall(EPILEPSY_PRIV_List_AUX, epVariadicsCount(v(__VA_ARGS__)) v(__VA_ARGS__, ~))

#define EPILEPSY_PRIV_List_AUX_IMPL(count, ...)                                                    \
    epIfLazy(                                                                                      \
        epUIntEq(v(count), v(1)),                                                                  \
        v(EPILEPSY_PRIV_List_DONE),                                                                \
        epApply(v(EPILEPSY_PRIV_List_PROGRESS), v(count)),                                         \
        epParenthesise(v(__VA_ARGS__)))

#define EPILEPSY_PRIV_List_DONE_IMPL(rest)                                                         \
    epCall(EPILEPSY_PRIV_List_DONE_AUX, v(epUnparenthesise_PLAIN(rest)))
#define EPILEPSY_PRIV_List_PROGRESS_IMPL(count, rest)                                              \
    epCall(EPILEPSY_PRIV_List_PROGRESS_AUX, v(count, epUnparenthesise_PLAIN(rest)))

#define EPILEPSY_PRIV_List_DONE_AUX_IMPL(last, _) epCons(v(last), epNil())
#define EPILEPSY_PRIV_List_PROGRESS_AUX_IMPL(count, x, ...)                                        \
    epCons(v(x), epCall(EPILEPSY_PRIV_List_AUX, epUIntDec(v(count)) v(__VA_ARGS__)))
// }

#define epListIsEmpty_IMPL(list)                     epMatch(v(list), v(EPILEPSY_PRIV_ListIsEmpty_))
#define EPILEPSY_PRIV_ListIsEmpty_Nil_IMPL()         v(1)
#define EPILEPSY_PRIV_ListIsEmpty_Cons_IMPL(_x, _xs) v(0)

#define epListUnwrap_IMPL(list)                   epMatch(v(list), v(EPILEPSY_PRIV_ListUnwrap_))
#define EPILEPSY_PRIV_ListUnwrap_Nil_IMPL()       epEmpty()
#define EPILEPSY_PRIV_ListUnwrap_Cons_IMPL(x, xs) v(x) epListUnwrap(v(xs))

// epListGet_IMPL {
#define epListGet_IMPL(list, i) epMatchWithArgs(v(list), v(EPILEPSY_PRIV_ListGet_), v(i))

// clang-format off
#define EPILEPSY_PRIV_ListGet_Nil_IMPL(i)                                                          \
    epFatal(epListGet, expected a non-empty list)
// clang-format on
#define EPILEPSY_PRIV_ListGet_Cons_IMPL(x, xs, i)                                                  \
    epIfLazy(                                                                                      \
        epUIntEq(v(i), v(0)),                                                                      \
        v(EPILEPSY_PRIV_ListGet_Cons_DONE),                                                        \
        v(EPILEPSY_PRIV_ListGet_Cons_PROGRESS),                                                    \
        v(x, xs, i))

#define EPILEPSY_PRIV_ListGet_Cons_DONE_IMPL(x, _xs, _i)    v(x)
#define EPILEPSY_PRIV_ListGet_Cons_PROGRESS_IMPL(_x, xs, i) epListGet(v(xs), epUIntDec(v(i)))
// }

#define epListFoldr_IMPL(list, f, init)                                                            \
    epMatchWithArgs(v(list), v(EPILEPSY_PRIV_ListFoldr_), v(f, init))
#define EPILEPSY_PRIV_ListFoldr_Nil_IMPL(_f, acc) v(acc)
#define EPILEPSY_PRIV_ListFoldr_Cons_IMPL(x, xs, f, acc)                                           \
    epVariadicsApply(v(f), v(x) epListFoldr(v(xs), v(f), v(acc)))

#define epListFoldl_IMPL(list, f, init)                                                            \
    epMatchWithArgs(v(list), v(EPILEPSY_PRIV_ListFoldl_), v(f, init))
#define EPILEPSY_PRIV_ListFoldl_Nil_IMPL(_f, acc) v(acc)
#define EPILEPSY_PRIV_ListFoldl_Cons_IMPL(x, xs, f, acc)                                           \
    epListFoldl(v(xs), v(f), epVariadicsApply(v(f), v(acc, x)))

#define epListFoldl1_IMPL(list, f) epMatchWithArgs(v(list), v(EPILEPSY_PRIV_ListFoldl1_), v(f))
// clang-format off
#define EPILEPSY_PRIV_ListFoldl1_Nil_IMPL(_f)                                                      \
    epFatal(epListFoldl1, expected a non-empty list)
// clang-format on
#define EPILEPSY_PRIV_ListFoldl1_Cons_IMPL(x, xs, f) epListFoldl(v(xs), v(f), v(x))

#define epListIntersperse_IMPL(list, item)                                                         \
    epMatchWithArgs(v(list), v(EPILEPSY_PRIV_ListIntersperse_), v(item))
#define EPILEPSY_PRIV_ListIntersperse_Nil_IMPL(_item) epNil()
#define EPILEPSY_PRIV_ListIntersperse_Cons_IMPL(x, xs, item)                                       \
    epCons(v(x), epListPrependToAll(v(xs), v(item)))

#define epListPrependToAll_IMPL(list, item)                                                        \
    epMatchWithArgs(v(list), v(EPILEPSY_PRIV_ListPrependToAll_), v(item))
#define EPILEPSY_PRIV_ListPrependToAll_Nil_IMPL(_item) epNil()
#define EPILEPSY_PRIV_ListPrependToAll_Cons_IMPL(x, xs, item)                                      \
    epCons(v(item), epCons(v(x), epListPrependToAll(v(xs), v(item))))

#define epListMap_IMPL(list, f)            epMatchWithArgs(v(list), v(EPILEPSY_PRIV_ListMap_), v(f))
#define EPILEPSY_PRIV_ListMap_Nil_IMPL(_f) epNil()
#define EPILEPSY_PRIV_ListMap_Cons_IMPL(x, xs, f)                                                  \
    epCons(epApply(v(f), v(x)), epListMap(v(xs), v(f)))

// epListEq_IMPL {
#define epListEq_IMPL(list, other, compare)                                                        \
    epMatchWithArgs(v(list), v(EPILEPSY_PRIV_ListEq_), v(other, compare))

#define EPILEPSY_PRIV_ListEq_Nil_IMPL(other, _compare) epListIsEmpty(v(other))
#define EPILEPSY_PRIV_ListEq_Cons_IMPL(x, xs, other, compare)                                      \
    epMatchWithArgs(v(other), v(EPILEPSY_PRIV_ListEq_Cons_), v(x, xs, compare))

#define EPILEPSY_PRIV_ListEq_Cons_Nil_IMPL(_x, _xs, _compare) v(0)
#define EPILEPSY_PRIV_ListEq_Cons_Cons_IMPL(other_x, other_xs, x, xs, compare)                     \
    epIfLazy(                                                                                      \
        epApply2(v(compare), v(x), v(other_x)),                                                    \
        v(epListEq),                                                                               \
        epApply(v(epConst3), v(0)),                                                                \
        v(xs, other_xs, compare))
// }

#define epListApply_IMPL(list, f) epListFoldl(v(list), v(epApply), v(f))
// } (Implementation)

// Arity specifiers {
#define epCons_ARITY             2
#define epNil_ARITY              1
#define epList_ARITY             1
#define epListUnwrap_ARITY       1
#define epListIsEmpty_ARITY      1
#define epListGet_ARITY          2
#define epListFoldr_ARITY        3
#define epListFoldl_ARITY        3
#define epListFoldl1_ARITY       2
#define epListIntersperse_ARITY  2
#define epListPrependToAll_ARITY 2
#define epListMap_ARITY          2
#define epListEq_ARITY           3
#define epListApply_ARITY        2

#define EPILEPSY_PRIV_List_DONE_ARITY             1
#define EPILEPSY_PRIV_List_PROGRESS_ARITY         2
#define EPILEPSY_PRIV_ListGet_Cons_DONE_ARITY     3
#define EPILEPSY_PRIV_ListGet_Cons_PROGRESS_ARITY 3
// }

#endif // DOXYGEN_IGNORE

#endif // EPILEPSY_LIST_H
