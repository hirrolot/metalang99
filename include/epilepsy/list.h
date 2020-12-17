/**
 * @file
 * @brief Lists.
 */

#ifndef EPILEPSY_LIST_H
#define EPILEPSY_LIST_H

#ifndef DOXYGEN_SHOULD_SKIP_THIS

#include <epilepsy/control.h>
#include <epilepsy/list/convert.h>
#include <epilepsy/logical.h>
#include <epilepsy/priv/pair.h>
#include <epilepsy/uint.h>

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

#define EPILEPSY_ListFoldr_REAL(list, op, init)                                                    \
    EPILEPSY_CHOICE_MATCH(v(list), v(EPILEPSY_PRIV_ListFoldr_), v(op) v(init))
#define EPILEPSY_PRIV_ListFoldr_Cons(list, op, acc)                                                \
    call(                                                                                          \
        op, v(EPILEPSY_PRIV_ListHead(list))                                                        \
                EPILEPSY_ListFoldr(v(EPILEPSY_PRIV_ListTail(list)), v(op), v(acc)))
#define EPILEPSY_PRIV_ListFoldr_Nil(_dummy, _op, acc) v(acc)

#define EPILEPSY_ListGet_REAL(list, i)                                                             \
    call(                                                                                          \
        EPILEPSY_IF(                                                                               \
            v(EPILEPSY_PRIV_UINT_EQ(i, 0)), v(EPILEPSY_PRIV_ListGet_VISIT_DONE),                   \
            v(EPILEPSY_PRIV_ListGet_VISIT_PROGRESS)),                                              \
        v(list) v(i))
#define EPILEPSY_PRIV_ListGet_VISIT_DONE(list, _i)                                                 \
    v(EPILEPSY_PRIV_ListHead(EPILEPSY_PRIV_ListTail(EPILEPSY_PRIV_ListTail(list))))
#define EPILEPSY_PRIV_ListGet_VISIT_PROGRESS(list, i)                                              \
    EPILEPSY_ListGet(v(EPILEPSY_PRIV_ListTail(list)), v(EPILEPSY_PRIV_UINT_DEC(i)))

#define EPILEPSY_PRIV_ListHead EPILEPSY_PRIV_PAIR_FST
#define EPILEPSY_PRIV_ListTail EPILEPSY_PRIV_PAIR_SND

#endif // DOXYGEN_SHOULD_SKIP_THIS

#endif // EPILEPSY_LIST_H
