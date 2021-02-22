/**
 * @file
 * List manipulation.
 */

#ifndef METALANG99_LIST_H
#define METALANG99_LIST_H

#include <metalang99/choice.h>
#include <metalang99/control.h>
#include <metalang99/logical.h>
#include <metalang99/priv/variadics/count.h>
#include <metalang99/uint.h>
#include <metalang99/util.h>

// Desugaring {
/**
 * Prepends @p x to @p xs.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/list.h>
 *
 * M_cons(v(1), M_cons(v(2), M_nil()))
 * @endcode
 */
#define METALANG99_cons(x, xs) METALANG99_call(METALANG99_cons, x, xs)

/**
 * The empty list.
 */
#define METALANG99_nil() METALANG99_callTrivial(METALANG99_nil, )

/**
 * Extracts the head from the non-empty list @p list.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/list.h>
 *
 * // 1
 * M_listHead(M_list(v(1, 2, 3)))
 * @endcode
 */
#define METALANG99_listHead(list) METALANG99_call(METALANG99_listHead, list)

/**
 * Extracts the tail from the non-empty list @p list.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/list.h>
 *
 * // 2, 3
 * M_listTail(M_list(v(1, 2, 3)))
 *
 * // M_nil()
 * M_listTail(M_list(v(1)))
 * @endcode
 */
#define METALANG99_listTail(list) METALANG99_call(METALANG99_listTail, list)

/**
 * Extracts the last element from the non-empty list @p list.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/list.h>
 *
 * // 3
 * M_listLast(M_list(v(1, 2, 3)))
 * @endcode
 */
#define METALANG99_listLast(list) METALANG99_call(METALANG99_listLast, list)

/**
 * Extracts all the elements of the non-empty list @p list except the last one.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/list.h>
 *
 * // 1, 2
 * M_listInit(M_list(v(1, 2, 3)))
 *
 * // M_nil()
 * M_listInit(M_list(v(1)))
 * @endcode
 */
#define METALANG99_listInit(list) METALANG99_call(METALANG99_listInit, list)

/**
 * Constructs a list from its arguments.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/list.h>
 *
 * // 1, 2, 3
 * M_list(v(1, 2, 3))
 * @endcode
 *
 * @note At most 63 arguments are acceptable.
 */
#define METALANG99_list(...) METALANG99_call(METALANG99_list, __VA_ARGS__)

/**
 * Computes the length of @p list.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/list.h>
 *
 * // 0
 * M_listLen(M_nil())
 *
 * // 3
 * M_listLen(M_list(v(1, 2, 3)))
 * @endcode
 */
#define METALANG99_listLen(list) METALANG99_call(METALANG99_listLen, list)

/**
 * Evaluates a metaprogram that reduces to a list, then unwraps it.
 *
 * It behaves the same as the composition of <a href="#c.METALANG99_eval">METALANG99_EVAL</a> and
 * #METALANG99_listUnwrap.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/list.h>
 *
 * // Literally 1 2 3
 * M_listEval(M_list(v(1, 2, 3)))
 * @endcode
 *
 * @note This macro does not result in an Metalang99 term; it literally pastes list elements into a
 * source file.
 */
#define METALANG99_listEval(...)                                                                   \
    METALANG99_eval(METALANG99_call(METALANG99_listUnwrap, __VA_ARGS__))

/**
 * The same as #METALANG99_listEval but intersperses a comma between list items.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/util.h>
 *
 * // Literally 1, 2, 3
 * M_listEvalCommaSep(M_list(v(1, 2, 3)))
 * @endcode
 *
 * @note This macro does not result in an Metalang99 term; it literally pastes comma-separated list
 * elements into a source file.
 */
#define METALANG99_listEvalCommaSep(...)                                                           \
    METALANG99_eval(METALANG99_call(METALANG99_listUnwrapCommaSep, __VA_ARGS__))

/**
 * Appends the list @p other to @p list.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/list.h>
 *
 * // 1, 2, 3
 * M_listAppend(M_list(v(1)), M_list(v(2, 3)))
 * @endcode
 */
#define METALANG99_listAppend(list, other) METALANG99_call(METALANG99_listAppend, list, other)

/**
 * Appends the item @p item to @p list.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/list.h>
 *
 * // 1, 2, 3
 * M_listAppendItem(v(3), M_list(v(1, 2)))
 * @endcode
 */
#define METALANG99_listAppendItem(item, list) METALANG99_call(METALANG99_listAppendItem, item, list)

/**
 * Places all the items in @p list as-is.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/list.h>
 *
 * // 1 2 3
 * M_listUnwrap(M_list(v(1, 2, 3)))
 * @endcode
 *
 * @note The resulting value is still a valid Metalang99 term that need to be evaluated further.
 * @see #METALANG99_listEval
 * @see #METALANG99_listEvalCommaSep
 */
#define METALANG99_listUnwrap(list) METALANG99_call(METALANG99_listUnwrap, list)

/**
 * Places all the items in @p list as-is, separated by commas.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/list.h>
 *
 * // 1, 2, 3
 * M_listUnwrap(M_list(v(1, 2, 3)))
 * @endcode
 *
 * @note The resulting value is still a valid Metalang99 term that need to be evaluated further.
 * @see #METALANG99_listEval
 * @see #METALANG99_listEvalCommaSep
 */
#define METALANG99_listUnwrapCommaSep(list) METALANG99_call(METALANG99_listUnwrapCommaSep, list)

/**
 * Reverses the order of items in @p list.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/list.h>
 *
 * // 3, 2, 1
 * M_listReverse(M_list(v(1, 2, 3)))
 * @endcode
 */
#define METALANG99_listReverse(list) METALANG99_call(METALANG99_listReverse, list)

/**
 * Checks @p list for emptiness.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/list.h>
 *
 * // 0
 * M_isNil(M_list(v(1, 2, 3)))
 *
 * // 1
 * M_isNil(M_nil())
 * @endcode
 */
#define METALANG99_isNil(list) METALANG99_call(METALANG99_isNil, list)

/**
 * Checks @p list for non-emptiness.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/list.h>
 *
 * // 1
 * M_isCons(M_list(v(1, 2, 3)))
 *
 * // 0
 * M_isCons(M_nil())
 * @endcode
 */
#define METALANG99_isCons(list) METALANG99_call(METALANG99_isCons, list)

/**
 * Gets an @p i -indexed element.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/list.h>
 *
 * // 2
 * M_get(v(1), M_list(v(1, 2, 3)))
 * @endcode
 */
