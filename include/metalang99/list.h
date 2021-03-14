/**
 * @file
 * List manipulation.
 */

#ifndef ML99_LIST_H
#define ML99_LIST_H

#include <metalang99/priv/variadics/count.h>

#include <metalang99/choice.h>
#include <metalang99/control.h>
#include <metalang99/logical.h>
#include <metalang99/nat.h>
#include <metalang99/util.h>
#include <metalang99/variadics.h>

// Desugaring {
/**
 * Prepends @p x to @p xs.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/list.h>
 *
 * ML99_cons(v(1), ML99_cons(v(2), ML99_nil()))
 * @endcode
 */
#define ML99_cons(x, xs) ML99_call(ML99_cons, x, xs)

/**
 * The empty list.
 */
#define ML99_nil() ML99_callTrivial(ML99_nil, )

/**
 * Extracts the head from the non-empty list @p list.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/list.h>
 *
 * // 1
 * ML99_listHead(ML99_list(v(1, 2, 3)))
 * @endcode
 */
#define ML99_listHead(list) ML99_call(ML99_listHead, list)

/**
 * Extracts the tail from the non-empty list @p list.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/list.h>
 *
 * // 2, 3
 * ML99_listTail(ML99_list(v(1, 2, 3)))
 *
 * // ML99_nil()
 * ML99_listTail(ML99_list(v(1)))
 * @endcode
 */
#define ML99_listTail(list) ML99_call(ML99_listTail, list)

/**
 * Extracts the last element from the non-empty list @p list.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/list.h>
 *
 * // 3
 * ML99_listLast(ML99_list(v(1, 2, 3)))
 * @endcode
 */
#define ML99_listLast(list) ML99_call(ML99_listLast, list)

/**
 * Extracts all the elements of the non-empty list @p list except the last one.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/list.h>
 *
 * // 1, 2
 * ML99_listInit(ML99_list(v(1, 2, 3)))
 *
 * // ML99_nil()
 * ML99_listInit(ML99_list(v(1)))
 * @endcode
 */
#define ML99_listInit(list) ML99_call(ML99_listInit, list)

/**
 * Constructs a list from its arguments.
 *
 * At most 63 arguments are acceptable.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/list.h>
 *
 * // 1, 2, 3
 * ML99_list(v(1, 2, 3))
 * @endcode
 */
#define ML99_list(...) ML99_call(ML99_list, __VA_ARGS__)

/**
 * Computes the length of @p list.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/list.h>
 *
 * // 0
 * ML99_listLen(ML99_nil())
 *
 * // 3
 * ML99_listLen(ML99_list(v(1, 2, 3)))
 * @endcode
 */
#define ML99_listLen(list) ML99_call(ML99_listLen, list)

/**
 * Evaluates a metaprogram that reduces to a list, then unwraps it.
 *
 * It behaves the same as the composition of <a href="#c.ML99_eval">ML99_EVAL</a> and
 * #ML99_listUnwrap.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/list.h>
 *
 * // Literally 1 2 3
 * ML99_listEval(ML99_list(v(1, 2, 3)))
 * @endcode
 *
 * @note This macro does not result in a Metalang99 term; it literally pastes list elements into a
 * source file.
 */
#define ML99_listEval(...) ML99_eval(ML99_call(ML99_listUnwrap, __VA_ARGS__))

/**
 * The same as #ML99_listEval but intersperses a comma between list items.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/util.h>
 *
 * // Literally 1, 2, 3
 * ML99_listEvalCommaSep(ML99_list(v(1, 2, 3)))
 * @endcode
 *
 * @note This macro does not result in a Metalang99 term; it literally pastes comma-separated list
 * elements into a source file.
 */
#define ML99_listEvalCommaSep(...) ML99_eval(ML99_call(ML99_listUnwrapCommaSep, __VA_ARGS__))

/**
 * Appends the list @p other to @p list.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/list.h>
 *
 * // 1, 2, 3
 * ML99_listAppend(ML99_list(v(1)), ML99_list(v(2, 3)))
 * @endcode
 */
#define ML99_listAppend(list, other) ML99_call(ML99_listAppend, list, other)

/**
 * Appends the item @p item to @p list.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/list.h>
 *
 * // 1, 2, 3
 * ML99_listAppendItem(v(3), ML99_list(v(1, 2)))
 * @endcode
 */
#define ML99_listAppendItem(item, list) ML99_call(ML99_listAppendItem, item, list)

/**
 * Places all the items in @p list as-is.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/list.h>
 *
 * // 1 2 3
 * ML99_listUnwrap(ML99_list(v(1, 2, 3)))
 * @endcode
 *
 * @note The resulting value is still a valid Metalang99 term that need to be evaluated further.
 * @see #ML99_listEval
 * @see #ML99_listEvalCommaSep
 */
#define ML99_listUnwrap(list) ML99_call(ML99_listUnwrap, list)

/**
 * Places all the items in @p list as-is, separated by commas.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/list.h>
 *
 * // 1, 2, 3
 * ML99_listUnwrap(ML99_list(v(1, 2, 3)))
 * @endcode
 *
 * @note The resulting value is still a valid Metalang99 term that need to be evaluated further.
 * @see #ML99_listEval
 * @see #ML99_listEvalCommaSep
 */
#define ML99_listUnwrapCommaSep(list) ML99_call(ML99_listUnwrapCommaSep, list)

/**
 * Reverses the order of items in @p list.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/list.h>
 *
 * // 3, 2, 1
 * ML99_listReverse(ML99_list(v(1, 2, 3)))
 * @endcode
 */
#define ML99_listReverse(list) ML99_call(ML99_listReverse, list)

