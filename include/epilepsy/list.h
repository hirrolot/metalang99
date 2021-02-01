/**
 * @file
 * List manipulation.
 */

#ifndef EPILEPSY_LIST_H
#define EPILEPSY_LIST_H

#include <epilepsy/aux.h>
#include <epilepsy/choice.h>
#include <epilepsy/control.h>
#include <epilepsy/logical.h>
#include <epilepsy/priv/pair.h>
#include <epilepsy/uint.h>
#include <epilepsy/variadics.h>

// Desugaring {
/**
 * Prepends @p x to @p xs.
 *
 * # Examples
 *
 * @code
 * #include <epilepsy/list.h>
 *
 * E_cons(v(1), E_cons(v(2), E_nil()))
 * @endcode
 */
#define EPILEPSY_cons(x, xs) EPILEPSY_call(EPILEPSY_cons, x xs)

/**
 * The empty list.
 */
#define EPILEPSY_nil() EPILEPSY_call(EPILEPSY_nil, )

/**
 * Extracts the head from the non-empty list @p list.
 *
 * # Examples
 *
 * @code
 * #include <epilepsy/list.h>
 *
 * // 1
 * E_listHead(E_list(v(1, 2, 3)))
 * @endcode
 */
#define EPILEPSY_listHead(list) EPILEPSY_call(EPILEPSY_listHead, list)

/**
 * Extracts the tail from the non-empty list @p list.
 *
 * # Examples
 *
 * @code
 * #include <epilepsy/list.h>
 *
 * // 2, 3
 * E_listTail(E_list(v(1, 2, 3)))
 *
 * // E_nil()
 * E_listTail(E_list(v(1)))
 * @endcode
 */
#define EPILEPSY_listTail(list) EPILEPSY_call(EPILEPSY_listTail, list)

/**
 * Extracts the last element from the non-empty list @p list.
 *
 * # Examples
 *
 * @code
 * #include <epilepsy/list.h>
 *
 * // 3
 * E_listLast(E_list(v(1, 2, 3)))
 * @endcode
 */
#define EPILEPSY_listLast(list) EPILEPSY_call(EPILEPSY_listLast, list)

/**
 * Extracts all the elements of the non-empty list @p list except the last one.
 *
 * # Examples
 *
 * @code
 * #include <epilepsy/list.h>
 *
 * // 1, 2
 * E_listInit(E_list(v(1, 2, 3)))
 *
 * // E_nil()
 * E_listInit(E_list(v(1)))
 * @endcode
 */
#define EPILEPSY_listInit(list) EPILEPSY_call(EPILEPSY_listInit, list)

/**
 * Constructs a list from its arguments.
 *
 * # Examples
 *
 * @code
 * #include <epilepsy/list.h>
 *
 * // 1, 2, 3
 * E_list(v(1, 2, 3))
 * @endcode
 */
#define EPILEPSY_list(...) EPILEPSY_call(EPILEPSY_list, __VA_ARGS__)

/**
 * Computes the length of @p list.
 *
 * # Examples
 *
 * @code
 * #include <epilepsy/list.h>
 *
 * // 0
 * E_listLen(E_nil())
 *
 * // 3
 * E_listLen(E_list(v(1, 2, 3)))
 * @endcode
 */
#define EPILEPSY_listLen(list) EPILEPSY_call(EPILEPSY_listLen, list)

/**
 * Evaluates a metaprogram that reduces to a list, then unwraps it.
 *
 * It behaves the same as the composition of <a href="#c.EPILEPSY_eval">EPILEPSY_EVAL</a> and
 * #EPILEPSY_listUnwrap.
 *
 * # Examples
 *
 * @code
 * #include <epilepsy/list.h>
 *
 * // Literally 1 2 3
 * E_listEval(E_list(v(1, 2, 3)))
 * @endcode
 *
 * @note This macro does not result in an Epilepsy term; it literally pastes list elements into a
 * source file.
 */
#define EPILEPSY_listEval(...) EPILEPSY_eval(EPILEPSY_call(EPILEPSY_listUnwrap, __VA_ARGS__))

/**
 * The same as #EPILEPSY_listEval but intersperses a comma between list items.
 *
 * # Examples
 *
 * @code
 * #include <epilepsy/aux.h>
 *
 * // Literally 1, 2, 3
 * E_listEvalCommaSep(E_list(v(1, 2, 3)))
 * @endcode
 *
 * @note This macro does not result in an Epilepsy term; it literally pastes comma-separated list
 * elements into a source file.
 */
#define EPILEPSY_listEvalCommaSep(...)                                                             \
    EPILEPSY_eval(EPILEPSY_call(EPILEPSY_listUnwrapCommaSep, __VA_ARGS__))

/**
 * Appends the list @p other to @p list.
 *
 * # Examples
 *
 * @code
 * #include <epilepsy/list.h>
 *
 * // 1, 2, 3
 * E_listAppend(E_list(v(1)), E_list(v(2, 3)))
 * @endcode
 */
#define EPILEPSY_listAppend(list, other) EPILEPSY_call(EPILEPSY_listAppend, list other)

/**
 * Appends the item @p item to @p list.
 *
 * # Examples
 *
 * @code
 * #include <epilepsy/list.h>
 *
 * // 1, 2, 3
 * E_listAppendItem(v(3), E_list(v(1, 2)))
 * @endcode
 */
#define EPILEPSY_listAppendItem(item, list) EPILEPSY_call(EPILEPSY_listAppendItem, item list)

/**
 * Places all the items in @p list as-is.
 *
 * # Examples
 *
 * @code
 * #include <epilepsy/list.h>
 *
 * // 1 2 3
 * E_listUnwrap(E_list(v(1, 2, 3)))
 * @endcode
 *
 * @note The resulting value is still a valid Epilepsy term that need to be evaluated further.
 * @see #EPILEPSY_listEval
 * @see #EPILEPSY_listEvalCommaSep
 */
#define EPILEPSY_listUnwrap(list) EPILEPSY_call(EPILEPSY_listUnwrap, list)