#define METALANG99_get(i, list) METALANG99_call(METALANG99_get, i, list)

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
 * M_listFoldr(v(M_cat), v(7), M_nil())
 *
 * // 123
 * M_listFoldr(M_appl(v(M_flip), v(M_cat)), v(A), M_list(v(G, DEF, BC)))
 * @endcode
 *
 * @note @p f must always return a single Metalang99 term.
 */
#define METALANG99_listFoldr(f, init, list) METALANG99_call(METALANG99_listFoldr, f, init, list)

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
 * M_listFoldl(v(M_cat), v(7), M_nil())
 *
 * // 123
 * M_listFoldl(v(M_cat), v(A), M_list(v(BC, DEF, G)))
 * @endcode
 *
 * @note @p f must always return a single Metalang99 term.
 */
#define METALANG99_listFoldl(f, init, list) METALANG99_call(METALANG99_listFoldl, f, init, list)

/**
 * The same as #METALANG99_listFoldl but treats the first element of @p list as the initial value.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/list.h>
 *
 * #define ABCDEFG 123
 *
 * // 123
 * M_listFoldl1(v(M_cat), M_list(v(AB, CDEF, G)))
 * @endcode
 *
 * @note @p f must always return a single Metalang99 term.
 */
#define METALANG99_listFoldl1(f, list) METALANG99_call(METALANG99_listFoldl1, f, list)

/**
 * Intersperses @p item between the items in @p list.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/list.h>
 *
 * // 1, +, 2, +, 3
 * M_listIntersperse(v(+), M_list(v(1, 2, 3)))
 * @endcode
 */
#define METALANG99_listIntersperse(item, list)                                                     \
    METALANG99_call(METALANG99_listIntersperse, item, list)

/**
 * Prepends @p item to all items in @p list.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/list.h>
 *
 * // +, 1, +, 2, +, 3
 * M_listPrependToAll(v(+), M_list(v(1, 2, 3)))
 * @endcode
 */
#define METALANG99_listPrependToAll(item, list)                                                    \
    METALANG99_call(METALANG99_listPrependToAll, item, list)

/**
 * Maps all the elements in @p list with @p f.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/list.h>
 * #include <metalang99/uint.h>
 *
 * // 4, 5, 6
 * M_listMap(M_appl(v(M_uintAdd), v(3)), M_list(v(1, 2, 3)))
 * @endcode
 *
 * @note @p f must always return a single Metalang99 term.
 */
#define METALANG99_listMap(f, list) METALANG99_call(METALANG99_listMap, f, list)

/**
 * The state-aware version of #METALANG99_listMap.
 */
#define METALANG99_listMapStateful(state, f, list)                                                 \
    METALANG99_call(METALANG99_listMapStateful, state, f, list)

/**
 * The same as #METALANG99_listMap but provides an index of an element to @p f.
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
 * M_listMapI(v(F), M_list(v(a, b, c)))
 * @endcode
 *
 * @note @p f must always return a single Metalang99 term.
 */
#define METALANG99_listMapI(f, list) METALANG99_call(METALANG99_listMapI, f, list)

/**
 * The same as #METALANG99_listMap but with the reversed order of arguments.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/list.h>
 * #include <metalang99/uint.h>
 *
 * // 4, 5, 6
 * M_listFor(M_list(v(1, 2, 3)), M_appl(v(M_uintAdd), v(3)))
 * @endcode
 *
 * @note @p f must always return a single Metalang99 term.
 */
#define METALANG99_listFor(list, f) METALANG99_call(METALANG99_listFor, list, f)

/**
 * Maps the initial elements of the non-empty list @p list with @p f_init and the last element with
 * @p f_last.
 *
 * # Examples
 *
 * @code
 * // 4, 5, 10
 * M_listMapInitLast(M_appl(v(M_uintAdd), v(3)), M_appl(v(M_uintAdd), v(7)), M_list(v(1, 2, 3)))
 * @endcode
 *
 * @note @p f must always return a single Metalang99 term.
 */
#define METALANG99_listMapInitLast(f_init, f_last, list)                                           \
    METALANG99_call(METALANG99_listMapInitLast, f_init, f_last, list)

/**
 * The same as #METALANG99_listMapInitLast but accepts @p list as the first parameter.
 *
 * # Examples
 *
 * @code
 * // 4, 5, 10
 * M_listForInitLast(M_list(v(1, 2, 3)), M_appl(v(M_uintAdd), v(3)), M_appl(v(M_uintAdd), v(7)))
 * @endcode
 *
 * @note @p f must always return a single Metalang99 term.
 */
#define METALANG99_listForInitLast(list, f_init, f_last)                                           \
    METALANG99_call(METALANG99_listForInitLast, list, f_init, f_last)

/**
 * Filters @p list with @p f.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/list.h>
 * #include <metalang99/uint.h>
 *
 * // 9, 11, 6
 * M_listFilter(M_appl(v(M_uintLesser), v(5)), M_list(v(9, 1, 11, 6, 0, 4)))
 * @endcode
 */
#define METALANG99_listFilter(f, list) METALANG99_call(METALANG99_listFilter, f, list)

/**
 * The state-aware version of #METALANG99_listFilter.
 */
#define METALANG99_listFilterStateful(state, f, list)                                              \
    METALANG99_call(METALANG99_listFilterStateful, state, f, list)

/**
 * Tests @p list and @p other for equality.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/list.h>
 * #include <metalang99/uint.h>
 *
 * // 0
 * M_listEq(v(M_uintEq), M_list(v(1, 2, 3)), M_list(v(4, 5, 6)))
 *
 * // 1
 * M_listEq(v(M_uintEq), M_list(v(1, 2, 3)), M_list(v(1, 2, 3)))
 * @endcode
 */
#define METALANG99_listEq(compare, list, other)                                                    \
    METALANG99_call(METALANG99_listEq, compare, list, other)

/**
 * Checks whether @p item resides in @p list.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/list.h>
 * #include <metalang99/uint.h>
 *
 * // 1
 * M_listContains(v(M_uintEq), v(3), M_list(v(1, 2, 3)))
 *
 * // 0
 * M_listContains(v(M_uintEq), v(456), M_list(v(1, 2, 3)))
 * @endcode
 */
#define METALANG99_listContains(compare, item, list)                                               \
    METALANG99_call(METALANG99_listContains, compare, item, list)

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
 * M_listTake(v(2), M_list(v(1, 2, 3)))
 * @endcode
 */
#define METALANG99_listTake(n, list) METALANG99_call(METALANG99_listTake, n, list)

/**
 * Extracts the items from @p list as long as @p f evaluates to true.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/list.h>
 * #include <metalang99/uint.h>
 *
 * // 1, 2, 3
 * M_listTakeWhile(M_appl(v(M_uintGreater), v(4)), M_list(v(1, 2, 3, 4, 5, 6)))
 * @endcode
 */