/**
 * Checks @p list for non-emptiness.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/list.h>
 *
 * // 1
 * ML99_isCons(ML99_list(v(1, 2, 3)))
 *
 * // 0
 * ML99_isCons(ML99_nil())
 * @endcode
 */
#define ML99_isCons(list) ML99_call(ML99_isCons, list)

/**
 * Checks @p list for emptiness.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/list.h>
 *
 * // 0
 * ML99_isNil(ML99_list(v(1, 2, 3)))
 *
 * // 1
 * ML99_isNil(ML99_nil())
 * @endcode
 */
#define ML99_isNil(list) ML99_call(ML99_isNil, list)

/**
 * Extracts the @p i -indexed element.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/list.h>
 *
 * // 2
 * ML99_listGet(v(1), ML99_list(v(1, 2, 3)))
 * @endcode
 */
#define ML99_listGet(i, list) ML99_call(ML99_listGet, i, list)

/**
 * A right-associative fold over @p list.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/list.h>
 *
 * #define ABCDEFG 123
 *
 * // 7
 * ML99_listFoldr(v(ML99_cat), v(7), ML99_nil())
 *
 * // 123
 * ML99_listFoldr(ML99_appl(v(ML99_flip), v(ML99_cat)), v(A), ML99_list(v(G, DEF, BC)))
 * @endcode
 *
 * @note @p f must always return a single Metalang99 term.
 */
#define ML99_listFoldr(f, init, list) ML99_call(ML99_listFoldr, f, init, list)

/**
 * A left-associative fold over @p list.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/list.h>
 *
 * #define ABCDEFG 123
 *
 * // 7
 * ML99_listFoldl(v(ML99_cat), v(7), ML99_nil())
 *
 * // 123
 * ML99_listFoldl(v(ML99_cat), v(A), ML99_list(v(BC, DEF, G)))
 * @endcode
 *
 * @note @p f must always return a single Metalang99 term.
 */
#define ML99_listFoldl(f, init, list) ML99_call(ML99_listFoldl, f, init, list)

/**
 * The same as #ML99_listFoldl but treats the first element of @p list as the initial value.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/list.h>
 *
 * #define ABCDEFG 123
 *
 * // 123
 * ML99_listFoldl1(v(ML99_cat), ML99_list(v(AB, CDEF, G)))
 * @endcode
 *
 * @note @p f must always return a single Metalang99 term.
 */
#define ML99_listFoldl1(f, list) ML99_call(ML99_listFoldl1, f, list)

/**
 * Intersperses @p item between the items in @p list.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/list.h>
 *
 * // 1, +, 2, +, 3
 * ML99_listIntersperse(v(+), ML99_list(v(1, 2, 3)))
 * @endcode
 */
#define ML99_listIntersperse(item, list) ML99_call(ML99_listIntersperse, item, list)

/**
 * Prepends @p item to all items in @p list.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/list.h>
 *
 * // +, 1, +, 2, +, 3
 * ML99_listPrependToAll(v(+), ML99_list(v(1, 2, 3)))
 * @endcode
 */
#define ML99_listPrependToAll(item, list) ML99_call(ML99_listPrependToAll, item, list)

/**
 * Maps all the elements in @p list with @p f.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/list.h>
 * #include <metalang99/nat.h>
 *
 * // 4, 5, 6
 * ML99_listMap(ML99_appl(v(ML99_add), v(3)), ML99_list(v(1, 2, 3)))
 * @endcode
 *
 * @note @p f must always return a single Metalang99 term.
 */
#define ML99_listMap(f, list) ML99_call(ML99_listMap, f, list)

/**
 * The same as #ML99_listMap but provides an index of an element to @p f.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/list.h>
 *
 * #define F_IMPL(x, i) v(x[i])
 * #define F_ARITY      2
 *
 * // a[0], b[1], c[2]
 * ML99_listMapI(v(F), ML99_list(v(a, b, c)))
 * @endcode
 *
 * @note @p f must always return a single Metalang99 term.
 */
#define ML99_listMapI(f, list) ML99_call(ML99_listMapI, f, list)

/**
 * A more efficient version of `ML99_listUnwrap(ML99_listMap(f, list))`.
 *
 * @note Unlike #ML99_listMap, @p f can evaluate to many terms.
 */
#define ML99_listMapInPlace(f, list) ML99_call(ML99_listMapInPlace, f, list)

/**
 * A more efficient version of `ML99_listUnwrap(ML99_listMapI(f, list))`.
 *
 * @note Unlike #ML99_listMapI, @p f can evaluate to many terms.
 */
#define ML99_listMapInPlaceI(f, list) ML99_call(ML99_listMapInPlaceI, f, list)

/**
 * The same as #ML99_listMap but with the reversed order of arguments.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/list.h>
 * #include <metalang99/nat.h>
 *
 * // 4, 5, 6
 * ML99_listFor(ML99_list(v(1, 2, 3)), ML99_appl(v(ML99_add), v(3)))
 * @endcode
 *
 * @note @p f must always return a single Metalang99 term.
 */
#define ML99_listFor(list, f) ML99_call(ML99_listFor, list, f)

/**
 * Maps the initial elements of the non-empty list @p list with @p f_init and the last element with
 * @p f_last.
 *
 * # Examples
 *
 * @code
 * // 4, 5, 10
 * ML99_listMapInitLast(ML99_appl(v(ML99_add), v(3)), ML99_appl(v(ML99_add), v(7)), ML99_list(v(1,
 * 2, 3)))
 * @endcode
 *
 * @note @p f must always return a single Metalang99 term.
 */
#define ML99_listMapInitLast(f_init, f_last, list)                                                 \
    ML99_call(ML99_listMapInitLast, f_init, f_last, list)