/**
 * Places all the items in @p list as-is, separated by commas.
 *
 * # Examples
 *
 * @code
 * #include <epilepsy/list.h>
 *
 * // 1, 2, 3
 * E_listUnwrap(E_list(v(1, 2, 3)))
 * @endcode
 *
 * @note The resulting value is still a valid Epilepsy term that need to be evaluated further.
 * @see #EPILEPSY_listEval
 * @see #EPILEPSY_listEvalCommaSep
 */
#define EPILEPSY_listUnwrapCommaSep(list) EPILEPSY_call(EPILEPSY_listUnwrapCommaSep, list)

/**
 * Reverses the order of items in @p list.
 *
 * # Examples
 *
 * @code
 * #include <epilepsy/list.h>
 *
 * // 3, 2, 1
 * E_listReverse(E_list(v(1, 2, 3)))
 * @endcode
 */
#define EPILEPSY_listReverse(list) EPILEPSY_call(EPILEPSY_listReverse, list)

/**
 * Checks @p list for emptiness.
 *
 * # Examples
 *
 * @code
 * #include <epilepsy/list.h>
 *
 * // 0
 * E_isNil(E_list(v(1, 2, 3)))
 *
 * // 1
 * E_isNil(E_nil())
 * @endcode
 */
#define EPILEPSY_isNil(list) EPILEPSY_call(EPILEPSY_isNil, list)

/**
 * Gets an @p i -indexed element.
 *
 * # Examples
 *
 * @code
 * #include <epilepsy/list.h>
 *
 * // 2
 * E_get(v(1), E_list(v(1, 2, 3)))
 * @endcode
 */
#define EPILEPSY_get(i, list) EPILEPSY_call(EPILEPSY_get, i list)

/**
 * Performs a right-associative fold over @p list.
 *
 * # Examples
 *
 * @code
 * #include <epilepsy/list.h>
 *
 * #define ABCDEFG 123
 *
 * // 7
 * E_listFoldr(v(E_cat), v(7), E_nil())
 *
 * // 123
 * E_listFoldr(E_appl(v(E_flip), v(E_cat)), v(A), E_list(v(G, DEF, BC)))
 * @endcode
 */
#define EPILEPSY_listFoldr(f, init, list) EPILEPSY_call(EPILEPSY_listFoldr, f init list)

/**
 * Performs a left-associative fold over @p list.
 *
 * # Examples
 *
 * @code
 * #include <epilepsy/list.h>
 *
 * #define ABCDEFG 123
 *
 * // 7
 * E_listFoldl(v(E_cat), v(7), E_nil())
 *
 * // 123
 * E_listFoldl(v(E_cat), v(A), E_list(v(BC, DEF, G)))
 * @endcode
 */
#define EPILEPSY_listFoldl(f, init, list) EPILEPSY_call(EPILEPSY_listFoldl, f init list)

/**
 * The same as #EPILEPSY_listFoldl but treats the first element of @p list as the initial value.
 *
 * # Examples
 *
 * @code
 * #include <epilepsy/list.h>
 *
 * #define ABCDEFG 123
 *
 * // 123
 * E_listFoldl1(v(E_cat), E_list(v(AB, CDEF, G)))
 * @endcode
 */
#define EPILEPSY_listFoldl1(f, list) EPILEPSY_call(EPILEPSY_listFoldl1, f list)

/**
 * Intersperses @p item between the items in @p list.
 *
 * # Examples
 *
 * @code
 * #include <epilepsy/list.h>
 *
 * // 1, +, 2, +, 3
 * E_listIntersperse(v(+), E_list(v(1, 2, 3)))
 * @endcode
 */
#define EPILEPSY_listIntersperse(item, list) EPILEPSY_call(EPILEPSY_listIntersperse, item list)

/**
 * Prepends @p item to all items in @p list.
 *
 * # Examples
 *
 * @code
 * #include <epilepsy/list.h>
 *
 * // +, 1, +, 2, +, 3
 * E_listPrependToAll(v(+), E_list(v(1, 2, 3)))
 * @endcode
 */
#define EPILEPSY_listPrependToAll(item, list) EPILEPSY_call(EPILEPSY_listPrependToAll, item list)

/**
 * Maps all the elements in @p list with @p f.
 *
 * # Examples
 *
 * @code
 * #include <epilepsy/list.h>
 * #include <epilepsy/uint.h>
 *
 * // 4, 5, 6
 * E_listMap(E_appl(v(E_uintAdd), v(3)), E_list(v(1, 2, 3)))
 * @endcode
 */
#define EPILEPSY_listMap(f, list) EPILEPSY_call(EPILEPSY_listMap, f list)

/**
 * The same as #EPILEPSY_listMap but provides an index of an element to @p f.
 *
 * # Examples
 *
 * @code
 * #include <epilepsy/list.h>
 *
 * #define F_IMPL(x, i) v(x[i])
 * #define F_ARITY      2
 *
 * // a[0], b[1], c[2]
 * E_listMapI(v(F), E_list(v(a, b, c)))
 * @endcode
 */
#define EPILEPSY_listMapI(f, list) EPILEPSY_call(EPILEPSY_listMapI, f list)

/**
 * The same as #EPILEPSY_listMap but with the reversed order of arguments.
 *
 * # Examples
 *
 * @code
 * #include <epilepsy/list.h>
 * #include <epilepsy/uint.h>
 *
 * // 4, 5, 6
 * E_listFor(E_list(v(1, 2, 3)), E_appl(v(E_uintAdd), v(3)))
 * @endcode
 */
#define EPILEPSY_listFor(list, f) EPILEPSY_call(EPILEPSY_listFor, list f)

/**
 * Maps the initial elements of the non-empty list @p list with @p f_init and the last element with
 * @p f_last.
 *
 * # Examples
 *
 * @code
 * // 4, 5, 10
 * E_listMapInitLast(E_appl(v(E_uintAdd), v(3)), E_appl(v(E_uintAdd), v(7)), E_list(v(1, 2, 3)))
 * @endcode
 */
#define EPILEPSY_listMapInitLast(f_init, f_last, list)                                             \
    EPILEPSY_call(EPILEPSY_listMapInitLast, f_init f_last list)