#define METALANG99_listTakeWhile(f, list) METALANG99_call(METALANG99_listTakeWhile, f, list)

/**
 * Removes the prefix of @p list of the length @p n. If @p n is greater than the length of @p list,
 * `METALANG99_nil()` is returned.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/list.h>
 *
 * // 2, 3
 * M_listDrop(v(1), M_list(v(1, 2, 3)))
 * @endcode
 */
#define METALANG99_listDrop(n, list) METALANG99_call(METALANG99_listDrop, n, list)

/**
 * Removes the items from @p list as long as @p f evaluates to true.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/list.h>
 * #include <metalang99/uint.h>
 *
 * // 4, 5, 6
 * M_listDropWhile(M_appl(v(M_uintLesser), v(4)), M_list(v(1, 2, 3, 4, 5, 6)))
 * @endcode
 */
#define METALANG99_listDropWhile(f, list) METALANG99_call(METALANG99_listDropWhile, f, list)

/**
 * Computes a list of corresponding pairs from @p list and @p other.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/list.h>
 *
 * // (1, 4), (2, 5), (3, 6)
 * E_zip(M_list(v(1, 2, 3)), M_list(v(4, 5, 6)))
 * @endcode
 */
#define METALANG99_listZip(list, other) METALANG99_call(METALANG99_listZip, list, other)

/**
 * Transforms a list of pairs into a list of the first components and a list of the second
 * components.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/list.h>
 *
 * // M_list(M_list(v(1, 2, 3)), M_list(v(4, 5, 6)))
 * M_listUnzip(M_list(M_list(v(1, 4)), M_list(v(2, 5)), M_list(v(3, 6))))
 * @endcode
 */
#define METALANG99_listUnzip(list) METALANG99_call(METALANG99_listUnzip, list)

/**
 * Computes a list of length @p n with each element @p item.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/list.h>
 *
 * // ~, ~, ~, ~, ~
 * M_listReplicate(v(5), v(~))
 *
 * // M_nil()
 * M_listReplicate(v(0), v(~))
 * @endcode
 */
#define METALANG99_listReplicate(n, item) METALANG99_call(METALANG99_listReplicate, n, item)

/**
 * Returns a pair of list: those items of @p list the do and do not satisfy the predicate @p f,
 * respectively.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/list.h>
 * #include <metalang99/uint.h>
 *
 * // M_list(M_list(v(4, 7)) M_list(v(11, 12, 13)))
 * M_listPartition(M_appl(v(M_uintGreater), v(10)), M_list(v(11, 4, 12, 13, 7)))
 * @endcode
 */
#define METALANG99_listPartition(f, list) METALANG99_call(METALANG99_listPartition, f, list)

/**
 * Applies all the items in @p list to @p f.
 *
 * If the list is empty, results in @p f as-is.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/list.h>
 * #include <metalang99/uint.h>
 *
 * // M_uintAdd
 * M_listAppl(v(M_uintAdd), M_nil())
 *
 * // M_appl(v(M_uintAdd), v(1))
 * M_listAppl(v(M_uintAdd), M_list(v(1)))
 *
 * // M_appl2(v(M_uintAdd), v(1), v(2))
 * M_listAppl(v(M_uintAdd), M_list(v(1, 2)))
 * @endcode
 */
#define METALANG99_listAppl(list, f) METALANG99_call(METALANG99_listAppl, list, f)

/**
 * The plain version of #METALANG99_isNil.
 *
 * @note @p list must be already evaluated.
 */
#define METALANG99_isNilPlain(list) METALANG99_PRIV_IS_NIL(list)

/**
 * The plain version of #METALANG99_isCons.
 *
 * @note @p list must be already evaluated.
 */
#define METALANG99_isConsPlain(list) METALANG99_PRIV_IS_CONS(list)
// }

#ifndef DOXYGEN_IGNORE

// Implementation {
#define METALANG99_cons_IMPL(x, xs) v(METALANG99_PRIV_cons(x, xs))
#define METALANG99_nil_IMPL()       v(METALANG99_PRIV_nil())

#define METALANG99_PRIV_cons(x, xs) METALANG99_PRIV_choice(cons, x, xs)
#define METALANG99_PRIV_nil()       METALANG99_PRIV_choiceEmpty(nil)

// METALANG99_listHead_IMPL {
#define METALANG99_listHead_IMPL(list)                                                             \
    METALANG99_callTrivial(METALANG99_match, list, METALANG99_PRIV_listHead_)
#define METALANG99_PRIV_listHead_nil_IMPL()        METALANG99_PRIV_EMPTY_LIST_ERROR(listHead)
#define METALANG99_PRIV_listHead_cons_IMPL(x, _xs) v(x)
// }

// METALANG99_listTail_IMPL {
#define METALANG99_listTail_IMPL(list)                                                             \
    METALANG99_callTrivial(METALANG99_match, list, METALANG99_PRIV_listTail_)
#define METALANG99_PRIV_listTail_nil_IMPL()        METALANG99_PRIV_EMPTY_LIST_ERROR(listTail)
#define METALANG99_PRIV_listTail_cons_IMPL(_x, xs) v(xs)
// }

// METALANG99_listLast_IMPL {
#define METALANG99_listLast_IMPL(list)                                                             \
    METALANG99_callTrivial(METALANG99_match, list, METALANG99_PRIV_listLast_)
#define METALANG99_PRIV_listLast_nil_IMPL() METALANG99_PRIV_EMPTY_LIST_ERROR(listLast)
#define METALANG99_PRIV_listLast_cons_IMPL(x, xs)                                                  \
    METALANG99_call(                                                                               \
        METALANG99_call(                                                                           \
            METALANG99_if,                                                                         \
            METALANG99_callTrivial(METALANG99_isNil, xs),                                          \
            v(METALANG99_PRIV_listLastDone, METALANG99_PRIV_listLastProgress)),                    \
        v(x, xs))
#define METALANG99_PRIV_listLastDone_IMPL(x, _xs) v(x)
#define METALANG99_PRIV_listLastProgress_IMPL(_x, xs)                                              \
    METALANG99_callTrivial(METALANG99_listLast, xs)
// }

// METALANG99_listInit_IMPL {
#define METALANG99_listInit_IMPL(list)                                                             \
    METALANG99_callTrivial(METALANG99_match, list, METALANG99_PRIV_listInit_)
