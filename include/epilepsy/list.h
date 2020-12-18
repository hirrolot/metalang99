/**
 * @file
 * @brief Lists.
 */

#ifndef EPILEPSY_LIST_H
#define EPILEPSY_LIST_H

#ifndef DOXYGEN_SHOULD_SKIP_THIS

#include <epilepsy/control.h>
#include <epilepsy/logical.h>
#include <epilepsy/priv/pair.h>
#include <epilepsy/uint.h>
#include <epilepsy/variadics.h>

#endif // DOXYGEN_SHOULD_SKIP_THIS

#include <epilepsy/choice.h>

/**
 * @brief Prepends an item to a list.
 */
#define EPILEPSY_Cons(head, tail) call(EPILEPSY_Cons_REAL, head tail)

/**
 * @brief The empty list.
 */
#define EPILEPSY_Nil() call(EPILEPSY_Nil_REAL, )

/**
 * @brief Constructs a list from supplied arguments.
 */
#define EPILEPSY_List(...) call(EPILEPSY_List_REAL, __VA_ARGS__)

/**
 * @brief Performs a right fold.
 */
#define EPILEPSY_ListFoldr(list, op, init) call(EPILEPSY_ListFoldr_REAL, list op init)

/**
 * @brief Gets an @p i -indexed element.
 */
#define EPILEPSY_ListGet(list, i) call(EPILEPSY_ListGet_REAL, list i)

#ifndef DOXYGEN_SHOULD_SKIP_THIS

#define EPILEPSY_Cons_REAL(head, tail) EPILEPSY_CHOICE(v(Cons) v(EPILEPSY_PRIV_PAIR(head, tail)))
#define EPILEPSY_Nil_REAL()            EPILEPSY_CHOICE(v(Nil))

#define EPILEPSY_List_REAL(...)                                                                    \
    call(EPILEPSY_PRIV_List_AUX, EPILEPSY_VARIADICS_COUNT(v(__VA_ARGS__)) v(__VA_ARGS__) v(~))
#define EPILEPSY_PRIV_List_AUX(count, ...)                                                         \
    call(                                                                                          \
        EPILEPSY_IF(                                                                               \
            EPILEPSY_UINT_EQ(v(count), v(1)), v(EPILEPSY_PRIV_List_DONE),                          \
            v(EPILEPSY_PRIV_List_PROGRESS)),                                                       \
        v(count) v(__VA_ARGS__))
#define EPILEPSY_PRIV_List_DONE(_count, last, _) EPILEPSY_Cons(v(last), EPILEPSY_Nil())
#define EPILEPSY_PRIV_List_PROGRESS(count, head, ...)                                              \
    EPILEPSY_Cons(v(head), call(EPILEPSY_PRIV_List_AUX, EPILEPSY_UINT_DEC(v(count)) v(__VA_ARGS__)))

#define EPILEPSY_ListFoldr_REAL(list, op, init)                                                    \
    EPILEPSY_MATCH_WITH_ARGS(v(list), v(EPILEPSY_PRIV_ListFoldr_), v(op) v(init))
#define EPILEPSY_PRIV_ListFoldr_Cons(list, op, acc)                                                \
    call(                                                                                          \
        op, v(EPILEPSY_PRIV_ListHead(list))                                                        \
                EPILEPSY_ListFoldr(v(EPILEPSY_PRIV_ListTail(list)), v(op), v(acc)))
#define EPILEPSY_PRIV_ListFoldr_Nil(_dummy, _op, acc) v(acc)

#define EPILEPSY_ListGet_REAL(list, i)                                                             \
    call(                                                                                          \
        EPILEPSY_IF(                                                                               \
            EPILEPSY_UINT_EQ(v(i), v(0)), v(EPILEPSY_PRIV_ListGet_VISIT_DONE),                     \
            v(EPILEPSY_PRIV_ListGet_VISIT_PROGRESS)),                                              \
        v(list) v(i))
#define EPILEPSY_PRIV_ListGet_VISIT_DONE(list, _i) v(EPILEPSY_PRIV_ListHead(list))
#define EPILEPSY_PRIV_ListGet_VISIT_PROGRESS(list, i)                                              \
    EPILEPSY_ListGet(v(EPILEPSY_PRIV_ListTail(list)), EPILEPSY_UINT_DEC(v(i)))

#define EPILEPSY_PRIV_ListHead(list) EPILEPSY_PRIV_PAIR_FST(EPILEPSY_PRIV_PAIR_SND(list))
#define EPILEPSY_PRIV_ListTail(list) EPILEPSY_PRIV_PAIR_SND(EPILEPSY_PRIV_PAIR_SND(list))

#endif // DOXYGEN_SHOULD_SKIP_THIS

#endif // EPILEPSY_LIST_H