/**
 * The same as #EPILEPSY_listMapInitLast but accepts @p list as the first parameter.
 *
 * # Examples
 *
 * @code
 * // 4, 5, 10
 * E_listForInitLast(E_list(v(1, 2, 3)), E_appl(v(E_uintAdd), v(3)), E_appl(v(E_uintAdd), v(7)))
 * @endcode
 */
#define EPILEPSY_listForInitLast(list, f_init, f_last)                                             \
    EPILEPSY_call(EPILEPSY_listForInitLast, list f_init f_last)

/**
 * Filters @p list with @p f.
 *
 * # Examples
 *
 * @code
 * #include <epilepsy/list.h>
 * #include <epilepsy/uint.h>
 *
 * // 9, 11, 6
 * E_listFilter(E_appl(v(E_uintLesser), v(5)), E_list(v(9, 1, 11, 6, 0, 4)))
 * @endcode
 */
#define EPILEPSY_listFilter(f, list) EPILEPSY_call(EPILEPSY_listFilter, f list)

/**
 * Tests @p list and @p other for equality.
 *
 * # Examples
 *
 * @code
 * #include <epilepsy/list.h>
 * #include <epilepsy/uint.h>
 *
 * // 0
 * E_listEq(v(E_uintEq), E_list(v(1, 2, 3)), E_list(v(4, 5, 6)))
 *
 * // 1
 * E_listEq(v(E_uintEq), E_list(v(1, 2, 3)), E_list(v(1, 2, 3)))
 * @endcode
 */
#define EPILEPSY_listEq(compare, list, other) EPILEPSY_call(EPILEPSY_listEq, compare list other)

/**
 * Checks whether @p item resides in @p list.
 *
 * # Examples
 *
 * @code
 * #include <epilepsy/list.h>
 * #include <epilepsy/uint.h>
 *
 * // 1
 * E_listContains(v(E_uintEq), v(3), E_list(v(1, 2, 3)))
 *
 * // 0
 * E_listContains(v(E_uintEq), v(456), E_list(v(1, 2, 3)))
 * @endcode
 */
#define EPILEPSY_listContains(compare, item, list)                                                 \
    EPILEPSY_call(EPILEPSY_listContains, compare item list)

/**
 * Extracts the prefix of @p list of the length @p n. If @p n is greater than the length of @p list,
 * the whole @p list is returned.
 *
 * # Examples
 *
 * @code
 * #include <epilepsy/list.h>
 *
 * // 1, 2
 * E_listTake(v(2), E_list(v(1, 2, 3)))
 * @endcode
 */
#define EPILEPSY_listTake(n, list) EPILEPSY_call(EPILEPSY_listTake, n list)

/**
 * Extracts the items from @p list as long as @p f evaluates to true.
 *
 * # Examples
 *
 * @code
 * #include <epilepsy/list.h>
 * #include <epilepsy/uint.h>
 *
 * // 1, 2, 3
 * E_listTakeWhile(E_appl(v(E_uintGreater), v(4)), E_list(v(1, 2, 3, 4, 5, 6)))
 * @endcode
 */
#define EPILEPSY_listTakeWhile(f, list) EPILEPSY_call(EPILEPSY_listTakeWhile, f list)

/**
 * Removes the prefix of @p list of the length @p n. If @p n is greater than the length of @p list,
 * `EPILEPSY_nil()` is returned.
 *
 * # Examples
 *
 * @code
 * #include <epilepsy/list.h>
 *
 * // 2, 3
 * E_listDrop(v(1), E_list(v(1, 2, 3)))
 * @endcode
 */
#define EPILEPSY_listDrop(n, list) EPILEPSY_call(EPILEPSY_listDrop, n list)

/**
 * Removes the items from @p list as long as @p f evaluates to true.
 *
 * # Examples
 *
 * @code
 * #include <epilepsy/list.h>
 * #include <epilepsy/uint.h>
 *
 * // 4, 5, 6
 * E_listDropWhile(E_appl(v(E_uintLesser), v(4)), E_list(v(1, 2, 3, 4, 5, 6)))
 * @endcode
 */
#define EPILEPSY_listDropWhile(f, list) EPILEPSY_call(EPILEPSY_listDropWhile, f list)

/**
 * Computes a list of corresponding pairs from @p list and @p other.
 *
 * # Examples
 *
 * @code
 * #include <epilepsy/list.h>
 *
 * // (1, 4), (2, 5), (3, 6)
 * E_zip(E_list(v(1, 2, 3)), E_list(v(4, 5, 6)))
 * @endcode
 */
#define EPILEPSY_listZip(list, other) EPILEPSY_call(EPILEPSY_listZip, list other)

/**
 * Transforms a list of pairs into a list of the first components and a list of the second
 * components.
 *
 * # Examples
 *
 * @code
 * #include <epilepsy/list.h>
 *
 * // E_list(E_list(v(1, 2, 3)), E_list(v(4, 5, 6)))
 * E_listUnzip(E_list(E_list(v(1, 4)) E_list(v(2, 5)) E_list(v(3, 6))))
 * @endcode
 */
#define EPILEPSY_listUnzip(list) EPILEPSY_call(EPILEPSY_listUnzip, list)

/**
 * Computes a list of length @p n with each element @p item.
 *
 * # Examples
 *
 * @code
 * #include <epilepsy/list.h>
 *
 * // ~, ~, ~, ~, ~
 * E_listReplicate(v(5), v(~))
 *
 * // E_nil()
 * E_listReplicate(v(0), v(~))
 * @endcode
 */
#define EPILEPSY_listReplicate(n, item) EPILEPSY_call(EPILEPSY_listReplicate, n item)

/**
 * Applies all the items in @p list to @p f.
 *
 * If the list is empty, results in @p f as-is.
 *
 * # Examples
 *
 * @code
 * #include <epilepsy/list.h>
 * #include <epilepsy/uint.h>
 *
 * // E_uintAdd
 * E_listAppl(v(E_uintAdd), E_nil())
 *
 * // E_appl(v(E_uintAdd), v(1))
 * E_listAppl(v(E_uintAdd), E_list(v(1)))
 *
 * // E_appl2(v(E_uintAdd), v(1), v(2))
 * E_listAppl(v(E_uintAdd), E_list(v(1, 2)))
 * @endcode
 */