#define METALANG99_PRIV_listInit_nil_IMPL() METALANG99_PRIV_EMPTY_LIST_ERROR(listInit)
#define METALANG99_PRIV_listInit_cons_IMPL(x, xs)                                                  \
    METALANG99_call(                                                                               \
        METALANG99_call(                                                                           \
            METALANG99_if,                                                                         \
            METALANG99_callTrivial(METALANG99_isNil, xs),                                          \
            v(METALANG99_PRIV_CONST_NIL, METALANG99_PRIV_listInitProgress)),                       \
        v(x, xs))
#define METALANG99_PRIV_listInitProgress_IMPL(x, xs)                                               \
    METALANG99_cons(v(x), METALANG99_callTrivial(METALANG99_listInit, xs))
// }

// METALANG99_list_IMPL {
#define METALANG99_list_IMPL(...)                                                                  \
    METALANG99_PRIV_listProgress_IMPL(METALANG99_PRIV_VARIADICS_COUNT(__VA_ARGS__), __VA_ARGS__, ~)

// Last 4 recursion steps unrolled {
#define METALANG99_PRIV_listProgress_IMPL(count, ...)                                              \
    METALANG99_PRIV_IF(                                                                            \
        METALANG99_PRIV_uintEq(count, 4),                                                          \
        METALANG99_PRIV_listDone_4,                                                                \
        METALANG99_PRIV_IF(                                                                        \
            METALANG99_PRIV_uintEq(count, 3),                                                      \
            METALANG99_PRIV_listDone_3,                                                            \
            METALANG99_PRIV_IF(                                                                    \
                METALANG99_PRIV_uintEq(count, 2),                                                  \
                METALANG99_PRIV_listDone_2,                                                        \
                METALANG99_PRIV_IF(                                                                \
                    METALANG99_PRIV_uintEq(count, 1),                                              \
                    METALANG99_PRIV_listDone_1,                                                    \
                    METALANG99_PRIV_IF(                                                            \
                        METALANG99_PRIV_uintEq(count, 0),                                          \
                        METALANG99_PRIV_listDone_0,                                                \
                        METALANG99_PRIV_listProgressAux)))))                                       \
    (count, __VA_ARGS__)
// }

#define METALANG99_PRIV_listProgressAux(count, x, ...)                                             \
    METALANG99_cons(                                                                               \
        v(x),                                                                                      \
        METALANG99_callTrivial(                                                                    \
            METALANG99_PRIV_listProgress,                                                          \
            METALANG99_PRIV_uintDec(count),                                                        \
            __VA_ARGS__))

#define METALANG99_PRIV_listDone_0(_count, _)    v(METALANG99_PRIV_nil())
#define METALANG99_PRIV_listDone_1(_count, a, _) v(METALANG99_PRIV_cons(a, METALANG99_PRIV_nil()))
#define METALANG99_PRIV_listDone_2(_count, a, b, _)                                                \
    v(METALANG99_PRIV_cons(a, METALANG99_PRIV_cons(b, METALANG99_PRIV_nil())))
#define METALANG99_PRIV_listDone_3(_count, a, b, c, _)                                             \
    v(METALANG99_PRIV_cons(                                                                        \
        a,                                                                                         \
        METALANG99_PRIV_cons(b, METALANG99_PRIV_cons(c, METALANG99_PRIV_nil()))))
#define METALANG99_PRIV_listDone_4(_count, a, b, c, d, _)                                          \
    v(METALANG99_PRIV_cons(                                                                        \
        a,                                                                                         \
        METALANG99_PRIV_cons(                                                                      \
            b,                                                                                     \
            METALANG99_PRIV_cons(c, METALANG99_PRIV_cons(d, METALANG99_PRIV_nil())))))
// } (METALANG99_list_IMPL)

// METALANG99_listLen_IMPL {
#define METALANG99_listLen_IMPL(list)                                                              \
    METALANG99_callTrivial(METALANG99_match, list, METALANG99_PRIV_listLen_)
#define METALANG99_PRIV_listLen_nil_IMPL() v(0)
#define METALANG99_PRIV_listLen_cons_IMPL(_x, xs)                                                  \
    METALANG99_uintInc(METALANG99_callTrivial(METALANG99_listLen, xs))
// }

// METALANG99_listAppend_IMPL {
#define METALANG99_listAppend_IMPL(list, other)                                                    \
    METALANG99_callTrivial(METALANG99_matchWithArgs, list, METALANG99_PRIV_listAppend_, other)
#define METALANG99_PRIV_listAppend_nil_IMPL(other) v(other)
#define METALANG99_PRIV_listAppend_cons_IMPL(x, xs, other)                                         \
    METALANG99_cons(v(x), METALANG99_callTrivial(METALANG99_listAppend, xs, other))
// }

// METALANG99_listAppendItem_IMPL {
#define METALANG99_listAppendItem_IMPL(item, list)                                                 \
    METALANG99_listAppend(v(list), METALANG99_callTrivial(M_list, item))
// }

// METALANG99_isNil_IMPL {
#define METALANG99_isNil_IMPL(list) v(METALANG99_isNilPlain(list))
// }

// METALANG99_isNil_IMPL {
#define METALANG99_isCons_IMPL(list) v(METALANG99_isConsPlain(list))
// }

// METALANG99_listUnwrap_IMPL {
#define METALANG99_listUnwrap_IMPL(list)                                                           \
    METALANG99_callTrivial(METALANG99_match, list, METALANG99_PRIV_listUnwrap_)
#define METALANG99_PRIV_listUnwrap_nil_IMPL() METALANG99_empty()
#define METALANG99_PRIV_listUnwrap_cons_IMPL(x, xs)                                                \
    METALANG99_terms(v(x), METALANG99_callTrivial(METALANG99_listUnwrap, xs))
// }

// METALANG99_listReverse_IMPL {
#define METALANG99_listReverse_IMPL(list)                                                          \
    METALANG99_callTrivial(METALANG99_match, list, METALANG99_PRIV_listReverse_)
#define METALANG99_PRIV_listReverse_nil_IMPL() METALANG99_nil()
#define METALANG99_PRIV_listReverse_cons_IMPL(x, xs)                                               \
    METALANG99_listAppendItem(v(x), METALANG99_callTrivial(METALANG99_listReverse, xs))
// }

// METALANG99_get_IMPL {
#define METALANG99_get_IMPL(i, list)                                                               \
    METALANG99_callTrivial(METALANG99_matchWithArgs, list, METALANG99_PRIV_get_, i)