/**
 * The same as #ML99_listMapInitLast but accepts @p list as the first parameter.
 *
 * # Examples
 *
 * @code
 * // 4, 5, 10
 * ML99_listForInitLast(ML99_list(v(1, 2, 3)), ML99_appl(v(ML99_add), v(3)), ML99_appl(v(ML99_add),
 * v(7)))
 * @endcode
 *
 * @note @p f must always return a single Metalang99 term.
 */
#define ML99_listForInitLast(list, f_init, f_last)                                                 \
    ML99_call(ML99_listForInitLast, list, f_init, f_last)

/**
 * Filters @p list with @p f.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/list.h>
 * #include <metalang99/nat.h>
 *
 * // 9, 11, 6
 * ML99_listFilter(ML99_appl(v(ML99_lesser), v(5)), ML99_list(v(9, 1, 11, 6, 0, 4)))
 * @endcode
 */
#define ML99_listFilter(f, list) ML99_call(ML99_listFilter, f, list)

/**
 * Tests @p list and @p other for equality.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/list.h>
 * #include <metalang99/nat.h>
 *
 * // 0
 * ML99_listEq(v(ML99_natEq), ML99_list(v(1, 2, 3)), ML99_list(v(4, 5, 6)))
 *
 * // 1
 * ML99_listEq(v(ML99_natEq), ML99_list(v(1, 2, 3)), ML99_list(v(1, 2, 3)))
 * @endcode
 */
#define ML99_listEq(compare, list, other) ML99_call(ML99_listEq, compare, list, other)

/**
 * Checks whether @p item resides in @p list.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/list.h>
 * #include <metalang99/nat.h>
 *
 * // 1
 * ML99_listContains(v(ML99_natEq), v(3), ML99_list(v(1, 2, 3)))
 *
 * // 0
 * ML99_listContains(v(ML99_natEq), v(456), ML99_list(v(1, 2, 3)))
 * @endcode
 */
#define ML99_listContains(compare, item, list) ML99_call(ML99_listContains, compare, item, list)

/**
 * Extracts the prefix of @p list of the length @p n. If @p n is greater than the length of @p list,
 * the whole @p list is returned.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/list.h>
 *
 * // 1, 2
 * ML99_listTake(v(2), ML99_list(v(1, 2, 3)))
 * @endcode
 */
#define ML99_listTake(n, list) ML99_call(ML99_listTake, n, list)

/**
 * Extracts the items from @p list as long as @p f evaluates to true.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/list.h>
 * #include <metalang99/nat.h>
 *
 * // 1, 2, 3
 * ML99_listTakeWhile(ML99_appl(v(ML99_greater), v(4)), ML99_list(v(1, 2, 3, 4, 5, 6)))
 * @endcode
 */
#define ML99_listTakeWhile(f, list) ML99_call(ML99_listTakeWhile, f, list)

/**
 * Removes the prefix of @p list of the length @p n. If @p n is greater than the length of @p list,
 * `ML99_nil()` is returned.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/list.h>
 *
 * // 2, 3
 * ML99_listDrop(v(1), ML99_list(v(1, 2, 3)))
 * @endcode
 */
#define ML99_listDrop(n, list) ML99_call(ML99_listDrop, n, list)

/**
 * Removes the items from @p list as long as @p f evaluates to true.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/list.h>
 * #include <metalang99/nat.h>
 *
 * // 4, 5, 6
 * ML99_listDropWhile(ML99_appl(v(ML99_lesser), v(4)), ML99_list(v(1, 2, 3, 4, 5, 6)))
 * @endcode
 */
#define ML99_listDropWhile(f, list) ML99_call(ML99_listDropWhile, f, list)

/**
 * Computes a list of corresponding pairs from @p list and @p other.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/list.h>
 *
 * // (1, 4), (2, 5), (3, 6)
 * E_zip(ML99_list(v(1, 2, 3)), ML99_list(v(4, 5, 6)))
 * @endcode
 */
#define ML99_listZip(list, other) ML99_call(ML99_listZip, list, other)

/**
 * Transforms a list of pairs into a list of the first components and a list of the second
 * components.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/list.h>
 *
 * // ML99_list(ML99_list(v(1, 2, 3)), ML99_list(v(4, 5, 6)))
 * ML99_listUnzip(ML99_list(ML99_list(v(1, 4)), ML99_list(v(2, 5)), ML99_list(v(3, 6))))
 * @endcode
 */
#define ML99_listUnzip(list) ML99_call(ML99_listUnzip, list)

/**
 * Computes a list of length @p n with each element @p item.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/list.h>
 *
 * // ~, ~, ~, ~, ~
 * ML99_listReplicate(v(5), v(~))
 *
 * // ML99_nil()
 * ML99_listReplicate(v(0), v(~))
 * @endcode
 */
#define ML99_listReplicate(n, item) ML99_call(ML99_listReplicate, n, item)

/**
 * Returns a pair of list: those items of @p list the do and do not satisfy the predicate @p f,
 * respectively.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/list.h>
 * #include <metalang99/nat.h>
 *
 * // ML99_list(ML99_list(v(4, 7)) ML99_list(v(11, 12, 13)))
 * ML99_listPartition(ML99_appl(v(ML99_greater), v(10)), ML99_list(v(11, 4, 12, 13, 7)))
 * @endcode
 */
#define ML99_listPartition(f, list) ML99_call(ML99_listPartition, f, list)