#define EPILEPSY_listAppl(list, f) EPILEPSY_call(EPILEPSY_listAppl, list f)
// }

#ifndef DOXYGEN_IGNORE

// Implementation {
#define EPILEPSY_cons_IMPL(x, xs) EPILEPSY_call(EPILEPSY_choice, v(cons, x, xs))
#define EPILEPSY_nil_IMPL()       EPILEPSY_choiceEmpty(v(nil))

#define EPILEPSY_listHead_IMPL(list)            EPILEPSY_call(EPILEPSY_match, v(list, EPILEPSY_PRIV_listHead_))
#define EPILEPSY_PRIV_listHead_nil_IMPL()       EPILEPSY_PRIV_EMPTY_LIST_ERROR(listHead)
#define EPILEPSY_PRIV_listHead_cons_IMPL(x, xs) v(x)

#define EPILEPSY_listTail_IMPL(list)             EPILEPSY_call(EPILEPSY_match, v(list, EPILEPSY_PRIV_listTail_))
#define EPILEPSY_PRIV_listTail_nil_IMPL()        EPILEPSY_PRIV_EMPTY_LIST_ERROR(listTail)
#define EPILEPSY_PRIV_listTail_cons_IMPL(_x, xs) v(xs)

// EPILEPSY_listLast_IMPL {
#define EPILEPSY_listLast_IMPL(list)      EPILEPSY_call(EPILEPSY_match, v(list, EPILEPSY_PRIV_listLast_))
#define EPILEPSY_PRIV_listLast_nil_IMPL() EPILEPSY_PRIV_EMPTY_LIST_ERROR(listLast)
#define EPILEPSY_PRIV_listLast_cons_IMPL(x, xs)                                                    \
    EPILEPSY_call(                                                                                 \
        EPILEPSY_call(                                                                             \
            EPILEPSY_if,                                                                           \
            EPILEPSY_isNil(v(xs))                                                                  \
                v(EPILEPSY_PRIV_listLast_DONE, EPILEPSY_PRIV_listLast_PROGRESS)),                  \
        v(x, xs))
#define EPILEPSY_PRIV_listLast_DONE_IMPL(x, _xs)     v(x)
#define EPILEPSY_PRIV_listLast_PROGRESS_IMPL(_x, xs) EPILEPSY_listLast(v(xs))
// }

// EPILEPSY_listInit_IMPL {
#define EPILEPSY_listInit_IMPL(list)      EPILEPSY_call(EPILEPSY_match, v(list, EPILEPSY_PRIV_listInit_))
#define EPILEPSY_PRIV_listInit_nil_IMPL() EPILEPSY_PRIV_EMPTY_LIST_ERROR(listInit)
#define EPILEPSY_PRIV_listInit_cons_IMPL(x, xs)                                                    \
    EPILEPSY_call(                                                                                 \
        EPILEPSY_call(                                                                             \
            EPILEPSY_if,                                                                           \
            EPILEPSY_isNil(v(xs)) v(EPILEPSY_PRIV_CONST_NIL, EPILEPSY_PRIV_listInit_PROGRESS)),    \
        v(x, xs))
#define EPILEPSY_PRIV_listInit_PROGRESS_IMPL(x, xs) EPILEPSY_cons(v(x), EPILEPSY_listInit(v(xs)))
// }

// EPILEPSY_list_IMPL {
#define EPILEPSY_list_IMPL(...)                                                                    \
    EPILEPSY_call(                                                                                 \
        EPILEPSY_PRIV_list_AUX,                                                                    \
        v(EPILEPSY_PRIV_VARIADICS_COUNT(__VA_ARGS__), __VA_ARGS__, ~))

#define EPILEPSY_PRIV_list_AUX_IMPL(count, ...)                                                    \
    EPILEPSY_call(                                                                                 \
        EPILEPSY_PRIV_IF(                                                                          \
            EPILEPSY_PRIV_uintEq(count, 1),                                                        \
            EPILEPSY_PRIV_list_DONE,                                                               \
            EPILEPSY_PRIV_list_PROGRESS),                                                          \
        v(count, __VA_ARGS__))

#define EPILEPSY_PRIV_list_DONE_IMPL(_count, x, _) EPILEPSY_cons(v(x), EPILEPSY_nil())
#define EPILEPSY_PRIV_list_PROGRESS_IMPL(count, x, ...)                                            \
    EPILEPSY_cons(                                                                                 \
        v(x),                                                                                      \
        EPILEPSY_call(EPILEPSY_PRIV_list_AUX, v(EPILEPSY_PRIV_uintDec(count), __VA_ARGS__)))
// }

#define EPILEPSY_listLen_IMPL(list)            EPILEPSY_call(EPILEPSY_match, v(list, EPILEPSY_PRIV_listLen_))
#define EPILEPSY_PRIV_listLen_nil_IMPL()       v(0)
#define EPILEPSY_PRIV_listLen_cons_IMPL(x, xs) EPILEPSY_uintInc(EPILEPSY_listLen(v(xs)))

#define EPILEPSY_listAppend_IMPL(list, other)                                                      \
    EPILEPSY_call(EPILEPSY_matchWithArgs, v(list, EPILEPSY_PRIV_listAppend_, other))
#define EPILEPSY_PRIV_listAppend_nil_IMPL(other) v(other)
#define EPILEPSY_PRIV_listAppend_cons_IMPL(x, xs, other)                                           \
    EPILEPSY_cons(v(x), EPILEPSY_call(EPILEPSY_listAppend, v(xs, other)))

#define EPILEPSY_listAppendItem_IMPL(item, list) EPILEPSY_listAppend(v(list), E_list(v(item)))

#define EPILEPSY_isNil_IMPL(list)              EPILEPSY_call(EPILEPSY_match, v(list, EPILEPSY_PRIV_isNil_))
#define EPILEPSY_PRIV_isNil_nil_IMPL()         v(EPILEPSY_true)
#define EPILEPSY_PRIV_isNil_cons_IMPL(_x, _xs) v(EPILEPSY_false)