#define METALANG99_PRIV_get_nil_IMPL(i) METALANG99_PRIV_EMPTY_LIST_ERROR(METALANG99_get)
#define METALANG99_PRIV_get_cons_IMPL(x, xs, i)                                                    \
    METALANG99_PRIV_IF(                                                                            \
        METALANG99_PRIV_uintEq(i, 0),                                                              \
        METALANG99_PRIV_getDone,                                                                   \
        METALANG99_PRIV_getProgress)                                                               \
    (x, METALANG99_PRIV_uintDec(i), xs)
#define METALANG99_PRIV_getDone(x, _i, _xs)   v(x)
#define METALANG99_PRIV_getProgress(x, i, xs) METALANG99_callTrivial(METALANG99_get, i, xs)
// }

// METALANG99_listFoldr_IMPL {
#define METALANG99_listFoldr_IMPL(f, init, list)                                                   \
    METALANG99_callTrivial(METALANG99_matchWithArgs, list, METALANG99_PRIV_listFoldr_, f, init)
#define METALANG99_PRIV_listFoldr_nil_IMPL(_f, acc) v(acc)
#define METALANG99_PRIV_listFoldr_cons_IMPL(x, xs, f, acc)                                         \
    METALANG99_call(                                                                               \
        METALANG99_appl2,                                                                          \
        v(f, x),                                                                                   \
        METALANG99_callTrivial(METALANG99_listFoldr, f, acc, xs))
// }

// METALANG99_listFoldl_IMPL {
#define METALANG99_listFoldl_IMPL(f, init, list)                                                   \
    METALANG99_callTrivial(METALANG99_matchWithArgs, list, METALANG99_PRIV_listFoldl_, f, init)
#define METALANG99_PRIV_listFoldl_nil_IMPL(_f, acc) v(acc)
#define METALANG99_PRIV_listFoldl_cons_IMPL(x, xs, f, acc)                                         \
    METALANG99_listFoldl(v(f), METALANG99_callTrivial(METALANG99_appl2, f, acc, x), v(xs))
// }

// METALANG99_listFoldl1_IMPL {
#define METALANG99_listFoldl1_IMPL(f, list)                                                        \
    METALANG99_callTrivial(METALANG99_matchWithArgs, list, METALANG99_PRIV_listFoldl1_, f)
#define METALANG99_PRIV_listFoldl1_nil_IMPL(_f)                                                    \
    METALANG99_PRIV_EMPTY_LIST_ERROR(METALANG99_listFoldl1)
#define METALANG99_PRIV_listFoldl1_cons_IMPL(x, xs, f)                                             \
    METALANG99_callTrivial(METALANG99_listFoldl, f, x, xs)
// }

// METALANG99_listIntersperse_IMPL {
#define METALANG99_listIntersperse_IMPL(item, list)                                                \
    METALANG99_callTrivial(METALANG99_matchWithArgs, list, METALANG99_PRIV_listIntersperse_, item)
#define METALANG99_PRIV_listIntersperse_nil_IMPL(_item) METALANG99_nil()
#define METALANG99_PRIV_listIntersperse_cons_IMPL(x, xs, item)                                     \
    METALANG99_cons(v(x), METALANG99_callTrivial(METALANG99_listPrependToAll, item, xs))
// }

// METALANG99_listPrependToAll_IMPL {
#define METALANG99_listPrependToAll_IMPL(item, list)                                               \
    METALANG99_callTrivial(METALANG99_matchWithArgs, list, METALANG99_PRIV_listPrependToAll_, item)
#define METALANG99_PRIV_listPrependToAll_nil_IMPL(_item) METALANG99_nil()
#define METALANG99_PRIV_listPrependToAll_cons_IMPL(x, xs, item)                                    \
    METALANG99_cons(                                                                               \
        v(item),                                                                                   \
        METALANG99_cons(v(x), METALANG99_callTrivial(METALANG99_listPrependToAll, item, xs)))
// }

// METALANG99_listMap_IMPL {
#define METALANG99_listMap_IMPL(f, list)                                                           \
    METALANG99_listMapStateful(v(~), METALANG99_callTrivial(METALANG99_stateless, f), v(list))
// }

// METALANG99_listMapStateful_IMPL {
#define METALANG99_listMapStateful_IMPL(state, f, list)                                            \
    METALANG99_callTrivial(                                                                        \
        METALANG99_matchWithArgs,                                                                  \
        list,                                                                                      \
        METALANG99_PRIV_listMapStateful_,                                                          \
        state,                                                                                     \
        f)
#define METALANG99_PRIV_listMapStateful_nil_IMPL(_state, _f) METALANG99_nil()
#define METALANG99_PRIV_listMapStateful_cons_IMPL(x, xs, state, f)                                 \
    METALANG99_call(                                                                               \
        METALANG99_PRIV_listMapStateful_consAux,                                                   \
        METALANG99_callTrivial(METALANG99_appl2, f, state, x),                                     \
        v(f, xs))
#define METALANG99_PRIV_listMapStateful_consAux_IMPL(new_state, result, f, xs)                     \
    METALANG99_cons(v(result), METALANG99_callTrivial(METALANG99_listMapStateful, new_state, f, xs))
// }

// METALANG99_listMapI_IMPL {
#define METALANG99_listMapI_IMPL(f, list)                                                          \
    METALANG99_listMapStateful(                                                                    \
        v(0),                                                                                      \
        METALANG99_callTrivial(METALANG99_appl, METALANG99_PRIV_listMapIProvideIdx, f),            \
        v(list))

#define METALANG99_PRIV_listMapIProvideIdx_IMPL(f, i, x)                                           \
    METALANG99_terms(                                                                              \
        v(METALANG99_PRIV_uintInc(i), ),                                                           \
        METALANG99_callTrivial(METALANG99_appl2, f, x, i))
// }

// METALANG99_listFor_IMPL {
#define METALANG99_listFor_IMPL(list, f) METALANG99_callTrivial(METALANG99_listMap, f, list)
// }

// METALANG99_listMapInitLast_IMPL {
#define METALANG99_listMapInitLast_IMPL(f_init, f_last, list)                                      \
    METALANG99_listAppendItem(                                                                     \
        METALANG99_appl(v(f_last), METALANG99_callTrivial(METALANG99_listLast, list)),             \
        METALANG99_listMap(v(f_init), METALANG99_callTrivial(METALANG99_listInit, list)))
// }

// METALANG99_listForInitLast_IMPL {
#define METALANG99_listForInitLast_IMPL(list, f_init, f_last)                                      \
    METALANG99_callTrivial(METALANG99_listMapInitLast, f_init, f_last, list)
// }

// METALANG99_listFilter_IMPL {
#define METALANG99_listFilter_IMPL(f, list)                                                        \
    METALANG99_call(                                                                               \
        METALANG99_listFilterStateful,                                                             \
        v(~),                                                                                      \
        METALANG99_callTrivial(METALANG99_stateless, f),                                           \
        v(list))