/**
 * Applies all the items in @p list to @p f.
 *
 * If the list is empty, results in @p f as-is.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/list.h>
 * #include <metalang99/nat.h>
 *
 * // ML99_add
 * ML99_listAppl(v(ML99_add), ML99_nil())
 *
 * // ML99_appl(v(ML99_add), v(1))
 * ML99_listAppl(v(ML99_add), ML99_list(v(1)))
 *
 * // ML99_appl2(v(ML99_add), v(1), v(2))
 * ML99_listAppl(v(ML99_add), ML99_list(v(1, 2)))
 * @endcode
 */
#define ML99_listAppl(f, list) ML99_call(ML99_listAppl, f, list)

#define ML99_CONS(x, xs)   ML99_CHOICE(cons, x, xs)
#define ML99_NIL()         ML99_CHOICE(nil, ~)
#define ML99_IS_CONS(list) ML99_PRIV_IS_CONS(list)
#define ML99_IS_NIL(list)  ML99_PRIV_IS_NIL(list)
// }

#ifndef DOXYGEN_IGNORE

// Implementation {
#define ML99_cons_IMPL(x, xs) v(ML99_CONS(x, xs))
#define ML99_nil_IMPL(_)      v(ML99_NIL())

// ML99_listHead_IMPL {
#define ML99_listHead_IMPL(list)             ML99_match_IMPL(list, ML99_PRIV_listHead_)
#define ML99_PRIV_listHead_nil_IMPL(_)       ML99_PRIV_EMPTY_LIST_ERROR(listHead)
#define ML99_PRIV_listHead_cons_IMPL(x, _xs) v(x)
// }

// ML99_listTail_IMPL {
#define ML99_listTail_IMPL(list)             ML99_match_IMPL(list, ML99_PRIV_listTail_)
#define ML99_PRIV_listTail_nil_IMPL(_)       ML99_PRIV_EMPTY_LIST_ERROR(listTail)
#define ML99_PRIV_listTail_cons_IMPL(_x, xs) v(xs)
// }

// ML99_listLast_IMPL {
#define ML99_listLast_IMPL(list)       ML99_match_IMPL(list, ML99_PRIV_listLast_)
#define ML99_PRIV_listLast_nil_IMPL(_) ML99_PRIV_EMPTY_LIST_ERROR(listLast)
#define ML99_PRIV_listLast_cons_IMPL(x, xs)                                                        \
    ML99_call(                                                                                     \
        ML99_callTrivial(                                                                          \
            ML99_if,                                                                               \
            ML99_IS_NIL(xs),                                                                       \
            ML99_PRIV_listLastDone,                                                                \
            ML99_PRIV_listLastProgress),                                                           \
        v(x, xs))
#define ML99_PRIV_listLastDone_IMPL(x, _xs)     v(x)
#define ML99_PRIV_listLastProgress_IMPL(_x, xs) ML99_listLast_IMPL(xs)
// }

// ML99_listInit_IMPL {
#define ML99_listInit_IMPL(list)       ML99_match_IMPL(list, ML99_PRIV_listInit_)
#define ML99_PRIV_listInit_nil_IMPL(_) ML99_PRIV_EMPTY_LIST_ERROR(listInit)
#define ML99_PRIV_listInit_cons_IMPL(x, xs)                                                        \
    ML99_call(                                                                                     \
        ML99_callTrivial(                                                                          \
            ML99_if,                                                                               \
            ML99_IS_NIL(xs),                                                                       \
            ML99_PRIV_constNil,                                                                    \
            ML99_PRIV_listInitProgress),                                                           \
        v(x, xs))
#define ML99_PRIV_listInitProgress_IMPL(x, xs) ML99_cons(v(x), ML99_listInit_IMPL(xs))
// }

// ML99_list_IMPL {
#define ML99_list_IMPL(...)                                                                        \
    ML99_PRIV_listProgress_IMPL(ML99_PRIV_VARIADICS_COUNT(__VA_ARGS__), __VA_ARGS__, ~)

// Last 4 recursion steps unrolled {
#define ML99_PRIV_listProgress_IMPL(count, ...)                                                    \
    ML99_IF(                                                                                       \
        ML99_NAT_EQ(count, 4),                                                                     \
        ML99_PRIV_listDone_4,                                                                      \
        ML99_IF(                                                                                   \
            ML99_NAT_EQ(count, 3),                                                                 \
            ML99_PRIV_listDone_3,                                                                  \
            ML99_IF(                                                                               \
                ML99_NAT_EQ(count, 2),                                                             \
                ML99_PRIV_listDone_2,                                                              \
                ML99_IF(                                                                           \
                    ML99_NAT_EQ(count, 1),                                                         \
                    ML99_PRIV_listDone_1,                                                          \
                    ML99_IF(                                                                       \
                        ML99_NAT_EQ(count, 0),                                                     \
                        ML99_PRIV_listDone_0,                                                      \
                        ML99_PRIV_listProgressAux)))))                                             \
    (count, __VA_ARGS__)
// }

#define ML99_PRIV_listProgressAux(count, x, ...)                                                   \
    ML99_cons(v(x), ML99_callTrivial(ML99_PRIV_listProgress, ML99_DEC(count), __VA_ARGS__))

#define ML99_PRIV_listDone_0(_count, _)       v(ML99_NIL())
#define ML99_PRIV_listDone_1(_count, a, _)    v(ML99_CONS(a, ML99_NIL()))
#define ML99_PRIV_listDone_2(_count, a, b, _) v(ML99_CONS(a, ML99_CONS(b, ML99_NIL())))
#define ML99_PRIV_listDone_3(_count, a, b, c, _)                                                   \
    v(ML99_CONS(a, ML99_CONS(b, ML99_CONS(c, ML99_NIL()))))
#define ML99_PRIV_listDone_4(_count, a, b, c, d, _)                                                \
    v(ML99_CONS(a, ML99_CONS(b, ML99_CONS(c, ML99_CONS(d, ML99_NIL())))))