#define EPILEPSY_listUnwrap_IMPL(list)                                                             \
    EPILEPSY_call(EPILEPSY_match, v(list, EPILEPSY_PRIV_listUnwrap_))
#define EPILEPSY_PRIV_listUnwrap_nil_IMPL()       EPILEPSY_empty()
#define EPILEPSY_PRIV_listUnwrap_cons_IMPL(x, xs) v(x) EPILEPSY_listUnwrap(v(xs))

#define EPILEPSY_listReverse_IMPL(list)                                                            \
    EPILEPSY_call(EPILEPSY_match, v(list, EPILEPSY_PRIV_listReverse_))
#define EPILEPSY_PRIV_listReverse_nil_IMPL() EPILEPSY_nil()
#define EPILEPSY_PRIV_listReverse_cons_IMPL(x, xs)                                                 \
    EPILEPSY_listAppendItem(v(x), EPILEPSY_listReverse(v(xs)))

// EPILEPSY_get_IMPL {
#define EPILEPSY_get_IMPL(i, list)                                                                 \
    EPILEPSY_call(EPILEPSY_matchWithArgs, v(list, EPILEPSY_PRIV_get_, i))
#define EPILEPSY_PRIV_get_nil_IMPL(i) EPILEPSY_PRIV_EMPTY_LIST_ERROR(EPILEPSY_get)
#define EPILEPSY_PRIV_get_cons_IMPL(x, xs, i)                                                      \
    EPILEPSY_PRIV_IF(                                                                              \
        EPILEPSY_PRIV_uintEq(i, 0),                                                                \
        EPILEPSY_PRIV_get_DONE,                                                                    \
        EPILEPSY_PRIV_get_PROGRESS)                                                                \
    (x, EPILEPSY_PRIV_uintDec(i), xs)
#define EPILEPSY_PRIV_get_DONE(x, _i, _xs)   v(x)
#define EPILEPSY_PRIV_get_PROGRESS(x, i, xs) EPILEPSY_call(EPILEPSY_get, v(i, xs))
// }

#define EPILEPSY_listFoldr_IMPL(f, init, list)                                                     \
    EPILEPSY_call(EPILEPSY_matchWithArgs, v(list, EPILEPSY_PRIV_listFoldr_, f, init))
#define EPILEPSY_PRIV_listFoldr_nil_IMPL(_f, acc) v(acc)
#define EPILEPSY_PRIV_listFoldr_cons_IMPL(x, xs, f, acc)                                           \
    EPILEPSY_call(EPILEPSY_appl2, v(f, x) EPILEPSY_call(EPILEPSY_listFoldr, v(f, acc, xs)))

#define EPILEPSY_listFoldl_IMPL(f, init, list)                                                     \
    EPILEPSY_call(EPILEPSY_matchWithArgs, v(list, EPILEPSY_PRIV_listFoldl_, f, init))
#define EPILEPSY_PRIV_listFoldl_nil_IMPL(_f, acc) v(acc)
#define EPILEPSY_PRIV_listFoldl_cons_IMPL(x, xs, f, acc)                                           \
    EPILEPSY_listFoldl(v(f), EPILEPSY_call(EPILEPSY_appl2, v(f, acc, x)), v(xs))

#define EPILEPSY_listFoldl1_IMPL(f, list)                                                          \
    EPILEPSY_call(EPILEPSY_matchWithArgs, v(list, EPILEPSY_PRIV_listFoldl1_, f))
#define EPILEPSY_PRIV_listFoldl1_nil_IMPL(_f)        EPILEPSY_PRIV_EMPTY_LIST_ERROR(EPILEPSY_listFoldl1)
#define EPILEPSY_PRIV_listFoldl1_cons_IMPL(x, xs, f) EPILEPSY_call(EPILEPSY_listFoldl, v(f, x, xs))

#define EPILEPSY_listIntersperse_IMPL(item, list)                                                  \
    EPILEPSY_call(EPILEPSY_matchWithArgs, v(list, EPILEPSY_PRIV_listIntersperse_, item))
#define EPILEPSY_PRIV_listIntersperse_nil_IMPL(_item) EPILEPSY_nil()
#define EPILEPSY_PRIV_listIntersperse_cons_IMPL(x, xs, item)                                       \
    EPILEPSY_cons(v(x), EPILEPSY_call(EPILEPSY_listPrependToAll, v(item, xs)))

#define EPILEPSY_listPrependToAll_IMPL(item, list)                                                 \
    EPILEPSY_call(EPILEPSY_matchWithArgs, v(list, EPILEPSY_PRIV_listPrependToAll_, item))
#define EPILEPSY_PRIV_listPrependToAll_nil_IMPL(_item) EPILEPSY_nil()
#define EPILEPSY_PRIV_listPrependToAll_cons_IMPL(x, xs, item)                                      \
    EPILEPSY_cons(                                                                                 \
        v(item),                                                                                   \
        EPILEPSY_cons(v(x), EPILEPSY_call(EPILEPSY_listPrependToAll, v(item, xs))))

#define EPILEPSY_listMap_IMPL(f, list)                                                             \
    EPILEPSY_call(EPILEPSY_matchWithArgs, v(list, EPILEPSY_PRIV_listMap_, f))
#define EPILEPSY_PRIV_listMap_nil_IMPL(_f) EPILEPSY_nil()
#define EPILEPSY_PRIV_listMap_cons_IMPL(x, xs, f)                                                  \
    EPILEPSY_cons(EPILEPSY_call(EPILEPSY_appl, v(f, x)), EPILEPSY_call(EPILEPSY_listMap, v(f, xs)))

#define EPILEPSY_listMapI_IMPL(f, list) EPILEPSY_call(EPILEPSY_PRIV_listMapI_AUX, v(f, list, 0))
#define EPILEPSY_PRIV_listMapI_AUX_IMPL(f, list, i)                                                \
    EPILEPSY_call(EPILEPSY_matchWithArgs, v(list, EPILEPSY_PRIV_listMapI_, f, i))