// }

// METALANG99_listFilterStateful_IMPL {
#define METALANG99_listFilterStateful_IMPL(state, f, list)                                         \
    METALANG99_callTrivial(                                                                        \
        METALANG99_matchWithArgs,                                                                  \
        list,                                                                                      \
        METALANG99_PRIV_listFilterStateful_,                                                       \
        state,                                                                                     \
        f)

#define METALANG99_PRIV_listFilterStateful_nil_IMPL(_state, _f) METALANG99_nil()
#define METALANG99_PRIV_listFilterStateful_cons_IMPL(x, xs, state, f)                              \
    METALANG99_call(                                                                               \
        METALANG99_PRIV_listFilterStateful_consAux,                                                \
        v(x, xs, f),                                                                               \
        METALANG99_callTrivial(METALANG99_appl2, f, state, x))

#define METALANG99_PRIV_listFilterStateful_consAux_IMPL(x, xs, f, new_state, result)               \
    METALANG99_call(                                                                               \
        METALANG99_ifPlain(result, METALANG99_cons, METALANG99_PRIV_listFilterStatefulRest),       \
        v(x),                                                                                      \
        METALANG99_callTrivial(METALANG99_listFilterStateful, new_state, f, xs))

#define METALANG99_PRIV_listFilterStatefulRest_IMPL(_x, rest) v(rest)
// }

// METALANG99_listEq_IMPL {
#define METALANG99_listEq_IMPL(compare, list, other)                                               \
    METALANG99_callTrivial(METALANG99_matchWithArgs, list, METALANG99_PRIV_listEq_, other, compare)

#define METALANG99_PRIV_listEq_nil_IMPL(other, _compare)                                           \
    METALANG99_callTrivial(METALANG99_isNil, other)
#define METALANG99_PRIV_listEq_cons_IMPL(x, xs, other, compare)                                    \
    METALANG99_callTrivial(                                                                        \
        METALANG99_matchWithArgs,                                                                  \
        other,                                                                                     \
        METALANG99_PRIV_listEq_cons_,                                                              \
        x,                                                                                         \
        xs,                                                                                        \
        compare)

#define METALANG99_PRIV_listEq_cons_nil_IMPL(_x, _xs, _compare) v(METALANG99_false)
#define METALANG99_PRIV_listEq_cons_cons_IMPL(other_x, other_xs, x, xs, compare)                   \
    METALANG99_call(                                                                               \
        METALANG99_call(                                                                           \
            METALANG99_if,                                                                         \
            METALANG99_callTrivial(METALANG99_appl2, compare, x, other_x),                         \
            v(METALANG99_listEq, METALANG99_PRIV_CONST_FALSE)),                                    \
        v(compare, xs, other_xs))
// }

// METALANG99_listContains_IMPL {
#define METALANG99_listContains_IMPL(compare, item, list)                                          \
    METALANG99_callTrivial(                                                                        \
        METALANG99_matchWithArgs,                                                                  \
        list,                                                                                      \
        METALANG99_PRIV_listContains_,                                                             \
        item,                                                                                      \
        compare)
#define METALANG99_PRIV_listContains_nil_IMPL(_item, _compare) v(METALANG99_false)
#define METALANG99_PRIV_listContains_cons_IMPL(x, xs, item, compare)                               \
    METALANG99_call(                                                                               \
        METALANG99_call(                                                                           \
            METALANG99_if,                                                                         \
            METALANG99_callTrivial(METALANG99_appl2, compare, x, item),                            \
            v(METALANG99_PRIV_CONST_TRUE, METALANG99_listContains)),                               \
        v(compare, item, xs))
// }

// METALANG99_listTake_IMPL {
#define METALANG99_listTake_IMPL(n, list)                                                          \
    METALANG99_callTrivial(METALANG99_matchWithArgs, list, METALANG99_PRIV_listTake_, n)
#define METALANG99_PRIV_listTake_nil_IMPL(_i) METALANG99_nil()
#define METALANG99_PRIV_listTake_cons_IMPL(x, xs, i)                                               \
    METALANG99_PRIV_IF(                                                                            \
        METALANG99_PRIV_uintEq(i, 0),                                                              \
        METALANG99_PRIV_listTakeDone,                                                              \
        METALANG99_PRIV_listTakeProgress)                                                          \
    (x, xs, i)
#define METALANG99_PRIV_listTakeDone(_x, _xs, _i) METALANG99_nil()
#define METALANG99_PRIV_listTakeProgress(x, xs, i)                                                 \
    METALANG99_cons(                                                                               \
        v(x),                                                                                      \
        METALANG99_callTrivial(METALANG99_listTake, METALANG99_PRIV_uintDec(i), xs))
// }

// METALANG99_listTakeWhile_IMPL {
#define METALANG99_listTakeWhile_IMPL(f, list)                                                     \
    METALANG99_callTrivial(METALANG99_matchWithArgs, list, METALANG99_PRIV_listTakeWhile_, f)
#define METALANG99_PRIV_listTakeWhile_nil_IMPL(_f) METALANG99_nil()
#define METALANG99_PRIV_listTakeWhile_cons_IMPL(x, xs, f)                                          \
    METALANG99_call(                                                                               \
        METALANG99_call(                                                                           \
            METALANG99_if,                                                                         \
            METALANG99_callTrivial(METALANG99_appl, f, x),                                         \
            v(METALANG99_PRIV_listTakeWhileProgress, METALANG99_PRIV_CONST_NIL)),                  \
        v(x, xs, f))
#define METALANG99_PRIV_listTakeWhileProgress_IMPL(x, xs, f)                                       \
    METALANG99_cons(v(x), METALANG99_callTrivial(METALANG99_listTakeWhile, f, xs))
// }

// METALANG99_listDrop_IMPL {
#define METALANG99_listDrop_IMPL(n, list)                                                          \
    METALANG99_callTrivial(METALANG99_matchWithArgs, list, METALANG99_PRIV_listDrop_, n)
#define METALANG99_PRIV_listDrop_nil_IMPL(_i) METALANG99_nil()
#define METALANG99_PRIV_listDrop_cons_IMPL(x, xs, i)                                               \
    METALANG99_PRIV_IF(                                                                            \
        METALANG99_PRIV_uintEq(i, 0),                                                              \
        METALANG99_PRIV_listDropDone,                                                              \
        METALANG99_PRIV_listDropProgress)                                                          \
    (x, xs, i)