// } (ML99_list_IMPL)

// ML99_listLen_IMPL {
#define ML99_listLen_IMPL(list)             ML99_match_IMPL(list, ML99_PRIV_listLen_)
#define ML99_PRIV_listLen_nil_IMPL(_)       v(0)
#define ML99_PRIV_listLen_cons_IMPL(_x, xs) ML99_inc(ML99_listLen_IMPL(xs))
// }

// ML99_listAppend_IMPL {
#define ML99_listAppend_IMPL(list, other)                                                          \
    ML99_matchWithArgs_IMPL(list, ML99_PRIV_listAppend_, other)
#define ML99_PRIV_listAppend_nil_IMPL(_, other) v(other)
#define ML99_PRIV_listAppend_cons_IMPL(x, xs, other)                                               \
    ML99_cons(v(x), ML99_listAppend_IMPL(xs, other))
// }

// ML99_listAppendItem_IMPL {
#define ML99_listAppendItem_IMPL(item, list) ML99_listAppend_IMPL(list, ML99_CONS(item, ML99_NIL()))
// }

// ML99_isCons_IMPL {
#define ML99_isCons_IMPL(list) v(ML99_IS_CONS(list))
// }

// ML99_isNil_IMPL {
#define ML99_isNil_IMPL(list) v(ML99_IS_NIL(list))
// }

// ML99_listUnwrap_IMPL {
#define ML99_listUnwrap_IMPL(list)            ML99_match_IMPL(list, ML99_PRIV_listUnwrap_)
#define ML99_PRIV_listUnwrap_nil_IMPL(_)      ML99_empty()
#define ML99_PRIV_listUnwrap_cons_IMPL(x, xs) ML99_terms(v(x), ML99_listUnwrap_IMPL(xs))
// }

// ML99_listReverse_IMPL {
#define ML99_listReverse_IMPL(list)            ML99_match_IMPL(list, ML99_PRIV_listReverse_)
#define ML99_PRIV_listReverse_nil_IMPL(_)      ML99_nil()
#define ML99_PRIV_listReverse_cons_IMPL(x, xs) ML99_listAppendItem(v(x), ML99_listReverse_IMPL(xs))
// }

// ML99_listGet_IMPL {
#define ML99_listGet_IMPL(i, list)       ML99_matchWithArgs_IMPL(list, ML99_PRIV_listGet_, i)
#define ML99_PRIV_listGet_nil_IMPL(_, i) ML99_PRIV_EMPTY_LIST_ERROR(ML99_get)
#define ML99_PRIV_listGet_cons_IMPL(x, xs, i)                                                      \
    ML99_IF(ML99_NAT_EQ(i, 0), ML99_PRIV_listGetDone, ML99_PRIV_listGetProgress)                   \
    (x, ML99_DEC(i), xs)
#define ML99_PRIV_listGetDone(x, _i, _xs)   v(x)
#define ML99_PRIV_listGetProgress(x, i, xs) ML99_listGet_IMPL(i, xs)
// }

// ML99_listFoldr_IMPL {
#define ML99_listFoldr_IMPL(f, init, list)                                                         \
    ML99_matchWithArgs_IMPL(list, ML99_PRIV_listFoldr_, f, init)
#define ML99_PRIV_listFoldr_nil_IMPL(_, _f, acc) v(acc)
#define ML99_PRIV_listFoldr_cons_IMPL(x, xs, f, acc)                                               \
    ML99_call(ML99_appl2, v(f, x), ML99_listFoldr_IMPL(f, acc, xs))
// }

// ML99_listFoldl_IMPL {
#define ML99_listFoldl_IMPL(f, init, list)                                                         \
    ML99_matchWithArgs_IMPL(list, ML99_PRIV_listFoldl_, f, init)
#define ML99_PRIV_listFoldl_nil_IMPL(_, _f, acc) v(acc)
#define ML99_PRIV_listFoldl_cons_IMPL(x, xs, f, acc)                                               \
    ML99_listFoldl(v(f), ML99_appl2_IMPL(f, acc, x), v(xs))
// }

// ML99_listFoldl1_IMPL {
#define ML99_listFoldl1_IMPL(f, list)            ML99_matchWithArgs_IMPL(list, ML99_PRIV_listFoldl1_, f)
#define ML99_PRIV_listFoldl1_nil_IMPL(_, _f)     ML99_PRIV_EMPTY_LIST_ERROR(ML99_listFoldl1)
#define ML99_PRIV_listFoldl1_cons_IMPL(x, xs, f) ML99_listFoldl_IMPL(f, x, xs)
// }

// ML99_listIntersperse_IMPL {
#define ML99_listIntersperse_IMPL(item, list)                                                      \
    ML99_matchWithArgs_IMPL(list, ML99_PRIV_listIntersperse_, item)
#define ML99_PRIV_listIntersperse_nil_IMPL(_, _item) ML99_nil()
#define ML99_PRIV_listIntersperse_cons_IMPL(x, xs, item)                                           \
    ML99_cons(v(x), ML99_listPrependToAll_IMPL(item, xs))
// }

// ML99_listPrependToAll_IMPL {
#define ML99_listPrependToAll_IMPL(item, list)                                                     \
    ML99_matchWithArgs_IMPL(list, ML99_PRIV_listPrependToAll_, item)
#define ML99_PRIV_listPrependToAll_nil_IMPL(_, _item) ML99_nil()
#define ML99_PRIV_listPrependToAll_cons_IMPL(x, xs, item)                                          \
    ML99_cons(v(item), ML99_cons(v(x), ML99_listPrependToAll_IMPL(item, xs)))
// }

