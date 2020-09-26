/**
 * @file
 * @brief Support for recursion.
 */

#ifndef KOSHMAR_PP_REC_H
#define KOSHMAR_PP_REC_H

#ifndef DOXYGEN_SHOULD_SKIP_THIS

#include "aux.h"

#endif // DOXYGEN_SHOULD_SKIP_THIS

/**
 * @brief Starts recursion
 */
#define KOSHMAR_PP_REC KOSHMAR_PP_PRIVATE_REC

/**
 * @brief Checks a termination condition during recursion.
 */
#define KOSHMAR_PP_REC_IF(cond, stop, continue) KOSHMAR_PP_PRIVATE_REC_IF(cond, stop, continue)

/**
 * @brief Stops recursion with the provided output.
 */
#define KOSHMAR_PP_REC_STOP(...) KOSHMAR_PP_PRIVATE_REC_STOP(__VA_ARGS__)

/**
 * @brief Continues recursion with the provided arguments.
 */
#define KOSHMAR_PP_REC_CONTINUE(hook, ...) KOSHMAR_PP_PRIVATE_REC_CONTINUE(hook, __VA_ARGS__)

#ifndef DOXYGEN_SHOULD_SKIP_THIS

#define KOSHMAR_PP_PRIVATE_REC          KOSHMAR_PP_PRIVATE_REC_0
#define KOSHMAR_PP_PRIVATE_REC_STOP     KOSHMAR_PP_PARENTHESISE
#define KOSHMAR_PP_PRIVATE_REC_CONTINUE KOSHMAR_PP_PARENTHESISE

#define KOSHMAR_PP_PRIVATE_REC_IF(cond, stop, continue)                                            \
    KOSHMAR_PP_CALL_MACRO(KOSHMAR_PP_IF(cond,                                                      \
                                        KOSHMAR_PP_PRIVATE_REC_FORCE_STOP,                         \
                                        KOSHMAR_PP_PRIVATE_REC_FORCE_CONTINUE),                    \
                          stop,                                                                    \
                          KOSHMAR_PP_UNPARENTHESISE(continue))

#define KOSHMAR_PP_PRIVATE_REC_FORCE_STOP(stop, _hook, ...) STOP, KOSHMAR_PP_UNPARENTHESISE(stop)
#define KOSHMAR_PP_PRIVATE_REC_FORCE_CONTINUE(_stop, hook, ...)                                    \
    CONTINUE, KOSHMAR_PP_DEFER_2_TIMES(hook)()(__VA_ARGS__)