#define EPILEPSY_PRIV_listMapI_nil_IMPL(_f, _i) EPILEPSY_nil()
#define EPILEPSY_PRIV_listMapI_cons_IMPL(x, xs, f, i)                                              \
    EPILEPSY_cons(                                                                                 \
        EPILEPSY_call(EPILEPSY_appl2, v(f, x, i)),                                                 \
        EPILEPSY_call(EPILEPSY_PRIV_listMapI_AUX, v(f, xs, EPILEPSY_PRIV_uintInc(i))))

#define EPILEPSY_listFor_IMPL(list, f) EPILEPSY_call(EPILEPSY_listMap, v(f, list))

#define EPILEPSY_listMapInitLast_IMPL(f_init, f_last, list)                                        \
    E_listAppendItem(                                                                              \
        E_appl(v(f_last), E_listLast(v(list))),                                                    \
        E_listMap(v(f_init), E_listInit(v(list))))

#define EPILEPSY_listForInitLast_IMPL(list, f_init, f_last)                                        \
    EPILEPSY_call(EPILEPSY_listMapInitLast, v(f_init, f_last, list))

#define EPILEPSY_listFilter_IMPL(f, list)                                                          \
    EPILEPSY_call(EPILEPSY_matchWithArgs, v(list, EPILEPSY_PRIV_listFilter_, f))
#define EPILEPSY_PRIV_listFilter_nil_IMPL(_f) EPILEPSY_nil()
#define EPILEPSY_PRIV_listFilter_cons_IMPL(x, xs, f)                                               \
    EPILEPSY_call(                                                                                 \
        EPILEPSY_call(                                                                             \
            EPILEPSY_if,                                                                           \
            EPILEPSY_call(EPILEPSY_appl, v(f, x))                                                  \
                v(EPILEPSY_PRIV_listFilter_DONE, EPILEPSY_PRIV_listFilter_PROGRESS)),              \
        v(x) EPILEPSY_call(EPILEPSY_listFilter, v(f, xs)))
#define EPILEPSY_PRIV_listFilter_DONE_IMPL(x, rest)     EPILEPSY_call(EPILEPSY_cons, v(x, rest))
#define EPILEPSY_PRIV_listFilter_PROGRESS_IMPL(x, rest) v(rest)

// EPILEPSY_listEq_IMPL {
#define EPILEPSY_listEq_IMPL(compare, list, other)                                                 \
    EPILEPSY_call(EPILEPSY_matchWithArgs, v(list, EPILEPSY_PRIV_listEq_, other, compare))

#define EPILEPSY_PRIV_listEq_nil_IMPL(other, _compare) EPILEPSY_isNil(v(other))
#define EPILEPSY_PRIV_listEq_cons_IMPL(x, xs, other, compare)                                      \
    EPILEPSY_call(EPILEPSY_matchWithArgs, v(other, EPILEPSY_PRIV_listEq_cons_, x, xs, compare))

#define EPILEPSY_PRIV_listEq_cons_nil_IMPL(_x, _xs, _compare) v(EPILEPSY_false)
#define EPILEPSY_PRIV_listEq_cons_cons_IMPL(other_x, other_xs, x, xs, compare)                     \
    EPILEPSY_call(                                                                                 \
        EPILEPSY_call(                                                                             \
            EPILEPSY_if,                                                                           \
            EPILEPSY_call(EPILEPSY_appl2, v(compare, x, other_x))                                  \
                v(EPILEPSY_listEq, EPILEPSY_PRIV_CONST_FALSE)),                                    \
        v(compare, xs, other_xs))
// }

#define EPILEPSY_listContains_IMPL(compare, item, list)                                            \
    EPILEPSY_matchWithArgs(v(list), v(EPILEPSY_PRIV_listContains_), v(item, compare))
#define EPILEPSY_PRIV_listContains_nil_IMPL(_item, _compare) v(EPILEPSY_false)
#define EPILEPSY_PRIV_listContains_cons_IMPL(x, xs, item, compare)                                 \
    EPILEPSY_call(                                                                                 \
        EPILEPSY_call(                                                                             \
            EPILEPSY_if,                                                                           \
            EPILEPSY_call(EPILEPSY_appl2, v(compare, x, item))                                     \
                v(EPILEPSY_PRIV_CONST_TRUE, EPILEPSY_listContains)),                               \
        v(compare, item, xs))

#define EPILEPSY_listTake_IMPL(n, list)                                                            \
    EPILEPSY_call(EPILEPSY_matchWithArgs, v(list, EPILEPSY_PRIV_listTake_, n))
#define EPILEPSY_PRIV_listTake_nil_IMPL(_i) EPILEPSY_nil()
#define EPILEPSY_PRIV_listTake_cons_IMPL(x, xs, i)                                                 \
    EPILEPSY_PRIV_IF(                                                                              \
        EPILEPSY_PRIV_uintEq(i, 0),                                                                \
        EPILEPSY_PRIV_listTake_DONE,                                                               \
        EPILEPSY_PRIV_listTake_PROGRESS)                                                           \
    (x, xs, i)
#define EPILEPSY_PRIV_listTake_DONE(_x, _xs, _i) EPILEPSY_nil()
#define EPILEPSY_PRIV_listTake_PROGRESS(x, xs, i)                                                  \
    EPILEPSY_cons(v(x), EPILEPSY_call(EPILEPSY_listTake, v(EPILEPSY_PRIV_uintDec(i), xs)))

#define EPILEPSY_listTakeWhile_IMPL(f, list)                                                       \
    EPILEPSY_call(EPILEPSY_matchWithArgs, v(list, EPILEPSY_PRIV_listTakeWhile_, f))
#define EPILEPSY_PRIV_listTakeWhile_nil_IMPL(_f) EPILEPSY_nil()
#define EPILEPSY_PRIV_listTakeWhile_cons_IMPL(x, xs, f)                                            \
    EPILEPSY_call(                                                                                 \
        EPILEPSY_call(                                                                             \
            EPILEPSY_if,                                                                           \
            EPILEPSY_call(EPILEPSY_appl, v(f, x))                                                  \
                v(EPILEPSY_PRIV_listTakeWhile_PROGRESS, EPILEPSY_PRIV_CONST_NIL)),                 \
        v(x, xs, f))