// ML99_listMap_IMPL {
#define ML99_listMap_IMPL(f, list)        ML99_matchWithArgs_IMPL(list, ML99_PRIV_listMap_, f)
#define ML99_PRIV_listMap_nil_IMPL(_, _f) ML99_nil()
#define ML99_PRIV_listMap_cons_IMPL(x, xs, f)                                                      \
    ML99_cons(ML99_appl_IMPL(f, x), ML99_listMap_IMPL(f, xs))
// }

// ML99_listMapI_IMPL {
#define ML99_listMapI_IMPL(f, list) ML99_PRIV_listMapIAux_IMPL(f, list, 0)
#define ML99_PRIV_listMapIAux_IMPL(f, list, i)                                                     \
    ML99_matchWithArgs_IMPL(list, ML99_PRIV_listMapI_, f, i)
#define ML99_PRIV_listMapI_nil_IMPL(_, _f, _i) ML99_nil()
#define ML99_PRIV_listMapI_cons_IMPL(x, xs, f, i)                                                  \
    ML99_cons(ML99_appl2_IMPL(f, x, i), ML99_PRIV_listMapIAux_IMPL(f, xs, ML99_PRIV_INC(i)))
// }

// ML99_listMapInPlace_IMPL {
#define ML99_listMapInPlace_IMPL(f, list)                                                          \
    ML99_matchWithArgs_IMPL(list, ML99_PRIV_listMapInPlace_, f)
#define ML99_PRIV_listMapInPlace_nil_IMPL(_, _f) ML99_empty()
#define ML99_PRIV_listMapInPlace_cons_IMPL(x, xs, f)                                               \
    ML99_terms(ML99_appl_IMPL(f, x), ML99_listMapInPlace_IMPL(f, xs))
// }

// ML99_listMapInPlaceI_IMPL {
#define ML99_listMapInPlaceI_IMPL(f, list) ML99_PRIV_listMapInPlaceIAux_IMPL(f, list, 0)
#define ML99_PRIV_listMapInPlaceIAux_IMPL(f, list, i)                                              \
    ML99_matchWithArgs_IMPL(list, ML99_PRIV_listMapInPlaceI_, f, i)
#define ML99_PRIV_listMapInPlaceI_nil_IMPL(_, _f, _i) ML99_empty()
#define ML99_PRIV_listMapInPlaceI_cons_IMPL(x, xs, f, i)                                           \
    ML99_terms(ML99_appl2_IMPL(f, x, i), ML99_PRIV_listMapInPlaceIAux_IMPL(f, xs, ML99_PRIV_INC(i)))
// }

// ML99_listFor_IMPL {
#define ML99_listFor_IMPL(list, f) ML99_listMap_IMPL(f, list)
// }

// ML99_listMapInitLast_IMPL {
#define ML99_listMapInitLast_IMPL(f_init, f_last, list)                                            \
    ML99_listAppendItem(                                                                           \
        ML99_appl(v(f_last), ML99_listLast_IMPL(list)),                                            \
        ML99_listMap(v(f_init), ML99_listInit_IMPL(list)))
// }

// ML99_listForInitLast_IMPL {
#define ML99_listForInitLast_IMPL(list, f_init, f_last)                                            \
    ML99_listMapInitLast_IMPL(f_init, f_last, list)
// }

// ML99_listFilter_IMPL {
#define ML99_listFilter_IMPL(f, list)        ML99_matchWithArgs_IMPL(list, ML99_PRIV_listFilter_, f)
#define ML99_PRIV_listFilter_nil_IMPL(_, _f) ML99_nil()
#define ML99_PRIV_listFilter_cons_IMPL(x, xs, f)                                                   \
    ML99_call(                                                                                     \
        ML99_call(ML99_if, ML99_appl_IMPL(f, x), v(ML99_cons, ML99_PRIV_listFilterRest)),          \
        v(x),                                                                                      \
        ML99_listFilter_IMPL(f, xs))
#define ML99_PRIV_listFilterRest_IMPL(_x, rest) v(rest)
// }

// ML99_listEq_IMPL {
#define ML99_listEq_IMPL(compare, list, other)                                                     \
    ML99_matchWithArgs_IMPL(list, ML99_PRIV_listEq_, other, compare)

#define ML99_PRIV_listEq_nil_IMPL(_, other, _compare) v(ML99_IS_NIL(other))
#define ML99_PRIV_listEq_cons_IMPL(x, xs, other, compare)                                          \
    ML99_matchWithArgs_IMPL(other, ML99_PRIV_listEq_cons_, x, xs, compare)

#define ML99_PRIV_listEq_cons_nil_IMPL(_, _x, _xs, _compare) v(ML99_false)
#define ML99_PRIV_listEq_cons_cons_IMPL(other_x, other_xs, x, xs, compare)                         \
    ML99_call(                                                                                     \
        ML99_call(                                                                                 \
            ML99_if,                                                                               \
            ML99_appl2_IMPL(compare, x, other_x),                                                  \
            v(ML99_listEq, ML99_PRIV_constFalse)),                                                 \
        v(compare, xs, other_xs))
// }

// ML99_listContains_IMPL {
#define ML99_listContains_IMPL(compare, item, list)                                                \
    ML99_matchWithArgs_IMPL(list, ML99_PRIV_listContains_, item, compare)
#define ML99_PRIV_listContains_nil_IMPL(_, _item, _compare) v(ML99_false)
#define ML99_PRIV_listContains_cons_IMPL(x, xs, item, compare)                                     \
    ML99_call(                                                                                     \
        ML99_call(                                                                                 \
            ML99_if,                                                                               \
            ML99_appl2_IMPL(compare, x, item),                                                     \
            v(ML99_PRIV_constTrue, ML99_listContains)),                                            \
        v(compare, item, xs))