#define KOSHMAR_PP_PRIVATE_REC_0(...)                                                              \
    KOSHMAR_PP_PRIVATE_REC_0_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_0_GET_CHOICE(__VA_ARGS__))            \
    (KOSHMAR_PP_PRIVATE_REC_0_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_0_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_0_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_0_OVERLOAD(choice)                                                  \
    KOSHMAR_PP_PRIVATE_REC_0_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_0_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_0_##choice
#define KOSHMAR_PP_PRIVATE_REC_0_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_1
#define KOSHMAR_PP_PRIVATE_REC_0_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_1(...)                                                              \
    KOSHMAR_PP_PRIVATE_REC_1_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_1_GET_CHOICE(__VA_ARGS__))            \
    (KOSHMAR_PP_PRIVATE_REC_1_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_1_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_1_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_1_OVERLOAD(choice)                                                  \
    KOSHMAR_PP_PRIVATE_REC_1_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_1_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_1_##choice
#define KOSHMAR_PP_PRIVATE_REC_1_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_2
#define KOSHMAR_PP_PRIVATE_REC_1_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_2(...)                                                              \
    KOSHMAR_PP_PRIVATE_REC_2_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_2_GET_CHOICE(__VA_ARGS__))            \
    (KOSHMAR_PP_PRIVATE_REC_2_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_2_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_2_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_2_OVERLOAD(choice)                                                  \
    KOSHMAR_PP_PRIVATE_REC_2_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_2_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_2_##choice
#define KOSHMAR_PP_PRIVATE_REC_2_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_3
#define KOSHMAR_PP_PRIVATE_REC_2_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_3(...)                                                              \
    KOSHMAR_PP_PRIVATE_REC_3_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_3_GET_CHOICE(__VA_ARGS__))            \
    (KOSHMAR_PP_PRIVATE_REC_3_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_3_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_3_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_3_OVERLOAD(choice)                                                  \
    KOSHMAR_PP_PRIVATE_REC_3_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_3_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_3_##choice
#define KOSHMAR_PP_PRIVATE_REC_3_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_4
#define KOSHMAR_PP_PRIVATE_REC_3_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_4(...)                                                              \
    KOSHMAR_PP_PRIVATE_REC_4_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_4_GET_CHOICE(__VA_ARGS__))            \
    (KOSHMAR_PP_PRIVATE_REC_4_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_4_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_4_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_4_OVERLOAD(choice)                                                  \
    KOSHMAR_PP_PRIVATE_REC_4_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_4_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_4_##choice
#define KOSHMAR_PP_PRIVATE_REC_4_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_5
#define KOSHMAR_PP_PRIVATE_REC_4_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_5(...)                                                              \
    KOSHMAR_PP_PRIVATE_REC_5_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_5_GET_CHOICE(__VA_ARGS__))            \
    (KOSHMAR_PP_PRIVATE_REC_5_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_5_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_5_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_5_OVERLOAD(choice)                                                  \
    KOSHMAR_PP_PRIVATE_REC_5_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_5_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_5_##choice
#define KOSHMAR_PP_PRIVATE_REC_5_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_6
#define KOSHMAR_PP_PRIVATE_REC_5_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_6(...)                                                              \
    KOSHMAR_PP_PRIVATE_REC_6_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_6_GET_CHOICE(__VA_ARGS__))            \
    (KOSHMAR_PP_PRIVATE_REC_6_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_6_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_6_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_6_OVERLOAD(choice)                                                  \
    KOSHMAR_PP_PRIVATE_REC_6_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_6_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_6_##choice
#define KOSHMAR_PP_PRIVATE_REC_6_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_7
#define KOSHMAR_PP_PRIVATE_REC_6_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_7(...)                                                              \
    KOSHMAR_PP_PRIVATE_REC_7_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_7_GET_CHOICE(__VA_ARGS__))            \
    (KOSHMAR_PP_PRIVATE_REC_7_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_7_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_7_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_7_OVERLOAD(choice)                                                  \
    KOSHMAR_PP_PRIVATE_REC_7_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_7_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_7_##choice
#define KOSHMAR_PP_PRIVATE_REC_7_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_8
#define KOSHMAR_PP_PRIVATE_REC_7_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_8(...)                                                              \
    KOSHMAR_PP_PRIVATE_REC_8_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_8_GET_CHOICE(__VA_ARGS__))            \
    (KOSHMAR_PP_PRIVATE_REC_8_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_8_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_8_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_8_OVERLOAD(choice)                                                  \
    KOSHMAR_PP_PRIVATE_REC_8_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_8_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_8_##choice
#define KOSHMAR_PP_PRIVATE_REC_8_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_9
#define KOSHMAR_PP_PRIVATE_REC_8_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_9(...)                                                              \
    KOSHMAR_PP_PRIVATE_REC_9_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_9_GET_CHOICE(__VA_ARGS__))            \
    (KOSHMAR_PP_PRIVATE_REC_9_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_9_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_9_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_9_OVERLOAD(choice)                                                  \
    KOSHMAR_PP_PRIVATE_REC_9_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_9_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_9_##choice
#define KOSHMAR_PP_PRIVATE_REC_9_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_10
#define KOSHMAR_PP_PRIVATE_REC_9_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_10(...)                                                             \
    KOSHMAR_PP_PRIVATE_REC_10_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_10_GET_CHOICE(__VA_ARGS__))          \
    (KOSHMAR_PP_PRIVATE_REC_10_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_10_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_10_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_10_OVERLOAD(choice)                                                 \
    KOSHMAR_PP_PRIVATE_REC_10_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_10_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_10_##choice
#define KOSHMAR_PP_PRIVATE_REC_10_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_11
#define KOSHMAR_PP_PRIVATE_REC_10_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_11(...)                                                             \
    KOSHMAR_PP_PRIVATE_REC_11_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_11_GET_CHOICE(__VA_ARGS__))          \
    (KOSHMAR_PP_PRIVATE_REC_11_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_11_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_11_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_11_OVERLOAD(choice)                                                 \
    KOSHMAR_PP_PRIVATE_REC_11_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_11_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_11_##choice
#define KOSHMAR_PP_PRIVATE_REC_11_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_12
#define KOSHMAR_PP_PRIVATE_REC_11_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_12(...)                                                             \
    KOSHMAR_PP_PRIVATE_REC_12_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_12_GET_CHOICE(__VA_ARGS__))          \
    (KOSHMAR_PP_PRIVATE_REC_12_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_12_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_12_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_12_OVERLOAD(choice)                                                 \
    KOSHMAR_PP_PRIVATE_REC_12_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_12_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_12_##choice
#define KOSHMAR_PP_PRIVATE_REC_12_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_13
#define KOSHMAR_PP_PRIVATE_REC_12_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_13(...)                                                             \
    KOSHMAR_PP_PRIVATE_REC_13_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_13_GET_CHOICE(__VA_ARGS__))          \
    (KOSHMAR_PP_PRIVATE_REC_13_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_13_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_13_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_13_OVERLOAD(choice)                                                 \
    KOSHMAR_PP_PRIVATE_REC_13_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_13_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_13_##choice
#define KOSHMAR_PP_PRIVATE_REC_13_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_14
#define KOSHMAR_PP_PRIVATE_REC_13_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_14(...)                                                             \
    KOSHMAR_PP_PRIVATE_REC_14_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_14_GET_CHOICE(__VA_ARGS__))          \
    (KOSHMAR_PP_PRIVATE_REC_14_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_14_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_14_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_14_OVERLOAD(choice)                                                 \
    KOSHMAR_PP_PRIVATE_REC_14_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_14_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_14_##choice
#define KOSHMAR_PP_PRIVATE_REC_14_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_15
#define KOSHMAR_PP_PRIVATE_REC_14_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_15(...)                                                             \
    KOSHMAR_PP_PRIVATE_REC_15_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_15_GET_CHOICE(__VA_ARGS__))          \
    (KOSHMAR_PP_PRIVATE_REC_15_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_15_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_15_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_15_OVERLOAD(choice)                                                 \
    KOSHMAR_PP_PRIVATE_REC_15_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_15_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_15_##choice
#define KOSHMAR_PP_PRIVATE_REC_15_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_16
#define KOSHMAR_PP_PRIVATE_REC_15_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_16(...)                                                             \
    KOSHMAR_PP_PRIVATE_REC_16_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_16_GET_CHOICE(__VA_ARGS__))          \
    (KOSHMAR_PP_PRIVATE_REC_16_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_16_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_16_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_16_OVERLOAD(choice)                                                 \
    KOSHMAR_PP_PRIVATE_REC_16_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_16_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_16_##choice
#define KOSHMAR_PP_PRIVATE_REC_16_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_17
#define KOSHMAR_PP_PRIVATE_REC_16_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_17(...)                                                             \
    KOSHMAR_PP_PRIVATE_REC_17_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_17_GET_CHOICE(__VA_ARGS__))          \
    (KOSHMAR_PP_PRIVATE_REC_17_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_17_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_17_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_17_OVERLOAD(choice)                                                 \
    KOSHMAR_PP_PRIVATE_REC_17_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_17_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_17_##choice
#define KOSHMAR_PP_PRIVATE_REC_17_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_18
#define KOSHMAR_PP_PRIVATE_REC_17_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_18(...)                                                             \
    KOSHMAR_PP_PRIVATE_REC_18_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_18_GET_CHOICE(__VA_ARGS__))          \
    (KOSHMAR_PP_PRIVATE_REC_18_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_18_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_18_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_18_OVERLOAD(choice)                                                 \
    KOSHMAR_PP_PRIVATE_REC_18_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_18_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_18_##choice
#define KOSHMAR_PP_PRIVATE_REC_18_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_19
#define KOSHMAR_PP_PRIVATE_REC_18_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_19(...)                                                             \
    KOSHMAR_PP_PRIVATE_REC_19_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_19_GET_CHOICE(__VA_ARGS__))          \
    (KOSHMAR_PP_PRIVATE_REC_19_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_19_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_19_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_19_OVERLOAD(choice)                                                 \
    KOSHMAR_PP_PRIVATE_REC_19_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_19_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_19_##choice
#define KOSHMAR_PP_PRIVATE_REC_19_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_20
#define KOSHMAR_PP_PRIVATE_REC_19_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_20(...)                                                             \
    KOSHMAR_PP_PRIVATE_REC_20_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_20_GET_CHOICE(__VA_ARGS__))          \
    (KOSHMAR_PP_PRIVATE_REC_20_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_20_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_20_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_20_OVERLOAD(choice)                                                 \
    KOSHMAR_PP_PRIVATE_REC_20_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_20_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_20_##choice
#define KOSHMAR_PP_PRIVATE_REC_20_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_21
#define KOSHMAR_PP_PRIVATE_REC_20_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_21(...)                                                             \
    KOSHMAR_PP_PRIVATE_REC_21_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_21_GET_CHOICE(__VA_ARGS__))          \
    (KOSHMAR_PP_PRIVATE_REC_21_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_21_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_21_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_21_OVERLOAD(choice)                                                 \
    KOSHMAR_PP_PRIVATE_REC_21_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_21_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_21_##choice
#define KOSHMAR_PP_PRIVATE_REC_21_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_22
#define KOSHMAR_PP_PRIVATE_REC_21_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_22(...)                                                             \
    KOSHMAR_PP_PRIVATE_REC_22_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_22_GET_CHOICE(__VA_ARGS__))          \
    (KOSHMAR_PP_PRIVATE_REC_22_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_22_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_22_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_22_OVERLOAD(choice)                                                 \
    KOSHMAR_PP_PRIVATE_REC_22_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_22_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_22_##choice
#define KOSHMAR_PP_PRIVATE_REC_22_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_23
#define KOSHMAR_PP_PRIVATE_REC_22_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_23(...)                                                             \
    KOSHMAR_PP_PRIVATE_REC_23_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_23_GET_CHOICE(__VA_ARGS__))          \
    (KOSHMAR_PP_PRIVATE_REC_23_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_23_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_23_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_23_OVERLOAD(choice)                                                 \
    KOSHMAR_PP_PRIVATE_REC_23_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_23_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_23_##choice
#define KOSHMAR_PP_PRIVATE_REC_23_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_24
#define KOSHMAR_PP_PRIVATE_REC_23_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_24(...)                                                             \
    KOSHMAR_PP_PRIVATE_REC_24_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_24_GET_CHOICE(__VA_ARGS__))          \
    (KOSHMAR_PP_PRIVATE_REC_24_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_24_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_24_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_24_OVERLOAD(choice)                                                 \
    KOSHMAR_PP_PRIVATE_REC_24_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_24_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_24_##choice
#define KOSHMAR_PP_PRIVATE_REC_24_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_25
#define KOSHMAR_PP_PRIVATE_REC_24_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_25(...)                                                             \
    KOSHMAR_PP_PRIVATE_REC_25_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_25_GET_CHOICE(__VA_ARGS__))          \
    (KOSHMAR_PP_PRIVATE_REC_25_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_25_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_25_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_25_OVERLOAD(choice)                                                 \
    KOSHMAR_PP_PRIVATE_REC_25_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_25_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_25_##choice
#define KOSHMAR_PP_PRIVATE_REC_25_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_26
#define KOSHMAR_PP_PRIVATE_REC_25_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_26(...)                                                             \
    KOSHMAR_PP_PRIVATE_REC_26_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_26_GET_CHOICE(__VA_ARGS__))          \
    (KOSHMAR_PP_PRIVATE_REC_26_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_26_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_26_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_26_OVERLOAD(choice)                                                 \
    KOSHMAR_PP_PRIVATE_REC_26_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_26_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_26_##choice
#define KOSHMAR_PP_PRIVATE_REC_26_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_27
#define KOSHMAR_PP_PRIVATE_REC_26_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_27(...)                                                             \
    KOSHMAR_PP_PRIVATE_REC_27_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_27_GET_CHOICE(__VA_ARGS__))          \
    (KOSHMAR_PP_PRIVATE_REC_27_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_27_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_27_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_27_OVERLOAD(choice)                                                 \
    KOSHMAR_PP_PRIVATE_REC_27_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_27_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_27_##choice
#define KOSHMAR_PP_PRIVATE_REC_27_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_28
#define KOSHMAR_PP_PRIVATE_REC_27_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_28(...)                                                             \
    KOSHMAR_PP_PRIVATE_REC_28_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_28_GET_CHOICE(__VA_ARGS__))          \
    (KOSHMAR_PP_PRIVATE_REC_28_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_28_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_28_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_28_OVERLOAD(choice)                                                 \
    KOSHMAR_PP_PRIVATE_REC_28_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_28_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_28_##choice
#define KOSHMAR_PP_PRIVATE_REC_28_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_29
#define KOSHMAR_PP_PRIVATE_REC_28_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_29(...)                                                             \
    KOSHMAR_PP_PRIVATE_REC_29_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_29_GET_CHOICE(__VA_ARGS__))          \
    (KOSHMAR_PP_PRIVATE_REC_29_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_29_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_29_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_29_OVERLOAD(choice)                                                 \
    KOSHMAR_PP_PRIVATE_REC_29_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_29_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_29_##choice
#define KOSHMAR_PP_PRIVATE_REC_29_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_30
#define KOSHMAR_PP_PRIVATE_REC_29_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_30(...)                                                             \
    KOSHMAR_PP_PRIVATE_REC_30_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_30_GET_CHOICE(__VA_ARGS__))          \
    (KOSHMAR_PP_PRIVATE_REC_30_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_30_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_30_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_30_OVERLOAD(choice)                                                 \
    KOSHMAR_PP_PRIVATE_REC_30_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_30_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_30_##choice
#define KOSHMAR_PP_PRIVATE_REC_30_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_31
#define KOSHMAR_PP_PRIVATE_REC_30_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_31(...)                                                             \
    KOSHMAR_PP_PRIVATE_REC_31_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_31_GET_CHOICE(__VA_ARGS__))          \
    (KOSHMAR_PP_PRIVATE_REC_31_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_31_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_31_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_31_OVERLOAD(choice)                                                 \
    KOSHMAR_PP_PRIVATE_REC_31_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_31_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_31_##choice
#define KOSHMAR_PP_PRIVATE_REC_31_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_32
#define KOSHMAR_PP_PRIVATE_REC_31_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_32(...)                                                             \
    KOSHMAR_PP_PRIVATE_REC_32_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_32_GET_CHOICE(__VA_ARGS__))          \
    (KOSHMAR_PP_PRIVATE_REC_32_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_32_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_32_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_32_OVERLOAD(choice)                                                 \
    KOSHMAR_PP_PRIVATE_REC_32_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_32_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_32_##choice
#define KOSHMAR_PP_PRIVATE_REC_32_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_33
#define KOSHMAR_PP_PRIVATE_REC_32_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_33(...)                                                             \
    KOSHMAR_PP_PRIVATE_REC_33_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_33_GET_CHOICE(__VA_ARGS__))          \
    (KOSHMAR_PP_PRIVATE_REC_33_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_33_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_33_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_33_OVERLOAD(choice)                                                 \
    KOSHMAR_PP_PRIVATE_REC_33_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_33_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_33_##choice
#define KOSHMAR_PP_PRIVATE_REC_33_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_34
#define KOSHMAR_PP_PRIVATE_REC_33_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_34(...)                                                             \
    KOSHMAR_PP_PRIVATE_REC_34_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_34_GET_CHOICE(__VA_ARGS__))          \
    (KOSHMAR_PP_PRIVATE_REC_34_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_34_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_34_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_34_OVERLOAD(choice)                                                 \
    KOSHMAR_PP_PRIVATE_REC_34_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_34_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_34_##choice
#define KOSHMAR_PP_PRIVATE_REC_34_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_35
#define KOSHMAR_PP_PRIVATE_REC_34_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_35(...)                                                             \
    KOSHMAR_PP_PRIVATE_REC_35_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_35_GET_CHOICE(__VA_ARGS__))          \
    (KOSHMAR_PP_PRIVATE_REC_35_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_35_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_35_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_35_OVERLOAD(choice)                                                 \
    KOSHMAR_PP_PRIVATE_REC_35_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_35_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_35_##choice
#define KOSHMAR_PP_PRIVATE_REC_35_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_36
#define KOSHMAR_PP_PRIVATE_REC_35_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_36(...)                                                             \
    KOSHMAR_PP_PRIVATE_REC_36_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_36_GET_CHOICE(__VA_ARGS__))          \
    (KOSHMAR_PP_PRIVATE_REC_36_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_36_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_36_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_36_OVERLOAD(choice)                                                 \
    KOSHMAR_PP_PRIVATE_REC_36_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_36_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_36_##choice
#define KOSHMAR_PP_PRIVATE_REC_36_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_37
#define KOSHMAR_PP_PRIVATE_REC_36_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_37(...)                                                             \
    KOSHMAR_PP_PRIVATE_REC_37_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_37_GET_CHOICE(__VA_ARGS__))          \
    (KOSHMAR_PP_PRIVATE_REC_37_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_37_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_37_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_37_OVERLOAD(choice)                                                 \
    KOSHMAR_PP_PRIVATE_REC_37_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_37_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_37_##choice
#define KOSHMAR_PP_PRIVATE_REC_37_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_38
#define KOSHMAR_PP_PRIVATE_REC_37_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_38(...)                                                             \
    KOSHMAR_PP_PRIVATE_REC_38_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_38_GET_CHOICE(__VA_ARGS__))          \
    (KOSHMAR_PP_PRIVATE_REC_38_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_38_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_38_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_38_OVERLOAD(choice)                                                 \
    KOSHMAR_PP_PRIVATE_REC_38_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_38_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_38_##choice
#define KOSHMAR_PP_PRIVATE_REC_38_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_39
#define KOSHMAR_PP_PRIVATE_REC_38_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_39(...)                                                             \
    KOSHMAR_PP_PRIVATE_REC_39_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_39_GET_CHOICE(__VA_ARGS__))          \
    (KOSHMAR_PP_PRIVATE_REC_39_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_39_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_39_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_39_OVERLOAD(choice)                                                 \
    KOSHMAR_PP_PRIVATE_REC_39_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_39_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_39_##choice
#define KOSHMAR_PP_PRIVATE_REC_39_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_40
#define KOSHMAR_PP_PRIVATE_REC_39_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_40(...)                                                             \
    KOSHMAR_PP_PRIVATE_REC_40_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_40_GET_CHOICE(__VA_ARGS__))          \
    (KOSHMAR_PP_PRIVATE_REC_40_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_40_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_40_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_40_OVERLOAD(choice)                                                 \
    KOSHMAR_PP_PRIVATE_REC_40_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_40_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_40_##choice
#define KOSHMAR_PP_PRIVATE_REC_40_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_41
#define KOSHMAR_PP_PRIVATE_REC_40_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_41(...)                                                             \
    KOSHMAR_PP_PRIVATE_REC_41_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_41_GET_CHOICE(__VA_ARGS__))          \
    (KOSHMAR_PP_PRIVATE_REC_41_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_41_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_41_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_41_OVERLOAD(choice)                                                 \
    KOSHMAR_PP_PRIVATE_REC_41_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_41_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_41_##choice
#define KOSHMAR_PP_PRIVATE_REC_41_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_42
#define KOSHMAR_PP_PRIVATE_REC_41_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_42(...)                                                             \
    KOSHMAR_PP_PRIVATE_REC_42_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_42_GET_CHOICE(__VA_ARGS__))          \
    (KOSHMAR_PP_PRIVATE_REC_42_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_42_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_42_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_42_OVERLOAD(choice)                                                 \
    KOSHMAR_PP_PRIVATE_REC_42_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_42_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_42_##choice
#define KOSHMAR_PP_PRIVATE_REC_42_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_43
#define KOSHMAR_PP_PRIVATE_REC_42_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_43(...)                                                             \
    KOSHMAR_PP_PRIVATE_REC_43_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_43_GET_CHOICE(__VA_ARGS__))          \
    (KOSHMAR_PP_PRIVATE_REC_43_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_43_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_43_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_43_OVERLOAD(choice)                                                 \
    KOSHMAR_PP_PRIVATE_REC_43_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_43_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_43_##choice
#define KOSHMAR_PP_PRIVATE_REC_43_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_44
#define KOSHMAR_PP_PRIVATE_REC_43_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_44(...)                                                             \
    KOSHMAR_PP_PRIVATE_REC_44_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_44_GET_CHOICE(__VA_ARGS__))          \
    (KOSHMAR_PP_PRIVATE_REC_44_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_44_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_44_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_44_OVERLOAD(choice)                                                 \
    KOSHMAR_PP_PRIVATE_REC_44_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_44_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_44_##choice
#define KOSHMAR_PP_PRIVATE_REC_44_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_45
#define KOSHMAR_PP_PRIVATE_REC_44_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_45(...)                                                             \
    KOSHMAR_PP_PRIVATE_REC_45_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_45_GET_CHOICE(__VA_ARGS__))          \
    (KOSHMAR_PP_PRIVATE_REC_45_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_45_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_45_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_45_OVERLOAD(choice)                                                 \
    KOSHMAR_PP_PRIVATE_REC_45_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_45_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_45_##choice
#define KOSHMAR_PP_PRIVATE_REC_45_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_46
#define KOSHMAR_PP_PRIVATE_REC_45_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_46(...)                                                             \
    KOSHMAR_PP_PRIVATE_REC_46_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_46_GET_CHOICE(__VA_ARGS__))          \
    (KOSHMAR_PP_PRIVATE_REC_46_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_46_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_46_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_46_OVERLOAD(choice)                                                 \
    KOSHMAR_PP_PRIVATE_REC_46_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_46_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_46_##choice
#define KOSHMAR_PP_PRIVATE_REC_46_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_47
#define KOSHMAR_PP_PRIVATE_REC_46_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_47(...)                                                             \
    KOSHMAR_PP_PRIVATE_REC_47_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_47_GET_CHOICE(__VA_ARGS__))          \
    (KOSHMAR_PP_PRIVATE_REC_47_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_47_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_47_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_47_OVERLOAD(choice)                                                 \
    KOSHMAR_PP_PRIVATE_REC_47_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_47_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_47_##choice
#define KOSHMAR_PP_PRIVATE_REC_47_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_48
#define KOSHMAR_PP_PRIVATE_REC_47_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_48(...)                                                             \
    KOSHMAR_PP_PRIVATE_REC_48_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_48_GET_CHOICE(__VA_ARGS__))          \
    (KOSHMAR_PP_PRIVATE_REC_48_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_48_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_48_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_48_OVERLOAD(choice)                                                 \
    KOSHMAR_PP_PRIVATE_REC_48_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_48_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_48_##choice
#define KOSHMAR_PP_PRIVATE_REC_48_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_49
#define KOSHMAR_PP_PRIVATE_REC_48_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_49(...)                                                             \
    KOSHMAR_PP_PRIVATE_REC_49_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_49_GET_CHOICE(__VA_ARGS__))          \
    (KOSHMAR_PP_PRIVATE_REC_49_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_49_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_49_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_49_OVERLOAD(choice)                                                 \
    KOSHMAR_PP_PRIVATE_REC_49_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_49_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_49_##choice
#define KOSHMAR_PP_PRIVATE_REC_49_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_50
#define KOSHMAR_PP_PRIVATE_REC_49_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_50(...)                                                             \
    KOSHMAR_PP_PRIVATE_REC_50_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_50_GET_CHOICE(__VA_ARGS__))          \
    (KOSHMAR_PP_PRIVATE_REC_50_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_50_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_50_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_50_OVERLOAD(choice)                                                 \
    KOSHMAR_PP_PRIVATE_REC_50_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_50_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_50_##choice
#define KOSHMAR_PP_PRIVATE_REC_50_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_51
#define KOSHMAR_PP_PRIVATE_REC_50_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_51(...)                                                             \
    KOSHMAR_PP_PRIVATE_REC_51_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_51_GET_CHOICE(__VA_ARGS__))          \
    (KOSHMAR_PP_PRIVATE_REC_51_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_51_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_51_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_51_OVERLOAD(choice)                                                 \
    KOSHMAR_PP_PRIVATE_REC_51_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_51_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_51_##choice
#define KOSHMAR_PP_PRIVATE_REC_51_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_52
#define KOSHMAR_PP_PRIVATE_REC_51_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_52(...)                                                             \
    KOSHMAR_PP_PRIVATE_REC_52_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_52_GET_CHOICE(__VA_ARGS__))          \
    (KOSHMAR_PP_PRIVATE_REC_52_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_52_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_52_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_52_OVERLOAD(choice)                                                 \
    KOSHMAR_PP_PRIVATE_REC_52_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_52_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_52_##choice
#define KOSHMAR_PP_PRIVATE_REC_52_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_53
#define KOSHMAR_PP_PRIVATE_REC_52_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_53(...)                                                             \
    KOSHMAR_PP_PRIVATE_REC_53_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_53_GET_CHOICE(__VA_ARGS__))          \
    (KOSHMAR_PP_PRIVATE_REC_53_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_53_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_53_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_53_OVERLOAD(choice)                                                 \
    KOSHMAR_PP_PRIVATE_REC_53_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_53_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_53_##choice
#define KOSHMAR_PP_PRIVATE_REC_53_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_54
#define KOSHMAR_PP_PRIVATE_REC_53_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_54(...)                                                             \
    KOSHMAR_PP_PRIVATE_REC_54_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_54_GET_CHOICE(__VA_ARGS__))          \
    (KOSHMAR_PP_PRIVATE_REC_54_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_54_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_54_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_54_OVERLOAD(choice)                                                 \
    KOSHMAR_PP_PRIVATE_REC_54_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_54_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_54_##choice
#define KOSHMAR_PP_PRIVATE_REC_54_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_55
#define KOSHMAR_PP_PRIVATE_REC_54_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_55(...)                                                             \
    KOSHMAR_PP_PRIVATE_REC_55_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_55_GET_CHOICE(__VA_ARGS__))          \
    (KOSHMAR_PP_PRIVATE_REC_55_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_55_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_55_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_55_OVERLOAD(choice)                                                 \
    KOSHMAR_PP_PRIVATE_REC_55_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_55_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_55_##choice
#define KOSHMAR_PP_PRIVATE_REC_55_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_56
#define KOSHMAR_PP_PRIVATE_REC_55_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_56(...)                                                             \
    KOSHMAR_PP_PRIVATE_REC_56_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_56_GET_CHOICE(__VA_ARGS__))          \
    (KOSHMAR_PP_PRIVATE_REC_56_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_56_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_56_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_56_OVERLOAD(choice)                                                 \
    KOSHMAR_PP_PRIVATE_REC_56_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_56_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_56_##choice
#define KOSHMAR_PP_PRIVATE_REC_56_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_57
#define KOSHMAR_PP_PRIVATE_REC_56_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_57(...)                                                             \
    KOSHMAR_PP_PRIVATE_REC_57_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_57_GET_CHOICE(__VA_ARGS__))          \
    (KOSHMAR_PP_PRIVATE_REC_57_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_57_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_57_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_57_OVERLOAD(choice)                                                 \
    KOSHMAR_PP_PRIVATE_REC_57_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_57_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_57_##choice
#define KOSHMAR_PP_PRIVATE_REC_57_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_58
#define KOSHMAR_PP_PRIVATE_REC_57_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_58(...)                                                             \
    KOSHMAR_PP_PRIVATE_REC_58_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_58_GET_CHOICE(__VA_ARGS__))          \
    (KOSHMAR_PP_PRIVATE_REC_58_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_58_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_58_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_58_OVERLOAD(choice)                                                 \
    KOSHMAR_PP_PRIVATE_REC_58_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_58_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_58_##choice
#define KOSHMAR_PP_PRIVATE_REC_58_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_59
#define KOSHMAR_PP_PRIVATE_REC_58_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_59(...)                                                             \
    KOSHMAR_PP_PRIVATE_REC_59_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_59_GET_CHOICE(__VA_ARGS__))          \
    (KOSHMAR_PP_PRIVATE_REC_59_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_59_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_59_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_59_OVERLOAD(choice)                                                 \
    KOSHMAR_PP_PRIVATE_REC_59_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_59_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_59_##choice
#define KOSHMAR_PP_PRIVATE_REC_59_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_60
#define KOSHMAR_PP_PRIVATE_REC_59_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_60(...)                                                             \
    KOSHMAR_PP_PRIVATE_REC_60_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_60_GET_CHOICE(__VA_ARGS__))          \
    (KOSHMAR_PP_PRIVATE_REC_60_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_60_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_60_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_60_OVERLOAD(choice)                                                 \
    KOSHMAR_PP_PRIVATE_REC_60_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_60_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_60_##choice
#define KOSHMAR_PP_PRIVATE_REC_60_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_61
#define KOSHMAR_PP_PRIVATE_REC_60_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_61(...)                                                             \
    KOSHMAR_PP_PRIVATE_REC_61_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_61_GET_CHOICE(__VA_ARGS__))          \
    (KOSHMAR_PP_PRIVATE_REC_61_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_61_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_61_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_61_OVERLOAD(choice)                                                 \
    KOSHMAR_PP_PRIVATE_REC_61_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_61_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_61_##choice
#define KOSHMAR_PP_PRIVATE_REC_61_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_62
#define KOSHMAR_PP_PRIVATE_REC_61_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_62(...)                                                             \
    KOSHMAR_PP_PRIVATE_REC_62_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_62_GET_CHOICE(__VA_ARGS__))          \
    (KOSHMAR_PP_PRIVATE_REC_62_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_62_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_62_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_62_OVERLOAD(choice)                                                 \
    KOSHMAR_PP_PRIVATE_REC_62_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_62_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_62_##choice
#define KOSHMAR_PP_PRIVATE_REC_62_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_63
#define KOSHMAR_PP_PRIVATE_REC_62_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_63(...)                                                             \
    KOSHMAR_PP_PRIVATE_REC_63_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_63_GET_CHOICE(__VA_ARGS__))          \
    (KOSHMAR_PP_PRIVATE_REC_63_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_63_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_63_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_63_OVERLOAD(choice)                                                 \
    KOSHMAR_PP_PRIVATE_REC_63_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_63_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_63_##choice
#define KOSHMAR_PP_PRIVATE_REC_63_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_64
#define KOSHMAR_PP_PRIVATE_REC_63_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_64(...)                                                             \
    KOSHMAR_PP_PRIVATE_REC_64_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_64_GET_CHOICE(__VA_ARGS__))          \
    (KOSHMAR_PP_PRIVATE_REC_64_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_64_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_64_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_64_OVERLOAD(choice)                                                 \
    KOSHMAR_PP_PRIVATE_REC_64_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_64_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_64_##choice
#define KOSHMAR_PP_PRIVATE_REC_64_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_65
#define KOSHMAR_PP_PRIVATE_REC_64_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_65(...)                                                             \
    KOSHMAR_PP_PRIVATE_REC_65_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_65_GET_CHOICE(__VA_ARGS__))          \
    (KOSHMAR_PP_PRIVATE_REC_65_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_65_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_65_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_65_OVERLOAD(choice)                                                 \
    KOSHMAR_PP_PRIVATE_REC_65_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_65_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_65_##choice
#define KOSHMAR_PP_PRIVATE_REC_65_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_66
#define KOSHMAR_PP_PRIVATE_REC_65_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_66(...)                                                             \
    KOSHMAR_PP_PRIVATE_REC_66_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_66_GET_CHOICE(__VA_ARGS__))          \
    (KOSHMAR_PP_PRIVATE_REC_66_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_66_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_66_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_66_OVERLOAD(choice)                                                 \
    KOSHMAR_PP_PRIVATE_REC_66_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_66_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_66_##choice
#define KOSHMAR_PP_PRIVATE_REC_66_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_67
#define KOSHMAR_PP_PRIVATE_REC_66_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_67(...)                                                             \
    KOSHMAR_PP_PRIVATE_REC_67_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_67_GET_CHOICE(__VA_ARGS__))          \
    (KOSHMAR_PP_PRIVATE_REC_67_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_67_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_67_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_67_OVERLOAD(choice)                                                 \
    KOSHMAR_PP_PRIVATE_REC_67_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_67_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_67_##choice
#define KOSHMAR_PP_PRIVATE_REC_67_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_68
#define KOSHMAR_PP_PRIVATE_REC_67_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_68(...)                                                             \
    KOSHMAR_PP_PRIVATE_REC_68_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_68_GET_CHOICE(__VA_ARGS__))          \
    (KOSHMAR_PP_PRIVATE_REC_68_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_68_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_68_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_68_OVERLOAD(choice)                                                 \
    KOSHMAR_PP_PRIVATE_REC_68_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_68_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_68_##choice
#define KOSHMAR_PP_PRIVATE_REC_68_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_69
#define KOSHMAR_PP_PRIVATE_REC_68_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_69(...)                                                             \
    KOSHMAR_PP_PRIVATE_REC_69_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_69_GET_CHOICE(__VA_ARGS__))          \
    (KOSHMAR_PP_PRIVATE_REC_69_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_69_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_69_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_69_OVERLOAD(choice)                                                 \
    KOSHMAR_PP_PRIVATE_REC_69_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_69_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_69_##choice
#define KOSHMAR_PP_PRIVATE_REC_69_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_70
#define KOSHMAR_PP_PRIVATE_REC_69_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_70(...)                                                             \
    KOSHMAR_PP_PRIVATE_REC_70_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_70_GET_CHOICE(__VA_ARGS__))          \
    (KOSHMAR_PP_PRIVATE_REC_70_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_70_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_70_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_70_OVERLOAD(choice)                                                 \
    KOSHMAR_PP_PRIVATE_REC_70_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_70_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_70_##choice
#define KOSHMAR_PP_PRIVATE_REC_70_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_71
#define KOSHMAR_PP_PRIVATE_REC_70_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_71(...)                                                             \
    KOSHMAR_PP_PRIVATE_REC_71_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_71_GET_CHOICE(__VA_ARGS__))          \
    (KOSHMAR_PP_PRIVATE_REC_71_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_71_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_71_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_71_OVERLOAD(choice)                                                 \
    KOSHMAR_PP_PRIVATE_REC_71_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_71_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_71_##choice
#define KOSHMAR_PP_PRIVATE_REC_71_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_72
#define KOSHMAR_PP_PRIVATE_REC_71_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_72(...)                                                             \
    KOSHMAR_PP_PRIVATE_REC_72_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_72_GET_CHOICE(__VA_ARGS__))          \
    (KOSHMAR_PP_PRIVATE_REC_72_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_72_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_72_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_72_OVERLOAD(choice)                                                 \
    KOSHMAR_PP_PRIVATE_REC_72_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_72_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_72_##choice
#define KOSHMAR_PP_PRIVATE_REC_72_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_73
#define KOSHMAR_PP_PRIVATE_REC_72_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_73(...)                                                             \
    KOSHMAR_PP_PRIVATE_REC_73_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_73_GET_CHOICE(__VA_ARGS__))          \
    (KOSHMAR_PP_PRIVATE_REC_73_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_73_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_73_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_73_OVERLOAD(choice)                                                 \
    KOSHMAR_PP_PRIVATE_REC_73_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_73_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_73_##choice
#define KOSHMAR_PP_PRIVATE_REC_73_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_74
#define KOSHMAR_PP_PRIVATE_REC_73_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_74(...)                                                             \
    KOSHMAR_PP_PRIVATE_REC_74_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_74_GET_CHOICE(__VA_ARGS__))          \
    (KOSHMAR_PP_PRIVATE_REC_74_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_74_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_74_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_74_OVERLOAD(choice)                                                 \
    KOSHMAR_PP_PRIVATE_REC_74_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_74_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_74_##choice
#define KOSHMAR_PP_PRIVATE_REC_74_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_75
#define KOSHMAR_PP_PRIVATE_REC_74_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_75(...)                                                             \
    KOSHMAR_PP_PRIVATE_REC_75_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_75_GET_CHOICE(__VA_ARGS__))          \
    (KOSHMAR_PP_PRIVATE_REC_75_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_75_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_75_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_75_OVERLOAD(choice)                                                 \
    KOSHMAR_PP_PRIVATE_REC_75_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_75_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_75_##choice
#define KOSHMAR_PP_PRIVATE_REC_75_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_76
#define KOSHMAR_PP_PRIVATE_REC_75_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_76(...)                                                             \
    KOSHMAR_PP_PRIVATE_REC_76_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_76_GET_CHOICE(__VA_ARGS__))          \
    (KOSHMAR_PP_PRIVATE_REC_76_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_76_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_76_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_76_OVERLOAD(choice)                                                 \
    KOSHMAR_PP_PRIVATE_REC_76_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_76_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_76_##choice
#define KOSHMAR_PP_PRIVATE_REC_76_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_77
#define KOSHMAR_PP_PRIVATE_REC_76_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_77(...)                                                             \
    KOSHMAR_PP_PRIVATE_REC_77_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_77_GET_CHOICE(__VA_ARGS__))          \
    (KOSHMAR_PP_PRIVATE_REC_77_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_77_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_77_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_77_OVERLOAD(choice)                                                 \
    KOSHMAR_PP_PRIVATE_REC_77_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_77_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_77_##choice
#define KOSHMAR_PP_PRIVATE_REC_77_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_78
#define KOSHMAR_PP_PRIVATE_REC_77_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_78(...)                                                             \
    KOSHMAR_PP_PRIVATE_REC_78_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_78_GET_CHOICE(__VA_ARGS__))          \
    (KOSHMAR_PP_PRIVATE_REC_78_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_78_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_78_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_78_OVERLOAD(choice)                                                 \
    KOSHMAR_PP_PRIVATE_REC_78_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_78_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_78_##choice
#define KOSHMAR_PP_PRIVATE_REC_78_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_79
#define KOSHMAR_PP_PRIVATE_REC_78_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_79(...)                                                             \
    KOSHMAR_PP_PRIVATE_REC_79_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_79_GET_CHOICE(__VA_ARGS__))          \
    (KOSHMAR_PP_PRIVATE_REC_79_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_79_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_79_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_79_OVERLOAD(choice)                                                 \
    KOSHMAR_PP_PRIVATE_REC_79_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_79_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_79_##choice
#define KOSHMAR_PP_PRIVATE_REC_79_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_80
#define KOSHMAR_PP_PRIVATE_REC_79_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_80(...)                                                             \
    KOSHMAR_PP_PRIVATE_REC_80_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_80_GET_CHOICE(__VA_ARGS__))          \
    (KOSHMAR_PP_PRIVATE_REC_80_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_80_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_80_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_80_OVERLOAD(choice)                                                 \
    KOSHMAR_PP_PRIVATE_REC_80_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_80_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_80_##choice
#define KOSHMAR_PP_PRIVATE_REC_80_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_81
#define KOSHMAR_PP_PRIVATE_REC_80_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_81(...)                                                             \
    KOSHMAR_PP_PRIVATE_REC_81_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_81_GET_CHOICE(__VA_ARGS__))          \
    (KOSHMAR_PP_PRIVATE_REC_81_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_81_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_81_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_81_OVERLOAD(choice)                                                 \
    KOSHMAR_PP_PRIVATE_REC_81_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_81_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_81_##choice
#define KOSHMAR_PP_PRIVATE_REC_81_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_82
#define KOSHMAR_PP_PRIVATE_REC_81_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_82(...)                                                             \
    KOSHMAR_PP_PRIVATE_REC_82_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_82_GET_CHOICE(__VA_ARGS__))          \
    (KOSHMAR_PP_PRIVATE_REC_82_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_82_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_82_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_82_OVERLOAD(choice)                                                 \
    KOSHMAR_PP_PRIVATE_REC_82_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_82_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_82_##choice
#define KOSHMAR_PP_PRIVATE_REC_82_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_83
#define KOSHMAR_PP_PRIVATE_REC_82_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_83(...)                                                             \
    KOSHMAR_PP_PRIVATE_REC_83_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_83_GET_CHOICE(__VA_ARGS__))          \
    (KOSHMAR_PP_PRIVATE_REC_83_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_83_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_83_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_83_OVERLOAD(choice)                                                 \
    KOSHMAR_PP_PRIVATE_REC_83_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_83_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_83_##choice
#define KOSHMAR_PP_PRIVATE_REC_83_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_84
#define KOSHMAR_PP_PRIVATE_REC_83_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_84(...)                                                             \
    KOSHMAR_PP_PRIVATE_REC_84_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_84_GET_CHOICE(__VA_ARGS__))          \
    (KOSHMAR_PP_PRIVATE_REC_84_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_84_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_84_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_84_OVERLOAD(choice)                                                 \
    KOSHMAR_PP_PRIVATE_REC_84_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_84_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_84_##choice
#define KOSHMAR_PP_PRIVATE_REC_84_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_85
#define KOSHMAR_PP_PRIVATE_REC_84_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_85(...)                                                             \
    KOSHMAR_PP_PRIVATE_REC_85_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_85_GET_CHOICE(__VA_ARGS__))          \
    (KOSHMAR_PP_PRIVATE_REC_85_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_85_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_85_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_85_OVERLOAD(choice)                                                 \
    KOSHMAR_PP_PRIVATE_REC_85_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_85_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_85_##choice
#define KOSHMAR_PP_PRIVATE_REC_85_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_86
#define KOSHMAR_PP_PRIVATE_REC_85_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_86(...)                                                             \
    KOSHMAR_PP_PRIVATE_REC_86_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_86_GET_CHOICE(__VA_ARGS__))          \
    (KOSHMAR_PP_PRIVATE_REC_86_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_86_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_86_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_86_OVERLOAD(choice)                                                 \
    KOSHMAR_PP_PRIVATE_REC_86_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_86_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_86_##choice
#define KOSHMAR_PP_PRIVATE_REC_86_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_87
#define KOSHMAR_PP_PRIVATE_REC_86_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_87(...)                                                             \
    KOSHMAR_PP_PRIVATE_REC_87_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_87_GET_CHOICE(__VA_ARGS__))          \
    (KOSHMAR_PP_PRIVATE_REC_87_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_87_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_87_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_87_OVERLOAD(choice)                                                 \
    KOSHMAR_PP_PRIVATE_REC_87_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_87_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_87_##choice
#define KOSHMAR_PP_PRIVATE_REC_87_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_88
#define KOSHMAR_PP_PRIVATE_REC_87_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_88(...)                                                             \
    KOSHMAR_PP_PRIVATE_REC_88_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_88_GET_CHOICE(__VA_ARGS__))          \
    (KOSHMAR_PP_PRIVATE_REC_88_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_88_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_88_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_88_OVERLOAD(choice)                                                 \
    KOSHMAR_PP_PRIVATE_REC_88_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_88_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_88_##choice
#define KOSHMAR_PP_PRIVATE_REC_88_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_89
#define KOSHMAR_PP_PRIVATE_REC_88_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_89(...)                                                             \
    KOSHMAR_PP_PRIVATE_REC_89_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_89_GET_CHOICE(__VA_ARGS__))          \
    (KOSHMAR_PP_PRIVATE_REC_89_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_89_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_89_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_89_OVERLOAD(choice)                                                 \
    KOSHMAR_PP_PRIVATE_REC_89_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_89_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_89_##choice
#define KOSHMAR_PP_PRIVATE_REC_89_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_90
#define KOSHMAR_PP_PRIVATE_REC_89_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_90(...)                                                             \
    KOSHMAR_PP_PRIVATE_REC_90_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_90_GET_CHOICE(__VA_ARGS__))          \
    (KOSHMAR_PP_PRIVATE_REC_90_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_90_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_90_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_90_OVERLOAD(choice)                                                 \
    KOSHMAR_PP_PRIVATE_REC_90_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_90_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_90_##choice
#define KOSHMAR_PP_PRIVATE_REC_90_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_91
#define KOSHMAR_PP_PRIVATE_REC_90_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_91(...)                                                             \
    KOSHMAR_PP_PRIVATE_REC_91_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_91_GET_CHOICE(__VA_ARGS__))          \
    (KOSHMAR_PP_PRIVATE_REC_91_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_91_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_91_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_91_OVERLOAD(choice)                                                 \
    KOSHMAR_PP_PRIVATE_REC_91_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_91_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_91_##choice
#define KOSHMAR_PP_PRIVATE_REC_91_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_92
#define KOSHMAR_PP_PRIVATE_REC_91_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_92(...)                                                             \
    KOSHMAR_PP_PRIVATE_REC_92_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_92_GET_CHOICE(__VA_ARGS__))          \
    (KOSHMAR_PP_PRIVATE_REC_92_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_92_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_92_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_92_OVERLOAD(choice)                                                 \
    KOSHMAR_PP_PRIVATE_REC_92_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_92_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_92_##choice
#define KOSHMAR_PP_PRIVATE_REC_92_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_93
#define KOSHMAR_PP_PRIVATE_REC_92_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_93(...)                                                             \
    KOSHMAR_PP_PRIVATE_REC_93_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_93_GET_CHOICE(__VA_ARGS__))          \
    (KOSHMAR_PP_PRIVATE_REC_93_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_93_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_93_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_93_OVERLOAD(choice)                                                 \
    KOSHMAR_PP_PRIVATE_REC_93_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_93_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_93_##choice
#define KOSHMAR_PP_PRIVATE_REC_93_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_94
#define KOSHMAR_PP_PRIVATE_REC_93_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_94(...)                                                             \
    KOSHMAR_PP_PRIVATE_REC_94_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_94_GET_CHOICE(__VA_ARGS__))          \
    (KOSHMAR_PP_PRIVATE_REC_94_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_94_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_94_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_94_OVERLOAD(choice)                                                 \
    KOSHMAR_PP_PRIVATE_REC_94_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_94_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_94_##choice
#define KOSHMAR_PP_PRIVATE_REC_94_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_95
#define KOSHMAR_PP_PRIVATE_REC_94_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_95(...)                                                             \
    KOSHMAR_PP_PRIVATE_REC_95_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_95_GET_CHOICE(__VA_ARGS__))          \
    (KOSHMAR_PP_PRIVATE_REC_95_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_95_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_95_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_95_OVERLOAD(choice)                                                 \
    KOSHMAR_PP_PRIVATE_REC_95_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_95_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_95_##choice
#define KOSHMAR_PP_PRIVATE_REC_95_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_96
#define KOSHMAR_PP_PRIVATE_REC_95_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_96(...)                                                             \
    KOSHMAR_PP_PRIVATE_REC_96_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_96_GET_CHOICE(__VA_ARGS__))          \
    (KOSHMAR_PP_PRIVATE_REC_96_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_96_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_96_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_96_OVERLOAD(choice)                                                 \
    KOSHMAR_PP_PRIVATE_REC_96_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_96_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_96_##choice
#define KOSHMAR_PP_PRIVATE_REC_96_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_97
#define KOSHMAR_PP_PRIVATE_REC_96_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_97(...)                                                             \
    KOSHMAR_PP_PRIVATE_REC_97_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_97_GET_CHOICE(__VA_ARGS__))          \
    (KOSHMAR_PP_PRIVATE_REC_97_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_97_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_97_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_97_OVERLOAD(choice)                                                 \
    KOSHMAR_PP_PRIVATE_REC_97_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_97_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_97_##choice
#define KOSHMAR_PP_PRIVATE_REC_97_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_98
#define KOSHMAR_PP_PRIVATE_REC_97_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_98(...)                                                             \
    KOSHMAR_PP_PRIVATE_REC_98_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_98_GET_CHOICE(__VA_ARGS__))          \
    (KOSHMAR_PP_PRIVATE_REC_98_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_98_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_98_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_98_OVERLOAD(choice)                                                 \
    KOSHMAR_PP_PRIVATE_REC_98_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_98_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_98_##choice
#define KOSHMAR_PP_PRIVATE_REC_98_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_99
#define KOSHMAR_PP_PRIVATE_REC_98_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_99(...)                                                             \
    KOSHMAR_PP_PRIVATE_REC_99_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_99_GET_CHOICE(__VA_ARGS__))          \
    (KOSHMAR_PP_PRIVATE_REC_99_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_99_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_99_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_99_OVERLOAD(choice)                                                 \
    KOSHMAR_PP_PRIVATE_REC_99_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_99_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_99_##choice
#define KOSHMAR_PP_PRIVATE_REC_99_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_100
#define KOSHMAR_PP_PRIVATE_REC_99_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_100(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_100_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_100_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_100_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_100_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_100_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_100_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_100_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_100_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_100_##choice
#define KOSHMAR_PP_PRIVATE_REC_100_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_101
#define KOSHMAR_PP_PRIVATE_REC_100_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_101(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_101_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_101_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_101_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_101_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_101_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_101_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_101_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_101_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_101_##choice
#define KOSHMAR_PP_PRIVATE_REC_101_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_102
#define KOSHMAR_PP_PRIVATE_REC_101_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_102(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_102_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_102_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_102_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_102_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_102_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_102_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_102_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_102_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_102_##choice
#define KOSHMAR_PP_PRIVATE_REC_102_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_103
#define KOSHMAR_PP_PRIVATE_REC_102_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_103(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_103_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_103_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_103_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_103_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_103_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_103_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_103_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_103_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_103_##choice
#define KOSHMAR_PP_PRIVATE_REC_103_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_104
#define KOSHMAR_PP_PRIVATE_REC_103_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_104(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_104_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_104_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_104_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_104_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_104_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_104_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_104_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_104_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_104_##choice
#define KOSHMAR_PP_PRIVATE_REC_104_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_105
#define KOSHMAR_PP_PRIVATE_REC_104_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_105(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_105_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_105_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_105_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_105_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_105_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_105_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_105_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_105_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_105_##choice
#define KOSHMAR_PP_PRIVATE_REC_105_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_106
#define KOSHMAR_PP_PRIVATE_REC_105_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_106(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_106_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_106_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_106_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_106_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_106_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_106_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_106_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_106_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_106_##choice
#define KOSHMAR_PP_PRIVATE_REC_106_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_107
#define KOSHMAR_PP_PRIVATE_REC_106_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_107(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_107_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_107_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_107_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_107_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_107_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_107_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_107_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_107_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_107_##choice
#define KOSHMAR_PP_PRIVATE_REC_107_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_108
#define KOSHMAR_PP_PRIVATE_REC_107_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_108(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_108_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_108_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_108_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_108_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_108_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_108_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_108_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_108_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_108_##choice
#define KOSHMAR_PP_PRIVATE_REC_108_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_109
#define KOSHMAR_PP_PRIVATE_REC_108_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_109(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_109_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_109_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_109_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_109_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_109_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_109_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_109_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_109_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_109_##choice
#define KOSHMAR_PP_PRIVATE_REC_109_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_110
#define KOSHMAR_PP_PRIVATE_REC_109_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_110(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_110_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_110_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_110_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_110_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_110_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_110_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_110_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_110_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_110_##choice
#define KOSHMAR_PP_PRIVATE_REC_110_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_111
#define KOSHMAR_PP_PRIVATE_REC_110_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_111(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_111_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_111_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_111_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_111_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_111_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_111_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_111_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_111_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_111_##choice
#define KOSHMAR_PP_PRIVATE_REC_111_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_112
#define KOSHMAR_PP_PRIVATE_REC_111_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_112(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_112_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_112_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_112_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_112_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_112_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_112_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_112_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_112_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_112_##choice
#define KOSHMAR_PP_PRIVATE_REC_112_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_113
#define KOSHMAR_PP_PRIVATE_REC_112_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_113(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_113_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_113_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_113_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_113_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_113_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_113_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_113_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_113_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_113_##choice
#define KOSHMAR_PP_PRIVATE_REC_113_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_114
#define KOSHMAR_PP_PRIVATE_REC_113_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_114(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_114_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_114_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_114_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_114_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_114_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_114_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_114_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_114_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_114_##choice
#define KOSHMAR_PP_PRIVATE_REC_114_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_115
#define KOSHMAR_PP_PRIVATE_REC_114_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_115(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_115_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_115_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_115_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_115_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_115_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_115_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_115_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_115_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_115_##choice
#define KOSHMAR_PP_PRIVATE_REC_115_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_116
#define KOSHMAR_PP_PRIVATE_REC_115_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_116(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_116_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_116_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_116_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_116_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_116_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_116_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_116_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_116_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_116_##choice
#define KOSHMAR_PP_PRIVATE_REC_116_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_117
#define KOSHMAR_PP_PRIVATE_REC_116_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_117(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_117_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_117_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_117_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_117_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_117_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_117_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_117_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_117_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_117_##choice
#define KOSHMAR_PP_PRIVATE_REC_117_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_118
#define KOSHMAR_PP_PRIVATE_REC_117_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_118(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_118_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_118_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_118_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_118_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_118_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_118_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_118_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_118_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_118_##choice
#define KOSHMAR_PP_PRIVATE_REC_118_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_119
#define KOSHMAR_PP_PRIVATE_REC_118_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_119(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_119_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_119_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_119_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_119_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_119_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_119_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_119_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_119_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_119_##choice
#define KOSHMAR_PP_PRIVATE_REC_119_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_120
#define KOSHMAR_PP_PRIVATE_REC_119_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_120(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_120_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_120_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_120_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_120_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_120_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_120_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_120_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_120_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_120_##choice
#define KOSHMAR_PP_PRIVATE_REC_120_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_121
#define KOSHMAR_PP_PRIVATE_REC_120_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_121(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_121_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_121_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_121_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_121_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_121_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_121_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_121_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_121_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_121_##choice
#define KOSHMAR_PP_PRIVATE_REC_121_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_122
#define KOSHMAR_PP_PRIVATE_REC_121_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_122(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_122_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_122_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_122_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_122_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_122_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_122_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_122_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_122_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_122_##choice
#define KOSHMAR_PP_PRIVATE_REC_122_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_123
#define KOSHMAR_PP_PRIVATE_REC_122_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_123(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_123_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_123_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_123_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_123_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_123_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_123_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_123_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_123_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_123_##choice
#define KOSHMAR_PP_PRIVATE_REC_123_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_124
#define KOSHMAR_PP_PRIVATE_REC_123_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_124(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_124_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_124_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_124_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_124_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_124_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_124_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_124_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_124_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_124_##choice
#define KOSHMAR_PP_PRIVATE_REC_124_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_125
#define KOSHMAR_PP_PRIVATE_REC_124_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_125(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_125_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_125_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_125_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_125_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_125_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_125_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_125_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_125_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_125_##choice
#define KOSHMAR_PP_PRIVATE_REC_125_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_126
#define KOSHMAR_PP_PRIVATE_REC_125_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_126(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_126_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_126_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_126_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_126_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_126_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_126_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_126_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_126_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_126_##choice
#define KOSHMAR_PP_PRIVATE_REC_126_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_127
#define KOSHMAR_PP_PRIVATE_REC_126_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_127(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_127_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_127_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_127_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_127_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_127_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_127_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_127_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_127_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_127_##choice
#define KOSHMAR_PP_PRIVATE_REC_127_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_128
#define KOSHMAR_PP_PRIVATE_REC_127_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_128(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_128_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_128_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_128_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_128_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_128_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_128_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_128_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_128_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_128_##choice
#define KOSHMAR_PP_PRIVATE_REC_128_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_129
#define KOSHMAR_PP_PRIVATE_REC_128_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_129(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_129_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_129_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_129_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_129_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_129_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_129_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_129_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_129_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_129_##choice
#define KOSHMAR_PP_PRIVATE_REC_129_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_130
#define KOSHMAR_PP_PRIVATE_REC_129_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_130(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_130_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_130_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_130_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_130_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_130_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_130_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_130_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_130_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_130_##choice
#define KOSHMAR_PP_PRIVATE_REC_130_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_131
#define KOSHMAR_PP_PRIVATE_REC_130_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_131(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_131_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_131_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_131_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_131_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_131_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_131_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_131_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_131_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_131_##choice
#define KOSHMAR_PP_PRIVATE_REC_131_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_132
#define KOSHMAR_PP_PRIVATE_REC_131_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_132(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_132_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_132_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_132_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_132_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_132_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_132_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_132_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_132_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_132_##choice
#define KOSHMAR_PP_PRIVATE_REC_132_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_133
#define KOSHMAR_PP_PRIVATE_REC_132_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_133(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_133_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_133_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_133_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_133_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_133_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_133_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_133_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_133_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_133_##choice
#define KOSHMAR_PP_PRIVATE_REC_133_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_134
#define KOSHMAR_PP_PRIVATE_REC_133_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_134(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_134_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_134_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_134_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_134_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_134_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_134_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_134_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_134_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_134_##choice
#define KOSHMAR_PP_PRIVATE_REC_134_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_135
#define KOSHMAR_PP_PRIVATE_REC_134_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_135(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_135_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_135_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_135_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_135_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_135_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_135_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_135_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_135_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_135_##choice
#define KOSHMAR_PP_PRIVATE_REC_135_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_136
#define KOSHMAR_PP_PRIVATE_REC_135_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_136(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_136_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_136_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_136_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_136_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_136_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_136_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_136_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_136_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_136_##choice
#define KOSHMAR_PP_PRIVATE_REC_136_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_137
#define KOSHMAR_PP_PRIVATE_REC_136_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_137(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_137_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_137_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_137_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_137_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_137_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_137_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_137_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_137_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_137_##choice
#define KOSHMAR_PP_PRIVATE_REC_137_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_138
#define KOSHMAR_PP_PRIVATE_REC_137_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_138(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_138_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_138_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_138_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_138_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_138_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_138_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_138_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_138_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_138_##choice
#define KOSHMAR_PP_PRIVATE_REC_138_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_139
#define KOSHMAR_PP_PRIVATE_REC_138_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_139(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_139_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_139_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_139_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_139_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_139_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_139_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_139_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_139_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_139_##choice
#define KOSHMAR_PP_PRIVATE_REC_139_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_140
#define KOSHMAR_PP_PRIVATE_REC_139_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_140(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_140_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_140_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_140_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_140_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_140_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_140_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_140_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_140_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_140_##choice
#define KOSHMAR_PP_PRIVATE_REC_140_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_141
#define KOSHMAR_PP_PRIVATE_REC_140_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_141(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_141_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_141_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_141_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_141_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_141_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_141_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_141_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_141_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_141_##choice
#define KOSHMAR_PP_PRIVATE_REC_141_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_142
#define KOSHMAR_PP_PRIVATE_REC_141_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_142(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_142_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_142_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_142_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_142_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_142_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_142_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_142_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_142_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_142_##choice
#define KOSHMAR_PP_PRIVATE_REC_142_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_143
#define KOSHMAR_PP_PRIVATE_REC_142_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_143(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_143_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_143_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_143_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_143_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_143_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_143_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_143_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_143_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_143_##choice
#define KOSHMAR_PP_PRIVATE_REC_143_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_144
#define KOSHMAR_PP_PRIVATE_REC_143_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_144(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_144_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_144_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_144_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_144_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_144_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_144_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_144_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_144_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_144_##choice
#define KOSHMAR_PP_PRIVATE_REC_144_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_145
#define KOSHMAR_PP_PRIVATE_REC_144_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_145(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_145_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_145_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_145_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_145_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_145_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_145_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_145_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_145_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_145_##choice
#define KOSHMAR_PP_PRIVATE_REC_145_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_146
#define KOSHMAR_PP_PRIVATE_REC_145_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_146(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_146_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_146_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_146_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_146_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_146_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_146_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_146_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_146_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_146_##choice
#define KOSHMAR_PP_PRIVATE_REC_146_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_147
#define KOSHMAR_PP_PRIVATE_REC_146_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_147(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_147_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_147_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_147_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_147_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_147_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_147_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_147_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_147_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_147_##choice
#define KOSHMAR_PP_PRIVATE_REC_147_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_148
#define KOSHMAR_PP_PRIVATE_REC_147_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_148(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_148_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_148_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_148_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_148_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_148_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_148_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_148_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_148_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_148_##choice
#define KOSHMAR_PP_PRIVATE_REC_148_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_149
#define KOSHMAR_PP_PRIVATE_REC_148_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_149(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_149_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_149_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_149_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_149_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_149_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_149_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_149_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_149_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_149_##choice
#define KOSHMAR_PP_PRIVATE_REC_149_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_150
#define KOSHMAR_PP_PRIVATE_REC_149_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_150(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_150_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_150_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_150_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_150_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_150_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_150_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_150_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_150_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_150_##choice
#define KOSHMAR_PP_PRIVATE_REC_150_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_151
#define KOSHMAR_PP_PRIVATE_REC_150_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_151(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_151_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_151_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_151_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_151_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_151_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_151_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_151_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_151_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_151_##choice
#define KOSHMAR_PP_PRIVATE_REC_151_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_152
#define KOSHMAR_PP_PRIVATE_REC_151_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_152(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_152_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_152_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_152_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_152_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_152_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_152_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_152_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_152_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_152_##choice
#define KOSHMAR_PP_PRIVATE_REC_152_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_153
#define KOSHMAR_PP_PRIVATE_REC_152_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_153(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_153_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_153_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_153_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_153_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_153_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_153_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_153_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_153_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_153_##choice
#define KOSHMAR_PP_PRIVATE_REC_153_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_154
#define KOSHMAR_PP_PRIVATE_REC_153_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_154(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_154_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_154_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_154_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_154_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_154_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_154_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_154_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_154_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_154_##choice
#define KOSHMAR_PP_PRIVATE_REC_154_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_155
#define KOSHMAR_PP_PRIVATE_REC_154_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_155(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_155_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_155_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_155_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_155_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_155_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_155_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_155_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_155_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_155_##choice
#define KOSHMAR_PP_PRIVATE_REC_155_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_156
#define KOSHMAR_PP_PRIVATE_REC_155_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_156(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_156_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_156_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_156_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_156_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_156_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_156_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_156_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_156_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_156_##choice
#define KOSHMAR_PP_PRIVATE_REC_156_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_157
#define KOSHMAR_PP_PRIVATE_REC_156_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_157(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_157_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_157_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_157_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_157_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_157_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_157_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_157_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_157_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_157_##choice
#define KOSHMAR_PP_PRIVATE_REC_157_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_158
#define KOSHMAR_PP_PRIVATE_REC_157_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_158(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_158_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_158_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_158_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_158_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_158_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_158_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_158_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_158_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_158_##choice
#define KOSHMAR_PP_PRIVATE_REC_158_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_159
#define KOSHMAR_PP_PRIVATE_REC_158_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_159(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_159_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_159_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_159_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_159_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_159_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_159_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_159_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_159_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_159_##choice
#define KOSHMAR_PP_PRIVATE_REC_159_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_160
#define KOSHMAR_PP_PRIVATE_REC_159_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_160(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_160_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_160_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_160_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_160_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_160_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_160_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_160_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_160_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_160_##choice
#define KOSHMAR_PP_PRIVATE_REC_160_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_161
#define KOSHMAR_PP_PRIVATE_REC_160_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_161(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_161_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_161_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_161_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_161_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_161_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_161_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_161_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_161_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_161_##choice
#define KOSHMAR_PP_PRIVATE_REC_161_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_162
#define KOSHMAR_PP_PRIVATE_REC_161_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_162(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_162_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_162_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_162_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_162_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_162_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_162_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_162_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_162_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_162_##choice
#define KOSHMAR_PP_PRIVATE_REC_162_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_163
#define KOSHMAR_PP_PRIVATE_REC_162_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_163(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_163_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_163_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_163_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_163_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_163_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_163_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_163_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_163_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_163_##choice
#define KOSHMAR_PP_PRIVATE_REC_163_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_164
#define KOSHMAR_PP_PRIVATE_REC_163_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_164(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_164_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_164_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_164_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_164_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_164_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_164_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_164_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_164_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_164_##choice
#define KOSHMAR_PP_PRIVATE_REC_164_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_165
#define KOSHMAR_PP_PRIVATE_REC_164_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_165(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_165_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_165_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_165_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_165_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_165_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_165_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_165_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_165_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_165_##choice
#define KOSHMAR_PP_PRIVATE_REC_165_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_166
#define KOSHMAR_PP_PRIVATE_REC_165_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_166(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_166_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_166_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_166_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_166_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_166_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_166_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_166_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_166_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_166_##choice
#define KOSHMAR_PP_PRIVATE_REC_166_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_167
#define KOSHMAR_PP_PRIVATE_REC_166_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_167(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_167_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_167_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_167_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_167_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_167_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_167_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_167_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_167_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_167_##choice
#define KOSHMAR_PP_PRIVATE_REC_167_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_168
#define KOSHMAR_PP_PRIVATE_REC_167_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_168(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_168_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_168_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_168_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_168_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_168_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_168_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_168_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_168_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_168_##choice
#define KOSHMAR_PP_PRIVATE_REC_168_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_169
#define KOSHMAR_PP_PRIVATE_REC_168_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_169(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_169_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_169_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_169_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_169_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_169_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_169_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_169_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_169_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_169_##choice
#define KOSHMAR_PP_PRIVATE_REC_169_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_170
#define KOSHMAR_PP_PRIVATE_REC_169_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_170(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_170_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_170_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_170_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_170_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_170_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_170_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_170_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_170_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_170_##choice
#define KOSHMAR_PP_PRIVATE_REC_170_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_171
#define KOSHMAR_PP_PRIVATE_REC_170_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_171(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_171_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_171_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_171_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_171_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_171_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_171_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_171_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_171_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_171_##choice
#define KOSHMAR_PP_PRIVATE_REC_171_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_172
#define KOSHMAR_PP_PRIVATE_REC_171_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_172(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_172_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_172_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_172_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_172_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_172_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_172_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_172_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_172_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_172_##choice
#define KOSHMAR_PP_PRIVATE_REC_172_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_173
#define KOSHMAR_PP_PRIVATE_REC_172_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_173(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_173_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_173_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_173_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_173_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_173_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_173_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_173_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_173_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_173_##choice
#define KOSHMAR_PP_PRIVATE_REC_173_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_174
#define KOSHMAR_PP_PRIVATE_REC_173_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_174(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_174_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_174_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_174_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_174_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_174_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_174_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_174_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_174_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_174_##choice
#define KOSHMAR_PP_PRIVATE_REC_174_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_175
#define KOSHMAR_PP_PRIVATE_REC_174_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_175(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_175_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_175_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_175_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_175_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_175_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_175_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_175_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_175_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_175_##choice
#define KOSHMAR_PP_PRIVATE_REC_175_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_176
#define KOSHMAR_PP_PRIVATE_REC_175_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_176(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_176_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_176_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_176_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_176_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_176_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_176_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_176_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_176_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_176_##choice
#define KOSHMAR_PP_PRIVATE_REC_176_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_177
#define KOSHMAR_PP_PRIVATE_REC_176_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_177(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_177_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_177_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_177_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_177_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_177_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_177_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_177_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_177_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_177_##choice
#define KOSHMAR_PP_PRIVATE_REC_177_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_178
#define KOSHMAR_PP_PRIVATE_REC_177_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_178(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_178_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_178_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_178_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_178_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_178_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_178_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_178_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_178_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_178_##choice
#define KOSHMAR_PP_PRIVATE_REC_178_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_179
#define KOSHMAR_PP_PRIVATE_REC_178_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_179(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_179_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_179_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_179_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_179_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_179_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_179_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_179_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_179_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_179_##choice
#define KOSHMAR_PP_PRIVATE_REC_179_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_180
#define KOSHMAR_PP_PRIVATE_REC_179_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_180(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_180_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_180_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_180_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_180_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_180_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_180_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_180_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_180_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_180_##choice
#define KOSHMAR_PP_PRIVATE_REC_180_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_181
#define KOSHMAR_PP_PRIVATE_REC_180_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_181(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_181_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_181_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_181_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_181_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_181_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_181_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_181_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_181_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_181_##choice
#define KOSHMAR_PP_PRIVATE_REC_181_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_182
#define KOSHMAR_PP_PRIVATE_REC_181_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_182(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_182_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_182_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_182_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_182_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_182_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_182_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_182_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_182_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_182_##choice
#define KOSHMAR_PP_PRIVATE_REC_182_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_183
#define KOSHMAR_PP_PRIVATE_REC_182_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_183(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_183_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_183_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_183_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_183_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_183_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_183_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_183_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_183_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_183_##choice
#define KOSHMAR_PP_PRIVATE_REC_183_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_184
#define KOSHMAR_PP_PRIVATE_REC_183_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_184(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_184_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_184_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_184_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_184_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_184_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_184_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_184_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_184_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_184_##choice
#define KOSHMAR_PP_PRIVATE_REC_184_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_185
#define KOSHMAR_PP_PRIVATE_REC_184_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_185(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_185_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_185_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_185_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_185_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_185_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_185_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_185_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_185_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_185_##choice
#define KOSHMAR_PP_PRIVATE_REC_185_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_186
#define KOSHMAR_PP_PRIVATE_REC_185_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_186(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_186_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_186_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_186_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_186_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_186_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_186_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_186_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_186_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_186_##choice
#define KOSHMAR_PP_PRIVATE_REC_186_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_187
#define KOSHMAR_PP_PRIVATE_REC_186_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_187(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_187_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_187_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_187_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_187_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_187_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_187_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_187_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_187_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_187_##choice
#define KOSHMAR_PP_PRIVATE_REC_187_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_188
#define KOSHMAR_PP_PRIVATE_REC_187_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_188(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_188_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_188_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_188_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_188_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_188_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_188_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_188_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_188_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_188_##choice
#define KOSHMAR_PP_PRIVATE_REC_188_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_189
#define KOSHMAR_PP_PRIVATE_REC_188_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_189(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_189_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_189_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_189_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_189_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_189_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_189_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_189_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_189_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_189_##choice
#define KOSHMAR_PP_PRIVATE_REC_189_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_190
#define KOSHMAR_PP_PRIVATE_REC_189_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_190(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_190_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_190_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_190_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_190_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_190_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_190_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_190_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_190_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_190_##choice
#define KOSHMAR_PP_PRIVATE_REC_190_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_191
#define KOSHMAR_PP_PRIVATE_REC_190_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_191(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_191_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_191_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_191_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_191_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_191_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_191_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_191_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_191_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_191_##choice
#define KOSHMAR_PP_PRIVATE_REC_191_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_192
#define KOSHMAR_PP_PRIVATE_REC_191_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_192(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_192_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_192_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_192_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_192_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_192_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_192_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_192_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_192_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_192_##choice
#define KOSHMAR_PP_PRIVATE_REC_192_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_193
#define KOSHMAR_PP_PRIVATE_REC_192_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_193(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_193_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_193_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_193_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_193_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_193_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_193_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_193_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_193_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_193_##choice
#define KOSHMAR_PP_PRIVATE_REC_193_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_194
#define KOSHMAR_PP_PRIVATE_REC_193_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_194(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_194_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_194_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_194_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_194_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_194_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_194_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_194_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_194_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_194_##choice
#define KOSHMAR_PP_PRIVATE_REC_194_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_195
#define KOSHMAR_PP_PRIVATE_REC_194_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_195(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_195_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_195_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_195_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_195_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_195_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_195_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_195_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_195_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_195_##choice
#define KOSHMAR_PP_PRIVATE_REC_195_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_196
#define KOSHMAR_PP_PRIVATE_REC_195_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_196(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_196_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_196_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_196_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_196_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_196_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_196_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_196_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_196_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_196_##choice
#define KOSHMAR_PP_PRIVATE_REC_196_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_197
#define KOSHMAR_PP_PRIVATE_REC_196_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_197(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_197_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_197_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_197_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_197_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_197_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_197_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_197_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_197_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_197_##choice
#define KOSHMAR_PP_PRIVATE_REC_197_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_198
#define KOSHMAR_PP_PRIVATE_REC_197_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_198(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_198_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_198_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_198_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_198_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_198_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_198_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_198_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_198_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_198_##choice
#define KOSHMAR_PP_PRIVATE_REC_198_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_199
#define KOSHMAR_PP_PRIVATE_REC_198_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_199(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_199_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_199_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_199_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_199_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_199_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_199_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_199_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_199_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_199_##choice
#define KOSHMAR_PP_PRIVATE_REC_199_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_200
#define KOSHMAR_PP_PRIVATE_REC_199_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_200(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_200_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_200_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_200_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_200_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_200_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_200_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_200_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_200_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_200_##choice
#define KOSHMAR_PP_PRIVATE_REC_200_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_201
#define KOSHMAR_PP_PRIVATE_REC_200_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_201(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_201_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_201_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_201_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_201_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_201_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_201_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_201_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_201_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_201_##choice
#define KOSHMAR_PP_PRIVATE_REC_201_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_202
#define KOSHMAR_PP_PRIVATE_REC_201_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_202(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_202_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_202_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_202_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_202_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_202_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_202_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_202_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_202_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_202_##choice
#define KOSHMAR_PP_PRIVATE_REC_202_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_203
#define KOSHMAR_PP_PRIVATE_REC_202_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_203(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_203_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_203_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_203_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_203_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_203_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_203_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_203_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_203_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_203_##choice
#define KOSHMAR_PP_PRIVATE_REC_203_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_204
#define KOSHMAR_PP_PRIVATE_REC_203_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_204(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_204_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_204_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_204_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_204_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_204_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_204_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_204_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_204_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_204_##choice
#define KOSHMAR_PP_PRIVATE_REC_204_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_205
#define KOSHMAR_PP_PRIVATE_REC_204_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_205(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_205_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_205_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_205_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_205_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_205_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_205_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_205_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_205_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_205_##choice
#define KOSHMAR_PP_PRIVATE_REC_205_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_206
#define KOSHMAR_PP_PRIVATE_REC_205_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_206(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_206_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_206_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_206_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_206_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_206_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_206_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_206_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_206_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_206_##choice
#define KOSHMAR_PP_PRIVATE_REC_206_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_207
#define KOSHMAR_PP_PRIVATE_REC_206_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_207(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_207_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_207_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_207_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_207_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_207_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_207_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_207_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_207_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_207_##choice
#define KOSHMAR_PP_PRIVATE_REC_207_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_208
#define KOSHMAR_PP_PRIVATE_REC_207_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_208(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_208_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_208_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_208_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_208_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_208_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_208_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_208_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_208_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_208_##choice
#define KOSHMAR_PP_PRIVATE_REC_208_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_209
#define KOSHMAR_PP_PRIVATE_REC_208_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_209(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_209_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_209_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_209_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_209_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_209_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_209_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_209_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_209_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_209_##choice
#define KOSHMAR_PP_PRIVATE_REC_209_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_210
#define KOSHMAR_PP_PRIVATE_REC_209_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_210(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_210_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_210_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_210_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_210_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_210_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_210_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_210_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_210_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_210_##choice
#define KOSHMAR_PP_PRIVATE_REC_210_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_211
#define KOSHMAR_PP_PRIVATE_REC_210_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_211(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_211_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_211_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_211_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_211_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_211_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_211_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_211_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_211_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_211_##choice
#define KOSHMAR_PP_PRIVATE_REC_211_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_212
#define KOSHMAR_PP_PRIVATE_REC_211_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_212(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_212_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_212_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_212_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_212_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_212_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_212_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_212_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_212_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_212_##choice
#define KOSHMAR_PP_PRIVATE_REC_212_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_213
#define KOSHMAR_PP_PRIVATE_REC_212_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_213(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_213_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_213_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_213_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_213_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_213_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_213_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_213_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_213_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_213_##choice
#define KOSHMAR_PP_PRIVATE_REC_213_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_214
#define KOSHMAR_PP_PRIVATE_REC_213_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_214(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_214_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_214_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_214_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_214_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_214_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_214_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_214_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_214_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_214_##choice
#define KOSHMAR_PP_PRIVATE_REC_214_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_215
#define KOSHMAR_PP_PRIVATE_REC_214_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_215(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_215_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_215_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_215_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_215_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_215_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_215_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_215_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_215_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_215_##choice
#define KOSHMAR_PP_PRIVATE_REC_215_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_216
#define KOSHMAR_PP_PRIVATE_REC_215_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_216(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_216_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_216_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_216_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_216_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_216_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_216_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_216_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_216_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_216_##choice
#define KOSHMAR_PP_PRIVATE_REC_216_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_217
#define KOSHMAR_PP_PRIVATE_REC_216_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_217(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_217_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_217_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_217_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_217_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_217_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_217_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_217_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_217_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_217_##choice
#define KOSHMAR_PP_PRIVATE_REC_217_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_218
#define KOSHMAR_PP_PRIVATE_REC_217_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_218(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_218_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_218_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_218_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_218_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_218_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_218_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_218_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_218_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_218_##choice
#define KOSHMAR_PP_PRIVATE_REC_218_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_219
#define KOSHMAR_PP_PRIVATE_REC_218_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_219(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_219_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_219_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_219_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_219_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_219_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_219_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_219_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_219_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_219_##choice
#define KOSHMAR_PP_PRIVATE_REC_219_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_220
#define KOSHMAR_PP_PRIVATE_REC_219_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_220(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_220_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_220_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_220_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_220_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_220_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_220_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_220_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_220_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_220_##choice
#define KOSHMAR_PP_PRIVATE_REC_220_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_221
#define KOSHMAR_PP_PRIVATE_REC_220_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_221(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_221_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_221_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_221_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_221_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_221_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_221_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_221_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_221_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_221_##choice
#define KOSHMAR_PP_PRIVATE_REC_221_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_222
#define KOSHMAR_PP_PRIVATE_REC_221_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_222(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_222_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_222_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_222_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_222_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_222_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_222_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_222_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_222_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_222_##choice
#define KOSHMAR_PP_PRIVATE_REC_222_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_223
#define KOSHMAR_PP_PRIVATE_REC_222_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_223(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_223_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_223_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_223_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_223_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_223_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_223_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_223_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_223_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_223_##choice
#define KOSHMAR_PP_PRIVATE_REC_223_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_224
#define KOSHMAR_PP_PRIVATE_REC_223_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_224(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_224_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_224_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_224_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_224_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_224_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_224_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_224_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_224_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_224_##choice
#define KOSHMAR_PP_PRIVATE_REC_224_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_225
#define KOSHMAR_PP_PRIVATE_REC_224_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_225(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_225_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_225_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_225_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_225_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_225_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_225_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_225_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_225_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_225_##choice
#define KOSHMAR_PP_PRIVATE_REC_225_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_226
#define KOSHMAR_PP_PRIVATE_REC_225_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_226(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_226_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_226_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_226_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_226_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_226_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_226_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_226_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_226_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_226_##choice
#define KOSHMAR_PP_PRIVATE_REC_226_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_227
#define KOSHMAR_PP_PRIVATE_REC_226_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_227(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_227_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_227_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_227_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_227_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_227_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_227_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_227_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_227_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_227_##choice
#define KOSHMAR_PP_PRIVATE_REC_227_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_228
#define KOSHMAR_PP_PRIVATE_REC_227_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_228(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_228_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_228_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_228_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_228_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_228_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_228_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_228_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_228_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_228_##choice
#define KOSHMAR_PP_PRIVATE_REC_228_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_229
#define KOSHMAR_PP_PRIVATE_REC_228_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_229(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_229_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_229_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_229_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_229_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_229_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_229_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_229_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_229_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_229_##choice
#define KOSHMAR_PP_PRIVATE_REC_229_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_230
#define KOSHMAR_PP_PRIVATE_REC_229_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_230(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_230_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_230_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_230_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_230_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_230_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_230_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_230_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_230_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_230_##choice
#define KOSHMAR_PP_PRIVATE_REC_230_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_231
#define KOSHMAR_PP_PRIVATE_REC_230_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_231(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_231_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_231_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_231_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_231_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_231_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_231_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_231_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_231_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_231_##choice
#define KOSHMAR_PP_PRIVATE_REC_231_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_232
#define KOSHMAR_PP_PRIVATE_REC_231_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_232(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_232_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_232_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_232_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_232_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_232_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_232_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_232_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_232_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_232_##choice
#define KOSHMAR_PP_PRIVATE_REC_232_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_233
#define KOSHMAR_PP_PRIVATE_REC_232_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_233(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_233_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_233_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_233_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_233_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_233_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_233_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_233_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_233_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_233_##choice
#define KOSHMAR_PP_PRIVATE_REC_233_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_234
#define KOSHMAR_PP_PRIVATE_REC_233_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_234(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_234_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_234_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_234_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_234_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_234_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_234_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_234_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_234_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_234_##choice
#define KOSHMAR_PP_PRIVATE_REC_234_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_235
#define KOSHMAR_PP_PRIVATE_REC_234_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_235(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_235_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_235_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_235_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_235_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_235_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_235_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_235_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_235_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_235_##choice
#define KOSHMAR_PP_PRIVATE_REC_235_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_236
#define KOSHMAR_PP_PRIVATE_REC_235_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_236(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_236_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_236_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_236_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_236_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_236_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_236_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_236_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_236_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_236_##choice
#define KOSHMAR_PP_PRIVATE_REC_236_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_237
#define KOSHMAR_PP_PRIVATE_REC_236_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_237(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_237_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_237_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_237_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_237_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_237_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_237_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_237_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_237_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_237_##choice
#define KOSHMAR_PP_PRIVATE_REC_237_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_238
#define KOSHMAR_PP_PRIVATE_REC_237_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_238(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_238_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_238_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_238_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_238_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_238_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_238_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_238_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_238_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_238_##choice
#define KOSHMAR_PP_PRIVATE_REC_238_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_239
#define KOSHMAR_PP_PRIVATE_REC_238_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_239(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_239_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_239_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_239_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_239_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_239_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_239_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_239_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_239_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_239_##choice
#define KOSHMAR_PP_PRIVATE_REC_239_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_240
#define KOSHMAR_PP_PRIVATE_REC_239_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_240(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_240_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_240_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_240_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_240_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_240_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_240_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_240_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_240_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_240_##choice
#define KOSHMAR_PP_PRIVATE_REC_240_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_241
#define KOSHMAR_PP_PRIVATE_REC_240_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_241(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_241_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_241_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_241_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_241_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_241_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_241_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_241_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_241_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_241_##choice
#define KOSHMAR_PP_PRIVATE_REC_241_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_242
#define KOSHMAR_PP_PRIVATE_REC_241_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_242(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_242_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_242_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_242_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_242_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_242_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_242_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_242_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_242_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_242_##choice
#define KOSHMAR_PP_PRIVATE_REC_242_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_243
#define KOSHMAR_PP_PRIVATE_REC_242_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_243(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_243_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_243_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_243_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_243_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_243_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_243_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_243_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_243_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_243_##choice
#define KOSHMAR_PP_PRIVATE_REC_243_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_244
#define KOSHMAR_PP_PRIVATE_REC_243_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_244(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_244_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_244_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_244_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_244_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_244_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_244_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_244_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_244_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_244_##choice
#define KOSHMAR_PP_PRIVATE_REC_244_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_245
#define KOSHMAR_PP_PRIVATE_REC_244_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_245(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_245_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_245_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_245_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_245_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_245_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_245_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_245_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_245_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_245_##choice
#define KOSHMAR_PP_PRIVATE_REC_245_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_246
#define KOSHMAR_PP_PRIVATE_REC_245_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_246(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_246_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_246_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_246_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_246_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_246_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_246_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_246_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_246_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_246_##choice
#define KOSHMAR_PP_PRIVATE_REC_246_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_247
#define KOSHMAR_PP_PRIVATE_REC_246_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_247(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_247_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_247_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_247_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_247_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_247_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_247_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_247_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_247_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_247_##choice
#define KOSHMAR_PP_PRIVATE_REC_247_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_248
#define KOSHMAR_PP_PRIVATE_REC_247_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_248(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_248_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_248_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_248_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_248_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_248_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_248_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_248_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_248_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_248_##choice
#define KOSHMAR_PP_PRIVATE_REC_248_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_249
#define KOSHMAR_PP_PRIVATE_REC_248_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_249(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_249_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_249_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_249_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_249_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_249_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_249_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_249_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_249_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_249_##choice
#define KOSHMAR_PP_PRIVATE_REC_249_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_250
#define KOSHMAR_PP_PRIVATE_REC_249_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_250(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_250_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_250_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_250_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_250_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_250_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_250_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_250_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_250_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_250_##choice
#define KOSHMAR_PP_PRIVATE_REC_250_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_251
#define KOSHMAR_PP_PRIVATE_REC_250_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_251(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_251_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_251_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_251_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_251_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_251_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_251_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_251_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_251_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_251_##choice
#define KOSHMAR_PP_PRIVATE_REC_251_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_252
#define KOSHMAR_PP_PRIVATE_REC_251_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_252(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_252_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_252_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_252_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_252_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_252_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_252_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_252_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_252_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_252_##choice
#define KOSHMAR_PP_PRIVATE_REC_252_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_253
#define KOSHMAR_PP_PRIVATE_REC_252_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_253(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_253_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_253_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_253_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_253_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_253_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_253_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_253_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_253_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_253_##choice
#define KOSHMAR_PP_PRIVATE_REC_253_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_254
#define KOSHMAR_PP_PRIVATE_REC_253_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_254(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_254_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_254_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_254_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_254_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_254_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_254_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_254_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_254_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_254_##choice
#define KOSHMAR_PP_PRIVATE_REC_254_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_255
#define KOSHMAR_PP_PRIVATE_REC_254_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_255(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_255_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_255_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_255_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_255_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_255_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_255_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_255_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_255_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_255_##choice
#define KOSHMAR_PP_PRIVATE_REC_255_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_256
#define KOSHMAR_PP_PRIVATE_REC_255_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_256(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_256_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_256_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_256_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_256_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_256_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_256_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_256_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_256_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_256_##choice
#define KOSHMAR_PP_PRIVATE_REC_256_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_257
#define KOSHMAR_PP_PRIVATE_REC_256_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_257(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_257_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_257_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_257_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_257_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_257_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_257_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_257_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_257_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_257_##choice
#define KOSHMAR_PP_PRIVATE_REC_257_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_258
#define KOSHMAR_PP_PRIVATE_REC_257_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_258(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_258_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_258_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_258_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_258_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_258_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_258_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_258_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_258_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_258_##choice
#define KOSHMAR_PP_PRIVATE_REC_258_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_259
#define KOSHMAR_PP_PRIVATE_REC_258_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_259(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_259_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_259_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_259_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_259_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_259_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_259_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_259_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_259_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_259_##choice
#define KOSHMAR_PP_PRIVATE_REC_259_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_260
#define KOSHMAR_PP_PRIVATE_REC_259_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_260(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_260_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_260_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_260_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_260_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_260_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_260_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_260_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_260_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_260_##choice
#define KOSHMAR_PP_PRIVATE_REC_260_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_261
#define KOSHMAR_PP_PRIVATE_REC_260_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_261(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_261_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_261_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_261_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_261_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_261_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_261_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_261_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_261_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_261_##choice
#define KOSHMAR_PP_PRIVATE_REC_261_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_262
#define KOSHMAR_PP_PRIVATE_REC_261_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_262(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_262_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_262_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_262_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_262_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_262_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_262_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_262_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_262_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_262_##choice
#define KOSHMAR_PP_PRIVATE_REC_262_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_263
#define KOSHMAR_PP_PRIVATE_REC_262_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_263(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_263_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_263_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_263_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_263_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_263_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_263_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_263_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_263_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_263_##choice
#define KOSHMAR_PP_PRIVATE_REC_263_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_264
#define KOSHMAR_PP_PRIVATE_REC_263_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_264(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_264_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_264_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_264_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_264_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_264_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_264_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_264_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_264_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_264_##choice
#define KOSHMAR_PP_PRIVATE_REC_264_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_265
#define KOSHMAR_PP_PRIVATE_REC_264_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_265(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_265_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_265_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_265_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_265_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_265_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_265_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_265_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_265_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_265_##choice
#define KOSHMAR_PP_PRIVATE_REC_265_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_266
#define KOSHMAR_PP_PRIVATE_REC_265_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_266(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_266_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_266_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_266_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_266_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_266_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_266_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_266_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_266_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_266_##choice
#define KOSHMAR_PP_PRIVATE_REC_266_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_267
#define KOSHMAR_PP_PRIVATE_REC_266_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_267(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_267_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_267_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_267_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_267_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_267_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_267_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_267_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_267_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_267_##choice
#define KOSHMAR_PP_PRIVATE_REC_267_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_268
#define KOSHMAR_PP_PRIVATE_REC_267_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_268(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_268_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_268_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_268_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_268_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_268_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_268_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_268_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_268_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_268_##choice
#define KOSHMAR_PP_PRIVATE_REC_268_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_269
#define KOSHMAR_PP_PRIVATE_REC_268_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_269(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_269_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_269_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_269_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_269_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_269_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_269_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_269_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_269_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_269_##choice
#define KOSHMAR_PP_PRIVATE_REC_269_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_270
#define KOSHMAR_PP_PRIVATE_REC_269_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_270(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_270_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_270_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_270_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_270_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_270_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_270_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_270_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_270_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_270_##choice
#define KOSHMAR_PP_PRIVATE_REC_270_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_271
#define KOSHMAR_PP_PRIVATE_REC_270_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_271(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_271_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_271_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_271_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_271_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_271_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_271_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_271_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_271_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_271_##choice
#define KOSHMAR_PP_PRIVATE_REC_271_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_272
#define KOSHMAR_PP_PRIVATE_REC_271_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_272(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_272_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_272_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_272_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_272_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_272_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_272_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_272_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_272_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_272_##choice
#define KOSHMAR_PP_PRIVATE_REC_272_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_273
#define KOSHMAR_PP_PRIVATE_REC_272_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_273(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_273_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_273_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_273_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_273_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_273_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_273_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_273_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_273_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_273_##choice
#define KOSHMAR_PP_PRIVATE_REC_273_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_274
#define KOSHMAR_PP_PRIVATE_REC_273_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_274(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_274_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_274_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_274_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_274_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_274_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_274_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_274_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_274_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_274_##choice
#define KOSHMAR_PP_PRIVATE_REC_274_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_275
#define KOSHMAR_PP_PRIVATE_REC_274_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_275(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_275_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_275_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_275_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_275_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_275_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_275_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_275_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_275_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_275_##choice
#define KOSHMAR_PP_PRIVATE_REC_275_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_276
#define KOSHMAR_PP_PRIVATE_REC_275_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_276(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_276_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_276_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_276_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_276_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_276_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_276_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_276_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_276_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_276_##choice
#define KOSHMAR_PP_PRIVATE_REC_276_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_277
#define KOSHMAR_PP_PRIVATE_REC_276_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_277(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_277_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_277_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_277_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_277_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_277_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_277_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_277_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_277_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_277_##choice
#define KOSHMAR_PP_PRIVATE_REC_277_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_278
#define KOSHMAR_PP_PRIVATE_REC_277_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_278(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_278_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_278_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_278_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_278_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_278_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_278_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_278_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_278_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_278_##choice
#define KOSHMAR_PP_PRIVATE_REC_278_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_279
#define KOSHMAR_PP_PRIVATE_REC_278_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_279(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_279_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_279_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_279_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_279_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_279_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_279_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_279_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_279_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_279_##choice
#define KOSHMAR_PP_PRIVATE_REC_279_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_280
#define KOSHMAR_PP_PRIVATE_REC_279_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_280(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_280_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_280_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_280_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_280_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_280_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_280_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_280_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_280_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_280_##choice
#define KOSHMAR_PP_PRIVATE_REC_280_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_281
#define KOSHMAR_PP_PRIVATE_REC_280_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_281(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_281_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_281_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_281_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_281_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_281_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_281_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_281_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_281_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_281_##choice
#define KOSHMAR_PP_PRIVATE_REC_281_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_282
#define KOSHMAR_PP_PRIVATE_REC_281_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_282(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_282_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_282_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_282_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_282_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_282_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_282_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_282_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_282_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_282_##choice
#define KOSHMAR_PP_PRIVATE_REC_282_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_283
#define KOSHMAR_PP_PRIVATE_REC_282_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_283(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_283_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_283_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_283_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_283_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_283_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_283_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_283_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_283_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_283_##choice
#define KOSHMAR_PP_PRIVATE_REC_283_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_284
#define KOSHMAR_PP_PRIVATE_REC_283_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_284(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_284_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_284_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_284_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_284_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_284_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_284_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_284_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_284_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_284_##choice
#define KOSHMAR_PP_PRIVATE_REC_284_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_285
#define KOSHMAR_PP_PRIVATE_REC_284_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_285(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_285_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_285_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_285_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_285_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_285_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_285_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_285_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_285_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_285_##choice
#define KOSHMAR_PP_PRIVATE_REC_285_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_286
#define KOSHMAR_PP_PRIVATE_REC_285_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_286(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_286_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_286_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_286_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_286_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_286_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_286_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_286_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_286_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_286_##choice
#define KOSHMAR_PP_PRIVATE_REC_286_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_287
#define KOSHMAR_PP_PRIVATE_REC_286_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_287(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_287_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_287_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_287_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_287_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_287_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_287_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_287_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_287_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_287_##choice
#define KOSHMAR_PP_PRIVATE_REC_287_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_288
#define KOSHMAR_PP_PRIVATE_REC_287_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_288(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_288_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_288_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_288_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_288_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_288_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_288_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_288_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_288_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_288_##choice
#define KOSHMAR_PP_PRIVATE_REC_288_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_289
#define KOSHMAR_PP_PRIVATE_REC_288_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_289(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_289_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_289_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_289_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_289_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_289_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_289_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_289_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_289_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_289_##choice
#define KOSHMAR_PP_PRIVATE_REC_289_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_290
#define KOSHMAR_PP_PRIVATE_REC_289_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_290(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_290_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_290_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_290_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_290_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_290_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_290_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_290_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_290_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_290_##choice
#define KOSHMAR_PP_PRIVATE_REC_290_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_291
#define KOSHMAR_PP_PRIVATE_REC_290_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_291(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_291_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_291_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_291_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_291_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_291_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_291_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_291_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_291_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_291_##choice
#define KOSHMAR_PP_PRIVATE_REC_291_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_292
#define KOSHMAR_PP_PRIVATE_REC_291_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_292(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_292_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_292_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_292_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_292_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_292_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_292_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_292_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_292_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_292_##choice
#define KOSHMAR_PP_PRIVATE_REC_292_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_293
#define KOSHMAR_PP_PRIVATE_REC_292_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_293(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_293_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_293_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_293_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_293_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_293_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_293_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_293_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_293_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_293_##choice
#define KOSHMAR_PP_PRIVATE_REC_293_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_294
#define KOSHMAR_PP_PRIVATE_REC_293_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_294(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_294_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_294_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_294_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_294_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_294_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_294_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_294_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_294_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_294_##choice
#define KOSHMAR_PP_PRIVATE_REC_294_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_295
#define KOSHMAR_PP_PRIVATE_REC_294_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_295(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_295_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_295_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_295_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_295_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_295_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_295_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_295_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_295_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_295_##choice
#define KOSHMAR_PP_PRIVATE_REC_295_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_296
#define KOSHMAR_PP_PRIVATE_REC_295_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_296(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_296_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_296_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_296_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_296_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_296_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_296_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_296_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_296_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_296_##choice
#define KOSHMAR_PP_PRIVATE_REC_296_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_297
#define KOSHMAR_PP_PRIVATE_REC_296_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_297(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_297_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_297_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_297_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_297_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_297_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_297_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_297_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_297_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_297_##choice
#define KOSHMAR_PP_PRIVATE_REC_297_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_298
#define KOSHMAR_PP_PRIVATE_REC_297_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_298(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_298_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_298_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_298_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_298_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_298_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_298_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_298_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_298_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_298_##choice
#define KOSHMAR_PP_PRIVATE_REC_298_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_299
#define KOSHMAR_PP_PRIVATE_REC_298_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_299(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_299_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_299_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_299_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_299_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_299_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_299_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_299_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_299_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_299_##choice
#define KOSHMAR_PP_PRIVATE_REC_299_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_300
#define KOSHMAR_PP_PRIVATE_REC_299_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_300(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_300_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_300_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_300_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_300_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_300_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_300_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_300_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_300_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_300_##choice
#define KOSHMAR_PP_PRIVATE_REC_300_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_301
#define KOSHMAR_PP_PRIVATE_REC_300_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_301(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_301_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_301_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_301_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_301_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_301_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_301_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_301_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_301_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_301_##choice
#define KOSHMAR_PP_PRIVATE_REC_301_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_302
#define KOSHMAR_PP_PRIVATE_REC_301_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_302(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_302_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_302_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_302_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_302_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_302_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_302_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_302_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_302_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_302_##choice
#define KOSHMAR_PP_PRIVATE_REC_302_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_303
#define KOSHMAR_PP_PRIVATE_REC_302_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_303(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_303_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_303_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_303_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_303_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_303_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_303_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_303_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_303_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_303_##choice
#define KOSHMAR_PP_PRIVATE_REC_303_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_304
#define KOSHMAR_PP_PRIVATE_REC_303_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_304(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_304_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_304_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_304_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_304_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_304_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_304_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_304_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_304_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_304_##choice
#define KOSHMAR_PP_PRIVATE_REC_304_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_305
#define KOSHMAR_PP_PRIVATE_REC_304_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_305(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_305_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_305_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_305_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_305_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_305_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_305_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_305_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_305_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_305_##choice
#define KOSHMAR_PP_PRIVATE_REC_305_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_306
#define KOSHMAR_PP_PRIVATE_REC_305_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_306(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_306_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_306_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_306_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_306_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_306_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_306_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_306_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_306_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_306_##choice
#define KOSHMAR_PP_PRIVATE_REC_306_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_307
#define KOSHMAR_PP_PRIVATE_REC_306_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_307(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_307_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_307_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_307_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_307_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_307_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_307_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_307_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_307_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_307_##choice
#define KOSHMAR_PP_PRIVATE_REC_307_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_308
#define KOSHMAR_PP_PRIVATE_REC_307_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_308(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_308_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_308_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_308_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_308_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_308_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_308_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_308_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_308_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_308_##choice
#define KOSHMAR_PP_PRIVATE_REC_308_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_309
#define KOSHMAR_PP_PRIVATE_REC_308_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_309(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_309_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_309_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_309_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_309_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_309_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_309_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_309_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_309_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_309_##choice
#define KOSHMAR_PP_PRIVATE_REC_309_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_310
#define KOSHMAR_PP_PRIVATE_REC_309_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_310(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_310_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_310_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_310_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_310_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_310_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_310_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_310_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_310_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_310_##choice
#define KOSHMAR_PP_PRIVATE_REC_310_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_311
#define KOSHMAR_PP_PRIVATE_REC_310_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_311(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_311_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_311_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_311_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_311_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_311_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_311_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_311_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_311_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_311_##choice
#define KOSHMAR_PP_PRIVATE_REC_311_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_312
#define KOSHMAR_PP_PRIVATE_REC_311_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_312(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_312_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_312_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_312_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_312_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_312_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_312_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_312_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_312_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_312_##choice
#define KOSHMAR_PP_PRIVATE_REC_312_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_313
#define KOSHMAR_PP_PRIVATE_REC_312_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_313(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_313_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_313_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_313_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_313_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_313_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_313_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_313_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_313_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_313_##choice
#define KOSHMAR_PP_PRIVATE_REC_313_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_314
#define KOSHMAR_PP_PRIVATE_REC_313_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_314(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_314_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_314_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_314_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_314_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_314_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_314_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_314_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_314_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_314_##choice
#define KOSHMAR_PP_PRIVATE_REC_314_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_315
#define KOSHMAR_PP_PRIVATE_REC_314_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_315(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_315_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_315_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_315_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_315_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_315_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_315_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_315_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_315_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_315_##choice
#define KOSHMAR_PP_PRIVATE_REC_315_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_316
#define KOSHMAR_PP_PRIVATE_REC_315_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_316(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_316_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_316_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_316_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_316_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_316_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_316_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_316_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_316_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_316_##choice
#define KOSHMAR_PP_PRIVATE_REC_316_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_317
#define KOSHMAR_PP_PRIVATE_REC_316_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_317(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_317_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_317_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_317_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_317_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_317_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_317_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_317_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_317_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_317_##choice
#define KOSHMAR_PP_PRIVATE_REC_317_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_318
#define KOSHMAR_PP_PRIVATE_REC_317_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_318(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_318_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_318_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_318_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_318_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_318_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_318_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_318_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_318_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_318_##choice
#define KOSHMAR_PP_PRIVATE_REC_318_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_319
#define KOSHMAR_PP_PRIVATE_REC_318_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_319(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_319_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_319_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_319_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_319_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_319_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_319_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_319_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_319_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_319_##choice
#define KOSHMAR_PP_PRIVATE_REC_319_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_320
#define KOSHMAR_PP_PRIVATE_REC_319_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_320(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_320_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_320_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_320_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_320_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_320_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_320_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_320_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_320_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_320_##choice
#define KOSHMAR_PP_PRIVATE_REC_320_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_321
#define KOSHMAR_PP_PRIVATE_REC_320_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_321(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_321_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_321_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_321_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_321_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_321_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_321_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_321_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_321_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_321_##choice
#define KOSHMAR_PP_PRIVATE_REC_321_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_322
#define KOSHMAR_PP_PRIVATE_REC_321_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_322(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_322_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_322_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_322_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_322_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_322_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_322_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_322_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_322_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_322_##choice
#define KOSHMAR_PP_PRIVATE_REC_322_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_323
#define KOSHMAR_PP_PRIVATE_REC_322_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_323(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_323_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_323_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_323_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_323_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_323_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_323_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_323_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_323_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_323_##choice
#define KOSHMAR_PP_PRIVATE_REC_323_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_324
#define KOSHMAR_PP_PRIVATE_REC_323_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_324(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_324_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_324_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_324_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_324_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_324_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_324_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_324_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_324_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_324_##choice
#define KOSHMAR_PP_PRIVATE_REC_324_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_325
#define KOSHMAR_PP_PRIVATE_REC_324_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_325(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_325_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_325_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_325_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_325_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_325_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_325_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_325_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_325_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_325_##choice
#define KOSHMAR_PP_PRIVATE_REC_325_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_326
#define KOSHMAR_PP_PRIVATE_REC_325_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_326(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_326_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_326_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_326_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_326_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_326_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_326_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_326_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_326_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_326_##choice
#define KOSHMAR_PP_PRIVATE_REC_326_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_327
#define KOSHMAR_PP_PRIVATE_REC_326_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_327(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_327_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_327_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_327_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_327_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_327_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_327_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_327_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_327_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_327_##choice
#define KOSHMAR_PP_PRIVATE_REC_327_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_328
#define KOSHMAR_PP_PRIVATE_REC_327_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_328(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_328_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_328_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_328_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_328_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_328_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_328_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_328_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_328_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_328_##choice
#define KOSHMAR_PP_PRIVATE_REC_328_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_329
#define KOSHMAR_PP_PRIVATE_REC_328_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_329(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_329_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_329_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_329_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_329_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_329_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_329_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_329_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_329_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_329_##choice
#define KOSHMAR_PP_PRIVATE_REC_329_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_330
#define KOSHMAR_PP_PRIVATE_REC_329_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_330(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_330_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_330_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_330_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_330_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_330_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_330_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_330_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_330_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_330_##choice
#define KOSHMAR_PP_PRIVATE_REC_330_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_331
#define KOSHMAR_PP_PRIVATE_REC_330_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_331(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_331_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_331_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_331_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_331_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_331_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_331_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_331_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_331_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_331_##choice
#define KOSHMAR_PP_PRIVATE_REC_331_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_332
#define KOSHMAR_PP_PRIVATE_REC_331_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_332(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_332_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_332_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_332_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_332_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_332_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_332_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_332_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_332_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_332_##choice
#define KOSHMAR_PP_PRIVATE_REC_332_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_333
#define KOSHMAR_PP_PRIVATE_REC_332_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_333(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_333_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_333_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_333_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_333_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_333_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_333_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_333_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_333_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_333_##choice
#define KOSHMAR_PP_PRIVATE_REC_333_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_334
#define KOSHMAR_PP_PRIVATE_REC_333_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_334(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_334_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_334_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_334_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_334_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_334_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_334_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_334_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_334_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_334_##choice
#define KOSHMAR_PP_PRIVATE_REC_334_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_335
#define KOSHMAR_PP_PRIVATE_REC_334_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_335(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_335_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_335_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_335_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_335_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_335_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_335_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_335_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_335_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_335_##choice
#define KOSHMAR_PP_PRIVATE_REC_335_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_336
#define KOSHMAR_PP_PRIVATE_REC_335_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_336(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_336_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_336_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_336_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_336_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_336_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_336_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_336_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_336_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_336_##choice
#define KOSHMAR_PP_PRIVATE_REC_336_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_337
#define KOSHMAR_PP_PRIVATE_REC_336_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_337(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_337_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_337_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_337_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_337_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_337_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_337_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_337_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_337_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_337_##choice
#define KOSHMAR_PP_PRIVATE_REC_337_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_338
#define KOSHMAR_PP_PRIVATE_REC_337_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_338(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_338_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_338_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_338_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_338_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_338_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_338_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_338_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_338_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_338_##choice
#define KOSHMAR_PP_PRIVATE_REC_338_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_339
#define KOSHMAR_PP_PRIVATE_REC_338_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_339(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_339_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_339_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_339_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_339_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_339_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_339_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_339_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_339_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_339_##choice
#define KOSHMAR_PP_PRIVATE_REC_339_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_340
#define KOSHMAR_PP_PRIVATE_REC_339_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_340(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_340_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_340_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_340_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_340_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_340_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_340_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_340_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_340_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_340_##choice
#define KOSHMAR_PP_PRIVATE_REC_340_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_341
#define KOSHMAR_PP_PRIVATE_REC_340_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_341(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_341_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_341_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_341_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_341_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_341_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_341_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_341_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_341_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_341_##choice
#define KOSHMAR_PP_PRIVATE_REC_341_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_342
#define KOSHMAR_PP_PRIVATE_REC_341_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_342(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_342_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_342_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_342_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_342_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_342_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_342_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_342_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_342_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_342_##choice
#define KOSHMAR_PP_PRIVATE_REC_342_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_343
#define KOSHMAR_PP_PRIVATE_REC_342_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_343(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_343_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_343_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_343_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_343_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_343_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_343_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_343_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_343_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_343_##choice
#define KOSHMAR_PP_PRIVATE_REC_343_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_344
#define KOSHMAR_PP_PRIVATE_REC_343_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_344(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_344_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_344_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_344_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_344_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_344_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_344_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_344_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_344_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_344_##choice
#define KOSHMAR_PP_PRIVATE_REC_344_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_345
#define KOSHMAR_PP_PRIVATE_REC_344_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_345(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_345_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_345_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_345_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_345_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_345_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_345_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_345_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_345_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_345_##choice
#define KOSHMAR_PP_PRIVATE_REC_345_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_346
#define KOSHMAR_PP_PRIVATE_REC_345_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_346(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_346_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_346_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_346_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_346_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_346_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_346_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_346_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_346_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_346_##choice
#define KOSHMAR_PP_PRIVATE_REC_346_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_347
#define KOSHMAR_PP_PRIVATE_REC_346_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_347(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_347_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_347_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_347_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_347_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_347_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_347_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_347_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_347_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_347_##choice
#define KOSHMAR_PP_PRIVATE_REC_347_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_348
#define KOSHMAR_PP_PRIVATE_REC_347_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_348(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_348_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_348_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_348_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_348_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_348_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_348_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_348_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_348_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_348_##choice
#define KOSHMAR_PP_PRIVATE_REC_348_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_349
#define KOSHMAR_PP_PRIVATE_REC_348_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_349(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_349_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_349_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_349_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_349_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_349_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_349_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_349_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_349_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_349_##choice
#define KOSHMAR_PP_PRIVATE_REC_349_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_350
#define KOSHMAR_PP_PRIVATE_REC_349_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_350(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_350_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_350_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_350_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_350_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_350_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_350_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_350_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_350_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_350_##choice
#define KOSHMAR_PP_PRIVATE_REC_350_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_351
#define KOSHMAR_PP_PRIVATE_REC_350_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_351(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_351_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_351_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_351_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_351_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_351_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_351_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_351_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_351_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_351_##choice
#define KOSHMAR_PP_PRIVATE_REC_351_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_352
#define KOSHMAR_PP_PRIVATE_REC_351_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_352(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_352_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_352_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_352_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_352_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_352_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_352_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_352_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_352_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_352_##choice
#define KOSHMAR_PP_PRIVATE_REC_352_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_353
#define KOSHMAR_PP_PRIVATE_REC_352_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_353(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_353_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_353_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_353_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_353_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_353_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_353_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_353_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_353_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_353_##choice
#define KOSHMAR_PP_PRIVATE_REC_353_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_354
#define KOSHMAR_PP_PRIVATE_REC_353_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_354(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_354_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_354_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_354_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_354_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_354_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_354_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_354_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_354_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_354_##choice
#define KOSHMAR_PP_PRIVATE_REC_354_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_355
#define KOSHMAR_PP_PRIVATE_REC_354_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_355(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_355_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_355_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_355_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_355_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_355_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_355_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_355_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_355_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_355_##choice
#define KOSHMAR_PP_PRIVATE_REC_355_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_356
#define KOSHMAR_PP_PRIVATE_REC_355_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_356(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_356_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_356_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_356_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_356_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_356_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_356_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_356_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_356_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_356_##choice
#define KOSHMAR_PP_PRIVATE_REC_356_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_357
#define KOSHMAR_PP_PRIVATE_REC_356_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_357(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_357_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_357_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_357_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_357_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_357_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_357_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_357_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_357_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_357_##choice
#define KOSHMAR_PP_PRIVATE_REC_357_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_358
#define KOSHMAR_PP_PRIVATE_REC_357_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_358(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_358_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_358_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_358_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_358_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_358_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_358_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_358_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_358_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_358_##choice
#define KOSHMAR_PP_PRIVATE_REC_358_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_359
#define KOSHMAR_PP_PRIVATE_REC_358_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_359(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_359_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_359_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_359_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_359_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_359_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_359_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_359_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_359_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_359_##choice
#define KOSHMAR_PP_PRIVATE_REC_359_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_360
#define KOSHMAR_PP_PRIVATE_REC_359_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_360(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_360_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_360_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_360_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_360_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_360_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_360_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_360_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_360_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_360_##choice
#define KOSHMAR_PP_PRIVATE_REC_360_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_361
#define KOSHMAR_PP_PRIVATE_REC_360_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_361(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_361_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_361_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_361_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_361_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_361_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_361_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_361_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_361_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_361_##choice
#define KOSHMAR_PP_PRIVATE_REC_361_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_362
#define KOSHMAR_PP_PRIVATE_REC_361_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_362(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_362_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_362_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_362_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_362_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_362_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_362_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_362_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_362_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_362_##choice
#define KOSHMAR_PP_PRIVATE_REC_362_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_363
#define KOSHMAR_PP_PRIVATE_REC_362_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_363(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_363_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_363_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_363_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_363_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_363_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_363_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_363_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_363_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_363_##choice
#define KOSHMAR_PP_PRIVATE_REC_363_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_364
#define KOSHMAR_PP_PRIVATE_REC_363_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_364(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_364_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_364_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_364_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_364_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_364_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_364_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_364_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_364_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_364_##choice
#define KOSHMAR_PP_PRIVATE_REC_364_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_365
#define KOSHMAR_PP_PRIVATE_REC_364_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_365(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_365_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_365_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_365_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_365_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_365_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_365_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_365_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_365_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_365_##choice
#define KOSHMAR_PP_PRIVATE_REC_365_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_366
#define KOSHMAR_PP_PRIVATE_REC_365_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_366(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_366_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_366_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_366_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_366_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_366_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_366_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_366_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_366_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_366_##choice
#define KOSHMAR_PP_PRIVATE_REC_366_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_367
#define KOSHMAR_PP_PRIVATE_REC_366_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_367(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_367_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_367_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_367_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_367_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_367_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_367_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_367_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_367_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_367_##choice
#define KOSHMAR_PP_PRIVATE_REC_367_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_368
#define KOSHMAR_PP_PRIVATE_REC_367_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_368(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_368_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_368_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_368_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_368_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_368_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_368_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_368_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_368_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_368_##choice
#define KOSHMAR_PP_PRIVATE_REC_368_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_369
#define KOSHMAR_PP_PRIVATE_REC_368_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_369(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_369_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_369_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_369_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_369_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_369_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_369_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_369_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_369_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_369_##choice
#define KOSHMAR_PP_PRIVATE_REC_369_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_370
#define KOSHMAR_PP_PRIVATE_REC_369_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_370(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_370_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_370_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_370_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_370_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_370_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_370_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_370_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_370_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_370_##choice
#define KOSHMAR_PP_PRIVATE_REC_370_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_371
#define KOSHMAR_PP_PRIVATE_REC_370_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_371(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_371_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_371_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_371_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_371_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_371_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_371_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_371_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_371_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_371_##choice
#define KOSHMAR_PP_PRIVATE_REC_371_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_372
#define KOSHMAR_PP_PRIVATE_REC_371_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_372(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_372_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_372_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_372_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_372_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_372_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_372_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_372_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_372_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_372_##choice
#define KOSHMAR_PP_PRIVATE_REC_372_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_373
#define KOSHMAR_PP_PRIVATE_REC_372_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_373(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_373_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_373_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_373_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_373_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_373_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_373_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_373_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_373_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_373_##choice
#define KOSHMAR_PP_PRIVATE_REC_373_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_374
#define KOSHMAR_PP_PRIVATE_REC_373_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_374(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_374_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_374_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_374_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_374_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_374_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_374_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_374_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_374_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_374_##choice
#define KOSHMAR_PP_PRIVATE_REC_374_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_375
#define KOSHMAR_PP_PRIVATE_REC_374_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_375(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_375_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_375_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_375_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_375_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_375_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_375_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_375_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_375_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_375_##choice
#define KOSHMAR_PP_PRIVATE_REC_375_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_376
#define KOSHMAR_PP_PRIVATE_REC_375_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_376(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_376_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_376_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_376_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_376_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_376_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_376_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_376_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_376_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_376_##choice
#define KOSHMAR_PP_PRIVATE_REC_376_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_377
#define KOSHMAR_PP_PRIVATE_REC_376_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_377(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_377_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_377_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_377_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_377_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_377_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_377_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_377_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_377_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_377_##choice
#define KOSHMAR_PP_PRIVATE_REC_377_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_378
#define KOSHMAR_PP_PRIVATE_REC_377_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_378(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_378_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_378_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_378_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_378_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_378_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_378_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_378_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_378_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_378_##choice
#define KOSHMAR_PP_PRIVATE_REC_378_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_379
#define KOSHMAR_PP_PRIVATE_REC_378_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_379(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_379_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_379_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_379_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_379_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_379_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_379_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_379_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_379_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_379_##choice
#define KOSHMAR_PP_PRIVATE_REC_379_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_380
#define KOSHMAR_PP_PRIVATE_REC_379_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_380(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_380_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_380_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_380_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_380_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_380_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_380_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_380_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_380_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_380_##choice
#define KOSHMAR_PP_PRIVATE_REC_380_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_381
#define KOSHMAR_PP_PRIVATE_REC_380_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_381(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_381_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_381_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_381_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_381_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_381_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_381_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_381_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_381_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_381_##choice
#define KOSHMAR_PP_PRIVATE_REC_381_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_382
#define KOSHMAR_PP_PRIVATE_REC_381_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_382(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_382_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_382_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_382_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_382_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_382_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_382_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_382_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_382_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_382_##choice
#define KOSHMAR_PP_PRIVATE_REC_382_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_383
#define KOSHMAR_PP_PRIVATE_REC_382_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_383(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_383_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_383_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_383_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_383_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_383_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_383_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_383_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_383_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_383_##choice
#define KOSHMAR_PP_PRIVATE_REC_383_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_384
#define KOSHMAR_PP_PRIVATE_REC_383_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_384(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_384_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_384_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_384_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_384_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_384_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_384_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_384_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_384_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_384_##choice
#define KOSHMAR_PP_PRIVATE_REC_384_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_385
#define KOSHMAR_PP_PRIVATE_REC_384_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_385(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_385_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_385_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_385_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_385_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_385_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_385_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_385_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_385_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_385_##choice
#define KOSHMAR_PP_PRIVATE_REC_385_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_386
#define KOSHMAR_PP_PRIVATE_REC_385_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_386(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_386_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_386_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_386_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_386_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_386_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_386_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_386_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_386_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_386_##choice
#define KOSHMAR_PP_PRIVATE_REC_386_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_387
#define KOSHMAR_PP_PRIVATE_REC_386_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_387(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_387_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_387_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_387_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_387_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_387_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_387_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_387_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_387_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_387_##choice
#define KOSHMAR_PP_PRIVATE_REC_387_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_388
#define KOSHMAR_PP_PRIVATE_REC_387_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_388(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_388_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_388_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_388_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_388_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_388_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_388_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_388_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_388_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_388_##choice
#define KOSHMAR_PP_PRIVATE_REC_388_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_389
#define KOSHMAR_PP_PRIVATE_REC_388_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_389(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_389_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_389_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_389_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_389_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_389_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_389_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_389_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_389_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_389_##choice
#define KOSHMAR_PP_PRIVATE_REC_389_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_390
#define KOSHMAR_PP_PRIVATE_REC_389_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_390(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_390_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_390_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_390_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_390_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_390_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_390_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_390_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_390_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_390_##choice
#define KOSHMAR_PP_PRIVATE_REC_390_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_391
#define KOSHMAR_PP_PRIVATE_REC_390_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_391(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_391_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_391_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_391_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_391_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_391_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_391_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_391_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_391_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_391_##choice
#define KOSHMAR_PP_PRIVATE_REC_391_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_392
#define KOSHMAR_PP_PRIVATE_REC_391_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_392(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_392_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_392_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_392_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_392_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_392_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_392_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_392_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_392_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_392_##choice
#define KOSHMAR_PP_PRIVATE_REC_392_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_393
#define KOSHMAR_PP_PRIVATE_REC_392_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_393(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_393_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_393_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_393_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_393_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_393_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_393_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_393_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_393_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_393_##choice
#define KOSHMAR_PP_PRIVATE_REC_393_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_394
#define KOSHMAR_PP_PRIVATE_REC_393_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_394(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_394_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_394_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_394_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_394_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_394_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_394_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_394_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_394_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_394_##choice
#define KOSHMAR_PP_PRIVATE_REC_394_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_395
#define KOSHMAR_PP_PRIVATE_REC_394_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_395(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_395_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_395_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_395_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_395_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_395_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_395_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_395_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_395_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_395_##choice
#define KOSHMAR_PP_PRIVATE_REC_395_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_396
#define KOSHMAR_PP_PRIVATE_REC_395_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_396(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_396_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_396_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_396_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_396_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_396_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_396_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_396_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_396_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_396_##choice
#define KOSHMAR_PP_PRIVATE_REC_396_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_397
#define KOSHMAR_PP_PRIVATE_REC_396_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_397(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_397_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_397_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_397_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_397_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_397_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_397_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_397_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_397_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_397_##choice
#define KOSHMAR_PP_PRIVATE_REC_397_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_398
#define KOSHMAR_PP_PRIVATE_REC_397_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_398(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_398_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_398_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_398_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_398_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_398_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_398_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_398_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_398_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_398_##choice
#define KOSHMAR_PP_PRIVATE_REC_398_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_399
#define KOSHMAR_PP_PRIVATE_REC_398_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_399(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_399_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_399_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_399_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_399_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_399_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_399_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_399_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_399_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_399_##choice
#define KOSHMAR_PP_PRIVATE_REC_399_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_400
#define KOSHMAR_PP_PRIVATE_REC_399_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_400(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_400_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_400_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_400_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_400_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_400_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_400_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_400_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_400_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_400_##choice
#define KOSHMAR_PP_PRIVATE_REC_400_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_401
#define KOSHMAR_PP_PRIVATE_REC_400_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_401(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_401_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_401_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_401_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_401_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_401_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_401_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_401_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_401_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_401_##choice
#define KOSHMAR_PP_PRIVATE_REC_401_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_402
#define KOSHMAR_PP_PRIVATE_REC_401_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_402(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_402_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_402_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_402_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_402_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_402_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_402_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_402_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_402_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_402_##choice
#define KOSHMAR_PP_PRIVATE_REC_402_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_403
#define KOSHMAR_PP_PRIVATE_REC_402_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_403(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_403_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_403_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_403_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_403_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_403_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_403_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_403_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_403_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_403_##choice
#define KOSHMAR_PP_PRIVATE_REC_403_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_404
#define KOSHMAR_PP_PRIVATE_REC_403_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_404(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_404_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_404_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_404_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_404_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_404_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_404_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_404_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_404_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_404_##choice
#define KOSHMAR_PP_PRIVATE_REC_404_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_405
#define KOSHMAR_PP_PRIVATE_REC_404_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_405(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_405_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_405_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_405_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_405_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_405_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_405_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_405_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_405_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_405_##choice
#define KOSHMAR_PP_PRIVATE_REC_405_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_406
#define KOSHMAR_PP_PRIVATE_REC_405_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_406(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_406_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_406_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_406_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_406_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_406_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_406_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_406_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_406_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_406_##choice
#define KOSHMAR_PP_PRIVATE_REC_406_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_407
#define KOSHMAR_PP_PRIVATE_REC_406_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_407(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_407_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_407_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_407_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_407_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_407_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_407_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_407_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_407_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_407_##choice
#define KOSHMAR_PP_PRIVATE_REC_407_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_408
#define KOSHMAR_PP_PRIVATE_REC_407_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_408(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_408_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_408_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_408_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_408_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_408_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_408_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_408_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_408_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_408_##choice
#define KOSHMAR_PP_PRIVATE_REC_408_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_409
#define KOSHMAR_PP_PRIVATE_REC_408_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_409(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_409_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_409_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_409_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_409_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_409_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_409_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_409_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_409_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_409_##choice
#define KOSHMAR_PP_PRIVATE_REC_409_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_410
#define KOSHMAR_PP_PRIVATE_REC_409_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_410(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_410_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_410_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_410_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_410_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_410_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_410_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_410_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_410_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_410_##choice
#define KOSHMAR_PP_PRIVATE_REC_410_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_411
#define KOSHMAR_PP_PRIVATE_REC_410_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_411(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_411_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_411_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_411_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_411_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_411_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_411_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_411_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_411_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_411_##choice
#define KOSHMAR_PP_PRIVATE_REC_411_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_412
#define KOSHMAR_PP_PRIVATE_REC_411_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_412(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_412_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_412_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_412_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_412_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_412_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_412_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_412_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_412_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_412_##choice
#define KOSHMAR_PP_PRIVATE_REC_412_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_413
#define KOSHMAR_PP_PRIVATE_REC_412_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_413(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_413_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_413_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_413_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_413_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_413_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_413_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_413_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_413_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_413_##choice
#define KOSHMAR_PP_PRIVATE_REC_413_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_414
#define KOSHMAR_PP_PRIVATE_REC_413_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_414(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_414_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_414_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_414_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_414_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_414_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_414_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_414_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_414_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_414_##choice
#define KOSHMAR_PP_PRIVATE_REC_414_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_415
#define KOSHMAR_PP_PRIVATE_REC_414_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_415(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_415_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_415_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_415_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_415_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_415_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_415_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_415_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_415_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_415_##choice
#define KOSHMAR_PP_PRIVATE_REC_415_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_416
#define KOSHMAR_PP_PRIVATE_REC_415_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_416(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_416_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_416_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_416_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_416_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_416_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_416_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_416_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_416_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_416_##choice
#define KOSHMAR_PP_PRIVATE_REC_416_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_417
#define KOSHMAR_PP_PRIVATE_REC_416_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_417(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_417_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_417_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_417_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_417_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_417_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_417_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_417_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_417_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_417_##choice
#define KOSHMAR_PP_PRIVATE_REC_417_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_418
#define KOSHMAR_PP_PRIVATE_REC_417_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_418(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_418_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_418_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_418_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_418_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_418_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_418_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_418_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_418_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_418_##choice
#define KOSHMAR_PP_PRIVATE_REC_418_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_419
#define KOSHMAR_PP_PRIVATE_REC_418_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_419(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_419_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_419_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_419_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_419_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_419_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_419_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_419_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_419_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_419_##choice
#define KOSHMAR_PP_PRIVATE_REC_419_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_420
#define KOSHMAR_PP_PRIVATE_REC_419_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_420(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_420_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_420_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_420_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_420_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_420_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_420_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_420_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_420_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_420_##choice
#define KOSHMAR_PP_PRIVATE_REC_420_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_421
#define KOSHMAR_PP_PRIVATE_REC_420_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_421(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_421_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_421_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_421_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_421_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_421_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_421_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_421_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_421_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_421_##choice
#define KOSHMAR_PP_PRIVATE_REC_421_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_422
#define KOSHMAR_PP_PRIVATE_REC_421_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_422(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_422_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_422_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_422_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_422_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_422_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_422_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_422_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_422_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_422_##choice
#define KOSHMAR_PP_PRIVATE_REC_422_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_423
#define KOSHMAR_PP_PRIVATE_REC_422_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_423(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_423_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_423_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_423_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_423_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_423_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_423_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_423_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_423_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_423_##choice
#define KOSHMAR_PP_PRIVATE_REC_423_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_424
#define KOSHMAR_PP_PRIVATE_REC_423_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_424(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_424_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_424_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_424_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_424_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_424_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_424_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_424_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_424_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_424_##choice
#define KOSHMAR_PP_PRIVATE_REC_424_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_425
#define KOSHMAR_PP_PRIVATE_REC_424_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_425(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_425_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_425_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_425_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_425_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_425_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_425_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_425_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_425_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_425_##choice
#define KOSHMAR_PP_PRIVATE_REC_425_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_426
#define KOSHMAR_PP_PRIVATE_REC_425_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_426(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_426_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_426_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_426_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_426_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_426_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_426_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_426_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_426_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_426_##choice
#define KOSHMAR_PP_PRIVATE_REC_426_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_427
#define KOSHMAR_PP_PRIVATE_REC_426_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_427(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_427_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_427_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_427_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_427_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_427_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_427_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_427_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_427_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_427_##choice
#define KOSHMAR_PP_PRIVATE_REC_427_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_428
#define KOSHMAR_PP_PRIVATE_REC_427_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_428(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_428_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_428_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_428_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_428_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_428_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_428_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_428_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_428_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_428_##choice
#define KOSHMAR_PP_PRIVATE_REC_428_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_429
#define KOSHMAR_PP_PRIVATE_REC_428_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_429(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_429_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_429_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_429_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_429_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_429_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_429_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_429_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_429_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_429_##choice
#define KOSHMAR_PP_PRIVATE_REC_429_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_430
#define KOSHMAR_PP_PRIVATE_REC_429_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_430(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_430_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_430_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_430_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_430_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_430_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_430_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_430_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_430_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_430_##choice
#define KOSHMAR_PP_PRIVATE_REC_430_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_431
#define KOSHMAR_PP_PRIVATE_REC_430_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_431(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_431_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_431_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_431_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_431_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_431_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_431_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_431_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_431_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_431_##choice
#define KOSHMAR_PP_PRIVATE_REC_431_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_432
#define KOSHMAR_PP_PRIVATE_REC_431_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_432(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_432_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_432_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_432_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_432_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_432_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_432_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_432_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_432_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_432_##choice
#define KOSHMAR_PP_PRIVATE_REC_432_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_433
#define KOSHMAR_PP_PRIVATE_REC_432_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_433(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_433_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_433_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_433_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_433_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_433_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_433_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_433_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_433_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_433_##choice
#define KOSHMAR_PP_PRIVATE_REC_433_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_434
#define KOSHMAR_PP_PRIVATE_REC_433_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_434(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_434_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_434_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_434_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_434_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_434_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_434_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_434_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_434_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_434_##choice
#define KOSHMAR_PP_PRIVATE_REC_434_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_435
#define KOSHMAR_PP_PRIVATE_REC_434_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_435(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_435_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_435_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_435_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_435_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_435_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_435_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_435_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_435_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_435_##choice
#define KOSHMAR_PP_PRIVATE_REC_435_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_436
#define KOSHMAR_PP_PRIVATE_REC_435_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_436(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_436_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_436_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_436_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_436_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_436_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_436_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_436_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_436_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_436_##choice
#define KOSHMAR_PP_PRIVATE_REC_436_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_437
#define KOSHMAR_PP_PRIVATE_REC_436_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_437(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_437_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_437_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_437_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_437_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_437_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_437_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_437_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_437_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_437_##choice
#define KOSHMAR_PP_PRIVATE_REC_437_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_438
#define KOSHMAR_PP_PRIVATE_REC_437_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_438(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_438_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_438_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_438_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_438_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_438_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_438_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_438_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_438_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_438_##choice
#define KOSHMAR_PP_PRIVATE_REC_438_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_439
#define KOSHMAR_PP_PRIVATE_REC_438_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_439(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_439_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_439_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_439_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_439_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_439_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_439_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_439_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_439_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_439_##choice
#define KOSHMAR_PP_PRIVATE_REC_439_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_440
#define KOSHMAR_PP_PRIVATE_REC_439_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_440(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_440_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_440_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_440_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_440_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_440_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_440_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_440_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_440_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_440_##choice
#define KOSHMAR_PP_PRIVATE_REC_440_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_441
#define KOSHMAR_PP_PRIVATE_REC_440_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_441(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_441_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_441_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_441_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_441_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_441_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_441_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_441_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_441_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_441_##choice
#define KOSHMAR_PP_PRIVATE_REC_441_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_442
#define KOSHMAR_PP_PRIVATE_REC_441_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_442(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_442_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_442_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_442_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_442_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_442_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_442_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_442_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_442_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_442_##choice
#define KOSHMAR_PP_PRIVATE_REC_442_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_443
#define KOSHMAR_PP_PRIVATE_REC_442_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_443(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_443_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_443_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_443_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_443_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_443_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_443_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_443_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_443_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_443_##choice
#define KOSHMAR_PP_PRIVATE_REC_443_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_444
#define KOSHMAR_PP_PRIVATE_REC_443_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_444(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_444_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_444_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_444_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_444_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_444_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_444_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_444_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_444_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_444_##choice
#define KOSHMAR_PP_PRIVATE_REC_444_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_445
#define KOSHMAR_PP_PRIVATE_REC_444_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_445(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_445_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_445_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_445_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_445_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_445_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_445_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_445_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_445_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_445_##choice
#define KOSHMAR_PP_PRIVATE_REC_445_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_446
#define KOSHMAR_PP_PRIVATE_REC_445_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_446(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_446_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_446_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_446_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_446_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_446_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_446_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_446_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_446_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_446_##choice
#define KOSHMAR_PP_PRIVATE_REC_446_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_447
#define KOSHMAR_PP_PRIVATE_REC_446_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_447(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_447_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_447_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_447_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_447_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_447_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_447_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_447_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_447_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_447_##choice
#define KOSHMAR_PP_PRIVATE_REC_447_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_448
#define KOSHMAR_PP_PRIVATE_REC_447_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_448(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_448_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_448_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_448_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_448_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_448_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_448_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_448_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_448_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_448_##choice
#define KOSHMAR_PP_PRIVATE_REC_448_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_449
#define KOSHMAR_PP_PRIVATE_REC_448_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_449(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_449_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_449_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_449_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_449_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_449_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_449_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_449_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_449_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_449_##choice
#define KOSHMAR_PP_PRIVATE_REC_449_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_450
#define KOSHMAR_PP_PRIVATE_REC_449_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_450(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_450_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_450_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_450_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_450_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_450_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_450_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_450_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_450_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_450_##choice
#define KOSHMAR_PP_PRIVATE_REC_450_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_451
#define KOSHMAR_PP_PRIVATE_REC_450_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_451(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_451_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_451_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_451_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_451_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_451_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_451_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_451_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_451_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_451_##choice
#define KOSHMAR_PP_PRIVATE_REC_451_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_452
#define KOSHMAR_PP_PRIVATE_REC_451_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_452(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_452_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_452_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_452_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_452_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_452_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_452_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_452_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_452_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_452_##choice
#define KOSHMAR_PP_PRIVATE_REC_452_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_453
#define KOSHMAR_PP_PRIVATE_REC_452_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_453(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_453_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_453_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_453_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_453_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_453_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_453_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_453_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_453_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_453_##choice
#define KOSHMAR_PP_PRIVATE_REC_453_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_454
#define KOSHMAR_PP_PRIVATE_REC_453_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_454(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_454_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_454_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_454_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_454_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_454_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_454_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_454_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_454_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_454_##choice
#define KOSHMAR_PP_PRIVATE_REC_454_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_455
#define KOSHMAR_PP_PRIVATE_REC_454_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_455(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_455_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_455_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_455_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_455_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_455_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_455_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_455_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_455_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_455_##choice
#define KOSHMAR_PP_PRIVATE_REC_455_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_456
#define KOSHMAR_PP_PRIVATE_REC_455_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_456(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_456_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_456_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_456_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_456_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_456_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_456_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_456_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_456_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_456_##choice
#define KOSHMAR_PP_PRIVATE_REC_456_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_457
#define KOSHMAR_PP_PRIVATE_REC_456_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_457(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_457_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_457_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_457_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_457_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_457_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_457_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_457_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_457_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_457_##choice
#define KOSHMAR_PP_PRIVATE_REC_457_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_458
#define KOSHMAR_PP_PRIVATE_REC_457_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_458(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_458_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_458_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_458_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_458_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_458_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_458_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_458_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_458_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_458_##choice
#define KOSHMAR_PP_PRIVATE_REC_458_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_459
#define KOSHMAR_PP_PRIVATE_REC_458_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_459(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_459_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_459_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_459_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_459_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_459_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_459_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_459_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_459_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_459_##choice
#define KOSHMAR_PP_PRIVATE_REC_459_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_460
#define KOSHMAR_PP_PRIVATE_REC_459_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_460(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_460_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_460_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_460_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_460_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_460_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_460_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_460_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_460_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_460_##choice
#define KOSHMAR_PP_PRIVATE_REC_460_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_461
#define KOSHMAR_PP_PRIVATE_REC_460_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_461(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_461_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_461_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_461_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_461_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_461_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_461_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_461_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_461_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_461_##choice
#define KOSHMAR_PP_PRIVATE_REC_461_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_462
#define KOSHMAR_PP_PRIVATE_REC_461_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_462(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_462_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_462_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_462_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_462_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_462_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_462_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_462_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_462_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_462_##choice
#define KOSHMAR_PP_PRIVATE_REC_462_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_463
#define KOSHMAR_PP_PRIVATE_REC_462_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_463(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_463_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_463_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_463_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_463_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_463_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_463_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_463_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_463_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_463_##choice
#define KOSHMAR_PP_PRIVATE_REC_463_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_464
#define KOSHMAR_PP_PRIVATE_REC_463_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_464(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_464_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_464_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_464_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_464_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_464_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_464_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_464_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_464_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_464_##choice
#define KOSHMAR_PP_PRIVATE_REC_464_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_465
#define KOSHMAR_PP_PRIVATE_REC_464_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_465(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_465_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_465_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_465_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_465_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_465_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_465_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_465_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_465_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_465_##choice
#define KOSHMAR_PP_PRIVATE_REC_465_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_466
#define KOSHMAR_PP_PRIVATE_REC_465_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_466(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_466_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_466_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_466_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_466_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_466_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_466_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_466_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_466_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_466_##choice
#define KOSHMAR_PP_PRIVATE_REC_466_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_467
#define KOSHMAR_PP_PRIVATE_REC_466_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_467(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_467_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_467_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_467_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_467_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_467_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_467_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_467_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_467_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_467_##choice
#define KOSHMAR_PP_PRIVATE_REC_467_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_468
#define KOSHMAR_PP_PRIVATE_REC_467_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_468(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_468_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_468_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_468_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_468_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_468_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_468_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_468_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_468_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_468_##choice
#define KOSHMAR_PP_PRIVATE_REC_468_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_469
#define KOSHMAR_PP_PRIVATE_REC_468_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_469(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_469_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_469_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_469_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_469_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_469_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_469_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_469_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_469_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_469_##choice
#define KOSHMAR_PP_PRIVATE_REC_469_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_470
#define KOSHMAR_PP_PRIVATE_REC_469_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_470(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_470_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_470_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_470_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_470_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_470_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_470_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_470_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_470_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_470_##choice
#define KOSHMAR_PP_PRIVATE_REC_470_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_471
#define KOSHMAR_PP_PRIVATE_REC_470_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_471(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_471_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_471_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_471_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_471_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_471_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_471_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_471_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_471_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_471_##choice
#define KOSHMAR_PP_PRIVATE_REC_471_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_472
#define KOSHMAR_PP_PRIVATE_REC_471_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_472(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_472_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_472_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_472_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_472_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_472_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_472_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_472_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_472_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_472_##choice
#define KOSHMAR_PP_PRIVATE_REC_472_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_473
#define KOSHMAR_PP_PRIVATE_REC_472_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_473(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_473_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_473_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_473_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_473_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_473_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_473_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_473_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_473_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_473_##choice
#define KOSHMAR_PP_PRIVATE_REC_473_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_474
#define KOSHMAR_PP_PRIVATE_REC_473_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_474(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_474_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_474_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_474_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_474_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_474_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_474_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_474_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_474_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_474_##choice
#define KOSHMAR_PP_PRIVATE_REC_474_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_475
#define KOSHMAR_PP_PRIVATE_REC_474_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_475(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_475_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_475_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_475_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_475_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_475_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_475_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_475_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_475_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_475_##choice
#define KOSHMAR_PP_PRIVATE_REC_475_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_476
#define KOSHMAR_PP_PRIVATE_REC_475_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_476(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_476_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_476_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_476_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_476_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_476_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_476_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_476_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_476_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_476_##choice
#define KOSHMAR_PP_PRIVATE_REC_476_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_477
#define KOSHMAR_PP_PRIVATE_REC_476_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_477(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_477_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_477_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_477_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_477_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_477_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_477_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_477_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_477_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_477_##choice
#define KOSHMAR_PP_PRIVATE_REC_477_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_478
#define KOSHMAR_PP_PRIVATE_REC_477_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_478(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_478_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_478_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_478_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_478_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_478_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_478_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_478_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_478_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_478_##choice
#define KOSHMAR_PP_PRIVATE_REC_478_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_479
#define KOSHMAR_PP_PRIVATE_REC_478_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_479(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_479_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_479_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_479_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_479_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_479_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_479_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_479_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_479_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_479_##choice
#define KOSHMAR_PP_PRIVATE_REC_479_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_480
#define KOSHMAR_PP_PRIVATE_REC_479_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_480(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_480_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_480_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_480_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_480_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_480_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_480_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_480_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_480_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_480_##choice
#define KOSHMAR_PP_PRIVATE_REC_480_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_481
#define KOSHMAR_PP_PRIVATE_REC_480_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_481(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_481_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_481_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_481_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_481_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_481_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_481_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_481_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_481_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_481_##choice
#define KOSHMAR_PP_PRIVATE_REC_481_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_482
#define KOSHMAR_PP_PRIVATE_REC_481_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_482(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_482_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_482_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_482_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_482_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_482_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_482_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_482_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_482_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_482_##choice
#define KOSHMAR_PP_PRIVATE_REC_482_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_483
#define KOSHMAR_PP_PRIVATE_REC_482_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_483(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_483_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_483_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_483_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_483_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_483_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_483_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_483_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_483_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_483_##choice
#define KOSHMAR_PP_PRIVATE_REC_483_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_484
#define KOSHMAR_PP_PRIVATE_REC_483_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_484(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_484_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_484_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_484_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_484_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_484_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_484_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_484_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_484_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_484_##choice
#define KOSHMAR_PP_PRIVATE_REC_484_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_485
#define KOSHMAR_PP_PRIVATE_REC_484_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_485(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_485_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_485_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_485_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_485_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_485_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_485_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_485_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_485_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_485_##choice
#define KOSHMAR_PP_PRIVATE_REC_485_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_486
#define KOSHMAR_PP_PRIVATE_REC_485_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_486(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_486_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_486_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_486_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_486_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_486_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_486_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_486_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_486_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_486_##choice
#define KOSHMAR_PP_PRIVATE_REC_486_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_487
#define KOSHMAR_PP_PRIVATE_REC_486_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_487(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_487_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_487_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_487_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_487_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_487_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_487_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_487_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_487_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_487_##choice
#define KOSHMAR_PP_PRIVATE_REC_487_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_488
#define KOSHMAR_PP_PRIVATE_REC_487_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_488(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_488_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_488_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_488_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_488_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_488_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_488_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_488_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_488_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_488_##choice
#define KOSHMAR_PP_PRIVATE_REC_488_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_489
#define KOSHMAR_PP_PRIVATE_REC_488_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_489(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_489_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_489_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_489_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_489_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_489_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_489_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_489_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_489_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_489_##choice
#define KOSHMAR_PP_PRIVATE_REC_489_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_490
#define KOSHMAR_PP_PRIVATE_REC_489_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_490(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_490_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_490_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_490_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_490_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_490_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_490_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_490_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_490_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_490_##choice
#define KOSHMAR_PP_PRIVATE_REC_490_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_491
#define KOSHMAR_PP_PRIVATE_REC_490_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_491(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_491_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_491_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_491_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_491_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_491_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_491_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_491_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_491_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_491_##choice
#define KOSHMAR_PP_PRIVATE_REC_491_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_492
#define KOSHMAR_PP_PRIVATE_REC_491_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_492(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_492_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_492_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_492_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_492_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_492_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_492_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_492_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_492_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_492_##choice
#define KOSHMAR_PP_PRIVATE_REC_492_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_493
#define KOSHMAR_PP_PRIVATE_REC_492_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_493(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_493_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_493_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_493_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_493_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_493_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_493_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_493_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_493_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_493_##choice
#define KOSHMAR_PP_PRIVATE_REC_493_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_494
#define KOSHMAR_PP_PRIVATE_REC_493_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_494(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_494_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_494_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_494_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_494_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_494_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_494_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_494_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_494_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_494_##choice
#define KOSHMAR_PP_PRIVATE_REC_494_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_495
#define KOSHMAR_PP_PRIVATE_REC_494_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_495(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_495_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_495_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_495_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_495_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_495_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_495_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_495_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_495_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_495_##choice
#define KOSHMAR_PP_PRIVATE_REC_495_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_496
#define KOSHMAR_PP_PRIVATE_REC_495_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_496(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_496_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_496_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_496_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_496_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_496_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_496_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_496_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_496_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_496_##choice
#define KOSHMAR_PP_PRIVATE_REC_496_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_497
#define KOSHMAR_PP_PRIVATE_REC_496_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_497(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_497_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_497_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_497_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_497_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_497_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_497_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_497_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_497_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_497_##choice
#define KOSHMAR_PP_PRIVATE_REC_497_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_498
#define KOSHMAR_PP_PRIVATE_REC_497_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_498(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_498_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_498_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_498_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_498_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_498_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_498_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_498_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_498_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_498_##choice
#define KOSHMAR_PP_PRIVATE_REC_498_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_499
#define KOSHMAR_PP_PRIVATE_REC_498_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_499(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_499_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_499_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_499_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_499_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_499_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_499_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_499_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_499_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_499_##choice
#define KOSHMAR_PP_PRIVATE_REC_499_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_500
#define KOSHMAR_PP_PRIVATE_REC_499_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_500(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_500_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_500_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_500_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_500_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_500_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_500_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_500_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_500_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_500_##choice
#define KOSHMAR_PP_PRIVATE_REC_500_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_501
#define KOSHMAR_PP_PRIVATE_REC_500_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_501(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_501_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_501_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_501_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_501_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_501_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_501_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_501_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_501_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_501_##choice
#define KOSHMAR_PP_PRIVATE_REC_501_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_502
#define KOSHMAR_PP_PRIVATE_REC_501_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_502(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_502_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_502_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_502_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_502_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_502_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_502_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_502_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_502_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_502_##choice
#define KOSHMAR_PP_PRIVATE_REC_502_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_503
#define KOSHMAR_PP_PRIVATE_REC_502_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_503(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_503_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_503_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_503_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_503_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_503_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_503_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_503_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_503_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_503_##choice
#define KOSHMAR_PP_PRIVATE_REC_503_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_504
#define KOSHMAR_PP_PRIVATE_REC_503_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_504(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_504_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_504_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_504_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_504_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_504_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_504_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_504_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_504_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_504_##choice
#define KOSHMAR_PP_PRIVATE_REC_504_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_505
#define KOSHMAR_PP_PRIVATE_REC_504_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_505(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_505_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_505_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_505_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_505_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_505_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_505_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_505_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_505_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_505_##choice
#define KOSHMAR_PP_PRIVATE_REC_505_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_506
#define KOSHMAR_PP_PRIVATE_REC_505_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_506(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_506_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_506_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_506_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_506_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_506_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_506_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_506_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_506_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_506_##choice
#define KOSHMAR_PP_PRIVATE_REC_506_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_507
#define KOSHMAR_PP_PRIVATE_REC_506_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_507(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_507_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_507_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_507_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_507_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_507_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_507_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_507_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_507_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_507_##choice
#define KOSHMAR_PP_PRIVATE_REC_507_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_508
#define KOSHMAR_PP_PRIVATE_REC_507_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_508(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_508_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_508_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_508_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_508_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_508_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_508_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_508_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_508_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_508_##choice
#define KOSHMAR_PP_PRIVATE_REC_508_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_509
#define KOSHMAR_PP_PRIVATE_REC_508_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_509(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_509_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_509_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_509_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_509_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_509_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_509_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_509_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_509_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_509_##choice
#define KOSHMAR_PP_PRIVATE_REC_509_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_510
#define KOSHMAR_PP_PRIVATE_REC_509_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_510(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_510_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_510_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_510_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_510_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_510_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_510_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_510_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_510_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_510_##choice
#define KOSHMAR_PP_PRIVATE_REC_510_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_511
#define KOSHMAR_PP_PRIVATE_REC_510_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_511(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_511_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_511_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_511_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_511_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_511_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_511_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_511_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_511_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_511_##choice
#define KOSHMAR_PP_PRIVATE_REC_511_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_512
#define KOSHMAR_PP_PRIVATE_REC_511_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_512(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_512_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_512_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_512_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_512_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_512_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_512_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_512_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_512_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_512_##choice
#define KOSHMAR_PP_PRIVATE_REC_512_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_513
#define KOSHMAR_PP_PRIVATE_REC_512_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_513(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_513_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_513_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_513_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_513_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_513_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_513_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_513_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_513_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_513_##choice
#define KOSHMAR_PP_PRIVATE_REC_513_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_514
#define KOSHMAR_PP_PRIVATE_REC_513_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_514(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_514_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_514_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_514_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_514_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_514_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_514_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_514_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_514_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_514_##choice
#define KOSHMAR_PP_PRIVATE_REC_514_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_515
#define KOSHMAR_PP_PRIVATE_REC_514_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_515(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_515_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_515_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_515_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_515_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_515_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_515_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_515_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_515_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_515_##choice
#define KOSHMAR_PP_PRIVATE_REC_515_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_516
#define KOSHMAR_PP_PRIVATE_REC_515_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_516(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_516_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_516_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_516_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_516_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_516_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_516_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_516_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_516_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_516_##choice
#define KOSHMAR_PP_PRIVATE_REC_516_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_517
#define KOSHMAR_PP_PRIVATE_REC_516_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_517(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_517_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_517_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_517_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_517_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_517_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_517_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_517_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_517_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_517_##choice
#define KOSHMAR_PP_PRIVATE_REC_517_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_518
#define KOSHMAR_PP_PRIVATE_REC_517_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_518(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_518_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_518_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_518_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_518_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_518_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_518_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_518_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_518_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_518_##choice
#define KOSHMAR_PP_PRIVATE_REC_518_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_519
#define KOSHMAR_PP_PRIVATE_REC_518_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_519(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_519_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_519_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_519_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_519_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_519_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_519_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_519_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_519_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_519_##choice
#define KOSHMAR_PP_PRIVATE_REC_519_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_520
#define KOSHMAR_PP_PRIVATE_REC_519_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_520(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_520_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_520_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_520_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_520_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_520_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_520_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_520_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_520_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_520_##choice
#define KOSHMAR_PP_PRIVATE_REC_520_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_521
#define KOSHMAR_PP_PRIVATE_REC_520_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_521(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_521_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_521_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_521_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_521_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_521_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_521_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_521_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_521_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_521_##choice
#define KOSHMAR_PP_PRIVATE_REC_521_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_522
#define KOSHMAR_PP_PRIVATE_REC_521_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_522(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_522_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_522_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_522_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_522_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_522_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_522_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_522_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_522_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_522_##choice
#define KOSHMAR_PP_PRIVATE_REC_522_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_523
#define KOSHMAR_PP_PRIVATE_REC_522_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_523(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_523_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_523_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_523_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_523_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_523_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_523_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_523_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_523_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_523_##choice
#define KOSHMAR_PP_PRIVATE_REC_523_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_524
#define KOSHMAR_PP_PRIVATE_REC_523_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_524(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_524_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_524_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_524_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_524_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_524_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_524_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_524_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_524_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_524_##choice
#define KOSHMAR_PP_PRIVATE_REC_524_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_525
#define KOSHMAR_PP_PRIVATE_REC_524_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_525(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_525_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_525_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_525_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_525_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_525_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_525_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_525_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_525_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_525_##choice
#define KOSHMAR_PP_PRIVATE_REC_525_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_526
#define KOSHMAR_PP_PRIVATE_REC_525_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_526(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_526_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_526_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_526_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_526_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_526_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_526_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_526_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_526_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_526_##choice
#define KOSHMAR_PP_PRIVATE_REC_526_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_527
#define KOSHMAR_PP_PRIVATE_REC_526_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_527(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_527_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_527_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_527_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_527_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_527_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_527_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_527_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_527_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_527_##choice
#define KOSHMAR_PP_PRIVATE_REC_527_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_528
#define KOSHMAR_PP_PRIVATE_REC_527_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_528(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_528_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_528_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_528_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_528_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_528_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_528_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_528_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_528_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_528_##choice
#define KOSHMAR_PP_PRIVATE_REC_528_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_529
#define KOSHMAR_PP_PRIVATE_REC_528_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_529(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_529_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_529_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_529_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_529_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_529_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_529_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_529_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_529_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_529_##choice
#define KOSHMAR_PP_PRIVATE_REC_529_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_530
#define KOSHMAR_PP_PRIVATE_REC_529_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_530(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_530_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_530_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_530_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_530_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_530_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_530_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_530_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_530_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_530_##choice
#define KOSHMAR_PP_PRIVATE_REC_530_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_531
#define KOSHMAR_PP_PRIVATE_REC_530_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_531(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_531_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_531_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_531_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_531_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_531_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_531_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_531_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_531_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_531_##choice
#define KOSHMAR_PP_PRIVATE_REC_531_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_532
#define KOSHMAR_PP_PRIVATE_REC_531_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_532(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_532_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_532_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_532_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_532_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_532_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_532_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_532_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_532_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_532_##choice
#define KOSHMAR_PP_PRIVATE_REC_532_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_533
#define KOSHMAR_PP_PRIVATE_REC_532_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_533(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_533_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_533_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_533_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_533_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_533_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_533_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_533_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_533_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_533_##choice
#define KOSHMAR_PP_PRIVATE_REC_533_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_534
#define KOSHMAR_PP_PRIVATE_REC_533_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_534(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_534_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_534_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_534_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_534_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_534_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_534_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_534_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_534_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_534_##choice
#define KOSHMAR_PP_PRIVATE_REC_534_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_535
#define KOSHMAR_PP_PRIVATE_REC_534_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_535(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_535_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_535_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_535_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_535_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_535_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_535_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_535_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_535_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_535_##choice
#define KOSHMAR_PP_PRIVATE_REC_535_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_536
#define KOSHMAR_PP_PRIVATE_REC_535_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_536(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_536_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_536_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_536_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_536_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_536_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_536_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_536_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_536_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_536_##choice
#define KOSHMAR_PP_PRIVATE_REC_536_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_537
#define KOSHMAR_PP_PRIVATE_REC_536_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_537(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_537_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_537_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_537_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_537_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_537_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_537_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_537_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_537_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_537_##choice
#define KOSHMAR_PP_PRIVATE_REC_537_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_538
#define KOSHMAR_PP_PRIVATE_REC_537_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_538(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_538_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_538_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_538_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_538_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_538_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_538_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_538_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_538_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_538_##choice
#define KOSHMAR_PP_PRIVATE_REC_538_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_539
#define KOSHMAR_PP_PRIVATE_REC_538_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_539(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_539_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_539_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_539_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_539_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_539_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_539_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_539_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_539_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_539_##choice
#define KOSHMAR_PP_PRIVATE_REC_539_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_540
#define KOSHMAR_PP_PRIVATE_REC_539_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_540(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_540_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_540_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_540_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_540_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_540_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_540_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_540_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_540_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_540_##choice
#define KOSHMAR_PP_PRIVATE_REC_540_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_541
#define KOSHMAR_PP_PRIVATE_REC_540_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_541(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_541_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_541_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_541_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_541_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_541_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_541_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_541_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_541_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_541_##choice
#define KOSHMAR_PP_PRIVATE_REC_541_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_542
#define KOSHMAR_PP_PRIVATE_REC_541_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_542(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_542_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_542_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_542_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_542_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_542_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_542_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_542_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_542_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_542_##choice
#define KOSHMAR_PP_PRIVATE_REC_542_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_543
#define KOSHMAR_PP_PRIVATE_REC_542_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_543(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_543_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_543_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_543_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_543_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_543_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_543_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_543_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_543_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_543_##choice
#define KOSHMAR_PP_PRIVATE_REC_543_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_544
#define KOSHMAR_PP_PRIVATE_REC_543_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_544(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_544_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_544_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_544_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_544_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_544_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_544_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_544_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_544_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_544_##choice
#define KOSHMAR_PP_PRIVATE_REC_544_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_545
#define KOSHMAR_PP_PRIVATE_REC_544_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_545(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_545_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_545_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_545_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_545_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_545_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_545_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_545_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_545_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_545_##choice
#define KOSHMAR_PP_PRIVATE_REC_545_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_546
#define KOSHMAR_PP_PRIVATE_REC_545_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_546(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_546_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_546_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_546_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_546_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_546_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_546_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_546_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_546_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_546_##choice
#define KOSHMAR_PP_PRIVATE_REC_546_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_547
#define KOSHMAR_PP_PRIVATE_REC_546_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_547(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_547_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_547_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_547_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_547_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_547_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_547_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_547_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_547_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_547_##choice
#define KOSHMAR_PP_PRIVATE_REC_547_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_548
#define KOSHMAR_PP_PRIVATE_REC_547_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_548(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_548_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_548_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_548_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_548_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_548_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_548_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_548_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_548_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_548_##choice
#define KOSHMAR_PP_PRIVATE_REC_548_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_549
#define KOSHMAR_PP_PRIVATE_REC_548_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_549(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_549_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_549_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_549_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_549_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_549_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_549_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_549_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_549_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_549_##choice
#define KOSHMAR_PP_PRIVATE_REC_549_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_550
#define KOSHMAR_PP_PRIVATE_REC_549_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_550(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_550_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_550_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_550_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_550_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_550_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_550_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_550_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_550_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_550_##choice
#define KOSHMAR_PP_PRIVATE_REC_550_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_551
#define KOSHMAR_PP_PRIVATE_REC_550_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_551(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_551_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_551_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_551_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_551_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_551_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_551_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_551_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_551_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_551_##choice
#define KOSHMAR_PP_PRIVATE_REC_551_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_552
#define KOSHMAR_PP_PRIVATE_REC_551_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_552(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_552_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_552_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_552_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_552_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_552_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_552_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_552_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_552_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_552_##choice
#define KOSHMAR_PP_PRIVATE_REC_552_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_553
#define KOSHMAR_PP_PRIVATE_REC_552_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_553(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_553_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_553_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_553_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_553_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_553_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_553_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_553_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_553_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_553_##choice
#define KOSHMAR_PP_PRIVATE_REC_553_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_554
#define KOSHMAR_PP_PRIVATE_REC_553_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_554(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_554_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_554_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_554_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_554_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_554_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_554_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_554_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_554_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_554_##choice
#define KOSHMAR_PP_PRIVATE_REC_554_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_555
#define KOSHMAR_PP_PRIVATE_REC_554_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_555(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_555_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_555_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_555_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_555_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_555_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_555_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_555_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_555_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_555_##choice
#define KOSHMAR_PP_PRIVATE_REC_555_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_556
#define KOSHMAR_PP_PRIVATE_REC_555_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_556(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_556_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_556_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_556_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_556_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_556_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_556_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_556_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_556_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_556_##choice
#define KOSHMAR_PP_PRIVATE_REC_556_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_557
#define KOSHMAR_PP_PRIVATE_REC_556_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_557(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_557_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_557_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_557_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_557_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_557_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_557_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_557_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_557_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_557_##choice
#define KOSHMAR_PP_PRIVATE_REC_557_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_558
#define KOSHMAR_PP_PRIVATE_REC_557_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_558(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_558_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_558_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_558_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_558_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_558_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_558_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_558_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_558_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_558_##choice
#define KOSHMAR_PP_PRIVATE_REC_558_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_559
#define KOSHMAR_PP_PRIVATE_REC_558_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_559(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_559_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_559_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_559_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_559_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_559_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_559_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_559_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_559_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_559_##choice
#define KOSHMAR_PP_PRIVATE_REC_559_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_560
#define KOSHMAR_PP_PRIVATE_REC_559_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_560(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_560_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_560_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_560_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_560_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_560_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_560_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_560_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_560_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_560_##choice
#define KOSHMAR_PP_PRIVATE_REC_560_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_561
#define KOSHMAR_PP_PRIVATE_REC_560_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_561(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_561_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_561_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_561_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_561_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_561_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_561_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_561_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_561_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_561_##choice
#define KOSHMAR_PP_PRIVATE_REC_561_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_562
#define KOSHMAR_PP_PRIVATE_REC_561_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_562(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_562_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_562_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_562_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_562_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_562_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_562_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_562_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_562_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_562_##choice
#define KOSHMAR_PP_PRIVATE_REC_562_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_563
#define KOSHMAR_PP_PRIVATE_REC_562_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_563(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_563_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_563_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_563_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_563_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_563_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_563_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_563_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_563_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_563_##choice
#define KOSHMAR_PP_PRIVATE_REC_563_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_564
#define KOSHMAR_PP_PRIVATE_REC_563_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_564(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_564_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_564_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_564_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_564_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_564_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_564_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_564_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_564_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_564_##choice
#define KOSHMAR_PP_PRIVATE_REC_564_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_565
#define KOSHMAR_PP_PRIVATE_REC_564_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_565(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_565_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_565_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_565_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_565_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_565_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_565_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_565_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_565_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_565_##choice
#define KOSHMAR_PP_PRIVATE_REC_565_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_566
#define KOSHMAR_PP_PRIVATE_REC_565_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_566(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_566_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_566_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_566_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_566_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_566_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_566_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_566_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_566_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_566_##choice
#define KOSHMAR_PP_PRIVATE_REC_566_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_567
#define KOSHMAR_PP_PRIVATE_REC_566_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_567(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_567_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_567_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_567_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_567_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_567_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_567_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_567_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_567_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_567_##choice
#define KOSHMAR_PP_PRIVATE_REC_567_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_568
#define KOSHMAR_PP_PRIVATE_REC_567_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_568(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_568_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_568_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_568_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_568_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_568_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_568_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_568_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_568_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_568_##choice
#define KOSHMAR_PP_PRIVATE_REC_568_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_569
#define KOSHMAR_PP_PRIVATE_REC_568_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_569(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_569_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_569_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_569_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_569_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_569_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_569_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_569_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_569_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_569_##choice
#define KOSHMAR_PP_PRIVATE_REC_569_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_570
#define KOSHMAR_PP_PRIVATE_REC_569_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_570(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_570_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_570_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_570_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_570_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_570_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_570_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_570_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_570_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_570_##choice
#define KOSHMAR_PP_PRIVATE_REC_570_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_571
#define KOSHMAR_PP_PRIVATE_REC_570_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_571(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_571_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_571_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_571_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_571_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_571_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_571_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_571_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_571_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_571_##choice
#define KOSHMAR_PP_PRIVATE_REC_571_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_572
#define KOSHMAR_PP_PRIVATE_REC_571_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_572(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_572_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_572_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_572_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_572_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_572_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_572_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_572_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_572_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_572_##choice
#define KOSHMAR_PP_PRIVATE_REC_572_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_573
#define KOSHMAR_PP_PRIVATE_REC_572_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_573(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_573_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_573_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_573_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_573_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_573_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_573_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_573_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_573_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_573_##choice
#define KOSHMAR_PP_PRIVATE_REC_573_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_574
#define KOSHMAR_PP_PRIVATE_REC_573_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_574(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_574_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_574_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_574_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_574_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_574_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_574_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_574_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_574_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_574_##choice
#define KOSHMAR_PP_PRIVATE_REC_574_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_575
#define KOSHMAR_PP_PRIVATE_REC_574_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_575(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_575_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_575_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_575_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_575_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_575_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_575_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_575_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_575_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_575_##choice
#define KOSHMAR_PP_PRIVATE_REC_575_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_576
#define KOSHMAR_PP_PRIVATE_REC_575_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_576(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_576_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_576_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_576_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_576_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_576_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_576_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_576_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_576_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_576_##choice
#define KOSHMAR_PP_PRIVATE_REC_576_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_577
#define KOSHMAR_PP_PRIVATE_REC_576_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_577(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_577_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_577_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_577_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_577_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_577_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_577_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_577_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_577_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_577_##choice
#define KOSHMAR_PP_PRIVATE_REC_577_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_578
#define KOSHMAR_PP_PRIVATE_REC_577_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_578(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_578_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_578_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_578_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_578_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_578_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_578_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_578_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_578_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_578_##choice
#define KOSHMAR_PP_PRIVATE_REC_578_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_579
#define KOSHMAR_PP_PRIVATE_REC_578_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_579(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_579_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_579_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_579_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_579_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_579_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_579_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_579_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_579_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_579_##choice
#define KOSHMAR_PP_PRIVATE_REC_579_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_580
#define KOSHMAR_PP_PRIVATE_REC_579_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_580(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_580_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_580_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_580_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_580_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_580_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_580_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_580_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_580_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_580_##choice
#define KOSHMAR_PP_PRIVATE_REC_580_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_581
#define KOSHMAR_PP_PRIVATE_REC_580_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_581(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_581_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_581_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_581_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_581_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_581_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_581_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_581_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_581_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_581_##choice
#define KOSHMAR_PP_PRIVATE_REC_581_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_582
#define KOSHMAR_PP_PRIVATE_REC_581_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_582(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_582_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_582_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_582_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_582_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_582_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_582_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_582_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_582_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_582_##choice
#define KOSHMAR_PP_PRIVATE_REC_582_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_583
#define KOSHMAR_PP_PRIVATE_REC_582_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_583(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_583_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_583_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_583_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_583_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_583_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_583_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_583_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_583_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_583_##choice
#define KOSHMAR_PP_PRIVATE_REC_583_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_584
#define KOSHMAR_PP_PRIVATE_REC_583_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_584(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_584_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_584_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_584_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_584_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_584_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_584_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_584_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_584_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_584_##choice
#define KOSHMAR_PP_PRIVATE_REC_584_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_585
#define KOSHMAR_PP_PRIVATE_REC_584_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_585(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_585_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_585_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_585_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_585_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_585_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_585_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_585_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_585_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_585_##choice
#define KOSHMAR_PP_PRIVATE_REC_585_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_586
#define KOSHMAR_PP_PRIVATE_REC_585_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_586(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_586_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_586_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_586_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_586_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_586_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_586_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_586_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_586_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_586_##choice
#define KOSHMAR_PP_PRIVATE_REC_586_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_587
#define KOSHMAR_PP_PRIVATE_REC_586_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_587(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_587_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_587_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_587_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_587_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_587_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_587_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_587_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_587_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_587_##choice
#define KOSHMAR_PP_PRIVATE_REC_587_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_588
#define KOSHMAR_PP_PRIVATE_REC_587_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_588(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_588_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_588_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_588_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_588_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_588_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_588_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_588_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_588_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_588_##choice
#define KOSHMAR_PP_PRIVATE_REC_588_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_589
#define KOSHMAR_PP_PRIVATE_REC_588_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_589(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_589_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_589_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_589_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_589_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_589_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_589_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_589_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_589_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_589_##choice
#define KOSHMAR_PP_PRIVATE_REC_589_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_590
#define KOSHMAR_PP_PRIVATE_REC_589_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_590(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_590_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_590_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_590_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_590_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_590_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_590_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_590_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_590_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_590_##choice
#define KOSHMAR_PP_PRIVATE_REC_590_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_591
#define KOSHMAR_PP_PRIVATE_REC_590_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_591(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_591_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_591_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_591_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_591_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_591_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_591_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_591_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_591_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_591_##choice
#define KOSHMAR_PP_PRIVATE_REC_591_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_592
#define KOSHMAR_PP_PRIVATE_REC_591_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_592(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_592_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_592_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_592_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_592_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_592_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_592_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_592_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_592_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_592_##choice
#define KOSHMAR_PP_PRIVATE_REC_592_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_593
#define KOSHMAR_PP_PRIVATE_REC_592_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_593(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_593_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_593_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_593_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_593_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_593_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_593_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_593_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_593_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_593_##choice
#define KOSHMAR_PP_PRIVATE_REC_593_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_594
#define KOSHMAR_PP_PRIVATE_REC_593_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_594(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_594_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_594_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_594_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_594_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_594_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_594_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_594_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_594_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_594_##choice
#define KOSHMAR_PP_PRIVATE_REC_594_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_595
#define KOSHMAR_PP_PRIVATE_REC_594_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_595(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_595_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_595_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_595_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_595_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_595_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_595_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_595_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_595_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_595_##choice
#define KOSHMAR_PP_PRIVATE_REC_595_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_596
#define KOSHMAR_PP_PRIVATE_REC_595_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_596(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_596_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_596_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_596_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_596_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_596_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_596_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_596_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_596_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_596_##choice
#define KOSHMAR_PP_PRIVATE_REC_596_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_597
#define KOSHMAR_PP_PRIVATE_REC_596_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_597(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_597_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_597_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_597_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_597_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_597_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_597_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_597_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_597_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_597_##choice
#define KOSHMAR_PP_PRIVATE_REC_597_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_598
#define KOSHMAR_PP_PRIVATE_REC_597_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_598(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_598_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_598_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_598_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_598_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_598_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_598_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_598_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_598_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_598_##choice
#define KOSHMAR_PP_PRIVATE_REC_598_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_599
#define KOSHMAR_PP_PRIVATE_REC_598_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_599(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_599_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_599_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_599_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_599_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_599_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_599_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_599_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_599_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_599_##choice
#define KOSHMAR_PP_PRIVATE_REC_599_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_600
#define KOSHMAR_PP_PRIVATE_REC_599_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_600(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_600_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_600_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_600_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_600_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_600_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_600_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_600_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_600_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_600_##choice
#define KOSHMAR_PP_PRIVATE_REC_600_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_601
#define KOSHMAR_PP_PRIVATE_REC_600_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_601(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_601_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_601_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_601_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_601_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_601_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_601_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_601_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_601_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_601_##choice
#define KOSHMAR_PP_PRIVATE_REC_601_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_602
#define KOSHMAR_PP_PRIVATE_REC_601_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_602(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_602_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_602_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_602_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_602_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_602_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_602_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_602_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_602_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_602_##choice
#define KOSHMAR_PP_PRIVATE_REC_602_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_603
#define KOSHMAR_PP_PRIVATE_REC_602_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_603(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_603_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_603_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_603_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_603_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_603_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_603_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_603_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_603_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_603_##choice
#define KOSHMAR_PP_PRIVATE_REC_603_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_604
#define KOSHMAR_PP_PRIVATE_REC_603_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_604(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_604_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_604_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_604_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_604_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_604_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_604_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_604_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_604_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_604_##choice
#define KOSHMAR_PP_PRIVATE_REC_604_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_605
#define KOSHMAR_PP_PRIVATE_REC_604_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_605(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_605_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_605_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_605_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_605_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_605_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_605_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_605_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_605_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_605_##choice
#define KOSHMAR_PP_PRIVATE_REC_605_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_606
#define KOSHMAR_PP_PRIVATE_REC_605_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_606(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_606_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_606_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_606_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_606_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_606_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_606_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_606_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_606_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_606_##choice
#define KOSHMAR_PP_PRIVATE_REC_606_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_607
#define KOSHMAR_PP_PRIVATE_REC_606_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_607(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_607_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_607_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_607_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_607_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_607_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_607_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_607_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_607_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_607_##choice
#define KOSHMAR_PP_PRIVATE_REC_607_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_608
#define KOSHMAR_PP_PRIVATE_REC_607_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_608(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_608_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_608_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_608_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_608_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_608_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_608_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_608_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_608_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_608_##choice
#define KOSHMAR_PP_PRIVATE_REC_608_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_609
#define KOSHMAR_PP_PRIVATE_REC_608_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_609(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_609_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_609_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_609_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_609_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_609_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_609_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_609_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_609_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_609_##choice
#define KOSHMAR_PP_PRIVATE_REC_609_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_610
#define KOSHMAR_PP_PRIVATE_REC_609_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_610(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_610_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_610_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_610_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_610_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_610_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_610_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_610_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_610_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_610_##choice
#define KOSHMAR_PP_PRIVATE_REC_610_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_611
#define KOSHMAR_PP_PRIVATE_REC_610_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_611(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_611_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_611_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_611_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_611_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_611_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_611_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_611_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_611_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_611_##choice
#define KOSHMAR_PP_PRIVATE_REC_611_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_612
#define KOSHMAR_PP_PRIVATE_REC_611_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_612(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_612_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_612_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_612_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_612_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_612_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_612_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_612_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_612_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_612_##choice
#define KOSHMAR_PP_PRIVATE_REC_612_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_613
#define KOSHMAR_PP_PRIVATE_REC_612_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_613(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_613_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_613_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_613_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_613_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_613_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_613_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_613_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_613_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_613_##choice
#define KOSHMAR_PP_PRIVATE_REC_613_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_614
#define KOSHMAR_PP_PRIVATE_REC_613_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_614(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_614_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_614_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_614_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_614_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_614_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_614_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_614_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_614_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_614_##choice
#define KOSHMAR_PP_PRIVATE_REC_614_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_615
#define KOSHMAR_PP_PRIVATE_REC_614_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_615(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_615_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_615_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_615_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_615_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_615_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_615_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_615_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_615_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_615_##choice
#define KOSHMAR_PP_PRIVATE_REC_615_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_616
#define KOSHMAR_PP_PRIVATE_REC_615_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_616(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_616_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_616_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_616_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_616_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_616_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_616_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_616_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_616_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_616_##choice
#define KOSHMAR_PP_PRIVATE_REC_616_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_617
#define KOSHMAR_PP_PRIVATE_REC_616_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_617(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_617_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_617_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_617_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_617_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_617_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_617_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_617_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_617_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_617_##choice
#define KOSHMAR_PP_PRIVATE_REC_617_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_618
#define KOSHMAR_PP_PRIVATE_REC_617_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_618(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_618_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_618_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_618_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_618_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_618_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_618_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_618_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_618_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_618_##choice
#define KOSHMAR_PP_PRIVATE_REC_618_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_619
#define KOSHMAR_PP_PRIVATE_REC_618_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_619(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_619_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_619_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_619_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_619_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_619_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_619_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_619_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_619_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_619_##choice
#define KOSHMAR_PP_PRIVATE_REC_619_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_620
#define KOSHMAR_PP_PRIVATE_REC_619_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_620(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_620_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_620_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_620_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_620_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_620_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_620_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_620_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_620_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_620_##choice
#define KOSHMAR_PP_PRIVATE_REC_620_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_621
#define KOSHMAR_PP_PRIVATE_REC_620_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_621(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_621_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_621_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_621_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_621_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_621_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_621_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_621_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_621_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_621_##choice
#define KOSHMAR_PP_PRIVATE_REC_621_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_622
#define KOSHMAR_PP_PRIVATE_REC_621_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_622(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_622_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_622_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_622_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_622_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_622_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_622_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_622_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_622_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_622_##choice
#define KOSHMAR_PP_PRIVATE_REC_622_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_623
#define KOSHMAR_PP_PRIVATE_REC_622_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_623(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_623_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_623_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_623_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_623_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_623_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_623_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_623_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_623_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_623_##choice
#define KOSHMAR_PP_PRIVATE_REC_623_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_624
#define KOSHMAR_PP_PRIVATE_REC_623_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_624(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_624_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_624_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_624_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_624_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_624_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_624_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_624_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_624_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_624_##choice
#define KOSHMAR_PP_PRIVATE_REC_624_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_625
#define KOSHMAR_PP_PRIVATE_REC_624_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_625(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_625_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_625_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_625_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_625_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_625_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_625_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_625_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_625_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_625_##choice
#define KOSHMAR_PP_PRIVATE_REC_625_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_626
#define KOSHMAR_PP_PRIVATE_REC_625_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_626(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_626_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_626_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_626_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_626_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_626_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_626_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_626_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_626_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_626_##choice
#define KOSHMAR_PP_PRIVATE_REC_626_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_627
#define KOSHMAR_PP_PRIVATE_REC_626_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_627(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_627_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_627_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_627_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_627_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_627_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_627_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_627_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_627_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_627_##choice
#define KOSHMAR_PP_PRIVATE_REC_627_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_628
#define KOSHMAR_PP_PRIVATE_REC_627_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_628(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_628_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_628_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_628_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_628_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_628_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_628_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_628_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_628_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_628_##choice
#define KOSHMAR_PP_PRIVATE_REC_628_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_629
#define KOSHMAR_PP_PRIVATE_REC_628_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_629(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_629_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_629_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_629_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_629_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_629_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_629_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_629_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_629_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_629_##choice
#define KOSHMAR_PP_PRIVATE_REC_629_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_630
#define KOSHMAR_PP_PRIVATE_REC_629_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_630(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_630_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_630_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_630_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_630_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_630_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_630_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_630_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_630_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_630_##choice
#define KOSHMAR_PP_PRIVATE_REC_630_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_631
#define KOSHMAR_PP_PRIVATE_REC_630_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_631(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_631_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_631_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_631_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_631_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_631_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_631_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_631_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_631_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_631_##choice
#define KOSHMAR_PP_PRIVATE_REC_631_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_632
#define KOSHMAR_PP_PRIVATE_REC_631_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_632(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_632_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_632_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_632_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_632_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_632_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_632_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_632_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_632_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_632_##choice
#define KOSHMAR_PP_PRIVATE_REC_632_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_633
#define KOSHMAR_PP_PRIVATE_REC_632_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_633(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_633_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_633_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_633_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_633_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_633_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_633_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_633_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_633_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_633_##choice
#define KOSHMAR_PP_PRIVATE_REC_633_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_634
#define KOSHMAR_PP_PRIVATE_REC_633_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_634(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_634_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_634_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_634_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_634_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_634_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_634_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_634_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_634_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_634_##choice
#define KOSHMAR_PP_PRIVATE_REC_634_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_635
#define KOSHMAR_PP_PRIVATE_REC_634_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_635(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_635_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_635_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_635_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_635_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_635_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_635_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_635_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_635_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_635_##choice
#define KOSHMAR_PP_PRIVATE_REC_635_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_636
#define KOSHMAR_PP_PRIVATE_REC_635_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_636(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_636_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_636_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_636_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_636_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_636_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_636_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_636_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_636_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_636_##choice
#define KOSHMAR_PP_PRIVATE_REC_636_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_637
#define KOSHMAR_PP_PRIVATE_REC_636_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_637(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_637_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_637_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_637_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_637_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_637_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_637_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_637_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_637_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_637_##choice
#define KOSHMAR_PP_PRIVATE_REC_637_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_638
#define KOSHMAR_PP_PRIVATE_REC_637_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_638(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_638_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_638_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_638_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_638_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_638_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_638_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_638_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_638_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_638_##choice
#define KOSHMAR_PP_PRIVATE_REC_638_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_639
#define KOSHMAR_PP_PRIVATE_REC_638_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_639(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_639_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_639_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_639_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_639_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_639_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_639_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_639_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_639_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_639_##choice
#define KOSHMAR_PP_PRIVATE_REC_639_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_640
#define KOSHMAR_PP_PRIVATE_REC_639_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_640(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_640_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_640_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_640_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_640_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_640_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_640_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_640_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_640_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_640_##choice
#define KOSHMAR_PP_PRIVATE_REC_640_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_641
#define KOSHMAR_PP_PRIVATE_REC_640_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_641(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_641_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_641_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_641_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_641_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_641_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_641_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_641_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_641_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_641_##choice
#define KOSHMAR_PP_PRIVATE_REC_641_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_642
#define KOSHMAR_PP_PRIVATE_REC_641_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_642(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_642_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_642_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_642_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_642_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_642_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_642_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_642_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_642_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_642_##choice
#define KOSHMAR_PP_PRIVATE_REC_642_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_643
#define KOSHMAR_PP_PRIVATE_REC_642_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_643(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_643_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_643_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_643_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_643_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_643_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_643_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_643_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_643_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_643_##choice
#define KOSHMAR_PP_PRIVATE_REC_643_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_644
#define KOSHMAR_PP_PRIVATE_REC_643_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_644(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_644_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_644_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_644_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_644_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_644_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_644_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_644_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_644_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_644_##choice
#define KOSHMAR_PP_PRIVATE_REC_644_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_645
#define KOSHMAR_PP_PRIVATE_REC_644_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_645(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_645_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_645_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_645_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_645_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_645_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_645_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_645_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_645_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_645_##choice
#define KOSHMAR_PP_PRIVATE_REC_645_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_646
#define KOSHMAR_PP_PRIVATE_REC_645_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_646(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_646_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_646_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_646_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_646_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_646_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_646_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_646_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_646_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_646_##choice
#define KOSHMAR_PP_PRIVATE_REC_646_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_647
#define KOSHMAR_PP_PRIVATE_REC_646_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_647(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_647_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_647_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_647_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_647_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_647_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_647_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_647_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_647_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_647_##choice
#define KOSHMAR_PP_PRIVATE_REC_647_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_648
#define KOSHMAR_PP_PRIVATE_REC_647_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_648(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_648_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_648_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_648_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_648_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_648_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_648_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_648_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_648_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_648_##choice
#define KOSHMAR_PP_PRIVATE_REC_648_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_649
#define KOSHMAR_PP_PRIVATE_REC_648_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_649(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_649_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_649_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_649_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_649_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_649_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_649_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_649_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_649_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_649_##choice
#define KOSHMAR_PP_PRIVATE_REC_649_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_650
#define KOSHMAR_PP_PRIVATE_REC_649_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_650(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_650_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_650_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_650_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_650_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_650_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_650_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_650_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_650_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_650_##choice
#define KOSHMAR_PP_PRIVATE_REC_650_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_651
#define KOSHMAR_PP_PRIVATE_REC_650_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_651(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_651_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_651_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_651_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_651_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_651_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_651_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_651_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_651_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_651_##choice
#define KOSHMAR_PP_PRIVATE_REC_651_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_652
#define KOSHMAR_PP_PRIVATE_REC_651_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_652(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_652_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_652_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_652_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_652_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_652_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_652_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_652_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_652_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_652_##choice
#define KOSHMAR_PP_PRIVATE_REC_652_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_653
#define KOSHMAR_PP_PRIVATE_REC_652_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_653(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_653_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_653_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_653_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_653_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_653_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_653_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_653_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_653_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_653_##choice
#define KOSHMAR_PP_PRIVATE_REC_653_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_654
#define KOSHMAR_PP_PRIVATE_REC_653_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_654(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_654_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_654_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_654_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_654_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_654_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_654_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_654_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_654_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_654_##choice
#define KOSHMAR_PP_PRIVATE_REC_654_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_655
#define KOSHMAR_PP_PRIVATE_REC_654_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_655(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_655_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_655_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_655_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_655_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_655_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_655_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_655_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_655_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_655_##choice
#define KOSHMAR_PP_PRIVATE_REC_655_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_656
#define KOSHMAR_PP_PRIVATE_REC_655_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_656(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_656_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_656_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_656_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_656_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_656_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_656_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_656_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_656_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_656_##choice
#define KOSHMAR_PP_PRIVATE_REC_656_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_657
#define KOSHMAR_PP_PRIVATE_REC_656_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_657(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_657_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_657_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_657_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_657_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_657_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_657_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_657_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_657_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_657_##choice
#define KOSHMAR_PP_PRIVATE_REC_657_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_658
#define KOSHMAR_PP_PRIVATE_REC_657_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_658(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_658_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_658_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_658_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_658_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_658_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_658_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_658_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_658_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_658_##choice
#define KOSHMAR_PP_PRIVATE_REC_658_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_659
#define KOSHMAR_PP_PRIVATE_REC_658_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_659(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_659_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_659_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_659_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_659_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_659_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_659_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_659_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_659_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_659_##choice
#define KOSHMAR_PP_PRIVATE_REC_659_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_660
#define KOSHMAR_PP_PRIVATE_REC_659_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_660(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_660_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_660_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_660_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_660_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_660_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_660_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_660_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_660_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_660_##choice
#define KOSHMAR_PP_PRIVATE_REC_660_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_661
#define KOSHMAR_PP_PRIVATE_REC_660_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_661(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_661_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_661_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_661_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_661_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_661_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_661_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_661_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_661_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_661_##choice
#define KOSHMAR_PP_PRIVATE_REC_661_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_662
#define KOSHMAR_PP_PRIVATE_REC_661_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_662(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_662_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_662_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_662_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_662_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_662_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_662_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_662_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_662_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_662_##choice
#define KOSHMAR_PP_PRIVATE_REC_662_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_663
#define KOSHMAR_PP_PRIVATE_REC_662_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_663(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_663_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_663_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_663_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_663_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_663_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_663_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_663_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_663_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_663_##choice
#define KOSHMAR_PP_PRIVATE_REC_663_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_664
#define KOSHMAR_PP_PRIVATE_REC_663_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_664(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_664_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_664_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_664_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_664_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_664_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_664_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_664_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_664_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_664_##choice
#define KOSHMAR_PP_PRIVATE_REC_664_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_665
#define KOSHMAR_PP_PRIVATE_REC_664_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_665(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_665_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_665_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_665_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_665_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_665_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_665_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_665_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_665_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_665_##choice
#define KOSHMAR_PP_PRIVATE_REC_665_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_666
#define KOSHMAR_PP_PRIVATE_REC_665_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_666(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_666_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_666_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_666_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_666_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_666_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_666_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_666_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_666_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_666_##choice
#define KOSHMAR_PP_PRIVATE_REC_666_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_667
#define KOSHMAR_PP_PRIVATE_REC_666_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_667(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_667_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_667_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_667_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_667_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_667_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_667_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_667_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_667_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_667_##choice
#define KOSHMAR_PP_PRIVATE_REC_667_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_668
#define KOSHMAR_PP_PRIVATE_REC_667_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_668(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_668_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_668_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_668_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_668_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_668_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_668_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_668_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_668_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_668_##choice
#define KOSHMAR_PP_PRIVATE_REC_668_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_669
#define KOSHMAR_PP_PRIVATE_REC_668_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_669(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_669_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_669_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_669_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_669_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_669_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_669_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_669_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_669_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_669_##choice
#define KOSHMAR_PP_PRIVATE_REC_669_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_670
#define KOSHMAR_PP_PRIVATE_REC_669_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_670(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_670_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_670_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_670_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_670_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_670_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_670_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_670_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_670_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_670_##choice
#define KOSHMAR_PP_PRIVATE_REC_670_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_671
#define KOSHMAR_PP_PRIVATE_REC_670_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_671(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_671_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_671_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_671_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_671_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_671_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_671_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_671_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_671_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_671_##choice
#define KOSHMAR_PP_PRIVATE_REC_671_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_672
#define KOSHMAR_PP_PRIVATE_REC_671_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_672(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_672_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_672_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_672_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_672_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_672_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_672_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_672_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_672_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_672_##choice
#define KOSHMAR_PP_PRIVATE_REC_672_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_673
#define KOSHMAR_PP_PRIVATE_REC_672_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_673(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_673_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_673_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_673_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_673_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_673_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_673_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_673_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_673_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_673_##choice
#define KOSHMAR_PP_PRIVATE_REC_673_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_674
#define KOSHMAR_PP_PRIVATE_REC_673_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_674(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_674_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_674_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_674_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_674_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_674_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_674_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_674_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_674_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_674_##choice
#define KOSHMAR_PP_PRIVATE_REC_674_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_675
#define KOSHMAR_PP_PRIVATE_REC_674_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_675(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_675_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_675_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_675_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_675_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_675_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_675_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_675_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_675_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_675_##choice
#define KOSHMAR_PP_PRIVATE_REC_675_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_676
#define KOSHMAR_PP_PRIVATE_REC_675_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_676(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_676_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_676_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_676_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_676_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_676_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_676_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_676_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_676_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_676_##choice
#define KOSHMAR_PP_PRIVATE_REC_676_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_677
#define KOSHMAR_PP_PRIVATE_REC_676_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_677(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_677_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_677_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_677_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_677_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_677_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_677_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_677_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_677_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_677_##choice
#define KOSHMAR_PP_PRIVATE_REC_677_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_678
#define KOSHMAR_PP_PRIVATE_REC_677_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_678(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_678_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_678_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_678_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_678_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_678_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_678_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_678_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_678_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_678_##choice
#define KOSHMAR_PP_PRIVATE_REC_678_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_679
#define KOSHMAR_PP_PRIVATE_REC_678_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_679(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_679_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_679_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_679_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_679_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_679_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_679_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_679_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_679_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_679_##choice
#define KOSHMAR_PP_PRIVATE_REC_679_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_680
#define KOSHMAR_PP_PRIVATE_REC_679_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_680(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_680_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_680_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_680_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_680_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_680_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_680_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_680_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_680_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_680_##choice
#define KOSHMAR_PP_PRIVATE_REC_680_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_681
#define KOSHMAR_PP_PRIVATE_REC_680_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_681(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_681_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_681_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_681_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_681_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_681_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_681_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_681_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_681_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_681_##choice
#define KOSHMAR_PP_PRIVATE_REC_681_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_682
#define KOSHMAR_PP_PRIVATE_REC_681_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_682(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_682_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_682_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_682_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_682_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_682_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_682_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_682_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_682_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_682_##choice
#define KOSHMAR_PP_PRIVATE_REC_682_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_683
#define KOSHMAR_PP_PRIVATE_REC_682_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_683(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_683_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_683_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_683_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_683_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_683_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_683_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_683_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_683_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_683_##choice
#define KOSHMAR_PP_PRIVATE_REC_683_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_684
#define KOSHMAR_PP_PRIVATE_REC_683_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_684(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_684_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_684_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_684_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_684_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_684_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_684_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_684_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_684_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_684_##choice
#define KOSHMAR_PP_PRIVATE_REC_684_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_685
#define KOSHMAR_PP_PRIVATE_REC_684_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_685(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_685_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_685_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_685_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_685_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_685_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_685_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_685_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_685_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_685_##choice
#define KOSHMAR_PP_PRIVATE_REC_685_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_686
#define KOSHMAR_PP_PRIVATE_REC_685_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_686(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_686_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_686_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_686_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_686_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_686_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_686_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_686_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_686_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_686_##choice
#define KOSHMAR_PP_PRIVATE_REC_686_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_687
#define KOSHMAR_PP_PRIVATE_REC_686_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_687(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_687_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_687_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_687_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_687_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_687_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_687_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_687_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_687_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_687_##choice
#define KOSHMAR_PP_PRIVATE_REC_687_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_688
#define KOSHMAR_PP_PRIVATE_REC_687_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_688(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_688_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_688_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_688_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_688_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_688_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_688_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_688_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_688_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_688_##choice
#define KOSHMAR_PP_PRIVATE_REC_688_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_689
#define KOSHMAR_PP_PRIVATE_REC_688_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_689(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_689_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_689_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_689_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_689_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_689_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_689_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_689_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_689_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_689_##choice
#define KOSHMAR_PP_PRIVATE_REC_689_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_690
#define KOSHMAR_PP_PRIVATE_REC_689_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_690(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_690_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_690_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_690_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_690_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_690_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_690_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_690_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_690_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_690_##choice
#define KOSHMAR_PP_PRIVATE_REC_690_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_691
#define KOSHMAR_PP_PRIVATE_REC_690_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_691(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_691_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_691_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_691_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_691_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_691_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_691_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_691_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_691_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_691_##choice
#define KOSHMAR_PP_PRIVATE_REC_691_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_692
#define KOSHMAR_PP_PRIVATE_REC_691_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_692(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_692_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_692_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_692_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_692_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_692_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_692_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_692_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_692_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_692_##choice
#define KOSHMAR_PP_PRIVATE_REC_692_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_693
#define KOSHMAR_PP_PRIVATE_REC_692_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_693(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_693_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_693_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_693_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_693_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_693_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_693_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_693_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_693_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_693_##choice
#define KOSHMAR_PP_PRIVATE_REC_693_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_694
#define KOSHMAR_PP_PRIVATE_REC_693_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_694(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_694_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_694_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_694_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_694_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_694_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_694_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_694_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_694_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_694_##choice
#define KOSHMAR_PP_PRIVATE_REC_694_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_695
#define KOSHMAR_PP_PRIVATE_REC_694_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_695(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_695_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_695_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_695_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_695_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_695_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_695_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_695_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_695_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_695_##choice
#define KOSHMAR_PP_PRIVATE_REC_695_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_696
#define KOSHMAR_PP_PRIVATE_REC_695_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_696(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_696_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_696_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_696_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_696_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_696_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_696_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_696_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_696_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_696_##choice
#define KOSHMAR_PP_PRIVATE_REC_696_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_697
#define KOSHMAR_PP_PRIVATE_REC_696_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_697(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_697_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_697_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_697_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_697_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_697_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_697_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_697_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_697_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_697_##choice
#define KOSHMAR_PP_PRIVATE_REC_697_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_698
#define KOSHMAR_PP_PRIVATE_REC_697_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_698(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_698_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_698_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_698_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_698_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_698_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_698_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_698_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_698_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_698_##choice
#define KOSHMAR_PP_PRIVATE_REC_698_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_699
#define KOSHMAR_PP_PRIVATE_REC_698_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_699(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_699_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_699_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_699_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_699_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_699_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_699_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_699_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_699_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_699_##choice
#define KOSHMAR_PP_PRIVATE_REC_699_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_700
#define KOSHMAR_PP_PRIVATE_REC_699_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_700(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_700_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_700_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_700_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_700_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_700_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_700_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_700_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_700_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_700_##choice
#define KOSHMAR_PP_PRIVATE_REC_700_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_701
#define KOSHMAR_PP_PRIVATE_REC_700_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_701(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_701_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_701_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_701_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_701_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_701_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_701_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_701_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_701_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_701_##choice
#define KOSHMAR_PP_PRIVATE_REC_701_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_702
#define KOSHMAR_PP_PRIVATE_REC_701_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_702(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_702_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_702_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_702_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_702_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_702_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_702_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_702_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_702_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_702_##choice
#define KOSHMAR_PP_PRIVATE_REC_702_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_703
#define KOSHMAR_PP_PRIVATE_REC_702_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_703(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_703_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_703_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_703_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_703_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_703_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_703_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_703_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_703_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_703_##choice
#define KOSHMAR_PP_PRIVATE_REC_703_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_704
#define KOSHMAR_PP_PRIVATE_REC_703_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_704(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_704_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_704_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_704_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_704_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_704_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_704_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_704_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_704_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_704_##choice
#define KOSHMAR_PP_PRIVATE_REC_704_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_705
#define KOSHMAR_PP_PRIVATE_REC_704_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_705(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_705_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_705_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_705_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_705_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_705_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_705_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_705_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_705_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_705_##choice
#define KOSHMAR_PP_PRIVATE_REC_705_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_706
#define KOSHMAR_PP_PRIVATE_REC_705_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_706(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_706_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_706_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_706_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_706_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_706_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_706_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_706_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_706_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_706_##choice
#define KOSHMAR_PP_PRIVATE_REC_706_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_707
#define KOSHMAR_PP_PRIVATE_REC_706_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_707(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_707_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_707_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_707_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_707_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_707_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_707_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_707_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_707_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_707_##choice
#define KOSHMAR_PP_PRIVATE_REC_707_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_708
#define KOSHMAR_PP_PRIVATE_REC_707_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_708(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_708_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_708_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_708_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_708_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_708_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_708_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_708_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_708_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_708_##choice
#define KOSHMAR_PP_PRIVATE_REC_708_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_709
#define KOSHMAR_PP_PRIVATE_REC_708_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_709(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_709_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_709_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_709_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_709_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_709_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_709_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_709_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_709_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_709_##choice
#define KOSHMAR_PP_PRIVATE_REC_709_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_710
#define KOSHMAR_PP_PRIVATE_REC_709_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_710(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_710_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_710_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_710_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_710_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_710_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_710_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_710_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_710_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_710_##choice
#define KOSHMAR_PP_PRIVATE_REC_710_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_711
#define KOSHMAR_PP_PRIVATE_REC_710_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_711(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_711_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_711_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_711_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_711_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_711_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_711_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_711_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_711_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_711_##choice
#define KOSHMAR_PP_PRIVATE_REC_711_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_712
#define KOSHMAR_PP_PRIVATE_REC_711_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_712(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_712_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_712_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_712_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_712_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_712_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_712_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_712_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_712_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_712_##choice
#define KOSHMAR_PP_PRIVATE_REC_712_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_713
#define KOSHMAR_PP_PRIVATE_REC_712_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_713(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_713_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_713_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_713_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_713_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_713_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_713_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_713_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_713_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_713_##choice
#define KOSHMAR_PP_PRIVATE_REC_713_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_714
#define KOSHMAR_PP_PRIVATE_REC_713_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_714(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_714_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_714_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_714_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_714_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_714_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_714_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_714_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_714_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_714_##choice
#define KOSHMAR_PP_PRIVATE_REC_714_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_715
#define KOSHMAR_PP_PRIVATE_REC_714_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_715(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_715_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_715_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_715_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_715_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_715_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_715_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_715_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_715_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_715_##choice
#define KOSHMAR_PP_PRIVATE_REC_715_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_716
#define KOSHMAR_PP_PRIVATE_REC_715_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_716(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_716_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_716_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_716_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_716_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_716_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_716_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_716_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_716_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_716_##choice
#define KOSHMAR_PP_PRIVATE_REC_716_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_717
#define KOSHMAR_PP_PRIVATE_REC_716_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_717(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_717_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_717_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_717_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_717_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_717_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_717_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_717_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_717_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_717_##choice
#define KOSHMAR_PP_PRIVATE_REC_717_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_718
#define KOSHMAR_PP_PRIVATE_REC_717_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_718(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_718_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_718_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_718_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_718_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_718_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_718_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_718_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_718_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_718_##choice
#define KOSHMAR_PP_PRIVATE_REC_718_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_719
#define KOSHMAR_PP_PRIVATE_REC_718_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_719(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_719_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_719_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_719_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_719_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_719_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_719_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_719_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_719_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_719_##choice
#define KOSHMAR_PP_PRIVATE_REC_719_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_720
#define KOSHMAR_PP_PRIVATE_REC_719_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_720(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_720_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_720_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_720_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_720_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_720_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_720_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_720_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_720_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_720_##choice
#define KOSHMAR_PP_PRIVATE_REC_720_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_721
#define KOSHMAR_PP_PRIVATE_REC_720_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_721(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_721_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_721_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_721_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_721_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_721_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_721_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_721_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_721_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_721_##choice
#define KOSHMAR_PP_PRIVATE_REC_721_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_722
#define KOSHMAR_PP_PRIVATE_REC_721_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_722(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_722_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_722_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_722_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_722_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_722_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_722_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_722_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_722_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_722_##choice
#define KOSHMAR_PP_PRIVATE_REC_722_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_723
#define KOSHMAR_PP_PRIVATE_REC_722_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_723(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_723_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_723_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_723_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_723_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_723_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_723_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_723_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_723_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_723_##choice
#define KOSHMAR_PP_PRIVATE_REC_723_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_724
#define KOSHMAR_PP_PRIVATE_REC_723_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_724(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_724_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_724_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_724_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_724_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_724_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_724_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_724_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_724_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_724_##choice
#define KOSHMAR_PP_PRIVATE_REC_724_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_725
#define KOSHMAR_PP_PRIVATE_REC_724_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_725(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_725_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_725_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_725_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_725_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_725_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_725_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_725_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_725_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_725_##choice
#define KOSHMAR_PP_PRIVATE_REC_725_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_726
#define KOSHMAR_PP_PRIVATE_REC_725_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_726(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_726_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_726_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_726_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_726_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_726_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_726_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_726_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_726_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_726_##choice
#define KOSHMAR_PP_PRIVATE_REC_726_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_727
#define KOSHMAR_PP_PRIVATE_REC_726_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_727(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_727_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_727_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_727_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_727_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_727_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_727_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_727_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_727_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_727_##choice
#define KOSHMAR_PP_PRIVATE_REC_727_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_728
#define KOSHMAR_PP_PRIVATE_REC_727_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_728(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_728_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_728_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_728_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_728_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_728_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_728_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_728_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_728_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_728_##choice
#define KOSHMAR_PP_PRIVATE_REC_728_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_729
#define KOSHMAR_PP_PRIVATE_REC_728_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_729(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_729_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_729_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_729_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_729_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_729_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_729_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_729_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_729_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_729_##choice
#define KOSHMAR_PP_PRIVATE_REC_729_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_730
#define KOSHMAR_PP_PRIVATE_REC_729_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_730(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_730_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_730_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_730_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_730_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_730_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_730_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_730_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_730_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_730_##choice
#define KOSHMAR_PP_PRIVATE_REC_730_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_731
#define KOSHMAR_PP_PRIVATE_REC_730_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_731(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_731_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_731_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_731_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_731_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_731_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_731_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_731_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_731_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_731_##choice
#define KOSHMAR_PP_PRIVATE_REC_731_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_732
#define KOSHMAR_PP_PRIVATE_REC_731_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_732(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_732_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_732_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_732_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_732_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_732_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_732_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_732_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_732_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_732_##choice
#define KOSHMAR_PP_PRIVATE_REC_732_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_733
#define KOSHMAR_PP_PRIVATE_REC_732_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_733(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_733_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_733_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_733_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_733_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_733_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_733_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_733_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_733_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_733_##choice
#define KOSHMAR_PP_PRIVATE_REC_733_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_734
#define KOSHMAR_PP_PRIVATE_REC_733_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_734(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_734_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_734_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_734_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_734_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_734_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_734_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_734_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_734_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_734_##choice
#define KOSHMAR_PP_PRIVATE_REC_734_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_735
#define KOSHMAR_PP_PRIVATE_REC_734_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_735(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_735_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_735_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_735_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_735_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_735_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_735_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_735_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_735_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_735_##choice
#define KOSHMAR_PP_PRIVATE_REC_735_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_736
#define KOSHMAR_PP_PRIVATE_REC_735_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_736(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_736_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_736_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_736_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_736_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_736_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_736_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_736_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_736_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_736_##choice
#define KOSHMAR_PP_PRIVATE_REC_736_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_737
#define KOSHMAR_PP_PRIVATE_REC_736_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_737(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_737_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_737_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_737_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_737_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_737_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_737_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_737_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_737_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_737_##choice
#define KOSHMAR_PP_PRIVATE_REC_737_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_738
#define KOSHMAR_PP_PRIVATE_REC_737_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_738(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_738_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_738_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_738_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_738_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_738_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_738_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_738_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_738_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_738_##choice
#define KOSHMAR_PP_PRIVATE_REC_738_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_739
#define KOSHMAR_PP_PRIVATE_REC_738_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_739(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_739_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_739_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_739_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_739_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_739_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_739_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_739_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_739_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_739_##choice
#define KOSHMAR_PP_PRIVATE_REC_739_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_740
#define KOSHMAR_PP_PRIVATE_REC_739_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_740(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_740_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_740_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_740_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_740_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_740_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_740_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_740_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_740_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_740_##choice
#define KOSHMAR_PP_PRIVATE_REC_740_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_741
#define KOSHMAR_PP_PRIVATE_REC_740_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_741(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_741_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_741_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_741_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_741_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_741_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_741_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_741_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_741_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_741_##choice
#define KOSHMAR_PP_PRIVATE_REC_741_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_742
#define KOSHMAR_PP_PRIVATE_REC_741_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_742(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_742_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_742_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_742_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_742_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_742_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_742_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_742_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_742_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_742_##choice
#define KOSHMAR_PP_PRIVATE_REC_742_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_743
#define KOSHMAR_PP_PRIVATE_REC_742_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_743(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_743_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_743_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_743_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_743_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_743_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_743_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_743_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_743_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_743_##choice
#define KOSHMAR_PP_PRIVATE_REC_743_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_744
#define KOSHMAR_PP_PRIVATE_REC_743_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_744(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_744_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_744_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_744_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_744_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_744_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_744_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_744_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_744_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_744_##choice
#define KOSHMAR_PP_PRIVATE_REC_744_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_745
#define KOSHMAR_PP_PRIVATE_REC_744_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_745(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_745_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_745_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_745_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_745_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_745_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_745_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_745_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_745_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_745_##choice
#define KOSHMAR_PP_PRIVATE_REC_745_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_746
#define KOSHMAR_PP_PRIVATE_REC_745_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_746(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_746_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_746_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_746_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_746_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_746_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_746_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_746_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_746_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_746_##choice
#define KOSHMAR_PP_PRIVATE_REC_746_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_747
#define KOSHMAR_PP_PRIVATE_REC_746_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_747(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_747_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_747_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_747_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_747_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_747_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_747_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_747_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_747_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_747_##choice
#define KOSHMAR_PP_PRIVATE_REC_747_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_748
#define KOSHMAR_PP_PRIVATE_REC_747_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_748(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_748_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_748_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_748_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_748_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_748_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_748_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_748_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_748_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_748_##choice
#define KOSHMAR_PP_PRIVATE_REC_748_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_749
#define KOSHMAR_PP_PRIVATE_REC_748_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_749(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_749_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_749_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_749_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_749_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_749_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_749_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_749_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_749_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_749_##choice
#define KOSHMAR_PP_PRIVATE_REC_749_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_750
#define KOSHMAR_PP_PRIVATE_REC_749_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_750(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_750_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_750_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_750_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_750_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_750_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_750_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_750_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_750_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_750_##choice
#define KOSHMAR_PP_PRIVATE_REC_750_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_751
#define KOSHMAR_PP_PRIVATE_REC_750_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_751(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_751_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_751_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_751_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_751_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_751_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_751_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_751_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_751_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_751_##choice
#define KOSHMAR_PP_PRIVATE_REC_751_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_752
#define KOSHMAR_PP_PRIVATE_REC_751_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_752(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_752_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_752_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_752_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_752_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_752_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_752_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_752_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_752_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_752_##choice
#define KOSHMAR_PP_PRIVATE_REC_752_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_753
#define KOSHMAR_PP_PRIVATE_REC_752_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_753(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_753_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_753_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_753_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_753_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_753_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_753_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_753_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_753_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_753_##choice
#define KOSHMAR_PP_PRIVATE_REC_753_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_754
#define KOSHMAR_PP_PRIVATE_REC_753_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_754(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_754_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_754_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_754_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_754_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_754_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_754_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_754_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_754_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_754_##choice
#define KOSHMAR_PP_PRIVATE_REC_754_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_755
#define KOSHMAR_PP_PRIVATE_REC_754_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_755(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_755_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_755_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_755_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_755_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_755_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_755_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_755_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_755_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_755_##choice
#define KOSHMAR_PP_PRIVATE_REC_755_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_756
#define KOSHMAR_PP_PRIVATE_REC_755_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_756(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_756_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_756_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_756_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_756_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_756_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_756_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_756_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_756_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_756_##choice
#define KOSHMAR_PP_PRIVATE_REC_756_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_757
#define KOSHMAR_PP_PRIVATE_REC_756_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_757(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_757_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_757_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_757_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_757_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_757_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_757_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_757_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_757_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_757_##choice
#define KOSHMAR_PP_PRIVATE_REC_757_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_758
#define KOSHMAR_PP_PRIVATE_REC_757_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_758(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_758_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_758_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_758_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_758_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_758_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_758_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_758_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_758_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_758_##choice
#define KOSHMAR_PP_PRIVATE_REC_758_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_759
#define KOSHMAR_PP_PRIVATE_REC_758_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_759(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_759_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_759_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_759_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_759_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_759_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_759_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_759_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_759_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_759_##choice
#define KOSHMAR_PP_PRIVATE_REC_759_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_760
#define KOSHMAR_PP_PRIVATE_REC_759_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_760(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_760_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_760_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_760_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_760_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_760_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_760_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_760_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_760_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_760_##choice
#define KOSHMAR_PP_PRIVATE_REC_760_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_761
#define KOSHMAR_PP_PRIVATE_REC_760_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_761(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_761_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_761_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_761_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_761_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_761_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_761_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_761_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_761_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_761_##choice
#define KOSHMAR_PP_PRIVATE_REC_761_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_762
#define KOSHMAR_PP_PRIVATE_REC_761_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_762(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_762_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_762_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_762_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_762_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_762_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_762_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_762_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_762_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_762_##choice
#define KOSHMAR_PP_PRIVATE_REC_762_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_763
#define KOSHMAR_PP_PRIVATE_REC_762_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_763(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_763_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_763_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_763_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_763_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_763_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_763_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_763_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_763_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_763_##choice
#define KOSHMAR_PP_PRIVATE_REC_763_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_764
#define KOSHMAR_PP_PRIVATE_REC_763_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_764(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_764_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_764_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_764_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_764_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_764_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_764_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_764_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_764_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_764_##choice
#define KOSHMAR_PP_PRIVATE_REC_764_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_765
#define KOSHMAR_PP_PRIVATE_REC_764_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_765(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_765_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_765_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_765_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_765_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_765_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_765_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_765_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_765_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_765_##choice
#define KOSHMAR_PP_PRIVATE_REC_765_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_766
#define KOSHMAR_PP_PRIVATE_REC_765_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_766(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_766_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_766_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_766_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_766_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_766_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_766_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_766_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_766_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_766_##choice
#define KOSHMAR_PP_PRIVATE_REC_766_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_767
#define KOSHMAR_PP_PRIVATE_REC_766_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_767(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_767_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_767_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_767_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_767_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_767_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_767_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_767_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_767_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_767_##choice
#define KOSHMAR_PP_PRIVATE_REC_767_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_768
#define KOSHMAR_PP_PRIVATE_REC_767_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_768(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_768_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_768_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_768_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_768_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_768_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_768_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_768_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_768_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_768_##choice
#define KOSHMAR_PP_PRIVATE_REC_768_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_769
#define KOSHMAR_PP_PRIVATE_REC_768_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_769(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_769_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_769_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_769_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_769_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_769_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_769_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_769_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_769_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_769_##choice
#define KOSHMAR_PP_PRIVATE_REC_769_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_770
#define KOSHMAR_PP_PRIVATE_REC_769_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_770(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_770_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_770_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_770_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_770_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_770_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_770_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_770_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_770_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_770_##choice
#define KOSHMAR_PP_PRIVATE_REC_770_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_771
#define KOSHMAR_PP_PRIVATE_REC_770_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_771(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_771_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_771_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_771_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_771_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_771_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_771_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_771_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_771_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_771_##choice
#define KOSHMAR_PP_PRIVATE_REC_771_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_772
#define KOSHMAR_PP_PRIVATE_REC_771_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_772(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_772_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_772_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_772_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_772_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_772_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_772_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_772_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_772_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_772_##choice
#define KOSHMAR_PP_PRIVATE_REC_772_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_773
#define KOSHMAR_PP_PRIVATE_REC_772_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_773(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_773_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_773_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_773_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_773_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_773_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_773_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_773_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_773_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_773_##choice
#define KOSHMAR_PP_PRIVATE_REC_773_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_774
#define KOSHMAR_PP_PRIVATE_REC_773_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_774(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_774_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_774_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_774_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_774_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_774_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_774_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_774_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_774_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_774_##choice
#define KOSHMAR_PP_PRIVATE_REC_774_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_775
#define KOSHMAR_PP_PRIVATE_REC_774_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_775(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_775_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_775_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_775_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_775_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_775_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_775_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_775_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_775_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_775_##choice
#define KOSHMAR_PP_PRIVATE_REC_775_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_776
#define KOSHMAR_PP_PRIVATE_REC_775_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_776(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_776_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_776_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_776_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_776_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_776_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_776_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_776_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_776_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_776_##choice
#define KOSHMAR_PP_PRIVATE_REC_776_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_777
#define KOSHMAR_PP_PRIVATE_REC_776_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_777(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_777_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_777_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_777_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_777_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_777_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_777_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_777_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_777_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_777_##choice
#define KOSHMAR_PP_PRIVATE_REC_777_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_778
#define KOSHMAR_PP_PRIVATE_REC_777_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_778(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_778_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_778_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_778_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_778_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_778_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_778_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_778_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_778_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_778_##choice
#define KOSHMAR_PP_PRIVATE_REC_778_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_779
#define KOSHMAR_PP_PRIVATE_REC_778_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_779(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_779_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_779_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_779_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_779_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_779_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_779_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_779_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_779_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_779_##choice
#define KOSHMAR_PP_PRIVATE_REC_779_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_780
#define KOSHMAR_PP_PRIVATE_REC_779_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_780(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_780_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_780_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_780_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_780_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_780_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_780_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_780_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_780_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_780_##choice
#define KOSHMAR_PP_PRIVATE_REC_780_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_781
#define KOSHMAR_PP_PRIVATE_REC_780_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_781(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_781_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_781_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_781_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_781_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_781_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_781_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_781_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_781_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_781_##choice
#define KOSHMAR_PP_PRIVATE_REC_781_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_782
#define KOSHMAR_PP_PRIVATE_REC_781_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_782(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_782_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_782_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_782_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_782_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_782_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_782_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_782_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_782_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_782_##choice
#define KOSHMAR_PP_PRIVATE_REC_782_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_783
#define KOSHMAR_PP_PRIVATE_REC_782_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_783(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_783_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_783_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_783_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_783_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_783_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_783_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_783_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_783_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_783_##choice
#define KOSHMAR_PP_PRIVATE_REC_783_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_784
#define KOSHMAR_PP_PRIVATE_REC_783_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_784(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_784_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_784_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_784_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_784_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_784_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_784_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_784_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_784_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_784_##choice
#define KOSHMAR_PP_PRIVATE_REC_784_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_785
#define KOSHMAR_PP_PRIVATE_REC_784_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_785(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_785_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_785_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_785_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_785_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_785_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_785_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_785_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_785_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_785_##choice
#define KOSHMAR_PP_PRIVATE_REC_785_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_786
#define KOSHMAR_PP_PRIVATE_REC_785_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_786(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_786_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_786_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_786_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_786_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_786_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_786_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_786_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_786_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_786_##choice
#define KOSHMAR_PP_PRIVATE_REC_786_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_787
#define KOSHMAR_PP_PRIVATE_REC_786_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_787(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_787_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_787_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_787_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_787_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_787_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_787_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_787_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_787_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_787_##choice
#define KOSHMAR_PP_PRIVATE_REC_787_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_788
#define KOSHMAR_PP_PRIVATE_REC_787_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_788(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_788_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_788_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_788_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_788_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_788_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_788_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_788_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_788_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_788_##choice
#define KOSHMAR_PP_PRIVATE_REC_788_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_789
#define KOSHMAR_PP_PRIVATE_REC_788_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_789(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_789_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_789_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_789_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_789_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_789_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_789_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_789_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_789_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_789_##choice
#define KOSHMAR_PP_PRIVATE_REC_789_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_790
#define KOSHMAR_PP_PRIVATE_REC_789_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_790(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_790_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_790_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_790_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_790_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_790_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_790_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_790_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_790_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_790_##choice
#define KOSHMAR_PP_PRIVATE_REC_790_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_791
#define KOSHMAR_PP_PRIVATE_REC_790_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_791(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_791_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_791_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_791_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_791_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_791_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_791_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_791_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_791_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_791_##choice
#define KOSHMAR_PP_PRIVATE_REC_791_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_792
#define KOSHMAR_PP_PRIVATE_REC_791_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_792(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_792_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_792_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_792_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_792_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_792_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_792_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_792_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_792_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_792_##choice
#define KOSHMAR_PP_PRIVATE_REC_792_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_793
#define KOSHMAR_PP_PRIVATE_REC_792_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_793(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_793_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_793_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_793_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_793_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_793_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_793_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_793_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_793_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_793_##choice
#define KOSHMAR_PP_PRIVATE_REC_793_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_794
#define KOSHMAR_PP_PRIVATE_REC_793_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_794(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_794_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_794_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_794_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_794_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_794_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_794_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_794_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_794_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_794_##choice
#define KOSHMAR_PP_PRIVATE_REC_794_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_795
#define KOSHMAR_PP_PRIVATE_REC_794_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_795(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_795_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_795_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_795_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_795_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_795_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_795_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_795_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_795_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_795_##choice
#define KOSHMAR_PP_PRIVATE_REC_795_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_796
#define KOSHMAR_PP_PRIVATE_REC_795_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_796(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_796_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_796_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_796_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_796_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_796_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_796_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_796_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_796_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_796_##choice
#define KOSHMAR_PP_PRIVATE_REC_796_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_797
#define KOSHMAR_PP_PRIVATE_REC_796_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_797(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_797_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_797_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_797_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_797_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_797_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_797_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_797_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_797_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_797_##choice
#define KOSHMAR_PP_PRIVATE_REC_797_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_798
#define KOSHMAR_PP_PRIVATE_REC_797_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_798(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_798_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_798_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_798_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_798_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_798_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_798_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_798_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_798_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_798_##choice
#define KOSHMAR_PP_PRIVATE_REC_798_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_799
#define KOSHMAR_PP_PRIVATE_REC_798_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_799(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_799_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_799_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_799_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_799_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_799_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_799_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_799_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_799_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_799_##choice
#define KOSHMAR_PP_PRIVATE_REC_799_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_800
#define KOSHMAR_PP_PRIVATE_REC_799_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_800(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_800_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_800_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_800_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_800_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_800_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_800_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_800_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_800_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_800_##choice
#define KOSHMAR_PP_PRIVATE_REC_800_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_801
#define KOSHMAR_PP_PRIVATE_REC_800_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_801(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_801_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_801_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_801_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_801_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_801_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_801_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_801_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_801_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_801_##choice
#define KOSHMAR_PP_PRIVATE_REC_801_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_802
#define KOSHMAR_PP_PRIVATE_REC_801_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_802(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_802_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_802_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_802_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_802_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_802_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_802_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_802_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_802_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_802_##choice
#define KOSHMAR_PP_PRIVATE_REC_802_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_803
#define KOSHMAR_PP_PRIVATE_REC_802_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_803(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_803_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_803_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_803_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_803_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_803_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_803_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_803_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_803_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_803_##choice
#define KOSHMAR_PP_PRIVATE_REC_803_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_804
#define KOSHMAR_PP_PRIVATE_REC_803_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_804(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_804_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_804_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_804_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_804_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_804_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_804_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_804_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_804_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_804_##choice
#define KOSHMAR_PP_PRIVATE_REC_804_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_805
#define KOSHMAR_PP_PRIVATE_REC_804_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_805(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_805_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_805_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_805_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_805_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_805_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_805_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_805_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_805_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_805_##choice
#define KOSHMAR_PP_PRIVATE_REC_805_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_806
#define KOSHMAR_PP_PRIVATE_REC_805_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_806(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_806_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_806_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_806_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_806_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_806_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_806_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_806_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_806_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_806_##choice
#define KOSHMAR_PP_PRIVATE_REC_806_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_807
#define KOSHMAR_PP_PRIVATE_REC_806_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_807(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_807_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_807_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_807_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_807_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_807_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_807_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_807_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_807_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_807_##choice
#define KOSHMAR_PP_PRIVATE_REC_807_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_808
#define KOSHMAR_PP_PRIVATE_REC_807_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_808(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_808_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_808_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_808_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_808_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_808_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_808_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_808_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_808_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_808_##choice
#define KOSHMAR_PP_PRIVATE_REC_808_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_809
#define KOSHMAR_PP_PRIVATE_REC_808_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_809(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_809_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_809_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_809_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_809_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_809_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_809_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_809_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_809_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_809_##choice
#define KOSHMAR_PP_PRIVATE_REC_809_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_810
#define KOSHMAR_PP_PRIVATE_REC_809_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_810(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_810_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_810_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_810_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_810_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_810_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_810_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_810_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_810_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_810_##choice
#define KOSHMAR_PP_PRIVATE_REC_810_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_811
#define KOSHMAR_PP_PRIVATE_REC_810_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_811(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_811_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_811_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_811_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_811_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_811_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_811_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_811_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_811_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_811_##choice
#define KOSHMAR_PP_PRIVATE_REC_811_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_812
#define KOSHMAR_PP_PRIVATE_REC_811_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_812(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_812_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_812_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_812_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_812_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_812_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_812_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_812_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_812_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_812_##choice
#define KOSHMAR_PP_PRIVATE_REC_812_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_813
#define KOSHMAR_PP_PRIVATE_REC_812_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_813(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_813_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_813_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_813_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_813_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_813_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_813_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_813_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_813_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_813_##choice
#define KOSHMAR_PP_PRIVATE_REC_813_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_814
#define KOSHMAR_PP_PRIVATE_REC_813_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_814(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_814_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_814_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_814_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_814_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_814_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_814_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_814_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_814_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_814_##choice
#define KOSHMAR_PP_PRIVATE_REC_814_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_815
#define KOSHMAR_PP_PRIVATE_REC_814_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_815(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_815_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_815_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_815_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_815_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_815_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_815_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_815_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_815_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_815_##choice
#define KOSHMAR_PP_PRIVATE_REC_815_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_816
#define KOSHMAR_PP_PRIVATE_REC_815_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_816(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_816_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_816_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_816_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_816_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_816_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_816_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_816_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_816_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_816_##choice
#define KOSHMAR_PP_PRIVATE_REC_816_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_817
#define KOSHMAR_PP_PRIVATE_REC_816_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_817(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_817_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_817_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_817_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_817_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_817_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_817_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_817_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_817_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_817_##choice
#define KOSHMAR_PP_PRIVATE_REC_817_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_818
#define KOSHMAR_PP_PRIVATE_REC_817_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_818(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_818_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_818_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_818_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_818_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_818_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_818_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_818_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_818_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_818_##choice
#define KOSHMAR_PP_PRIVATE_REC_818_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_819
#define KOSHMAR_PP_PRIVATE_REC_818_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_819(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_819_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_819_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_819_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_819_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_819_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_819_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_819_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_819_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_819_##choice
#define KOSHMAR_PP_PRIVATE_REC_819_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_820
#define KOSHMAR_PP_PRIVATE_REC_819_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_820(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_820_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_820_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_820_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_820_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_820_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_820_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_820_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_820_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_820_##choice
#define KOSHMAR_PP_PRIVATE_REC_820_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_821
#define KOSHMAR_PP_PRIVATE_REC_820_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_821(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_821_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_821_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_821_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_821_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_821_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_821_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_821_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_821_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_821_##choice
#define KOSHMAR_PP_PRIVATE_REC_821_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_822
#define KOSHMAR_PP_PRIVATE_REC_821_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_822(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_822_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_822_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_822_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_822_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_822_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_822_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_822_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_822_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_822_##choice
#define KOSHMAR_PP_PRIVATE_REC_822_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_823
#define KOSHMAR_PP_PRIVATE_REC_822_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_823(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_823_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_823_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_823_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_823_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_823_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_823_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_823_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_823_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_823_##choice
#define KOSHMAR_PP_PRIVATE_REC_823_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_824
#define KOSHMAR_PP_PRIVATE_REC_823_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_824(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_824_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_824_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_824_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_824_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_824_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_824_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_824_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_824_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_824_##choice
#define KOSHMAR_PP_PRIVATE_REC_824_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_825
#define KOSHMAR_PP_PRIVATE_REC_824_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_825(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_825_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_825_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_825_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_825_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_825_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_825_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_825_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_825_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_825_##choice
#define KOSHMAR_PP_PRIVATE_REC_825_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_826
#define KOSHMAR_PP_PRIVATE_REC_825_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_826(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_826_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_826_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_826_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_826_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_826_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_826_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_826_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_826_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_826_##choice
#define KOSHMAR_PP_PRIVATE_REC_826_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_827
#define KOSHMAR_PP_PRIVATE_REC_826_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_827(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_827_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_827_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_827_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_827_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_827_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_827_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_827_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_827_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_827_##choice
#define KOSHMAR_PP_PRIVATE_REC_827_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_828
#define KOSHMAR_PP_PRIVATE_REC_827_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_828(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_828_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_828_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_828_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_828_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_828_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_828_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_828_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_828_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_828_##choice
#define KOSHMAR_PP_PRIVATE_REC_828_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_829
#define KOSHMAR_PP_PRIVATE_REC_828_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_829(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_829_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_829_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_829_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_829_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_829_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_829_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_829_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_829_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_829_##choice
#define KOSHMAR_PP_PRIVATE_REC_829_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_830
#define KOSHMAR_PP_PRIVATE_REC_829_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_830(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_830_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_830_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_830_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_830_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_830_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_830_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_830_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_830_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_830_##choice
#define KOSHMAR_PP_PRIVATE_REC_830_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_831
#define KOSHMAR_PP_PRIVATE_REC_830_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_831(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_831_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_831_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_831_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_831_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_831_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_831_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_831_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_831_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_831_##choice
#define KOSHMAR_PP_PRIVATE_REC_831_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_832
#define KOSHMAR_PP_PRIVATE_REC_831_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_832(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_832_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_832_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_832_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_832_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_832_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_832_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_832_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_832_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_832_##choice
#define KOSHMAR_PP_PRIVATE_REC_832_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_833
#define KOSHMAR_PP_PRIVATE_REC_832_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_833(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_833_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_833_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_833_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_833_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_833_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_833_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_833_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_833_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_833_##choice
#define KOSHMAR_PP_PRIVATE_REC_833_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_834
#define KOSHMAR_PP_PRIVATE_REC_833_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_834(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_834_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_834_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_834_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_834_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_834_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_834_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_834_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_834_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_834_##choice
#define KOSHMAR_PP_PRIVATE_REC_834_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_835
#define KOSHMAR_PP_PRIVATE_REC_834_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_835(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_835_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_835_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_835_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_835_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_835_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_835_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_835_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_835_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_835_##choice
#define KOSHMAR_PP_PRIVATE_REC_835_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_836
#define KOSHMAR_PP_PRIVATE_REC_835_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_836(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_836_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_836_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_836_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_836_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_836_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_836_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_836_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_836_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_836_##choice
#define KOSHMAR_PP_PRIVATE_REC_836_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_837
#define KOSHMAR_PP_PRIVATE_REC_836_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_837(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_837_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_837_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_837_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_837_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_837_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_837_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_837_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_837_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_837_##choice
#define KOSHMAR_PP_PRIVATE_REC_837_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_838
#define KOSHMAR_PP_PRIVATE_REC_837_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_838(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_838_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_838_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_838_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_838_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_838_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_838_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_838_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_838_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_838_##choice
#define KOSHMAR_PP_PRIVATE_REC_838_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_839
#define KOSHMAR_PP_PRIVATE_REC_838_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_839(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_839_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_839_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_839_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_839_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_839_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_839_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_839_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_839_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_839_##choice
#define KOSHMAR_PP_PRIVATE_REC_839_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_840
#define KOSHMAR_PP_PRIVATE_REC_839_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_840(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_840_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_840_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_840_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_840_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_840_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_840_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_840_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_840_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_840_##choice
#define KOSHMAR_PP_PRIVATE_REC_840_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_841
#define KOSHMAR_PP_PRIVATE_REC_840_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_841(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_841_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_841_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_841_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_841_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_841_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_841_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_841_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_841_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_841_##choice
#define KOSHMAR_PP_PRIVATE_REC_841_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_842
#define KOSHMAR_PP_PRIVATE_REC_841_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_842(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_842_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_842_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_842_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_842_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_842_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_842_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_842_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_842_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_842_##choice
#define KOSHMAR_PP_PRIVATE_REC_842_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_843
#define KOSHMAR_PP_PRIVATE_REC_842_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_843(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_843_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_843_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_843_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_843_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_843_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_843_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_843_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_843_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_843_##choice
#define KOSHMAR_PP_PRIVATE_REC_843_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_844
#define KOSHMAR_PP_PRIVATE_REC_843_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_844(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_844_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_844_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_844_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_844_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_844_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_844_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_844_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_844_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_844_##choice
#define KOSHMAR_PP_PRIVATE_REC_844_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_845
#define KOSHMAR_PP_PRIVATE_REC_844_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_845(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_845_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_845_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_845_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_845_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_845_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_845_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_845_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_845_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_845_##choice
#define KOSHMAR_PP_PRIVATE_REC_845_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_846
#define KOSHMAR_PP_PRIVATE_REC_845_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_846(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_846_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_846_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_846_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_846_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_846_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_846_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_846_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_846_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_846_##choice
#define KOSHMAR_PP_PRIVATE_REC_846_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_847
#define KOSHMAR_PP_PRIVATE_REC_846_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_847(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_847_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_847_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_847_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_847_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_847_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_847_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_847_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_847_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_847_##choice
#define KOSHMAR_PP_PRIVATE_REC_847_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_848
#define KOSHMAR_PP_PRIVATE_REC_847_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_848(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_848_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_848_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_848_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_848_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_848_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_848_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_848_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_848_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_848_##choice
#define KOSHMAR_PP_PRIVATE_REC_848_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_849
#define KOSHMAR_PP_PRIVATE_REC_848_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_849(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_849_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_849_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_849_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_849_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_849_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_849_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_849_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_849_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_849_##choice
#define KOSHMAR_PP_PRIVATE_REC_849_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_850
#define KOSHMAR_PP_PRIVATE_REC_849_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_850(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_850_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_850_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_850_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_850_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_850_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_850_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_850_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_850_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_850_##choice
#define KOSHMAR_PP_PRIVATE_REC_850_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_851
#define KOSHMAR_PP_PRIVATE_REC_850_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_851(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_851_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_851_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_851_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_851_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_851_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_851_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_851_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_851_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_851_##choice
#define KOSHMAR_PP_PRIVATE_REC_851_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_852
#define KOSHMAR_PP_PRIVATE_REC_851_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_852(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_852_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_852_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_852_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_852_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_852_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_852_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_852_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_852_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_852_##choice
#define KOSHMAR_PP_PRIVATE_REC_852_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_853
#define KOSHMAR_PP_PRIVATE_REC_852_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_853(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_853_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_853_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_853_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_853_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_853_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_853_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_853_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_853_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_853_##choice
#define KOSHMAR_PP_PRIVATE_REC_853_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_854
#define KOSHMAR_PP_PRIVATE_REC_853_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_854(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_854_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_854_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_854_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_854_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_854_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_854_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_854_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_854_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_854_##choice
#define KOSHMAR_PP_PRIVATE_REC_854_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_855
#define KOSHMAR_PP_PRIVATE_REC_854_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_855(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_855_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_855_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_855_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_855_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_855_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_855_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_855_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_855_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_855_##choice
#define KOSHMAR_PP_PRIVATE_REC_855_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_856
#define KOSHMAR_PP_PRIVATE_REC_855_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_856(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_856_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_856_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_856_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_856_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_856_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_856_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_856_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_856_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_856_##choice
#define KOSHMAR_PP_PRIVATE_REC_856_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_857
#define KOSHMAR_PP_PRIVATE_REC_856_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_857(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_857_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_857_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_857_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_857_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_857_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_857_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_857_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_857_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_857_##choice
#define KOSHMAR_PP_PRIVATE_REC_857_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_858
#define KOSHMAR_PP_PRIVATE_REC_857_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_858(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_858_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_858_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_858_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_858_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_858_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_858_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_858_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_858_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_858_##choice
#define KOSHMAR_PP_PRIVATE_REC_858_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_859
#define KOSHMAR_PP_PRIVATE_REC_858_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_859(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_859_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_859_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_859_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_859_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_859_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_859_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_859_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_859_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_859_##choice
#define KOSHMAR_PP_PRIVATE_REC_859_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_860
#define KOSHMAR_PP_PRIVATE_REC_859_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_860(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_860_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_860_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_860_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_860_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_860_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_860_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_860_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_860_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_860_##choice
#define KOSHMAR_PP_PRIVATE_REC_860_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_861
#define KOSHMAR_PP_PRIVATE_REC_860_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_861(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_861_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_861_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_861_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_861_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_861_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_861_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_861_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_861_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_861_##choice
#define KOSHMAR_PP_PRIVATE_REC_861_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_862
#define KOSHMAR_PP_PRIVATE_REC_861_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_862(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_862_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_862_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_862_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_862_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_862_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_862_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_862_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_862_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_862_##choice
#define KOSHMAR_PP_PRIVATE_REC_862_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_863
#define KOSHMAR_PP_PRIVATE_REC_862_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_863(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_863_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_863_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_863_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_863_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_863_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_863_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_863_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_863_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_863_##choice
#define KOSHMAR_PP_PRIVATE_REC_863_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_864
#define KOSHMAR_PP_PRIVATE_REC_863_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_864(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_864_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_864_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_864_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_864_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_864_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_864_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_864_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_864_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_864_##choice
#define KOSHMAR_PP_PRIVATE_REC_864_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_865
#define KOSHMAR_PP_PRIVATE_REC_864_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_865(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_865_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_865_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_865_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_865_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_865_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_865_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_865_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_865_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_865_##choice
#define KOSHMAR_PP_PRIVATE_REC_865_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_866
#define KOSHMAR_PP_PRIVATE_REC_865_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_866(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_866_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_866_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_866_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_866_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_866_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_866_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_866_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_866_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_866_##choice
#define KOSHMAR_PP_PRIVATE_REC_866_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_867
#define KOSHMAR_PP_PRIVATE_REC_866_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_867(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_867_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_867_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_867_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_867_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_867_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_867_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_867_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_867_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_867_##choice
#define KOSHMAR_PP_PRIVATE_REC_867_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_868
#define KOSHMAR_PP_PRIVATE_REC_867_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_868(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_868_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_868_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_868_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_868_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_868_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_868_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_868_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_868_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_868_##choice
#define KOSHMAR_PP_PRIVATE_REC_868_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_869
#define KOSHMAR_PP_PRIVATE_REC_868_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_869(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_869_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_869_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_869_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_869_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_869_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_869_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_869_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_869_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_869_##choice
#define KOSHMAR_PP_PRIVATE_REC_869_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_870
#define KOSHMAR_PP_PRIVATE_REC_869_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_870(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_870_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_870_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_870_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_870_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_870_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_870_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_870_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_870_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_870_##choice
#define KOSHMAR_PP_PRIVATE_REC_870_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_871
#define KOSHMAR_PP_PRIVATE_REC_870_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_871(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_871_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_871_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_871_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_871_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_871_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_871_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_871_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_871_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_871_##choice
#define KOSHMAR_PP_PRIVATE_REC_871_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_872
#define KOSHMAR_PP_PRIVATE_REC_871_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_872(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_872_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_872_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_872_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_872_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_872_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_872_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_872_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_872_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_872_##choice
#define KOSHMAR_PP_PRIVATE_REC_872_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_873
#define KOSHMAR_PP_PRIVATE_REC_872_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_873(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_873_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_873_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_873_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_873_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_873_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_873_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_873_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_873_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_873_##choice
#define KOSHMAR_PP_PRIVATE_REC_873_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_874
#define KOSHMAR_PP_PRIVATE_REC_873_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_874(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_874_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_874_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_874_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_874_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_874_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_874_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_874_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_874_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_874_##choice
#define KOSHMAR_PP_PRIVATE_REC_874_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_875
#define KOSHMAR_PP_PRIVATE_REC_874_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_875(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_875_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_875_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_875_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_875_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_875_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_875_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_875_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_875_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_875_##choice
#define KOSHMAR_PP_PRIVATE_REC_875_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_876
#define KOSHMAR_PP_PRIVATE_REC_875_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_876(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_876_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_876_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_876_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_876_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_876_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_876_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_876_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_876_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_876_##choice
#define KOSHMAR_PP_PRIVATE_REC_876_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_877
#define KOSHMAR_PP_PRIVATE_REC_876_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_877(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_877_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_877_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_877_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_877_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_877_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_877_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_877_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_877_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_877_##choice
#define KOSHMAR_PP_PRIVATE_REC_877_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_878
#define KOSHMAR_PP_PRIVATE_REC_877_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_878(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_878_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_878_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_878_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_878_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_878_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_878_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_878_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_878_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_878_##choice
#define KOSHMAR_PP_PRIVATE_REC_878_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_879
#define KOSHMAR_PP_PRIVATE_REC_878_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_879(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_879_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_879_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_879_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_879_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_879_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_879_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_879_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_879_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_879_##choice
#define KOSHMAR_PP_PRIVATE_REC_879_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_880
#define KOSHMAR_PP_PRIVATE_REC_879_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_880(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_880_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_880_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_880_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_880_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_880_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_880_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_880_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_880_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_880_##choice
#define KOSHMAR_PP_PRIVATE_REC_880_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_881
#define KOSHMAR_PP_PRIVATE_REC_880_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_881(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_881_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_881_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_881_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_881_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_881_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_881_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_881_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_881_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_881_##choice
#define KOSHMAR_PP_PRIVATE_REC_881_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_882
#define KOSHMAR_PP_PRIVATE_REC_881_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_882(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_882_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_882_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_882_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_882_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_882_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_882_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_882_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_882_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_882_##choice
#define KOSHMAR_PP_PRIVATE_REC_882_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_883
#define KOSHMAR_PP_PRIVATE_REC_882_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_883(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_883_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_883_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_883_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_883_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_883_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_883_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_883_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_883_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_883_##choice
#define KOSHMAR_PP_PRIVATE_REC_883_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_884
#define KOSHMAR_PP_PRIVATE_REC_883_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_884(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_884_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_884_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_884_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_884_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_884_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_884_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_884_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_884_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_884_##choice
#define KOSHMAR_PP_PRIVATE_REC_884_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_885
#define KOSHMAR_PP_PRIVATE_REC_884_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_885(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_885_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_885_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_885_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_885_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_885_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_885_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_885_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_885_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_885_##choice
#define KOSHMAR_PP_PRIVATE_REC_885_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_886
#define KOSHMAR_PP_PRIVATE_REC_885_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_886(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_886_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_886_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_886_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_886_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_886_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_886_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_886_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_886_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_886_##choice
#define KOSHMAR_PP_PRIVATE_REC_886_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_887
#define KOSHMAR_PP_PRIVATE_REC_886_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_887(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_887_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_887_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_887_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_887_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_887_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_887_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_887_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_887_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_887_##choice
#define KOSHMAR_PP_PRIVATE_REC_887_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_888
#define KOSHMAR_PP_PRIVATE_REC_887_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_888(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_888_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_888_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_888_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_888_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_888_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_888_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_888_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_888_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_888_##choice
#define KOSHMAR_PP_PRIVATE_REC_888_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_889
#define KOSHMAR_PP_PRIVATE_REC_888_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_889(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_889_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_889_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_889_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_889_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_889_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_889_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_889_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_889_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_889_##choice
#define KOSHMAR_PP_PRIVATE_REC_889_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_890
#define KOSHMAR_PP_PRIVATE_REC_889_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_890(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_890_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_890_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_890_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_890_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_890_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_890_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_890_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_890_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_890_##choice
#define KOSHMAR_PP_PRIVATE_REC_890_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_891
#define KOSHMAR_PP_PRIVATE_REC_890_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_891(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_891_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_891_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_891_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_891_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_891_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_891_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_891_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_891_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_891_##choice
#define KOSHMAR_PP_PRIVATE_REC_891_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_892
#define KOSHMAR_PP_PRIVATE_REC_891_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_892(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_892_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_892_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_892_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_892_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_892_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_892_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_892_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_892_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_892_##choice
#define KOSHMAR_PP_PRIVATE_REC_892_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_893
#define KOSHMAR_PP_PRIVATE_REC_892_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_893(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_893_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_893_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_893_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_893_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_893_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_893_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_893_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_893_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_893_##choice
#define KOSHMAR_PP_PRIVATE_REC_893_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_894
#define KOSHMAR_PP_PRIVATE_REC_893_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_894(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_894_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_894_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_894_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_894_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_894_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_894_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_894_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_894_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_894_##choice
#define KOSHMAR_PP_PRIVATE_REC_894_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_895
#define KOSHMAR_PP_PRIVATE_REC_894_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_895(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_895_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_895_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_895_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_895_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_895_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_895_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_895_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_895_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_895_##choice
#define KOSHMAR_PP_PRIVATE_REC_895_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_896
#define KOSHMAR_PP_PRIVATE_REC_895_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_896(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_896_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_896_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_896_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_896_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_896_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_896_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_896_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_896_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_896_##choice
#define KOSHMAR_PP_PRIVATE_REC_896_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_897
#define KOSHMAR_PP_PRIVATE_REC_896_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_897(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_897_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_897_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_897_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_897_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_897_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_897_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_897_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_897_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_897_##choice
#define KOSHMAR_PP_PRIVATE_REC_897_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_898
#define KOSHMAR_PP_PRIVATE_REC_897_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_898(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_898_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_898_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_898_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_898_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_898_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_898_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_898_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_898_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_898_##choice
#define KOSHMAR_PP_PRIVATE_REC_898_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_899
#define KOSHMAR_PP_PRIVATE_REC_898_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_899(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_899_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_899_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_899_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_899_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_899_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_899_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_899_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_899_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_899_##choice
#define KOSHMAR_PP_PRIVATE_REC_899_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_900
#define KOSHMAR_PP_PRIVATE_REC_899_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_900(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_900_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_900_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_900_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_900_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_900_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_900_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_900_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_900_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_900_##choice
#define KOSHMAR_PP_PRIVATE_REC_900_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_901
#define KOSHMAR_PP_PRIVATE_REC_900_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_901(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_901_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_901_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_901_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_901_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_901_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_901_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_901_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_901_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_901_##choice
#define KOSHMAR_PP_PRIVATE_REC_901_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_902
#define KOSHMAR_PP_PRIVATE_REC_901_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_902(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_902_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_902_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_902_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_902_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_902_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_902_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_902_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_902_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_902_##choice
#define KOSHMAR_PP_PRIVATE_REC_902_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_903
#define KOSHMAR_PP_PRIVATE_REC_902_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_903(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_903_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_903_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_903_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_903_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_903_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_903_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_903_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_903_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_903_##choice
#define KOSHMAR_PP_PRIVATE_REC_903_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_904
#define KOSHMAR_PP_PRIVATE_REC_903_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_904(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_904_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_904_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_904_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_904_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_904_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_904_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_904_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_904_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_904_##choice
#define KOSHMAR_PP_PRIVATE_REC_904_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_905
#define KOSHMAR_PP_PRIVATE_REC_904_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_905(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_905_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_905_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_905_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_905_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_905_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_905_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_905_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_905_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_905_##choice
#define KOSHMAR_PP_PRIVATE_REC_905_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_906
#define KOSHMAR_PP_PRIVATE_REC_905_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_906(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_906_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_906_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_906_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_906_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_906_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_906_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_906_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_906_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_906_##choice
#define KOSHMAR_PP_PRIVATE_REC_906_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_907
#define KOSHMAR_PP_PRIVATE_REC_906_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_907(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_907_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_907_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_907_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_907_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_907_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_907_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_907_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_907_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_907_##choice
#define KOSHMAR_PP_PRIVATE_REC_907_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_908
#define KOSHMAR_PP_PRIVATE_REC_907_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_908(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_908_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_908_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_908_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_908_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_908_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_908_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_908_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_908_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_908_##choice
#define KOSHMAR_PP_PRIVATE_REC_908_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_909
#define KOSHMAR_PP_PRIVATE_REC_908_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_909(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_909_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_909_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_909_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_909_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_909_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_909_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_909_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_909_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_909_##choice
#define KOSHMAR_PP_PRIVATE_REC_909_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_910
#define KOSHMAR_PP_PRIVATE_REC_909_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_910(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_910_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_910_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_910_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_910_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_910_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_910_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_910_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_910_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_910_##choice
#define KOSHMAR_PP_PRIVATE_REC_910_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_911
#define KOSHMAR_PP_PRIVATE_REC_910_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_911(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_911_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_911_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_911_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_911_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_911_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_911_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_911_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_911_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_911_##choice
#define KOSHMAR_PP_PRIVATE_REC_911_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_912
#define KOSHMAR_PP_PRIVATE_REC_911_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_912(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_912_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_912_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_912_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_912_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_912_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_912_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_912_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_912_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_912_##choice
#define KOSHMAR_PP_PRIVATE_REC_912_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_913
#define KOSHMAR_PP_PRIVATE_REC_912_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_913(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_913_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_913_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_913_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_913_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_913_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_913_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_913_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_913_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_913_##choice
#define KOSHMAR_PP_PRIVATE_REC_913_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_914
#define KOSHMAR_PP_PRIVATE_REC_913_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_914(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_914_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_914_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_914_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_914_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_914_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_914_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_914_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_914_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_914_##choice
#define KOSHMAR_PP_PRIVATE_REC_914_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_915
#define KOSHMAR_PP_PRIVATE_REC_914_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_915(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_915_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_915_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_915_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_915_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_915_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_915_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_915_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_915_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_915_##choice
#define KOSHMAR_PP_PRIVATE_REC_915_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_916
#define KOSHMAR_PP_PRIVATE_REC_915_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_916(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_916_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_916_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_916_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_916_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_916_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_916_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_916_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_916_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_916_##choice
#define KOSHMAR_PP_PRIVATE_REC_916_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_917
#define KOSHMAR_PP_PRIVATE_REC_916_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_917(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_917_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_917_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_917_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_917_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_917_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_917_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_917_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_917_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_917_##choice
#define KOSHMAR_PP_PRIVATE_REC_917_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_918
#define KOSHMAR_PP_PRIVATE_REC_917_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_918(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_918_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_918_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_918_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_918_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_918_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_918_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_918_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_918_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_918_##choice
#define KOSHMAR_PP_PRIVATE_REC_918_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_919
#define KOSHMAR_PP_PRIVATE_REC_918_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_919(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_919_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_919_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_919_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_919_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_919_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_919_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_919_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_919_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_919_##choice
#define KOSHMAR_PP_PRIVATE_REC_919_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_920
#define KOSHMAR_PP_PRIVATE_REC_919_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_920(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_920_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_920_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_920_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_920_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_920_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_920_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_920_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_920_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_920_##choice
#define KOSHMAR_PP_PRIVATE_REC_920_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_921
#define KOSHMAR_PP_PRIVATE_REC_920_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_921(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_921_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_921_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_921_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_921_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_921_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_921_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_921_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_921_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_921_##choice
#define KOSHMAR_PP_PRIVATE_REC_921_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_922
#define KOSHMAR_PP_PRIVATE_REC_921_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_922(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_922_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_922_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_922_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_922_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_922_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_922_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_922_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_922_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_922_##choice
#define KOSHMAR_PP_PRIVATE_REC_922_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_923
#define KOSHMAR_PP_PRIVATE_REC_922_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_923(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_923_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_923_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_923_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_923_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_923_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_923_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_923_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_923_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_923_##choice
#define KOSHMAR_PP_PRIVATE_REC_923_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_924
#define KOSHMAR_PP_PRIVATE_REC_923_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_924(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_924_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_924_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_924_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_924_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_924_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_924_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_924_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_924_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_924_##choice
#define KOSHMAR_PP_PRIVATE_REC_924_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_925
#define KOSHMAR_PP_PRIVATE_REC_924_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_925(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_925_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_925_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_925_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_925_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_925_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_925_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_925_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_925_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_925_##choice
#define KOSHMAR_PP_PRIVATE_REC_925_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_926
#define KOSHMAR_PP_PRIVATE_REC_925_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_926(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_926_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_926_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_926_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_926_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_926_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_926_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_926_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_926_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_926_##choice
#define KOSHMAR_PP_PRIVATE_REC_926_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_927
#define KOSHMAR_PP_PRIVATE_REC_926_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_927(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_927_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_927_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_927_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_927_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_927_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_927_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_927_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_927_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_927_##choice
#define KOSHMAR_PP_PRIVATE_REC_927_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_928
#define KOSHMAR_PP_PRIVATE_REC_927_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_928(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_928_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_928_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_928_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_928_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_928_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_928_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_928_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_928_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_928_##choice
#define KOSHMAR_PP_PRIVATE_REC_928_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_929
#define KOSHMAR_PP_PRIVATE_REC_928_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_929(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_929_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_929_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_929_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_929_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_929_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_929_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_929_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_929_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_929_##choice
#define KOSHMAR_PP_PRIVATE_REC_929_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_930
#define KOSHMAR_PP_PRIVATE_REC_929_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_930(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_930_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_930_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_930_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_930_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_930_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_930_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_930_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_930_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_930_##choice
#define KOSHMAR_PP_PRIVATE_REC_930_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_931
#define KOSHMAR_PP_PRIVATE_REC_930_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_931(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_931_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_931_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_931_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_931_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_931_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_931_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_931_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_931_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_931_##choice
#define KOSHMAR_PP_PRIVATE_REC_931_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_932
#define KOSHMAR_PP_PRIVATE_REC_931_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_932(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_932_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_932_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_932_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_932_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_932_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_932_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_932_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_932_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_932_##choice
#define KOSHMAR_PP_PRIVATE_REC_932_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_933
#define KOSHMAR_PP_PRIVATE_REC_932_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_933(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_933_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_933_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_933_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_933_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_933_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_933_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_933_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_933_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_933_##choice
#define KOSHMAR_PP_PRIVATE_REC_933_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_934
#define KOSHMAR_PP_PRIVATE_REC_933_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_934(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_934_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_934_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_934_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_934_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_934_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_934_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_934_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_934_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_934_##choice
#define KOSHMAR_PP_PRIVATE_REC_934_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_935
#define KOSHMAR_PP_PRIVATE_REC_934_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_935(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_935_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_935_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_935_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_935_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_935_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_935_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_935_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_935_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_935_##choice
#define KOSHMAR_PP_PRIVATE_REC_935_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_936
#define KOSHMAR_PP_PRIVATE_REC_935_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_936(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_936_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_936_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_936_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_936_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_936_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_936_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_936_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_936_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_936_##choice
#define KOSHMAR_PP_PRIVATE_REC_936_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_937
#define KOSHMAR_PP_PRIVATE_REC_936_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_937(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_937_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_937_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_937_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_937_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_937_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_937_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_937_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_937_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_937_##choice
#define KOSHMAR_PP_PRIVATE_REC_937_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_938
#define KOSHMAR_PP_PRIVATE_REC_937_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_938(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_938_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_938_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_938_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_938_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_938_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_938_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_938_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_938_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_938_##choice
#define KOSHMAR_PP_PRIVATE_REC_938_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_939
#define KOSHMAR_PP_PRIVATE_REC_938_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_939(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_939_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_939_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_939_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_939_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_939_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_939_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_939_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_939_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_939_##choice
#define KOSHMAR_PP_PRIVATE_REC_939_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_940
#define KOSHMAR_PP_PRIVATE_REC_939_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_940(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_940_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_940_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_940_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_940_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_940_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_940_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_940_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_940_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_940_##choice
#define KOSHMAR_PP_PRIVATE_REC_940_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_941
#define KOSHMAR_PP_PRIVATE_REC_940_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_941(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_941_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_941_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_941_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_941_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_941_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_941_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_941_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_941_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_941_##choice
#define KOSHMAR_PP_PRIVATE_REC_941_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_942
#define KOSHMAR_PP_PRIVATE_REC_941_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_942(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_942_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_942_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_942_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_942_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_942_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_942_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_942_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_942_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_942_##choice
#define KOSHMAR_PP_PRIVATE_REC_942_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_943
#define KOSHMAR_PP_PRIVATE_REC_942_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_943(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_943_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_943_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_943_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_943_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_943_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_943_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_943_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_943_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_943_##choice
#define KOSHMAR_PP_PRIVATE_REC_943_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_944
#define KOSHMAR_PP_PRIVATE_REC_943_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_944(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_944_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_944_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_944_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_944_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_944_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_944_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_944_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_944_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_944_##choice
#define KOSHMAR_PP_PRIVATE_REC_944_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_945
#define KOSHMAR_PP_PRIVATE_REC_944_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_945(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_945_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_945_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_945_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_945_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_945_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_945_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_945_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_945_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_945_##choice
#define KOSHMAR_PP_PRIVATE_REC_945_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_946
#define KOSHMAR_PP_PRIVATE_REC_945_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_946(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_946_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_946_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_946_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_946_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_946_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_946_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_946_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_946_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_946_##choice
#define KOSHMAR_PP_PRIVATE_REC_946_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_947
#define KOSHMAR_PP_PRIVATE_REC_946_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_947(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_947_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_947_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_947_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_947_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_947_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_947_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_947_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_947_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_947_##choice
#define KOSHMAR_PP_PRIVATE_REC_947_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_948
#define KOSHMAR_PP_PRIVATE_REC_947_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_948(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_948_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_948_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_948_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_948_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_948_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_948_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_948_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_948_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_948_##choice
#define KOSHMAR_PP_PRIVATE_REC_948_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_949
#define KOSHMAR_PP_PRIVATE_REC_948_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_949(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_949_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_949_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_949_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_949_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_949_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_949_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_949_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_949_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_949_##choice
#define KOSHMAR_PP_PRIVATE_REC_949_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_950
#define KOSHMAR_PP_PRIVATE_REC_949_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_950(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_950_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_950_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_950_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_950_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_950_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_950_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_950_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_950_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_950_##choice
#define KOSHMAR_PP_PRIVATE_REC_950_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_951
#define KOSHMAR_PP_PRIVATE_REC_950_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_951(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_951_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_951_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_951_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_951_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_951_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_951_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_951_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_951_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_951_##choice
#define KOSHMAR_PP_PRIVATE_REC_951_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_952
#define KOSHMAR_PP_PRIVATE_REC_951_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_952(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_952_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_952_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_952_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_952_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_952_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_952_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_952_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_952_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_952_##choice
#define KOSHMAR_PP_PRIVATE_REC_952_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_953
#define KOSHMAR_PP_PRIVATE_REC_952_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_953(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_953_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_953_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_953_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_953_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_953_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_953_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_953_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_953_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_953_##choice
#define KOSHMAR_PP_PRIVATE_REC_953_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_954
#define KOSHMAR_PP_PRIVATE_REC_953_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_954(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_954_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_954_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_954_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_954_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_954_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_954_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_954_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_954_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_954_##choice
#define KOSHMAR_PP_PRIVATE_REC_954_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_955
#define KOSHMAR_PP_PRIVATE_REC_954_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_955(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_955_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_955_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_955_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_955_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_955_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_955_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_955_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_955_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_955_##choice
#define KOSHMAR_PP_PRIVATE_REC_955_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_956
#define KOSHMAR_PP_PRIVATE_REC_955_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_956(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_956_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_956_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_956_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_956_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_956_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_956_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_956_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_956_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_956_##choice
#define KOSHMAR_PP_PRIVATE_REC_956_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_957
#define KOSHMAR_PP_PRIVATE_REC_956_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_957(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_957_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_957_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_957_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_957_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_957_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_957_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_957_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_957_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_957_##choice
#define KOSHMAR_PP_PRIVATE_REC_957_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_958
#define KOSHMAR_PP_PRIVATE_REC_957_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_958(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_958_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_958_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_958_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_958_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_958_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_958_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_958_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_958_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_958_##choice
#define KOSHMAR_PP_PRIVATE_REC_958_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_959
#define KOSHMAR_PP_PRIVATE_REC_958_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_959(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_959_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_959_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_959_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_959_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_959_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_959_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_959_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_959_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_959_##choice
#define KOSHMAR_PP_PRIVATE_REC_959_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_960
#define KOSHMAR_PP_PRIVATE_REC_959_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_960(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_960_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_960_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_960_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_960_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_960_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_960_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_960_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_960_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_960_##choice
#define KOSHMAR_PP_PRIVATE_REC_960_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_961
#define KOSHMAR_PP_PRIVATE_REC_960_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_961(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_961_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_961_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_961_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_961_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_961_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_961_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_961_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_961_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_961_##choice
#define KOSHMAR_PP_PRIVATE_REC_961_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_962
#define KOSHMAR_PP_PRIVATE_REC_961_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_962(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_962_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_962_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_962_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_962_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_962_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_962_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_962_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_962_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_962_##choice
#define KOSHMAR_PP_PRIVATE_REC_962_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_963
#define KOSHMAR_PP_PRIVATE_REC_962_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_963(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_963_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_963_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_963_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_963_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_963_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_963_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_963_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_963_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_963_##choice
#define KOSHMAR_PP_PRIVATE_REC_963_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_964
#define KOSHMAR_PP_PRIVATE_REC_963_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_964(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_964_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_964_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_964_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_964_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_964_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_964_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_964_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_964_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_964_##choice
#define KOSHMAR_PP_PRIVATE_REC_964_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_965
#define KOSHMAR_PP_PRIVATE_REC_964_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_965(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_965_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_965_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_965_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_965_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_965_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_965_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_965_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_965_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_965_##choice
#define KOSHMAR_PP_PRIVATE_REC_965_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_966
#define KOSHMAR_PP_PRIVATE_REC_965_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_966(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_966_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_966_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_966_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_966_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_966_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_966_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_966_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_966_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_966_##choice
#define KOSHMAR_PP_PRIVATE_REC_966_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_967
#define KOSHMAR_PP_PRIVATE_REC_966_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_967(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_967_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_967_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_967_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_967_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_967_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_967_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_967_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_967_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_967_##choice
#define KOSHMAR_PP_PRIVATE_REC_967_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_968
#define KOSHMAR_PP_PRIVATE_REC_967_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_968(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_968_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_968_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_968_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_968_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_968_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_968_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_968_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_968_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_968_##choice
#define KOSHMAR_PP_PRIVATE_REC_968_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_969
#define KOSHMAR_PP_PRIVATE_REC_968_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_969(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_969_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_969_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_969_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_969_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_969_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_969_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_969_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_969_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_969_##choice
#define KOSHMAR_PP_PRIVATE_REC_969_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_970
#define KOSHMAR_PP_PRIVATE_REC_969_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_970(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_970_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_970_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_970_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_970_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_970_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_970_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_970_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_970_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_970_##choice
#define KOSHMAR_PP_PRIVATE_REC_970_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_971
#define KOSHMAR_PP_PRIVATE_REC_970_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_971(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_971_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_971_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_971_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_971_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_971_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_971_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_971_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_971_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_971_##choice
#define KOSHMAR_PP_PRIVATE_REC_971_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_972
#define KOSHMAR_PP_PRIVATE_REC_971_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_972(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_972_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_972_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_972_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_972_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_972_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_972_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_972_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_972_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_972_##choice
#define KOSHMAR_PP_PRIVATE_REC_972_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_973
#define KOSHMAR_PP_PRIVATE_REC_972_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_973(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_973_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_973_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_973_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_973_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_973_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_973_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_973_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_973_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_973_##choice
#define KOSHMAR_PP_PRIVATE_REC_973_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_974
#define KOSHMAR_PP_PRIVATE_REC_973_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_974(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_974_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_974_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_974_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_974_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_974_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_974_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_974_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_974_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_974_##choice
#define KOSHMAR_PP_PRIVATE_REC_974_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_975
#define KOSHMAR_PP_PRIVATE_REC_974_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_975(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_975_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_975_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_975_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_975_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_975_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_975_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_975_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_975_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_975_##choice
#define KOSHMAR_PP_PRIVATE_REC_975_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_976
#define KOSHMAR_PP_PRIVATE_REC_975_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_976(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_976_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_976_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_976_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_976_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_976_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_976_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_976_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_976_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_976_##choice
#define KOSHMAR_PP_PRIVATE_REC_976_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_977
#define KOSHMAR_PP_PRIVATE_REC_976_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_977(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_977_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_977_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_977_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_977_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_977_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_977_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_977_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_977_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_977_##choice
#define KOSHMAR_PP_PRIVATE_REC_977_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_978
#define KOSHMAR_PP_PRIVATE_REC_977_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_978(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_978_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_978_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_978_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_978_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_978_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_978_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_978_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_978_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_978_##choice
#define KOSHMAR_PP_PRIVATE_REC_978_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_979
#define KOSHMAR_PP_PRIVATE_REC_978_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_979(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_979_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_979_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_979_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_979_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_979_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_979_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_979_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_979_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_979_##choice
#define KOSHMAR_PP_PRIVATE_REC_979_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_980
#define KOSHMAR_PP_PRIVATE_REC_979_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_980(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_980_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_980_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_980_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_980_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_980_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_980_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_980_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_980_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_980_##choice
#define KOSHMAR_PP_PRIVATE_REC_980_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_981
#define KOSHMAR_PP_PRIVATE_REC_980_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_981(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_981_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_981_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_981_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_981_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_981_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_981_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_981_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_981_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_981_##choice
#define KOSHMAR_PP_PRIVATE_REC_981_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_982
#define KOSHMAR_PP_PRIVATE_REC_981_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_982(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_982_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_982_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_982_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_982_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_982_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_982_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_982_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_982_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_982_##choice
#define KOSHMAR_PP_PRIVATE_REC_982_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_983
#define KOSHMAR_PP_PRIVATE_REC_982_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_983(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_983_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_983_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_983_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_983_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_983_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_983_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_983_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_983_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_983_##choice
#define KOSHMAR_PP_PRIVATE_REC_983_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_984
#define KOSHMAR_PP_PRIVATE_REC_983_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_984(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_984_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_984_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_984_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_984_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_984_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_984_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_984_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_984_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_984_##choice
#define KOSHMAR_PP_PRIVATE_REC_984_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_985
#define KOSHMAR_PP_PRIVATE_REC_984_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_985(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_985_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_985_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_985_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_985_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_985_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_985_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_985_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_985_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_985_##choice
#define KOSHMAR_PP_PRIVATE_REC_985_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_986
#define KOSHMAR_PP_PRIVATE_REC_985_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_986(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_986_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_986_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_986_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_986_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_986_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_986_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_986_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_986_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_986_##choice
#define KOSHMAR_PP_PRIVATE_REC_986_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_987
#define KOSHMAR_PP_PRIVATE_REC_986_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_987(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_987_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_987_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_987_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_987_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_987_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_987_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_987_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_987_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_987_##choice
#define KOSHMAR_PP_PRIVATE_REC_987_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_988
#define KOSHMAR_PP_PRIVATE_REC_987_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_988(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_988_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_988_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_988_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_988_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_988_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_988_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_988_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_988_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_988_##choice
#define KOSHMAR_PP_PRIVATE_REC_988_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_989
#define KOSHMAR_PP_PRIVATE_REC_988_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_989(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_989_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_989_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_989_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_989_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_989_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_989_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_989_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_989_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_989_##choice
#define KOSHMAR_PP_PRIVATE_REC_989_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_990
#define KOSHMAR_PP_PRIVATE_REC_989_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_990(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_990_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_990_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_990_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_990_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_990_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_990_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_990_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_990_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_990_##choice
#define KOSHMAR_PP_PRIVATE_REC_990_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_991
#define KOSHMAR_PP_PRIVATE_REC_990_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_991(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_991_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_991_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_991_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_991_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_991_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_991_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_991_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_991_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_991_##choice
#define KOSHMAR_PP_PRIVATE_REC_991_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_992
#define KOSHMAR_PP_PRIVATE_REC_991_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_992(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_992_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_992_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_992_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_992_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_992_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_992_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_992_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_992_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_992_##choice
#define KOSHMAR_PP_PRIVATE_REC_992_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_993
#define KOSHMAR_PP_PRIVATE_REC_992_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_993(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_993_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_993_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_993_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_993_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_993_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_993_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_993_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_993_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_993_##choice
#define KOSHMAR_PP_PRIVATE_REC_993_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_994
#define KOSHMAR_PP_PRIVATE_REC_993_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_994(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_994_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_994_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_994_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_994_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_994_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_994_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_994_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_994_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_994_##choice
#define KOSHMAR_PP_PRIVATE_REC_994_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_995
#define KOSHMAR_PP_PRIVATE_REC_994_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_995(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_995_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_995_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_995_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_995_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_995_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_995_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_995_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_995_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_995_##choice
#define KOSHMAR_PP_PRIVATE_REC_995_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_996
#define KOSHMAR_PP_PRIVATE_REC_995_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_996(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_996_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_996_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_996_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_996_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_996_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_996_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_996_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_996_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_996_##choice
#define KOSHMAR_PP_PRIVATE_REC_996_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_997
#define KOSHMAR_PP_PRIVATE_REC_996_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_997(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_997_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_997_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_997_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_997_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_997_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_997_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_997_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_997_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_997_##choice
#define KOSHMAR_PP_PRIVATE_REC_997_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_998
#define KOSHMAR_PP_PRIVATE_REC_997_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_998(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_998_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_998_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_998_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_998_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_998_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_998_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_998_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_998_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_998_##choice
#define KOSHMAR_PP_PRIVATE_REC_998_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_999
#define KOSHMAR_PP_PRIVATE_REC_998_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_999(...)                                                            \
    KOSHMAR_PP_PRIVATE_REC_999_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_999_GET_CHOICE(__VA_ARGS__))        \
    (KOSHMAR_PP_PRIVATE_REC_999_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_999_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_999_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_999_OVERLOAD(choice)                                                \
    KOSHMAR_PP_PRIVATE_REC_999_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_999_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_999_##choice
#define KOSHMAR_PP_PRIVATE_REC_999_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_1000
#define KOSHMAR_PP_PRIVATE_REC_999_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_1000(...)                                                           \
    KOSHMAR_PP_PRIVATE_REC_1000_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_1000_GET_CHOICE(__VA_ARGS__))      \
    (KOSHMAR_PP_PRIVATE_REC_1000_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_1000_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_1000_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_1000_OVERLOAD(choice)                                               \
    KOSHMAR_PP_PRIVATE_REC_1000_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_1000_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_1000_##choice
#define KOSHMAR_PP_PRIVATE_REC_1000_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_1001
#define KOSHMAR_PP_PRIVATE_REC_1000_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_1001(...)                                                           \
    KOSHMAR_PP_PRIVATE_REC_1001_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_1001_GET_CHOICE(__VA_ARGS__))      \
    (KOSHMAR_PP_PRIVATE_REC_1001_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_1001_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_1001_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_1001_OVERLOAD(choice)                                               \
    KOSHMAR_PP_PRIVATE_REC_1001_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_1001_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_1001_##choice
#define KOSHMAR_PP_PRIVATE_REC_1001_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_1002
#define KOSHMAR_PP_PRIVATE_REC_1001_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_1002(...)                                                           \
    KOSHMAR_PP_PRIVATE_REC_1002_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_1002_GET_CHOICE(__VA_ARGS__))      \
    (KOSHMAR_PP_PRIVATE_REC_1002_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_1002_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_1002_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_1002_OVERLOAD(choice)                                               \
    KOSHMAR_PP_PRIVATE_REC_1002_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_1002_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_1002_##choice
#define KOSHMAR_PP_PRIVATE_REC_1002_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_1003
#define KOSHMAR_PP_PRIVATE_REC_1002_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_1003(...)                                                           \
    KOSHMAR_PP_PRIVATE_REC_1003_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_1003_GET_CHOICE(__VA_ARGS__))      \
    (KOSHMAR_PP_PRIVATE_REC_1003_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_1003_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_1003_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_1003_OVERLOAD(choice)                                               \
    KOSHMAR_PP_PRIVATE_REC_1003_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_1003_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_1003_##choice
#define KOSHMAR_PP_PRIVATE_REC_1003_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_1004
#define KOSHMAR_PP_PRIVATE_REC_1003_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_1004(...)                                                           \
    KOSHMAR_PP_PRIVATE_REC_1004_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_1004_GET_CHOICE(__VA_ARGS__))      \
    (KOSHMAR_PP_PRIVATE_REC_1004_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_1004_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_1004_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_1004_OVERLOAD(choice)                                               \
    KOSHMAR_PP_PRIVATE_REC_1004_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_1004_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_1004_##choice
#define KOSHMAR_PP_PRIVATE_REC_1004_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_1005
#define KOSHMAR_PP_PRIVATE_REC_1004_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_1005(...)                                                           \
    KOSHMAR_PP_PRIVATE_REC_1005_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_1005_GET_CHOICE(__VA_ARGS__))      \
    (KOSHMAR_PP_PRIVATE_REC_1005_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_1005_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_1005_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_1005_OVERLOAD(choice)                                               \
    KOSHMAR_PP_PRIVATE_REC_1005_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_1005_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_1005_##choice
#define KOSHMAR_PP_PRIVATE_REC_1005_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_1006
#define KOSHMAR_PP_PRIVATE_REC_1005_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_1006(...)                                                           \
    KOSHMAR_PP_PRIVATE_REC_1006_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_1006_GET_CHOICE(__VA_ARGS__))      \
    (KOSHMAR_PP_PRIVATE_REC_1006_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_1006_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_1006_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_1006_OVERLOAD(choice)                                               \
    KOSHMAR_PP_PRIVATE_REC_1006_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_1006_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_1006_##choice
#define KOSHMAR_PP_PRIVATE_REC_1006_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_1007
#define KOSHMAR_PP_PRIVATE_REC_1006_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_1007(...)                                                           \
    KOSHMAR_PP_PRIVATE_REC_1007_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_1007_GET_CHOICE(__VA_ARGS__))      \
    (KOSHMAR_PP_PRIVATE_REC_1007_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_1007_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_1007_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_1007_OVERLOAD(choice)                                               \
    KOSHMAR_PP_PRIVATE_REC_1007_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_1007_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_1007_##choice
#define KOSHMAR_PP_PRIVATE_REC_1007_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_1008
#define KOSHMAR_PP_PRIVATE_REC_1007_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_1008(...)                                                           \
    KOSHMAR_PP_PRIVATE_REC_1008_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_1008_GET_CHOICE(__VA_ARGS__))      \
    (KOSHMAR_PP_PRIVATE_REC_1008_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_1008_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_1008_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_1008_OVERLOAD(choice)                                               \
    KOSHMAR_PP_PRIVATE_REC_1008_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_1008_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_1008_##choice
#define KOSHMAR_PP_PRIVATE_REC_1008_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_1009
#define KOSHMAR_PP_PRIVATE_REC_1008_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_1009(...)                                                           \
    KOSHMAR_PP_PRIVATE_REC_1009_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_1009_GET_CHOICE(__VA_ARGS__))      \
    (KOSHMAR_PP_PRIVATE_REC_1009_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_1009_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_1009_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_1009_OVERLOAD(choice)                                               \
    KOSHMAR_PP_PRIVATE_REC_1009_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_1009_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_1009_##choice
#define KOSHMAR_PP_PRIVATE_REC_1009_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_1010
#define KOSHMAR_PP_PRIVATE_REC_1009_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_1010(...)                                                           \
    KOSHMAR_PP_PRIVATE_REC_1010_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_1010_GET_CHOICE(__VA_ARGS__))      \
    (KOSHMAR_PP_PRIVATE_REC_1010_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_1010_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_1010_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_1010_OVERLOAD(choice)                                               \
    KOSHMAR_PP_PRIVATE_REC_1010_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_1010_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_1010_##choice
#define KOSHMAR_PP_PRIVATE_REC_1010_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_1011
#define KOSHMAR_PP_PRIVATE_REC_1010_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_1011(...)                                                           \
    KOSHMAR_PP_PRIVATE_REC_1011_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_1011_GET_CHOICE(__VA_ARGS__))      \
    (KOSHMAR_PP_PRIVATE_REC_1011_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_1011_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_1011_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_1011_OVERLOAD(choice)                                               \
    KOSHMAR_PP_PRIVATE_REC_1011_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_1011_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_1011_##choice
#define KOSHMAR_PP_PRIVATE_REC_1011_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_1012
#define KOSHMAR_PP_PRIVATE_REC_1011_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_1012(...)                                                           \
    KOSHMAR_PP_PRIVATE_REC_1012_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_1012_GET_CHOICE(__VA_ARGS__))      \
    (KOSHMAR_PP_PRIVATE_REC_1012_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_1012_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_1012_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_1012_OVERLOAD(choice)                                               \
    KOSHMAR_PP_PRIVATE_REC_1012_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_1012_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_1012_##choice
#define KOSHMAR_PP_PRIVATE_REC_1012_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_1013
#define KOSHMAR_PP_PRIVATE_REC_1012_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_1013(...)                                                           \
    KOSHMAR_PP_PRIVATE_REC_1013_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_1013_GET_CHOICE(__VA_ARGS__))      \
    (KOSHMAR_PP_PRIVATE_REC_1013_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_1013_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_1013_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_1013_OVERLOAD(choice)                                               \
    KOSHMAR_PP_PRIVATE_REC_1013_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_1013_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_1013_##choice
#define KOSHMAR_PP_PRIVATE_REC_1013_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_1014
#define KOSHMAR_PP_PRIVATE_REC_1013_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_1014(...)                                                           \
    KOSHMAR_PP_PRIVATE_REC_1014_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_1014_GET_CHOICE(__VA_ARGS__))      \
    (KOSHMAR_PP_PRIVATE_REC_1014_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_1014_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_1014_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_1014_OVERLOAD(choice)                                               \
    KOSHMAR_PP_PRIVATE_REC_1014_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_1014_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_1014_##choice
#define KOSHMAR_PP_PRIVATE_REC_1014_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_1015
#define KOSHMAR_PP_PRIVATE_REC_1014_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_1015(...)                                                           \
    KOSHMAR_PP_PRIVATE_REC_1015_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_1015_GET_CHOICE(__VA_ARGS__))      \
    (KOSHMAR_PP_PRIVATE_REC_1015_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_1015_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_1015_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_1015_OVERLOAD(choice)                                               \
    KOSHMAR_PP_PRIVATE_REC_1015_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_1015_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_1015_##choice
#define KOSHMAR_PP_PRIVATE_REC_1015_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_1016
#define KOSHMAR_PP_PRIVATE_REC_1015_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_1016(...)                                                           \
    KOSHMAR_PP_PRIVATE_REC_1016_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_1016_GET_CHOICE(__VA_ARGS__))      \
    (KOSHMAR_PP_PRIVATE_REC_1016_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_1016_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_1016_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_1016_OVERLOAD(choice)                                               \
    KOSHMAR_PP_PRIVATE_REC_1016_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_1016_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_1016_##choice
#define KOSHMAR_PP_PRIVATE_REC_1016_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_1017
#define KOSHMAR_PP_PRIVATE_REC_1016_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_1017(...)                                                           \
    KOSHMAR_PP_PRIVATE_REC_1017_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_1017_GET_CHOICE(__VA_ARGS__))      \
    (KOSHMAR_PP_PRIVATE_REC_1017_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_1017_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_1017_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_1017_OVERLOAD(choice)                                               \
    KOSHMAR_PP_PRIVATE_REC_1017_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_1017_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_1017_##choice
#define KOSHMAR_PP_PRIVATE_REC_1017_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_1018
#define KOSHMAR_PP_PRIVATE_REC_1017_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_1018(...)                                                           \
    KOSHMAR_PP_PRIVATE_REC_1018_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_1018_GET_CHOICE(__VA_ARGS__))      \
    (KOSHMAR_PP_PRIVATE_REC_1018_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_1018_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_1018_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_1018_OVERLOAD(choice)                                               \
    KOSHMAR_PP_PRIVATE_REC_1018_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_1018_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_1018_##choice
#define KOSHMAR_PP_PRIVATE_REC_1018_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_1019
#define KOSHMAR_PP_PRIVATE_REC_1018_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_1019(...)                                                           \
    KOSHMAR_PP_PRIVATE_REC_1019_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_1019_GET_CHOICE(__VA_ARGS__))      \
    (KOSHMAR_PP_PRIVATE_REC_1019_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_1019_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_1019_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_1019_OVERLOAD(choice)                                               \
    KOSHMAR_PP_PRIVATE_REC_1019_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_1019_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_1019_##choice
#define KOSHMAR_PP_PRIVATE_REC_1019_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_1020
#define KOSHMAR_PP_PRIVATE_REC_1019_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_1020(...)                                                           \
    KOSHMAR_PP_PRIVATE_REC_1020_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_1020_GET_CHOICE(__VA_ARGS__))      \
    (KOSHMAR_PP_PRIVATE_REC_1020_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_1020_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_1020_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_1020_OVERLOAD(choice)                                               \
    KOSHMAR_PP_PRIVATE_REC_1020_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_1020_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_1020_##choice
#define KOSHMAR_PP_PRIVATE_REC_1020_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_1021
#define KOSHMAR_PP_PRIVATE_REC_1020_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_1021(...)                                                           \
    KOSHMAR_PP_PRIVATE_REC_1021_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_1021_GET_CHOICE(__VA_ARGS__))      \
    (KOSHMAR_PP_PRIVATE_REC_1021_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_1021_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_1021_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_1021_OVERLOAD(choice)                                               \
    KOSHMAR_PP_PRIVATE_REC_1021_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_1021_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_1021_##choice
#define KOSHMAR_PP_PRIVATE_REC_1021_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_1022
#define KOSHMAR_PP_PRIVATE_REC_1021_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_1022(...)                                                           \
    KOSHMAR_PP_PRIVATE_REC_1022_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_1022_GET_CHOICE(__VA_ARGS__))      \
    (KOSHMAR_PP_PRIVATE_REC_1022_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_1022_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_1022_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_1022_OVERLOAD(choice)                                               \
    KOSHMAR_PP_PRIVATE_REC_1022_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_1022_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_1022_##choice
#define KOSHMAR_PP_PRIVATE_REC_1022_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_1023
#define KOSHMAR_PP_PRIVATE_REC_1022_STOP(...)                  __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_REC_1023(...)                                                           \
    KOSHMAR_PP_PRIVATE_REC_1023_OVERLOAD(KOSHMAR_PP_PRIVATE_REC_1023_GET_CHOICE(__VA_ARGS__))      \
    (KOSHMAR_PP_PRIVATE_REC_1023_GET_REST(__VA_ARGS__))
#define KOSHMAR_PP_PRIVATE_REC_1023_GET_CHOICE(choice, ...) choice
#define KOSHMAR_PP_PRIVATE_REC_1023_GET_REST(choice, ...)   __VA_ARGS__
#define KOSHMAR_PP_PRIVATE_REC_1023_OVERLOAD(choice)                                               \
    KOSHMAR_PP_PRIVATE_REC_1023_OVERLOAD_PRIMITIVE(choice)
#define KOSHMAR_PP_PRIVATE_REC_1023_OVERLOAD_PRIMITIVE(choice) KOSHMAR_PP_PRIVATE_REC_1023_##choice
#define KOSHMAR_PP_PRIVATE_REC_1023_CONTINUE                   KOSHMAR_PP_PRIVATE_REC_1024_LIMIT_REACHED
#define KOSHMAR_PP_PRIVATE_REC_1023_STOP(...)                  __VA_ARGS__

#endif // DOXYGEN_SHOULD_SKIP_THIS

#endif // KOSHMAR_PP_REC_H