#define METALANG99_PRIV_listDropDone(x, xs, _i) METALANG99_call(METALANG99_cons, v(x, xs))
#define METALANG99_PRIV_listDropProgress(_x, xs, i)                                                \
    METALANG99_callTrivial(METALANG99_listDrop, METALANG99_PRIV_uintDec(i), xs)
// }

// METALANG99_listDropWhile_IMPL {
#define METALANG99_listDropWhile_IMPL(f, list)                                                     \
    METALANG99_callTrivial(METALANG99_matchWithArgs, list, METALANG99_PRIV_listDropWhile_, f)
#define METALANG99_PRIV_listDropWhile_nil_IMPL(_f) METALANG99_nil()
#define METALANG99_PRIV_listDropWhile_cons_IMPL(x, xs, f)                                          \
    METALANG99_call(                                                                               \
        METALANG99_call(                                                                           \
            METALANG99_if,                                                                         \
            METALANG99_callTrivial(METALANG99_appl, f, x),                                         \
            v(METALANG99_PRIV_listDropWhileProgress, METALANG99_PRIV_listDropWhileDone)),          \
        v(x, xs, f))
#define METALANG99_PRIV_listDropWhileDone_IMPL(x, xs, _f)                                          \
    METALANG99_callTrivial(METALANG99_cons, x, xs)
#define METALANG99_PRIV_listDropWhileProgress_IMPL(_x, xs, f)                                      \
    METALANG99_callTrivial(METALANG99_listDropWhile, f, xs)
// }

// METALANG99_listZip_IMPL {
#define METALANG99_listZip_IMPL(list, other)                                                       \
    METALANG99_callTrivial(METALANG99_matchWithArgs, list, METALANG99_PRIV_listZip_, other)

#define METALANG99_PRIV_listZip_nil_IMPL(_other) METALANG99_nil()
#define METALANG99_PRIV_listZip_cons_IMPL(x, xs, other)                                            \
    METALANG99_callTrivial(METALANG99_matchWithArgs, other, METALANG99_PRIV_listZip_cons_, x, xs)

#define METALANG99_PRIV_listZip_cons_nil_IMPL(_x, _xs) METALANG99_nil()
#define METALANG99_PRIV_listZip_cons_cons_IMPL(other_x, other_xs, x, xs)                           \
    METALANG99_cons(                                                                               \
        METALANG99_callTrivial(METALANG99_list, x, other_x),                                       \
        METALANG99_callTrivial(METALANG99_listZip, xs, other_xs))
// }

// METALANG99_listUnzip_IMPL {
#define METALANG99_listUnzip_IMPL(list)                                                            \
    METALANG99_callTrivial(METALANG99_match, list, METALANG99_PRIV_listUnzip_)

#define METALANG99_PRIV_listUnzip_nil_IMPL() METALANG99_list(METALANG99_nil(), METALANG99_nil())
#define METALANG99_PRIV_listUnzip_cons_IMPL(x, xs)                                                 \
    METALANG99_call(                                                                               \
        METALANG99_PRIV_listUnzipProgress,                                                         \
        v(x),                                                                                      \
        METALANG99_callTrivial(METALANG99_listUnzip, xs))
#define METALANG99_PRIV_listUnzipProgress_IMPL(x, rest)                                            \
    METALANG99_list(                                                                               \
        METALANG99_callTrivial(METALANG99_PRIV_listUnzip_ADD, x, rest, 0),                         \
        METALANG99_callTrivial(METALANG99_PRIV_listUnzip_ADD, x, rest, 1))
#define METALANG99_PRIV_listUnzip_ADD_IMPL(x, rest, i)                                             \
    METALANG99_cons(                                                                               \
        METALANG99_callTrivial(METALANG99_get, i, x),                                              \
        METALANG99_callTrivial(METALANG99_get, i, rest))
// }

// METALANG99_listReplicate_IMPL {
#define METALANG99_listReplicate_IMPL(n, item)                                                     \
    METALANG99_callTrivial(METALANG99_uintMatchWithArgs, n, METALANG99_PRIV_listReplicate_, item)
#define METALANG99_PRIV_listReplicate_Z_IMPL(item) METALANG99_nil()
#define METALANG99_PRIV_listReplicate_S_IMPL(n, item)                                              \
    METALANG99_cons(v(item), METALANG99_callTrivial(METALANG99_listReplicate, n, item))
// }

// METALANG99_listPartition_IMPL {
#define METALANG99_listPartition_IMPL(f, list)                                                     \
    METALANG99_listFoldr(                                                                          \
        METALANG99_callTrivial(METALANG99_appl, METALANG99_PRIV_listPartitionAux, f),              \
        METALANG99_callTrivial(METALANG99_list, METALANG99_PRIV_nil(), METALANG99_PRIV_nil()),     \
        v(list))

#define METALANG99_PRIV_listPartitionAux_IMPL(f, x, acc)                                           \
    METALANG99_call(                                                                               \
        METALANG99_call(                                                                           \
            METALANG99_if,                                                                         \
            METALANG99_callTrivial(METALANG99_appl, f, x),                                         \
            v(METALANG99_PRIV_listPartitionAuxExtendFst,                                           \
              METALANG99_PRIV_listPartitionAuxExtendSnd)),                                         \
        v(x),                                                                                      \
        METALANG99_callTrivial(METALANG99_get, 0, acc),                                            \
        METALANG99_callTrivial(METALANG99_get, 1, acc))

#define METALANG99_PRIV_listPartitionAuxExtendFst_IMPL(x, fst, snd)                                \
    METALANG99_callTrivial(METALANG99_list, METALANG99_PRIV_cons(x, fst), snd)
#define METALANG99_PRIV_listPartitionAuxExtendSnd_IMPL(x, fst, snd)                                \
    METALANG99_callTrivial(METALANG99_list, fst, METALANG99_PRIV_cons(x, snd))
// }

// METALANG99_listAppl_IMPL {
#define METALANG99_listAppl_IMPL(f, list)                                                          \
    METALANG99_callTrivial(METALANG99_listFoldl, METALANG99_appl, f, list)
// }

// METALANG99_listUnwrapCommaSep {
#define METALANG99_listUnwrapCommaSep_IMPL(list)                                                   \
    METALANG99_callTrivial(METALANG99_match, list, METALANG99_PRIV_listUnwrapCommaSep_)
#define METALANG99_PRIV_listUnwrapCommaSep_nil_IMPL() METALANG99_empty()
#define METALANG99_PRIV_listUnwrapCommaSep_cons_IMPL(x, xs)                                        \
    METALANG99_terms(v(x), METALANG99_callTrivial(METALANG99_PRIV_listUnwrapCommaSepAux, xs))