// }

// ML99_listTake_IMPL {
#define ML99_listTake_IMPL(n, list)        ML99_matchWithArgs_IMPL(list, ML99_PRIV_listTake_, n)
#define ML99_PRIV_listTake_nil_IMPL(_, _i) ML99_nil()
#define ML99_PRIV_listTake_cons_IMPL(x, xs, i)                                                     \
    ML99_IF(ML99_NAT_EQ(i, 0), ML99_PRIV_listTakeDone, ML99_PRIV_listTakeProgress)                 \
    (x, xs, i)
#define ML99_PRIV_listTakeDone(_x, _xs, _i)  ML99_nil()
#define ML99_PRIV_listTakeProgress(x, xs, i) ML99_cons(v(x), ML99_listTake_IMPL(ML99_DEC(i), xs))
// }

// ML99_listTakeWhile_IMPL {
#define ML99_listTakeWhile_IMPL(f, list)        ML99_matchWithArgs_IMPL(list, ML99_PRIV_listTakeWhile_, f)
#define ML99_PRIV_listTakeWhile_nil_IMPL(_, _f) ML99_nil()
#define ML99_PRIV_listTakeWhile_cons_IMPL(x, xs, f)                                                \
    ML99_call(                                                                                     \
        ML99_call(                                                                                 \
            ML99_if,                                                                               \
            ML99_appl_IMPL(f, x),                                                                  \
            v(ML99_PRIV_listTakeWhileProgress, ML99_PRIV_constNil)),                               \
        v(x, xs, f))
#define ML99_PRIV_listTakeWhileProgress_IMPL(x, xs, f)                                             \
    ML99_cons(v(x), ML99_listTakeWhile_IMPL(f, xs))
// }

// ML99_listDrop_IMPL {
#define ML99_listDrop_IMPL(n, list)        ML99_matchWithArgs_IMPL(list, ML99_PRIV_listDrop_, n)
#define ML99_PRIV_listDrop_nil_IMPL(_, _i) ML99_nil()
#define ML99_PRIV_listDrop_cons_IMPL(x, xs, i)                                                     \
    ML99_IF(ML99_NAT_EQ(i, 0), ML99_PRIV_listDropDone, ML99_PRIV_listDropProgress)                 \
    (x, xs, i)
#define ML99_PRIV_listDropDone(x, xs, _i)     ML99_call(ML99_cons, v(x, xs))
#define ML99_PRIV_listDropProgress(_x, xs, i) ML99_listDrop_IMPL(ML99_DEC(i), xs)
// }

// ML99_listDropWhile_IMPL {
#define ML99_listDropWhile_IMPL(f, list)        ML99_matchWithArgs_IMPL(list, ML99_PRIV_listDropWhile_, f)
#define ML99_PRIV_listDropWhile_nil_IMPL(_, _f) ML99_nil()
#define ML99_PRIV_listDropWhile_cons_IMPL(x, xs, f)                                                \
    ML99_call(                                                                                     \
        ML99_call(                                                                                 \
            ML99_if,                                                                               \
            ML99_appl_IMPL(f, x),                                                                  \
            v(ML99_PRIV_listDropWhileProgress, ML99_PRIV_listDropWhileDone)),                      \
        v(x, xs, f))
#define ML99_PRIV_listDropWhileDone_IMPL(x, xs, _f)     v(ML99_CONS(x, xs))
#define ML99_PRIV_listDropWhileProgress_IMPL(_x, xs, f) ML99_listDropWhile_IMPL(f, xs)
// }

// ML99_listZip_IMPL {
#define ML99_listZip_IMPL(list, other) ML99_matchWithArgs_IMPL(list, ML99_PRIV_listZip_, other)

#define ML99_PRIV_listZip_nil_IMPL(_, _other) ML99_nil()
#define ML99_PRIV_listZip_cons_IMPL(x, xs, other)                                                  \
    ML99_matchWithArgs_IMPL(other, ML99_PRIV_listZip_cons_, x, xs)

#define ML99_PRIV_listZip_cons_nil_IMPL(_, _x, _xs) ML99_nil()
#define ML99_PRIV_listZip_cons_cons_IMPL(other_x, other_xs, x, xs)                                 \
    ML99_cons(ML99_list_IMPL(x, other_x), ML99_listZip_IMPL(xs, other_xs))
// }

// ML99_listUnzip_IMPL {
#define ML99_listUnzip_IMPL(list) ML99_match_IMPL(list, ML99_PRIV_listUnzip_)

#define ML99_PRIV_listUnzip_nil_IMPL(_) ML99_list_IMPL(ML99_NIL(), ML99_NIL())
#define ML99_PRIV_listUnzip_cons_IMPL(x, xs)                                                       \
    ML99_call(ML99_PRIV_listUnzipProgress, v(x), ML99_listUnzip_IMPL(xs))
#define ML99_PRIV_listUnzipProgress_IMPL(x, rest)                                                  \
    ML99_list(ML99_PRIV_listUnzipAdd_IMPL(x, rest, 0), ML99_PRIV_listUnzipAdd_IMPL(x, rest, 1))
#define ML99_PRIV_listUnzipAdd_IMPL(x, rest, i)                                                    \
    ML99_cons(ML99_listGet_IMPL(i, x), ML99_listGet_IMPL(i, rest))
// }

// ML99_listReplicate_IMPL {
#define ML99_listReplicate_IMPL(n, item)                                                           \
    ML99_natMatchWithArgs_IMPL(n, ML99_PRIV_listReplicate_, item)