#define EPILEPSY_PRIV_listTakeWhile_PROGRESS_IMPL(x, xs, f)                                        \
    EPILEPSY_cons(v(x), EPILEPSY_call(EPILEPSY_listTakeWhile, v(f, xs)))

#define EPILEPSY_listDrop_IMPL(n, list)                                                            \
    EPILEPSY_call(EPILEPSY_matchWithArgs, v(list, EPILEPSY_PRIV_listDrop_, n))
#define EPILEPSY_PRIV_listDrop_nil_IMPL(_i) EPILEPSY_nil()
#define EPILEPSY_PRIV_listDrop_cons_IMPL(x, xs, i)                                                 \
    EPILEPSY_PRIV_IF(                                                                              \
        EPILEPSY_PRIV_uintEq(i, 0),                                                                \
        EPILEPSY_PRIV_listDrop_DONE,                                                               \
        EPILEPSY_PRIV_listDrop_PROGRESS)                                                           \
    (x, xs, i)
#define EPILEPSY_PRIV_listDrop_DONE(x, xs, _i) EPILEPSY_call(EPILEPSY_cons, v(x, xs))
#define EPILEPSY_PRIV_listDrop_PROGRESS(_x, xs, i)                                                 \
    EPILEPSY_call(EPILEPSY_listDrop, v(EPILEPSY_PRIV_uintDec(i), xs))

#define EPILEPSY_listDropWhile_IMPL(f, list)                                                       \
    EPILEPSY_matchWithArgs(v(list), v(EPILEPSY_PRIV_listDropWhile_), v(f))
#define EPILEPSY_PRIV_listDropWhile_nil_IMPL(_f) EPILEPSY_nil()
#define EPILEPSY_PRIV_listDropWhile_cons_IMPL(x, xs, f)                                            \
    EPILEPSY_call(                                                                                 \
        EPILEPSY_call(                                                                             \
            EPILEPSY_if,                                                                           \
            EPILEPSY_call(EPILEPSY_appl, v(f, x))                                                  \
                v(EPILEPSY_PRIV_listDropWhile_PROGRESS, EPILEPSY_PRIV_listDropWhile_DONE)),        \
        v(x, xs, f))
#define EPILEPSY_PRIV_listDropWhile_DONE_IMPL(x, xs, _f) EPILEPSY_call(EPILEPSY_cons, v(x, xs))
#define EPILEPSY_PRIV_listDropWhile_PROGRESS_IMPL(_x, xs, f)                                       \
    EPILEPSY_call(EPILEPSY_listDropWhile, v(f, xs))

// EPILEPSY_listZip_IMPL {
#define EPILEPSY_listZip_IMPL(list, other)                                                         \
    EPILEPSY_call(EPILEPSY_matchWithArgs, v(list, EPILEPSY_PRIV_listZip_, other))

#define EPILEPSY_PRIV_listZip_nil_IMPL(_other) EPILEPSY_nil()
#define EPILEPSY_PRIV_listZip_cons_IMPL(x, xs, other)                                              \
    EPILEPSY_call(EPILEPSY_matchWithArgs, v(other, EPILEPSY_PRIV_listZip_cons_, x, xs))

#define EPILEPSY_PRIV_listZip_cons_nil_IMPL(_x, _xs) EPILEPSY_nil()
#define EPILEPSY_PRIV_listZip_cons_cons_IMPL(other_x, other_xs, x, xs)                             \
    EPILEPSY_cons(EPILEPSY_list(v(x, other_x)), EPILEPSY_call(EPILEPSY_listZip, v(xs, other_xs)))
// }

// EPILEPSY_listUnzip_IMPL {
#define EPILEPSY_listUnzip_IMPL(list)                                                              \
    EPILEPSY_call(EPILEPSY_match, v(list, EPILEPSY_PRIV_listUnzip_))

#define EPILEPSY_PRIV_listUnzip_nil_IMPL() EPILEPSY_list(EPILEPSY_nil() EPILEPSY_nil())
#define EPILEPSY_PRIV_listUnzip_cons_IMPL(x, xs)                                                   \
    EPILEPSY_call(EPILEPSY_PRIV_listUnzip_PROGRESS, v(x) EPILEPSY_listUnzip(v(xs)))
#define EPILEPSY_PRIV_listUnzip_PROGRESS_IMPL(x, rest)                                             \
    EPILEPSY_list(EPILEPSY_call(EPILEPSY_PRIV_listUnzip_ADD, v(x, rest, 0))                        \
                      EPILEPSY_call(EPILEPSY_PRIV_listUnzip_ADD, v(x, rest, 1)))
#define EPILEPSY_PRIV_listUnzip_ADD_IMPL(x, rest, i)                                               \
    EPILEPSY_cons(EPILEPSY_call(EPILEPSY_get, v(i, x)), EPILEPSY_call(EPILEPSY_get, v(i, rest)))
// }

#define EPILEPSY_listReplicate_IMPL(n, item)                                                       \
    EPILEPSY_uintMatchWithArgs(v(n), v(EPILEPSY_PRIV_listReplicate_), v(item))
#define EPILEPSY_PRIV_listReplicate_Z_IMPL(item) EPILEPSY_nil()
#define EPILEPSY_PRIV_listReplicate_S_IMPL(n, item)                                                \
    EPILEPSY_cons(v(item), EPILEPSY_call(EPILEPSY_listReplicate, v(n, item)))

#define EPILEPSY_listAppl_IMPL(f, list) EPILEPSY_call(EPILEPSY_listFoldl, v(EPILEPSY_appl, f, list))

// EPILEPSY_listUnwrapCommaSep {
#define EPILEPSY_listUnwrapCommaSep_IMPL(list)                                                     \
    EPILEPSY_call(EPILEPSY_match, v(list, EPILEPSY_PRIV_listUnwrapCommaSep_))
#define EPILEPSY_PRIV_listUnwrapCommaSep_nil_IMPL() EPILEPSY_empty()
#define EPILEPSY_PRIV_listUnwrapCommaSep_cons_IMPL(x, xs)                                          \
    v(x) EPILEPSY_call(EPILEPSY_PRIV_listUnwrapCommaSepAux, v(xs))