#define METALANG99_PRIV_listUnwrapCommaSepAux_IMPL(xs)                                             \
    METALANG99_callTrivial(METALANG99_match, xs, METALANG99_PRIV_listUnwrapCommaSepAux_)
#define METALANG99_PRIV_listUnwrapCommaSepAux_nil_IMPL() METALANG99_empty()
#define METALANG99_PRIV_listUnwrapCommaSepAux_cons_IMPL(x, xs)                                     \
    METALANG99_terms(v(, x), METALANG99_callTrivial(METALANG99_PRIV_listUnwrapCommaSepAux, xs))
// }

// clang-format off
#define METALANG99_PRIV_EMPTY_LIST_ERROR(f) METALANG99_fatal(METALANG99_##f, expected a non-empty list)
// clang-format on

#define METALANG99_PRIV_IS_NIL(list)                                                               \
    METALANG99_catPlain(METALANG99_PRIV_IS_NIL_, METALANG99_choiceTagPlain(list))()
#define METALANG99_PRIV_IS_NIL_nil()  METALANG99_true
#define METALANG99_PRIV_IS_NIL_cons() METALANG99_false

#define METALANG99_PRIV_IS_CONS(list) METALANG99_notPlain(METALANG99_PRIV_IS_NIL(list))

#define METALANG99_PRIV_CONST_NIL_IMPL(...) METALANG99_nil()

// } (Implementation)

// Arity specifiers {
#define METALANG99_cons_ARITY               2
#define METALANG99_nil_ARITY                1
#define METALANG99_listHead_ARITY           1
#define METALANG99_listTail_ARITY           1
#define METALANG99_listLast_ARITY           1
#define METALANG99_listInit_ARITY           1
#define METALANG99_list_ARITY               1
#define METALANG99_listLen_ARITY            1
#define METALANG99_listAppend_ARITY         2
#define METALANG99_listAppendItem_ARITY     2
#define METALANG99_listUnwrap_ARITY         1
#define METALANG99_listUnwrapCommaSep_ARITY 1
#define METALANG99_listReverse_ARITY        1
#define METALANG99_isNil_ARITY              1
#define METALANG99_isCons_ARITY             1
#define METALANG99_get_ARITY                2
#define METALANG99_listFoldr_ARITY          3
#define METALANG99_listFoldl_ARITY          3
#define METALANG99_listFoldl1_ARITY         2
#define METALANG99_listIntersperse_ARITY    2
#define METALANG99_listPrependToAll_ARITY   2
#define METALANG99_listMap_ARITY            2
#define METALANG99_listMapStateful_ARITY    3
#define METALANG99_listMapI_ARITY           2
#define METALANG99_listFor_ARITY            2
#define METALANG99_listMapInitLast_ARITY    3
#define METALANG99_listForInitLast_ARITY    3
#define METALANG99_listFilter_ARITY         2
#define METALANG99_listFilterStateful_ARITY 3
#define METALANG99_listEq_ARITY             3
#define METALANG99_listContains_ARITY       3
#define METALANG99_listTake_ARITY           2
#define METALANG99_listTakeWhile_ARITY      2
#define METALANG99_listDrop_ARITY           2
#define METALANG99_listDropWhile_ARITY      2
#define METALANG99_listZip_ARITY            2
#define METALANG99_listUnzip_ARITY          1
#define METALANG99_listReplicate_ARITY      2
#define METALANG99_listPartition_ARITY      2
#define METALANG99_listAppl_ARITY           2

#define METALANG99_PRIV_listInitProgress_ARITY      2
#define METALANG99_PRIV_listDone_ARITY              1
#define METALANG99_PRIV_listProgress_ARITY          2
#define METALANG99_PRIV_listMapIProvideIdx_ARITY    3
#define METALANG99_PRIV_listTakeProgress_ARITY      3
#define METALANG99_PRIV_listTakeWhileProgress_ARITY 3
#define METALANG99_PRIV_listDropProgress_ARITY      2
#define METALANG99_PRIV_listDropWhileProgress_ARITY 2
#define METALANG99_PRIV_listPartitionAux_ARITY      3
// }

// Aliases {
#ifndef METALANG99_NO_SMALL_PREFIX

#define M_cons               METALANG99_cons
#define M_nil                METALANG99_nil
#define M_listHead           METALANG99_listHead
#define M_listTail           METALANG99_listTail
#define M_listLast           METALANG99_listLast
#define M_listInit           METALANG99_listInit
#define M_list               METALANG99_list
#define M_listLen            METALANG99_listLen
#define M_listEval           METALANG99_listEval
#define M_listEvalCommaSep   METALANG99_listEvalCommaSep
#define M_listAppend         METALANG99_listAppend
#define M_listAppendItem     METALANG99_listAppendItem
#define M_listUnwrap         METALANG99_listUnwrap
#define M_listUnwrapCommaSep METALANG99_listUnwrapCommaSep
#define M_listReverse        METALANG99_listReverse
#define M_isNil              METALANG99_isNil
#define M_isCons             METALANG99_isCons
#define M_get                METALANG99_get
#define M_listFoldr          METALANG99_listFoldr
#define M_listFoldl          METALANG99_listFoldl
#define M_listFoldl1         METALANG99_listFoldl1
#define M_listIntersperse    METALANG99_listIntersperse
#define M_listPrependToAll   METALANG99_listPrependToAll
#define M_listMap            METALANG99_listMap
#define M_listMapStateful    METALANG99_listMapStateful
#define M_listMapI           METALANG99_listMapI
#define M_listFor            METALANG99_listFor
#define M_listMapInitLast    METALANG99_listMapInitLast
#define M_listForInitLast    METALANG99_listForInitLast
#define M_listFilter         METALANG99_listFilter
#define M_listFilterStateful METALANG99_listFilterStateful
#define M_listEq             METALANG99_listEq
#define M_listContains       METALANG99_listContains
#define M_listTake           METALANG99_listTake
#define M_listTakeWhile      METALANG99_listTakeWhile
#define M_listDrop           METALANG99_listDrop
#define M_listDropWhile      METALANG99_listDropWhile
#define M_listZip            METALANG99_listZip
#define M_listUnzip          METALANG99_listUnzip
#define M_listReplicate      METALANG99_listReplicate
#define M_listPartition      METALANG99_listPartition
#define M_listAppl           METALANG99_listAppl

#define M_isNilPlain  METALANG99_isNilPlain
#define M_isConsPlain METALANG99_isConsPlain

#endif // METALANG99_NO_SMALL_PREFIX
// }

#endif // DOXYGEN_IGNORE

#endif // METALANG99_LIST_H