#define ML99_PRIV_listReplicate_Z_IMPL(item)    ML99_nil()
#define ML99_PRIV_listReplicate_S_IMPL(n, item) ML99_cons(v(item), ML99_listReplicate_IMPL(n, item))
// }

// ML99_listPartition_IMPL {
#define ML99_listPartition_IMPL(f, list)                                                           \
    ML99_listFoldr(                                                                                \
        ML99_appl_IMPL(ML99_PRIV_listPartitionAux, f),                                             \
        ML99_list_IMPL(ML99_NIL(), ML99_NIL()),                                                    \
        v(list))

#define ML99_PRIV_listPartitionAux_IMPL(f, x, acc)                                                 \
    ML99_call(                                                                                     \
        ML99_call(                                                                                 \
            ML99_if,                                                                               \
            ML99_appl_IMPL(f, x),                                                                  \
            v(ML99_PRIV_listPartitionAuxExtendFst, ML99_PRIV_listPartitionAuxExtendSnd)),          \
        v(x),                                                                                      \
        ML99_listGet_IMPL(0, acc),                                                                 \
        ML99_listGet_IMPL(1, acc))

#define ML99_PRIV_listPartitionAuxExtendFst_IMPL(x, fst, snd) ML99_list_IMPL(ML99_CONS(x, fst), snd)
#define ML99_PRIV_listPartitionAuxExtendSnd_IMPL(x, fst, snd) ML99_list_IMPL(fst, ML99_CONS(x, snd))
// }

// ML99_listAppl_IMPL {
#define ML99_listAppl_IMPL(f, list) ML99_listFoldl_IMPL(ML99_appl, f, list)
// }

// ML99_listUnwrapCommaSep {
#define ML99_listUnwrapCommaSep_IMPL(list)                                                         \
    ML99_IF(                                                                                       \
        ML99_IS_NIL(list),                                                                         \
        ML99_empty(),                                                                              \
        ML99_variadicsTail(ML99_PRIV_listUnwrapCommaSepAux_IMPL(list)))

#define ML99_PRIV_listUnwrapCommaSepAux_IMPL(xs)                                                   \
    ML99_match_IMPL(xs, ML99_PRIV_listUnwrapCommaSepAux_)
#define ML99_PRIV_listUnwrapCommaSepAux_nil_IMPL(_) ML99_empty()
#define ML99_PRIV_listUnwrapCommaSepAux_cons_IMPL(x, xs)                                           \
    ML99_terms(v(, x), ML99_PRIV_listUnwrapCommaSepAux_IMPL(xs))
// }

// clang-format off
#define ML99_PRIV_EMPTY_LIST_ERROR(f) ML99_fatal(ML99_##f, expected a non-empty list)
// clang-format on

#define ML99_PRIV_IS_NIL(list)  ML99_CAT(ML99_PRIV_IS_NIL_, ML99_CHOICE_TAG(list))()
#define ML99_PRIV_IS_NIL_nil()  ML99_true
#define ML99_PRIV_IS_NIL_cons() ML99_false

#define ML99_PRIV_IS_CONS(list) ML99_NOT(ML99_PRIV_IS_NIL(list))

#define ML99_PRIV_constNil_IMPL(...) ML99_nil()

// } (Implementation)

// Arity specifiers {
#define ML99_cons_ARITY               2
#define ML99_nil_ARITY                1
#define ML99_listHead_ARITY           1
#define ML99_listTail_ARITY           1
#define ML99_listLast_ARITY           1
#define ML99_listInit_ARITY           1
#define ML99_list_ARITY               1
#define ML99_listLen_ARITY            1
#define ML99_listAppend_ARITY         2
#define ML99_listAppendItem_ARITY     2
#define ML99_listUnwrap_ARITY         1
#define ML99_listUnwrapCommaSep_ARITY 1
#define ML99_listReverse_ARITY        1
#define ML99_isCons_ARITY             1
#define ML99_isNil_ARITY              1
#define ML99_listGet_ARITY            2
#define ML99_listFoldr_ARITY          3
#define ML99_listFoldl_ARITY          3
#define ML99_listFoldl1_ARITY         2
#define ML99_listIntersperse_ARITY    2
#define ML99_listPrependToAll_ARITY   2
#define ML99_listMap_ARITY            2
#define ML99_listMapI_ARITY           2
#define ML99_listMapInPlace_ARITY     2
#define ML99_listMapInPlaceI_ARITY    2
#define ML99_listFor_ARITY            2
#define ML99_listMapInitLast_ARITY    3
#define ML99_listForInitLast_ARITY    3
#define ML99_listFilter_ARITY         2
#define ML99_listEq_ARITY             3
#define ML99_listContains_ARITY       3
#define ML99_listTake_ARITY           2
#define ML99_listTakeWhile_ARITY      2
#define ML99_listDrop_ARITY           2
#define ML99_listDropWhile_ARITY      2
#define ML99_listZip_ARITY            2
#define ML99_listUnzip_ARITY          1
#define ML99_listReplicate_ARITY      2
#define ML99_listPartition_ARITY      2
#define ML99_listAppl_ARITY           2

#define ML99_PRIV_listInitProgress_ARITY      2
#define ML99_PRIV_listDone_ARITY              1
#define ML99_PRIV_listProgress_ARITY          2
#define ML99_PRIV_listMapIProvideIdx_ARITY    3
#define ML99_PRIV_listTakeProgress_ARITY      3
#define ML99_PRIV_listTakeWhileProgress_ARITY 3
#define ML99_PRIV_listDropProgress_ARITY      2
#define ML99_PRIV_listDropWhileProgress_ARITY 2
#define ML99_PRIV_listPartitionAux_ARITY      3
// }

#endif // DOXYGEN_IGNORE

#endif // ML99_LIST_H