#define EPILEPSY_PRIV_listUnwrapCommaSepAux_IMPL(xs)                                               \
    EPILEPSY_call(EPILEPSY_match, v(xs, EPILEPSY_PRIV_listUnwrapCommaSepAux_))
#define EPILEPSY_PRIV_listUnwrapCommaSepAux_nil_IMPL() EPILEPSY_empty()
#define EPILEPSY_PRIV_listUnwrapCommaSepAux_cons_IMPL(x, xs)                                       \
    v(, x) EPILEPSY_call(EPILEPSY_PRIV_listUnwrapCommaSepAux, v(xs))
// }

// clang-format off
#define EPILEPSY_PRIV_EMPTY_LIST_ERROR(f) EPILEPSY_fatal(EPILEPSY_##f, expected a non-empty list)
// clang-format on

#define EPILEPSY_PRIV_CONST_NIL_IMPL(...) EPILEPSY_nil()

// } (Implementation)

// Arity specifiers {
#define EPILEPSY_cons_ARITY               2
#define EPILEPSY_nil_ARITY                1
#define EPILEPSY_listHead_ARITY           1
#define EPILEPSY_listTail_ARITY           1
#define EPILEPSY_listLast_ARITY           1
#define EPILEPSY_listInit_ARITY           1
#define EPILEPSY_list_ARITY               1
#define EPILEPSY_listLen_ARITY            1
#define EPILEPSY_listAppend_ARITY         2
#define EPILEPSY_listAppendItem_ARITY     2
#define EPILEPSY_listUnwrap_ARITY         1
#define EPILEPSY_listUnwrapCommaSep_ARITY 1
#define EPILEPSY_listReverse_ARITY        1
#define EPILEPSY_isNil_ARITY              1
#define EPILEPSY_get_ARITY                2
#define EPILEPSY_listFoldr_ARITY          3
#define EPILEPSY_listFoldl_ARITY          3
#define EPILEPSY_listFoldl1_ARITY         2
#define EPILEPSY_listIntersperse_ARITY    2
#define EPILEPSY_listPrependToAll_ARITY   2
#define EPILEPSY_listMap_ARITY            2
#define EPILEPSY_listMapI_ARITY           2
#define EPILEPSY_listFor_ARITY            2
#define EPILEPSY_listMapInitLast_ARITY    3
#define EPILEPSY_listForInitLast_ARITY    3
#define EPILEPSY_listFilter_ARITY         2
#define EPILEPSY_listEq_ARITY             3
#define EPILEPSY_listContains_ARITY       3
#define EPILEPSY_listTake_ARITY           2
#define EPILEPSY_listTakeWhile_ARITY      2
#define EPILEPSY_listDrop_ARITY           2
#define EPILEPSY_listDropWhile_ARITY      2
#define EPILEPSY_listZip_ARITY            2
#define EPILEPSY_listUnzip_ARITY          1
#define EPILEPSY_listReplicate_ARITY      2
#define EPILEPSY_listAppl_ARITY           2

#define EPILEPSY_PRIV_listInit_PROGRESS_ARITY      2
#define EPILEPSY_PRIV_list_DONE_ARITY              1
#define EPILEPSY_PRIV_list_PROGRESS_ARITY          2
#define EPILEPSY_PRIV_listTake_PROGRESS_ARITY      3
#define EPILEPSY_PRIV_listTakeWhile_PROGRESS_ARITY 3
#define EPILEPSY_PRIV_listDrop_PROGRESS_ARITY      2
#define EPILEPSY_PRIV_listDropWhile_PROGRESS_ARITY 2
// }

// Aliases {
#ifndef EPILEPSY_NO_SMALL_PREFIX

#define E_cons               EPILEPSY_cons
#define E_nil                EPILEPSY_nil
#define E_listHead           EPILEPSY_listHead
#define E_listTail           EPILEPSY_listTail
#define E_listLast           EPILEPSY_listLast
#define E_listInit           EPILEPSY_listInit
#define E_list               EPILEPSY_list
#define E_listLen            EPILEPSY_listLen
#define E_listEval           EPILEPSY_listEval
#define E_listEvalCommaSep   EPILEPSY_listEvalCommaSep
#define E_listAppend         EPILEPSY_listAppend
#define E_listAppendItem     EPILEPSY_listAppendItem
#define E_listUnwrap         EPILEPSY_listUnwrap
#define E_listUnwrapCommaSep EPILEPSY_listUnwrapCommaSep
#define E_listReverse        EPILEPSY_listReverse
#define E_isNil              EPILEPSY_isNil
#define E_get                EPILEPSY_get
#define E_listFoldr          EPILEPSY_listFoldr
#define E_listFoldl          EPILEPSY_listFoldl
#define E_listFoldl1         EPILEPSY_listFoldl1
#define E_listIntersperse    EPILEPSY_listIntersperse
#define E_listPrependToAll   EPILEPSY_listPrependToAll
#define E_listMap            EPILEPSY_listMap
#define E_listMapI           EPILEPSY_listMapI
#define E_listFor            EPILEPSY_listFor
#define E_listMapInitLast    EPILEPSY_listMapInitLast
#define E_listForInitLast    EPILEPSY_listForInitLast
#define E_listFilter         EPILEPSY_listFilter
#define E_listEq             EPILEPSY_listEq
#define E_listContains       EPILEPSY_listContains
#define E_listTake           EPILEPSY_listTake
#define E_listTakeWhile      EPILEPSY_listTakeWhile
#define E_listDrop           EPILEPSY_listDrop
#define E_listDropWhile      EPILEPSY_listDropWhile
#define E_listZip            EPILEPSY_listZip
#define E_listUnzip          EPILEPSY_listUnzip
#define E_listReplicate      EPILEPSY_listReplicate
#define E_listAppl           EPILEPSY_listAppl

#endif // EPILEPSY_NO_SMALL_PREFIX
// }

#endif // DOXYGEN_IGNORE

#endif // EPILEPSY_LIST_H
