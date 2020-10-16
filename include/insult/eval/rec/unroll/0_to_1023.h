#ifndef INSULT_EVAL_REC_UNROLL_0_TO_1023_H
#define INSULT_EVAL_REC_UNROLL_0_TO_1023_H

#define INSULT_PRIVATE_EVAL_REC_0(...)                                                             \
    INSULT_PRIVATE_EVAL_REC_0_OVERLOAD(INSULT_PRIVATE_EVAL_REC_0_GET_CHOICE(__VA_ARGS__))          \
    (INSULT_PRIVATE_EVAL_REC_0_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_0_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_0_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_0_OVERLOAD(choice)                                                 \
    INSULT_PRIVATE_EVAL_REC_0_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_0_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_0_##choice
#define INSULT_PRIVATE_EVAL_REC_0_CONTINUE                   INSULT_PRIVATE_EVAL_REC_1
#define INSULT_PRIVATE_EVAL_REC_0_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_1(...)                                                             \
    INSULT_PRIVATE_EVAL_REC_1_OVERLOAD(INSULT_PRIVATE_EVAL_REC_1_GET_CHOICE(__VA_ARGS__))          \
    (INSULT_PRIVATE_EVAL_REC_1_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_1_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_1_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_1_OVERLOAD(choice)                                                 \
    INSULT_PRIVATE_EVAL_REC_1_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_1_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_1_##choice
#define INSULT_PRIVATE_EVAL_REC_1_CONTINUE                   INSULT_PRIVATE_EVAL_REC_2
#define INSULT_PRIVATE_EVAL_REC_1_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_2(...)                                                             \
    INSULT_PRIVATE_EVAL_REC_2_OVERLOAD(INSULT_PRIVATE_EVAL_REC_2_GET_CHOICE(__VA_ARGS__))          \
    (INSULT_PRIVATE_EVAL_REC_2_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_2_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_2_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_2_OVERLOAD(choice)                                                 \
    INSULT_PRIVATE_EVAL_REC_2_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_2_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_2_##choice
#define INSULT_PRIVATE_EVAL_REC_2_CONTINUE                   INSULT_PRIVATE_EVAL_REC_3
#define INSULT_PRIVATE_EVAL_REC_2_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_3(...)                                                             \
    INSULT_PRIVATE_EVAL_REC_3_OVERLOAD(INSULT_PRIVATE_EVAL_REC_3_GET_CHOICE(__VA_ARGS__))          \
    (INSULT_PRIVATE_EVAL_REC_3_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_3_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_3_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_3_OVERLOAD(choice)                                                 \
    INSULT_PRIVATE_EVAL_REC_3_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_3_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_3_##choice
#define INSULT_PRIVATE_EVAL_REC_3_CONTINUE                   INSULT_PRIVATE_EVAL_REC_4
#define INSULT_PRIVATE_EVAL_REC_3_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_4(...)                                                             \
    INSULT_PRIVATE_EVAL_REC_4_OVERLOAD(INSULT_PRIVATE_EVAL_REC_4_GET_CHOICE(__VA_ARGS__))          \
    (INSULT_PRIVATE_EVAL_REC_4_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_4_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_4_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_4_OVERLOAD(choice)                                                 \
    INSULT_PRIVATE_EVAL_REC_4_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_4_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_4_##choice
#define INSULT_PRIVATE_EVAL_REC_4_CONTINUE                   INSULT_PRIVATE_EVAL_REC_5
#define INSULT_PRIVATE_EVAL_REC_4_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_5(...)                                                             \
    INSULT_PRIVATE_EVAL_REC_5_OVERLOAD(INSULT_PRIVATE_EVAL_REC_5_GET_CHOICE(__VA_ARGS__))          \
    (INSULT_PRIVATE_EVAL_REC_5_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_5_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_5_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_5_OVERLOAD(choice)                                                 \
    INSULT_PRIVATE_EVAL_REC_5_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_5_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_5_##choice
#define INSULT_PRIVATE_EVAL_REC_5_CONTINUE                   INSULT_PRIVATE_EVAL_REC_6
#define INSULT_PRIVATE_EVAL_REC_5_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_6(...)                                                             \
    INSULT_PRIVATE_EVAL_REC_6_OVERLOAD(INSULT_PRIVATE_EVAL_REC_6_GET_CHOICE(__VA_ARGS__))          \
    (INSULT_PRIVATE_EVAL_REC_6_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_6_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_6_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_6_OVERLOAD(choice)                                                 \
    INSULT_PRIVATE_EVAL_REC_6_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_6_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_6_##choice
#define INSULT_PRIVATE_EVAL_REC_6_CONTINUE                   INSULT_PRIVATE_EVAL_REC_7
#define INSULT_PRIVATE_EVAL_REC_6_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_7(...)                                                             \
    INSULT_PRIVATE_EVAL_REC_7_OVERLOAD(INSULT_PRIVATE_EVAL_REC_7_GET_CHOICE(__VA_ARGS__))          \
    (INSULT_PRIVATE_EVAL_REC_7_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_7_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_7_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_7_OVERLOAD(choice)                                                 \
    INSULT_PRIVATE_EVAL_REC_7_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_7_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_7_##choice
#define INSULT_PRIVATE_EVAL_REC_7_CONTINUE                   INSULT_PRIVATE_EVAL_REC_8
#define INSULT_PRIVATE_EVAL_REC_7_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_8(...)                                                             \
    INSULT_PRIVATE_EVAL_REC_8_OVERLOAD(INSULT_PRIVATE_EVAL_REC_8_GET_CHOICE(__VA_ARGS__))          \
    (INSULT_PRIVATE_EVAL_REC_8_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_8_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_8_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_8_OVERLOAD(choice)                                                 \
    INSULT_PRIVATE_EVAL_REC_8_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_8_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_8_##choice
#define INSULT_PRIVATE_EVAL_REC_8_CONTINUE                   INSULT_PRIVATE_EVAL_REC_9
#define INSULT_PRIVATE_EVAL_REC_8_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_9(...)                                                             \
    INSULT_PRIVATE_EVAL_REC_9_OVERLOAD(INSULT_PRIVATE_EVAL_REC_9_GET_CHOICE(__VA_ARGS__))          \
    (INSULT_PRIVATE_EVAL_REC_9_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_9_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_9_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_9_OVERLOAD(choice)                                                 \
    INSULT_PRIVATE_EVAL_REC_9_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_9_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_9_##choice
#define INSULT_PRIVATE_EVAL_REC_9_CONTINUE                   INSULT_PRIVATE_EVAL_REC_10
#define INSULT_PRIVATE_EVAL_REC_9_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_10(...)                                                            \
    INSULT_PRIVATE_EVAL_REC_10_OVERLOAD(INSULT_PRIVATE_EVAL_REC_10_GET_CHOICE(__VA_ARGS__))        \
    (INSULT_PRIVATE_EVAL_REC_10_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_10_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_10_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_10_OVERLOAD(choice)                                                \
    INSULT_PRIVATE_EVAL_REC_10_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_10_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_10_##choice
#define INSULT_PRIVATE_EVAL_REC_10_CONTINUE                   INSULT_PRIVATE_EVAL_REC_11
#define INSULT_PRIVATE_EVAL_REC_10_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_11(...)                                                            \
    INSULT_PRIVATE_EVAL_REC_11_OVERLOAD(INSULT_PRIVATE_EVAL_REC_11_GET_CHOICE(__VA_ARGS__))        \
    (INSULT_PRIVATE_EVAL_REC_11_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_11_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_11_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_11_OVERLOAD(choice)                                                \
    INSULT_PRIVATE_EVAL_REC_11_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_11_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_11_##choice
#define INSULT_PRIVATE_EVAL_REC_11_CONTINUE                   INSULT_PRIVATE_EVAL_REC_12
#define INSULT_PRIVATE_EVAL_REC_11_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_12(...)                                                            \
    INSULT_PRIVATE_EVAL_REC_12_OVERLOAD(INSULT_PRIVATE_EVAL_REC_12_GET_CHOICE(__VA_ARGS__))        \
    (INSULT_PRIVATE_EVAL_REC_12_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_12_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_12_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_12_OVERLOAD(choice)                                                \
    INSULT_PRIVATE_EVAL_REC_12_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_12_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_12_##choice
#define INSULT_PRIVATE_EVAL_REC_12_CONTINUE                   INSULT_PRIVATE_EVAL_REC_13
#define INSULT_PRIVATE_EVAL_REC_12_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_13(...)                                                            \
    INSULT_PRIVATE_EVAL_REC_13_OVERLOAD(INSULT_PRIVATE_EVAL_REC_13_GET_CHOICE(__VA_ARGS__))        \
    (INSULT_PRIVATE_EVAL_REC_13_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_13_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_13_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_13_OVERLOAD(choice)                                                \
    INSULT_PRIVATE_EVAL_REC_13_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_13_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_13_##choice
#define INSULT_PRIVATE_EVAL_REC_13_CONTINUE                   INSULT_PRIVATE_EVAL_REC_14
#define INSULT_PRIVATE_EVAL_REC_13_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_14(...)                                                            \
    INSULT_PRIVATE_EVAL_REC_14_OVERLOAD(INSULT_PRIVATE_EVAL_REC_14_GET_CHOICE(__VA_ARGS__))        \
    (INSULT_PRIVATE_EVAL_REC_14_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_14_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_14_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_14_OVERLOAD(choice)                                                \
    INSULT_PRIVATE_EVAL_REC_14_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_14_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_14_##choice
#define INSULT_PRIVATE_EVAL_REC_14_CONTINUE                   INSULT_PRIVATE_EVAL_REC_15
#define INSULT_PRIVATE_EVAL_REC_14_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_15(...)                                                            \
    INSULT_PRIVATE_EVAL_REC_15_OVERLOAD(INSULT_PRIVATE_EVAL_REC_15_GET_CHOICE(__VA_ARGS__))        \
    (INSULT_PRIVATE_EVAL_REC_15_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_15_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_15_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_15_OVERLOAD(choice)                                                \
    INSULT_PRIVATE_EVAL_REC_15_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_15_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_15_##choice
#define INSULT_PRIVATE_EVAL_REC_15_CONTINUE                   INSULT_PRIVATE_EVAL_REC_16
#define INSULT_PRIVATE_EVAL_REC_15_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_16(...)                                                            \
    INSULT_PRIVATE_EVAL_REC_16_OVERLOAD(INSULT_PRIVATE_EVAL_REC_16_GET_CHOICE(__VA_ARGS__))        \
    (INSULT_PRIVATE_EVAL_REC_16_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_16_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_16_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_16_OVERLOAD(choice)                                                \
    INSULT_PRIVATE_EVAL_REC_16_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_16_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_16_##choice
#define INSULT_PRIVATE_EVAL_REC_16_CONTINUE                   INSULT_PRIVATE_EVAL_REC_17
#define INSULT_PRIVATE_EVAL_REC_16_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_17(...)                                                            \
    INSULT_PRIVATE_EVAL_REC_17_OVERLOAD(INSULT_PRIVATE_EVAL_REC_17_GET_CHOICE(__VA_ARGS__))        \
    (INSULT_PRIVATE_EVAL_REC_17_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_17_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_17_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_17_OVERLOAD(choice)                                                \
    INSULT_PRIVATE_EVAL_REC_17_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_17_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_17_##choice
#define INSULT_PRIVATE_EVAL_REC_17_CONTINUE                   INSULT_PRIVATE_EVAL_REC_18
#define INSULT_PRIVATE_EVAL_REC_17_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_18(...)                                                            \
    INSULT_PRIVATE_EVAL_REC_18_OVERLOAD(INSULT_PRIVATE_EVAL_REC_18_GET_CHOICE(__VA_ARGS__))        \
    (INSULT_PRIVATE_EVAL_REC_18_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_18_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_18_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_18_OVERLOAD(choice)                                                \
    INSULT_PRIVATE_EVAL_REC_18_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_18_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_18_##choice
#define INSULT_PRIVATE_EVAL_REC_18_CONTINUE                   INSULT_PRIVATE_EVAL_REC_19
#define INSULT_PRIVATE_EVAL_REC_18_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_19(...)                                                            \
    INSULT_PRIVATE_EVAL_REC_19_OVERLOAD(INSULT_PRIVATE_EVAL_REC_19_GET_CHOICE(__VA_ARGS__))        \
    (INSULT_PRIVATE_EVAL_REC_19_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_19_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_19_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_19_OVERLOAD(choice)                                                \
    INSULT_PRIVATE_EVAL_REC_19_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_19_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_19_##choice
#define INSULT_PRIVATE_EVAL_REC_19_CONTINUE                   INSULT_PRIVATE_EVAL_REC_20
#define INSULT_PRIVATE_EVAL_REC_19_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_20(...)                                                            \
    INSULT_PRIVATE_EVAL_REC_20_OVERLOAD(INSULT_PRIVATE_EVAL_REC_20_GET_CHOICE(__VA_ARGS__))        \
    (INSULT_PRIVATE_EVAL_REC_20_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_20_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_20_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_20_OVERLOAD(choice)                                                \
    INSULT_PRIVATE_EVAL_REC_20_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_20_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_20_##choice
#define INSULT_PRIVATE_EVAL_REC_20_CONTINUE                   INSULT_PRIVATE_EVAL_REC_21
#define INSULT_PRIVATE_EVAL_REC_20_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_21(...)                                                            \
    INSULT_PRIVATE_EVAL_REC_21_OVERLOAD(INSULT_PRIVATE_EVAL_REC_21_GET_CHOICE(__VA_ARGS__))        \
    (INSULT_PRIVATE_EVAL_REC_21_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_21_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_21_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_21_OVERLOAD(choice)                                                \
    INSULT_PRIVATE_EVAL_REC_21_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_21_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_21_##choice
#define INSULT_PRIVATE_EVAL_REC_21_CONTINUE                   INSULT_PRIVATE_EVAL_REC_22
#define INSULT_PRIVATE_EVAL_REC_21_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_22(...)                                                            \
    INSULT_PRIVATE_EVAL_REC_22_OVERLOAD(INSULT_PRIVATE_EVAL_REC_22_GET_CHOICE(__VA_ARGS__))        \
    (INSULT_PRIVATE_EVAL_REC_22_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_22_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_22_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_22_OVERLOAD(choice)                                                \
    INSULT_PRIVATE_EVAL_REC_22_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_22_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_22_##choice
#define INSULT_PRIVATE_EVAL_REC_22_CONTINUE                   INSULT_PRIVATE_EVAL_REC_23
#define INSULT_PRIVATE_EVAL_REC_22_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_23(...)                                                            \
    INSULT_PRIVATE_EVAL_REC_23_OVERLOAD(INSULT_PRIVATE_EVAL_REC_23_GET_CHOICE(__VA_ARGS__))        \
    (INSULT_PRIVATE_EVAL_REC_23_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_23_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_23_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_23_OVERLOAD(choice)                                                \
    INSULT_PRIVATE_EVAL_REC_23_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_23_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_23_##choice
#define INSULT_PRIVATE_EVAL_REC_23_CONTINUE                   INSULT_PRIVATE_EVAL_REC_24
#define INSULT_PRIVATE_EVAL_REC_23_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_24(...)                                                            \
    INSULT_PRIVATE_EVAL_REC_24_OVERLOAD(INSULT_PRIVATE_EVAL_REC_24_GET_CHOICE(__VA_ARGS__))        \
    (INSULT_PRIVATE_EVAL_REC_24_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_24_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_24_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_24_OVERLOAD(choice)                                                \
    INSULT_PRIVATE_EVAL_REC_24_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_24_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_24_##choice
#define INSULT_PRIVATE_EVAL_REC_24_CONTINUE                   INSULT_PRIVATE_EVAL_REC_25
#define INSULT_PRIVATE_EVAL_REC_24_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_25(...)                                                            \
    INSULT_PRIVATE_EVAL_REC_25_OVERLOAD(INSULT_PRIVATE_EVAL_REC_25_GET_CHOICE(__VA_ARGS__))        \
    (INSULT_PRIVATE_EVAL_REC_25_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_25_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_25_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_25_OVERLOAD(choice)                                                \
    INSULT_PRIVATE_EVAL_REC_25_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_25_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_25_##choice
#define INSULT_PRIVATE_EVAL_REC_25_CONTINUE                   INSULT_PRIVATE_EVAL_REC_26
#define INSULT_PRIVATE_EVAL_REC_25_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_26(...)                                                            \
    INSULT_PRIVATE_EVAL_REC_26_OVERLOAD(INSULT_PRIVATE_EVAL_REC_26_GET_CHOICE(__VA_ARGS__))        \
    (INSULT_PRIVATE_EVAL_REC_26_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_26_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_26_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_26_OVERLOAD(choice)                                                \
    INSULT_PRIVATE_EVAL_REC_26_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_26_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_26_##choice
#define INSULT_PRIVATE_EVAL_REC_26_CONTINUE                   INSULT_PRIVATE_EVAL_REC_27
#define INSULT_PRIVATE_EVAL_REC_26_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_27(...)                                                            \
    INSULT_PRIVATE_EVAL_REC_27_OVERLOAD(INSULT_PRIVATE_EVAL_REC_27_GET_CHOICE(__VA_ARGS__))        \
    (INSULT_PRIVATE_EVAL_REC_27_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_27_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_27_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_27_OVERLOAD(choice)                                                \
    INSULT_PRIVATE_EVAL_REC_27_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_27_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_27_##choice
#define INSULT_PRIVATE_EVAL_REC_27_CONTINUE                   INSULT_PRIVATE_EVAL_REC_28
#define INSULT_PRIVATE_EVAL_REC_27_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_28(...)                                                            \
    INSULT_PRIVATE_EVAL_REC_28_OVERLOAD(INSULT_PRIVATE_EVAL_REC_28_GET_CHOICE(__VA_ARGS__))        \
    (INSULT_PRIVATE_EVAL_REC_28_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_28_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_28_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_28_OVERLOAD(choice)                                                \
    INSULT_PRIVATE_EVAL_REC_28_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_28_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_28_##choice
#define INSULT_PRIVATE_EVAL_REC_28_CONTINUE                   INSULT_PRIVATE_EVAL_REC_29
#define INSULT_PRIVATE_EVAL_REC_28_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_29(...)                                                            \
    INSULT_PRIVATE_EVAL_REC_29_OVERLOAD(INSULT_PRIVATE_EVAL_REC_29_GET_CHOICE(__VA_ARGS__))        \
    (INSULT_PRIVATE_EVAL_REC_29_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_29_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_29_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_29_OVERLOAD(choice)                                                \
    INSULT_PRIVATE_EVAL_REC_29_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_29_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_29_##choice
#define INSULT_PRIVATE_EVAL_REC_29_CONTINUE                   INSULT_PRIVATE_EVAL_REC_30
#define INSULT_PRIVATE_EVAL_REC_29_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_30(...)                                                            \
    INSULT_PRIVATE_EVAL_REC_30_OVERLOAD(INSULT_PRIVATE_EVAL_REC_30_GET_CHOICE(__VA_ARGS__))        \
    (INSULT_PRIVATE_EVAL_REC_30_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_30_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_30_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_30_OVERLOAD(choice)                                                \
    INSULT_PRIVATE_EVAL_REC_30_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_30_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_30_##choice
#define INSULT_PRIVATE_EVAL_REC_30_CONTINUE                   INSULT_PRIVATE_EVAL_REC_31
#define INSULT_PRIVATE_EVAL_REC_30_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_31(...)                                                            \
    INSULT_PRIVATE_EVAL_REC_31_OVERLOAD(INSULT_PRIVATE_EVAL_REC_31_GET_CHOICE(__VA_ARGS__))        \
    (INSULT_PRIVATE_EVAL_REC_31_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_31_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_31_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_31_OVERLOAD(choice)                                                \
    INSULT_PRIVATE_EVAL_REC_31_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_31_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_31_##choice
#define INSULT_PRIVATE_EVAL_REC_31_CONTINUE                   INSULT_PRIVATE_EVAL_REC_32
#define INSULT_PRIVATE_EVAL_REC_31_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_32(...)                                                            \
    INSULT_PRIVATE_EVAL_REC_32_OVERLOAD(INSULT_PRIVATE_EVAL_REC_32_GET_CHOICE(__VA_ARGS__))        \
    (INSULT_PRIVATE_EVAL_REC_32_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_32_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_32_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_32_OVERLOAD(choice)                                                \
    INSULT_PRIVATE_EVAL_REC_32_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_32_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_32_##choice
#define INSULT_PRIVATE_EVAL_REC_32_CONTINUE                   INSULT_PRIVATE_EVAL_REC_33
#define INSULT_PRIVATE_EVAL_REC_32_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_33(...)                                                            \
    INSULT_PRIVATE_EVAL_REC_33_OVERLOAD(INSULT_PRIVATE_EVAL_REC_33_GET_CHOICE(__VA_ARGS__))        \
    (INSULT_PRIVATE_EVAL_REC_33_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_33_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_33_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_33_OVERLOAD(choice)                                                \
    INSULT_PRIVATE_EVAL_REC_33_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_33_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_33_##choice
#define INSULT_PRIVATE_EVAL_REC_33_CONTINUE                   INSULT_PRIVATE_EVAL_REC_34
#define INSULT_PRIVATE_EVAL_REC_33_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_34(...)                                                            \
    INSULT_PRIVATE_EVAL_REC_34_OVERLOAD(INSULT_PRIVATE_EVAL_REC_34_GET_CHOICE(__VA_ARGS__))        \
    (INSULT_PRIVATE_EVAL_REC_34_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_34_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_34_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_34_OVERLOAD(choice)                                                \
    INSULT_PRIVATE_EVAL_REC_34_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_34_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_34_##choice
#define INSULT_PRIVATE_EVAL_REC_34_CONTINUE                   INSULT_PRIVATE_EVAL_REC_35
#define INSULT_PRIVATE_EVAL_REC_34_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_35(...)                                                            \
    INSULT_PRIVATE_EVAL_REC_35_OVERLOAD(INSULT_PRIVATE_EVAL_REC_35_GET_CHOICE(__VA_ARGS__))        \
    (INSULT_PRIVATE_EVAL_REC_35_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_35_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_35_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_35_OVERLOAD(choice)                                                \
    INSULT_PRIVATE_EVAL_REC_35_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_35_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_35_##choice
#define INSULT_PRIVATE_EVAL_REC_35_CONTINUE                   INSULT_PRIVATE_EVAL_REC_36
#define INSULT_PRIVATE_EVAL_REC_35_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_36(...)                                                            \
    INSULT_PRIVATE_EVAL_REC_36_OVERLOAD(INSULT_PRIVATE_EVAL_REC_36_GET_CHOICE(__VA_ARGS__))        \
    (INSULT_PRIVATE_EVAL_REC_36_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_36_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_36_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_36_OVERLOAD(choice)                                                \
    INSULT_PRIVATE_EVAL_REC_36_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_36_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_36_##choice
#define INSULT_PRIVATE_EVAL_REC_36_CONTINUE                   INSULT_PRIVATE_EVAL_REC_37
#define INSULT_PRIVATE_EVAL_REC_36_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_37(...)                                                            \
    INSULT_PRIVATE_EVAL_REC_37_OVERLOAD(INSULT_PRIVATE_EVAL_REC_37_GET_CHOICE(__VA_ARGS__))        \
    (INSULT_PRIVATE_EVAL_REC_37_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_37_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_37_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_37_OVERLOAD(choice)                                                \
    INSULT_PRIVATE_EVAL_REC_37_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_37_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_37_##choice
#define INSULT_PRIVATE_EVAL_REC_37_CONTINUE                   INSULT_PRIVATE_EVAL_REC_38
#define INSULT_PRIVATE_EVAL_REC_37_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_38(...)                                                            \
    INSULT_PRIVATE_EVAL_REC_38_OVERLOAD(INSULT_PRIVATE_EVAL_REC_38_GET_CHOICE(__VA_ARGS__))        \
    (INSULT_PRIVATE_EVAL_REC_38_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_38_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_38_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_38_OVERLOAD(choice)                                                \
    INSULT_PRIVATE_EVAL_REC_38_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_38_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_38_##choice
#define INSULT_PRIVATE_EVAL_REC_38_CONTINUE                   INSULT_PRIVATE_EVAL_REC_39
#define INSULT_PRIVATE_EVAL_REC_38_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_39(...)                                                            \
    INSULT_PRIVATE_EVAL_REC_39_OVERLOAD(INSULT_PRIVATE_EVAL_REC_39_GET_CHOICE(__VA_ARGS__))        \
    (INSULT_PRIVATE_EVAL_REC_39_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_39_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_39_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_39_OVERLOAD(choice)                                                \
    INSULT_PRIVATE_EVAL_REC_39_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_39_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_39_##choice
#define INSULT_PRIVATE_EVAL_REC_39_CONTINUE                   INSULT_PRIVATE_EVAL_REC_40
#define INSULT_PRIVATE_EVAL_REC_39_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_40(...)                                                            \
    INSULT_PRIVATE_EVAL_REC_40_OVERLOAD(INSULT_PRIVATE_EVAL_REC_40_GET_CHOICE(__VA_ARGS__))        \
    (INSULT_PRIVATE_EVAL_REC_40_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_40_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_40_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_40_OVERLOAD(choice)                                                \
    INSULT_PRIVATE_EVAL_REC_40_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_40_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_40_##choice
#define INSULT_PRIVATE_EVAL_REC_40_CONTINUE                   INSULT_PRIVATE_EVAL_REC_41
#define INSULT_PRIVATE_EVAL_REC_40_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_41(...)                                                            \
    INSULT_PRIVATE_EVAL_REC_41_OVERLOAD(INSULT_PRIVATE_EVAL_REC_41_GET_CHOICE(__VA_ARGS__))        \
    (INSULT_PRIVATE_EVAL_REC_41_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_41_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_41_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_41_OVERLOAD(choice)                                                \
    INSULT_PRIVATE_EVAL_REC_41_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_41_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_41_##choice
#define INSULT_PRIVATE_EVAL_REC_41_CONTINUE                   INSULT_PRIVATE_EVAL_REC_42
#define INSULT_PRIVATE_EVAL_REC_41_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_42(...)                                                            \
    INSULT_PRIVATE_EVAL_REC_42_OVERLOAD(INSULT_PRIVATE_EVAL_REC_42_GET_CHOICE(__VA_ARGS__))        \
    (INSULT_PRIVATE_EVAL_REC_42_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_42_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_42_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_42_OVERLOAD(choice)                                                \
    INSULT_PRIVATE_EVAL_REC_42_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_42_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_42_##choice
#define INSULT_PRIVATE_EVAL_REC_42_CONTINUE                   INSULT_PRIVATE_EVAL_REC_43
#define INSULT_PRIVATE_EVAL_REC_42_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_43(...)                                                            \
    INSULT_PRIVATE_EVAL_REC_43_OVERLOAD(INSULT_PRIVATE_EVAL_REC_43_GET_CHOICE(__VA_ARGS__))        \
    (INSULT_PRIVATE_EVAL_REC_43_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_43_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_43_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_43_OVERLOAD(choice)                                                \
    INSULT_PRIVATE_EVAL_REC_43_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_43_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_43_##choice
#define INSULT_PRIVATE_EVAL_REC_43_CONTINUE                   INSULT_PRIVATE_EVAL_REC_44
#define INSULT_PRIVATE_EVAL_REC_43_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_44(...)                                                            \
    INSULT_PRIVATE_EVAL_REC_44_OVERLOAD(INSULT_PRIVATE_EVAL_REC_44_GET_CHOICE(__VA_ARGS__))        \
    (INSULT_PRIVATE_EVAL_REC_44_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_44_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_44_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_44_OVERLOAD(choice)                                                \
    INSULT_PRIVATE_EVAL_REC_44_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_44_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_44_##choice
#define INSULT_PRIVATE_EVAL_REC_44_CONTINUE                   INSULT_PRIVATE_EVAL_REC_45
#define INSULT_PRIVATE_EVAL_REC_44_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_45(...)                                                            \
    INSULT_PRIVATE_EVAL_REC_45_OVERLOAD(INSULT_PRIVATE_EVAL_REC_45_GET_CHOICE(__VA_ARGS__))        \
    (INSULT_PRIVATE_EVAL_REC_45_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_45_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_45_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_45_OVERLOAD(choice)                                                \
    INSULT_PRIVATE_EVAL_REC_45_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_45_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_45_##choice
#define INSULT_PRIVATE_EVAL_REC_45_CONTINUE                   INSULT_PRIVATE_EVAL_REC_46
#define INSULT_PRIVATE_EVAL_REC_45_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_46(...)                                                            \
    INSULT_PRIVATE_EVAL_REC_46_OVERLOAD(INSULT_PRIVATE_EVAL_REC_46_GET_CHOICE(__VA_ARGS__))        \
    (INSULT_PRIVATE_EVAL_REC_46_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_46_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_46_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_46_OVERLOAD(choice)                                                \
    INSULT_PRIVATE_EVAL_REC_46_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_46_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_46_##choice
#define INSULT_PRIVATE_EVAL_REC_46_CONTINUE                   INSULT_PRIVATE_EVAL_REC_47
#define INSULT_PRIVATE_EVAL_REC_46_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_47(...)                                                            \
    INSULT_PRIVATE_EVAL_REC_47_OVERLOAD(INSULT_PRIVATE_EVAL_REC_47_GET_CHOICE(__VA_ARGS__))        \
    (INSULT_PRIVATE_EVAL_REC_47_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_47_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_47_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_47_OVERLOAD(choice)                                                \
    INSULT_PRIVATE_EVAL_REC_47_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_47_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_47_##choice
#define INSULT_PRIVATE_EVAL_REC_47_CONTINUE                   INSULT_PRIVATE_EVAL_REC_48
#define INSULT_PRIVATE_EVAL_REC_47_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_48(...)                                                            \
    INSULT_PRIVATE_EVAL_REC_48_OVERLOAD(INSULT_PRIVATE_EVAL_REC_48_GET_CHOICE(__VA_ARGS__))        \
    (INSULT_PRIVATE_EVAL_REC_48_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_48_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_48_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_48_OVERLOAD(choice)                                                \
    INSULT_PRIVATE_EVAL_REC_48_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_48_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_48_##choice
#define INSULT_PRIVATE_EVAL_REC_48_CONTINUE                   INSULT_PRIVATE_EVAL_REC_49
#define INSULT_PRIVATE_EVAL_REC_48_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_49(...)                                                            \
    INSULT_PRIVATE_EVAL_REC_49_OVERLOAD(INSULT_PRIVATE_EVAL_REC_49_GET_CHOICE(__VA_ARGS__))        \
    (INSULT_PRIVATE_EVAL_REC_49_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_49_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_49_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_49_OVERLOAD(choice)                                                \
    INSULT_PRIVATE_EVAL_REC_49_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_49_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_49_##choice
#define INSULT_PRIVATE_EVAL_REC_49_CONTINUE                   INSULT_PRIVATE_EVAL_REC_50
#define INSULT_PRIVATE_EVAL_REC_49_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_50(...)                                                            \
    INSULT_PRIVATE_EVAL_REC_50_OVERLOAD(INSULT_PRIVATE_EVAL_REC_50_GET_CHOICE(__VA_ARGS__))        \
    (INSULT_PRIVATE_EVAL_REC_50_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_50_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_50_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_50_OVERLOAD(choice)                                                \
    INSULT_PRIVATE_EVAL_REC_50_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_50_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_50_##choice
#define INSULT_PRIVATE_EVAL_REC_50_CONTINUE                   INSULT_PRIVATE_EVAL_REC_51
#define INSULT_PRIVATE_EVAL_REC_50_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_51(...)                                                            \
    INSULT_PRIVATE_EVAL_REC_51_OVERLOAD(INSULT_PRIVATE_EVAL_REC_51_GET_CHOICE(__VA_ARGS__))        \
    (INSULT_PRIVATE_EVAL_REC_51_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_51_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_51_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_51_OVERLOAD(choice)                                                \
    INSULT_PRIVATE_EVAL_REC_51_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_51_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_51_##choice
#define INSULT_PRIVATE_EVAL_REC_51_CONTINUE                   INSULT_PRIVATE_EVAL_REC_52
#define INSULT_PRIVATE_EVAL_REC_51_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_52(...)                                                            \
    INSULT_PRIVATE_EVAL_REC_52_OVERLOAD(INSULT_PRIVATE_EVAL_REC_52_GET_CHOICE(__VA_ARGS__))        \
    (INSULT_PRIVATE_EVAL_REC_52_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_52_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_52_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_52_OVERLOAD(choice)                                                \
    INSULT_PRIVATE_EVAL_REC_52_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_52_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_52_##choice
#define INSULT_PRIVATE_EVAL_REC_52_CONTINUE                   INSULT_PRIVATE_EVAL_REC_53
#define INSULT_PRIVATE_EVAL_REC_52_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_53(...)                                                            \
    INSULT_PRIVATE_EVAL_REC_53_OVERLOAD(INSULT_PRIVATE_EVAL_REC_53_GET_CHOICE(__VA_ARGS__))        \
    (INSULT_PRIVATE_EVAL_REC_53_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_53_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_53_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_53_OVERLOAD(choice)                                                \
    INSULT_PRIVATE_EVAL_REC_53_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_53_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_53_##choice
#define INSULT_PRIVATE_EVAL_REC_53_CONTINUE                   INSULT_PRIVATE_EVAL_REC_54
#define INSULT_PRIVATE_EVAL_REC_53_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_54(...)                                                            \
    INSULT_PRIVATE_EVAL_REC_54_OVERLOAD(INSULT_PRIVATE_EVAL_REC_54_GET_CHOICE(__VA_ARGS__))        \
    (INSULT_PRIVATE_EVAL_REC_54_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_54_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_54_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_54_OVERLOAD(choice)                                                \
    INSULT_PRIVATE_EVAL_REC_54_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_54_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_54_##choice
#define INSULT_PRIVATE_EVAL_REC_54_CONTINUE                   INSULT_PRIVATE_EVAL_REC_55
#define INSULT_PRIVATE_EVAL_REC_54_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_55(...)                                                            \
    INSULT_PRIVATE_EVAL_REC_55_OVERLOAD(INSULT_PRIVATE_EVAL_REC_55_GET_CHOICE(__VA_ARGS__))        \
    (INSULT_PRIVATE_EVAL_REC_55_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_55_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_55_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_55_OVERLOAD(choice)                                                \
    INSULT_PRIVATE_EVAL_REC_55_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_55_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_55_##choice
#define INSULT_PRIVATE_EVAL_REC_55_CONTINUE                   INSULT_PRIVATE_EVAL_REC_56
#define INSULT_PRIVATE_EVAL_REC_55_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_56(...)                                                            \
    INSULT_PRIVATE_EVAL_REC_56_OVERLOAD(INSULT_PRIVATE_EVAL_REC_56_GET_CHOICE(__VA_ARGS__))        \
    (INSULT_PRIVATE_EVAL_REC_56_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_56_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_56_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_56_OVERLOAD(choice)                                                \
    INSULT_PRIVATE_EVAL_REC_56_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_56_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_56_##choice
#define INSULT_PRIVATE_EVAL_REC_56_CONTINUE                   INSULT_PRIVATE_EVAL_REC_57
#define INSULT_PRIVATE_EVAL_REC_56_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_57(...)                                                            \
    INSULT_PRIVATE_EVAL_REC_57_OVERLOAD(INSULT_PRIVATE_EVAL_REC_57_GET_CHOICE(__VA_ARGS__))        \
    (INSULT_PRIVATE_EVAL_REC_57_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_57_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_57_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_57_OVERLOAD(choice)                                                \
    INSULT_PRIVATE_EVAL_REC_57_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_57_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_57_##choice
#define INSULT_PRIVATE_EVAL_REC_57_CONTINUE                   INSULT_PRIVATE_EVAL_REC_58
#define INSULT_PRIVATE_EVAL_REC_57_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_58(...)                                                            \
    INSULT_PRIVATE_EVAL_REC_58_OVERLOAD(INSULT_PRIVATE_EVAL_REC_58_GET_CHOICE(__VA_ARGS__))        \
    (INSULT_PRIVATE_EVAL_REC_58_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_58_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_58_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_58_OVERLOAD(choice)                                                \
    INSULT_PRIVATE_EVAL_REC_58_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_58_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_58_##choice
#define INSULT_PRIVATE_EVAL_REC_58_CONTINUE                   INSULT_PRIVATE_EVAL_REC_59
#define INSULT_PRIVATE_EVAL_REC_58_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_59(...)                                                            \
    INSULT_PRIVATE_EVAL_REC_59_OVERLOAD(INSULT_PRIVATE_EVAL_REC_59_GET_CHOICE(__VA_ARGS__))        \
    (INSULT_PRIVATE_EVAL_REC_59_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_59_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_59_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_59_OVERLOAD(choice)                                                \
    INSULT_PRIVATE_EVAL_REC_59_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_59_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_59_##choice
#define INSULT_PRIVATE_EVAL_REC_59_CONTINUE                   INSULT_PRIVATE_EVAL_REC_60
#define INSULT_PRIVATE_EVAL_REC_59_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_60(...)                                                            \
    INSULT_PRIVATE_EVAL_REC_60_OVERLOAD(INSULT_PRIVATE_EVAL_REC_60_GET_CHOICE(__VA_ARGS__))        \
    (INSULT_PRIVATE_EVAL_REC_60_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_60_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_60_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_60_OVERLOAD(choice)                                                \
    INSULT_PRIVATE_EVAL_REC_60_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_60_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_60_##choice
#define INSULT_PRIVATE_EVAL_REC_60_CONTINUE                   INSULT_PRIVATE_EVAL_REC_61
#define INSULT_PRIVATE_EVAL_REC_60_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_61(...)                                                            \
    INSULT_PRIVATE_EVAL_REC_61_OVERLOAD(INSULT_PRIVATE_EVAL_REC_61_GET_CHOICE(__VA_ARGS__))        \
    (INSULT_PRIVATE_EVAL_REC_61_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_61_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_61_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_61_OVERLOAD(choice)                                                \
    INSULT_PRIVATE_EVAL_REC_61_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_61_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_61_##choice
#define INSULT_PRIVATE_EVAL_REC_61_CONTINUE                   INSULT_PRIVATE_EVAL_REC_62
#define INSULT_PRIVATE_EVAL_REC_61_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_62(...)                                                            \
    INSULT_PRIVATE_EVAL_REC_62_OVERLOAD(INSULT_PRIVATE_EVAL_REC_62_GET_CHOICE(__VA_ARGS__))        \
    (INSULT_PRIVATE_EVAL_REC_62_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_62_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_62_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_62_OVERLOAD(choice)                                                \
    INSULT_PRIVATE_EVAL_REC_62_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_62_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_62_##choice
#define INSULT_PRIVATE_EVAL_REC_62_CONTINUE                   INSULT_PRIVATE_EVAL_REC_63
#define INSULT_PRIVATE_EVAL_REC_62_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_63(...)                                                            \
    INSULT_PRIVATE_EVAL_REC_63_OVERLOAD(INSULT_PRIVATE_EVAL_REC_63_GET_CHOICE(__VA_ARGS__))        \
    (INSULT_PRIVATE_EVAL_REC_63_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_63_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_63_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_63_OVERLOAD(choice)                                                \
    INSULT_PRIVATE_EVAL_REC_63_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_63_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_63_##choice
#define INSULT_PRIVATE_EVAL_REC_63_CONTINUE                   INSULT_PRIVATE_EVAL_REC_64
#define INSULT_PRIVATE_EVAL_REC_63_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_64(...)                                                            \
    INSULT_PRIVATE_EVAL_REC_64_OVERLOAD(INSULT_PRIVATE_EVAL_REC_64_GET_CHOICE(__VA_ARGS__))        \
    (INSULT_PRIVATE_EVAL_REC_64_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_64_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_64_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_64_OVERLOAD(choice)                                                \
    INSULT_PRIVATE_EVAL_REC_64_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_64_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_64_##choice
#define INSULT_PRIVATE_EVAL_REC_64_CONTINUE                   INSULT_PRIVATE_EVAL_REC_65
#define INSULT_PRIVATE_EVAL_REC_64_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_65(...)                                                            \
    INSULT_PRIVATE_EVAL_REC_65_OVERLOAD(INSULT_PRIVATE_EVAL_REC_65_GET_CHOICE(__VA_ARGS__))        \
    (INSULT_PRIVATE_EVAL_REC_65_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_65_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_65_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_65_OVERLOAD(choice)                                                \
    INSULT_PRIVATE_EVAL_REC_65_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_65_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_65_##choice
#define INSULT_PRIVATE_EVAL_REC_65_CONTINUE                   INSULT_PRIVATE_EVAL_REC_66
#define INSULT_PRIVATE_EVAL_REC_65_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_66(...)                                                            \
    INSULT_PRIVATE_EVAL_REC_66_OVERLOAD(INSULT_PRIVATE_EVAL_REC_66_GET_CHOICE(__VA_ARGS__))        \
    (INSULT_PRIVATE_EVAL_REC_66_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_66_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_66_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_66_OVERLOAD(choice)                                                \
    INSULT_PRIVATE_EVAL_REC_66_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_66_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_66_##choice
#define INSULT_PRIVATE_EVAL_REC_66_CONTINUE                   INSULT_PRIVATE_EVAL_REC_67
#define INSULT_PRIVATE_EVAL_REC_66_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_67(...)                                                            \
    INSULT_PRIVATE_EVAL_REC_67_OVERLOAD(INSULT_PRIVATE_EVAL_REC_67_GET_CHOICE(__VA_ARGS__))        \
    (INSULT_PRIVATE_EVAL_REC_67_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_67_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_67_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_67_OVERLOAD(choice)                                                \
    INSULT_PRIVATE_EVAL_REC_67_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_67_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_67_##choice
#define INSULT_PRIVATE_EVAL_REC_67_CONTINUE                   INSULT_PRIVATE_EVAL_REC_68
#define INSULT_PRIVATE_EVAL_REC_67_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_68(...)                                                            \
    INSULT_PRIVATE_EVAL_REC_68_OVERLOAD(INSULT_PRIVATE_EVAL_REC_68_GET_CHOICE(__VA_ARGS__))        \
    (INSULT_PRIVATE_EVAL_REC_68_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_68_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_68_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_68_OVERLOAD(choice)                                                \
    INSULT_PRIVATE_EVAL_REC_68_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_68_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_68_##choice
#define INSULT_PRIVATE_EVAL_REC_68_CONTINUE                   INSULT_PRIVATE_EVAL_REC_69
#define INSULT_PRIVATE_EVAL_REC_68_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_69(...)                                                            \
    INSULT_PRIVATE_EVAL_REC_69_OVERLOAD(INSULT_PRIVATE_EVAL_REC_69_GET_CHOICE(__VA_ARGS__))        \
    (INSULT_PRIVATE_EVAL_REC_69_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_69_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_69_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_69_OVERLOAD(choice)                                                \
    INSULT_PRIVATE_EVAL_REC_69_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_69_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_69_##choice
#define INSULT_PRIVATE_EVAL_REC_69_CONTINUE                   INSULT_PRIVATE_EVAL_REC_70
#define INSULT_PRIVATE_EVAL_REC_69_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_70(...)                                                            \
    INSULT_PRIVATE_EVAL_REC_70_OVERLOAD(INSULT_PRIVATE_EVAL_REC_70_GET_CHOICE(__VA_ARGS__))        \
    (INSULT_PRIVATE_EVAL_REC_70_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_70_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_70_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_70_OVERLOAD(choice)                                                \
    INSULT_PRIVATE_EVAL_REC_70_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_70_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_70_##choice
#define INSULT_PRIVATE_EVAL_REC_70_CONTINUE                   INSULT_PRIVATE_EVAL_REC_71
#define INSULT_PRIVATE_EVAL_REC_70_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_71(...)                                                            \
    INSULT_PRIVATE_EVAL_REC_71_OVERLOAD(INSULT_PRIVATE_EVAL_REC_71_GET_CHOICE(__VA_ARGS__))        \
    (INSULT_PRIVATE_EVAL_REC_71_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_71_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_71_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_71_OVERLOAD(choice)                                                \
    INSULT_PRIVATE_EVAL_REC_71_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_71_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_71_##choice
#define INSULT_PRIVATE_EVAL_REC_71_CONTINUE                   INSULT_PRIVATE_EVAL_REC_72
#define INSULT_PRIVATE_EVAL_REC_71_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_72(...)                                                            \
    INSULT_PRIVATE_EVAL_REC_72_OVERLOAD(INSULT_PRIVATE_EVAL_REC_72_GET_CHOICE(__VA_ARGS__))        \
    (INSULT_PRIVATE_EVAL_REC_72_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_72_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_72_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_72_OVERLOAD(choice)                                                \
    INSULT_PRIVATE_EVAL_REC_72_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_72_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_72_##choice
#define INSULT_PRIVATE_EVAL_REC_72_CONTINUE                   INSULT_PRIVATE_EVAL_REC_73
#define INSULT_PRIVATE_EVAL_REC_72_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_73(...)                                                            \
    INSULT_PRIVATE_EVAL_REC_73_OVERLOAD(INSULT_PRIVATE_EVAL_REC_73_GET_CHOICE(__VA_ARGS__))        \
    (INSULT_PRIVATE_EVAL_REC_73_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_73_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_73_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_73_OVERLOAD(choice)                                                \
    INSULT_PRIVATE_EVAL_REC_73_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_73_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_73_##choice
#define INSULT_PRIVATE_EVAL_REC_73_CONTINUE                   INSULT_PRIVATE_EVAL_REC_74
#define INSULT_PRIVATE_EVAL_REC_73_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_74(...)                                                            \
    INSULT_PRIVATE_EVAL_REC_74_OVERLOAD(INSULT_PRIVATE_EVAL_REC_74_GET_CHOICE(__VA_ARGS__))        \
    (INSULT_PRIVATE_EVAL_REC_74_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_74_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_74_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_74_OVERLOAD(choice)                                                \
    INSULT_PRIVATE_EVAL_REC_74_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_74_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_74_##choice
#define INSULT_PRIVATE_EVAL_REC_74_CONTINUE                   INSULT_PRIVATE_EVAL_REC_75
#define INSULT_PRIVATE_EVAL_REC_74_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_75(...)                                                            \
    INSULT_PRIVATE_EVAL_REC_75_OVERLOAD(INSULT_PRIVATE_EVAL_REC_75_GET_CHOICE(__VA_ARGS__))        \
    (INSULT_PRIVATE_EVAL_REC_75_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_75_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_75_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_75_OVERLOAD(choice)                                                \
    INSULT_PRIVATE_EVAL_REC_75_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_75_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_75_##choice
#define INSULT_PRIVATE_EVAL_REC_75_CONTINUE                   INSULT_PRIVATE_EVAL_REC_76
#define INSULT_PRIVATE_EVAL_REC_75_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_76(...)                                                            \
    INSULT_PRIVATE_EVAL_REC_76_OVERLOAD(INSULT_PRIVATE_EVAL_REC_76_GET_CHOICE(__VA_ARGS__))        \
    (INSULT_PRIVATE_EVAL_REC_76_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_76_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_76_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_76_OVERLOAD(choice)                                                \
    INSULT_PRIVATE_EVAL_REC_76_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_76_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_76_##choice
#define INSULT_PRIVATE_EVAL_REC_76_CONTINUE                   INSULT_PRIVATE_EVAL_REC_77
#define INSULT_PRIVATE_EVAL_REC_76_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_77(...)                                                            \
    INSULT_PRIVATE_EVAL_REC_77_OVERLOAD(INSULT_PRIVATE_EVAL_REC_77_GET_CHOICE(__VA_ARGS__))        \
    (INSULT_PRIVATE_EVAL_REC_77_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_77_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_77_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_77_OVERLOAD(choice)                                                \
    INSULT_PRIVATE_EVAL_REC_77_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_77_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_77_##choice
#define INSULT_PRIVATE_EVAL_REC_77_CONTINUE                   INSULT_PRIVATE_EVAL_REC_78
#define INSULT_PRIVATE_EVAL_REC_77_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_78(...)                                                            \
    INSULT_PRIVATE_EVAL_REC_78_OVERLOAD(INSULT_PRIVATE_EVAL_REC_78_GET_CHOICE(__VA_ARGS__))        \
    (INSULT_PRIVATE_EVAL_REC_78_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_78_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_78_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_78_OVERLOAD(choice)                                                \
    INSULT_PRIVATE_EVAL_REC_78_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_78_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_78_##choice
#define INSULT_PRIVATE_EVAL_REC_78_CONTINUE                   INSULT_PRIVATE_EVAL_REC_79
#define INSULT_PRIVATE_EVAL_REC_78_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_79(...)                                                            \
    INSULT_PRIVATE_EVAL_REC_79_OVERLOAD(INSULT_PRIVATE_EVAL_REC_79_GET_CHOICE(__VA_ARGS__))        \
    (INSULT_PRIVATE_EVAL_REC_79_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_79_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_79_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_79_OVERLOAD(choice)                                                \
    INSULT_PRIVATE_EVAL_REC_79_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_79_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_79_##choice
#define INSULT_PRIVATE_EVAL_REC_79_CONTINUE                   INSULT_PRIVATE_EVAL_REC_80
#define INSULT_PRIVATE_EVAL_REC_79_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_80(...)                                                            \
    INSULT_PRIVATE_EVAL_REC_80_OVERLOAD(INSULT_PRIVATE_EVAL_REC_80_GET_CHOICE(__VA_ARGS__))        \
    (INSULT_PRIVATE_EVAL_REC_80_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_80_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_80_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_80_OVERLOAD(choice)                                                \
    INSULT_PRIVATE_EVAL_REC_80_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_80_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_80_##choice
#define INSULT_PRIVATE_EVAL_REC_80_CONTINUE                   INSULT_PRIVATE_EVAL_REC_81
#define INSULT_PRIVATE_EVAL_REC_80_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_81(...)                                                            \
    INSULT_PRIVATE_EVAL_REC_81_OVERLOAD(INSULT_PRIVATE_EVAL_REC_81_GET_CHOICE(__VA_ARGS__))        \
    (INSULT_PRIVATE_EVAL_REC_81_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_81_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_81_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_81_OVERLOAD(choice)                                                \
    INSULT_PRIVATE_EVAL_REC_81_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_81_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_81_##choice
#define INSULT_PRIVATE_EVAL_REC_81_CONTINUE                   INSULT_PRIVATE_EVAL_REC_82
#define INSULT_PRIVATE_EVAL_REC_81_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_82(...)                                                            \
    INSULT_PRIVATE_EVAL_REC_82_OVERLOAD(INSULT_PRIVATE_EVAL_REC_82_GET_CHOICE(__VA_ARGS__))        \
    (INSULT_PRIVATE_EVAL_REC_82_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_82_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_82_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_82_OVERLOAD(choice)                                                \
    INSULT_PRIVATE_EVAL_REC_82_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_82_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_82_##choice
#define INSULT_PRIVATE_EVAL_REC_82_CONTINUE                   INSULT_PRIVATE_EVAL_REC_83
#define INSULT_PRIVATE_EVAL_REC_82_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_83(...)                                                            \
    INSULT_PRIVATE_EVAL_REC_83_OVERLOAD(INSULT_PRIVATE_EVAL_REC_83_GET_CHOICE(__VA_ARGS__))        \
    (INSULT_PRIVATE_EVAL_REC_83_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_83_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_83_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_83_OVERLOAD(choice)                                                \
    INSULT_PRIVATE_EVAL_REC_83_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_83_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_83_##choice
#define INSULT_PRIVATE_EVAL_REC_83_CONTINUE                   INSULT_PRIVATE_EVAL_REC_84
#define INSULT_PRIVATE_EVAL_REC_83_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_84(...)                                                            \
    INSULT_PRIVATE_EVAL_REC_84_OVERLOAD(INSULT_PRIVATE_EVAL_REC_84_GET_CHOICE(__VA_ARGS__))        \
    (INSULT_PRIVATE_EVAL_REC_84_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_84_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_84_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_84_OVERLOAD(choice)                                                \
    INSULT_PRIVATE_EVAL_REC_84_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_84_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_84_##choice
#define INSULT_PRIVATE_EVAL_REC_84_CONTINUE                   INSULT_PRIVATE_EVAL_REC_85
#define INSULT_PRIVATE_EVAL_REC_84_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_85(...)                                                            \
    INSULT_PRIVATE_EVAL_REC_85_OVERLOAD(INSULT_PRIVATE_EVAL_REC_85_GET_CHOICE(__VA_ARGS__))        \
    (INSULT_PRIVATE_EVAL_REC_85_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_85_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_85_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_85_OVERLOAD(choice)                                                \
    INSULT_PRIVATE_EVAL_REC_85_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_85_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_85_##choice
#define INSULT_PRIVATE_EVAL_REC_85_CONTINUE                   INSULT_PRIVATE_EVAL_REC_86
#define INSULT_PRIVATE_EVAL_REC_85_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_86(...)                                                            \
    INSULT_PRIVATE_EVAL_REC_86_OVERLOAD(INSULT_PRIVATE_EVAL_REC_86_GET_CHOICE(__VA_ARGS__))        \
    (INSULT_PRIVATE_EVAL_REC_86_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_86_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_86_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_86_OVERLOAD(choice)                                                \
    INSULT_PRIVATE_EVAL_REC_86_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_86_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_86_##choice
#define INSULT_PRIVATE_EVAL_REC_86_CONTINUE                   INSULT_PRIVATE_EVAL_REC_87
#define INSULT_PRIVATE_EVAL_REC_86_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_87(...)                                                            \
    INSULT_PRIVATE_EVAL_REC_87_OVERLOAD(INSULT_PRIVATE_EVAL_REC_87_GET_CHOICE(__VA_ARGS__))        \
    (INSULT_PRIVATE_EVAL_REC_87_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_87_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_87_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_87_OVERLOAD(choice)                                                \
    INSULT_PRIVATE_EVAL_REC_87_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_87_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_87_##choice
#define INSULT_PRIVATE_EVAL_REC_87_CONTINUE                   INSULT_PRIVATE_EVAL_REC_88
#define INSULT_PRIVATE_EVAL_REC_87_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_88(...)                                                            \
    INSULT_PRIVATE_EVAL_REC_88_OVERLOAD(INSULT_PRIVATE_EVAL_REC_88_GET_CHOICE(__VA_ARGS__))        \
    (INSULT_PRIVATE_EVAL_REC_88_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_88_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_88_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_88_OVERLOAD(choice)                                                \
    INSULT_PRIVATE_EVAL_REC_88_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_88_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_88_##choice
#define INSULT_PRIVATE_EVAL_REC_88_CONTINUE                   INSULT_PRIVATE_EVAL_REC_89
#define INSULT_PRIVATE_EVAL_REC_88_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_89(...)                                                            \
    INSULT_PRIVATE_EVAL_REC_89_OVERLOAD(INSULT_PRIVATE_EVAL_REC_89_GET_CHOICE(__VA_ARGS__))        \
    (INSULT_PRIVATE_EVAL_REC_89_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_89_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_89_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_89_OVERLOAD(choice)                                                \
    INSULT_PRIVATE_EVAL_REC_89_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_89_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_89_##choice
#define INSULT_PRIVATE_EVAL_REC_89_CONTINUE                   INSULT_PRIVATE_EVAL_REC_90
#define INSULT_PRIVATE_EVAL_REC_89_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_90(...)                                                            \
    INSULT_PRIVATE_EVAL_REC_90_OVERLOAD(INSULT_PRIVATE_EVAL_REC_90_GET_CHOICE(__VA_ARGS__))        \
    (INSULT_PRIVATE_EVAL_REC_90_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_90_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_90_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_90_OVERLOAD(choice)                                                \
    INSULT_PRIVATE_EVAL_REC_90_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_90_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_90_##choice
#define INSULT_PRIVATE_EVAL_REC_90_CONTINUE                   INSULT_PRIVATE_EVAL_REC_91
#define INSULT_PRIVATE_EVAL_REC_90_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_91(...)                                                            \
    INSULT_PRIVATE_EVAL_REC_91_OVERLOAD(INSULT_PRIVATE_EVAL_REC_91_GET_CHOICE(__VA_ARGS__))        \
    (INSULT_PRIVATE_EVAL_REC_91_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_91_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_91_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_91_OVERLOAD(choice)                                                \
    INSULT_PRIVATE_EVAL_REC_91_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_91_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_91_##choice
#define INSULT_PRIVATE_EVAL_REC_91_CONTINUE                   INSULT_PRIVATE_EVAL_REC_92
#define INSULT_PRIVATE_EVAL_REC_91_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_92(...)                                                            \
    INSULT_PRIVATE_EVAL_REC_92_OVERLOAD(INSULT_PRIVATE_EVAL_REC_92_GET_CHOICE(__VA_ARGS__))        \
    (INSULT_PRIVATE_EVAL_REC_92_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_92_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_92_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_92_OVERLOAD(choice)                                                \
    INSULT_PRIVATE_EVAL_REC_92_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_92_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_92_##choice
#define INSULT_PRIVATE_EVAL_REC_92_CONTINUE                   INSULT_PRIVATE_EVAL_REC_93
#define INSULT_PRIVATE_EVAL_REC_92_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_93(...)                                                            \
    INSULT_PRIVATE_EVAL_REC_93_OVERLOAD(INSULT_PRIVATE_EVAL_REC_93_GET_CHOICE(__VA_ARGS__))        \
    (INSULT_PRIVATE_EVAL_REC_93_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_93_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_93_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_93_OVERLOAD(choice)                                                \
    INSULT_PRIVATE_EVAL_REC_93_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_93_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_93_##choice
#define INSULT_PRIVATE_EVAL_REC_93_CONTINUE                   INSULT_PRIVATE_EVAL_REC_94
#define INSULT_PRIVATE_EVAL_REC_93_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_94(...)                                                            \
    INSULT_PRIVATE_EVAL_REC_94_OVERLOAD(INSULT_PRIVATE_EVAL_REC_94_GET_CHOICE(__VA_ARGS__))        \
    (INSULT_PRIVATE_EVAL_REC_94_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_94_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_94_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_94_OVERLOAD(choice)                                                \
    INSULT_PRIVATE_EVAL_REC_94_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_94_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_94_##choice
#define INSULT_PRIVATE_EVAL_REC_94_CONTINUE                   INSULT_PRIVATE_EVAL_REC_95
#define INSULT_PRIVATE_EVAL_REC_94_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_95(...)                                                            \
    INSULT_PRIVATE_EVAL_REC_95_OVERLOAD(INSULT_PRIVATE_EVAL_REC_95_GET_CHOICE(__VA_ARGS__))        \
    (INSULT_PRIVATE_EVAL_REC_95_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_95_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_95_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_95_OVERLOAD(choice)                                                \
    INSULT_PRIVATE_EVAL_REC_95_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_95_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_95_##choice
#define INSULT_PRIVATE_EVAL_REC_95_CONTINUE                   INSULT_PRIVATE_EVAL_REC_96
#define INSULT_PRIVATE_EVAL_REC_95_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_96(...)                                                            \
    INSULT_PRIVATE_EVAL_REC_96_OVERLOAD(INSULT_PRIVATE_EVAL_REC_96_GET_CHOICE(__VA_ARGS__))        \
    (INSULT_PRIVATE_EVAL_REC_96_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_96_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_96_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_96_OVERLOAD(choice)                                                \
    INSULT_PRIVATE_EVAL_REC_96_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_96_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_96_##choice
#define INSULT_PRIVATE_EVAL_REC_96_CONTINUE                   INSULT_PRIVATE_EVAL_REC_97
#define INSULT_PRIVATE_EVAL_REC_96_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_97(...)                                                            \
    INSULT_PRIVATE_EVAL_REC_97_OVERLOAD(INSULT_PRIVATE_EVAL_REC_97_GET_CHOICE(__VA_ARGS__))        \
    (INSULT_PRIVATE_EVAL_REC_97_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_97_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_97_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_97_OVERLOAD(choice)                                                \
    INSULT_PRIVATE_EVAL_REC_97_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_97_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_97_##choice
#define INSULT_PRIVATE_EVAL_REC_97_CONTINUE                   INSULT_PRIVATE_EVAL_REC_98
#define INSULT_PRIVATE_EVAL_REC_97_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_98(...)                                                            \
    INSULT_PRIVATE_EVAL_REC_98_OVERLOAD(INSULT_PRIVATE_EVAL_REC_98_GET_CHOICE(__VA_ARGS__))        \
    (INSULT_PRIVATE_EVAL_REC_98_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_98_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_98_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_98_OVERLOAD(choice)                                                \
    INSULT_PRIVATE_EVAL_REC_98_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_98_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_98_##choice
#define INSULT_PRIVATE_EVAL_REC_98_CONTINUE                   INSULT_PRIVATE_EVAL_REC_99
#define INSULT_PRIVATE_EVAL_REC_98_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_99(...)                                                            \
    INSULT_PRIVATE_EVAL_REC_99_OVERLOAD(INSULT_PRIVATE_EVAL_REC_99_GET_CHOICE(__VA_ARGS__))        \
    (INSULT_PRIVATE_EVAL_REC_99_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_99_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_99_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_99_OVERLOAD(choice)                                                \
    INSULT_PRIVATE_EVAL_REC_99_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_99_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_99_##choice
#define INSULT_PRIVATE_EVAL_REC_99_CONTINUE                   INSULT_PRIVATE_EVAL_REC_100
#define INSULT_PRIVATE_EVAL_REC_99_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_100(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_100_OVERLOAD(INSULT_PRIVATE_EVAL_REC_100_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_100_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_100_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_100_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_100_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_100_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_100_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_100_##choice
#define INSULT_PRIVATE_EVAL_REC_100_CONTINUE                   INSULT_PRIVATE_EVAL_REC_101
#define INSULT_PRIVATE_EVAL_REC_100_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_101(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_101_OVERLOAD(INSULT_PRIVATE_EVAL_REC_101_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_101_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_101_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_101_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_101_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_101_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_101_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_101_##choice
#define INSULT_PRIVATE_EVAL_REC_101_CONTINUE                   INSULT_PRIVATE_EVAL_REC_102
#define INSULT_PRIVATE_EVAL_REC_101_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_102(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_102_OVERLOAD(INSULT_PRIVATE_EVAL_REC_102_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_102_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_102_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_102_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_102_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_102_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_102_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_102_##choice
#define INSULT_PRIVATE_EVAL_REC_102_CONTINUE                   INSULT_PRIVATE_EVAL_REC_103
#define INSULT_PRIVATE_EVAL_REC_102_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_103(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_103_OVERLOAD(INSULT_PRIVATE_EVAL_REC_103_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_103_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_103_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_103_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_103_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_103_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_103_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_103_##choice
#define INSULT_PRIVATE_EVAL_REC_103_CONTINUE                   INSULT_PRIVATE_EVAL_REC_104
#define INSULT_PRIVATE_EVAL_REC_103_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_104(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_104_OVERLOAD(INSULT_PRIVATE_EVAL_REC_104_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_104_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_104_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_104_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_104_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_104_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_104_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_104_##choice
#define INSULT_PRIVATE_EVAL_REC_104_CONTINUE                   INSULT_PRIVATE_EVAL_REC_105
#define INSULT_PRIVATE_EVAL_REC_104_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_105(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_105_OVERLOAD(INSULT_PRIVATE_EVAL_REC_105_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_105_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_105_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_105_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_105_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_105_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_105_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_105_##choice
#define INSULT_PRIVATE_EVAL_REC_105_CONTINUE                   INSULT_PRIVATE_EVAL_REC_106
#define INSULT_PRIVATE_EVAL_REC_105_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_106(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_106_OVERLOAD(INSULT_PRIVATE_EVAL_REC_106_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_106_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_106_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_106_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_106_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_106_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_106_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_106_##choice
#define INSULT_PRIVATE_EVAL_REC_106_CONTINUE                   INSULT_PRIVATE_EVAL_REC_107
#define INSULT_PRIVATE_EVAL_REC_106_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_107(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_107_OVERLOAD(INSULT_PRIVATE_EVAL_REC_107_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_107_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_107_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_107_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_107_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_107_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_107_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_107_##choice
#define INSULT_PRIVATE_EVAL_REC_107_CONTINUE                   INSULT_PRIVATE_EVAL_REC_108
#define INSULT_PRIVATE_EVAL_REC_107_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_108(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_108_OVERLOAD(INSULT_PRIVATE_EVAL_REC_108_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_108_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_108_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_108_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_108_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_108_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_108_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_108_##choice
#define INSULT_PRIVATE_EVAL_REC_108_CONTINUE                   INSULT_PRIVATE_EVAL_REC_109
#define INSULT_PRIVATE_EVAL_REC_108_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_109(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_109_OVERLOAD(INSULT_PRIVATE_EVAL_REC_109_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_109_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_109_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_109_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_109_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_109_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_109_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_109_##choice
#define INSULT_PRIVATE_EVAL_REC_109_CONTINUE                   INSULT_PRIVATE_EVAL_REC_110
#define INSULT_PRIVATE_EVAL_REC_109_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_110(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_110_OVERLOAD(INSULT_PRIVATE_EVAL_REC_110_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_110_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_110_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_110_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_110_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_110_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_110_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_110_##choice
#define INSULT_PRIVATE_EVAL_REC_110_CONTINUE                   INSULT_PRIVATE_EVAL_REC_111
#define INSULT_PRIVATE_EVAL_REC_110_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_111(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_111_OVERLOAD(INSULT_PRIVATE_EVAL_REC_111_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_111_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_111_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_111_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_111_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_111_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_111_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_111_##choice
#define INSULT_PRIVATE_EVAL_REC_111_CONTINUE                   INSULT_PRIVATE_EVAL_REC_112
#define INSULT_PRIVATE_EVAL_REC_111_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_112(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_112_OVERLOAD(INSULT_PRIVATE_EVAL_REC_112_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_112_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_112_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_112_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_112_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_112_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_112_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_112_##choice
#define INSULT_PRIVATE_EVAL_REC_112_CONTINUE                   INSULT_PRIVATE_EVAL_REC_113
#define INSULT_PRIVATE_EVAL_REC_112_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_113(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_113_OVERLOAD(INSULT_PRIVATE_EVAL_REC_113_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_113_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_113_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_113_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_113_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_113_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_113_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_113_##choice
#define INSULT_PRIVATE_EVAL_REC_113_CONTINUE                   INSULT_PRIVATE_EVAL_REC_114
#define INSULT_PRIVATE_EVAL_REC_113_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_114(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_114_OVERLOAD(INSULT_PRIVATE_EVAL_REC_114_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_114_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_114_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_114_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_114_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_114_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_114_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_114_##choice
#define INSULT_PRIVATE_EVAL_REC_114_CONTINUE                   INSULT_PRIVATE_EVAL_REC_115
#define INSULT_PRIVATE_EVAL_REC_114_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_115(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_115_OVERLOAD(INSULT_PRIVATE_EVAL_REC_115_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_115_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_115_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_115_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_115_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_115_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_115_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_115_##choice
#define INSULT_PRIVATE_EVAL_REC_115_CONTINUE                   INSULT_PRIVATE_EVAL_REC_116
#define INSULT_PRIVATE_EVAL_REC_115_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_116(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_116_OVERLOAD(INSULT_PRIVATE_EVAL_REC_116_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_116_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_116_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_116_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_116_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_116_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_116_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_116_##choice
#define INSULT_PRIVATE_EVAL_REC_116_CONTINUE                   INSULT_PRIVATE_EVAL_REC_117
#define INSULT_PRIVATE_EVAL_REC_116_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_117(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_117_OVERLOAD(INSULT_PRIVATE_EVAL_REC_117_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_117_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_117_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_117_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_117_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_117_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_117_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_117_##choice
#define INSULT_PRIVATE_EVAL_REC_117_CONTINUE                   INSULT_PRIVATE_EVAL_REC_118
#define INSULT_PRIVATE_EVAL_REC_117_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_118(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_118_OVERLOAD(INSULT_PRIVATE_EVAL_REC_118_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_118_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_118_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_118_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_118_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_118_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_118_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_118_##choice
#define INSULT_PRIVATE_EVAL_REC_118_CONTINUE                   INSULT_PRIVATE_EVAL_REC_119
#define INSULT_PRIVATE_EVAL_REC_118_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_119(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_119_OVERLOAD(INSULT_PRIVATE_EVAL_REC_119_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_119_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_119_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_119_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_119_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_119_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_119_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_119_##choice
#define INSULT_PRIVATE_EVAL_REC_119_CONTINUE                   INSULT_PRIVATE_EVAL_REC_120
#define INSULT_PRIVATE_EVAL_REC_119_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_120(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_120_OVERLOAD(INSULT_PRIVATE_EVAL_REC_120_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_120_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_120_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_120_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_120_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_120_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_120_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_120_##choice
#define INSULT_PRIVATE_EVAL_REC_120_CONTINUE                   INSULT_PRIVATE_EVAL_REC_121
#define INSULT_PRIVATE_EVAL_REC_120_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_121(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_121_OVERLOAD(INSULT_PRIVATE_EVAL_REC_121_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_121_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_121_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_121_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_121_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_121_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_121_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_121_##choice
#define INSULT_PRIVATE_EVAL_REC_121_CONTINUE                   INSULT_PRIVATE_EVAL_REC_122
#define INSULT_PRIVATE_EVAL_REC_121_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_122(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_122_OVERLOAD(INSULT_PRIVATE_EVAL_REC_122_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_122_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_122_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_122_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_122_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_122_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_122_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_122_##choice
#define INSULT_PRIVATE_EVAL_REC_122_CONTINUE                   INSULT_PRIVATE_EVAL_REC_123
#define INSULT_PRIVATE_EVAL_REC_122_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_123(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_123_OVERLOAD(INSULT_PRIVATE_EVAL_REC_123_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_123_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_123_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_123_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_123_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_123_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_123_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_123_##choice
#define INSULT_PRIVATE_EVAL_REC_123_CONTINUE                   INSULT_PRIVATE_EVAL_REC_124
#define INSULT_PRIVATE_EVAL_REC_123_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_124(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_124_OVERLOAD(INSULT_PRIVATE_EVAL_REC_124_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_124_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_124_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_124_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_124_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_124_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_124_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_124_##choice
#define INSULT_PRIVATE_EVAL_REC_124_CONTINUE                   INSULT_PRIVATE_EVAL_REC_125
#define INSULT_PRIVATE_EVAL_REC_124_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_125(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_125_OVERLOAD(INSULT_PRIVATE_EVAL_REC_125_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_125_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_125_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_125_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_125_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_125_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_125_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_125_##choice
#define INSULT_PRIVATE_EVAL_REC_125_CONTINUE                   INSULT_PRIVATE_EVAL_REC_126
#define INSULT_PRIVATE_EVAL_REC_125_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_126(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_126_OVERLOAD(INSULT_PRIVATE_EVAL_REC_126_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_126_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_126_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_126_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_126_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_126_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_126_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_126_##choice
#define INSULT_PRIVATE_EVAL_REC_126_CONTINUE                   INSULT_PRIVATE_EVAL_REC_127
#define INSULT_PRIVATE_EVAL_REC_126_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_127(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_127_OVERLOAD(INSULT_PRIVATE_EVAL_REC_127_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_127_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_127_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_127_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_127_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_127_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_127_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_127_##choice
#define INSULT_PRIVATE_EVAL_REC_127_CONTINUE                   INSULT_PRIVATE_EVAL_REC_128
#define INSULT_PRIVATE_EVAL_REC_127_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_128(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_128_OVERLOAD(INSULT_PRIVATE_EVAL_REC_128_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_128_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_128_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_128_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_128_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_128_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_128_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_128_##choice
#define INSULT_PRIVATE_EVAL_REC_128_CONTINUE                   INSULT_PRIVATE_EVAL_REC_129
#define INSULT_PRIVATE_EVAL_REC_128_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_129(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_129_OVERLOAD(INSULT_PRIVATE_EVAL_REC_129_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_129_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_129_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_129_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_129_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_129_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_129_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_129_##choice
#define INSULT_PRIVATE_EVAL_REC_129_CONTINUE                   INSULT_PRIVATE_EVAL_REC_130
#define INSULT_PRIVATE_EVAL_REC_129_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_130(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_130_OVERLOAD(INSULT_PRIVATE_EVAL_REC_130_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_130_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_130_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_130_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_130_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_130_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_130_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_130_##choice
#define INSULT_PRIVATE_EVAL_REC_130_CONTINUE                   INSULT_PRIVATE_EVAL_REC_131
#define INSULT_PRIVATE_EVAL_REC_130_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_131(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_131_OVERLOAD(INSULT_PRIVATE_EVAL_REC_131_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_131_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_131_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_131_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_131_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_131_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_131_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_131_##choice
#define INSULT_PRIVATE_EVAL_REC_131_CONTINUE                   INSULT_PRIVATE_EVAL_REC_132
#define INSULT_PRIVATE_EVAL_REC_131_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_132(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_132_OVERLOAD(INSULT_PRIVATE_EVAL_REC_132_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_132_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_132_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_132_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_132_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_132_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_132_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_132_##choice
#define INSULT_PRIVATE_EVAL_REC_132_CONTINUE                   INSULT_PRIVATE_EVAL_REC_133
#define INSULT_PRIVATE_EVAL_REC_132_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_133(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_133_OVERLOAD(INSULT_PRIVATE_EVAL_REC_133_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_133_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_133_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_133_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_133_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_133_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_133_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_133_##choice
#define INSULT_PRIVATE_EVAL_REC_133_CONTINUE                   INSULT_PRIVATE_EVAL_REC_134
#define INSULT_PRIVATE_EVAL_REC_133_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_134(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_134_OVERLOAD(INSULT_PRIVATE_EVAL_REC_134_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_134_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_134_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_134_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_134_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_134_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_134_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_134_##choice
#define INSULT_PRIVATE_EVAL_REC_134_CONTINUE                   INSULT_PRIVATE_EVAL_REC_135
#define INSULT_PRIVATE_EVAL_REC_134_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_135(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_135_OVERLOAD(INSULT_PRIVATE_EVAL_REC_135_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_135_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_135_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_135_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_135_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_135_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_135_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_135_##choice
#define INSULT_PRIVATE_EVAL_REC_135_CONTINUE                   INSULT_PRIVATE_EVAL_REC_136
#define INSULT_PRIVATE_EVAL_REC_135_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_136(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_136_OVERLOAD(INSULT_PRIVATE_EVAL_REC_136_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_136_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_136_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_136_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_136_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_136_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_136_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_136_##choice
#define INSULT_PRIVATE_EVAL_REC_136_CONTINUE                   INSULT_PRIVATE_EVAL_REC_137
#define INSULT_PRIVATE_EVAL_REC_136_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_137(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_137_OVERLOAD(INSULT_PRIVATE_EVAL_REC_137_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_137_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_137_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_137_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_137_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_137_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_137_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_137_##choice
#define INSULT_PRIVATE_EVAL_REC_137_CONTINUE                   INSULT_PRIVATE_EVAL_REC_138
#define INSULT_PRIVATE_EVAL_REC_137_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_138(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_138_OVERLOAD(INSULT_PRIVATE_EVAL_REC_138_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_138_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_138_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_138_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_138_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_138_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_138_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_138_##choice
#define INSULT_PRIVATE_EVAL_REC_138_CONTINUE                   INSULT_PRIVATE_EVAL_REC_139
#define INSULT_PRIVATE_EVAL_REC_138_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_139(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_139_OVERLOAD(INSULT_PRIVATE_EVAL_REC_139_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_139_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_139_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_139_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_139_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_139_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_139_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_139_##choice
#define INSULT_PRIVATE_EVAL_REC_139_CONTINUE                   INSULT_PRIVATE_EVAL_REC_140
#define INSULT_PRIVATE_EVAL_REC_139_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_140(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_140_OVERLOAD(INSULT_PRIVATE_EVAL_REC_140_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_140_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_140_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_140_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_140_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_140_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_140_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_140_##choice
#define INSULT_PRIVATE_EVAL_REC_140_CONTINUE                   INSULT_PRIVATE_EVAL_REC_141
#define INSULT_PRIVATE_EVAL_REC_140_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_141(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_141_OVERLOAD(INSULT_PRIVATE_EVAL_REC_141_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_141_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_141_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_141_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_141_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_141_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_141_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_141_##choice
#define INSULT_PRIVATE_EVAL_REC_141_CONTINUE                   INSULT_PRIVATE_EVAL_REC_142
#define INSULT_PRIVATE_EVAL_REC_141_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_142(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_142_OVERLOAD(INSULT_PRIVATE_EVAL_REC_142_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_142_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_142_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_142_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_142_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_142_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_142_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_142_##choice
#define INSULT_PRIVATE_EVAL_REC_142_CONTINUE                   INSULT_PRIVATE_EVAL_REC_143
#define INSULT_PRIVATE_EVAL_REC_142_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_143(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_143_OVERLOAD(INSULT_PRIVATE_EVAL_REC_143_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_143_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_143_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_143_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_143_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_143_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_143_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_143_##choice
#define INSULT_PRIVATE_EVAL_REC_143_CONTINUE                   INSULT_PRIVATE_EVAL_REC_144
#define INSULT_PRIVATE_EVAL_REC_143_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_144(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_144_OVERLOAD(INSULT_PRIVATE_EVAL_REC_144_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_144_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_144_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_144_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_144_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_144_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_144_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_144_##choice
#define INSULT_PRIVATE_EVAL_REC_144_CONTINUE                   INSULT_PRIVATE_EVAL_REC_145
#define INSULT_PRIVATE_EVAL_REC_144_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_145(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_145_OVERLOAD(INSULT_PRIVATE_EVAL_REC_145_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_145_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_145_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_145_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_145_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_145_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_145_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_145_##choice
#define INSULT_PRIVATE_EVAL_REC_145_CONTINUE                   INSULT_PRIVATE_EVAL_REC_146
#define INSULT_PRIVATE_EVAL_REC_145_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_146(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_146_OVERLOAD(INSULT_PRIVATE_EVAL_REC_146_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_146_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_146_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_146_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_146_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_146_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_146_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_146_##choice
#define INSULT_PRIVATE_EVAL_REC_146_CONTINUE                   INSULT_PRIVATE_EVAL_REC_147
#define INSULT_PRIVATE_EVAL_REC_146_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_147(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_147_OVERLOAD(INSULT_PRIVATE_EVAL_REC_147_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_147_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_147_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_147_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_147_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_147_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_147_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_147_##choice
#define INSULT_PRIVATE_EVAL_REC_147_CONTINUE                   INSULT_PRIVATE_EVAL_REC_148
#define INSULT_PRIVATE_EVAL_REC_147_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_148(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_148_OVERLOAD(INSULT_PRIVATE_EVAL_REC_148_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_148_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_148_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_148_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_148_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_148_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_148_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_148_##choice
#define INSULT_PRIVATE_EVAL_REC_148_CONTINUE                   INSULT_PRIVATE_EVAL_REC_149
#define INSULT_PRIVATE_EVAL_REC_148_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_149(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_149_OVERLOAD(INSULT_PRIVATE_EVAL_REC_149_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_149_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_149_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_149_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_149_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_149_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_149_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_149_##choice
#define INSULT_PRIVATE_EVAL_REC_149_CONTINUE                   INSULT_PRIVATE_EVAL_REC_150
#define INSULT_PRIVATE_EVAL_REC_149_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_150(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_150_OVERLOAD(INSULT_PRIVATE_EVAL_REC_150_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_150_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_150_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_150_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_150_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_150_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_150_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_150_##choice
#define INSULT_PRIVATE_EVAL_REC_150_CONTINUE                   INSULT_PRIVATE_EVAL_REC_151
#define INSULT_PRIVATE_EVAL_REC_150_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_151(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_151_OVERLOAD(INSULT_PRIVATE_EVAL_REC_151_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_151_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_151_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_151_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_151_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_151_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_151_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_151_##choice
#define INSULT_PRIVATE_EVAL_REC_151_CONTINUE                   INSULT_PRIVATE_EVAL_REC_152
#define INSULT_PRIVATE_EVAL_REC_151_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_152(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_152_OVERLOAD(INSULT_PRIVATE_EVAL_REC_152_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_152_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_152_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_152_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_152_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_152_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_152_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_152_##choice
#define INSULT_PRIVATE_EVAL_REC_152_CONTINUE                   INSULT_PRIVATE_EVAL_REC_153
#define INSULT_PRIVATE_EVAL_REC_152_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_153(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_153_OVERLOAD(INSULT_PRIVATE_EVAL_REC_153_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_153_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_153_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_153_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_153_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_153_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_153_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_153_##choice
#define INSULT_PRIVATE_EVAL_REC_153_CONTINUE                   INSULT_PRIVATE_EVAL_REC_154
#define INSULT_PRIVATE_EVAL_REC_153_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_154(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_154_OVERLOAD(INSULT_PRIVATE_EVAL_REC_154_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_154_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_154_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_154_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_154_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_154_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_154_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_154_##choice
#define INSULT_PRIVATE_EVAL_REC_154_CONTINUE                   INSULT_PRIVATE_EVAL_REC_155
#define INSULT_PRIVATE_EVAL_REC_154_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_155(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_155_OVERLOAD(INSULT_PRIVATE_EVAL_REC_155_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_155_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_155_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_155_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_155_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_155_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_155_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_155_##choice
#define INSULT_PRIVATE_EVAL_REC_155_CONTINUE                   INSULT_PRIVATE_EVAL_REC_156
#define INSULT_PRIVATE_EVAL_REC_155_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_156(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_156_OVERLOAD(INSULT_PRIVATE_EVAL_REC_156_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_156_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_156_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_156_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_156_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_156_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_156_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_156_##choice
#define INSULT_PRIVATE_EVAL_REC_156_CONTINUE                   INSULT_PRIVATE_EVAL_REC_157
#define INSULT_PRIVATE_EVAL_REC_156_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_157(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_157_OVERLOAD(INSULT_PRIVATE_EVAL_REC_157_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_157_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_157_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_157_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_157_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_157_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_157_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_157_##choice
#define INSULT_PRIVATE_EVAL_REC_157_CONTINUE                   INSULT_PRIVATE_EVAL_REC_158
#define INSULT_PRIVATE_EVAL_REC_157_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_158(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_158_OVERLOAD(INSULT_PRIVATE_EVAL_REC_158_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_158_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_158_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_158_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_158_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_158_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_158_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_158_##choice
#define INSULT_PRIVATE_EVAL_REC_158_CONTINUE                   INSULT_PRIVATE_EVAL_REC_159
#define INSULT_PRIVATE_EVAL_REC_158_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_159(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_159_OVERLOAD(INSULT_PRIVATE_EVAL_REC_159_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_159_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_159_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_159_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_159_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_159_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_159_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_159_##choice
#define INSULT_PRIVATE_EVAL_REC_159_CONTINUE                   INSULT_PRIVATE_EVAL_REC_160
#define INSULT_PRIVATE_EVAL_REC_159_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_160(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_160_OVERLOAD(INSULT_PRIVATE_EVAL_REC_160_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_160_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_160_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_160_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_160_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_160_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_160_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_160_##choice
#define INSULT_PRIVATE_EVAL_REC_160_CONTINUE                   INSULT_PRIVATE_EVAL_REC_161
#define INSULT_PRIVATE_EVAL_REC_160_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_161(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_161_OVERLOAD(INSULT_PRIVATE_EVAL_REC_161_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_161_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_161_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_161_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_161_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_161_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_161_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_161_##choice
#define INSULT_PRIVATE_EVAL_REC_161_CONTINUE                   INSULT_PRIVATE_EVAL_REC_162
#define INSULT_PRIVATE_EVAL_REC_161_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_162(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_162_OVERLOAD(INSULT_PRIVATE_EVAL_REC_162_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_162_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_162_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_162_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_162_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_162_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_162_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_162_##choice
#define INSULT_PRIVATE_EVAL_REC_162_CONTINUE                   INSULT_PRIVATE_EVAL_REC_163
#define INSULT_PRIVATE_EVAL_REC_162_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_163(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_163_OVERLOAD(INSULT_PRIVATE_EVAL_REC_163_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_163_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_163_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_163_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_163_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_163_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_163_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_163_##choice
#define INSULT_PRIVATE_EVAL_REC_163_CONTINUE                   INSULT_PRIVATE_EVAL_REC_164
#define INSULT_PRIVATE_EVAL_REC_163_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_164(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_164_OVERLOAD(INSULT_PRIVATE_EVAL_REC_164_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_164_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_164_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_164_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_164_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_164_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_164_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_164_##choice
#define INSULT_PRIVATE_EVAL_REC_164_CONTINUE                   INSULT_PRIVATE_EVAL_REC_165
#define INSULT_PRIVATE_EVAL_REC_164_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_165(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_165_OVERLOAD(INSULT_PRIVATE_EVAL_REC_165_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_165_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_165_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_165_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_165_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_165_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_165_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_165_##choice
#define INSULT_PRIVATE_EVAL_REC_165_CONTINUE                   INSULT_PRIVATE_EVAL_REC_166
#define INSULT_PRIVATE_EVAL_REC_165_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_166(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_166_OVERLOAD(INSULT_PRIVATE_EVAL_REC_166_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_166_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_166_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_166_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_166_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_166_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_166_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_166_##choice
#define INSULT_PRIVATE_EVAL_REC_166_CONTINUE                   INSULT_PRIVATE_EVAL_REC_167
#define INSULT_PRIVATE_EVAL_REC_166_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_167(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_167_OVERLOAD(INSULT_PRIVATE_EVAL_REC_167_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_167_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_167_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_167_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_167_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_167_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_167_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_167_##choice
#define INSULT_PRIVATE_EVAL_REC_167_CONTINUE                   INSULT_PRIVATE_EVAL_REC_168
#define INSULT_PRIVATE_EVAL_REC_167_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_168(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_168_OVERLOAD(INSULT_PRIVATE_EVAL_REC_168_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_168_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_168_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_168_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_168_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_168_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_168_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_168_##choice
#define INSULT_PRIVATE_EVAL_REC_168_CONTINUE                   INSULT_PRIVATE_EVAL_REC_169
#define INSULT_PRIVATE_EVAL_REC_168_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_169(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_169_OVERLOAD(INSULT_PRIVATE_EVAL_REC_169_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_169_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_169_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_169_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_169_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_169_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_169_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_169_##choice
#define INSULT_PRIVATE_EVAL_REC_169_CONTINUE                   INSULT_PRIVATE_EVAL_REC_170
#define INSULT_PRIVATE_EVAL_REC_169_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_170(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_170_OVERLOAD(INSULT_PRIVATE_EVAL_REC_170_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_170_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_170_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_170_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_170_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_170_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_170_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_170_##choice
#define INSULT_PRIVATE_EVAL_REC_170_CONTINUE                   INSULT_PRIVATE_EVAL_REC_171
#define INSULT_PRIVATE_EVAL_REC_170_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_171(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_171_OVERLOAD(INSULT_PRIVATE_EVAL_REC_171_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_171_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_171_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_171_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_171_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_171_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_171_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_171_##choice
#define INSULT_PRIVATE_EVAL_REC_171_CONTINUE                   INSULT_PRIVATE_EVAL_REC_172
#define INSULT_PRIVATE_EVAL_REC_171_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_172(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_172_OVERLOAD(INSULT_PRIVATE_EVAL_REC_172_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_172_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_172_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_172_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_172_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_172_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_172_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_172_##choice
#define INSULT_PRIVATE_EVAL_REC_172_CONTINUE                   INSULT_PRIVATE_EVAL_REC_173
#define INSULT_PRIVATE_EVAL_REC_172_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_173(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_173_OVERLOAD(INSULT_PRIVATE_EVAL_REC_173_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_173_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_173_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_173_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_173_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_173_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_173_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_173_##choice
#define INSULT_PRIVATE_EVAL_REC_173_CONTINUE                   INSULT_PRIVATE_EVAL_REC_174
#define INSULT_PRIVATE_EVAL_REC_173_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_174(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_174_OVERLOAD(INSULT_PRIVATE_EVAL_REC_174_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_174_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_174_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_174_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_174_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_174_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_174_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_174_##choice
#define INSULT_PRIVATE_EVAL_REC_174_CONTINUE                   INSULT_PRIVATE_EVAL_REC_175
#define INSULT_PRIVATE_EVAL_REC_174_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_175(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_175_OVERLOAD(INSULT_PRIVATE_EVAL_REC_175_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_175_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_175_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_175_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_175_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_175_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_175_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_175_##choice
#define INSULT_PRIVATE_EVAL_REC_175_CONTINUE                   INSULT_PRIVATE_EVAL_REC_176
#define INSULT_PRIVATE_EVAL_REC_175_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_176(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_176_OVERLOAD(INSULT_PRIVATE_EVAL_REC_176_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_176_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_176_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_176_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_176_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_176_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_176_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_176_##choice
#define INSULT_PRIVATE_EVAL_REC_176_CONTINUE                   INSULT_PRIVATE_EVAL_REC_177
#define INSULT_PRIVATE_EVAL_REC_176_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_177(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_177_OVERLOAD(INSULT_PRIVATE_EVAL_REC_177_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_177_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_177_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_177_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_177_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_177_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_177_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_177_##choice
#define INSULT_PRIVATE_EVAL_REC_177_CONTINUE                   INSULT_PRIVATE_EVAL_REC_178
#define INSULT_PRIVATE_EVAL_REC_177_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_178(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_178_OVERLOAD(INSULT_PRIVATE_EVAL_REC_178_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_178_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_178_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_178_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_178_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_178_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_178_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_178_##choice
#define INSULT_PRIVATE_EVAL_REC_178_CONTINUE                   INSULT_PRIVATE_EVAL_REC_179
#define INSULT_PRIVATE_EVAL_REC_178_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_179(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_179_OVERLOAD(INSULT_PRIVATE_EVAL_REC_179_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_179_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_179_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_179_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_179_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_179_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_179_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_179_##choice
#define INSULT_PRIVATE_EVAL_REC_179_CONTINUE                   INSULT_PRIVATE_EVAL_REC_180
#define INSULT_PRIVATE_EVAL_REC_179_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_180(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_180_OVERLOAD(INSULT_PRIVATE_EVAL_REC_180_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_180_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_180_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_180_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_180_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_180_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_180_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_180_##choice
#define INSULT_PRIVATE_EVAL_REC_180_CONTINUE                   INSULT_PRIVATE_EVAL_REC_181
#define INSULT_PRIVATE_EVAL_REC_180_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_181(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_181_OVERLOAD(INSULT_PRIVATE_EVAL_REC_181_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_181_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_181_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_181_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_181_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_181_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_181_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_181_##choice
#define INSULT_PRIVATE_EVAL_REC_181_CONTINUE                   INSULT_PRIVATE_EVAL_REC_182
#define INSULT_PRIVATE_EVAL_REC_181_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_182(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_182_OVERLOAD(INSULT_PRIVATE_EVAL_REC_182_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_182_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_182_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_182_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_182_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_182_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_182_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_182_##choice
#define INSULT_PRIVATE_EVAL_REC_182_CONTINUE                   INSULT_PRIVATE_EVAL_REC_183
#define INSULT_PRIVATE_EVAL_REC_182_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_183(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_183_OVERLOAD(INSULT_PRIVATE_EVAL_REC_183_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_183_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_183_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_183_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_183_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_183_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_183_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_183_##choice
#define INSULT_PRIVATE_EVAL_REC_183_CONTINUE                   INSULT_PRIVATE_EVAL_REC_184
#define INSULT_PRIVATE_EVAL_REC_183_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_184(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_184_OVERLOAD(INSULT_PRIVATE_EVAL_REC_184_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_184_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_184_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_184_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_184_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_184_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_184_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_184_##choice
#define INSULT_PRIVATE_EVAL_REC_184_CONTINUE                   INSULT_PRIVATE_EVAL_REC_185
#define INSULT_PRIVATE_EVAL_REC_184_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_185(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_185_OVERLOAD(INSULT_PRIVATE_EVAL_REC_185_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_185_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_185_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_185_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_185_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_185_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_185_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_185_##choice
#define INSULT_PRIVATE_EVAL_REC_185_CONTINUE                   INSULT_PRIVATE_EVAL_REC_186
#define INSULT_PRIVATE_EVAL_REC_185_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_186(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_186_OVERLOAD(INSULT_PRIVATE_EVAL_REC_186_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_186_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_186_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_186_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_186_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_186_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_186_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_186_##choice
#define INSULT_PRIVATE_EVAL_REC_186_CONTINUE                   INSULT_PRIVATE_EVAL_REC_187
#define INSULT_PRIVATE_EVAL_REC_186_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_187(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_187_OVERLOAD(INSULT_PRIVATE_EVAL_REC_187_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_187_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_187_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_187_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_187_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_187_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_187_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_187_##choice
#define INSULT_PRIVATE_EVAL_REC_187_CONTINUE                   INSULT_PRIVATE_EVAL_REC_188
#define INSULT_PRIVATE_EVAL_REC_187_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_188(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_188_OVERLOAD(INSULT_PRIVATE_EVAL_REC_188_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_188_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_188_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_188_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_188_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_188_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_188_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_188_##choice
#define INSULT_PRIVATE_EVAL_REC_188_CONTINUE                   INSULT_PRIVATE_EVAL_REC_189
#define INSULT_PRIVATE_EVAL_REC_188_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_189(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_189_OVERLOAD(INSULT_PRIVATE_EVAL_REC_189_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_189_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_189_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_189_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_189_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_189_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_189_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_189_##choice
#define INSULT_PRIVATE_EVAL_REC_189_CONTINUE                   INSULT_PRIVATE_EVAL_REC_190
#define INSULT_PRIVATE_EVAL_REC_189_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_190(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_190_OVERLOAD(INSULT_PRIVATE_EVAL_REC_190_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_190_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_190_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_190_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_190_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_190_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_190_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_190_##choice
#define INSULT_PRIVATE_EVAL_REC_190_CONTINUE                   INSULT_PRIVATE_EVAL_REC_191
#define INSULT_PRIVATE_EVAL_REC_190_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_191(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_191_OVERLOAD(INSULT_PRIVATE_EVAL_REC_191_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_191_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_191_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_191_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_191_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_191_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_191_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_191_##choice
#define INSULT_PRIVATE_EVAL_REC_191_CONTINUE                   INSULT_PRIVATE_EVAL_REC_192
#define INSULT_PRIVATE_EVAL_REC_191_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_192(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_192_OVERLOAD(INSULT_PRIVATE_EVAL_REC_192_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_192_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_192_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_192_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_192_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_192_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_192_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_192_##choice
#define INSULT_PRIVATE_EVAL_REC_192_CONTINUE                   INSULT_PRIVATE_EVAL_REC_193
#define INSULT_PRIVATE_EVAL_REC_192_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_193(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_193_OVERLOAD(INSULT_PRIVATE_EVAL_REC_193_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_193_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_193_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_193_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_193_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_193_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_193_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_193_##choice
#define INSULT_PRIVATE_EVAL_REC_193_CONTINUE                   INSULT_PRIVATE_EVAL_REC_194
#define INSULT_PRIVATE_EVAL_REC_193_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_194(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_194_OVERLOAD(INSULT_PRIVATE_EVAL_REC_194_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_194_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_194_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_194_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_194_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_194_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_194_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_194_##choice
#define INSULT_PRIVATE_EVAL_REC_194_CONTINUE                   INSULT_PRIVATE_EVAL_REC_195
#define INSULT_PRIVATE_EVAL_REC_194_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_195(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_195_OVERLOAD(INSULT_PRIVATE_EVAL_REC_195_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_195_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_195_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_195_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_195_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_195_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_195_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_195_##choice
#define INSULT_PRIVATE_EVAL_REC_195_CONTINUE                   INSULT_PRIVATE_EVAL_REC_196
#define INSULT_PRIVATE_EVAL_REC_195_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_196(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_196_OVERLOAD(INSULT_PRIVATE_EVAL_REC_196_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_196_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_196_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_196_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_196_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_196_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_196_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_196_##choice
#define INSULT_PRIVATE_EVAL_REC_196_CONTINUE                   INSULT_PRIVATE_EVAL_REC_197
#define INSULT_PRIVATE_EVAL_REC_196_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_197(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_197_OVERLOAD(INSULT_PRIVATE_EVAL_REC_197_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_197_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_197_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_197_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_197_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_197_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_197_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_197_##choice
#define INSULT_PRIVATE_EVAL_REC_197_CONTINUE                   INSULT_PRIVATE_EVAL_REC_198
#define INSULT_PRIVATE_EVAL_REC_197_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_198(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_198_OVERLOAD(INSULT_PRIVATE_EVAL_REC_198_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_198_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_198_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_198_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_198_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_198_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_198_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_198_##choice
#define INSULT_PRIVATE_EVAL_REC_198_CONTINUE                   INSULT_PRIVATE_EVAL_REC_199
#define INSULT_PRIVATE_EVAL_REC_198_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_199(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_199_OVERLOAD(INSULT_PRIVATE_EVAL_REC_199_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_199_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_199_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_199_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_199_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_199_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_199_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_199_##choice
#define INSULT_PRIVATE_EVAL_REC_199_CONTINUE                   INSULT_PRIVATE_EVAL_REC_200
#define INSULT_PRIVATE_EVAL_REC_199_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_200(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_200_OVERLOAD(INSULT_PRIVATE_EVAL_REC_200_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_200_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_200_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_200_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_200_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_200_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_200_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_200_##choice
#define INSULT_PRIVATE_EVAL_REC_200_CONTINUE                   INSULT_PRIVATE_EVAL_REC_201
#define INSULT_PRIVATE_EVAL_REC_200_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_201(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_201_OVERLOAD(INSULT_PRIVATE_EVAL_REC_201_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_201_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_201_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_201_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_201_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_201_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_201_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_201_##choice
#define INSULT_PRIVATE_EVAL_REC_201_CONTINUE                   INSULT_PRIVATE_EVAL_REC_202
#define INSULT_PRIVATE_EVAL_REC_201_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_202(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_202_OVERLOAD(INSULT_PRIVATE_EVAL_REC_202_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_202_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_202_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_202_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_202_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_202_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_202_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_202_##choice
#define INSULT_PRIVATE_EVAL_REC_202_CONTINUE                   INSULT_PRIVATE_EVAL_REC_203
#define INSULT_PRIVATE_EVAL_REC_202_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_203(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_203_OVERLOAD(INSULT_PRIVATE_EVAL_REC_203_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_203_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_203_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_203_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_203_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_203_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_203_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_203_##choice
#define INSULT_PRIVATE_EVAL_REC_203_CONTINUE                   INSULT_PRIVATE_EVAL_REC_204
#define INSULT_PRIVATE_EVAL_REC_203_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_204(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_204_OVERLOAD(INSULT_PRIVATE_EVAL_REC_204_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_204_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_204_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_204_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_204_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_204_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_204_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_204_##choice
#define INSULT_PRIVATE_EVAL_REC_204_CONTINUE                   INSULT_PRIVATE_EVAL_REC_205
#define INSULT_PRIVATE_EVAL_REC_204_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_205(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_205_OVERLOAD(INSULT_PRIVATE_EVAL_REC_205_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_205_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_205_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_205_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_205_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_205_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_205_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_205_##choice
#define INSULT_PRIVATE_EVAL_REC_205_CONTINUE                   INSULT_PRIVATE_EVAL_REC_206
#define INSULT_PRIVATE_EVAL_REC_205_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_206(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_206_OVERLOAD(INSULT_PRIVATE_EVAL_REC_206_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_206_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_206_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_206_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_206_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_206_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_206_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_206_##choice
#define INSULT_PRIVATE_EVAL_REC_206_CONTINUE                   INSULT_PRIVATE_EVAL_REC_207
#define INSULT_PRIVATE_EVAL_REC_206_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_207(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_207_OVERLOAD(INSULT_PRIVATE_EVAL_REC_207_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_207_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_207_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_207_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_207_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_207_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_207_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_207_##choice
#define INSULT_PRIVATE_EVAL_REC_207_CONTINUE                   INSULT_PRIVATE_EVAL_REC_208
#define INSULT_PRIVATE_EVAL_REC_207_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_208(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_208_OVERLOAD(INSULT_PRIVATE_EVAL_REC_208_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_208_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_208_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_208_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_208_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_208_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_208_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_208_##choice
#define INSULT_PRIVATE_EVAL_REC_208_CONTINUE                   INSULT_PRIVATE_EVAL_REC_209
#define INSULT_PRIVATE_EVAL_REC_208_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_209(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_209_OVERLOAD(INSULT_PRIVATE_EVAL_REC_209_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_209_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_209_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_209_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_209_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_209_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_209_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_209_##choice
#define INSULT_PRIVATE_EVAL_REC_209_CONTINUE                   INSULT_PRIVATE_EVAL_REC_210
#define INSULT_PRIVATE_EVAL_REC_209_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_210(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_210_OVERLOAD(INSULT_PRIVATE_EVAL_REC_210_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_210_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_210_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_210_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_210_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_210_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_210_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_210_##choice
#define INSULT_PRIVATE_EVAL_REC_210_CONTINUE                   INSULT_PRIVATE_EVAL_REC_211
#define INSULT_PRIVATE_EVAL_REC_210_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_211(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_211_OVERLOAD(INSULT_PRIVATE_EVAL_REC_211_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_211_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_211_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_211_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_211_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_211_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_211_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_211_##choice
#define INSULT_PRIVATE_EVAL_REC_211_CONTINUE                   INSULT_PRIVATE_EVAL_REC_212
#define INSULT_PRIVATE_EVAL_REC_211_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_212(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_212_OVERLOAD(INSULT_PRIVATE_EVAL_REC_212_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_212_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_212_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_212_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_212_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_212_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_212_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_212_##choice
#define INSULT_PRIVATE_EVAL_REC_212_CONTINUE                   INSULT_PRIVATE_EVAL_REC_213
#define INSULT_PRIVATE_EVAL_REC_212_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_213(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_213_OVERLOAD(INSULT_PRIVATE_EVAL_REC_213_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_213_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_213_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_213_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_213_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_213_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_213_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_213_##choice
#define INSULT_PRIVATE_EVAL_REC_213_CONTINUE                   INSULT_PRIVATE_EVAL_REC_214
#define INSULT_PRIVATE_EVAL_REC_213_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_214(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_214_OVERLOAD(INSULT_PRIVATE_EVAL_REC_214_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_214_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_214_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_214_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_214_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_214_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_214_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_214_##choice
#define INSULT_PRIVATE_EVAL_REC_214_CONTINUE                   INSULT_PRIVATE_EVAL_REC_215
#define INSULT_PRIVATE_EVAL_REC_214_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_215(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_215_OVERLOAD(INSULT_PRIVATE_EVAL_REC_215_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_215_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_215_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_215_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_215_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_215_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_215_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_215_##choice
#define INSULT_PRIVATE_EVAL_REC_215_CONTINUE                   INSULT_PRIVATE_EVAL_REC_216
#define INSULT_PRIVATE_EVAL_REC_215_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_216(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_216_OVERLOAD(INSULT_PRIVATE_EVAL_REC_216_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_216_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_216_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_216_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_216_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_216_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_216_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_216_##choice
#define INSULT_PRIVATE_EVAL_REC_216_CONTINUE                   INSULT_PRIVATE_EVAL_REC_217
#define INSULT_PRIVATE_EVAL_REC_216_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_217(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_217_OVERLOAD(INSULT_PRIVATE_EVAL_REC_217_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_217_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_217_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_217_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_217_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_217_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_217_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_217_##choice
#define INSULT_PRIVATE_EVAL_REC_217_CONTINUE                   INSULT_PRIVATE_EVAL_REC_218
#define INSULT_PRIVATE_EVAL_REC_217_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_218(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_218_OVERLOAD(INSULT_PRIVATE_EVAL_REC_218_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_218_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_218_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_218_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_218_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_218_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_218_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_218_##choice
#define INSULT_PRIVATE_EVAL_REC_218_CONTINUE                   INSULT_PRIVATE_EVAL_REC_219
#define INSULT_PRIVATE_EVAL_REC_218_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_219(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_219_OVERLOAD(INSULT_PRIVATE_EVAL_REC_219_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_219_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_219_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_219_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_219_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_219_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_219_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_219_##choice
#define INSULT_PRIVATE_EVAL_REC_219_CONTINUE                   INSULT_PRIVATE_EVAL_REC_220
#define INSULT_PRIVATE_EVAL_REC_219_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_220(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_220_OVERLOAD(INSULT_PRIVATE_EVAL_REC_220_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_220_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_220_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_220_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_220_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_220_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_220_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_220_##choice
#define INSULT_PRIVATE_EVAL_REC_220_CONTINUE                   INSULT_PRIVATE_EVAL_REC_221
#define INSULT_PRIVATE_EVAL_REC_220_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_221(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_221_OVERLOAD(INSULT_PRIVATE_EVAL_REC_221_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_221_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_221_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_221_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_221_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_221_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_221_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_221_##choice
#define INSULT_PRIVATE_EVAL_REC_221_CONTINUE                   INSULT_PRIVATE_EVAL_REC_222
#define INSULT_PRIVATE_EVAL_REC_221_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_222(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_222_OVERLOAD(INSULT_PRIVATE_EVAL_REC_222_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_222_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_222_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_222_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_222_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_222_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_222_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_222_##choice
#define INSULT_PRIVATE_EVAL_REC_222_CONTINUE                   INSULT_PRIVATE_EVAL_REC_223
#define INSULT_PRIVATE_EVAL_REC_222_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_223(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_223_OVERLOAD(INSULT_PRIVATE_EVAL_REC_223_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_223_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_223_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_223_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_223_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_223_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_223_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_223_##choice
#define INSULT_PRIVATE_EVAL_REC_223_CONTINUE                   INSULT_PRIVATE_EVAL_REC_224
#define INSULT_PRIVATE_EVAL_REC_223_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_224(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_224_OVERLOAD(INSULT_PRIVATE_EVAL_REC_224_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_224_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_224_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_224_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_224_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_224_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_224_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_224_##choice
#define INSULT_PRIVATE_EVAL_REC_224_CONTINUE                   INSULT_PRIVATE_EVAL_REC_225
#define INSULT_PRIVATE_EVAL_REC_224_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_225(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_225_OVERLOAD(INSULT_PRIVATE_EVAL_REC_225_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_225_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_225_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_225_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_225_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_225_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_225_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_225_##choice
#define INSULT_PRIVATE_EVAL_REC_225_CONTINUE                   INSULT_PRIVATE_EVAL_REC_226
#define INSULT_PRIVATE_EVAL_REC_225_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_226(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_226_OVERLOAD(INSULT_PRIVATE_EVAL_REC_226_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_226_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_226_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_226_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_226_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_226_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_226_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_226_##choice
#define INSULT_PRIVATE_EVAL_REC_226_CONTINUE                   INSULT_PRIVATE_EVAL_REC_227
#define INSULT_PRIVATE_EVAL_REC_226_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_227(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_227_OVERLOAD(INSULT_PRIVATE_EVAL_REC_227_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_227_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_227_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_227_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_227_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_227_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_227_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_227_##choice
#define INSULT_PRIVATE_EVAL_REC_227_CONTINUE                   INSULT_PRIVATE_EVAL_REC_228
#define INSULT_PRIVATE_EVAL_REC_227_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_228(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_228_OVERLOAD(INSULT_PRIVATE_EVAL_REC_228_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_228_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_228_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_228_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_228_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_228_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_228_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_228_##choice
#define INSULT_PRIVATE_EVAL_REC_228_CONTINUE                   INSULT_PRIVATE_EVAL_REC_229
#define INSULT_PRIVATE_EVAL_REC_228_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_229(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_229_OVERLOAD(INSULT_PRIVATE_EVAL_REC_229_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_229_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_229_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_229_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_229_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_229_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_229_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_229_##choice
#define INSULT_PRIVATE_EVAL_REC_229_CONTINUE                   INSULT_PRIVATE_EVAL_REC_230
#define INSULT_PRIVATE_EVAL_REC_229_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_230(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_230_OVERLOAD(INSULT_PRIVATE_EVAL_REC_230_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_230_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_230_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_230_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_230_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_230_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_230_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_230_##choice
#define INSULT_PRIVATE_EVAL_REC_230_CONTINUE                   INSULT_PRIVATE_EVAL_REC_231
#define INSULT_PRIVATE_EVAL_REC_230_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_231(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_231_OVERLOAD(INSULT_PRIVATE_EVAL_REC_231_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_231_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_231_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_231_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_231_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_231_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_231_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_231_##choice
#define INSULT_PRIVATE_EVAL_REC_231_CONTINUE                   INSULT_PRIVATE_EVAL_REC_232
#define INSULT_PRIVATE_EVAL_REC_231_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_232(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_232_OVERLOAD(INSULT_PRIVATE_EVAL_REC_232_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_232_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_232_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_232_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_232_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_232_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_232_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_232_##choice
#define INSULT_PRIVATE_EVAL_REC_232_CONTINUE                   INSULT_PRIVATE_EVAL_REC_233
#define INSULT_PRIVATE_EVAL_REC_232_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_233(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_233_OVERLOAD(INSULT_PRIVATE_EVAL_REC_233_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_233_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_233_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_233_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_233_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_233_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_233_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_233_##choice
#define INSULT_PRIVATE_EVAL_REC_233_CONTINUE                   INSULT_PRIVATE_EVAL_REC_234
#define INSULT_PRIVATE_EVAL_REC_233_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_234(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_234_OVERLOAD(INSULT_PRIVATE_EVAL_REC_234_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_234_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_234_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_234_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_234_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_234_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_234_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_234_##choice
#define INSULT_PRIVATE_EVAL_REC_234_CONTINUE                   INSULT_PRIVATE_EVAL_REC_235
#define INSULT_PRIVATE_EVAL_REC_234_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_235(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_235_OVERLOAD(INSULT_PRIVATE_EVAL_REC_235_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_235_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_235_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_235_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_235_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_235_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_235_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_235_##choice
#define INSULT_PRIVATE_EVAL_REC_235_CONTINUE                   INSULT_PRIVATE_EVAL_REC_236
#define INSULT_PRIVATE_EVAL_REC_235_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_236(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_236_OVERLOAD(INSULT_PRIVATE_EVAL_REC_236_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_236_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_236_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_236_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_236_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_236_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_236_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_236_##choice
#define INSULT_PRIVATE_EVAL_REC_236_CONTINUE                   INSULT_PRIVATE_EVAL_REC_237
#define INSULT_PRIVATE_EVAL_REC_236_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_237(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_237_OVERLOAD(INSULT_PRIVATE_EVAL_REC_237_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_237_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_237_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_237_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_237_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_237_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_237_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_237_##choice
#define INSULT_PRIVATE_EVAL_REC_237_CONTINUE                   INSULT_PRIVATE_EVAL_REC_238
#define INSULT_PRIVATE_EVAL_REC_237_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_238(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_238_OVERLOAD(INSULT_PRIVATE_EVAL_REC_238_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_238_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_238_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_238_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_238_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_238_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_238_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_238_##choice
#define INSULT_PRIVATE_EVAL_REC_238_CONTINUE                   INSULT_PRIVATE_EVAL_REC_239
#define INSULT_PRIVATE_EVAL_REC_238_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_239(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_239_OVERLOAD(INSULT_PRIVATE_EVAL_REC_239_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_239_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_239_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_239_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_239_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_239_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_239_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_239_##choice
#define INSULT_PRIVATE_EVAL_REC_239_CONTINUE                   INSULT_PRIVATE_EVAL_REC_240
#define INSULT_PRIVATE_EVAL_REC_239_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_240(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_240_OVERLOAD(INSULT_PRIVATE_EVAL_REC_240_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_240_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_240_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_240_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_240_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_240_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_240_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_240_##choice
#define INSULT_PRIVATE_EVAL_REC_240_CONTINUE                   INSULT_PRIVATE_EVAL_REC_241
#define INSULT_PRIVATE_EVAL_REC_240_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_241(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_241_OVERLOAD(INSULT_PRIVATE_EVAL_REC_241_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_241_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_241_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_241_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_241_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_241_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_241_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_241_##choice
#define INSULT_PRIVATE_EVAL_REC_241_CONTINUE                   INSULT_PRIVATE_EVAL_REC_242
#define INSULT_PRIVATE_EVAL_REC_241_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_242(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_242_OVERLOAD(INSULT_PRIVATE_EVAL_REC_242_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_242_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_242_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_242_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_242_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_242_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_242_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_242_##choice
#define INSULT_PRIVATE_EVAL_REC_242_CONTINUE                   INSULT_PRIVATE_EVAL_REC_243
#define INSULT_PRIVATE_EVAL_REC_242_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_243(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_243_OVERLOAD(INSULT_PRIVATE_EVAL_REC_243_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_243_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_243_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_243_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_243_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_243_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_243_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_243_##choice
#define INSULT_PRIVATE_EVAL_REC_243_CONTINUE                   INSULT_PRIVATE_EVAL_REC_244
#define INSULT_PRIVATE_EVAL_REC_243_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_244(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_244_OVERLOAD(INSULT_PRIVATE_EVAL_REC_244_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_244_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_244_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_244_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_244_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_244_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_244_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_244_##choice
#define INSULT_PRIVATE_EVAL_REC_244_CONTINUE                   INSULT_PRIVATE_EVAL_REC_245
#define INSULT_PRIVATE_EVAL_REC_244_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_245(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_245_OVERLOAD(INSULT_PRIVATE_EVAL_REC_245_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_245_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_245_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_245_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_245_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_245_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_245_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_245_##choice
#define INSULT_PRIVATE_EVAL_REC_245_CONTINUE                   INSULT_PRIVATE_EVAL_REC_246
#define INSULT_PRIVATE_EVAL_REC_245_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_246(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_246_OVERLOAD(INSULT_PRIVATE_EVAL_REC_246_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_246_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_246_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_246_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_246_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_246_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_246_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_246_##choice
#define INSULT_PRIVATE_EVAL_REC_246_CONTINUE                   INSULT_PRIVATE_EVAL_REC_247
#define INSULT_PRIVATE_EVAL_REC_246_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_247(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_247_OVERLOAD(INSULT_PRIVATE_EVAL_REC_247_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_247_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_247_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_247_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_247_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_247_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_247_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_247_##choice
#define INSULT_PRIVATE_EVAL_REC_247_CONTINUE                   INSULT_PRIVATE_EVAL_REC_248
#define INSULT_PRIVATE_EVAL_REC_247_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_248(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_248_OVERLOAD(INSULT_PRIVATE_EVAL_REC_248_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_248_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_248_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_248_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_248_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_248_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_248_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_248_##choice
#define INSULT_PRIVATE_EVAL_REC_248_CONTINUE                   INSULT_PRIVATE_EVAL_REC_249
#define INSULT_PRIVATE_EVAL_REC_248_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_249(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_249_OVERLOAD(INSULT_PRIVATE_EVAL_REC_249_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_249_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_249_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_249_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_249_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_249_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_249_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_249_##choice
#define INSULT_PRIVATE_EVAL_REC_249_CONTINUE                   INSULT_PRIVATE_EVAL_REC_250
#define INSULT_PRIVATE_EVAL_REC_249_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_250(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_250_OVERLOAD(INSULT_PRIVATE_EVAL_REC_250_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_250_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_250_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_250_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_250_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_250_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_250_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_250_##choice
#define INSULT_PRIVATE_EVAL_REC_250_CONTINUE                   INSULT_PRIVATE_EVAL_REC_251
#define INSULT_PRIVATE_EVAL_REC_250_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_251(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_251_OVERLOAD(INSULT_PRIVATE_EVAL_REC_251_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_251_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_251_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_251_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_251_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_251_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_251_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_251_##choice
#define INSULT_PRIVATE_EVAL_REC_251_CONTINUE                   INSULT_PRIVATE_EVAL_REC_252
#define INSULT_PRIVATE_EVAL_REC_251_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_252(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_252_OVERLOAD(INSULT_PRIVATE_EVAL_REC_252_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_252_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_252_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_252_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_252_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_252_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_252_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_252_##choice
#define INSULT_PRIVATE_EVAL_REC_252_CONTINUE                   INSULT_PRIVATE_EVAL_REC_253
#define INSULT_PRIVATE_EVAL_REC_252_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_253(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_253_OVERLOAD(INSULT_PRIVATE_EVAL_REC_253_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_253_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_253_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_253_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_253_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_253_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_253_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_253_##choice
#define INSULT_PRIVATE_EVAL_REC_253_CONTINUE                   INSULT_PRIVATE_EVAL_REC_254
#define INSULT_PRIVATE_EVAL_REC_253_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_254(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_254_OVERLOAD(INSULT_PRIVATE_EVAL_REC_254_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_254_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_254_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_254_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_254_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_254_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_254_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_254_##choice
#define INSULT_PRIVATE_EVAL_REC_254_CONTINUE                   INSULT_PRIVATE_EVAL_REC_255
#define INSULT_PRIVATE_EVAL_REC_254_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_255(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_255_OVERLOAD(INSULT_PRIVATE_EVAL_REC_255_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_255_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_255_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_255_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_255_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_255_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_255_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_255_##choice
#define INSULT_PRIVATE_EVAL_REC_255_CONTINUE                   INSULT_PRIVATE_EVAL_REC_256
#define INSULT_PRIVATE_EVAL_REC_255_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_256(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_256_OVERLOAD(INSULT_PRIVATE_EVAL_REC_256_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_256_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_256_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_256_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_256_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_256_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_256_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_256_##choice
#define INSULT_PRIVATE_EVAL_REC_256_CONTINUE                   INSULT_PRIVATE_EVAL_REC_257
#define INSULT_PRIVATE_EVAL_REC_256_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_257(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_257_OVERLOAD(INSULT_PRIVATE_EVAL_REC_257_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_257_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_257_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_257_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_257_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_257_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_257_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_257_##choice
#define INSULT_PRIVATE_EVAL_REC_257_CONTINUE                   INSULT_PRIVATE_EVAL_REC_258
#define INSULT_PRIVATE_EVAL_REC_257_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_258(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_258_OVERLOAD(INSULT_PRIVATE_EVAL_REC_258_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_258_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_258_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_258_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_258_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_258_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_258_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_258_##choice
#define INSULT_PRIVATE_EVAL_REC_258_CONTINUE                   INSULT_PRIVATE_EVAL_REC_259
#define INSULT_PRIVATE_EVAL_REC_258_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_259(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_259_OVERLOAD(INSULT_PRIVATE_EVAL_REC_259_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_259_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_259_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_259_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_259_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_259_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_259_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_259_##choice
#define INSULT_PRIVATE_EVAL_REC_259_CONTINUE                   INSULT_PRIVATE_EVAL_REC_260
#define INSULT_PRIVATE_EVAL_REC_259_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_260(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_260_OVERLOAD(INSULT_PRIVATE_EVAL_REC_260_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_260_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_260_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_260_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_260_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_260_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_260_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_260_##choice
#define INSULT_PRIVATE_EVAL_REC_260_CONTINUE                   INSULT_PRIVATE_EVAL_REC_261
#define INSULT_PRIVATE_EVAL_REC_260_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_261(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_261_OVERLOAD(INSULT_PRIVATE_EVAL_REC_261_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_261_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_261_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_261_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_261_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_261_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_261_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_261_##choice
#define INSULT_PRIVATE_EVAL_REC_261_CONTINUE                   INSULT_PRIVATE_EVAL_REC_262
#define INSULT_PRIVATE_EVAL_REC_261_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_262(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_262_OVERLOAD(INSULT_PRIVATE_EVAL_REC_262_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_262_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_262_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_262_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_262_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_262_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_262_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_262_##choice
#define INSULT_PRIVATE_EVAL_REC_262_CONTINUE                   INSULT_PRIVATE_EVAL_REC_263
#define INSULT_PRIVATE_EVAL_REC_262_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_263(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_263_OVERLOAD(INSULT_PRIVATE_EVAL_REC_263_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_263_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_263_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_263_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_263_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_263_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_263_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_263_##choice
#define INSULT_PRIVATE_EVAL_REC_263_CONTINUE                   INSULT_PRIVATE_EVAL_REC_264
#define INSULT_PRIVATE_EVAL_REC_263_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_264(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_264_OVERLOAD(INSULT_PRIVATE_EVAL_REC_264_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_264_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_264_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_264_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_264_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_264_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_264_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_264_##choice
#define INSULT_PRIVATE_EVAL_REC_264_CONTINUE                   INSULT_PRIVATE_EVAL_REC_265
#define INSULT_PRIVATE_EVAL_REC_264_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_265(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_265_OVERLOAD(INSULT_PRIVATE_EVAL_REC_265_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_265_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_265_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_265_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_265_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_265_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_265_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_265_##choice
#define INSULT_PRIVATE_EVAL_REC_265_CONTINUE                   INSULT_PRIVATE_EVAL_REC_266
#define INSULT_PRIVATE_EVAL_REC_265_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_266(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_266_OVERLOAD(INSULT_PRIVATE_EVAL_REC_266_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_266_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_266_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_266_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_266_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_266_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_266_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_266_##choice
#define INSULT_PRIVATE_EVAL_REC_266_CONTINUE                   INSULT_PRIVATE_EVAL_REC_267
#define INSULT_PRIVATE_EVAL_REC_266_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_267(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_267_OVERLOAD(INSULT_PRIVATE_EVAL_REC_267_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_267_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_267_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_267_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_267_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_267_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_267_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_267_##choice
#define INSULT_PRIVATE_EVAL_REC_267_CONTINUE                   INSULT_PRIVATE_EVAL_REC_268
#define INSULT_PRIVATE_EVAL_REC_267_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_268(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_268_OVERLOAD(INSULT_PRIVATE_EVAL_REC_268_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_268_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_268_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_268_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_268_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_268_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_268_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_268_##choice
#define INSULT_PRIVATE_EVAL_REC_268_CONTINUE                   INSULT_PRIVATE_EVAL_REC_269
#define INSULT_PRIVATE_EVAL_REC_268_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_269(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_269_OVERLOAD(INSULT_PRIVATE_EVAL_REC_269_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_269_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_269_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_269_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_269_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_269_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_269_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_269_##choice
#define INSULT_PRIVATE_EVAL_REC_269_CONTINUE                   INSULT_PRIVATE_EVAL_REC_270
#define INSULT_PRIVATE_EVAL_REC_269_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_270(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_270_OVERLOAD(INSULT_PRIVATE_EVAL_REC_270_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_270_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_270_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_270_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_270_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_270_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_270_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_270_##choice
#define INSULT_PRIVATE_EVAL_REC_270_CONTINUE                   INSULT_PRIVATE_EVAL_REC_271
#define INSULT_PRIVATE_EVAL_REC_270_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_271(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_271_OVERLOAD(INSULT_PRIVATE_EVAL_REC_271_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_271_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_271_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_271_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_271_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_271_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_271_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_271_##choice
#define INSULT_PRIVATE_EVAL_REC_271_CONTINUE                   INSULT_PRIVATE_EVAL_REC_272
#define INSULT_PRIVATE_EVAL_REC_271_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_272(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_272_OVERLOAD(INSULT_PRIVATE_EVAL_REC_272_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_272_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_272_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_272_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_272_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_272_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_272_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_272_##choice
#define INSULT_PRIVATE_EVAL_REC_272_CONTINUE                   INSULT_PRIVATE_EVAL_REC_273
#define INSULT_PRIVATE_EVAL_REC_272_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_273(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_273_OVERLOAD(INSULT_PRIVATE_EVAL_REC_273_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_273_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_273_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_273_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_273_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_273_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_273_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_273_##choice
#define INSULT_PRIVATE_EVAL_REC_273_CONTINUE                   INSULT_PRIVATE_EVAL_REC_274
#define INSULT_PRIVATE_EVAL_REC_273_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_274(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_274_OVERLOAD(INSULT_PRIVATE_EVAL_REC_274_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_274_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_274_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_274_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_274_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_274_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_274_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_274_##choice
#define INSULT_PRIVATE_EVAL_REC_274_CONTINUE                   INSULT_PRIVATE_EVAL_REC_275
#define INSULT_PRIVATE_EVAL_REC_274_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_275(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_275_OVERLOAD(INSULT_PRIVATE_EVAL_REC_275_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_275_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_275_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_275_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_275_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_275_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_275_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_275_##choice
#define INSULT_PRIVATE_EVAL_REC_275_CONTINUE                   INSULT_PRIVATE_EVAL_REC_276
#define INSULT_PRIVATE_EVAL_REC_275_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_276(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_276_OVERLOAD(INSULT_PRIVATE_EVAL_REC_276_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_276_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_276_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_276_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_276_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_276_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_276_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_276_##choice
#define INSULT_PRIVATE_EVAL_REC_276_CONTINUE                   INSULT_PRIVATE_EVAL_REC_277
#define INSULT_PRIVATE_EVAL_REC_276_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_277(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_277_OVERLOAD(INSULT_PRIVATE_EVAL_REC_277_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_277_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_277_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_277_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_277_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_277_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_277_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_277_##choice
#define INSULT_PRIVATE_EVAL_REC_277_CONTINUE                   INSULT_PRIVATE_EVAL_REC_278
#define INSULT_PRIVATE_EVAL_REC_277_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_278(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_278_OVERLOAD(INSULT_PRIVATE_EVAL_REC_278_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_278_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_278_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_278_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_278_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_278_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_278_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_278_##choice
#define INSULT_PRIVATE_EVAL_REC_278_CONTINUE                   INSULT_PRIVATE_EVAL_REC_279
#define INSULT_PRIVATE_EVAL_REC_278_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_279(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_279_OVERLOAD(INSULT_PRIVATE_EVAL_REC_279_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_279_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_279_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_279_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_279_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_279_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_279_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_279_##choice
#define INSULT_PRIVATE_EVAL_REC_279_CONTINUE                   INSULT_PRIVATE_EVAL_REC_280
#define INSULT_PRIVATE_EVAL_REC_279_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_280(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_280_OVERLOAD(INSULT_PRIVATE_EVAL_REC_280_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_280_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_280_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_280_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_280_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_280_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_280_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_280_##choice
#define INSULT_PRIVATE_EVAL_REC_280_CONTINUE                   INSULT_PRIVATE_EVAL_REC_281
#define INSULT_PRIVATE_EVAL_REC_280_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_281(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_281_OVERLOAD(INSULT_PRIVATE_EVAL_REC_281_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_281_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_281_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_281_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_281_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_281_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_281_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_281_##choice
#define INSULT_PRIVATE_EVAL_REC_281_CONTINUE                   INSULT_PRIVATE_EVAL_REC_282
#define INSULT_PRIVATE_EVAL_REC_281_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_282(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_282_OVERLOAD(INSULT_PRIVATE_EVAL_REC_282_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_282_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_282_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_282_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_282_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_282_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_282_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_282_##choice
#define INSULT_PRIVATE_EVAL_REC_282_CONTINUE                   INSULT_PRIVATE_EVAL_REC_283
#define INSULT_PRIVATE_EVAL_REC_282_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_283(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_283_OVERLOAD(INSULT_PRIVATE_EVAL_REC_283_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_283_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_283_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_283_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_283_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_283_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_283_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_283_##choice
#define INSULT_PRIVATE_EVAL_REC_283_CONTINUE                   INSULT_PRIVATE_EVAL_REC_284
#define INSULT_PRIVATE_EVAL_REC_283_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_284(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_284_OVERLOAD(INSULT_PRIVATE_EVAL_REC_284_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_284_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_284_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_284_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_284_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_284_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_284_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_284_##choice
#define INSULT_PRIVATE_EVAL_REC_284_CONTINUE                   INSULT_PRIVATE_EVAL_REC_285
#define INSULT_PRIVATE_EVAL_REC_284_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_285(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_285_OVERLOAD(INSULT_PRIVATE_EVAL_REC_285_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_285_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_285_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_285_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_285_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_285_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_285_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_285_##choice
#define INSULT_PRIVATE_EVAL_REC_285_CONTINUE                   INSULT_PRIVATE_EVAL_REC_286
#define INSULT_PRIVATE_EVAL_REC_285_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_286(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_286_OVERLOAD(INSULT_PRIVATE_EVAL_REC_286_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_286_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_286_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_286_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_286_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_286_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_286_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_286_##choice
#define INSULT_PRIVATE_EVAL_REC_286_CONTINUE                   INSULT_PRIVATE_EVAL_REC_287
#define INSULT_PRIVATE_EVAL_REC_286_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_287(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_287_OVERLOAD(INSULT_PRIVATE_EVAL_REC_287_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_287_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_287_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_287_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_287_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_287_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_287_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_287_##choice
#define INSULT_PRIVATE_EVAL_REC_287_CONTINUE                   INSULT_PRIVATE_EVAL_REC_288
#define INSULT_PRIVATE_EVAL_REC_287_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_288(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_288_OVERLOAD(INSULT_PRIVATE_EVAL_REC_288_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_288_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_288_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_288_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_288_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_288_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_288_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_288_##choice
#define INSULT_PRIVATE_EVAL_REC_288_CONTINUE                   INSULT_PRIVATE_EVAL_REC_289
#define INSULT_PRIVATE_EVAL_REC_288_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_289(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_289_OVERLOAD(INSULT_PRIVATE_EVAL_REC_289_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_289_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_289_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_289_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_289_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_289_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_289_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_289_##choice
#define INSULT_PRIVATE_EVAL_REC_289_CONTINUE                   INSULT_PRIVATE_EVAL_REC_290
#define INSULT_PRIVATE_EVAL_REC_289_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_290(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_290_OVERLOAD(INSULT_PRIVATE_EVAL_REC_290_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_290_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_290_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_290_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_290_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_290_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_290_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_290_##choice
#define INSULT_PRIVATE_EVAL_REC_290_CONTINUE                   INSULT_PRIVATE_EVAL_REC_291
#define INSULT_PRIVATE_EVAL_REC_290_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_291(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_291_OVERLOAD(INSULT_PRIVATE_EVAL_REC_291_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_291_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_291_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_291_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_291_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_291_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_291_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_291_##choice
#define INSULT_PRIVATE_EVAL_REC_291_CONTINUE                   INSULT_PRIVATE_EVAL_REC_292
#define INSULT_PRIVATE_EVAL_REC_291_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_292(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_292_OVERLOAD(INSULT_PRIVATE_EVAL_REC_292_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_292_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_292_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_292_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_292_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_292_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_292_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_292_##choice
#define INSULT_PRIVATE_EVAL_REC_292_CONTINUE                   INSULT_PRIVATE_EVAL_REC_293
#define INSULT_PRIVATE_EVAL_REC_292_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_293(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_293_OVERLOAD(INSULT_PRIVATE_EVAL_REC_293_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_293_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_293_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_293_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_293_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_293_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_293_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_293_##choice
#define INSULT_PRIVATE_EVAL_REC_293_CONTINUE                   INSULT_PRIVATE_EVAL_REC_294
#define INSULT_PRIVATE_EVAL_REC_293_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_294(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_294_OVERLOAD(INSULT_PRIVATE_EVAL_REC_294_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_294_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_294_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_294_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_294_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_294_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_294_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_294_##choice
#define INSULT_PRIVATE_EVAL_REC_294_CONTINUE                   INSULT_PRIVATE_EVAL_REC_295
#define INSULT_PRIVATE_EVAL_REC_294_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_295(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_295_OVERLOAD(INSULT_PRIVATE_EVAL_REC_295_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_295_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_295_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_295_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_295_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_295_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_295_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_295_##choice
#define INSULT_PRIVATE_EVAL_REC_295_CONTINUE                   INSULT_PRIVATE_EVAL_REC_296
#define INSULT_PRIVATE_EVAL_REC_295_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_296(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_296_OVERLOAD(INSULT_PRIVATE_EVAL_REC_296_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_296_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_296_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_296_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_296_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_296_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_296_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_296_##choice
#define INSULT_PRIVATE_EVAL_REC_296_CONTINUE                   INSULT_PRIVATE_EVAL_REC_297
#define INSULT_PRIVATE_EVAL_REC_296_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_297(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_297_OVERLOAD(INSULT_PRIVATE_EVAL_REC_297_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_297_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_297_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_297_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_297_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_297_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_297_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_297_##choice
#define INSULT_PRIVATE_EVAL_REC_297_CONTINUE                   INSULT_PRIVATE_EVAL_REC_298
#define INSULT_PRIVATE_EVAL_REC_297_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_298(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_298_OVERLOAD(INSULT_PRIVATE_EVAL_REC_298_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_298_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_298_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_298_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_298_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_298_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_298_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_298_##choice
#define INSULT_PRIVATE_EVAL_REC_298_CONTINUE                   INSULT_PRIVATE_EVAL_REC_299
#define INSULT_PRIVATE_EVAL_REC_298_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_299(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_299_OVERLOAD(INSULT_PRIVATE_EVAL_REC_299_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_299_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_299_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_299_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_299_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_299_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_299_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_299_##choice
#define INSULT_PRIVATE_EVAL_REC_299_CONTINUE                   INSULT_PRIVATE_EVAL_REC_300
#define INSULT_PRIVATE_EVAL_REC_299_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_300(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_300_OVERLOAD(INSULT_PRIVATE_EVAL_REC_300_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_300_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_300_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_300_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_300_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_300_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_300_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_300_##choice
#define INSULT_PRIVATE_EVAL_REC_300_CONTINUE                   INSULT_PRIVATE_EVAL_REC_301
#define INSULT_PRIVATE_EVAL_REC_300_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_301(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_301_OVERLOAD(INSULT_PRIVATE_EVAL_REC_301_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_301_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_301_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_301_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_301_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_301_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_301_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_301_##choice
#define INSULT_PRIVATE_EVAL_REC_301_CONTINUE                   INSULT_PRIVATE_EVAL_REC_302
#define INSULT_PRIVATE_EVAL_REC_301_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_302(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_302_OVERLOAD(INSULT_PRIVATE_EVAL_REC_302_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_302_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_302_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_302_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_302_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_302_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_302_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_302_##choice
#define INSULT_PRIVATE_EVAL_REC_302_CONTINUE                   INSULT_PRIVATE_EVAL_REC_303
#define INSULT_PRIVATE_EVAL_REC_302_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_303(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_303_OVERLOAD(INSULT_PRIVATE_EVAL_REC_303_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_303_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_303_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_303_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_303_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_303_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_303_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_303_##choice
#define INSULT_PRIVATE_EVAL_REC_303_CONTINUE                   INSULT_PRIVATE_EVAL_REC_304
#define INSULT_PRIVATE_EVAL_REC_303_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_304(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_304_OVERLOAD(INSULT_PRIVATE_EVAL_REC_304_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_304_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_304_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_304_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_304_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_304_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_304_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_304_##choice
#define INSULT_PRIVATE_EVAL_REC_304_CONTINUE                   INSULT_PRIVATE_EVAL_REC_305
#define INSULT_PRIVATE_EVAL_REC_304_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_305(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_305_OVERLOAD(INSULT_PRIVATE_EVAL_REC_305_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_305_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_305_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_305_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_305_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_305_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_305_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_305_##choice
#define INSULT_PRIVATE_EVAL_REC_305_CONTINUE                   INSULT_PRIVATE_EVAL_REC_306
#define INSULT_PRIVATE_EVAL_REC_305_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_306(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_306_OVERLOAD(INSULT_PRIVATE_EVAL_REC_306_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_306_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_306_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_306_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_306_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_306_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_306_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_306_##choice
#define INSULT_PRIVATE_EVAL_REC_306_CONTINUE                   INSULT_PRIVATE_EVAL_REC_307
#define INSULT_PRIVATE_EVAL_REC_306_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_307(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_307_OVERLOAD(INSULT_PRIVATE_EVAL_REC_307_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_307_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_307_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_307_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_307_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_307_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_307_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_307_##choice
#define INSULT_PRIVATE_EVAL_REC_307_CONTINUE                   INSULT_PRIVATE_EVAL_REC_308
#define INSULT_PRIVATE_EVAL_REC_307_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_308(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_308_OVERLOAD(INSULT_PRIVATE_EVAL_REC_308_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_308_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_308_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_308_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_308_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_308_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_308_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_308_##choice
#define INSULT_PRIVATE_EVAL_REC_308_CONTINUE                   INSULT_PRIVATE_EVAL_REC_309
#define INSULT_PRIVATE_EVAL_REC_308_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_309(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_309_OVERLOAD(INSULT_PRIVATE_EVAL_REC_309_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_309_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_309_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_309_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_309_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_309_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_309_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_309_##choice
#define INSULT_PRIVATE_EVAL_REC_309_CONTINUE                   INSULT_PRIVATE_EVAL_REC_310
#define INSULT_PRIVATE_EVAL_REC_309_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_310(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_310_OVERLOAD(INSULT_PRIVATE_EVAL_REC_310_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_310_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_310_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_310_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_310_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_310_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_310_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_310_##choice
#define INSULT_PRIVATE_EVAL_REC_310_CONTINUE                   INSULT_PRIVATE_EVAL_REC_311
#define INSULT_PRIVATE_EVAL_REC_310_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_311(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_311_OVERLOAD(INSULT_PRIVATE_EVAL_REC_311_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_311_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_311_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_311_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_311_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_311_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_311_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_311_##choice
#define INSULT_PRIVATE_EVAL_REC_311_CONTINUE                   INSULT_PRIVATE_EVAL_REC_312
#define INSULT_PRIVATE_EVAL_REC_311_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_312(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_312_OVERLOAD(INSULT_PRIVATE_EVAL_REC_312_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_312_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_312_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_312_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_312_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_312_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_312_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_312_##choice
#define INSULT_PRIVATE_EVAL_REC_312_CONTINUE                   INSULT_PRIVATE_EVAL_REC_313
#define INSULT_PRIVATE_EVAL_REC_312_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_313(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_313_OVERLOAD(INSULT_PRIVATE_EVAL_REC_313_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_313_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_313_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_313_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_313_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_313_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_313_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_313_##choice
#define INSULT_PRIVATE_EVAL_REC_313_CONTINUE                   INSULT_PRIVATE_EVAL_REC_314
#define INSULT_PRIVATE_EVAL_REC_313_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_314(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_314_OVERLOAD(INSULT_PRIVATE_EVAL_REC_314_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_314_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_314_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_314_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_314_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_314_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_314_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_314_##choice
#define INSULT_PRIVATE_EVAL_REC_314_CONTINUE                   INSULT_PRIVATE_EVAL_REC_315
#define INSULT_PRIVATE_EVAL_REC_314_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_315(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_315_OVERLOAD(INSULT_PRIVATE_EVAL_REC_315_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_315_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_315_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_315_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_315_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_315_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_315_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_315_##choice
#define INSULT_PRIVATE_EVAL_REC_315_CONTINUE                   INSULT_PRIVATE_EVAL_REC_316
#define INSULT_PRIVATE_EVAL_REC_315_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_316(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_316_OVERLOAD(INSULT_PRIVATE_EVAL_REC_316_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_316_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_316_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_316_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_316_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_316_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_316_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_316_##choice
#define INSULT_PRIVATE_EVAL_REC_316_CONTINUE                   INSULT_PRIVATE_EVAL_REC_317
#define INSULT_PRIVATE_EVAL_REC_316_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_317(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_317_OVERLOAD(INSULT_PRIVATE_EVAL_REC_317_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_317_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_317_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_317_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_317_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_317_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_317_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_317_##choice
#define INSULT_PRIVATE_EVAL_REC_317_CONTINUE                   INSULT_PRIVATE_EVAL_REC_318
#define INSULT_PRIVATE_EVAL_REC_317_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_318(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_318_OVERLOAD(INSULT_PRIVATE_EVAL_REC_318_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_318_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_318_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_318_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_318_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_318_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_318_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_318_##choice
#define INSULT_PRIVATE_EVAL_REC_318_CONTINUE                   INSULT_PRIVATE_EVAL_REC_319
#define INSULT_PRIVATE_EVAL_REC_318_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_319(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_319_OVERLOAD(INSULT_PRIVATE_EVAL_REC_319_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_319_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_319_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_319_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_319_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_319_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_319_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_319_##choice
#define INSULT_PRIVATE_EVAL_REC_319_CONTINUE                   INSULT_PRIVATE_EVAL_REC_320
#define INSULT_PRIVATE_EVAL_REC_319_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_320(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_320_OVERLOAD(INSULT_PRIVATE_EVAL_REC_320_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_320_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_320_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_320_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_320_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_320_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_320_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_320_##choice
#define INSULT_PRIVATE_EVAL_REC_320_CONTINUE                   INSULT_PRIVATE_EVAL_REC_321
#define INSULT_PRIVATE_EVAL_REC_320_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_321(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_321_OVERLOAD(INSULT_PRIVATE_EVAL_REC_321_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_321_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_321_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_321_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_321_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_321_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_321_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_321_##choice
#define INSULT_PRIVATE_EVAL_REC_321_CONTINUE                   INSULT_PRIVATE_EVAL_REC_322
#define INSULT_PRIVATE_EVAL_REC_321_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_322(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_322_OVERLOAD(INSULT_PRIVATE_EVAL_REC_322_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_322_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_322_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_322_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_322_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_322_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_322_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_322_##choice
#define INSULT_PRIVATE_EVAL_REC_322_CONTINUE                   INSULT_PRIVATE_EVAL_REC_323
#define INSULT_PRIVATE_EVAL_REC_322_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_323(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_323_OVERLOAD(INSULT_PRIVATE_EVAL_REC_323_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_323_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_323_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_323_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_323_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_323_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_323_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_323_##choice
#define INSULT_PRIVATE_EVAL_REC_323_CONTINUE                   INSULT_PRIVATE_EVAL_REC_324
#define INSULT_PRIVATE_EVAL_REC_323_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_324(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_324_OVERLOAD(INSULT_PRIVATE_EVAL_REC_324_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_324_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_324_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_324_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_324_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_324_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_324_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_324_##choice
#define INSULT_PRIVATE_EVAL_REC_324_CONTINUE                   INSULT_PRIVATE_EVAL_REC_325
#define INSULT_PRIVATE_EVAL_REC_324_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_325(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_325_OVERLOAD(INSULT_PRIVATE_EVAL_REC_325_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_325_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_325_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_325_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_325_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_325_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_325_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_325_##choice
#define INSULT_PRIVATE_EVAL_REC_325_CONTINUE                   INSULT_PRIVATE_EVAL_REC_326
#define INSULT_PRIVATE_EVAL_REC_325_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_326(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_326_OVERLOAD(INSULT_PRIVATE_EVAL_REC_326_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_326_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_326_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_326_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_326_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_326_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_326_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_326_##choice
#define INSULT_PRIVATE_EVAL_REC_326_CONTINUE                   INSULT_PRIVATE_EVAL_REC_327
#define INSULT_PRIVATE_EVAL_REC_326_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_327(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_327_OVERLOAD(INSULT_PRIVATE_EVAL_REC_327_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_327_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_327_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_327_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_327_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_327_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_327_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_327_##choice
#define INSULT_PRIVATE_EVAL_REC_327_CONTINUE                   INSULT_PRIVATE_EVAL_REC_328
#define INSULT_PRIVATE_EVAL_REC_327_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_328(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_328_OVERLOAD(INSULT_PRIVATE_EVAL_REC_328_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_328_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_328_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_328_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_328_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_328_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_328_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_328_##choice
#define INSULT_PRIVATE_EVAL_REC_328_CONTINUE                   INSULT_PRIVATE_EVAL_REC_329
#define INSULT_PRIVATE_EVAL_REC_328_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_329(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_329_OVERLOAD(INSULT_PRIVATE_EVAL_REC_329_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_329_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_329_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_329_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_329_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_329_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_329_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_329_##choice
#define INSULT_PRIVATE_EVAL_REC_329_CONTINUE                   INSULT_PRIVATE_EVAL_REC_330
#define INSULT_PRIVATE_EVAL_REC_329_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_330(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_330_OVERLOAD(INSULT_PRIVATE_EVAL_REC_330_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_330_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_330_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_330_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_330_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_330_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_330_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_330_##choice
#define INSULT_PRIVATE_EVAL_REC_330_CONTINUE                   INSULT_PRIVATE_EVAL_REC_331
#define INSULT_PRIVATE_EVAL_REC_330_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_331(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_331_OVERLOAD(INSULT_PRIVATE_EVAL_REC_331_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_331_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_331_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_331_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_331_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_331_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_331_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_331_##choice
#define INSULT_PRIVATE_EVAL_REC_331_CONTINUE                   INSULT_PRIVATE_EVAL_REC_332
#define INSULT_PRIVATE_EVAL_REC_331_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_332(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_332_OVERLOAD(INSULT_PRIVATE_EVAL_REC_332_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_332_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_332_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_332_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_332_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_332_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_332_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_332_##choice
#define INSULT_PRIVATE_EVAL_REC_332_CONTINUE                   INSULT_PRIVATE_EVAL_REC_333
#define INSULT_PRIVATE_EVAL_REC_332_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_333(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_333_OVERLOAD(INSULT_PRIVATE_EVAL_REC_333_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_333_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_333_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_333_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_333_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_333_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_333_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_333_##choice
#define INSULT_PRIVATE_EVAL_REC_333_CONTINUE                   INSULT_PRIVATE_EVAL_REC_334
#define INSULT_PRIVATE_EVAL_REC_333_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_334(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_334_OVERLOAD(INSULT_PRIVATE_EVAL_REC_334_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_334_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_334_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_334_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_334_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_334_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_334_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_334_##choice
#define INSULT_PRIVATE_EVAL_REC_334_CONTINUE                   INSULT_PRIVATE_EVAL_REC_335
#define INSULT_PRIVATE_EVAL_REC_334_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_335(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_335_OVERLOAD(INSULT_PRIVATE_EVAL_REC_335_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_335_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_335_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_335_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_335_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_335_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_335_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_335_##choice
#define INSULT_PRIVATE_EVAL_REC_335_CONTINUE                   INSULT_PRIVATE_EVAL_REC_336
#define INSULT_PRIVATE_EVAL_REC_335_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_336(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_336_OVERLOAD(INSULT_PRIVATE_EVAL_REC_336_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_336_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_336_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_336_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_336_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_336_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_336_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_336_##choice
#define INSULT_PRIVATE_EVAL_REC_336_CONTINUE                   INSULT_PRIVATE_EVAL_REC_337
#define INSULT_PRIVATE_EVAL_REC_336_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_337(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_337_OVERLOAD(INSULT_PRIVATE_EVAL_REC_337_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_337_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_337_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_337_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_337_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_337_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_337_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_337_##choice
#define INSULT_PRIVATE_EVAL_REC_337_CONTINUE                   INSULT_PRIVATE_EVAL_REC_338
#define INSULT_PRIVATE_EVAL_REC_337_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_338(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_338_OVERLOAD(INSULT_PRIVATE_EVAL_REC_338_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_338_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_338_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_338_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_338_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_338_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_338_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_338_##choice
#define INSULT_PRIVATE_EVAL_REC_338_CONTINUE                   INSULT_PRIVATE_EVAL_REC_339
#define INSULT_PRIVATE_EVAL_REC_338_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_339(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_339_OVERLOAD(INSULT_PRIVATE_EVAL_REC_339_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_339_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_339_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_339_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_339_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_339_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_339_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_339_##choice
#define INSULT_PRIVATE_EVAL_REC_339_CONTINUE                   INSULT_PRIVATE_EVAL_REC_340
#define INSULT_PRIVATE_EVAL_REC_339_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_340(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_340_OVERLOAD(INSULT_PRIVATE_EVAL_REC_340_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_340_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_340_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_340_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_340_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_340_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_340_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_340_##choice
#define INSULT_PRIVATE_EVAL_REC_340_CONTINUE                   INSULT_PRIVATE_EVAL_REC_341
#define INSULT_PRIVATE_EVAL_REC_340_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_341(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_341_OVERLOAD(INSULT_PRIVATE_EVAL_REC_341_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_341_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_341_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_341_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_341_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_341_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_341_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_341_##choice
#define INSULT_PRIVATE_EVAL_REC_341_CONTINUE                   INSULT_PRIVATE_EVAL_REC_342
#define INSULT_PRIVATE_EVAL_REC_341_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_342(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_342_OVERLOAD(INSULT_PRIVATE_EVAL_REC_342_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_342_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_342_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_342_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_342_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_342_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_342_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_342_##choice
#define INSULT_PRIVATE_EVAL_REC_342_CONTINUE                   INSULT_PRIVATE_EVAL_REC_343
#define INSULT_PRIVATE_EVAL_REC_342_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_343(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_343_OVERLOAD(INSULT_PRIVATE_EVAL_REC_343_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_343_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_343_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_343_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_343_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_343_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_343_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_343_##choice
#define INSULT_PRIVATE_EVAL_REC_343_CONTINUE                   INSULT_PRIVATE_EVAL_REC_344
#define INSULT_PRIVATE_EVAL_REC_343_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_344(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_344_OVERLOAD(INSULT_PRIVATE_EVAL_REC_344_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_344_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_344_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_344_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_344_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_344_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_344_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_344_##choice
#define INSULT_PRIVATE_EVAL_REC_344_CONTINUE                   INSULT_PRIVATE_EVAL_REC_345
#define INSULT_PRIVATE_EVAL_REC_344_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_345(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_345_OVERLOAD(INSULT_PRIVATE_EVAL_REC_345_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_345_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_345_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_345_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_345_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_345_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_345_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_345_##choice
#define INSULT_PRIVATE_EVAL_REC_345_CONTINUE                   INSULT_PRIVATE_EVAL_REC_346
#define INSULT_PRIVATE_EVAL_REC_345_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_346(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_346_OVERLOAD(INSULT_PRIVATE_EVAL_REC_346_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_346_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_346_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_346_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_346_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_346_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_346_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_346_##choice
#define INSULT_PRIVATE_EVAL_REC_346_CONTINUE                   INSULT_PRIVATE_EVAL_REC_347
#define INSULT_PRIVATE_EVAL_REC_346_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_347(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_347_OVERLOAD(INSULT_PRIVATE_EVAL_REC_347_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_347_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_347_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_347_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_347_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_347_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_347_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_347_##choice
#define INSULT_PRIVATE_EVAL_REC_347_CONTINUE                   INSULT_PRIVATE_EVAL_REC_348
#define INSULT_PRIVATE_EVAL_REC_347_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_348(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_348_OVERLOAD(INSULT_PRIVATE_EVAL_REC_348_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_348_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_348_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_348_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_348_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_348_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_348_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_348_##choice
#define INSULT_PRIVATE_EVAL_REC_348_CONTINUE                   INSULT_PRIVATE_EVAL_REC_349
#define INSULT_PRIVATE_EVAL_REC_348_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_349(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_349_OVERLOAD(INSULT_PRIVATE_EVAL_REC_349_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_349_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_349_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_349_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_349_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_349_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_349_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_349_##choice
#define INSULT_PRIVATE_EVAL_REC_349_CONTINUE                   INSULT_PRIVATE_EVAL_REC_350
#define INSULT_PRIVATE_EVAL_REC_349_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_350(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_350_OVERLOAD(INSULT_PRIVATE_EVAL_REC_350_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_350_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_350_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_350_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_350_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_350_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_350_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_350_##choice
#define INSULT_PRIVATE_EVAL_REC_350_CONTINUE                   INSULT_PRIVATE_EVAL_REC_351
#define INSULT_PRIVATE_EVAL_REC_350_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_351(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_351_OVERLOAD(INSULT_PRIVATE_EVAL_REC_351_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_351_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_351_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_351_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_351_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_351_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_351_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_351_##choice
#define INSULT_PRIVATE_EVAL_REC_351_CONTINUE                   INSULT_PRIVATE_EVAL_REC_352
#define INSULT_PRIVATE_EVAL_REC_351_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_352(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_352_OVERLOAD(INSULT_PRIVATE_EVAL_REC_352_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_352_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_352_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_352_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_352_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_352_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_352_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_352_##choice
#define INSULT_PRIVATE_EVAL_REC_352_CONTINUE                   INSULT_PRIVATE_EVAL_REC_353
#define INSULT_PRIVATE_EVAL_REC_352_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_353(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_353_OVERLOAD(INSULT_PRIVATE_EVAL_REC_353_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_353_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_353_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_353_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_353_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_353_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_353_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_353_##choice
#define INSULT_PRIVATE_EVAL_REC_353_CONTINUE                   INSULT_PRIVATE_EVAL_REC_354
#define INSULT_PRIVATE_EVAL_REC_353_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_354(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_354_OVERLOAD(INSULT_PRIVATE_EVAL_REC_354_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_354_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_354_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_354_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_354_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_354_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_354_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_354_##choice
#define INSULT_PRIVATE_EVAL_REC_354_CONTINUE                   INSULT_PRIVATE_EVAL_REC_355
#define INSULT_PRIVATE_EVAL_REC_354_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_355(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_355_OVERLOAD(INSULT_PRIVATE_EVAL_REC_355_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_355_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_355_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_355_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_355_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_355_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_355_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_355_##choice
#define INSULT_PRIVATE_EVAL_REC_355_CONTINUE                   INSULT_PRIVATE_EVAL_REC_356
#define INSULT_PRIVATE_EVAL_REC_355_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_356(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_356_OVERLOAD(INSULT_PRIVATE_EVAL_REC_356_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_356_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_356_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_356_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_356_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_356_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_356_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_356_##choice
#define INSULT_PRIVATE_EVAL_REC_356_CONTINUE                   INSULT_PRIVATE_EVAL_REC_357
#define INSULT_PRIVATE_EVAL_REC_356_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_357(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_357_OVERLOAD(INSULT_PRIVATE_EVAL_REC_357_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_357_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_357_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_357_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_357_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_357_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_357_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_357_##choice
#define INSULT_PRIVATE_EVAL_REC_357_CONTINUE                   INSULT_PRIVATE_EVAL_REC_358
#define INSULT_PRIVATE_EVAL_REC_357_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_358(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_358_OVERLOAD(INSULT_PRIVATE_EVAL_REC_358_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_358_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_358_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_358_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_358_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_358_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_358_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_358_##choice
#define INSULT_PRIVATE_EVAL_REC_358_CONTINUE                   INSULT_PRIVATE_EVAL_REC_359
#define INSULT_PRIVATE_EVAL_REC_358_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_359(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_359_OVERLOAD(INSULT_PRIVATE_EVAL_REC_359_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_359_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_359_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_359_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_359_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_359_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_359_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_359_##choice
#define INSULT_PRIVATE_EVAL_REC_359_CONTINUE                   INSULT_PRIVATE_EVAL_REC_360
#define INSULT_PRIVATE_EVAL_REC_359_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_360(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_360_OVERLOAD(INSULT_PRIVATE_EVAL_REC_360_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_360_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_360_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_360_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_360_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_360_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_360_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_360_##choice
#define INSULT_PRIVATE_EVAL_REC_360_CONTINUE                   INSULT_PRIVATE_EVAL_REC_361
#define INSULT_PRIVATE_EVAL_REC_360_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_361(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_361_OVERLOAD(INSULT_PRIVATE_EVAL_REC_361_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_361_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_361_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_361_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_361_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_361_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_361_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_361_##choice
#define INSULT_PRIVATE_EVAL_REC_361_CONTINUE                   INSULT_PRIVATE_EVAL_REC_362
#define INSULT_PRIVATE_EVAL_REC_361_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_362(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_362_OVERLOAD(INSULT_PRIVATE_EVAL_REC_362_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_362_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_362_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_362_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_362_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_362_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_362_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_362_##choice
#define INSULT_PRIVATE_EVAL_REC_362_CONTINUE                   INSULT_PRIVATE_EVAL_REC_363
#define INSULT_PRIVATE_EVAL_REC_362_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_363(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_363_OVERLOAD(INSULT_PRIVATE_EVAL_REC_363_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_363_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_363_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_363_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_363_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_363_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_363_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_363_##choice
#define INSULT_PRIVATE_EVAL_REC_363_CONTINUE                   INSULT_PRIVATE_EVAL_REC_364
#define INSULT_PRIVATE_EVAL_REC_363_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_364(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_364_OVERLOAD(INSULT_PRIVATE_EVAL_REC_364_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_364_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_364_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_364_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_364_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_364_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_364_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_364_##choice
#define INSULT_PRIVATE_EVAL_REC_364_CONTINUE                   INSULT_PRIVATE_EVAL_REC_365
#define INSULT_PRIVATE_EVAL_REC_364_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_365(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_365_OVERLOAD(INSULT_PRIVATE_EVAL_REC_365_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_365_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_365_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_365_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_365_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_365_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_365_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_365_##choice
#define INSULT_PRIVATE_EVAL_REC_365_CONTINUE                   INSULT_PRIVATE_EVAL_REC_366
#define INSULT_PRIVATE_EVAL_REC_365_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_366(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_366_OVERLOAD(INSULT_PRIVATE_EVAL_REC_366_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_366_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_366_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_366_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_366_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_366_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_366_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_366_##choice
#define INSULT_PRIVATE_EVAL_REC_366_CONTINUE                   INSULT_PRIVATE_EVAL_REC_367
#define INSULT_PRIVATE_EVAL_REC_366_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_367(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_367_OVERLOAD(INSULT_PRIVATE_EVAL_REC_367_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_367_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_367_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_367_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_367_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_367_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_367_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_367_##choice
#define INSULT_PRIVATE_EVAL_REC_367_CONTINUE                   INSULT_PRIVATE_EVAL_REC_368
#define INSULT_PRIVATE_EVAL_REC_367_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_368(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_368_OVERLOAD(INSULT_PRIVATE_EVAL_REC_368_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_368_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_368_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_368_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_368_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_368_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_368_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_368_##choice
#define INSULT_PRIVATE_EVAL_REC_368_CONTINUE                   INSULT_PRIVATE_EVAL_REC_369
#define INSULT_PRIVATE_EVAL_REC_368_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_369(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_369_OVERLOAD(INSULT_PRIVATE_EVAL_REC_369_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_369_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_369_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_369_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_369_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_369_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_369_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_369_##choice
#define INSULT_PRIVATE_EVAL_REC_369_CONTINUE                   INSULT_PRIVATE_EVAL_REC_370
#define INSULT_PRIVATE_EVAL_REC_369_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_370(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_370_OVERLOAD(INSULT_PRIVATE_EVAL_REC_370_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_370_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_370_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_370_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_370_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_370_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_370_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_370_##choice
#define INSULT_PRIVATE_EVAL_REC_370_CONTINUE                   INSULT_PRIVATE_EVAL_REC_371
#define INSULT_PRIVATE_EVAL_REC_370_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_371(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_371_OVERLOAD(INSULT_PRIVATE_EVAL_REC_371_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_371_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_371_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_371_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_371_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_371_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_371_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_371_##choice
#define INSULT_PRIVATE_EVAL_REC_371_CONTINUE                   INSULT_PRIVATE_EVAL_REC_372
#define INSULT_PRIVATE_EVAL_REC_371_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_372(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_372_OVERLOAD(INSULT_PRIVATE_EVAL_REC_372_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_372_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_372_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_372_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_372_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_372_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_372_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_372_##choice
#define INSULT_PRIVATE_EVAL_REC_372_CONTINUE                   INSULT_PRIVATE_EVAL_REC_373
#define INSULT_PRIVATE_EVAL_REC_372_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_373(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_373_OVERLOAD(INSULT_PRIVATE_EVAL_REC_373_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_373_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_373_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_373_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_373_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_373_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_373_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_373_##choice
#define INSULT_PRIVATE_EVAL_REC_373_CONTINUE                   INSULT_PRIVATE_EVAL_REC_374
#define INSULT_PRIVATE_EVAL_REC_373_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_374(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_374_OVERLOAD(INSULT_PRIVATE_EVAL_REC_374_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_374_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_374_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_374_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_374_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_374_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_374_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_374_##choice
#define INSULT_PRIVATE_EVAL_REC_374_CONTINUE                   INSULT_PRIVATE_EVAL_REC_375
#define INSULT_PRIVATE_EVAL_REC_374_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_375(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_375_OVERLOAD(INSULT_PRIVATE_EVAL_REC_375_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_375_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_375_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_375_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_375_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_375_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_375_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_375_##choice
#define INSULT_PRIVATE_EVAL_REC_375_CONTINUE                   INSULT_PRIVATE_EVAL_REC_376
#define INSULT_PRIVATE_EVAL_REC_375_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_376(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_376_OVERLOAD(INSULT_PRIVATE_EVAL_REC_376_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_376_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_376_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_376_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_376_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_376_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_376_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_376_##choice
#define INSULT_PRIVATE_EVAL_REC_376_CONTINUE                   INSULT_PRIVATE_EVAL_REC_377
#define INSULT_PRIVATE_EVAL_REC_376_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_377(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_377_OVERLOAD(INSULT_PRIVATE_EVAL_REC_377_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_377_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_377_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_377_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_377_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_377_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_377_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_377_##choice
#define INSULT_PRIVATE_EVAL_REC_377_CONTINUE                   INSULT_PRIVATE_EVAL_REC_378
#define INSULT_PRIVATE_EVAL_REC_377_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_378(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_378_OVERLOAD(INSULT_PRIVATE_EVAL_REC_378_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_378_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_378_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_378_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_378_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_378_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_378_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_378_##choice
#define INSULT_PRIVATE_EVAL_REC_378_CONTINUE                   INSULT_PRIVATE_EVAL_REC_379
#define INSULT_PRIVATE_EVAL_REC_378_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_379(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_379_OVERLOAD(INSULT_PRIVATE_EVAL_REC_379_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_379_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_379_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_379_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_379_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_379_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_379_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_379_##choice
#define INSULT_PRIVATE_EVAL_REC_379_CONTINUE                   INSULT_PRIVATE_EVAL_REC_380
#define INSULT_PRIVATE_EVAL_REC_379_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_380(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_380_OVERLOAD(INSULT_PRIVATE_EVAL_REC_380_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_380_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_380_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_380_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_380_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_380_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_380_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_380_##choice
#define INSULT_PRIVATE_EVAL_REC_380_CONTINUE                   INSULT_PRIVATE_EVAL_REC_381
#define INSULT_PRIVATE_EVAL_REC_380_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_381(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_381_OVERLOAD(INSULT_PRIVATE_EVAL_REC_381_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_381_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_381_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_381_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_381_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_381_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_381_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_381_##choice
#define INSULT_PRIVATE_EVAL_REC_381_CONTINUE                   INSULT_PRIVATE_EVAL_REC_382
#define INSULT_PRIVATE_EVAL_REC_381_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_382(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_382_OVERLOAD(INSULT_PRIVATE_EVAL_REC_382_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_382_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_382_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_382_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_382_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_382_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_382_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_382_##choice
#define INSULT_PRIVATE_EVAL_REC_382_CONTINUE                   INSULT_PRIVATE_EVAL_REC_383
#define INSULT_PRIVATE_EVAL_REC_382_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_383(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_383_OVERLOAD(INSULT_PRIVATE_EVAL_REC_383_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_383_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_383_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_383_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_383_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_383_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_383_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_383_##choice
#define INSULT_PRIVATE_EVAL_REC_383_CONTINUE                   INSULT_PRIVATE_EVAL_REC_384
#define INSULT_PRIVATE_EVAL_REC_383_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_384(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_384_OVERLOAD(INSULT_PRIVATE_EVAL_REC_384_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_384_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_384_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_384_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_384_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_384_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_384_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_384_##choice
#define INSULT_PRIVATE_EVAL_REC_384_CONTINUE                   INSULT_PRIVATE_EVAL_REC_385
#define INSULT_PRIVATE_EVAL_REC_384_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_385(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_385_OVERLOAD(INSULT_PRIVATE_EVAL_REC_385_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_385_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_385_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_385_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_385_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_385_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_385_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_385_##choice
#define INSULT_PRIVATE_EVAL_REC_385_CONTINUE                   INSULT_PRIVATE_EVAL_REC_386
#define INSULT_PRIVATE_EVAL_REC_385_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_386(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_386_OVERLOAD(INSULT_PRIVATE_EVAL_REC_386_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_386_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_386_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_386_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_386_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_386_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_386_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_386_##choice
#define INSULT_PRIVATE_EVAL_REC_386_CONTINUE                   INSULT_PRIVATE_EVAL_REC_387
#define INSULT_PRIVATE_EVAL_REC_386_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_387(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_387_OVERLOAD(INSULT_PRIVATE_EVAL_REC_387_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_387_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_387_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_387_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_387_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_387_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_387_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_387_##choice
#define INSULT_PRIVATE_EVAL_REC_387_CONTINUE                   INSULT_PRIVATE_EVAL_REC_388
#define INSULT_PRIVATE_EVAL_REC_387_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_388(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_388_OVERLOAD(INSULT_PRIVATE_EVAL_REC_388_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_388_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_388_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_388_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_388_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_388_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_388_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_388_##choice
#define INSULT_PRIVATE_EVAL_REC_388_CONTINUE                   INSULT_PRIVATE_EVAL_REC_389
#define INSULT_PRIVATE_EVAL_REC_388_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_389(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_389_OVERLOAD(INSULT_PRIVATE_EVAL_REC_389_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_389_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_389_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_389_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_389_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_389_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_389_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_389_##choice
#define INSULT_PRIVATE_EVAL_REC_389_CONTINUE                   INSULT_PRIVATE_EVAL_REC_390
#define INSULT_PRIVATE_EVAL_REC_389_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_390(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_390_OVERLOAD(INSULT_PRIVATE_EVAL_REC_390_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_390_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_390_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_390_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_390_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_390_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_390_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_390_##choice
#define INSULT_PRIVATE_EVAL_REC_390_CONTINUE                   INSULT_PRIVATE_EVAL_REC_391
#define INSULT_PRIVATE_EVAL_REC_390_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_391(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_391_OVERLOAD(INSULT_PRIVATE_EVAL_REC_391_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_391_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_391_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_391_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_391_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_391_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_391_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_391_##choice
#define INSULT_PRIVATE_EVAL_REC_391_CONTINUE                   INSULT_PRIVATE_EVAL_REC_392
#define INSULT_PRIVATE_EVAL_REC_391_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_392(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_392_OVERLOAD(INSULT_PRIVATE_EVAL_REC_392_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_392_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_392_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_392_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_392_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_392_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_392_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_392_##choice
#define INSULT_PRIVATE_EVAL_REC_392_CONTINUE                   INSULT_PRIVATE_EVAL_REC_393
#define INSULT_PRIVATE_EVAL_REC_392_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_393(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_393_OVERLOAD(INSULT_PRIVATE_EVAL_REC_393_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_393_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_393_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_393_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_393_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_393_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_393_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_393_##choice
#define INSULT_PRIVATE_EVAL_REC_393_CONTINUE                   INSULT_PRIVATE_EVAL_REC_394
#define INSULT_PRIVATE_EVAL_REC_393_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_394(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_394_OVERLOAD(INSULT_PRIVATE_EVAL_REC_394_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_394_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_394_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_394_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_394_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_394_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_394_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_394_##choice
#define INSULT_PRIVATE_EVAL_REC_394_CONTINUE                   INSULT_PRIVATE_EVAL_REC_395
#define INSULT_PRIVATE_EVAL_REC_394_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_395(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_395_OVERLOAD(INSULT_PRIVATE_EVAL_REC_395_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_395_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_395_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_395_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_395_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_395_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_395_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_395_##choice
#define INSULT_PRIVATE_EVAL_REC_395_CONTINUE                   INSULT_PRIVATE_EVAL_REC_396
#define INSULT_PRIVATE_EVAL_REC_395_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_396(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_396_OVERLOAD(INSULT_PRIVATE_EVAL_REC_396_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_396_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_396_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_396_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_396_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_396_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_396_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_396_##choice
#define INSULT_PRIVATE_EVAL_REC_396_CONTINUE                   INSULT_PRIVATE_EVAL_REC_397
#define INSULT_PRIVATE_EVAL_REC_396_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_397(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_397_OVERLOAD(INSULT_PRIVATE_EVAL_REC_397_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_397_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_397_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_397_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_397_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_397_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_397_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_397_##choice
#define INSULT_PRIVATE_EVAL_REC_397_CONTINUE                   INSULT_PRIVATE_EVAL_REC_398
#define INSULT_PRIVATE_EVAL_REC_397_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_398(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_398_OVERLOAD(INSULT_PRIVATE_EVAL_REC_398_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_398_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_398_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_398_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_398_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_398_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_398_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_398_##choice
#define INSULT_PRIVATE_EVAL_REC_398_CONTINUE                   INSULT_PRIVATE_EVAL_REC_399
#define INSULT_PRIVATE_EVAL_REC_398_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_399(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_399_OVERLOAD(INSULT_PRIVATE_EVAL_REC_399_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_399_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_399_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_399_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_399_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_399_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_399_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_399_##choice
#define INSULT_PRIVATE_EVAL_REC_399_CONTINUE                   INSULT_PRIVATE_EVAL_REC_400
#define INSULT_PRIVATE_EVAL_REC_399_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_400(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_400_OVERLOAD(INSULT_PRIVATE_EVAL_REC_400_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_400_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_400_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_400_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_400_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_400_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_400_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_400_##choice
#define INSULT_PRIVATE_EVAL_REC_400_CONTINUE                   INSULT_PRIVATE_EVAL_REC_401
#define INSULT_PRIVATE_EVAL_REC_400_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_401(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_401_OVERLOAD(INSULT_PRIVATE_EVAL_REC_401_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_401_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_401_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_401_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_401_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_401_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_401_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_401_##choice
#define INSULT_PRIVATE_EVAL_REC_401_CONTINUE                   INSULT_PRIVATE_EVAL_REC_402
#define INSULT_PRIVATE_EVAL_REC_401_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_402(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_402_OVERLOAD(INSULT_PRIVATE_EVAL_REC_402_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_402_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_402_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_402_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_402_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_402_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_402_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_402_##choice
#define INSULT_PRIVATE_EVAL_REC_402_CONTINUE                   INSULT_PRIVATE_EVAL_REC_403
#define INSULT_PRIVATE_EVAL_REC_402_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_403(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_403_OVERLOAD(INSULT_PRIVATE_EVAL_REC_403_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_403_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_403_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_403_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_403_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_403_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_403_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_403_##choice
#define INSULT_PRIVATE_EVAL_REC_403_CONTINUE                   INSULT_PRIVATE_EVAL_REC_404
#define INSULT_PRIVATE_EVAL_REC_403_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_404(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_404_OVERLOAD(INSULT_PRIVATE_EVAL_REC_404_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_404_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_404_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_404_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_404_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_404_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_404_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_404_##choice
#define INSULT_PRIVATE_EVAL_REC_404_CONTINUE                   INSULT_PRIVATE_EVAL_REC_405
#define INSULT_PRIVATE_EVAL_REC_404_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_405(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_405_OVERLOAD(INSULT_PRIVATE_EVAL_REC_405_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_405_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_405_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_405_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_405_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_405_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_405_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_405_##choice
#define INSULT_PRIVATE_EVAL_REC_405_CONTINUE                   INSULT_PRIVATE_EVAL_REC_406
#define INSULT_PRIVATE_EVAL_REC_405_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_406(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_406_OVERLOAD(INSULT_PRIVATE_EVAL_REC_406_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_406_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_406_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_406_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_406_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_406_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_406_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_406_##choice
#define INSULT_PRIVATE_EVAL_REC_406_CONTINUE                   INSULT_PRIVATE_EVAL_REC_407
#define INSULT_PRIVATE_EVAL_REC_406_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_407(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_407_OVERLOAD(INSULT_PRIVATE_EVAL_REC_407_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_407_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_407_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_407_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_407_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_407_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_407_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_407_##choice
#define INSULT_PRIVATE_EVAL_REC_407_CONTINUE                   INSULT_PRIVATE_EVAL_REC_408
#define INSULT_PRIVATE_EVAL_REC_407_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_408(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_408_OVERLOAD(INSULT_PRIVATE_EVAL_REC_408_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_408_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_408_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_408_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_408_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_408_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_408_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_408_##choice
#define INSULT_PRIVATE_EVAL_REC_408_CONTINUE                   INSULT_PRIVATE_EVAL_REC_409
#define INSULT_PRIVATE_EVAL_REC_408_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_409(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_409_OVERLOAD(INSULT_PRIVATE_EVAL_REC_409_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_409_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_409_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_409_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_409_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_409_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_409_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_409_##choice
#define INSULT_PRIVATE_EVAL_REC_409_CONTINUE                   INSULT_PRIVATE_EVAL_REC_410
#define INSULT_PRIVATE_EVAL_REC_409_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_410(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_410_OVERLOAD(INSULT_PRIVATE_EVAL_REC_410_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_410_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_410_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_410_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_410_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_410_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_410_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_410_##choice
#define INSULT_PRIVATE_EVAL_REC_410_CONTINUE                   INSULT_PRIVATE_EVAL_REC_411
#define INSULT_PRIVATE_EVAL_REC_410_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_411(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_411_OVERLOAD(INSULT_PRIVATE_EVAL_REC_411_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_411_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_411_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_411_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_411_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_411_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_411_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_411_##choice
#define INSULT_PRIVATE_EVAL_REC_411_CONTINUE                   INSULT_PRIVATE_EVAL_REC_412
#define INSULT_PRIVATE_EVAL_REC_411_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_412(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_412_OVERLOAD(INSULT_PRIVATE_EVAL_REC_412_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_412_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_412_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_412_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_412_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_412_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_412_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_412_##choice
#define INSULT_PRIVATE_EVAL_REC_412_CONTINUE                   INSULT_PRIVATE_EVAL_REC_413
#define INSULT_PRIVATE_EVAL_REC_412_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_413(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_413_OVERLOAD(INSULT_PRIVATE_EVAL_REC_413_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_413_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_413_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_413_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_413_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_413_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_413_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_413_##choice
#define INSULT_PRIVATE_EVAL_REC_413_CONTINUE                   INSULT_PRIVATE_EVAL_REC_414
#define INSULT_PRIVATE_EVAL_REC_413_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_414(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_414_OVERLOAD(INSULT_PRIVATE_EVAL_REC_414_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_414_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_414_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_414_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_414_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_414_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_414_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_414_##choice
#define INSULT_PRIVATE_EVAL_REC_414_CONTINUE                   INSULT_PRIVATE_EVAL_REC_415
#define INSULT_PRIVATE_EVAL_REC_414_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_415(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_415_OVERLOAD(INSULT_PRIVATE_EVAL_REC_415_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_415_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_415_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_415_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_415_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_415_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_415_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_415_##choice
#define INSULT_PRIVATE_EVAL_REC_415_CONTINUE                   INSULT_PRIVATE_EVAL_REC_416
#define INSULT_PRIVATE_EVAL_REC_415_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_416(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_416_OVERLOAD(INSULT_PRIVATE_EVAL_REC_416_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_416_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_416_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_416_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_416_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_416_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_416_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_416_##choice
#define INSULT_PRIVATE_EVAL_REC_416_CONTINUE                   INSULT_PRIVATE_EVAL_REC_417
#define INSULT_PRIVATE_EVAL_REC_416_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_417(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_417_OVERLOAD(INSULT_PRIVATE_EVAL_REC_417_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_417_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_417_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_417_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_417_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_417_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_417_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_417_##choice
#define INSULT_PRIVATE_EVAL_REC_417_CONTINUE                   INSULT_PRIVATE_EVAL_REC_418
#define INSULT_PRIVATE_EVAL_REC_417_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_418(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_418_OVERLOAD(INSULT_PRIVATE_EVAL_REC_418_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_418_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_418_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_418_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_418_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_418_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_418_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_418_##choice
#define INSULT_PRIVATE_EVAL_REC_418_CONTINUE                   INSULT_PRIVATE_EVAL_REC_419
#define INSULT_PRIVATE_EVAL_REC_418_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_419(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_419_OVERLOAD(INSULT_PRIVATE_EVAL_REC_419_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_419_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_419_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_419_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_419_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_419_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_419_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_419_##choice
#define INSULT_PRIVATE_EVAL_REC_419_CONTINUE                   INSULT_PRIVATE_EVAL_REC_420
#define INSULT_PRIVATE_EVAL_REC_419_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_420(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_420_OVERLOAD(INSULT_PRIVATE_EVAL_REC_420_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_420_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_420_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_420_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_420_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_420_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_420_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_420_##choice
#define INSULT_PRIVATE_EVAL_REC_420_CONTINUE                   INSULT_PRIVATE_EVAL_REC_421
#define INSULT_PRIVATE_EVAL_REC_420_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_421(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_421_OVERLOAD(INSULT_PRIVATE_EVAL_REC_421_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_421_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_421_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_421_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_421_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_421_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_421_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_421_##choice
#define INSULT_PRIVATE_EVAL_REC_421_CONTINUE                   INSULT_PRIVATE_EVAL_REC_422
#define INSULT_PRIVATE_EVAL_REC_421_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_422(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_422_OVERLOAD(INSULT_PRIVATE_EVAL_REC_422_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_422_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_422_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_422_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_422_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_422_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_422_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_422_##choice
#define INSULT_PRIVATE_EVAL_REC_422_CONTINUE                   INSULT_PRIVATE_EVAL_REC_423
#define INSULT_PRIVATE_EVAL_REC_422_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_423(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_423_OVERLOAD(INSULT_PRIVATE_EVAL_REC_423_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_423_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_423_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_423_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_423_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_423_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_423_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_423_##choice
#define INSULT_PRIVATE_EVAL_REC_423_CONTINUE                   INSULT_PRIVATE_EVAL_REC_424
#define INSULT_PRIVATE_EVAL_REC_423_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_424(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_424_OVERLOAD(INSULT_PRIVATE_EVAL_REC_424_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_424_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_424_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_424_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_424_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_424_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_424_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_424_##choice
#define INSULT_PRIVATE_EVAL_REC_424_CONTINUE                   INSULT_PRIVATE_EVAL_REC_425
#define INSULT_PRIVATE_EVAL_REC_424_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_425(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_425_OVERLOAD(INSULT_PRIVATE_EVAL_REC_425_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_425_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_425_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_425_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_425_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_425_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_425_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_425_##choice
#define INSULT_PRIVATE_EVAL_REC_425_CONTINUE                   INSULT_PRIVATE_EVAL_REC_426
#define INSULT_PRIVATE_EVAL_REC_425_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_426(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_426_OVERLOAD(INSULT_PRIVATE_EVAL_REC_426_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_426_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_426_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_426_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_426_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_426_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_426_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_426_##choice
#define INSULT_PRIVATE_EVAL_REC_426_CONTINUE                   INSULT_PRIVATE_EVAL_REC_427
#define INSULT_PRIVATE_EVAL_REC_426_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_427(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_427_OVERLOAD(INSULT_PRIVATE_EVAL_REC_427_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_427_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_427_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_427_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_427_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_427_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_427_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_427_##choice
#define INSULT_PRIVATE_EVAL_REC_427_CONTINUE                   INSULT_PRIVATE_EVAL_REC_428
#define INSULT_PRIVATE_EVAL_REC_427_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_428(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_428_OVERLOAD(INSULT_PRIVATE_EVAL_REC_428_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_428_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_428_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_428_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_428_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_428_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_428_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_428_##choice
#define INSULT_PRIVATE_EVAL_REC_428_CONTINUE                   INSULT_PRIVATE_EVAL_REC_429
#define INSULT_PRIVATE_EVAL_REC_428_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_429(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_429_OVERLOAD(INSULT_PRIVATE_EVAL_REC_429_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_429_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_429_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_429_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_429_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_429_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_429_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_429_##choice
#define INSULT_PRIVATE_EVAL_REC_429_CONTINUE                   INSULT_PRIVATE_EVAL_REC_430
#define INSULT_PRIVATE_EVAL_REC_429_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_430(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_430_OVERLOAD(INSULT_PRIVATE_EVAL_REC_430_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_430_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_430_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_430_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_430_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_430_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_430_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_430_##choice
#define INSULT_PRIVATE_EVAL_REC_430_CONTINUE                   INSULT_PRIVATE_EVAL_REC_431
#define INSULT_PRIVATE_EVAL_REC_430_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_431(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_431_OVERLOAD(INSULT_PRIVATE_EVAL_REC_431_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_431_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_431_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_431_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_431_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_431_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_431_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_431_##choice
#define INSULT_PRIVATE_EVAL_REC_431_CONTINUE                   INSULT_PRIVATE_EVAL_REC_432
#define INSULT_PRIVATE_EVAL_REC_431_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_432(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_432_OVERLOAD(INSULT_PRIVATE_EVAL_REC_432_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_432_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_432_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_432_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_432_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_432_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_432_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_432_##choice
#define INSULT_PRIVATE_EVAL_REC_432_CONTINUE                   INSULT_PRIVATE_EVAL_REC_433
#define INSULT_PRIVATE_EVAL_REC_432_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_433(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_433_OVERLOAD(INSULT_PRIVATE_EVAL_REC_433_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_433_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_433_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_433_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_433_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_433_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_433_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_433_##choice
#define INSULT_PRIVATE_EVAL_REC_433_CONTINUE                   INSULT_PRIVATE_EVAL_REC_434
#define INSULT_PRIVATE_EVAL_REC_433_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_434(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_434_OVERLOAD(INSULT_PRIVATE_EVAL_REC_434_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_434_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_434_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_434_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_434_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_434_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_434_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_434_##choice
#define INSULT_PRIVATE_EVAL_REC_434_CONTINUE                   INSULT_PRIVATE_EVAL_REC_435
#define INSULT_PRIVATE_EVAL_REC_434_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_435(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_435_OVERLOAD(INSULT_PRIVATE_EVAL_REC_435_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_435_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_435_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_435_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_435_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_435_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_435_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_435_##choice
#define INSULT_PRIVATE_EVAL_REC_435_CONTINUE                   INSULT_PRIVATE_EVAL_REC_436
#define INSULT_PRIVATE_EVAL_REC_435_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_436(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_436_OVERLOAD(INSULT_PRIVATE_EVAL_REC_436_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_436_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_436_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_436_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_436_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_436_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_436_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_436_##choice
#define INSULT_PRIVATE_EVAL_REC_436_CONTINUE                   INSULT_PRIVATE_EVAL_REC_437
#define INSULT_PRIVATE_EVAL_REC_436_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_437(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_437_OVERLOAD(INSULT_PRIVATE_EVAL_REC_437_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_437_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_437_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_437_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_437_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_437_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_437_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_437_##choice
#define INSULT_PRIVATE_EVAL_REC_437_CONTINUE                   INSULT_PRIVATE_EVAL_REC_438
#define INSULT_PRIVATE_EVAL_REC_437_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_438(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_438_OVERLOAD(INSULT_PRIVATE_EVAL_REC_438_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_438_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_438_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_438_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_438_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_438_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_438_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_438_##choice
#define INSULT_PRIVATE_EVAL_REC_438_CONTINUE                   INSULT_PRIVATE_EVAL_REC_439
#define INSULT_PRIVATE_EVAL_REC_438_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_439(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_439_OVERLOAD(INSULT_PRIVATE_EVAL_REC_439_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_439_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_439_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_439_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_439_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_439_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_439_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_439_##choice
#define INSULT_PRIVATE_EVAL_REC_439_CONTINUE                   INSULT_PRIVATE_EVAL_REC_440
#define INSULT_PRIVATE_EVAL_REC_439_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_440(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_440_OVERLOAD(INSULT_PRIVATE_EVAL_REC_440_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_440_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_440_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_440_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_440_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_440_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_440_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_440_##choice
#define INSULT_PRIVATE_EVAL_REC_440_CONTINUE                   INSULT_PRIVATE_EVAL_REC_441
#define INSULT_PRIVATE_EVAL_REC_440_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_441(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_441_OVERLOAD(INSULT_PRIVATE_EVAL_REC_441_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_441_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_441_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_441_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_441_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_441_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_441_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_441_##choice
#define INSULT_PRIVATE_EVAL_REC_441_CONTINUE                   INSULT_PRIVATE_EVAL_REC_442
#define INSULT_PRIVATE_EVAL_REC_441_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_442(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_442_OVERLOAD(INSULT_PRIVATE_EVAL_REC_442_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_442_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_442_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_442_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_442_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_442_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_442_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_442_##choice
#define INSULT_PRIVATE_EVAL_REC_442_CONTINUE                   INSULT_PRIVATE_EVAL_REC_443
#define INSULT_PRIVATE_EVAL_REC_442_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_443(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_443_OVERLOAD(INSULT_PRIVATE_EVAL_REC_443_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_443_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_443_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_443_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_443_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_443_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_443_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_443_##choice
#define INSULT_PRIVATE_EVAL_REC_443_CONTINUE                   INSULT_PRIVATE_EVAL_REC_444
#define INSULT_PRIVATE_EVAL_REC_443_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_444(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_444_OVERLOAD(INSULT_PRIVATE_EVAL_REC_444_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_444_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_444_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_444_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_444_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_444_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_444_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_444_##choice
#define INSULT_PRIVATE_EVAL_REC_444_CONTINUE                   INSULT_PRIVATE_EVAL_REC_445
#define INSULT_PRIVATE_EVAL_REC_444_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_445(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_445_OVERLOAD(INSULT_PRIVATE_EVAL_REC_445_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_445_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_445_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_445_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_445_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_445_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_445_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_445_##choice
#define INSULT_PRIVATE_EVAL_REC_445_CONTINUE                   INSULT_PRIVATE_EVAL_REC_446
#define INSULT_PRIVATE_EVAL_REC_445_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_446(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_446_OVERLOAD(INSULT_PRIVATE_EVAL_REC_446_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_446_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_446_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_446_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_446_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_446_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_446_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_446_##choice
#define INSULT_PRIVATE_EVAL_REC_446_CONTINUE                   INSULT_PRIVATE_EVAL_REC_447
#define INSULT_PRIVATE_EVAL_REC_446_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_447(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_447_OVERLOAD(INSULT_PRIVATE_EVAL_REC_447_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_447_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_447_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_447_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_447_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_447_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_447_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_447_##choice
#define INSULT_PRIVATE_EVAL_REC_447_CONTINUE                   INSULT_PRIVATE_EVAL_REC_448
#define INSULT_PRIVATE_EVAL_REC_447_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_448(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_448_OVERLOAD(INSULT_PRIVATE_EVAL_REC_448_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_448_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_448_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_448_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_448_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_448_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_448_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_448_##choice
#define INSULT_PRIVATE_EVAL_REC_448_CONTINUE                   INSULT_PRIVATE_EVAL_REC_449
#define INSULT_PRIVATE_EVAL_REC_448_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_449(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_449_OVERLOAD(INSULT_PRIVATE_EVAL_REC_449_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_449_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_449_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_449_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_449_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_449_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_449_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_449_##choice
#define INSULT_PRIVATE_EVAL_REC_449_CONTINUE                   INSULT_PRIVATE_EVAL_REC_450
#define INSULT_PRIVATE_EVAL_REC_449_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_450(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_450_OVERLOAD(INSULT_PRIVATE_EVAL_REC_450_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_450_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_450_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_450_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_450_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_450_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_450_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_450_##choice
#define INSULT_PRIVATE_EVAL_REC_450_CONTINUE                   INSULT_PRIVATE_EVAL_REC_451
#define INSULT_PRIVATE_EVAL_REC_450_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_451(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_451_OVERLOAD(INSULT_PRIVATE_EVAL_REC_451_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_451_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_451_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_451_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_451_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_451_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_451_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_451_##choice
#define INSULT_PRIVATE_EVAL_REC_451_CONTINUE                   INSULT_PRIVATE_EVAL_REC_452
#define INSULT_PRIVATE_EVAL_REC_451_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_452(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_452_OVERLOAD(INSULT_PRIVATE_EVAL_REC_452_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_452_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_452_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_452_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_452_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_452_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_452_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_452_##choice
#define INSULT_PRIVATE_EVAL_REC_452_CONTINUE                   INSULT_PRIVATE_EVAL_REC_453
#define INSULT_PRIVATE_EVAL_REC_452_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_453(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_453_OVERLOAD(INSULT_PRIVATE_EVAL_REC_453_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_453_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_453_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_453_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_453_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_453_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_453_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_453_##choice
#define INSULT_PRIVATE_EVAL_REC_453_CONTINUE                   INSULT_PRIVATE_EVAL_REC_454
#define INSULT_PRIVATE_EVAL_REC_453_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_454(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_454_OVERLOAD(INSULT_PRIVATE_EVAL_REC_454_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_454_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_454_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_454_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_454_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_454_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_454_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_454_##choice
#define INSULT_PRIVATE_EVAL_REC_454_CONTINUE                   INSULT_PRIVATE_EVAL_REC_455
#define INSULT_PRIVATE_EVAL_REC_454_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_455(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_455_OVERLOAD(INSULT_PRIVATE_EVAL_REC_455_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_455_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_455_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_455_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_455_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_455_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_455_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_455_##choice
#define INSULT_PRIVATE_EVAL_REC_455_CONTINUE                   INSULT_PRIVATE_EVAL_REC_456
#define INSULT_PRIVATE_EVAL_REC_455_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_456(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_456_OVERLOAD(INSULT_PRIVATE_EVAL_REC_456_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_456_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_456_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_456_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_456_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_456_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_456_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_456_##choice
#define INSULT_PRIVATE_EVAL_REC_456_CONTINUE                   INSULT_PRIVATE_EVAL_REC_457
#define INSULT_PRIVATE_EVAL_REC_456_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_457(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_457_OVERLOAD(INSULT_PRIVATE_EVAL_REC_457_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_457_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_457_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_457_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_457_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_457_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_457_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_457_##choice
#define INSULT_PRIVATE_EVAL_REC_457_CONTINUE                   INSULT_PRIVATE_EVAL_REC_458
#define INSULT_PRIVATE_EVAL_REC_457_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_458(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_458_OVERLOAD(INSULT_PRIVATE_EVAL_REC_458_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_458_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_458_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_458_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_458_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_458_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_458_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_458_##choice
#define INSULT_PRIVATE_EVAL_REC_458_CONTINUE                   INSULT_PRIVATE_EVAL_REC_459
#define INSULT_PRIVATE_EVAL_REC_458_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_459(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_459_OVERLOAD(INSULT_PRIVATE_EVAL_REC_459_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_459_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_459_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_459_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_459_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_459_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_459_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_459_##choice
#define INSULT_PRIVATE_EVAL_REC_459_CONTINUE                   INSULT_PRIVATE_EVAL_REC_460
#define INSULT_PRIVATE_EVAL_REC_459_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_460(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_460_OVERLOAD(INSULT_PRIVATE_EVAL_REC_460_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_460_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_460_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_460_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_460_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_460_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_460_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_460_##choice
#define INSULT_PRIVATE_EVAL_REC_460_CONTINUE                   INSULT_PRIVATE_EVAL_REC_461
#define INSULT_PRIVATE_EVAL_REC_460_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_461(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_461_OVERLOAD(INSULT_PRIVATE_EVAL_REC_461_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_461_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_461_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_461_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_461_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_461_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_461_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_461_##choice
#define INSULT_PRIVATE_EVAL_REC_461_CONTINUE                   INSULT_PRIVATE_EVAL_REC_462
#define INSULT_PRIVATE_EVAL_REC_461_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_462(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_462_OVERLOAD(INSULT_PRIVATE_EVAL_REC_462_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_462_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_462_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_462_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_462_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_462_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_462_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_462_##choice
#define INSULT_PRIVATE_EVAL_REC_462_CONTINUE                   INSULT_PRIVATE_EVAL_REC_463
#define INSULT_PRIVATE_EVAL_REC_462_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_463(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_463_OVERLOAD(INSULT_PRIVATE_EVAL_REC_463_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_463_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_463_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_463_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_463_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_463_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_463_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_463_##choice
#define INSULT_PRIVATE_EVAL_REC_463_CONTINUE                   INSULT_PRIVATE_EVAL_REC_464
#define INSULT_PRIVATE_EVAL_REC_463_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_464(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_464_OVERLOAD(INSULT_PRIVATE_EVAL_REC_464_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_464_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_464_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_464_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_464_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_464_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_464_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_464_##choice
#define INSULT_PRIVATE_EVAL_REC_464_CONTINUE                   INSULT_PRIVATE_EVAL_REC_465
#define INSULT_PRIVATE_EVAL_REC_464_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_465(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_465_OVERLOAD(INSULT_PRIVATE_EVAL_REC_465_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_465_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_465_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_465_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_465_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_465_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_465_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_465_##choice
#define INSULT_PRIVATE_EVAL_REC_465_CONTINUE                   INSULT_PRIVATE_EVAL_REC_466
#define INSULT_PRIVATE_EVAL_REC_465_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_466(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_466_OVERLOAD(INSULT_PRIVATE_EVAL_REC_466_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_466_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_466_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_466_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_466_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_466_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_466_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_466_##choice
#define INSULT_PRIVATE_EVAL_REC_466_CONTINUE                   INSULT_PRIVATE_EVAL_REC_467
#define INSULT_PRIVATE_EVAL_REC_466_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_467(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_467_OVERLOAD(INSULT_PRIVATE_EVAL_REC_467_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_467_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_467_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_467_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_467_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_467_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_467_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_467_##choice
#define INSULT_PRIVATE_EVAL_REC_467_CONTINUE                   INSULT_PRIVATE_EVAL_REC_468
#define INSULT_PRIVATE_EVAL_REC_467_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_468(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_468_OVERLOAD(INSULT_PRIVATE_EVAL_REC_468_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_468_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_468_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_468_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_468_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_468_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_468_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_468_##choice
#define INSULT_PRIVATE_EVAL_REC_468_CONTINUE                   INSULT_PRIVATE_EVAL_REC_469
#define INSULT_PRIVATE_EVAL_REC_468_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_469(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_469_OVERLOAD(INSULT_PRIVATE_EVAL_REC_469_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_469_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_469_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_469_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_469_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_469_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_469_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_469_##choice
#define INSULT_PRIVATE_EVAL_REC_469_CONTINUE                   INSULT_PRIVATE_EVAL_REC_470
#define INSULT_PRIVATE_EVAL_REC_469_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_470(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_470_OVERLOAD(INSULT_PRIVATE_EVAL_REC_470_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_470_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_470_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_470_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_470_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_470_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_470_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_470_##choice
#define INSULT_PRIVATE_EVAL_REC_470_CONTINUE                   INSULT_PRIVATE_EVAL_REC_471
#define INSULT_PRIVATE_EVAL_REC_470_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_471(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_471_OVERLOAD(INSULT_PRIVATE_EVAL_REC_471_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_471_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_471_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_471_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_471_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_471_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_471_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_471_##choice
#define INSULT_PRIVATE_EVAL_REC_471_CONTINUE                   INSULT_PRIVATE_EVAL_REC_472
#define INSULT_PRIVATE_EVAL_REC_471_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_472(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_472_OVERLOAD(INSULT_PRIVATE_EVAL_REC_472_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_472_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_472_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_472_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_472_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_472_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_472_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_472_##choice
#define INSULT_PRIVATE_EVAL_REC_472_CONTINUE                   INSULT_PRIVATE_EVAL_REC_473
#define INSULT_PRIVATE_EVAL_REC_472_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_473(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_473_OVERLOAD(INSULT_PRIVATE_EVAL_REC_473_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_473_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_473_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_473_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_473_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_473_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_473_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_473_##choice
#define INSULT_PRIVATE_EVAL_REC_473_CONTINUE                   INSULT_PRIVATE_EVAL_REC_474
#define INSULT_PRIVATE_EVAL_REC_473_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_474(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_474_OVERLOAD(INSULT_PRIVATE_EVAL_REC_474_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_474_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_474_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_474_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_474_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_474_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_474_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_474_##choice
#define INSULT_PRIVATE_EVAL_REC_474_CONTINUE                   INSULT_PRIVATE_EVAL_REC_475
#define INSULT_PRIVATE_EVAL_REC_474_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_475(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_475_OVERLOAD(INSULT_PRIVATE_EVAL_REC_475_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_475_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_475_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_475_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_475_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_475_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_475_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_475_##choice
#define INSULT_PRIVATE_EVAL_REC_475_CONTINUE                   INSULT_PRIVATE_EVAL_REC_476
#define INSULT_PRIVATE_EVAL_REC_475_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_476(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_476_OVERLOAD(INSULT_PRIVATE_EVAL_REC_476_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_476_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_476_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_476_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_476_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_476_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_476_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_476_##choice
#define INSULT_PRIVATE_EVAL_REC_476_CONTINUE                   INSULT_PRIVATE_EVAL_REC_477
#define INSULT_PRIVATE_EVAL_REC_476_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_477(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_477_OVERLOAD(INSULT_PRIVATE_EVAL_REC_477_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_477_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_477_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_477_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_477_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_477_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_477_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_477_##choice
#define INSULT_PRIVATE_EVAL_REC_477_CONTINUE                   INSULT_PRIVATE_EVAL_REC_478
#define INSULT_PRIVATE_EVAL_REC_477_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_478(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_478_OVERLOAD(INSULT_PRIVATE_EVAL_REC_478_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_478_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_478_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_478_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_478_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_478_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_478_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_478_##choice
#define INSULT_PRIVATE_EVAL_REC_478_CONTINUE                   INSULT_PRIVATE_EVAL_REC_479
#define INSULT_PRIVATE_EVAL_REC_478_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_479(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_479_OVERLOAD(INSULT_PRIVATE_EVAL_REC_479_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_479_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_479_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_479_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_479_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_479_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_479_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_479_##choice
#define INSULT_PRIVATE_EVAL_REC_479_CONTINUE                   INSULT_PRIVATE_EVAL_REC_480
#define INSULT_PRIVATE_EVAL_REC_479_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_480(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_480_OVERLOAD(INSULT_PRIVATE_EVAL_REC_480_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_480_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_480_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_480_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_480_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_480_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_480_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_480_##choice
#define INSULT_PRIVATE_EVAL_REC_480_CONTINUE                   INSULT_PRIVATE_EVAL_REC_481
#define INSULT_PRIVATE_EVAL_REC_480_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_481(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_481_OVERLOAD(INSULT_PRIVATE_EVAL_REC_481_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_481_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_481_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_481_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_481_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_481_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_481_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_481_##choice
#define INSULT_PRIVATE_EVAL_REC_481_CONTINUE                   INSULT_PRIVATE_EVAL_REC_482
#define INSULT_PRIVATE_EVAL_REC_481_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_482(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_482_OVERLOAD(INSULT_PRIVATE_EVAL_REC_482_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_482_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_482_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_482_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_482_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_482_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_482_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_482_##choice
#define INSULT_PRIVATE_EVAL_REC_482_CONTINUE                   INSULT_PRIVATE_EVAL_REC_483
#define INSULT_PRIVATE_EVAL_REC_482_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_483(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_483_OVERLOAD(INSULT_PRIVATE_EVAL_REC_483_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_483_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_483_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_483_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_483_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_483_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_483_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_483_##choice
#define INSULT_PRIVATE_EVAL_REC_483_CONTINUE                   INSULT_PRIVATE_EVAL_REC_484
#define INSULT_PRIVATE_EVAL_REC_483_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_484(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_484_OVERLOAD(INSULT_PRIVATE_EVAL_REC_484_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_484_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_484_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_484_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_484_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_484_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_484_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_484_##choice
#define INSULT_PRIVATE_EVAL_REC_484_CONTINUE                   INSULT_PRIVATE_EVAL_REC_485
#define INSULT_PRIVATE_EVAL_REC_484_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_485(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_485_OVERLOAD(INSULT_PRIVATE_EVAL_REC_485_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_485_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_485_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_485_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_485_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_485_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_485_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_485_##choice
#define INSULT_PRIVATE_EVAL_REC_485_CONTINUE                   INSULT_PRIVATE_EVAL_REC_486
#define INSULT_PRIVATE_EVAL_REC_485_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_486(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_486_OVERLOAD(INSULT_PRIVATE_EVAL_REC_486_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_486_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_486_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_486_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_486_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_486_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_486_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_486_##choice
#define INSULT_PRIVATE_EVAL_REC_486_CONTINUE                   INSULT_PRIVATE_EVAL_REC_487
#define INSULT_PRIVATE_EVAL_REC_486_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_487(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_487_OVERLOAD(INSULT_PRIVATE_EVAL_REC_487_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_487_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_487_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_487_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_487_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_487_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_487_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_487_##choice
#define INSULT_PRIVATE_EVAL_REC_487_CONTINUE                   INSULT_PRIVATE_EVAL_REC_488
#define INSULT_PRIVATE_EVAL_REC_487_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_488(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_488_OVERLOAD(INSULT_PRIVATE_EVAL_REC_488_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_488_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_488_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_488_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_488_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_488_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_488_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_488_##choice
#define INSULT_PRIVATE_EVAL_REC_488_CONTINUE                   INSULT_PRIVATE_EVAL_REC_489
#define INSULT_PRIVATE_EVAL_REC_488_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_489(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_489_OVERLOAD(INSULT_PRIVATE_EVAL_REC_489_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_489_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_489_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_489_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_489_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_489_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_489_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_489_##choice
#define INSULT_PRIVATE_EVAL_REC_489_CONTINUE                   INSULT_PRIVATE_EVAL_REC_490
#define INSULT_PRIVATE_EVAL_REC_489_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_490(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_490_OVERLOAD(INSULT_PRIVATE_EVAL_REC_490_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_490_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_490_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_490_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_490_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_490_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_490_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_490_##choice
#define INSULT_PRIVATE_EVAL_REC_490_CONTINUE                   INSULT_PRIVATE_EVAL_REC_491
#define INSULT_PRIVATE_EVAL_REC_490_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_491(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_491_OVERLOAD(INSULT_PRIVATE_EVAL_REC_491_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_491_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_491_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_491_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_491_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_491_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_491_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_491_##choice
#define INSULT_PRIVATE_EVAL_REC_491_CONTINUE                   INSULT_PRIVATE_EVAL_REC_492
#define INSULT_PRIVATE_EVAL_REC_491_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_492(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_492_OVERLOAD(INSULT_PRIVATE_EVAL_REC_492_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_492_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_492_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_492_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_492_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_492_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_492_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_492_##choice
#define INSULT_PRIVATE_EVAL_REC_492_CONTINUE                   INSULT_PRIVATE_EVAL_REC_493
#define INSULT_PRIVATE_EVAL_REC_492_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_493(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_493_OVERLOAD(INSULT_PRIVATE_EVAL_REC_493_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_493_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_493_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_493_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_493_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_493_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_493_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_493_##choice
#define INSULT_PRIVATE_EVAL_REC_493_CONTINUE                   INSULT_PRIVATE_EVAL_REC_494
#define INSULT_PRIVATE_EVAL_REC_493_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_494(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_494_OVERLOAD(INSULT_PRIVATE_EVAL_REC_494_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_494_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_494_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_494_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_494_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_494_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_494_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_494_##choice
#define INSULT_PRIVATE_EVAL_REC_494_CONTINUE                   INSULT_PRIVATE_EVAL_REC_495
#define INSULT_PRIVATE_EVAL_REC_494_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_495(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_495_OVERLOAD(INSULT_PRIVATE_EVAL_REC_495_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_495_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_495_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_495_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_495_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_495_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_495_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_495_##choice
#define INSULT_PRIVATE_EVAL_REC_495_CONTINUE                   INSULT_PRIVATE_EVAL_REC_496
#define INSULT_PRIVATE_EVAL_REC_495_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_496(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_496_OVERLOAD(INSULT_PRIVATE_EVAL_REC_496_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_496_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_496_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_496_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_496_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_496_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_496_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_496_##choice
#define INSULT_PRIVATE_EVAL_REC_496_CONTINUE                   INSULT_PRIVATE_EVAL_REC_497
#define INSULT_PRIVATE_EVAL_REC_496_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_497(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_497_OVERLOAD(INSULT_PRIVATE_EVAL_REC_497_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_497_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_497_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_497_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_497_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_497_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_497_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_497_##choice
#define INSULT_PRIVATE_EVAL_REC_497_CONTINUE                   INSULT_PRIVATE_EVAL_REC_498
#define INSULT_PRIVATE_EVAL_REC_497_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_498(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_498_OVERLOAD(INSULT_PRIVATE_EVAL_REC_498_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_498_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_498_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_498_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_498_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_498_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_498_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_498_##choice
#define INSULT_PRIVATE_EVAL_REC_498_CONTINUE                   INSULT_PRIVATE_EVAL_REC_499
#define INSULT_PRIVATE_EVAL_REC_498_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_499(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_499_OVERLOAD(INSULT_PRIVATE_EVAL_REC_499_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_499_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_499_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_499_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_499_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_499_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_499_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_499_##choice
#define INSULT_PRIVATE_EVAL_REC_499_CONTINUE                   INSULT_PRIVATE_EVAL_REC_500
#define INSULT_PRIVATE_EVAL_REC_499_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_500(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_500_OVERLOAD(INSULT_PRIVATE_EVAL_REC_500_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_500_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_500_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_500_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_500_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_500_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_500_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_500_##choice
#define INSULT_PRIVATE_EVAL_REC_500_CONTINUE                   INSULT_PRIVATE_EVAL_REC_501
#define INSULT_PRIVATE_EVAL_REC_500_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_501(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_501_OVERLOAD(INSULT_PRIVATE_EVAL_REC_501_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_501_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_501_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_501_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_501_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_501_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_501_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_501_##choice
#define INSULT_PRIVATE_EVAL_REC_501_CONTINUE                   INSULT_PRIVATE_EVAL_REC_502
#define INSULT_PRIVATE_EVAL_REC_501_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_502(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_502_OVERLOAD(INSULT_PRIVATE_EVAL_REC_502_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_502_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_502_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_502_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_502_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_502_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_502_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_502_##choice
#define INSULT_PRIVATE_EVAL_REC_502_CONTINUE                   INSULT_PRIVATE_EVAL_REC_503
#define INSULT_PRIVATE_EVAL_REC_502_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_503(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_503_OVERLOAD(INSULT_PRIVATE_EVAL_REC_503_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_503_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_503_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_503_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_503_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_503_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_503_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_503_##choice
#define INSULT_PRIVATE_EVAL_REC_503_CONTINUE                   INSULT_PRIVATE_EVAL_REC_504
#define INSULT_PRIVATE_EVAL_REC_503_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_504(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_504_OVERLOAD(INSULT_PRIVATE_EVAL_REC_504_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_504_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_504_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_504_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_504_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_504_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_504_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_504_##choice
#define INSULT_PRIVATE_EVAL_REC_504_CONTINUE                   INSULT_PRIVATE_EVAL_REC_505
#define INSULT_PRIVATE_EVAL_REC_504_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_505(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_505_OVERLOAD(INSULT_PRIVATE_EVAL_REC_505_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_505_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_505_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_505_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_505_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_505_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_505_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_505_##choice
#define INSULT_PRIVATE_EVAL_REC_505_CONTINUE                   INSULT_PRIVATE_EVAL_REC_506
#define INSULT_PRIVATE_EVAL_REC_505_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_506(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_506_OVERLOAD(INSULT_PRIVATE_EVAL_REC_506_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_506_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_506_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_506_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_506_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_506_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_506_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_506_##choice
#define INSULT_PRIVATE_EVAL_REC_506_CONTINUE                   INSULT_PRIVATE_EVAL_REC_507
#define INSULT_PRIVATE_EVAL_REC_506_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_507(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_507_OVERLOAD(INSULT_PRIVATE_EVAL_REC_507_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_507_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_507_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_507_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_507_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_507_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_507_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_507_##choice
#define INSULT_PRIVATE_EVAL_REC_507_CONTINUE                   INSULT_PRIVATE_EVAL_REC_508
#define INSULT_PRIVATE_EVAL_REC_507_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_508(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_508_OVERLOAD(INSULT_PRIVATE_EVAL_REC_508_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_508_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_508_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_508_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_508_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_508_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_508_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_508_##choice
#define INSULT_PRIVATE_EVAL_REC_508_CONTINUE                   INSULT_PRIVATE_EVAL_REC_509
#define INSULT_PRIVATE_EVAL_REC_508_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_509(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_509_OVERLOAD(INSULT_PRIVATE_EVAL_REC_509_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_509_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_509_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_509_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_509_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_509_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_509_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_509_##choice
#define INSULT_PRIVATE_EVAL_REC_509_CONTINUE                   INSULT_PRIVATE_EVAL_REC_510
#define INSULT_PRIVATE_EVAL_REC_509_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_510(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_510_OVERLOAD(INSULT_PRIVATE_EVAL_REC_510_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_510_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_510_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_510_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_510_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_510_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_510_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_510_##choice
#define INSULT_PRIVATE_EVAL_REC_510_CONTINUE                   INSULT_PRIVATE_EVAL_REC_511
#define INSULT_PRIVATE_EVAL_REC_510_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_511(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_511_OVERLOAD(INSULT_PRIVATE_EVAL_REC_511_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_511_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_511_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_511_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_511_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_511_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_511_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_511_##choice
#define INSULT_PRIVATE_EVAL_REC_511_CONTINUE                   INSULT_PRIVATE_EVAL_REC_512
#define INSULT_PRIVATE_EVAL_REC_511_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_512(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_512_OVERLOAD(INSULT_PRIVATE_EVAL_REC_512_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_512_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_512_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_512_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_512_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_512_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_512_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_512_##choice
#define INSULT_PRIVATE_EVAL_REC_512_CONTINUE                   INSULT_PRIVATE_EVAL_REC_513
#define INSULT_PRIVATE_EVAL_REC_512_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_513(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_513_OVERLOAD(INSULT_PRIVATE_EVAL_REC_513_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_513_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_513_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_513_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_513_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_513_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_513_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_513_##choice
#define INSULT_PRIVATE_EVAL_REC_513_CONTINUE                   INSULT_PRIVATE_EVAL_REC_514
#define INSULT_PRIVATE_EVAL_REC_513_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_514(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_514_OVERLOAD(INSULT_PRIVATE_EVAL_REC_514_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_514_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_514_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_514_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_514_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_514_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_514_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_514_##choice
#define INSULT_PRIVATE_EVAL_REC_514_CONTINUE                   INSULT_PRIVATE_EVAL_REC_515
#define INSULT_PRIVATE_EVAL_REC_514_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_515(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_515_OVERLOAD(INSULT_PRIVATE_EVAL_REC_515_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_515_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_515_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_515_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_515_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_515_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_515_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_515_##choice
#define INSULT_PRIVATE_EVAL_REC_515_CONTINUE                   INSULT_PRIVATE_EVAL_REC_516
#define INSULT_PRIVATE_EVAL_REC_515_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_516(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_516_OVERLOAD(INSULT_PRIVATE_EVAL_REC_516_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_516_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_516_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_516_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_516_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_516_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_516_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_516_##choice
#define INSULT_PRIVATE_EVAL_REC_516_CONTINUE                   INSULT_PRIVATE_EVAL_REC_517
#define INSULT_PRIVATE_EVAL_REC_516_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_517(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_517_OVERLOAD(INSULT_PRIVATE_EVAL_REC_517_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_517_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_517_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_517_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_517_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_517_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_517_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_517_##choice
#define INSULT_PRIVATE_EVAL_REC_517_CONTINUE                   INSULT_PRIVATE_EVAL_REC_518
#define INSULT_PRIVATE_EVAL_REC_517_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_518(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_518_OVERLOAD(INSULT_PRIVATE_EVAL_REC_518_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_518_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_518_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_518_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_518_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_518_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_518_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_518_##choice
#define INSULT_PRIVATE_EVAL_REC_518_CONTINUE                   INSULT_PRIVATE_EVAL_REC_519
#define INSULT_PRIVATE_EVAL_REC_518_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_519(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_519_OVERLOAD(INSULT_PRIVATE_EVAL_REC_519_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_519_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_519_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_519_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_519_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_519_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_519_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_519_##choice
#define INSULT_PRIVATE_EVAL_REC_519_CONTINUE                   INSULT_PRIVATE_EVAL_REC_520
#define INSULT_PRIVATE_EVAL_REC_519_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_520(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_520_OVERLOAD(INSULT_PRIVATE_EVAL_REC_520_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_520_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_520_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_520_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_520_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_520_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_520_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_520_##choice
#define INSULT_PRIVATE_EVAL_REC_520_CONTINUE                   INSULT_PRIVATE_EVAL_REC_521
#define INSULT_PRIVATE_EVAL_REC_520_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_521(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_521_OVERLOAD(INSULT_PRIVATE_EVAL_REC_521_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_521_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_521_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_521_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_521_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_521_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_521_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_521_##choice
#define INSULT_PRIVATE_EVAL_REC_521_CONTINUE                   INSULT_PRIVATE_EVAL_REC_522
#define INSULT_PRIVATE_EVAL_REC_521_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_522(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_522_OVERLOAD(INSULT_PRIVATE_EVAL_REC_522_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_522_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_522_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_522_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_522_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_522_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_522_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_522_##choice
#define INSULT_PRIVATE_EVAL_REC_522_CONTINUE                   INSULT_PRIVATE_EVAL_REC_523
#define INSULT_PRIVATE_EVAL_REC_522_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_523(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_523_OVERLOAD(INSULT_PRIVATE_EVAL_REC_523_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_523_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_523_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_523_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_523_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_523_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_523_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_523_##choice
#define INSULT_PRIVATE_EVAL_REC_523_CONTINUE                   INSULT_PRIVATE_EVAL_REC_524
#define INSULT_PRIVATE_EVAL_REC_523_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_524(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_524_OVERLOAD(INSULT_PRIVATE_EVAL_REC_524_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_524_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_524_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_524_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_524_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_524_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_524_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_524_##choice
#define INSULT_PRIVATE_EVAL_REC_524_CONTINUE                   INSULT_PRIVATE_EVAL_REC_525
#define INSULT_PRIVATE_EVAL_REC_524_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_525(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_525_OVERLOAD(INSULT_PRIVATE_EVAL_REC_525_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_525_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_525_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_525_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_525_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_525_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_525_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_525_##choice
#define INSULT_PRIVATE_EVAL_REC_525_CONTINUE                   INSULT_PRIVATE_EVAL_REC_526
#define INSULT_PRIVATE_EVAL_REC_525_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_526(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_526_OVERLOAD(INSULT_PRIVATE_EVAL_REC_526_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_526_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_526_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_526_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_526_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_526_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_526_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_526_##choice
#define INSULT_PRIVATE_EVAL_REC_526_CONTINUE                   INSULT_PRIVATE_EVAL_REC_527
#define INSULT_PRIVATE_EVAL_REC_526_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_527(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_527_OVERLOAD(INSULT_PRIVATE_EVAL_REC_527_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_527_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_527_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_527_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_527_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_527_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_527_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_527_##choice
#define INSULT_PRIVATE_EVAL_REC_527_CONTINUE                   INSULT_PRIVATE_EVAL_REC_528
#define INSULT_PRIVATE_EVAL_REC_527_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_528(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_528_OVERLOAD(INSULT_PRIVATE_EVAL_REC_528_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_528_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_528_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_528_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_528_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_528_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_528_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_528_##choice
#define INSULT_PRIVATE_EVAL_REC_528_CONTINUE                   INSULT_PRIVATE_EVAL_REC_529
#define INSULT_PRIVATE_EVAL_REC_528_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_529(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_529_OVERLOAD(INSULT_PRIVATE_EVAL_REC_529_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_529_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_529_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_529_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_529_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_529_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_529_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_529_##choice
#define INSULT_PRIVATE_EVAL_REC_529_CONTINUE                   INSULT_PRIVATE_EVAL_REC_530
#define INSULT_PRIVATE_EVAL_REC_529_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_530(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_530_OVERLOAD(INSULT_PRIVATE_EVAL_REC_530_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_530_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_530_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_530_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_530_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_530_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_530_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_530_##choice
#define INSULT_PRIVATE_EVAL_REC_530_CONTINUE                   INSULT_PRIVATE_EVAL_REC_531
#define INSULT_PRIVATE_EVAL_REC_530_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_531(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_531_OVERLOAD(INSULT_PRIVATE_EVAL_REC_531_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_531_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_531_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_531_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_531_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_531_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_531_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_531_##choice
#define INSULT_PRIVATE_EVAL_REC_531_CONTINUE                   INSULT_PRIVATE_EVAL_REC_532
#define INSULT_PRIVATE_EVAL_REC_531_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_532(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_532_OVERLOAD(INSULT_PRIVATE_EVAL_REC_532_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_532_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_532_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_532_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_532_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_532_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_532_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_532_##choice
#define INSULT_PRIVATE_EVAL_REC_532_CONTINUE                   INSULT_PRIVATE_EVAL_REC_533
#define INSULT_PRIVATE_EVAL_REC_532_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_533(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_533_OVERLOAD(INSULT_PRIVATE_EVAL_REC_533_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_533_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_533_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_533_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_533_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_533_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_533_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_533_##choice
#define INSULT_PRIVATE_EVAL_REC_533_CONTINUE                   INSULT_PRIVATE_EVAL_REC_534
#define INSULT_PRIVATE_EVAL_REC_533_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_534(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_534_OVERLOAD(INSULT_PRIVATE_EVAL_REC_534_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_534_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_534_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_534_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_534_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_534_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_534_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_534_##choice
#define INSULT_PRIVATE_EVAL_REC_534_CONTINUE                   INSULT_PRIVATE_EVAL_REC_535
#define INSULT_PRIVATE_EVAL_REC_534_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_535(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_535_OVERLOAD(INSULT_PRIVATE_EVAL_REC_535_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_535_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_535_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_535_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_535_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_535_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_535_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_535_##choice
#define INSULT_PRIVATE_EVAL_REC_535_CONTINUE                   INSULT_PRIVATE_EVAL_REC_536
#define INSULT_PRIVATE_EVAL_REC_535_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_536(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_536_OVERLOAD(INSULT_PRIVATE_EVAL_REC_536_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_536_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_536_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_536_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_536_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_536_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_536_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_536_##choice
#define INSULT_PRIVATE_EVAL_REC_536_CONTINUE                   INSULT_PRIVATE_EVAL_REC_537
#define INSULT_PRIVATE_EVAL_REC_536_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_537(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_537_OVERLOAD(INSULT_PRIVATE_EVAL_REC_537_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_537_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_537_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_537_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_537_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_537_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_537_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_537_##choice
#define INSULT_PRIVATE_EVAL_REC_537_CONTINUE                   INSULT_PRIVATE_EVAL_REC_538
#define INSULT_PRIVATE_EVAL_REC_537_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_538(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_538_OVERLOAD(INSULT_PRIVATE_EVAL_REC_538_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_538_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_538_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_538_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_538_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_538_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_538_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_538_##choice
#define INSULT_PRIVATE_EVAL_REC_538_CONTINUE                   INSULT_PRIVATE_EVAL_REC_539
#define INSULT_PRIVATE_EVAL_REC_538_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_539(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_539_OVERLOAD(INSULT_PRIVATE_EVAL_REC_539_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_539_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_539_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_539_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_539_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_539_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_539_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_539_##choice
#define INSULT_PRIVATE_EVAL_REC_539_CONTINUE                   INSULT_PRIVATE_EVAL_REC_540
#define INSULT_PRIVATE_EVAL_REC_539_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_540(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_540_OVERLOAD(INSULT_PRIVATE_EVAL_REC_540_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_540_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_540_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_540_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_540_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_540_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_540_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_540_##choice
#define INSULT_PRIVATE_EVAL_REC_540_CONTINUE                   INSULT_PRIVATE_EVAL_REC_541
#define INSULT_PRIVATE_EVAL_REC_540_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_541(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_541_OVERLOAD(INSULT_PRIVATE_EVAL_REC_541_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_541_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_541_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_541_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_541_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_541_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_541_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_541_##choice
#define INSULT_PRIVATE_EVAL_REC_541_CONTINUE                   INSULT_PRIVATE_EVAL_REC_542
#define INSULT_PRIVATE_EVAL_REC_541_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_542(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_542_OVERLOAD(INSULT_PRIVATE_EVAL_REC_542_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_542_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_542_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_542_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_542_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_542_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_542_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_542_##choice
#define INSULT_PRIVATE_EVAL_REC_542_CONTINUE                   INSULT_PRIVATE_EVAL_REC_543
#define INSULT_PRIVATE_EVAL_REC_542_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_543(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_543_OVERLOAD(INSULT_PRIVATE_EVAL_REC_543_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_543_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_543_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_543_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_543_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_543_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_543_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_543_##choice
#define INSULT_PRIVATE_EVAL_REC_543_CONTINUE                   INSULT_PRIVATE_EVAL_REC_544
#define INSULT_PRIVATE_EVAL_REC_543_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_544(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_544_OVERLOAD(INSULT_PRIVATE_EVAL_REC_544_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_544_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_544_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_544_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_544_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_544_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_544_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_544_##choice
#define INSULT_PRIVATE_EVAL_REC_544_CONTINUE                   INSULT_PRIVATE_EVAL_REC_545
#define INSULT_PRIVATE_EVAL_REC_544_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_545(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_545_OVERLOAD(INSULT_PRIVATE_EVAL_REC_545_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_545_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_545_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_545_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_545_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_545_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_545_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_545_##choice
#define INSULT_PRIVATE_EVAL_REC_545_CONTINUE                   INSULT_PRIVATE_EVAL_REC_546
#define INSULT_PRIVATE_EVAL_REC_545_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_546(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_546_OVERLOAD(INSULT_PRIVATE_EVAL_REC_546_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_546_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_546_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_546_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_546_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_546_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_546_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_546_##choice
#define INSULT_PRIVATE_EVAL_REC_546_CONTINUE                   INSULT_PRIVATE_EVAL_REC_547
#define INSULT_PRIVATE_EVAL_REC_546_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_547(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_547_OVERLOAD(INSULT_PRIVATE_EVAL_REC_547_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_547_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_547_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_547_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_547_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_547_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_547_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_547_##choice
#define INSULT_PRIVATE_EVAL_REC_547_CONTINUE                   INSULT_PRIVATE_EVAL_REC_548
#define INSULT_PRIVATE_EVAL_REC_547_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_548(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_548_OVERLOAD(INSULT_PRIVATE_EVAL_REC_548_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_548_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_548_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_548_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_548_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_548_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_548_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_548_##choice
#define INSULT_PRIVATE_EVAL_REC_548_CONTINUE                   INSULT_PRIVATE_EVAL_REC_549
#define INSULT_PRIVATE_EVAL_REC_548_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_549(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_549_OVERLOAD(INSULT_PRIVATE_EVAL_REC_549_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_549_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_549_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_549_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_549_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_549_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_549_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_549_##choice
#define INSULT_PRIVATE_EVAL_REC_549_CONTINUE                   INSULT_PRIVATE_EVAL_REC_550
#define INSULT_PRIVATE_EVAL_REC_549_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_550(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_550_OVERLOAD(INSULT_PRIVATE_EVAL_REC_550_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_550_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_550_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_550_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_550_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_550_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_550_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_550_##choice
#define INSULT_PRIVATE_EVAL_REC_550_CONTINUE                   INSULT_PRIVATE_EVAL_REC_551
#define INSULT_PRIVATE_EVAL_REC_550_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_551(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_551_OVERLOAD(INSULT_PRIVATE_EVAL_REC_551_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_551_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_551_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_551_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_551_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_551_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_551_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_551_##choice
#define INSULT_PRIVATE_EVAL_REC_551_CONTINUE                   INSULT_PRIVATE_EVAL_REC_552
#define INSULT_PRIVATE_EVAL_REC_551_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_552(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_552_OVERLOAD(INSULT_PRIVATE_EVAL_REC_552_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_552_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_552_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_552_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_552_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_552_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_552_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_552_##choice
#define INSULT_PRIVATE_EVAL_REC_552_CONTINUE                   INSULT_PRIVATE_EVAL_REC_553
#define INSULT_PRIVATE_EVAL_REC_552_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_553(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_553_OVERLOAD(INSULT_PRIVATE_EVAL_REC_553_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_553_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_553_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_553_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_553_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_553_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_553_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_553_##choice
#define INSULT_PRIVATE_EVAL_REC_553_CONTINUE                   INSULT_PRIVATE_EVAL_REC_554
#define INSULT_PRIVATE_EVAL_REC_553_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_554(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_554_OVERLOAD(INSULT_PRIVATE_EVAL_REC_554_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_554_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_554_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_554_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_554_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_554_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_554_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_554_##choice
#define INSULT_PRIVATE_EVAL_REC_554_CONTINUE                   INSULT_PRIVATE_EVAL_REC_555
#define INSULT_PRIVATE_EVAL_REC_554_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_555(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_555_OVERLOAD(INSULT_PRIVATE_EVAL_REC_555_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_555_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_555_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_555_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_555_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_555_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_555_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_555_##choice
#define INSULT_PRIVATE_EVAL_REC_555_CONTINUE                   INSULT_PRIVATE_EVAL_REC_556
#define INSULT_PRIVATE_EVAL_REC_555_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_556(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_556_OVERLOAD(INSULT_PRIVATE_EVAL_REC_556_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_556_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_556_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_556_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_556_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_556_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_556_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_556_##choice
#define INSULT_PRIVATE_EVAL_REC_556_CONTINUE                   INSULT_PRIVATE_EVAL_REC_557
#define INSULT_PRIVATE_EVAL_REC_556_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_557(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_557_OVERLOAD(INSULT_PRIVATE_EVAL_REC_557_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_557_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_557_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_557_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_557_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_557_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_557_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_557_##choice
#define INSULT_PRIVATE_EVAL_REC_557_CONTINUE                   INSULT_PRIVATE_EVAL_REC_558
#define INSULT_PRIVATE_EVAL_REC_557_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_558(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_558_OVERLOAD(INSULT_PRIVATE_EVAL_REC_558_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_558_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_558_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_558_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_558_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_558_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_558_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_558_##choice
#define INSULT_PRIVATE_EVAL_REC_558_CONTINUE                   INSULT_PRIVATE_EVAL_REC_559
#define INSULT_PRIVATE_EVAL_REC_558_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_559(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_559_OVERLOAD(INSULT_PRIVATE_EVAL_REC_559_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_559_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_559_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_559_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_559_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_559_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_559_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_559_##choice
#define INSULT_PRIVATE_EVAL_REC_559_CONTINUE                   INSULT_PRIVATE_EVAL_REC_560
#define INSULT_PRIVATE_EVAL_REC_559_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_560(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_560_OVERLOAD(INSULT_PRIVATE_EVAL_REC_560_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_560_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_560_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_560_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_560_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_560_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_560_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_560_##choice
#define INSULT_PRIVATE_EVAL_REC_560_CONTINUE                   INSULT_PRIVATE_EVAL_REC_561
#define INSULT_PRIVATE_EVAL_REC_560_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_561(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_561_OVERLOAD(INSULT_PRIVATE_EVAL_REC_561_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_561_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_561_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_561_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_561_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_561_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_561_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_561_##choice
#define INSULT_PRIVATE_EVAL_REC_561_CONTINUE                   INSULT_PRIVATE_EVAL_REC_562
#define INSULT_PRIVATE_EVAL_REC_561_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_562(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_562_OVERLOAD(INSULT_PRIVATE_EVAL_REC_562_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_562_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_562_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_562_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_562_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_562_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_562_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_562_##choice
#define INSULT_PRIVATE_EVAL_REC_562_CONTINUE                   INSULT_PRIVATE_EVAL_REC_563
#define INSULT_PRIVATE_EVAL_REC_562_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_563(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_563_OVERLOAD(INSULT_PRIVATE_EVAL_REC_563_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_563_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_563_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_563_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_563_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_563_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_563_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_563_##choice
#define INSULT_PRIVATE_EVAL_REC_563_CONTINUE                   INSULT_PRIVATE_EVAL_REC_564
#define INSULT_PRIVATE_EVAL_REC_563_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_564(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_564_OVERLOAD(INSULT_PRIVATE_EVAL_REC_564_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_564_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_564_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_564_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_564_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_564_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_564_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_564_##choice
#define INSULT_PRIVATE_EVAL_REC_564_CONTINUE                   INSULT_PRIVATE_EVAL_REC_565
#define INSULT_PRIVATE_EVAL_REC_564_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_565(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_565_OVERLOAD(INSULT_PRIVATE_EVAL_REC_565_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_565_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_565_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_565_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_565_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_565_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_565_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_565_##choice
#define INSULT_PRIVATE_EVAL_REC_565_CONTINUE                   INSULT_PRIVATE_EVAL_REC_566
#define INSULT_PRIVATE_EVAL_REC_565_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_566(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_566_OVERLOAD(INSULT_PRIVATE_EVAL_REC_566_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_566_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_566_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_566_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_566_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_566_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_566_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_566_##choice
#define INSULT_PRIVATE_EVAL_REC_566_CONTINUE                   INSULT_PRIVATE_EVAL_REC_567
#define INSULT_PRIVATE_EVAL_REC_566_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_567(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_567_OVERLOAD(INSULT_PRIVATE_EVAL_REC_567_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_567_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_567_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_567_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_567_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_567_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_567_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_567_##choice
#define INSULT_PRIVATE_EVAL_REC_567_CONTINUE                   INSULT_PRIVATE_EVAL_REC_568
#define INSULT_PRIVATE_EVAL_REC_567_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_568(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_568_OVERLOAD(INSULT_PRIVATE_EVAL_REC_568_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_568_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_568_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_568_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_568_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_568_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_568_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_568_##choice
#define INSULT_PRIVATE_EVAL_REC_568_CONTINUE                   INSULT_PRIVATE_EVAL_REC_569
#define INSULT_PRIVATE_EVAL_REC_568_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_569(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_569_OVERLOAD(INSULT_PRIVATE_EVAL_REC_569_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_569_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_569_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_569_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_569_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_569_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_569_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_569_##choice
#define INSULT_PRIVATE_EVAL_REC_569_CONTINUE                   INSULT_PRIVATE_EVAL_REC_570
#define INSULT_PRIVATE_EVAL_REC_569_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_570(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_570_OVERLOAD(INSULT_PRIVATE_EVAL_REC_570_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_570_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_570_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_570_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_570_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_570_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_570_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_570_##choice
#define INSULT_PRIVATE_EVAL_REC_570_CONTINUE                   INSULT_PRIVATE_EVAL_REC_571
#define INSULT_PRIVATE_EVAL_REC_570_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_571(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_571_OVERLOAD(INSULT_PRIVATE_EVAL_REC_571_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_571_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_571_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_571_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_571_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_571_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_571_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_571_##choice
#define INSULT_PRIVATE_EVAL_REC_571_CONTINUE                   INSULT_PRIVATE_EVAL_REC_572
#define INSULT_PRIVATE_EVAL_REC_571_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_572(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_572_OVERLOAD(INSULT_PRIVATE_EVAL_REC_572_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_572_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_572_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_572_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_572_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_572_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_572_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_572_##choice
#define INSULT_PRIVATE_EVAL_REC_572_CONTINUE                   INSULT_PRIVATE_EVAL_REC_573
#define INSULT_PRIVATE_EVAL_REC_572_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_573(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_573_OVERLOAD(INSULT_PRIVATE_EVAL_REC_573_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_573_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_573_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_573_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_573_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_573_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_573_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_573_##choice
#define INSULT_PRIVATE_EVAL_REC_573_CONTINUE                   INSULT_PRIVATE_EVAL_REC_574
#define INSULT_PRIVATE_EVAL_REC_573_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_574(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_574_OVERLOAD(INSULT_PRIVATE_EVAL_REC_574_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_574_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_574_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_574_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_574_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_574_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_574_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_574_##choice
#define INSULT_PRIVATE_EVAL_REC_574_CONTINUE                   INSULT_PRIVATE_EVAL_REC_575
#define INSULT_PRIVATE_EVAL_REC_574_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_575(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_575_OVERLOAD(INSULT_PRIVATE_EVAL_REC_575_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_575_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_575_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_575_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_575_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_575_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_575_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_575_##choice
#define INSULT_PRIVATE_EVAL_REC_575_CONTINUE                   INSULT_PRIVATE_EVAL_REC_576
#define INSULT_PRIVATE_EVAL_REC_575_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_576(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_576_OVERLOAD(INSULT_PRIVATE_EVAL_REC_576_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_576_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_576_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_576_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_576_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_576_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_576_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_576_##choice
#define INSULT_PRIVATE_EVAL_REC_576_CONTINUE                   INSULT_PRIVATE_EVAL_REC_577
#define INSULT_PRIVATE_EVAL_REC_576_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_577(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_577_OVERLOAD(INSULT_PRIVATE_EVAL_REC_577_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_577_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_577_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_577_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_577_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_577_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_577_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_577_##choice
#define INSULT_PRIVATE_EVAL_REC_577_CONTINUE                   INSULT_PRIVATE_EVAL_REC_578
#define INSULT_PRIVATE_EVAL_REC_577_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_578(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_578_OVERLOAD(INSULT_PRIVATE_EVAL_REC_578_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_578_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_578_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_578_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_578_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_578_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_578_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_578_##choice
#define INSULT_PRIVATE_EVAL_REC_578_CONTINUE                   INSULT_PRIVATE_EVAL_REC_579
#define INSULT_PRIVATE_EVAL_REC_578_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_579(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_579_OVERLOAD(INSULT_PRIVATE_EVAL_REC_579_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_579_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_579_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_579_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_579_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_579_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_579_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_579_##choice
#define INSULT_PRIVATE_EVAL_REC_579_CONTINUE                   INSULT_PRIVATE_EVAL_REC_580
#define INSULT_PRIVATE_EVAL_REC_579_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_580(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_580_OVERLOAD(INSULT_PRIVATE_EVAL_REC_580_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_580_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_580_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_580_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_580_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_580_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_580_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_580_##choice
#define INSULT_PRIVATE_EVAL_REC_580_CONTINUE                   INSULT_PRIVATE_EVAL_REC_581
#define INSULT_PRIVATE_EVAL_REC_580_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_581(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_581_OVERLOAD(INSULT_PRIVATE_EVAL_REC_581_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_581_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_581_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_581_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_581_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_581_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_581_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_581_##choice
#define INSULT_PRIVATE_EVAL_REC_581_CONTINUE                   INSULT_PRIVATE_EVAL_REC_582
#define INSULT_PRIVATE_EVAL_REC_581_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_582(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_582_OVERLOAD(INSULT_PRIVATE_EVAL_REC_582_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_582_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_582_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_582_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_582_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_582_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_582_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_582_##choice
#define INSULT_PRIVATE_EVAL_REC_582_CONTINUE                   INSULT_PRIVATE_EVAL_REC_583
#define INSULT_PRIVATE_EVAL_REC_582_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_583(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_583_OVERLOAD(INSULT_PRIVATE_EVAL_REC_583_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_583_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_583_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_583_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_583_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_583_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_583_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_583_##choice
#define INSULT_PRIVATE_EVAL_REC_583_CONTINUE                   INSULT_PRIVATE_EVAL_REC_584
#define INSULT_PRIVATE_EVAL_REC_583_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_584(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_584_OVERLOAD(INSULT_PRIVATE_EVAL_REC_584_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_584_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_584_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_584_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_584_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_584_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_584_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_584_##choice
#define INSULT_PRIVATE_EVAL_REC_584_CONTINUE                   INSULT_PRIVATE_EVAL_REC_585
#define INSULT_PRIVATE_EVAL_REC_584_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_585(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_585_OVERLOAD(INSULT_PRIVATE_EVAL_REC_585_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_585_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_585_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_585_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_585_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_585_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_585_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_585_##choice
#define INSULT_PRIVATE_EVAL_REC_585_CONTINUE                   INSULT_PRIVATE_EVAL_REC_586
#define INSULT_PRIVATE_EVAL_REC_585_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_586(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_586_OVERLOAD(INSULT_PRIVATE_EVAL_REC_586_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_586_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_586_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_586_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_586_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_586_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_586_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_586_##choice
#define INSULT_PRIVATE_EVAL_REC_586_CONTINUE                   INSULT_PRIVATE_EVAL_REC_587
#define INSULT_PRIVATE_EVAL_REC_586_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_587(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_587_OVERLOAD(INSULT_PRIVATE_EVAL_REC_587_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_587_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_587_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_587_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_587_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_587_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_587_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_587_##choice
#define INSULT_PRIVATE_EVAL_REC_587_CONTINUE                   INSULT_PRIVATE_EVAL_REC_588
#define INSULT_PRIVATE_EVAL_REC_587_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_588(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_588_OVERLOAD(INSULT_PRIVATE_EVAL_REC_588_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_588_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_588_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_588_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_588_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_588_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_588_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_588_##choice
#define INSULT_PRIVATE_EVAL_REC_588_CONTINUE                   INSULT_PRIVATE_EVAL_REC_589
#define INSULT_PRIVATE_EVAL_REC_588_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_589(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_589_OVERLOAD(INSULT_PRIVATE_EVAL_REC_589_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_589_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_589_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_589_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_589_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_589_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_589_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_589_##choice
#define INSULT_PRIVATE_EVAL_REC_589_CONTINUE                   INSULT_PRIVATE_EVAL_REC_590
#define INSULT_PRIVATE_EVAL_REC_589_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_590(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_590_OVERLOAD(INSULT_PRIVATE_EVAL_REC_590_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_590_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_590_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_590_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_590_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_590_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_590_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_590_##choice
#define INSULT_PRIVATE_EVAL_REC_590_CONTINUE                   INSULT_PRIVATE_EVAL_REC_591
#define INSULT_PRIVATE_EVAL_REC_590_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_591(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_591_OVERLOAD(INSULT_PRIVATE_EVAL_REC_591_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_591_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_591_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_591_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_591_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_591_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_591_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_591_##choice
#define INSULT_PRIVATE_EVAL_REC_591_CONTINUE                   INSULT_PRIVATE_EVAL_REC_592
#define INSULT_PRIVATE_EVAL_REC_591_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_592(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_592_OVERLOAD(INSULT_PRIVATE_EVAL_REC_592_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_592_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_592_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_592_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_592_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_592_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_592_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_592_##choice
#define INSULT_PRIVATE_EVAL_REC_592_CONTINUE                   INSULT_PRIVATE_EVAL_REC_593
#define INSULT_PRIVATE_EVAL_REC_592_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_593(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_593_OVERLOAD(INSULT_PRIVATE_EVAL_REC_593_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_593_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_593_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_593_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_593_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_593_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_593_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_593_##choice
#define INSULT_PRIVATE_EVAL_REC_593_CONTINUE                   INSULT_PRIVATE_EVAL_REC_594
#define INSULT_PRIVATE_EVAL_REC_593_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_594(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_594_OVERLOAD(INSULT_PRIVATE_EVAL_REC_594_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_594_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_594_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_594_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_594_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_594_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_594_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_594_##choice
#define INSULT_PRIVATE_EVAL_REC_594_CONTINUE                   INSULT_PRIVATE_EVAL_REC_595
#define INSULT_PRIVATE_EVAL_REC_594_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_595(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_595_OVERLOAD(INSULT_PRIVATE_EVAL_REC_595_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_595_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_595_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_595_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_595_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_595_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_595_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_595_##choice
#define INSULT_PRIVATE_EVAL_REC_595_CONTINUE                   INSULT_PRIVATE_EVAL_REC_596
#define INSULT_PRIVATE_EVAL_REC_595_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_596(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_596_OVERLOAD(INSULT_PRIVATE_EVAL_REC_596_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_596_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_596_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_596_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_596_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_596_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_596_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_596_##choice
#define INSULT_PRIVATE_EVAL_REC_596_CONTINUE                   INSULT_PRIVATE_EVAL_REC_597
#define INSULT_PRIVATE_EVAL_REC_596_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_597(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_597_OVERLOAD(INSULT_PRIVATE_EVAL_REC_597_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_597_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_597_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_597_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_597_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_597_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_597_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_597_##choice
#define INSULT_PRIVATE_EVAL_REC_597_CONTINUE                   INSULT_PRIVATE_EVAL_REC_598
#define INSULT_PRIVATE_EVAL_REC_597_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_598(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_598_OVERLOAD(INSULT_PRIVATE_EVAL_REC_598_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_598_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_598_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_598_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_598_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_598_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_598_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_598_##choice
#define INSULT_PRIVATE_EVAL_REC_598_CONTINUE                   INSULT_PRIVATE_EVAL_REC_599
#define INSULT_PRIVATE_EVAL_REC_598_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_599(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_599_OVERLOAD(INSULT_PRIVATE_EVAL_REC_599_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_599_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_599_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_599_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_599_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_599_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_599_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_599_##choice
#define INSULT_PRIVATE_EVAL_REC_599_CONTINUE                   INSULT_PRIVATE_EVAL_REC_600
#define INSULT_PRIVATE_EVAL_REC_599_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_600(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_600_OVERLOAD(INSULT_PRIVATE_EVAL_REC_600_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_600_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_600_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_600_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_600_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_600_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_600_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_600_##choice
#define INSULT_PRIVATE_EVAL_REC_600_CONTINUE                   INSULT_PRIVATE_EVAL_REC_601
#define INSULT_PRIVATE_EVAL_REC_600_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_601(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_601_OVERLOAD(INSULT_PRIVATE_EVAL_REC_601_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_601_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_601_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_601_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_601_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_601_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_601_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_601_##choice
#define INSULT_PRIVATE_EVAL_REC_601_CONTINUE                   INSULT_PRIVATE_EVAL_REC_602
#define INSULT_PRIVATE_EVAL_REC_601_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_602(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_602_OVERLOAD(INSULT_PRIVATE_EVAL_REC_602_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_602_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_602_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_602_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_602_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_602_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_602_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_602_##choice
#define INSULT_PRIVATE_EVAL_REC_602_CONTINUE                   INSULT_PRIVATE_EVAL_REC_603
#define INSULT_PRIVATE_EVAL_REC_602_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_603(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_603_OVERLOAD(INSULT_PRIVATE_EVAL_REC_603_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_603_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_603_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_603_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_603_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_603_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_603_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_603_##choice
#define INSULT_PRIVATE_EVAL_REC_603_CONTINUE                   INSULT_PRIVATE_EVAL_REC_604
#define INSULT_PRIVATE_EVAL_REC_603_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_604(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_604_OVERLOAD(INSULT_PRIVATE_EVAL_REC_604_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_604_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_604_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_604_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_604_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_604_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_604_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_604_##choice
#define INSULT_PRIVATE_EVAL_REC_604_CONTINUE                   INSULT_PRIVATE_EVAL_REC_605
#define INSULT_PRIVATE_EVAL_REC_604_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_605(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_605_OVERLOAD(INSULT_PRIVATE_EVAL_REC_605_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_605_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_605_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_605_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_605_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_605_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_605_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_605_##choice
#define INSULT_PRIVATE_EVAL_REC_605_CONTINUE                   INSULT_PRIVATE_EVAL_REC_606
#define INSULT_PRIVATE_EVAL_REC_605_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_606(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_606_OVERLOAD(INSULT_PRIVATE_EVAL_REC_606_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_606_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_606_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_606_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_606_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_606_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_606_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_606_##choice
#define INSULT_PRIVATE_EVAL_REC_606_CONTINUE                   INSULT_PRIVATE_EVAL_REC_607
#define INSULT_PRIVATE_EVAL_REC_606_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_607(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_607_OVERLOAD(INSULT_PRIVATE_EVAL_REC_607_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_607_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_607_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_607_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_607_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_607_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_607_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_607_##choice
#define INSULT_PRIVATE_EVAL_REC_607_CONTINUE                   INSULT_PRIVATE_EVAL_REC_608
#define INSULT_PRIVATE_EVAL_REC_607_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_608(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_608_OVERLOAD(INSULT_PRIVATE_EVAL_REC_608_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_608_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_608_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_608_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_608_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_608_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_608_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_608_##choice
#define INSULT_PRIVATE_EVAL_REC_608_CONTINUE                   INSULT_PRIVATE_EVAL_REC_609
#define INSULT_PRIVATE_EVAL_REC_608_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_609(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_609_OVERLOAD(INSULT_PRIVATE_EVAL_REC_609_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_609_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_609_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_609_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_609_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_609_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_609_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_609_##choice
#define INSULT_PRIVATE_EVAL_REC_609_CONTINUE                   INSULT_PRIVATE_EVAL_REC_610
#define INSULT_PRIVATE_EVAL_REC_609_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_610(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_610_OVERLOAD(INSULT_PRIVATE_EVAL_REC_610_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_610_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_610_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_610_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_610_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_610_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_610_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_610_##choice
#define INSULT_PRIVATE_EVAL_REC_610_CONTINUE                   INSULT_PRIVATE_EVAL_REC_611
#define INSULT_PRIVATE_EVAL_REC_610_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_611(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_611_OVERLOAD(INSULT_PRIVATE_EVAL_REC_611_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_611_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_611_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_611_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_611_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_611_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_611_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_611_##choice
#define INSULT_PRIVATE_EVAL_REC_611_CONTINUE                   INSULT_PRIVATE_EVAL_REC_612
#define INSULT_PRIVATE_EVAL_REC_611_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_612(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_612_OVERLOAD(INSULT_PRIVATE_EVAL_REC_612_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_612_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_612_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_612_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_612_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_612_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_612_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_612_##choice
#define INSULT_PRIVATE_EVAL_REC_612_CONTINUE                   INSULT_PRIVATE_EVAL_REC_613
#define INSULT_PRIVATE_EVAL_REC_612_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_613(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_613_OVERLOAD(INSULT_PRIVATE_EVAL_REC_613_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_613_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_613_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_613_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_613_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_613_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_613_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_613_##choice
#define INSULT_PRIVATE_EVAL_REC_613_CONTINUE                   INSULT_PRIVATE_EVAL_REC_614
#define INSULT_PRIVATE_EVAL_REC_613_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_614(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_614_OVERLOAD(INSULT_PRIVATE_EVAL_REC_614_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_614_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_614_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_614_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_614_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_614_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_614_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_614_##choice
#define INSULT_PRIVATE_EVAL_REC_614_CONTINUE                   INSULT_PRIVATE_EVAL_REC_615
#define INSULT_PRIVATE_EVAL_REC_614_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_615(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_615_OVERLOAD(INSULT_PRIVATE_EVAL_REC_615_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_615_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_615_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_615_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_615_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_615_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_615_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_615_##choice
#define INSULT_PRIVATE_EVAL_REC_615_CONTINUE                   INSULT_PRIVATE_EVAL_REC_616
#define INSULT_PRIVATE_EVAL_REC_615_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_616(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_616_OVERLOAD(INSULT_PRIVATE_EVAL_REC_616_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_616_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_616_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_616_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_616_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_616_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_616_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_616_##choice
#define INSULT_PRIVATE_EVAL_REC_616_CONTINUE                   INSULT_PRIVATE_EVAL_REC_617
#define INSULT_PRIVATE_EVAL_REC_616_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_617(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_617_OVERLOAD(INSULT_PRIVATE_EVAL_REC_617_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_617_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_617_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_617_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_617_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_617_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_617_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_617_##choice
#define INSULT_PRIVATE_EVAL_REC_617_CONTINUE                   INSULT_PRIVATE_EVAL_REC_618
#define INSULT_PRIVATE_EVAL_REC_617_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_618(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_618_OVERLOAD(INSULT_PRIVATE_EVAL_REC_618_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_618_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_618_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_618_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_618_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_618_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_618_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_618_##choice
#define INSULT_PRIVATE_EVAL_REC_618_CONTINUE                   INSULT_PRIVATE_EVAL_REC_619
#define INSULT_PRIVATE_EVAL_REC_618_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_619(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_619_OVERLOAD(INSULT_PRIVATE_EVAL_REC_619_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_619_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_619_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_619_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_619_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_619_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_619_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_619_##choice
#define INSULT_PRIVATE_EVAL_REC_619_CONTINUE                   INSULT_PRIVATE_EVAL_REC_620
#define INSULT_PRIVATE_EVAL_REC_619_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_620(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_620_OVERLOAD(INSULT_PRIVATE_EVAL_REC_620_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_620_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_620_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_620_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_620_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_620_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_620_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_620_##choice
#define INSULT_PRIVATE_EVAL_REC_620_CONTINUE                   INSULT_PRIVATE_EVAL_REC_621
#define INSULT_PRIVATE_EVAL_REC_620_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_621(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_621_OVERLOAD(INSULT_PRIVATE_EVAL_REC_621_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_621_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_621_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_621_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_621_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_621_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_621_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_621_##choice
#define INSULT_PRIVATE_EVAL_REC_621_CONTINUE                   INSULT_PRIVATE_EVAL_REC_622
#define INSULT_PRIVATE_EVAL_REC_621_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_622(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_622_OVERLOAD(INSULT_PRIVATE_EVAL_REC_622_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_622_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_622_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_622_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_622_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_622_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_622_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_622_##choice
#define INSULT_PRIVATE_EVAL_REC_622_CONTINUE                   INSULT_PRIVATE_EVAL_REC_623
#define INSULT_PRIVATE_EVAL_REC_622_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_623(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_623_OVERLOAD(INSULT_PRIVATE_EVAL_REC_623_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_623_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_623_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_623_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_623_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_623_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_623_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_623_##choice
#define INSULT_PRIVATE_EVAL_REC_623_CONTINUE                   INSULT_PRIVATE_EVAL_REC_624
#define INSULT_PRIVATE_EVAL_REC_623_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_624(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_624_OVERLOAD(INSULT_PRIVATE_EVAL_REC_624_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_624_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_624_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_624_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_624_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_624_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_624_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_624_##choice
#define INSULT_PRIVATE_EVAL_REC_624_CONTINUE                   INSULT_PRIVATE_EVAL_REC_625
#define INSULT_PRIVATE_EVAL_REC_624_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_625(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_625_OVERLOAD(INSULT_PRIVATE_EVAL_REC_625_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_625_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_625_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_625_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_625_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_625_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_625_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_625_##choice
#define INSULT_PRIVATE_EVAL_REC_625_CONTINUE                   INSULT_PRIVATE_EVAL_REC_626
#define INSULT_PRIVATE_EVAL_REC_625_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_626(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_626_OVERLOAD(INSULT_PRIVATE_EVAL_REC_626_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_626_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_626_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_626_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_626_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_626_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_626_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_626_##choice
#define INSULT_PRIVATE_EVAL_REC_626_CONTINUE                   INSULT_PRIVATE_EVAL_REC_627
#define INSULT_PRIVATE_EVAL_REC_626_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_627(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_627_OVERLOAD(INSULT_PRIVATE_EVAL_REC_627_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_627_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_627_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_627_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_627_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_627_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_627_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_627_##choice
#define INSULT_PRIVATE_EVAL_REC_627_CONTINUE                   INSULT_PRIVATE_EVAL_REC_628
#define INSULT_PRIVATE_EVAL_REC_627_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_628(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_628_OVERLOAD(INSULT_PRIVATE_EVAL_REC_628_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_628_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_628_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_628_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_628_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_628_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_628_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_628_##choice
#define INSULT_PRIVATE_EVAL_REC_628_CONTINUE                   INSULT_PRIVATE_EVAL_REC_629
#define INSULT_PRIVATE_EVAL_REC_628_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_629(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_629_OVERLOAD(INSULT_PRIVATE_EVAL_REC_629_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_629_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_629_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_629_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_629_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_629_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_629_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_629_##choice
#define INSULT_PRIVATE_EVAL_REC_629_CONTINUE                   INSULT_PRIVATE_EVAL_REC_630
#define INSULT_PRIVATE_EVAL_REC_629_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_630(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_630_OVERLOAD(INSULT_PRIVATE_EVAL_REC_630_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_630_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_630_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_630_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_630_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_630_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_630_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_630_##choice
#define INSULT_PRIVATE_EVAL_REC_630_CONTINUE                   INSULT_PRIVATE_EVAL_REC_631
#define INSULT_PRIVATE_EVAL_REC_630_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_631(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_631_OVERLOAD(INSULT_PRIVATE_EVAL_REC_631_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_631_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_631_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_631_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_631_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_631_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_631_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_631_##choice
#define INSULT_PRIVATE_EVAL_REC_631_CONTINUE                   INSULT_PRIVATE_EVAL_REC_632
#define INSULT_PRIVATE_EVAL_REC_631_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_632(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_632_OVERLOAD(INSULT_PRIVATE_EVAL_REC_632_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_632_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_632_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_632_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_632_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_632_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_632_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_632_##choice
#define INSULT_PRIVATE_EVAL_REC_632_CONTINUE                   INSULT_PRIVATE_EVAL_REC_633
#define INSULT_PRIVATE_EVAL_REC_632_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_633(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_633_OVERLOAD(INSULT_PRIVATE_EVAL_REC_633_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_633_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_633_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_633_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_633_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_633_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_633_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_633_##choice
#define INSULT_PRIVATE_EVAL_REC_633_CONTINUE                   INSULT_PRIVATE_EVAL_REC_634
#define INSULT_PRIVATE_EVAL_REC_633_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_634(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_634_OVERLOAD(INSULT_PRIVATE_EVAL_REC_634_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_634_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_634_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_634_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_634_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_634_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_634_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_634_##choice
#define INSULT_PRIVATE_EVAL_REC_634_CONTINUE                   INSULT_PRIVATE_EVAL_REC_635
#define INSULT_PRIVATE_EVAL_REC_634_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_635(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_635_OVERLOAD(INSULT_PRIVATE_EVAL_REC_635_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_635_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_635_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_635_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_635_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_635_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_635_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_635_##choice
#define INSULT_PRIVATE_EVAL_REC_635_CONTINUE                   INSULT_PRIVATE_EVAL_REC_636
#define INSULT_PRIVATE_EVAL_REC_635_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_636(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_636_OVERLOAD(INSULT_PRIVATE_EVAL_REC_636_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_636_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_636_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_636_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_636_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_636_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_636_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_636_##choice
#define INSULT_PRIVATE_EVAL_REC_636_CONTINUE                   INSULT_PRIVATE_EVAL_REC_637
#define INSULT_PRIVATE_EVAL_REC_636_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_637(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_637_OVERLOAD(INSULT_PRIVATE_EVAL_REC_637_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_637_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_637_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_637_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_637_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_637_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_637_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_637_##choice
#define INSULT_PRIVATE_EVAL_REC_637_CONTINUE                   INSULT_PRIVATE_EVAL_REC_638
#define INSULT_PRIVATE_EVAL_REC_637_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_638(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_638_OVERLOAD(INSULT_PRIVATE_EVAL_REC_638_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_638_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_638_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_638_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_638_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_638_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_638_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_638_##choice
#define INSULT_PRIVATE_EVAL_REC_638_CONTINUE                   INSULT_PRIVATE_EVAL_REC_639
#define INSULT_PRIVATE_EVAL_REC_638_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_639(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_639_OVERLOAD(INSULT_PRIVATE_EVAL_REC_639_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_639_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_639_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_639_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_639_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_639_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_639_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_639_##choice
#define INSULT_PRIVATE_EVAL_REC_639_CONTINUE                   INSULT_PRIVATE_EVAL_REC_640
#define INSULT_PRIVATE_EVAL_REC_639_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_640(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_640_OVERLOAD(INSULT_PRIVATE_EVAL_REC_640_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_640_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_640_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_640_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_640_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_640_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_640_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_640_##choice
#define INSULT_PRIVATE_EVAL_REC_640_CONTINUE                   INSULT_PRIVATE_EVAL_REC_641
#define INSULT_PRIVATE_EVAL_REC_640_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_641(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_641_OVERLOAD(INSULT_PRIVATE_EVAL_REC_641_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_641_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_641_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_641_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_641_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_641_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_641_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_641_##choice
#define INSULT_PRIVATE_EVAL_REC_641_CONTINUE                   INSULT_PRIVATE_EVAL_REC_642
#define INSULT_PRIVATE_EVAL_REC_641_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_642(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_642_OVERLOAD(INSULT_PRIVATE_EVAL_REC_642_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_642_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_642_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_642_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_642_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_642_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_642_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_642_##choice
#define INSULT_PRIVATE_EVAL_REC_642_CONTINUE                   INSULT_PRIVATE_EVAL_REC_643
#define INSULT_PRIVATE_EVAL_REC_642_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_643(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_643_OVERLOAD(INSULT_PRIVATE_EVAL_REC_643_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_643_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_643_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_643_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_643_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_643_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_643_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_643_##choice
#define INSULT_PRIVATE_EVAL_REC_643_CONTINUE                   INSULT_PRIVATE_EVAL_REC_644
#define INSULT_PRIVATE_EVAL_REC_643_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_644(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_644_OVERLOAD(INSULT_PRIVATE_EVAL_REC_644_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_644_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_644_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_644_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_644_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_644_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_644_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_644_##choice
#define INSULT_PRIVATE_EVAL_REC_644_CONTINUE                   INSULT_PRIVATE_EVAL_REC_645
#define INSULT_PRIVATE_EVAL_REC_644_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_645(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_645_OVERLOAD(INSULT_PRIVATE_EVAL_REC_645_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_645_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_645_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_645_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_645_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_645_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_645_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_645_##choice
#define INSULT_PRIVATE_EVAL_REC_645_CONTINUE                   INSULT_PRIVATE_EVAL_REC_646
#define INSULT_PRIVATE_EVAL_REC_645_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_646(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_646_OVERLOAD(INSULT_PRIVATE_EVAL_REC_646_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_646_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_646_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_646_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_646_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_646_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_646_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_646_##choice
#define INSULT_PRIVATE_EVAL_REC_646_CONTINUE                   INSULT_PRIVATE_EVAL_REC_647
#define INSULT_PRIVATE_EVAL_REC_646_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_647(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_647_OVERLOAD(INSULT_PRIVATE_EVAL_REC_647_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_647_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_647_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_647_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_647_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_647_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_647_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_647_##choice
#define INSULT_PRIVATE_EVAL_REC_647_CONTINUE                   INSULT_PRIVATE_EVAL_REC_648
#define INSULT_PRIVATE_EVAL_REC_647_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_648(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_648_OVERLOAD(INSULT_PRIVATE_EVAL_REC_648_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_648_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_648_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_648_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_648_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_648_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_648_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_648_##choice
#define INSULT_PRIVATE_EVAL_REC_648_CONTINUE                   INSULT_PRIVATE_EVAL_REC_649
#define INSULT_PRIVATE_EVAL_REC_648_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_649(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_649_OVERLOAD(INSULT_PRIVATE_EVAL_REC_649_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_649_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_649_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_649_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_649_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_649_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_649_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_649_##choice
#define INSULT_PRIVATE_EVAL_REC_649_CONTINUE                   INSULT_PRIVATE_EVAL_REC_650
#define INSULT_PRIVATE_EVAL_REC_649_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_650(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_650_OVERLOAD(INSULT_PRIVATE_EVAL_REC_650_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_650_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_650_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_650_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_650_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_650_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_650_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_650_##choice
#define INSULT_PRIVATE_EVAL_REC_650_CONTINUE                   INSULT_PRIVATE_EVAL_REC_651
#define INSULT_PRIVATE_EVAL_REC_650_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_651(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_651_OVERLOAD(INSULT_PRIVATE_EVAL_REC_651_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_651_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_651_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_651_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_651_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_651_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_651_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_651_##choice
#define INSULT_PRIVATE_EVAL_REC_651_CONTINUE                   INSULT_PRIVATE_EVAL_REC_652
#define INSULT_PRIVATE_EVAL_REC_651_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_652(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_652_OVERLOAD(INSULT_PRIVATE_EVAL_REC_652_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_652_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_652_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_652_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_652_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_652_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_652_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_652_##choice
#define INSULT_PRIVATE_EVAL_REC_652_CONTINUE                   INSULT_PRIVATE_EVAL_REC_653
#define INSULT_PRIVATE_EVAL_REC_652_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_653(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_653_OVERLOAD(INSULT_PRIVATE_EVAL_REC_653_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_653_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_653_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_653_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_653_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_653_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_653_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_653_##choice
#define INSULT_PRIVATE_EVAL_REC_653_CONTINUE                   INSULT_PRIVATE_EVAL_REC_654
#define INSULT_PRIVATE_EVAL_REC_653_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_654(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_654_OVERLOAD(INSULT_PRIVATE_EVAL_REC_654_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_654_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_654_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_654_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_654_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_654_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_654_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_654_##choice
#define INSULT_PRIVATE_EVAL_REC_654_CONTINUE                   INSULT_PRIVATE_EVAL_REC_655
#define INSULT_PRIVATE_EVAL_REC_654_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_655(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_655_OVERLOAD(INSULT_PRIVATE_EVAL_REC_655_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_655_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_655_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_655_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_655_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_655_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_655_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_655_##choice
#define INSULT_PRIVATE_EVAL_REC_655_CONTINUE                   INSULT_PRIVATE_EVAL_REC_656
#define INSULT_PRIVATE_EVAL_REC_655_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_656(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_656_OVERLOAD(INSULT_PRIVATE_EVAL_REC_656_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_656_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_656_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_656_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_656_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_656_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_656_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_656_##choice
#define INSULT_PRIVATE_EVAL_REC_656_CONTINUE                   INSULT_PRIVATE_EVAL_REC_657
#define INSULT_PRIVATE_EVAL_REC_656_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_657(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_657_OVERLOAD(INSULT_PRIVATE_EVAL_REC_657_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_657_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_657_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_657_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_657_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_657_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_657_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_657_##choice
#define INSULT_PRIVATE_EVAL_REC_657_CONTINUE                   INSULT_PRIVATE_EVAL_REC_658
#define INSULT_PRIVATE_EVAL_REC_657_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_658(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_658_OVERLOAD(INSULT_PRIVATE_EVAL_REC_658_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_658_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_658_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_658_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_658_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_658_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_658_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_658_##choice
#define INSULT_PRIVATE_EVAL_REC_658_CONTINUE                   INSULT_PRIVATE_EVAL_REC_659
#define INSULT_PRIVATE_EVAL_REC_658_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_659(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_659_OVERLOAD(INSULT_PRIVATE_EVAL_REC_659_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_659_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_659_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_659_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_659_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_659_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_659_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_659_##choice
#define INSULT_PRIVATE_EVAL_REC_659_CONTINUE                   INSULT_PRIVATE_EVAL_REC_660
#define INSULT_PRIVATE_EVAL_REC_659_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_660(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_660_OVERLOAD(INSULT_PRIVATE_EVAL_REC_660_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_660_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_660_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_660_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_660_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_660_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_660_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_660_##choice
#define INSULT_PRIVATE_EVAL_REC_660_CONTINUE                   INSULT_PRIVATE_EVAL_REC_661
#define INSULT_PRIVATE_EVAL_REC_660_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_661(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_661_OVERLOAD(INSULT_PRIVATE_EVAL_REC_661_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_661_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_661_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_661_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_661_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_661_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_661_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_661_##choice
#define INSULT_PRIVATE_EVAL_REC_661_CONTINUE                   INSULT_PRIVATE_EVAL_REC_662
#define INSULT_PRIVATE_EVAL_REC_661_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_662(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_662_OVERLOAD(INSULT_PRIVATE_EVAL_REC_662_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_662_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_662_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_662_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_662_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_662_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_662_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_662_##choice
#define INSULT_PRIVATE_EVAL_REC_662_CONTINUE                   INSULT_PRIVATE_EVAL_REC_663
#define INSULT_PRIVATE_EVAL_REC_662_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_663(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_663_OVERLOAD(INSULT_PRIVATE_EVAL_REC_663_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_663_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_663_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_663_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_663_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_663_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_663_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_663_##choice
#define INSULT_PRIVATE_EVAL_REC_663_CONTINUE                   INSULT_PRIVATE_EVAL_REC_664
#define INSULT_PRIVATE_EVAL_REC_663_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_664(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_664_OVERLOAD(INSULT_PRIVATE_EVAL_REC_664_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_664_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_664_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_664_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_664_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_664_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_664_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_664_##choice
#define INSULT_PRIVATE_EVAL_REC_664_CONTINUE                   INSULT_PRIVATE_EVAL_REC_665
#define INSULT_PRIVATE_EVAL_REC_664_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_665(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_665_OVERLOAD(INSULT_PRIVATE_EVAL_REC_665_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_665_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_665_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_665_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_665_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_665_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_665_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_665_##choice
#define INSULT_PRIVATE_EVAL_REC_665_CONTINUE                   INSULT_PRIVATE_EVAL_REC_666
#define INSULT_PRIVATE_EVAL_REC_665_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_666(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_666_OVERLOAD(INSULT_PRIVATE_EVAL_REC_666_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_666_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_666_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_666_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_666_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_666_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_666_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_666_##choice
#define INSULT_PRIVATE_EVAL_REC_666_CONTINUE                   INSULT_PRIVATE_EVAL_REC_667
#define INSULT_PRIVATE_EVAL_REC_666_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_667(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_667_OVERLOAD(INSULT_PRIVATE_EVAL_REC_667_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_667_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_667_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_667_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_667_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_667_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_667_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_667_##choice
#define INSULT_PRIVATE_EVAL_REC_667_CONTINUE                   INSULT_PRIVATE_EVAL_REC_668
#define INSULT_PRIVATE_EVAL_REC_667_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_668(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_668_OVERLOAD(INSULT_PRIVATE_EVAL_REC_668_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_668_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_668_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_668_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_668_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_668_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_668_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_668_##choice
#define INSULT_PRIVATE_EVAL_REC_668_CONTINUE                   INSULT_PRIVATE_EVAL_REC_669
#define INSULT_PRIVATE_EVAL_REC_668_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_669(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_669_OVERLOAD(INSULT_PRIVATE_EVAL_REC_669_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_669_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_669_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_669_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_669_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_669_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_669_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_669_##choice
#define INSULT_PRIVATE_EVAL_REC_669_CONTINUE                   INSULT_PRIVATE_EVAL_REC_670
#define INSULT_PRIVATE_EVAL_REC_669_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_670(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_670_OVERLOAD(INSULT_PRIVATE_EVAL_REC_670_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_670_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_670_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_670_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_670_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_670_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_670_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_670_##choice
#define INSULT_PRIVATE_EVAL_REC_670_CONTINUE                   INSULT_PRIVATE_EVAL_REC_671
#define INSULT_PRIVATE_EVAL_REC_670_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_671(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_671_OVERLOAD(INSULT_PRIVATE_EVAL_REC_671_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_671_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_671_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_671_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_671_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_671_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_671_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_671_##choice
#define INSULT_PRIVATE_EVAL_REC_671_CONTINUE                   INSULT_PRIVATE_EVAL_REC_672
#define INSULT_PRIVATE_EVAL_REC_671_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_672(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_672_OVERLOAD(INSULT_PRIVATE_EVAL_REC_672_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_672_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_672_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_672_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_672_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_672_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_672_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_672_##choice
#define INSULT_PRIVATE_EVAL_REC_672_CONTINUE                   INSULT_PRIVATE_EVAL_REC_673
#define INSULT_PRIVATE_EVAL_REC_672_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_673(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_673_OVERLOAD(INSULT_PRIVATE_EVAL_REC_673_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_673_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_673_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_673_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_673_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_673_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_673_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_673_##choice
#define INSULT_PRIVATE_EVAL_REC_673_CONTINUE                   INSULT_PRIVATE_EVAL_REC_674
#define INSULT_PRIVATE_EVAL_REC_673_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_674(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_674_OVERLOAD(INSULT_PRIVATE_EVAL_REC_674_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_674_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_674_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_674_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_674_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_674_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_674_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_674_##choice
#define INSULT_PRIVATE_EVAL_REC_674_CONTINUE                   INSULT_PRIVATE_EVAL_REC_675
#define INSULT_PRIVATE_EVAL_REC_674_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_675(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_675_OVERLOAD(INSULT_PRIVATE_EVAL_REC_675_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_675_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_675_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_675_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_675_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_675_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_675_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_675_##choice
#define INSULT_PRIVATE_EVAL_REC_675_CONTINUE                   INSULT_PRIVATE_EVAL_REC_676
#define INSULT_PRIVATE_EVAL_REC_675_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_676(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_676_OVERLOAD(INSULT_PRIVATE_EVAL_REC_676_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_676_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_676_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_676_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_676_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_676_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_676_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_676_##choice
#define INSULT_PRIVATE_EVAL_REC_676_CONTINUE                   INSULT_PRIVATE_EVAL_REC_677
#define INSULT_PRIVATE_EVAL_REC_676_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_677(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_677_OVERLOAD(INSULT_PRIVATE_EVAL_REC_677_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_677_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_677_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_677_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_677_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_677_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_677_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_677_##choice
#define INSULT_PRIVATE_EVAL_REC_677_CONTINUE                   INSULT_PRIVATE_EVAL_REC_678
#define INSULT_PRIVATE_EVAL_REC_677_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_678(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_678_OVERLOAD(INSULT_PRIVATE_EVAL_REC_678_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_678_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_678_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_678_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_678_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_678_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_678_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_678_##choice
#define INSULT_PRIVATE_EVAL_REC_678_CONTINUE                   INSULT_PRIVATE_EVAL_REC_679
#define INSULT_PRIVATE_EVAL_REC_678_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_679(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_679_OVERLOAD(INSULT_PRIVATE_EVAL_REC_679_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_679_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_679_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_679_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_679_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_679_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_679_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_679_##choice
#define INSULT_PRIVATE_EVAL_REC_679_CONTINUE                   INSULT_PRIVATE_EVAL_REC_680
#define INSULT_PRIVATE_EVAL_REC_679_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_680(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_680_OVERLOAD(INSULT_PRIVATE_EVAL_REC_680_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_680_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_680_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_680_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_680_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_680_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_680_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_680_##choice
#define INSULT_PRIVATE_EVAL_REC_680_CONTINUE                   INSULT_PRIVATE_EVAL_REC_681
#define INSULT_PRIVATE_EVAL_REC_680_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_681(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_681_OVERLOAD(INSULT_PRIVATE_EVAL_REC_681_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_681_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_681_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_681_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_681_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_681_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_681_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_681_##choice
#define INSULT_PRIVATE_EVAL_REC_681_CONTINUE                   INSULT_PRIVATE_EVAL_REC_682
#define INSULT_PRIVATE_EVAL_REC_681_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_682(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_682_OVERLOAD(INSULT_PRIVATE_EVAL_REC_682_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_682_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_682_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_682_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_682_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_682_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_682_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_682_##choice
#define INSULT_PRIVATE_EVAL_REC_682_CONTINUE                   INSULT_PRIVATE_EVAL_REC_683
#define INSULT_PRIVATE_EVAL_REC_682_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_683(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_683_OVERLOAD(INSULT_PRIVATE_EVAL_REC_683_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_683_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_683_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_683_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_683_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_683_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_683_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_683_##choice
#define INSULT_PRIVATE_EVAL_REC_683_CONTINUE                   INSULT_PRIVATE_EVAL_REC_684
#define INSULT_PRIVATE_EVAL_REC_683_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_684(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_684_OVERLOAD(INSULT_PRIVATE_EVAL_REC_684_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_684_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_684_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_684_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_684_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_684_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_684_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_684_##choice
#define INSULT_PRIVATE_EVAL_REC_684_CONTINUE                   INSULT_PRIVATE_EVAL_REC_685
#define INSULT_PRIVATE_EVAL_REC_684_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_685(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_685_OVERLOAD(INSULT_PRIVATE_EVAL_REC_685_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_685_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_685_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_685_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_685_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_685_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_685_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_685_##choice
#define INSULT_PRIVATE_EVAL_REC_685_CONTINUE                   INSULT_PRIVATE_EVAL_REC_686
#define INSULT_PRIVATE_EVAL_REC_685_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_686(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_686_OVERLOAD(INSULT_PRIVATE_EVAL_REC_686_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_686_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_686_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_686_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_686_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_686_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_686_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_686_##choice
#define INSULT_PRIVATE_EVAL_REC_686_CONTINUE                   INSULT_PRIVATE_EVAL_REC_687
#define INSULT_PRIVATE_EVAL_REC_686_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_687(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_687_OVERLOAD(INSULT_PRIVATE_EVAL_REC_687_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_687_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_687_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_687_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_687_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_687_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_687_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_687_##choice
#define INSULT_PRIVATE_EVAL_REC_687_CONTINUE                   INSULT_PRIVATE_EVAL_REC_688
#define INSULT_PRIVATE_EVAL_REC_687_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_688(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_688_OVERLOAD(INSULT_PRIVATE_EVAL_REC_688_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_688_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_688_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_688_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_688_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_688_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_688_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_688_##choice
#define INSULT_PRIVATE_EVAL_REC_688_CONTINUE                   INSULT_PRIVATE_EVAL_REC_689
#define INSULT_PRIVATE_EVAL_REC_688_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_689(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_689_OVERLOAD(INSULT_PRIVATE_EVAL_REC_689_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_689_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_689_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_689_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_689_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_689_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_689_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_689_##choice
#define INSULT_PRIVATE_EVAL_REC_689_CONTINUE                   INSULT_PRIVATE_EVAL_REC_690
#define INSULT_PRIVATE_EVAL_REC_689_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_690(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_690_OVERLOAD(INSULT_PRIVATE_EVAL_REC_690_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_690_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_690_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_690_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_690_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_690_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_690_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_690_##choice
#define INSULT_PRIVATE_EVAL_REC_690_CONTINUE                   INSULT_PRIVATE_EVAL_REC_691
#define INSULT_PRIVATE_EVAL_REC_690_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_691(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_691_OVERLOAD(INSULT_PRIVATE_EVAL_REC_691_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_691_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_691_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_691_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_691_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_691_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_691_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_691_##choice
#define INSULT_PRIVATE_EVAL_REC_691_CONTINUE                   INSULT_PRIVATE_EVAL_REC_692
#define INSULT_PRIVATE_EVAL_REC_691_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_692(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_692_OVERLOAD(INSULT_PRIVATE_EVAL_REC_692_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_692_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_692_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_692_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_692_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_692_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_692_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_692_##choice
#define INSULT_PRIVATE_EVAL_REC_692_CONTINUE                   INSULT_PRIVATE_EVAL_REC_693
#define INSULT_PRIVATE_EVAL_REC_692_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_693(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_693_OVERLOAD(INSULT_PRIVATE_EVAL_REC_693_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_693_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_693_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_693_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_693_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_693_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_693_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_693_##choice
#define INSULT_PRIVATE_EVAL_REC_693_CONTINUE                   INSULT_PRIVATE_EVAL_REC_694
#define INSULT_PRIVATE_EVAL_REC_693_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_694(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_694_OVERLOAD(INSULT_PRIVATE_EVAL_REC_694_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_694_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_694_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_694_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_694_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_694_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_694_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_694_##choice
#define INSULT_PRIVATE_EVAL_REC_694_CONTINUE                   INSULT_PRIVATE_EVAL_REC_695
#define INSULT_PRIVATE_EVAL_REC_694_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_695(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_695_OVERLOAD(INSULT_PRIVATE_EVAL_REC_695_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_695_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_695_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_695_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_695_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_695_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_695_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_695_##choice
#define INSULT_PRIVATE_EVAL_REC_695_CONTINUE                   INSULT_PRIVATE_EVAL_REC_696
#define INSULT_PRIVATE_EVAL_REC_695_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_696(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_696_OVERLOAD(INSULT_PRIVATE_EVAL_REC_696_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_696_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_696_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_696_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_696_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_696_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_696_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_696_##choice
#define INSULT_PRIVATE_EVAL_REC_696_CONTINUE                   INSULT_PRIVATE_EVAL_REC_697
#define INSULT_PRIVATE_EVAL_REC_696_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_697(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_697_OVERLOAD(INSULT_PRIVATE_EVAL_REC_697_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_697_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_697_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_697_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_697_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_697_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_697_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_697_##choice
#define INSULT_PRIVATE_EVAL_REC_697_CONTINUE                   INSULT_PRIVATE_EVAL_REC_698
#define INSULT_PRIVATE_EVAL_REC_697_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_698(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_698_OVERLOAD(INSULT_PRIVATE_EVAL_REC_698_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_698_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_698_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_698_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_698_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_698_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_698_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_698_##choice
#define INSULT_PRIVATE_EVAL_REC_698_CONTINUE                   INSULT_PRIVATE_EVAL_REC_699
#define INSULT_PRIVATE_EVAL_REC_698_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_699(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_699_OVERLOAD(INSULT_PRIVATE_EVAL_REC_699_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_699_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_699_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_699_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_699_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_699_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_699_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_699_##choice
#define INSULT_PRIVATE_EVAL_REC_699_CONTINUE                   INSULT_PRIVATE_EVAL_REC_700
#define INSULT_PRIVATE_EVAL_REC_699_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_700(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_700_OVERLOAD(INSULT_PRIVATE_EVAL_REC_700_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_700_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_700_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_700_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_700_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_700_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_700_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_700_##choice
#define INSULT_PRIVATE_EVAL_REC_700_CONTINUE                   INSULT_PRIVATE_EVAL_REC_701
#define INSULT_PRIVATE_EVAL_REC_700_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_701(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_701_OVERLOAD(INSULT_PRIVATE_EVAL_REC_701_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_701_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_701_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_701_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_701_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_701_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_701_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_701_##choice
#define INSULT_PRIVATE_EVAL_REC_701_CONTINUE                   INSULT_PRIVATE_EVAL_REC_702
#define INSULT_PRIVATE_EVAL_REC_701_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_702(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_702_OVERLOAD(INSULT_PRIVATE_EVAL_REC_702_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_702_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_702_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_702_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_702_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_702_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_702_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_702_##choice
#define INSULT_PRIVATE_EVAL_REC_702_CONTINUE                   INSULT_PRIVATE_EVAL_REC_703
#define INSULT_PRIVATE_EVAL_REC_702_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_703(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_703_OVERLOAD(INSULT_PRIVATE_EVAL_REC_703_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_703_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_703_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_703_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_703_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_703_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_703_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_703_##choice
#define INSULT_PRIVATE_EVAL_REC_703_CONTINUE                   INSULT_PRIVATE_EVAL_REC_704
#define INSULT_PRIVATE_EVAL_REC_703_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_704(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_704_OVERLOAD(INSULT_PRIVATE_EVAL_REC_704_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_704_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_704_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_704_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_704_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_704_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_704_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_704_##choice
#define INSULT_PRIVATE_EVAL_REC_704_CONTINUE                   INSULT_PRIVATE_EVAL_REC_705
#define INSULT_PRIVATE_EVAL_REC_704_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_705(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_705_OVERLOAD(INSULT_PRIVATE_EVAL_REC_705_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_705_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_705_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_705_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_705_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_705_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_705_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_705_##choice
#define INSULT_PRIVATE_EVAL_REC_705_CONTINUE                   INSULT_PRIVATE_EVAL_REC_706
#define INSULT_PRIVATE_EVAL_REC_705_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_706(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_706_OVERLOAD(INSULT_PRIVATE_EVAL_REC_706_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_706_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_706_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_706_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_706_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_706_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_706_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_706_##choice
#define INSULT_PRIVATE_EVAL_REC_706_CONTINUE                   INSULT_PRIVATE_EVAL_REC_707
#define INSULT_PRIVATE_EVAL_REC_706_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_707(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_707_OVERLOAD(INSULT_PRIVATE_EVAL_REC_707_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_707_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_707_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_707_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_707_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_707_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_707_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_707_##choice
#define INSULT_PRIVATE_EVAL_REC_707_CONTINUE                   INSULT_PRIVATE_EVAL_REC_708
#define INSULT_PRIVATE_EVAL_REC_707_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_708(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_708_OVERLOAD(INSULT_PRIVATE_EVAL_REC_708_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_708_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_708_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_708_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_708_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_708_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_708_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_708_##choice
#define INSULT_PRIVATE_EVAL_REC_708_CONTINUE                   INSULT_PRIVATE_EVAL_REC_709
#define INSULT_PRIVATE_EVAL_REC_708_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_709(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_709_OVERLOAD(INSULT_PRIVATE_EVAL_REC_709_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_709_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_709_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_709_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_709_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_709_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_709_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_709_##choice
#define INSULT_PRIVATE_EVAL_REC_709_CONTINUE                   INSULT_PRIVATE_EVAL_REC_710
#define INSULT_PRIVATE_EVAL_REC_709_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_710(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_710_OVERLOAD(INSULT_PRIVATE_EVAL_REC_710_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_710_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_710_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_710_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_710_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_710_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_710_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_710_##choice
#define INSULT_PRIVATE_EVAL_REC_710_CONTINUE                   INSULT_PRIVATE_EVAL_REC_711
#define INSULT_PRIVATE_EVAL_REC_710_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_711(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_711_OVERLOAD(INSULT_PRIVATE_EVAL_REC_711_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_711_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_711_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_711_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_711_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_711_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_711_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_711_##choice
#define INSULT_PRIVATE_EVAL_REC_711_CONTINUE                   INSULT_PRIVATE_EVAL_REC_712
#define INSULT_PRIVATE_EVAL_REC_711_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_712(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_712_OVERLOAD(INSULT_PRIVATE_EVAL_REC_712_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_712_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_712_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_712_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_712_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_712_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_712_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_712_##choice
#define INSULT_PRIVATE_EVAL_REC_712_CONTINUE                   INSULT_PRIVATE_EVAL_REC_713
#define INSULT_PRIVATE_EVAL_REC_712_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_713(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_713_OVERLOAD(INSULT_PRIVATE_EVAL_REC_713_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_713_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_713_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_713_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_713_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_713_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_713_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_713_##choice
#define INSULT_PRIVATE_EVAL_REC_713_CONTINUE                   INSULT_PRIVATE_EVAL_REC_714
#define INSULT_PRIVATE_EVAL_REC_713_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_714(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_714_OVERLOAD(INSULT_PRIVATE_EVAL_REC_714_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_714_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_714_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_714_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_714_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_714_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_714_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_714_##choice
#define INSULT_PRIVATE_EVAL_REC_714_CONTINUE                   INSULT_PRIVATE_EVAL_REC_715
#define INSULT_PRIVATE_EVAL_REC_714_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_715(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_715_OVERLOAD(INSULT_PRIVATE_EVAL_REC_715_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_715_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_715_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_715_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_715_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_715_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_715_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_715_##choice
#define INSULT_PRIVATE_EVAL_REC_715_CONTINUE                   INSULT_PRIVATE_EVAL_REC_716
#define INSULT_PRIVATE_EVAL_REC_715_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_716(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_716_OVERLOAD(INSULT_PRIVATE_EVAL_REC_716_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_716_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_716_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_716_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_716_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_716_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_716_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_716_##choice
#define INSULT_PRIVATE_EVAL_REC_716_CONTINUE                   INSULT_PRIVATE_EVAL_REC_717
#define INSULT_PRIVATE_EVAL_REC_716_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_717(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_717_OVERLOAD(INSULT_PRIVATE_EVAL_REC_717_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_717_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_717_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_717_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_717_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_717_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_717_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_717_##choice
#define INSULT_PRIVATE_EVAL_REC_717_CONTINUE                   INSULT_PRIVATE_EVAL_REC_718
#define INSULT_PRIVATE_EVAL_REC_717_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_718(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_718_OVERLOAD(INSULT_PRIVATE_EVAL_REC_718_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_718_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_718_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_718_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_718_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_718_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_718_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_718_##choice
#define INSULT_PRIVATE_EVAL_REC_718_CONTINUE                   INSULT_PRIVATE_EVAL_REC_719
#define INSULT_PRIVATE_EVAL_REC_718_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_719(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_719_OVERLOAD(INSULT_PRIVATE_EVAL_REC_719_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_719_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_719_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_719_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_719_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_719_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_719_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_719_##choice
#define INSULT_PRIVATE_EVAL_REC_719_CONTINUE                   INSULT_PRIVATE_EVAL_REC_720
#define INSULT_PRIVATE_EVAL_REC_719_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_720(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_720_OVERLOAD(INSULT_PRIVATE_EVAL_REC_720_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_720_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_720_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_720_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_720_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_720_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_720_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_720_##choice
#define INSULT_PRIVATE_EVAL_REC_720_CONTINUE                   INSULT_PRIVATE_EVAL_REC_721
#define INSULT_PRIVATE_EVAL_REC_720_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_721(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_721_OVERLOAD(INSULT_PRIVATE_EVAL_REC_721_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_721_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_721_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_721_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_721_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_721_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_721_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_721_##choice
#define INSULT_PRIVATE_EVAL_REC_721_CONTINUE                   INSULT_PRIVATE_EVAL_REC_722
#define INSULT_PRIVATE_EVAL_REC_721_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_722(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_722_OVERLOAD(INSULT_PRIVATE_EVAL_REC_722_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_722_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_722_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_722_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_722_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_722_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_722_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_722_##choice
#define INSULT_PRIVATE_EVAL_REC_722_CONTINUE                   INSULT_PRIVATE_EVAL_REC_723
#define INSULT_PRIVATE_EVAL_REC_722_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_723(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_723_OVERLOAD(INSULT_PRIVATE_EVAL_REC_723_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_723_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_723_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_723_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_723_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_723_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_723_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_723_##choice
#define INSULT_PRIVATE_EVAL_REC_723_CONTINUE                   INSULT_PRIVATE_EVAL_REC_724
#define INSULT_PRIVATE_EVAL_REC_723_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_724(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_724_OVERLOAD(INSULT_PRIVATE_EVAL_REC_724_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_724_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_724_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_724_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_724_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_724_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_724_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_724_##choice
#define INSULT_PRIVATE_EVAL_REC_724_CONTINUE                   INSULT_PRIVATE_EVAL_REC_725
#define INSULT_PRIVATE_EVAL_REC_724_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_725(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_725_OVERLOAD(INSULT_PRIVATE_EVAL_REC_725_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_725_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_725_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_725_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_725_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_725_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_725_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_725_##choice
#define INSULT_PRIVATE_EVAL_REC_725_CONTINUE                   INSULT_PRIVATE_EVAL_REC_726
#define INSULT_PRIVATE_EVAL_REC_725_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_726(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_726_OVERLOAD(INSULT_PRIVATE_EVAL_REC_726_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_726_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_726_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_726_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_726_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_726_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_726_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_726_##choice
#define INSULT_PRIVATE_EVAL_REC_726_CONTINUE                   INSULT_PRIVATE_EVAL_REC_727
#define INSULT_PRIVATE_EVAL_REC_726_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_727(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_727_OVERLOAD(INSULT_PRIVATE_EVAL_REC_727_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_727_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_727_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_727_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_727_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_727_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_727_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_727_##choice
#define INSULT_PRIVATE_EVAL_REC_727_CONTINUE                   INSULT_PRIVATE_EVAL_REC_728
#define INSULT_PRIVATE_EVAL_REC_727_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_728(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_728_OVERLOAD(INSULT_PRIVATE_EVAL_REC_728_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_728_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_728_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_728_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_728_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_728_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_728_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_728_##choice
#define INSULT_PRIVATE_EVAL_REC_728_CONTINUE                   INSULT_PRIVATE_EVAL_REC_729
#define INSULT_PRIVATE_EVAL_REC_728_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_729(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_729_OVERLOAD(INSULT_PRIVATE_EVAL_REC_729_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_729_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_729_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_729_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_729_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_729_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_729_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_729_##choice
#define INSULT_PRIVATE_EVAL_REC_729_CONTINUE                   INSULT_PRIVATE_EVAL_REC_730
#define INSULT_PRIVATE_EVAL_REC_729_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_730(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_730_OVERLOAD(INSULT_PRIVATE_EVAL_REC_730_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_730_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_730_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_730_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_730_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_730_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_730_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_730_##choice
#define INSULT_PRIVATE_EVAL_REC_730_CONTINUE                   INSULT_PRIVATE_EVAL_REC_731
#define INSULT_PRIVATE_EVAL_REC_730_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_731(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_731_OVERLOAD(INSULT_PRIVATE_EVAL_REC_731_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_731_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_731_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_731_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_731_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_731_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_731_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_731_##choice
#define INSULT_PRIVATE_EVAL_REC_731_CONTINUE                   INSULT_PRIVATE_EVAL_REC_732
#define INSULT_PRIVATE_EVAL_REC_731_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_732(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_732_OVERLOAD(INSULT_PRIVATE_EVAL_REC_732_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_732_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_732_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_732_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_732_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_732_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_732_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_732_##choice
#define INSULT_PRIVATE_EVAL_REC_732_CONTINUE                   INSULT_PRIVATE_EVAL_REC_733
#define INSULT_PRIVATE_EVAL_REC_732_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_733(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_733_OVERLOAD(INSULT_PRIVATE_EVAL_REC_733_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_733_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_733_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_733_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_733_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_733_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_733_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_733_##choice
#define INSULT_PRIVATE_EVAL_REC_733_CONTINUE                   INSULT_PRIVATE_EVAL_REC_734
#define INSULT_PRIVATE_EVAL_REC_733_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_734(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_734_OVERLOAD(INSULT_PRIVATE_EVAL_REC_734_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_734_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_734_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_734_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_734_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_734_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_734_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_734_##choice
#define INSULT_PRIVATE_EVAL_REC_734_CONTINUE                   INSULT_PRIVATE_EVAL_REC_735
#define INSULT_PRIVATE_EVAL_REC_734_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_735(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_735_OVERLOAD(INSULT_PRIVATE_EVAL_REC_735_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_735_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_735_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_735_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_735_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_735_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_735_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_735_##choice
#define INSULT_PRIVATE_EVAL_REC_735_CONTINUE                   INSULT_PRIVATE_EVAL_REC_736
#define INSULT_PRIVATE_EVAL_REC_735_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_736(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_736_OVERLOAD(INSULT_PRIVATE_EVAL_REC_736_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_736_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_736_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_736_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_736_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_736_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_736_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_736_##choice
#define INSULT_PRIVATE_EVAL_REC_736_CONTINUE                   INSULT_PRIVATE_EVAL_REC_737
#define INSULT_PRIVATE_EVAL_REC_736_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_737(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_737_OVERLOAD(INSULT_PRIVATE_EVAL_REC_737_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_737_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_737_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_737_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_737_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_737_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_737_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_737_##choice
#define INSULT_PRIVATE_EVAL_REC_737_CONTINUE                   INSULT_PRIVATE_EVAL_REC_738
#define INSULT_PRIVATE_EVAL_REC_737_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_738(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_738_OVERLOAD(INSULT_PRIVATE_EVAL_REC_738_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_738_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_738_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_738_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_738_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_738_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_738_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_738_##choice
#define INSULT_PRIVATE_EVAL_REC_738_CONTINUE                   INSULT_PRIVATE_EVAL_REC_739
#define INSULT_PRIVATE_EVAL_REC_738_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_739(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_739_OVERLOAD(INSULT_PRIVATE_EVAL_REC_739_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_739_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_739_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_739_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_739_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_739_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_739_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_739_##choice
#define INSULT_PRIVATE_EVAL_REC_739_CONTINUE                   INSULT_PRIVATE_EVAL_REC_740
#define INSULT_PRIVATE_EVAL_REC_739_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_740(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_740_OVERLOAD(INSULT_PRIVATE_EVAL_REC_740_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_740_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_740_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_740_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_740_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_740_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_740_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_740_##choice
#define INSULT_PRIVATE_EVAL_REC_740_CONTINUE                   INSULT_PRIVATE_EVAL_REC_741
#define INSULT_PRIVATE_EVAL_REC_740_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_741(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_741_OVERLOAD(INSULT_PRIVATE_EVAL_REC_741_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_741_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_741_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_741_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_741_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_741_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_741_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_741_##choice
#define INSULT_PRIVATE_EVAL_REC_741_CONTINUE                   INSULT_PRIVATE_EVAL_REC_742
#define INSULT_PRIVATE_EVAL_REC_741_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_742(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_742_OVERLOAD(INSULT_PRIVATE_EVAL_REC_742_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_742_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_742_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_742_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_742_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_742_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_742_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_742_##choice
#define INSULT_PRIVATE_EVAL_REC_742_CONTINUE                   INSULT_PRIVATE_EVAL_REC_743
#define INSULT_PRIVATE_EVAL_REC_742_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_743(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_743_OVERLOAD(INSULT_PRIVATE_EVAL_REC_743_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_743_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_743_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_743_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_743_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_743_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_743_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_743_##choice
#define INSULT_PRIVATE_EVAL_REC_743_CONTINUE                   INSULT_PRIVATE_EVAL_REC_744
#define INSULT_PRIVATE_EVAL_REC_743_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_744(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_744_OVERLOAD(INSULT_PRIVATE_EVAL_REC_744_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_744_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_744_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_744_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_744_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_744_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_744_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_744_##choice
#define INSULT_PRIVATE_EVAL_REC_744_CONTINUE                   INSULT_PRIVATE_EVAL_REC_745
#define INSULT_PRIVATE_EVAL_REC_744_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_745(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_745_OVERLOAD(INSULT_PRIVATE_EVAL_REC_745_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_745_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_745_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_745_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_745_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_745_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_745_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_745_##choice
#define INSULT_PRIVATE_EVAL_REC_745_CONTINUE                   INSULT_PRIVATE_EVAL_REC_746
#define INSULT_PRIVATE_EVAL_REC_745_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_746(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_746_OVERLOAD(INSULT_PRIVATE_EVAL_REC_746_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_746_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_746_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_746_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_746_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_746_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_746_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_746_##choice
#define INSULT_PRIVATE_EVAL_REC_746_CONTINUE                   INSULT_PRIVATE_EVAL_REC_747
#define INSULT_PRIVATE_EVAL_REC_746_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_747(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_747_OVERLOAD(INSULT_PRIVATE_EVAL_REC_747_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_747_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_747_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_747_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_747_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_747_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_747_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_747_##choice
#define INSULT_PRIVATE_EVAL_REC_747_CONTINUE                   INSULT_PRIVATE_EVAL_REC_748
#define INSULT_PRIVATE_EVAL_REC_747_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_748(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_748_OVERLOAD(INSULT_PRIVATE_EVAL_REC_748_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_748_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_748_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_748_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_748_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_748_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_748_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_748_##choice
#define INSULT_PRIVATE_EVAL_REC_748_CONTINUE                   INSULT_PRIVATE_EVAL_REC_749
#define INSULT_PRIVATE_EVAL_REC_748_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_749(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_749_OVERLOAD(INSULT_PRIVATE_EVAL_REC_749_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_749_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_749_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_749_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_749_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_749_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_749_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_749_##choice
#define INSULT_PRIVATE_EVAL_REC_749_CONTINUE                   INSULT_PRIVATE_EVAL_REC_750
#define INSULT_PRIVATE_EVAL_REC_749_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_750(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_750_OVERLOAD(INSULT_PRIVATE_EVAL_REC_750_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_750_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_750_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_750_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_750_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_750_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_750_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_750_##choice
#define INSULT_PRIVATE_EVAL_REC_750_CONTINUE                   INSULT_PRIVATE_EVAL_REC_751
#define INSULT_PRIVATE_EVAL_REC_750_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_751(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_751_OVERLOAD(INSULT_PRIVATE_EVAL_REC_751_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_751_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_751_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_751_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_751_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_751_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_751_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_751_##choice
#define INSULT_PRIVATE_EVAL_REC_751_CONTINUE                   INSULT_PRIVATE_EVAL_REC_752
#define INSULT_PRIVATE_EVAL_REC_751_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_752(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_752_OVERLOAD(INSULT_PRIVATE_EVAL_REC_752_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_752_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_752_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_752_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_752_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_752_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_752_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_752_##choice
#define INSULT_PRIVATE_EVAL_REC_752_CONTINUE                   INSULT_PRIVATE_EVAL_REC_753
#define INSULT_PRIVATE_EVAL_REC_752_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_753(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_753_OVERLOAD(INSULT_PRIVATE_EVAL_REC_753_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_753_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_753_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_753_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_753_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_753_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_753_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_753_##choice
#define INSULT_PRIVATE_EVAL_REC_753_CONTINUE                   INSULT_PRIVATE_EVAL_REC_754
#define INSULT_PRIVATE_EVAL_REC_753_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_754(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_754_OVERLOAD(INSULT_PRIVATE_EVAL_REC_754_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_754_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_754_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_754_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_754_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_754_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_754_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_754_##choice
#define INSULT_PRIVATE_EVAL_REC_754_CONTINUE                   INSULT_PRIVATE_EVAL_REC_755
#define INSULT_PRIVATE_EVAL_REC_754_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_755(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_755_OVERLOAD(INSULT_PRIVATE_EVAL_REC_755_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_755_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_755_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_755_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_755_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_755_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_755_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_755_##choice
#define INSULT_PRIVATE_EVAL_REC_755_CONTINUE                   INSULT_PRIVATE_EVAL_REC_756
#define INSULT_PRIVATE_EVAL_REC_755_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_756(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_756_OVERLOAD(INSULT_PRIVATE_EVAL_REC_756_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_756_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_756_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_756_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_756_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_756_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_756_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_756_##choice
#define INSULT_PRIVATE_EVAL_REC_756_CONTINUE                   INSULT_PRIVATE_EVAL_REC_757
#define INSULT_PRIVATE_EVAL_REC_756_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_757(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_757_OVERLOAD(INSULT_PRIVATE_EVAL_REC_757_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_757_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_757_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_757_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_757_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_757_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_757_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_757_##choice
#define INSULT_PRIVATE_EVAL_REC_757_CONTINUE                   INSULT_PRIVATE_EVAL_REC_758
#define INSULT_PRIVATE_EVAL_REC_757_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_758(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_758_OVERLOAD(INSULT_PRIVATE_EVAL_REC_758_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_758_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_758_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_758_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_758_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_758_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_758_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_758_##choice
#define INSULT_PRIVATE_EVAL_REC_758_CONTINUE                   INSULT_PRIVATE_EVAL_REC_759
#define INSULT_PRIVATE_EVAL_REC_758_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_759(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_759_OVERLOAD(INSULT_PRIVATE_EVAL_REC_759_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_759_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_759_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_759_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_759_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_759_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_759_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_759_##choice
#define INSULT_PRIVATE_EVAL_REC_759_CONTINUE                   INSULT_PRIVATE_EVAL_REC_760
#define INSULT_PRIVATE_EVAL_REC_759_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_760(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_760_OVERLOAD(INSULT_PRIVATE_EVAL_REC_760_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_760_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_760_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_760_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_760_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_760_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_760_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_760_##choice
#define INSULT_PRIVATE_EVAL_REC_760_CONTINUE                   INSULT_PRIVATE_EVAL_REC_761
#define INSULT_PRIVATE_EVAL_REC_760_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_761(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_761_OVERLOAD(INSULT_PRIVATE_EVAL_REC_761_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_761_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_761_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_761_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_761_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_761_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_761_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_761_##choice
#define INSULT_PRIVATE_EVAL_REC_761_CONTINUE                   INSULT_PRIVATE_EVAL_REC_762
#define INSULT_PRIVATE_EVAL_REC_761_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_762(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_762_OVERLOAD(INSULT_PRIVATE_EVAL_REC_762_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_762_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_762_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_762_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_762_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_762_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_762_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_762_##choice
#define INSULT_PRIVATE_EVAL_REC_762_CONTINUE                   INSULT_PRIVATE_EVAL_REC_763
#define INSULT_PRIVATE_EVAL_REC_762_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_763(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_763_OVERLOAD(INSULT_PRIVATE_EVAL_REC_763_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_763_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_763_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_763_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_763_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_763_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_763_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_763_##choice
#define INSULT_PRIVATE_EVAL_REC_763_CONTINUE                   INSULT_PRIVATE_EVAL_REC_764
#define INSULT_PRIVATE_EVAL_REC_763_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_764(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_764_OVERLOAD(INSULT_PRIVATE_EVAL_REC_764_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_764_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_764_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_764_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_764_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_764_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_764_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_764_##choice
#define INSULT_PRIVATE_EVAL_REC_764_CONTINUE                   INSULT_PRIVATE_EVAL_REC_765
#define INSULT_PRIVATE_EVAL_REC_764_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_765(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_765_OVERLOAD(INSULT_PRIVATE_EVAL_REC_765_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_765_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_765_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_765_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_765_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_765_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_765_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_765_##choice
#define INSULT_PRIVATE_EVAL_REC_765_CONTINUE                   INSULT_PRIVATE_EVAL_REC_766
#define INSULT_PRIVATE_EVAL_REC_765_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_766(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_766_OVERLOAD(INSULT_PRIVATE_EVAL_REC_766_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_766_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_766_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_766_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_766_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_766_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_766_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_766_##choice
#define INSULT_PRIVATE_EVAL_REC_766_CONTINUE                   INSULT_PRIVATE_EVAL_REC_767
#define INSULT_PRIVATE_EVAL_REC_766_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_767(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_767_OVERLOAD(INSULT_PRIVATE_EVAL_REC_767_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_767_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_767_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_767_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_767_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_767_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_767_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_767_##choice
#define INSULT_PRIVATE_EVAL_REC_767_CONTINUE                   INSULT_PRIVATE_EVAL_REC_768
#define INSULT_PRIVATE_EVAL_REC_767_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_768(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_768_OVERLOAD(INSULT_PRIVATE_EVAL_REC_768_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_768_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_768_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_768_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_768_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_768_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_768_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_768_##choice
#define INSULT_PRIVATE_EVAL_REC_768_CONTINUE                   INSULT_PRIVATE_EVAL_REC_769
#define INSULT_PRIVATE_EVAL_REC_768_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_769(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_769_OVERLOAD(INSULT_PRIVATE_EVAL_REC_769_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_769_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_769_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_769_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_769_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_769_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_769_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_769_##choice
#define INSULT_PRIVATE_EVAL_REC_769_CONTINUE                   INSULT_PRIVATE_EVAL_REC_770
#define INSULT_PRIVATE_EVAL_REC_769_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_770(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_770_OVERLOAD(INSULT_PRIVATE_EVAL_REC_770_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_770_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_770_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_770_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_770_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_770_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_770_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_770_##choice
#define INSULT_PRIVATE_EVAL_REC_770_CONTINUE                   INSULT_PRIVATE_EVAL_REC_771
#define INSULT_PRIVATE_EVAL_REC_770_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_771(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_771_OVERLOAD(INSULT_PRIVATE_EVAL_REC_771_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_771_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_771_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_771_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_771_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_771_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_771_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_771_##choice
#define INSULT_PRIVATE_EVAL_REC_771_CONTINUE                   INSULT_PRIVATE_EVAL_REC_772
#define INSULT_PRIVATE_EVAL_REC_771_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_772(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_772_OVERLOAD(INSULT_PRIVATE_EVAL_REC_772_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_772_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_772_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_772_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_772_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_772_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_772_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_772_##choice
#define INSULT_PRIVATE_EVAL_REC_772_CONTINUE                   INSULT_PRIVATE_EVAL_REC_773
#define INSULT_PRIVATE_EVAL_REC_772_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_773(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_773_OVERLOAD(INSULT_PRIVATE_EVAL_REC_773_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_773_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_773_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_773_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_773_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_773_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_773_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_773_##choice
#define INSULT_PRIVATE_EVAL_REC_773_CONTINUE                   INSULT_PRIVATE_EVAL_REC_774
#define INSULT_PRIVATE_EVAL_REC_773_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_774(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_774_OVERLOAD(INSULT_PRIVATE_EVAL_REC_774_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_774_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_774_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_774_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_774_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_774_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_774_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_774_##choice
#define INSULT_PRIVATE_EVAL_REC_774_CONTINUE                   INSULT_PRIVATE_EVAL_REC_775
#define INSULT_PRIVATE_EVAL_REC_774_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_775(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_775_OVERLOAD(INSULT_PRIVATE_EVAL_REC_775_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_775_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_775_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_775_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_775_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_775_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_775_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_775_##choice
#define INSULT_PRIVATE_EVAL_REC_775_CONTINUE                   INSULT_PRIVATE_EVAL_REC_776
#define INSULT_PRIVATE_EVAL_REC_775_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_776(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_776_OVERLOAD(INSULT_PRIVATE_EVAL_REC_776_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_776_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_776_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_776_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_776_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_776_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_776_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_776_##choice
#define INSULT_PRIVATE_EVAL_REC_776_CONTINUE                   INSULT_PRIVATE_EVAL_REC_777
#define INSULT_PRIVATE_EVAL_REC_776_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_777(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_777_OVERLOAD(INSULT_PRIVATE_EVAL_REC_777_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_777_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_777_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_777_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_777_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_777_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_777_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_777_##choice
#define INSULT_PRIVATE_EVAL_REC_777_CONTINUE                   INSULT_PRIVATE_EVAL_REC_778
#define INSULT_PRIVATE_EVAL_REC_777_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_778(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_778_OVERLOAD(INSULT_PRIVATE_EVAL_REC_778_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_778_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_778_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_778_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_778_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_778_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_778_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_778_##choice
#define INSULT_PRIVATE_EVAL_REC_778_CONTINUE                   INSULT_PRIVATE_EVAL_REC_779
#define INSULT_PRIVATE_EVAL_REC_778_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_779(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_779_OVERLOAD(INSULT_PRIVATE_EVAL_REC_779_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_779_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_779_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_779_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_779_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_779_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_779_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_779_##choice
#define INSULT_PRIVATE_EVAL_REC_779_CONTINUE                   INSULT_PRIVATE_EVAL_REC_780
#define INSULT_PRIVATE_EVAL_REC_779_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_780(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_780_OVERLOAD(INSULT_PRIVATE_EVAL_REC_780_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_780_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_780_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_780_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_780_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_780_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_780_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_780_##choice
#define INSULT_PRIVATE_EVAL_REC_780_CONTINUE                   INSULT_PRIVATE_EVAL_REC_781
#define INSULT_PRIVATE_EVAL_REC_780_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_781(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_781_OVERLOAD(INSULT_PRIVATE_EVAL_REC_781_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_781_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_781_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_781_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_781_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_781_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_781_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_781_##choice
#define INSULT_PRIVATE_EVAL_REC_781_CONTINUE                   INSULT_PRIVATE_EVAL_REC_782
#define INSULT_PRIVATE_EVAL_REC_781_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_782(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_782_OVERLOAD(INSULT_PRIVATE_EVAL_REC_782_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_782_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_782_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_782_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_782_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_782_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_782_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_782_##choice
#define INSULT_PRIVATE_EVAL_REC_782_CONTINUE                   INSULT_PRIVATE_EVAL_REC_783
#define INSULT_PRIVATE_EVAL_REC_782_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_783(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_783_OVERLOAD(INSULT_PRIVATE_EVAL_REC_783_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_783_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_783_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_783_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_783_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_783_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_783_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_783_##choice
#define INSULT_PRIVATE_EVAL_REC_783_CONTINUE                   INSULT_PRIVATE_EVAL_REC_784
#define INSULT_PRIVATE_EVAL_REC_783_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_784(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_784_OVERLOAD(INSULT_PRIVATE_EVAL_REC_784_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_784_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_784_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_784_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_784_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_784_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_784_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_784_##choice
#define INSULT_PRIVATE_EVAL_REC_784_CONTINUE                   INSULT_PRIVATE_EVAL_REC_785
#define INSULT_PRIVATE_EVAL_REC_784_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_785(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_785_OVERLOAD(INSULT_PRIVATE_EVAL_REC_785_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_785_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_785_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_785_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_785_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_785_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_785_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_785_##choice
#define INSULT_PRIVATE_EVAL_REC_785_CONTINUE                   INSULT_PRIVATE_EVAL_REC_786
#define INSULT_PRIVATE_EVAL_REC_785_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_786(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_786_OVERLOAD(INSULT_PRIVATE_EVAL_REC_786_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_786_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_786_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_786_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_786_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_786_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_786_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_786_##choice
#define INSULT_PRIVATE_EVAL_REC_786_CONTINUE                   INSULT_PRIVATE_EVAL_REC_787
#define INSULT_PRIVATE_EVAL_REC_786_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_787(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_787_OVERLOAD(INSULT_PRIVATE_EVAL_REC_787_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_787_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_787_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_787_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_787_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_787_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_787_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_787_##choice
#define INSULT_PRIVATE_EVAL_REC_787_CONTINUE                   INSULT_PRIVATE_EVAL_REC_788
#define INSULT_PRIVATE_EVAL_REC_787_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_788(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_788_OVERLOAD(INSULT_PRIVATE_EVAL_REC_788_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_788_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_788_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_788_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_788_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_788_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_788_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_788_##choice
#define INSULT_PRIVATE_EVAL_REC_788_CONTINUE                   INSULT_PRIVATE_EVAL_REC_789
#define INSULT_PRIVATE_EVAL_REC_788_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_789(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_789_OVERLOAD(INSULT_PRIVATE_EVAL_REC_789_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_789_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_789_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_789_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_789_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_789_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_789_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_789_##choice
#define INSULT_PRIVATE_EVAL_REC_789_CONTINUE                   INSULT_PRIVATE_EVAL_REC_790
#define INSULT_PRIVATE_EVAL_REC_789_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_790(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_790_OVERLOAD(INSULT_PRIVATE_EVAL_REC_790_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_790_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_790_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_790_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_790_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_790_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_790_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_790_##choice
#define INSULT_PRIVATE_EVAL_REC_790_CONTINUE                   INSULT_PRIVATE_EVAL_REC_791
#define INSULT_PRIVATE_EVAL_REC_790_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_791(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_791_OVERLOAD(INSULT_PRIVATE_EVAL_REC_791_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_791_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_791_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_791_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_791_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_791_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_791_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_791_##choice
#define INSULT_PRIVATE_EVAL_REC_791_CONTINUE                   INSULT_PRIVATE_EVAL_REC_792
#define INSULT_PRIVATE_EVAL_REC_791_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_792(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_792_OVERLOAD(INSULT_PRIVATE_EVAL_REC_792_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_792_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_792_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_792_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_792_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_792_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_792_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_792_##choice
#define INSULT_PRIVATE_EVAL_REC_792_CONTINUE                   INSULT_PRIVATE_EVAL_REC_793
#define INSULT_PRIVATE_EVAL_REC_792_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_793(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_793_OVERLOAD(INSULT_PRIVATE_EVAL_REC_793_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_793_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_793_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_793_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_793_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_793_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_793_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_793_##choice
#define INSULT_PRIVATE_EVAL_REC_793_CONTINUE                   INSULT_PRIVATE_EVAL_REC_794
#define INSULT_PRIVATE_EVAL_REC_793_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_794(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_794_OVERLOAD(INSULT_PRIVATE_EVAL_REC_794_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_794_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_794_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_794_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_794_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_794_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_794_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_794_##choice
#define INSULT_PRIVATE_EVAL_REC_794_CONTINUE                   INSULT_PRIVATE_EVAL_REC_795
#define INSULT_PRIVATE_EVAL_REC_794_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_795(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_795_OVERLOAD(INSULT_PRIVATE_EVAL_REC_795_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_795_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_795_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_795_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_795_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_795_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_795_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_795_##choice
#define INSULT_PRIVATE_EVAL_REC_795_CONTINUE                   INSULT_PRIVATE_EVAL_REC_796
#define INSULT_PRIVATE_EVAL_REC_795_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_796(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_796_OVERLOAD(INSULT_PRIVATE_EVAL_REC_796_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_796_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_796_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_796_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_796_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_796_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_796_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_796_##choice
#define INSULT_PRIVATE_EVAL_REC_796_CONTINUE                   INSULT_PRIVATE_EVAL_REC_797
#define INSULT_PRIVATE_EVAL_REC_796_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_797(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_797_OVERLOAD(INSULT_PRIVATE_EVAL_REC_797_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_797_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_797_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_797_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_797_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_797_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_797_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_797_##choice
#define INSULT_PRIVATE_EVAL_REC_797_CONTINUE                   INSULT_PRIVATE_EVAL_REC_798
#define INSULT_PRIVATE_EVAL_REC_797_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_798(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_798_OVERLOAD(INSULT_PRIVATE_EVAL_REC_798_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_798_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_798_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_798_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_798_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_798_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_798_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_798_##choice
#define INSULT_PRIVATE_EVAL_REC_798_CONTINUE                   INSULT_PRIVATE_EVAL_REC_799
#define INSULT_PRIVATE_EVAL_REC_798_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_799(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_799_OVERLOAD(INSULT_PRIVATE_EVAL_REC_799_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_799_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_799_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_799_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_799_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_799_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_799_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_799_##choice
#define INSULT_PRIVATE_EVAL_REC_799_CONTINUE                   INSULT_PRIVATE_EVAL_REC_800
#define INSULT_PRIVATE_EVAL_REC_799_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_800(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_800_OVERLOAD(INSULT_PRIVATE_EVAL_REC_800_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_800_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_800_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_800_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_800_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_800_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_800_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_800_##choice
#define INSULT_PRIVATE_EVAL_REC_800_CONTINUE                   INSULT_PRIVATE_EVAL_REC_801
#define INSULT_PRIVATE_EVAL_REC_800_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_801(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_801_OVERLOAD(INSULT_PRIVATE_EVAL_REC_801_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_801_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_801_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_801_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_801_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_801_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_801_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_801_##choice
#define INSULT_PRIVATE_EVAL_REC_801_CONTINUE                   INSULT_PRIVATE_EVAL_REC_802
#define INSULT_PRIVATE_EVAL_REC_801_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_802(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_802_OVERLOAD(INSULT_PRIVATE_EVAL_REC_802_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_802_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_802_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_802_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_802_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_802_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_802_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_802_##choice
#define INSULT_PRIVATE_EVAL_REC_802_CONTINUE                   INSULT_PRIVATE_EVAL_REC_803
#define INSULT_PRIVATE_EVAL_REC_802_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_803(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_803_OVERLOAD(INSULT_PRIVATE_EVAL_REC_803_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_803_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_803_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_803_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_803_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_803_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_803_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_803_##choice
#define INSULT_PRIVATE_EVAL_REC_803_CONTINUE                   INSULT_PRIVATE_EVAL_REC_804
#define INSULT_PRIVATE_EVAL_REC_803_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_804(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_804_OVERLOAD(INSULT_PRIVATE_EVAL_REC_804_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_804_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_804_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_804_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_804_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_804_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_804_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_804_##choice
#define INSULT_PRIVATE_EVAL_REC_804_CONTINUE                   INSULT_PRIVATE_EVAL_REC_805
#define INSULT_PRIVATE_EVAL_REC_804_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_805(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_805_OVERLOAD(INSULT_PRIVATE_EVAL_REC_805_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_805_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_805_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_805_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_805_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_805_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_805_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_805_##choice
#define INSULT_PRIVATE_EVAL_REC_805_CONTINUE                   INSULT_PRIVATE_EVAL_REC_806
#define INSULT_PRIVATE_EVAL_REC_805_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_806(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_806_OVERLOAD(INSULT_PRIVATE_EVAL_REC_806_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_806_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_806_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_806_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_806_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_806_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_806_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_806_##choice
#define INSULT_PRIVATE_EVAL_REC_806_CONTINUE                   INSULT_PRIVATE_EVAL_REC_807
#define INSULT_PRIVATE_EVAL_REC_806_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_807(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_807_OVERLOAD(INSULT_PRIVATE_EVAL_REC_807_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_807_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_807_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_807_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_807_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_807_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_807_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_807_##choice
#define INSULT_PRIVATE_EVAL_REC_807_CONTINUE                   INSULT_PRIVATE_EVAL_REC_808
#define INSULT_PRIVATE_EVAL_REC_807_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_808(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_808_OVERLOAD(INSULT_PRIVATE_EVAL_REC_808_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_808_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_808_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_808_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_808_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_808_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_808_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_808_##choice
#define INSULT_PRIVATE_EVAL_REC_808_CONTINUE                   INSULT_PRIVATE_EVAL_REC_809
#define INSULT_PRIVATE_EVAL_REC_808_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_809(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_809_OVERLOAD(INSULT_PRIVATE_EVAL_REC_809_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_809_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_809_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_809_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_809_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_809_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_809_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_809_##choice
#define INSULT_PRIVATE_EVAL_REC_809_CONTINUE                   INSULT_PRIVATE_EVAL_REC_810
#define INSULT_PRIVATE_EVAL_REC_809_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_810(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_810_OVERLOAD(INSULT_PRIVATE_EVAL_REC_810_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_810_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_810_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_810_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_810_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_810_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_810_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_810_##choice
#define INSULT_PRIVATE_EVAL_REC_810_CONTINUE                   INSULT_PRIVATE_EVAL_REC_811
#define INSULT_PRIVATE_EVAL_REC_810_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_811(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_811_OVERLOAD(INSULT_PRIVATE_EVAL_REC_811_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_811_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_811_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_811_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_811_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_811_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_811_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_811_##choice
#define INSULT_PRIVATE_EVAL_REC_811_CONTINUE                   INSULT_PRIVATE_EVAL_REC_812
#define INSULT_PRIVATE_EVAL_REC_811_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_812(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_812_OVERLOAD(INSULT_PRIVATE_EVAL_REC_812_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_812_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_812_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_812_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_812_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_812_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_812_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_812_##choice
#define INSULT_PRIVATE_EVAL_REC_812_CONTINUE                   INSULT_PRIVATE_EVAL_REC_813
#define INSULT_PRIVATE_EVAL_REC_812_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_813(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_813_OVERLOAD(INSULT_PRIVATE_EVAL_REC_813_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_813_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_813_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_813_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_813_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_813_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_813_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_813_##choice
#define INSULT_PRIVATE_EVAL_REC_813_CONTINUE                   INSULT_PRIVATE_EVAL_REC_814
#define INSULT_PRIVATE_EVAL_REC_813_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_814(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_814_OVERLOAD(INSULT_PRIVATE_EVAL_REC_814_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_814_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_814_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_814_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_814_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_814_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_814_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_814_##choice
#define INSULT_PRIVATE_EVAL_REC_814_CONTINUE                   INSULT_PRIVATE_EVAL_REC_815
#define INSULT_PRIVATE_EVAL_REC_814_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_815(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_815_OVERLOAD(INSULT_PRIVATE_EVAL_REC_815_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_815_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_815_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_815_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_815_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_815_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_815_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_815_##choice
#define INSULT_PRIVATE_EVAL_REC_815_CONTINUE                   INSULT_PRIVATE_EVAL_REC_816
#define INSULT_PRIVATE_EVAL_REC_815_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_816(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_816_OVERLOAD(INSULT_PRIVATE_EVAL_REC_816_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_816_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_816_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_816_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_816_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_816_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_816_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_816_##choice
#define INSULT_PRIVATE_EVAL_REC_816_CONTINUE                   INSULT_PRIVATE_EVAL_REC_817
#define INSULT_PRIVATE_EVAL_REC_816_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_817(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_817_OVERLOAD(INSULT_PRIVATE_EVAL_REC_817_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_817_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_817_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_817_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_817_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_817_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_817_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_817_##choice
#define INSULT_PRIVATE_EVAL_REC_817_CONTINUE                   INSULT_PRIVATE_EVAL_REC_818
#define INSULT_PRIVATE_EVAL_REC_817_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_818(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_818_OVERLOAD(INSULT_PRIVATE_EVAL_REC_818_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_818_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_818_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_818_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_818_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_818_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_818_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_818_##choice
#define INSULT_PRIVATE_EVAL_REC_818_CONTINUE                   INSULT_PRIVATE_EVAL_REC_819
#define INSULT_PRIVATE_EVAL_REC_818_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_819(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_819_OVERLOAD(INSULT_PRIVATE_EVAL_REC_819_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_819_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_819_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_819_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_819_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_819_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_819_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_819_##choice
#define INSULT_PRIVATE_EVAL_REC_819_CONTINUE                   INSULT_PRIVATE_EVAL_REC_820
#define INSULT_PRIVATE_EVAL_REC_819_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_820(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_820_OVERLOAD(INSULT_PRIVATE_EVAL_REC_820_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_820_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_820_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_820_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_820_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_820_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_820_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_820_##choice
#define INSULT_PRIVATE_EVAL_REC_820_CONTINUE                   INSULT_PRIVATE_EVAL_REC_821
#define INSULT_PRIVATE_EVAL_REC_820_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_821(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_821_OVERLOAD(INSULT_PRIVATE_EVAL_REC_821_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_821_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_821_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_821_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_821_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_821_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_821_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_821_##choice
#define INSULT_PRIVATE_EVAL_REC_821_CONTINUE                   INSULT_PRIVATE_EVAL_REC_822
#define INSULT_PRIVATE_EVAL_REC_821_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_822(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_822_OVERLOAD(INSULT_PRIVATE_EVAL_REC_822_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_822_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_822_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_822_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_822_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_822_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_822_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_822_##choice
#define INSULT_PRIVATE_EVAL_REC_822_CONTINUE                   INSULT_PRIVATE_EVAL_REC_823
#define INSULT_PRIVATE_EVAL_REC_822_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_823(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_823_OVERLOAD(INSULT_PRIVATE_EVAL_REC_823_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_823_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_823_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_823_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_823_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_823_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_823_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_823_##choice
#define INSULT_PRIVATE_EVAL_REC_823_CONTINUE                   INSULT_PRIVATE_EVAL_REC_824
#define INSULT_PRIVATE_EVAL_REC_823_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_824(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_824_OVERLOAD(INSULT_PRIVATE_EVAL_REC_824_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_824_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_824_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_824_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_824_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_824_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_824_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_824_##choice
#define INSULT_PRIVATE_EVAL_REC_824_CONTINUE                   INSULT_PRIVATE_EVAL_REC_825
#define INSULT_PRIVATE_EVAL_REC_824_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_825(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_825_OVERLOAD(INSULT_PRIVATE_EVAL_REC_825_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_825_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_825_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_825_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_825_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_825_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_825_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_825_##choice
#define INSULT_PRIVATE_EVAL_REC_825_CONTINUE                   INSULT_PRIVATE_EVAL_REC_826
#define INSULT_PRIVATE_EVAL_REC_825_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_826(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_826_OVERLOAD(INSULT_PRIVATE_EVAL_REC_826_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_826_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_826_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_826_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_826_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_826_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_826_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_826_##choice
#define INSULT_PRIVATE_EVAL_REC_826_CONTINUE                   INSULT_PRIVATE_EVAL_REC_827
#define INSULT_PRIVATE_EVAL_REC_826_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_827(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_827_OVERLOAD(INSULT_PRIVATE_EVAL_REC_827_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_827_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_827_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_827_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_827_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_827_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_827_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_827_##choice
#define INSULT_PRIVATE_EVAL_REC_827_CONTINUE                   INSULT_PRIVATE_EVAL_REC_828
#define INSULT_PRIVATE_EVAL_REC_827_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_828(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_828_OVERLOAD(INSULT_PRIVATE_EVAL_REC_828_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_828_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_828_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_828_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_828_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_828_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_828_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_828_##choice
#define INSULT_PRIVATE_EVAL_REC_828_CONTINUE                   INSULT_PRIVATE_EVAL_REC_829
#define INSULT_PRIVATE_EVAL_REC_828_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_829(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_829_OVERLOAD(INSULT_PRIVATE_EVAL_REC_829_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_829_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_829_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_829_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_829_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_829_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_829_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_829_##choice
#define INSULT_PRIVATE_EVAL_REC_829_CONTINUE                   INSULT_PRIVATE_EVAL_REC_830
#define INSULT_PRIVATE_EVAL_REC_829_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_830(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_830_OVERLOAD(INSULT_PRIVATE_EVAL_REC_830_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_830_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_830_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_830_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_830_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_830_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_830_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_830_##choice
#define INSULT_PRIVATE_EVAL_REC_830_CONTINUE                   INSULT_PRIVATE_EVAL_REC_831
#define INSULT_PRIVATE_EVAL_REC_830_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_831(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_831_OVERLOAD(INSULT_PRIVATE_EVAL_REC_831_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_831_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_831_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_831_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_831_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_831_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_831_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_831_##choice
#define INSULT_PRIVATE_EVAL_REC_831_CONTINUE                   INSULT_PRIVATE_EVAL_REC_832
#define INSULT_PRIVATE_EVAL_REC_831_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_832(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_832_OVERLOAD(INSULT_PRIVATE_EVAL_REC_832_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_832_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_832_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_832_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_832_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_832_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_832_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_832_##choice
#define INSULT_PRIVATE_EVAL_REC_832_CONTINUE                   INSULT_PRIVATE_EVAL_REC_833
#define INSULT_PRIVATE_EVAL_REC_832_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_833(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_833_OVERLOAD(INSULT_PRIVATE_EVAL_REC_833_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_833_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_833_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_833_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_833_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_833_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_833_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_833_##choice
#define INSULT_PRIVATE_EVAL_REC_833_CONTINUE                   INSULT_PRIVATE_EVAL_REC_834
#define INSULT_PRIVATE_EVAL_REC_833_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_834(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_834_OVERLOAD(INSULT_PRIVATE_EVAL_REC_834_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_834_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_834_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_834_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_834_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_834_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_834_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_834_##choice
#define INSULT_PRIVATE_EVAL_REC_834_CONTINUE                   INSULT_PRIVATE_EVAL_REC_835
#define INSULT_PRIVATE_EVAL_REC_834_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_835(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_835_OVERLOAD(INSULT_PRIVATE_EVAL_REC_835_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_835_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_835_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_835_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_835_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_835_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_835_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_835_##choice
#define INSULT_PRIVATE_EVAL_REC_835_CONTINUE                   INSULT_PRIVATE_EVAL_REC_836
#define INSULT_PRIVATE_EVAL_REC_835_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_836(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_836_OVERLOAD(INSULT_PRIVATE_EVAL_REC_836_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_836_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_836_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_836_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_836_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_836_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_836_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_836_##choice
#define INSULT_PRIVATE_EVAL_REC_836_CONTINUE                   INSULT_PRIVATE_EVAL_REC_837
#define INSULT_PRIVATE_EVAL_REC_836_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_837(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_837_OVERLOAD(INSULT_PRIVATE_EVAL_REC_837_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_837_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_837_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_837_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_837_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_837_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_837_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_837_##choice
#define INSULT_PRIVATE_EVAL_REC_837_CONTINUE                   INSULT_PRIVATE_EVAL_REC_838
#define INSULT_PRIVATE_EVAL_REC_837_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_838(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_838_OVERLOAD(INSULT_PRIVATE_EVAL_REC_838_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_838_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_838_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_838_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_838_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_838_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_838_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_838_##choice
#define INSULT_PRIVATE_EVAL_REC_838_CONTINUE                   INSULT_PRIVATE_EVAL_REC_839
#define INSULT_PRIVATE_EVAL_REC_838_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_839(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_839_OVERLOAD(INSULT_PRIVATE_EVAL_REC_839_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_839_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_839_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_839_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_839_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_839_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_839_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_839_##choice
#define INSULT_PRIVATE_EVAL_REC_839_CONTINUE                   INSULT_PRIVATE_EVAL_REC_840
#define INSULT_PRIVATE_EVAL_REC_839_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_840(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_840_OVERLOAD(INSULT_PRIVATE_EVAL_REC_840_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_840_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_840_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_840_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_840_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_840_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_840_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_840_##choice
#define INSULT_PRIVATE_EVAL_REC_840_CONTINUE                   INSULT_PRIVATE_EVAL_REC_841
#define INSULT_PRIVATE_EVAL_REC_840_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_841(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_841_OVERLOAD(INSULT_PRIVATE_EVAL_REC_841_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_841_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_841_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_841_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_841_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_841_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_841_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_841_##choice
#define INSULT_PRIVATE_EVAL_REC_841_CONTINUE                   INSULT_PRIVATE_EVAL_REC_842
#define INSULT_PRIVATE_EVAL_REC_841_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_842(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_842_OVERLOAD(INSULT_PRIVATE_EVAL_REC_842_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_842_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_842_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_842_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_842_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_842_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_842_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_842_##choice
#define INSULT_PRIVATE_EVAL_REC_842_CONTINUE                   INSULT_PRIVATE_EVAL_REC_843
#define INSULT_PRIVATE_EVAL_REC_842_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_843(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_843_OVERLOAD(INSULT_PRIVATE_EVAL_REC_843_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_843_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_843_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_843_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_843_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_843_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_843_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_843_##choice
#define INSULT_PRIVATE_EVAL_REC_843_CONTINUE                   INSULT_PRIVATE_EVAL_REC_844
#define INSULT_PRIVATE_EVAL_REC_843_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_844(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_844_OVERLOAD(INSULT_PRIVATE_EVAL_REC_844_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_844_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_844_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_844_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_844_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_844_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_844_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_844_##choice
#define INSULT_PRIVATE_EVAL_REC_844_CONTINUE                   INSULT_PRIVATE_EVAL_REC_845
#define INSULT_PRIVATE_EVAL_REC_844_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_845(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_845_OVERLOAD(INSULT_PRIVATE_EVAL_REC_845_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_845_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_845_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_845_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_845_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_845_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_845_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_845_##choice
#define INSULT_PRIVATE_EVAL_REC_845_CONTINUE                   INSULT_PRIVATE_EVAL_REC_846
#define INSULT_PRIVATE_EVAL_REC_845_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_846(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_846_OVERLOAD(INSULT_PRIVATE_EVAL_REC_846_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_846_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_846_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_846_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_846_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_846_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_846_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_846_##choice
#define INSULT_PRIVATE_EVAL_REC_846_CONTINUE                   INSULT_PRIVATE_EVAL_REC_847
#define INSULT_PRIVATE_EVAL_REC_846_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_847(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_847_OVERLOAD(INSULT_PRIVATE_EVAL_REC_847_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_847_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_847_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_847_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_847_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_847_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_847_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_847_##choice
#define INSULT_PRIVATE_EVAL_REC_847_CONTINUE                   INSULT_PRIVATE_EVAL_REC_848
#define INSULT_PRIVATE_EVAL_REC_847_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_848(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_848_OVERLOAD(INSULT_PRIVATE_EVAL_REC_848_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_848_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_848_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_848_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_848_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_848_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_848_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_848_##choice
#define INSULT_PRIVATE_EVAL_REC_848_CONTINUE                   INSULT_PRIVATE_EVAL_REC_849
#define INSULT_PRIVATE_EVAL_REC_848_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_849(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_849_OVERLOAD(INSULT_PRIVATE_EVAL_REC_849_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_849_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_849_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_849_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_849_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_849_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_849_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_849_##choice
#define INSULT_PRIVATE_EVAL_REC_849_CONTINUE                   INSULT_PRIVATE_EVAL_REC_850
#define INSULT_PRIVATE_EVAL_REC_849_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_850(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_850_OVERLOAD(INSULT_PRIVATE_EVAL_REC_850_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_850_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_850_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_850_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_850_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_850_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_850_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_850_##choice
#define INSULT_PRIVATE_EVAL_REC_850_CONTINUE                   INSULT_PRIVATE_EVAL_REC_851
#define INSULT_PRIVATE_EVAL_REC_850_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_851(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_851_OVERLOAD(INSULT_PRIVATE_EVAL_REC_851_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_851_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_851_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_851_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_851_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_851_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_851_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_851_##choice
#define INSULT_PRIVATE_EVAL_REC_851_CONTINUE                   INSULT_PRIVATE_EVAL_REC_852
#define INSULT_PRIVATE_EVAL_REC_851_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_852(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_852_OVERLOAD(INSULT_PRIVATE_EVAL_REC_852_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_852_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_852_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_852_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_852_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_852_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_852_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_852_##choice
#define INSULT_PRIVATE_EVAL_REC_852_CONTINUE                   INSULT_PRIVATE_EVAL_REC_853
#define INSULT_PRIVATE_EVAL_REC_852_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_853(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_853_OVERLOAD(INSULT_PRIVATE_EVAL_REC_853_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_853_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_853_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_853_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_853_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_853_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_853_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_853_##choice
#define INSULT_PRIVATE_EVAL_REC_853_CONTINUE                   INSULT_PRIVATE_EVAL_REC_854
#define INSULT_PRIVATE_EVAL_REC_853_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_854(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_854_OVERLOAD(INSULT_PRIVATE_EVAL_REC_854_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_854_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_854_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_854_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_854_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_854_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_854_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_854_##choice
#define INSULT_PRIVATE_EVAL_REC_854_CONTINUE                   INSULT_PRIVATE_EVAL_REC_855
#define INSULT_PRIVATE_EVAL_REC_854_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_855(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_855_OVERLOAD(INSULT_PRIVATE_EVAL_REC_855_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_855_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_855_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_855_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_855_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_855_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_855_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_855_##choice
#define INSULT_PRIVATE_EVAL_REC_855_CONTINUE                   INSULT_PRIVATE_EVAL_REC_856
#define INSULT_PRIVATE_EVAL_REC_855_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_856(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_856_OVERLOAD(INSULT_PRIVATE_EVAL_REC_856_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_856_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_856_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_856_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_856_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_856_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_856_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_856_##choice
#define INSULT_PRIVATE_EVAL_REC_856_CONTINUE                   INSULT_PRIVATE_EVAL_REC_857
#define INSULT_PRIVATE_EVAL_REC_856_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_857(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_857_OVERLOAD(INSULT_PRIVATE_EVAL_REC_857_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_857_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_857_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_857_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_857_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_857_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_857_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_857_##choice
#define INSULT_PRIVATE_EVAL_REC_857_CONTINUE                   INSULT_PRIVATE_EVAL_REC_858
#define INSULT_PRIVATE_EVAL_REC_857_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_858(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_858_OVERLOAD(INSULT_PRIVATE_EVAL_REC_858_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_858_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_858_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_858_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_858_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_858_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_858_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_858_##choice
#define INSULT_PRIVATE_EVAL_REC_858_CONTINUE                   INSULT_PRIVATE_EVAL_REC_859
#define INSULT_PRIVATE_EVAL_REC_858_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_859(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_859_OVERLOAD(INSULT_PRIVATE_EVAL_REC_859_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_859_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_859_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_859_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_859_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_859_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_859_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_859_##choice
#define INSULT_PRIVATE_EVAL_REC_859_CONTINUE                   INSULT_PRIVATE_EVAL_REC_860
#define INSULT_PRIVATE_EVAL_REC_859_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_860(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_860_OVERLOAD(INSULT_PRIVATE_EVAL_REC_860_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_860_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_860_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_860_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_860_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_860_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_860_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_860_##choice
#define INSULT_PRIVATE_EVAL_REC_860_CONTINUE                   INSULT_PRIVATE_EVAL_REC_861
#define INSULT_PRIVATE_EVAL_REC_860_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_861(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_861_OVERLOAD(INSULT_PRIVATE_EVAL_REC_861_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_861_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_861_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_861_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_861_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_861_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_861_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_861_##choice
#define INSULT_PRIVATE_EVAL_REC_861_CONTINUE                   INSULT_PRIVATE_EVAL_REC_862
#define INSULT_PRIVATE_EVAL_REC_861_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_862(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_862_OVERLOAD(INSULT_PRIVATE_EVAL_REC_862_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_862_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_862_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_862_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_862_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_862_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_862_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_862_##choice
#define INSULT_PRIVATE_EVAL_REC_862_CONTINUE                   INSULT_PRIVATE_EVAL_REC_863
#define INSULT_PRIVATE_EVAL_REC_862_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_863(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_863_OVERLOAD(INSULT_PRIVATE_EVAL_REC_863_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_863_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_863_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_863_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_863_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_863_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_863_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_863_##choice
#define INSULT_PRIVATE_EVAL_REC_863_CONTINUE                   INSULT_PRIVATE_EVAL_REC_864
#define INSULT_PRIVATE_EVAL_REC_863_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_864(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_864_OVERLOAD(INSULT_PRIVATE_EVAL_REC_864_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_864_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_864_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_864_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_864_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_864_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_864_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_864_##choice
#define INSULT_PRIVATE_EVAL_REC_864_CONTINUE                   INSULT_PRIVATE_EVAL_REC_865
#define INSULT_PRIVATE_EVAL_REC_864_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_865(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_865_OVERLOAD(INSULT_PRIVATE_EVAL_REC_865_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_865_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_865_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_865_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_865_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_865_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_865_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_865_##choice
#define INSULT_PRIVATE_EVAL_REC_865_CONTINUE                   INSULT_PRIVATE_EVAL_REC_866
#define INSULT_PRIVATE_EVAL_REC_865_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_866(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_866_OVERLOAD(INSULT_PRIVATE_EVAL_REC_866_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_866_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_866_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_866_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_866_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_866_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_866_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_866_##choice
#define INSULT_PRIVATE_EVAL_REC_866_CONTINUE                   INSULT_PRIVATE_EVAL_REC_867
#define INSULT_PRIVATE_EVAL_REC_866_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_867(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_867_OVERLOAD(INSULT_PRIVATE_EVAL_REC_867_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_867_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_867_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_867_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_867_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_867_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_867_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_867_##choice
#define INSULT_PRIVATE_EVAL_REC_867_CONTINUE                   INSULT_PRIVATE_EVAL_REC_868
#define INSULT_PRIVATE_EVAL_REC_867_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_868(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_868_OVERLOAD(INSULT_PRIVATE_EVAL_REC_868_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_868_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_868_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_868_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_868_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_868_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_868_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_868_##choice
#define INSULT_PRIVATE_EVAL_REC_868_CONTINUE                   INSULT_PRIVATE_EVAL_REC_869
#define INSULT_PRIVATE_EVAL_REC_868_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_869(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_869_OVERLOAD(INSULT_PRIVATE_EVAL_REC_869_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_869_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_869_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_869_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_869_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_869_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_869_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_869_##choice
#define INSULT_PRIVATE_EVAL_REC_869_CONTINUE                   INSULT_PRIVATE_EVAL_REC_870
#define INSULT_PRIVATE_EVAL_REC_869_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_870(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_870_OVERLOAD(INSULT_PRIVATE_EVAL_REC_870_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_870_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_870_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_870_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_870_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_870_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_870_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_870_##choice
#define INSULT_PRIVATE_EVAL_REC_870_CONTINUE                   INSULT_PRIVATE_EVAL_REC_871
#define INSULT_PRIVATE_EVAL_REC_870_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_871(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_871_OVERLOAD(INSULT_PRIVATE_EVAL_REC_871_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_871_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_871_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_871_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_871_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_871_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_871_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_871_##choice
#define INSULT_PRIVATE_EVAL_REC_871_CONTINUE                   INSULT_PRIVATE_EVAL_REC_872
#define INSULT_PRIVATE_EVAL_REC_871_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_872(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_872_OVERLOAD(INSULT_PRIVATE_EVAL_REC_872_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_872_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_872_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_872_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_872_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_872_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_872_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_872_##choice
#define INSULT_PRIVATE_EVAL_REC_872_CONTINUE                   INSULT_PRIVATE_EVAL_REC_873
#define INSULT_PRIVATE_EVAL_REC_872_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_873(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_873_OVERLOAD(INSULT_PRIVATE_EVAL_REC_873_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_873_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_873_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_873_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_873_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_873_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_873_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_873_##choice
#define INSULT_PRIVATE_EVAL_REC_873_CONTINUE                   INSULT_PRIVATE_EVAL_REC_874
#define INSULT_PRIVATE_EVAL_REC_873_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_874(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_874_OVERLOAD(INSULT_PRIVATE_EVAL_REC_874_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_874_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_874_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_874_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_874_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_874_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_874_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_874_##choice
#define INSULT_PRIVATE_EVAL_REC_874_CONTINUE                   INSULT_PRIVATE_EVAL_REC_875
#define INSULT_PRIVATE_EVAL_REC_874_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_875(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_875_OVERLOAD(INSULT_PRIVATE_EVAL_REC_875_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_875_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_875_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_875_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_875_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_875_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_875_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_875_##choice
#define INSULT_PRIVATE_EVAL_REC_875_CONTINUE                   INSULT_PRIVATE_EVAL_REC_876
#define INSULT_PRIVATE_EVAL_REC_875_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_876(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_876_OVERLOAD(INSULT_PRIVATE_EVAL_REC_876_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_876_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_876_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_876_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_876_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_876_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_876_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_876_##choice
#define INSULT_PRIVATE_EVAL_REC_876_CONTINUE                   INSULT_PRIVATE_EVAL_REC_877
#define INSULT_PRIVATE_EVAL_REC_876_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_877(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_877_OVERLOAD(INSULT_PRIVATE_EVAL_REC_877_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_877_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_877_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_877_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_877_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_877_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_877_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_877_##choice
#define INSULT_PRIVATE_EVAL_REC_877_CONTINUE                   INSULT_PRIVATE_EVAL_REC_878
#define INSULT_PRIVATE_EVAL_REC_877_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_878(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_878_OVERLOAD(INSULT_PRIVATE_EVAL_REC_878_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_878_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_878_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_878_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_878_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_878_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_878_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_878_##choice
#define INSULT_PRIVATE_EVAL_REC_878_CONTINUE                   INSULT_PRIVATE_EVAL_REC_879
#define INSULT_PRIVATE_EVAL_REC_878_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_879(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_879_OVERLOAD(INSULT_PRIVATE_EVAL_REC_879_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_879_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_879_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_879_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_879_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_879_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_879_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_879_##choice
#define INSULT_PRIVATE_EVAL_REC_879_CONTINUE                   INSULT_PRIVATE_EVAL_REC_880
#define INSULT_PRIVATE_EVAL_REC_879_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_880(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_880_OVERLOAD(INSULT_PRIVATE_EVAL_REC_880_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_880_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_880_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_880_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_880_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_880_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_880_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_880_##choice
#define INSULT_PRIVATE_EVAL_REC_880_CONTINUE                   INSULT_PRIVATE_EVAL_REC_881
#define INSULT_PRIVATE_EVAL_REC_880_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_881(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_881_OVERLOAD(INSULT_PRIVATE_EVAL_REC_881_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_881_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_881_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_881_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_881_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_881_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_881_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_881_##choice
#define INSULT_PRIVATE_EVAL_REC_881_CONTINUE                   INSULT_PRIVATE_EVAL_REC_882
#define INSULT_PRIVATE_EVAL_REC_881_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_882(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_882_OVERLOAD(INSULT_PRIVATE_EVAL_REC_882_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_882_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_882_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_882_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_882_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_882_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_882_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_882_##choice
#define INSULT_PRIVATE_EVAL_REC_882_CONTINUE                   INSULT_PRIVATE_EVAL_REC_883
#define INSULT_PRIVATE_EVAL_REC_882_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_883(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_883_OVERLOAD(INSULT_PRIVATE_EVAL_REC_883_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_883_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_883_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_883_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_883_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_883_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_883_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_883_##choice
#define INSULT_PRIVATE_EVAL_REC_883_CONTINUE                   INSULT_PRIVATE_EVAL_REC_884
#define INSULT_PRIVATE_EVAL_REC_883_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_884(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_884_OVERLOAD(INSULT_PRIVATE_EVAL_REC_884_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_884_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_884_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_884_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_884_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_884_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_884_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_884_##choice
#define INSULT_PRIVATE_EVAL_REC_884_CONTINUE                   INSULT_PRIVATE_EVAL_REC_885
#define INSULT_PRIVATE_EVAL_REC_884_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_885(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_885_OVERLOAD(INSULT_PRIVATE_EVAL_REC_885_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_885_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_885_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_885_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_885_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_885_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_885_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_885_##choice
#define INSULT_PRIVATE_EVAL_REC_885_CONTINUE                   INSULT_PRIVATE_EVAL_REC_886
#define INSULT_PRIVATE_EVAL_REC_885_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_886(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_886_OVERLOAD(INSULT_PRIVATE_EVAL_REC_886_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_886_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_886_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_886_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_886_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_886_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_886_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_886_##choice
#define INSULT_PRIVATE_EVAL_REC_886_CONTINUE                   INSULT_PRIVATE_EVAL_REC_887
#define INSULT_PRIVATE_EVAL_REC_886_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_887(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_887_OVERLOAD(INSULT_PRIVATE_EVAL_REC_887_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_887_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_887_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_887_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_887_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_887_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_887_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_887_##choice
#define INSULT_PRIVATE_EVAL_REC_887_CONTINUE                   INSULT_PRIVATE_EVAL_REC_888
#define INSULT_PRIVATE_EVAL_REC_887_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_888(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_888_OVERLOAD(INSULT_PRIVATE_EVAL_REC_888_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_888_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_888_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_888_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_888_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_888_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_888_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_888_##choice
#define INSULT_PRIVATE_EVAL_REC_888_CONTINUE                   INSULT_PRIVATE_EVAL_REC_889
#define INSULT_PRIVATE_EVAL_REC_888_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_889(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_889_OVERLOAD(INSULT_PRIVATE_EVAL_REC_889_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_889_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_889_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_889_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_889_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_889_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_889_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_889_##choice
#define INSULT_PRIVATE_EVAL_REC_889_CONTINUE                   INSULT_PRIVATE_EVAL_REC_890
#define INSULT_PRIVATE_EVAL_REC_889_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_890(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_890_OVERLOAD(INSULT_PRIVATE_EVAL_REC_890_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_890_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_890_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_890_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_890_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_890_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_890_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_890_##choice
#define INSULT_PRIVATE_EVAL_REC_890_CONTINUE                   INSULT_PRIVATE_EVAL_REC_891
#define INSULT_PRIVATE_EVAL_REC_890_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_891(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_891_OVERLOAD(INSULT_PRIVATE_EVAL_REC_891_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_891_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_891_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_891_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_891_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_891_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_891_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_891_##choice
#define INSULT_PRIVATE_EVAL_REC_891_CONTINUE                   INSULT_PRIVATE_EVAL_REC_892
#define INSULT_PRIVATE_EVAL_REC_891_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_892(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_892_OVERLOAD(INSULT_PRIVATE_EVAL_REC_892_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_892_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_892_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_892_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_892_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_892_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_892_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_892_##choice
#define INSULT_PRIVATE_EVAL_REC_892_CONTINUE                   INSULT_PRIVATE_EVAL_REC_893
#define INSULT_PRIVATE_EVAL_REC_892_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_893(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_893_OVERLOAD(INSULT_PRIVATE_EVAL_REC_893_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_893_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_893_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_893_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_893_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_893_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_893_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_893_##choice
#define INSULT_PRIVATE_EVAL_REC_893_CONTINUE                   INSULT_PRIVATE_EVAL_REC_894
#define INSULT_PRIVATE_EVAL_REC_893_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_894(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_894_OVERLOAD(INSULT_PRIVATE_EVAL_REC_894_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_894_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_894_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_894_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_894_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_894_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_894_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_894_##choice
#define INSULT_PRIVATE_EVAL_REC_894_CONTINUE                   INSULT_PRIVATE_EVAL_REC_895
#define INSULT_PRIVATE_EVAL_REC_894_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_895(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_895_OVERLOAD(INSULT_PRIVATE_EVAL_REC_895_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_895_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_895_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_895_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_895_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_895_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_895_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_895_##choice
#define INSULT_PRIVATE_EVAL_REC_895_CONTINUE                   INSULT_PRIVATE_EVAL_REC_896
#define INSULT_PRIVATE_EVAL_REC_895_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_896(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_896_OVERLOAD(INSULT_PRIVATE_EVAL_REC_896_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_896_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_896_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_896_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_896_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_896_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_896_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_896_##choice
#define INSULT_PRIVATE_EVAL_REC_896_CONTINUE                   INSULT_PRIVATE_EVAL_REC_897
#define INSULT_PRIVATE_EVAL_REC_896_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_897(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_897_OVERLOAD(INSULT_PRIVATE_EVAL_REC_897_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_897_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_897_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_897_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_897_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_897_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_897_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_897_##choice
#define INSULT_PRIVATE_EVAL_REC_897_CONTINUE                   INSULT_PRIVATE_EVAL_REC_898
#define INSULT_PRIVATE_EVAL_REC_897_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_898(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_898_OVERLOAD(INSULT_PRIVATE_EVAL_REC_898_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_898_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_898_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_898_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_898_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_898_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_898_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_898_##choice
#define INSULT_PRIVATE_EVAL_REC_898_CONTINUE                   INSULT_PRIVATE_EVAL_REC_899
#define INSULT_PRIVATE_EVAL_REC_898_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_899(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_899_OVERLOAD(INSULT_PRIVATE_EVAL_REC_899_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_899_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_899_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_899_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_899_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_899_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_899_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_899_##choice
#define INSULT_PRIVATE_EVAL_REC_899_CONTINUE                   INSULT_PRIVATE_EVAL_REC_900
#define INSULT_PRIVATE_EVAL_REC_899_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_900(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_900_OVERLOAD(INSULT_PRIVATE_EVAL_REC_900_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_900_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_900_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_900_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_900_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_900_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_900_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_900_##choice
#define INSULT_PRIVATE_EVAL_REC_900_CONTINUE                   INSULT_PRIVATE_EVAL_REC_901
#define INSULT_PRIVATE_EVAL_REC_900_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_901(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_901_OVERLOAD(INSULT_PRIVATE_EVAL_REC_901_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_901_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_901_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_901_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_901_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_901_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_901_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_901_##choice
#define INSULT_PRIVATE_EVAL_REC_901_CONTINUE                   INSULT_PRIVATE_EVAL_REC_902
#define INSULT_PRIVATE_EVAL_REC_901_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_902(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_902_OVERLOAD(INSULT_PRIVATE_EVAL_REC_902_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_902_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_902_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_902_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_902_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_902_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_902_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_902_##choice
#define INSULT_PRIVATE_EVAL_REC_902_CONTINUE                   INSULT_PRIVATE_EVAL_REC_903
#define INSULT_PRIVATE_EVAL_REC_902_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_903(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_903_OVERLOAD(INSULT_PRIVATE_EVAL_REC_903_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_903_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_903_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_903_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_903_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_903_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_903_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_903_##choice
#define INSULT_PRIVATE_EVAL_REC_903_CONTINUE                   INSULT_PRIVATE_EVAL_REC_904
#define INSULT_PRIVATE_EVAL_REC_903_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_904(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_904_OVERLOAD(INSULT_PRIVATE_EVAL_REC_904_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_904_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_904_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_904_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_904_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_904_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_904_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_904_##choice
#define INSULT_PRIVATE_EVAL_REC_904_CONTINUE                   INSULT_PRIVATE_EVAL_REC_905
#define INSULT_PRIVATE_EVAL_REC_904_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_905(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_905_OVERLOAD(INSULT_PRIVATE_EVAL_REC_905_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_905_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_905_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_905_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_905_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_905_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_905_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_905_##choice
#define INSULT_PRIVATE_EVAL_REC_905_CONTINUE                   INSULT_PRIVATE_EVAL_REC_906
#define INSULT_PRIVATE_EVAL_REC_905_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_906(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_906_OVERLOAD(INSULT_PRIVATE_EVAL_REC_906_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_906_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_906_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_906_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_906_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_906_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_906_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_906_##choice
#define INSULT_PRIVATE_EVAL_REC_906_CONTINUE                   INSULT_PRIVATE_EVAL_REC_907
#define INSULT_PRIVATE_EVAL_REC_906_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_907(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_907_OVERLOAD(INSULT_PRIVATE_EVAL_REC_907_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_907_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_907_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_907_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_907_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_907_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_907_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_907_##choice
#define INSULT_PRIVATE_EVAL_REC_907_CONTINUE                   INSULT_PRIVATE_EVAL_REC_908
#define INSULT_PRIVATE_EVAL_REC_907_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_908(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_908_OVERLOAD(INSULT_PRIVATE_EVAL_REC_908_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_908_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_908_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_908_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_908_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_908_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_908_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_908_##choice
#define INSULT_PRIVATE_EVAL_REC_908_CONTINUE                   INSULT_PRIVATE_EVAL_REC_909
#define INSULT_PRIVATE_EVAL_REC_908_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_909(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_909_OVERLOAD(INSULT_PRIVATE_EVAL_REC_909_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_909_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_909_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_909_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_909_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_909_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_909_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_909_##choice
#define INSULT_PRIVATE_EVAL_REC_909_CONTINUE                   INSULT_PRIVATE_EVAL_REC_910
#define INSULT_PRIVATE_EVAL_REC_909_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_910(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_910_OVERLOAD(INSULT_PRIVATE_EVAL_REC_910_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_910_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_910_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_910_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_910_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_910_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_910_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_910_##choice
#define INSULT_PRIVATE_EVAL_REC_910_CONTINUE                   INSULT_PRIVATE_EVAL_REC_911
#define INSULT_PRIVATE_EVAL_REC_910_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_911(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_911_OVERLOAD(INSULT_PRIVATE_EVAL_REC_911_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_911_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_911_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_911_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_911_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_911_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_911_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_911_##choice
#define INSULT_PRIVATE_EVAL_REC_911_CONTINUE                   INSULT_PRIVATE_EVAL_REC_912
#define INSULT_PRIVATE_EVAL_REC_911_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_912(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_912_OVERLOAD(INSULT_PRIVATE_EVAL_REC_912_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_912_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_912_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_912_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_912_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_912_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_912_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_912_##choice
#define INSULT_PRIVATE_EVAL_REC_912_CONTINUE                   INSULT_PRIVATE_EVAL_REC_913
#define INSULT_PRIVATE_EVAL_REC_912_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_913(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_913_OVERLOAD(INSULT_PRIVATE_EVAL_REC_913_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_913_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_913_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_913_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_913_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_913_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_913_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_913_##choice
#define INSULT_PRIVATE_EVAL_REC_913_CONTINUE                   INSULT_PRIVATE_EVAL_REC_914
#define INSULT_PRIVATE_EVAL_REC_913_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_914(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_914_OVERLOAD(INSULT_PRIVATE_EVAL_REC_914_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_914_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_914_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_914_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_914_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_914_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_914_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_914_##choice
#define INSULT_PRIVATE_EVAL_REC_914_CONTINUE                   INSULT_PRIVATE_EVAL_REC_915
#define INSULT_PRIVATE_EVAL_REC_914_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_915(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_915_OVERLOAD(INSULT_PRIVATE_EVAL_REC_915_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_915_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_915_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_915_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_915_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_915_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_915_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_915_##choice
#define INSULT_PRIVATE_EVAL_REC_915_CONTINUE                   INSULT_PRIVATE_EVAL_REC_916
#define INSULT_PRIVATE_EVAL_REC_915_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_916(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_916_OVERLOAD(INSULT_PRIVATE_EVAL_REC_916_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_916_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_916_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_916_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_916_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_916_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_916_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_916_##choice
#define INSULT_PRIVATE_EVAL_REC_916_CONTINUE                   INSULT_PRIVATE_EVAL_REC_917
#define INSULT_PRIVATE_EVAL_REC_916_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_917(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_917_OVERLOAD(INSULT_PRIVATE_EVAL_REC_917_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_917_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_917_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_917_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_917_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_917_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_917_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_917_##choice
#define INSULT_PRIVATE_EVAL_REC_917_CONTINUE                   INSULT_PRIVATE_EVAL_REC_918
#define INSULT_PRIVATE_EVAL_REC_917_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_918(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_918_OVERLOAD(INSULT_PRIVATE_EVAL_REC_918_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_918_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_918_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_918_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_918_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_918_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_918_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_918_##choice
#define INSULT_PRIVATE_EVAL_REC_918_CONTINUE                   INSULT_PRIVATE_EVAL_REC_919
#define INSULT_PRIVATE_EVAL_REC_918_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_919(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_919_OVERLOAD(INSULT_PRIVATE_EVAL_REC_919_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_919_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_919_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_919_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_919_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_919_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_919_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_919_##choice
#define INSULT_PRIVATE_EVAL_REC_919_CONTINUE                   INSULT_PRIVATE_EVAL_REC_920
#define INSULT_PRIVATE_EVAL_REC_919_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_920(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_920_OVERLOAD(INSULT_PRIVATE_EVAL_REC_920_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_920_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_920_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_920_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_920_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_920_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_920_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_920_##choice
#define INSULT_PRIVATE_EVAL_REC_920_CONTINUE                   INSULT_PRIVATE_EVAL_REC_921
#define INSULT_PRIVATE_EVAL_REC_920_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_921(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_921_OVERLOAD(INSULT_PRIVATE_EVAL_REC_921_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_921_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_921_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_921_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_921_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_921_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_921_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_921_##choice
#define INSULT_PRIVATE_EVAL_REC_921_CONTINUE                   INSULT_PRIVATE_EVAL_REC_922
#define INSULT_PRIVATE_EVAL_REC_921_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_922(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_922_OVERLOAD(INSULT_PRIVATE_EVAL_REC_922_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_922_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_922_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_922_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_922_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_922_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_922_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_922_##choice
#define INSULT_PRIVATE_EVAL_REC_922_CONTINUE                   INSULT_PRIVATE_EVAL_REC_923
#define INSULT_PRIVATE_EVAL_REC_922_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_923(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_923_OVERLOAD(INSULT_PRIVATE_EVAL_REC_923_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_923_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_923_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_923_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_923_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_923_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_923_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_923_##choice
#define INSULT_PRIVATE_EVAL_REC_923_CONTINUE                   INSULT_PRIVATE_EVAL_REC_924
#define INSULT_PRIVATE_EVAL_REC_923_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_924(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_924_OVERLOAD(INSULT_PRIVATE_EVAL_REC_924_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_924_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_924_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_924_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_924_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_924_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_924_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_924_##choice
#define INSULT_PRIVATE_EVAL_REC_924_CONTINUE                   INSULT_PRIVATE_EVAL_REC_925
#define INSULT_PRIVATE_EVAL_REC_924_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_925(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_925_OVERLOAD(INSULT_PRIVATE_EVAL_REC_925_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_925_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_925_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_925_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_925_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_925_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_925_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_925_##choice
#define INSULT_PRIVATE_EVAL_REC_925_CONTINUE                   INSULT_PRIVATE_EVAL_REC_926
#define INSULT_PRIVATE_EVAL_REC_925_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_926(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_926_OVERLOAD(INSULT_PRIVATE_EVAL_REC_926_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_926_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_926_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_926_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_926_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_926_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_926_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_926_##choice
#define INSULT_PRIVATE_EVAL_REC_926_CONTINUE                   INSULT_PRIVATE_EVAL_REC_927
#define INSULT_PRIVATE_EVAL_REC_926_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_927(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_927_OVERLOAD(INSULT_PRIVATE_EVAL_REC_927_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_927_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_927_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_927_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_927_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_927_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_927_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_927_##choice
#define INSULT_PRIVATE_EVAL_REC_927_CONTINUE                   INSULT_PRIVATE_EVAL_REC_928
#define INSULT_PRIVATE_EVAL_REC_927_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_928(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_928_OVERLOAD(INSULT_PRIVATE_EVAL_REC_928_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_928_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_928_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_928_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_928_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_928_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_928_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_928_##choice
#define INSULT_PRIVATE_EVAL_REC_928_CONTINUE                   INSULT_PRIVATE_EVAL_REC_929
#define INSULT_PRIVATE_EVAL_REC_928_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_929(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_929_OVERLOAD(INSULT_PRIVATE_EVAL_REC_929_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_929_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_929_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_929_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_929_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_929_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_929_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_929_##choice
#define INSULT_PRIVATE_EVAL_REC_929_CONTINUE                   INSULT_PRIVATE_EVAL_REC_930
#define INSULT_PRIVATE_EVAL_REC_929_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_930(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_930_OVERLOAD(INSULT_PRIVATE_EVAL_REC_930_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_930_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_930_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_930_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_930_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_930_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_930_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_930_##choice
#define INSULT_PRIVATE_EVAL_REC_930_CONTINUE                   INSULT_PRIVATE_EVAL_REC_931
#define INSULT_PRIVATE_EVAL_REC_930_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_931(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_931_OVERLOAD(INSULT_PRIVATE_EVAL_REC_931_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_931_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_931_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_931_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_931_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_931_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_931_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_931_##choice
#define INSULT_PRIVATE_EVAL_REC_931_CONTINUE                   INSULT_PRIVATE_EVAL_REC_932
#define INSULT_PRIVATE_EVAL_REC_931_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_932(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_932_OVERLOAD(INSULT_PRIVATE_EVAL_REC_932_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_932_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_932_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_932_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_932_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_932_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_932_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_932_##choice
#define INSULT_PRIVATE_EVAL_REC_932_CONTINUE                   INSULT_PRIVATE_EVAL_REC_933
#define INSULT_PRIVATE_EVAL_REC_932_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_933(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_933_OVERLOAD(INSULT_PRIVATE_EVAL_REC_933_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_933_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_933_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_933_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_933_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_933_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_933_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_933_##choice
#define INSULT_PRIVATE_EVAL_REC_933_CONTINUE                   INSULT_PRIVATE_EVAL_REC_934
#define INSULT_PRIVATE_EVAL_REC_933_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_934(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_934_OVERLOAD(INSULT_PRIVATE_EVAL_REC_934_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_934_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_934_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_934_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_934_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_934_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_934_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_934_##choice
#define INSULT_PRIVATE_EVAL_REC_934_CONTINUE                   INSULT_PRIVATE_EVAL_REC_935
#define INSULT_PRIVATE_EVAL_REC_934_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_935(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_935_OVERLOAD(INSULT_PRIVATE_EVAL_REC_935_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_935_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_935_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_935_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_935_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_935_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_935_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_935_##choice
#define INSULT_PRIVATE_EVAL_REC_935_CONTINUE                   INSULT_PRIVATE_EVAL_REC_936
#define INSULT_PRIVATE_EVAL_REC_935_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_936(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_936_OVERLOAD(INSULT_PRIVATE_EVAL_REC_936_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_936_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_936_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_936_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_936_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_936_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_936_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_936_##choice
#define INSULT_PRIVATE_EVAL_REC_936_CONTINUE                   INSULT_PRIVATE_EVAL_REC_937
#define INSULT_PRIVATE_EVAL_REC_936_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_937(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_937_OVERLOAD(INSULT_PRIVATE_EVAL_REC_937_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_937_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_937_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_937_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_937_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_937_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_937_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_937_##choice
#define INSULT_PRIVATE_EVAL_REC_937_CONTINUE                   INSULT_PRIVATE_EVAL_REC_938
#define INSULT_PRIVATE_EVAL_REC_937_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_938(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_938_OVERLOAD(INSULT_PRIVATE_EVAL_REC_938_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_938_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_938_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_938_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_938_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_938_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_938_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_938_##choice
#define INSULT_PRIVATE_EVAL_REC_938_CONTINUE                   INSULT_PRIVATE_EVAL_REC_939
#define INSULT_PRIVATE_EVAL_REC_938_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_939(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_939_OVERLOAD(INSULT_PRIVATE_EVAL_REC_939_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_939_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_939_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_939_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_939_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_939_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_939_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_939_##choice
#define INSULT_PRIVATE_EVAL_REC_939_CONTINUE                   INSULT_PRIVATE_EVAL_REC_940
#define INSULT_PRIVATE_EVAL_REC_939_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_940(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_940_OVERLOAD(INSULT_PRIVATE_EVAL_REC_940_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_940_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_940_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_940_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_940_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_940_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_940_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_940_##choice
#define INSULT_PRIVATE_EVAL_REC_940_CONTINUE                   INSULT_PRIVATE_EVAL_REC_941
#define INSULT_PRIVATE_EVAL_REC_940_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_941(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_941_OVERLOAD(INSULT_PRIVATE_EVAL_REC_941_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_941_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_941_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_941_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_941_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_941_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_941_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_941_##choice
#define INSULT_PRIVATE_EVAL_REC_941_CONTINUE                   INSULT_PRIVATE_EVAL_REC_942
#define INSULT_PRIVATE_EVAL_REC_941_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_942(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_942_OVERLOAD(INSULT_PRIVATE_EVAL_REC_942_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_942_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_942_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_942_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_942_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_942_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_942_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_942_##choice
#define INSULT_PRIVATE_EVAL_REC_942_CONTINUE                   INSULT_PRIVATE_EVAL_REC_943
#define INSULT_PRIVATE_EVAL_REC_942_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_943(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_943_OVERLOAD(INSULT_PRIVATE_EVAL_REC_943_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_943_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_943_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_943_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_943_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_943_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_943_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_943_##choice
#define INSULT_PRIVATE_EVAL_REC_943_CONTINUE                   INSULT_PRIVATE_EVAL_REC_944
#define INSULT_PRIVATE_EVAL_REC_943_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_944(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_944_OVERLOAD(INSULT_PRIVATE_EVAL_REC_944_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_944_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_944_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_944_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_944_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_944_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_944_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_944_##choice
#define INSULT_PRIVATE_EVAL_REC_944_CONTINUE                   INSULT_PRIVATE_EVAL_REC_945
#define INSULT_PRIVATE_EVAL_REC_944_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_945(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_945_OVERLOAD(INSULT_PRIVATE_EVAL_REC_945_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_945_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_945_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_945_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_945_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_945_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_945_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_945_##choice
#define INSULT_PRIVATE_EVAL_REC_945_CONTINUE                   INSULT_PRIVATE_EVAL_REC_946
#define INSULT_PRIVATE_EVAL_REC_945_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_946(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_946_OVERLOAD(INSULT_PRIVATE_EVAL_REC_946_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_946_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_946_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_946_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_946_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_946_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_946_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_946_##choice
#define INSULT_PRIVATE_EVAL_REC_946_CONTINUE                   INSULT_PRIVATE_EVAL_REC_947
#define INSULT_PRIVATE_EVAL_REC_946_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_947(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_947_OVERLOAD(INSULT_PRIVATE_EVAL_REC_947_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_947_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_947_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_947_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_947_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_947_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_947_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_947_##choice
#define INSULT_PRIVATE_EVAL_REC_947_CONTINUE                   INSULT_PRIVATE_EVAL_REC_948
#define INSULT_PRIVATE_EVAL_REC_947_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_948(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_948_OVERLOAD(INSULT_PRIVATE_EVAL_REC_948_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_948_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_948_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_948_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_948_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_948_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_948_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_948_##choice
#define INSULT_PRIVATE_EVAL_REC_948_CONTINUE                   INSULT_PRIVATE_EVAL_REC_949
#define INSULT_PRIVATE_EVAL_REC_948_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_949(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_949_OVERLOAD(INSULT_PRIVATE_EVAL_REC_949_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_949_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_949_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_949_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_949_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_949_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_949_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_949_##choice
#define INSULT_PRIVATE_EVAL_REC_949_CONTINUE                   INSULT_PRIVATE_EVAL_REC_950
#define INSULT_PRIVATE_EVAL_REC_949_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_950(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_950_OVERLOAD(INSULT_PRIVATE_EVAL_REC_950_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_950_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_950_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_950_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_950_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_950_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_950_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_950_##choice
#define INSULT_PRIVATE_EVAL_REC_950_CONTINUE                   INSULT_PRIVATE_EVAL_REC_951
#define INSULT_PRIVATE_EVAL_REC_950_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_951(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_951_OVERLOAD(INSULT_PRIVATE_EVAL_REC_951_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_951_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_951_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_951_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_951_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_951_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_951_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_951_##choice
#define INSULT_PRIVATE_EVAL_REC_951_CONTINUE                   INSULT_PRIVATE_EVAL_REC_952
#define INSULT_PRIVATE_EVAL_REC_951_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_952(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_952_OVERLOAD(INSULT_PRIVATE_EVAL_REC_952_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_952_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_952_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_952_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_952_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_952_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_952_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_952_##choice
#define INSULT_PRIVATE_EVAL_REC_952_CONTINUE                   INSULT_PRIVATE_EVAL_REC_953
#define INSULT_PRIVATE_EVAL_REC_952_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_953(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_953_OVERLOAD(INSULT_PRIVATE_EVAL_REC_953_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_953_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_953_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_953_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_953_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_953_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_953_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_953_##choice
#define INSULT_PRIVATE_EVAL_REC_953_CONTINUE                   INSULT_PRIVATE_EVAL_REC_954
#define INSULT_PRIVATE_EVAL_REC_953_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_954(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_954_OVERLOAD(INSULT_PRIVATE_EVAL_REC_954_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_954_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_954_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_954_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_954_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_954_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_954_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_954_##choice
#define INSULT_PRIVATE_EVAL_REC_954_CONTINUE                   INSULT_PRIVATE_EVAL_REC_955
#define INSULT_PRIVATE_EVAL_REC_954_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_955(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_955_OVERLOAD(INSULT_PRIVATE_EVAL_REC_955_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_955_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_955_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_955_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_955_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_955_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_955_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_955_##choice
#define INSULT_PRIVATE_EVAL_REC_955_CONTINUE                   INSULT_PRIVATE_EVAL_REC_956
#define INSULT_PRIVATE_EVAL_REC_955_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_956(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_956_OVERLOAD(INSULT_PRIVATE_EVAL_REC_956_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_956_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_956_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_956_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_956_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_956_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_956_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_956_##choice
#define INSULT_PRIVATE_EVAL_REC_956_CONTINUE                   INSULT_PRIVATE_EVAL_REC_957
#define INSULT_PRIVATE_EVAL_REC_956_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_957(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_957_OVERLOAD(INSULT_PRIVATE_EVAL_REC_957_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_957_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_957_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_957_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_957_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_957_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_957_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_957_##choice
#define INSULT_PRIVATE_EVAL_REC_957_CONTINUE                   INSULT_PRIVATE_EVAL_REC_958
#define INSULT_PRIVATE_EVAL_REC_957_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_958(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_958_OVERLOAD(INSULT_PRIVATE_EVAL_REC_958_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_958_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_958_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_958_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_958_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_958_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_958_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_958_##choice
#define INSULT_PRIVATE_EVAL_REC_958_CONTINUE                   INSULT_PRIVATE_EVAL_REC_959
#define INSULT_PRIVATE_EVAL_REC_958_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_959(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_959_OVERLOAD(INSULT_PRIVATE_EVAL_REC_959_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_959_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_959_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_959_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_959_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_959_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_959_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_959_##choice
#define INSULT_PRIVATE_EVAL_REC_959_CONTINUE                   INSULT_PRIVATE_EVAL_REC_960
#define INSULT_PRIVATE_EVAL_REC_959_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_960(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_960_OVERLOAD(INSULT_PRIVATE_EVAL_REC_960_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_960_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_960_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_960_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_960_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_960_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_960_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_960_##choice
#define INSULT_PRIVATE_EVAL_REC_960_CONTINUE                   INSULT_PRIVATE_EVAL_REC_961
#define INSULT_PRIVATE_EVAL_REC_960_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_961(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_961_OVERLOAD(INSULT_PRIVATE_EVAL_REC_961_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_961_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_961_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_961_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_961_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_961_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_961_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_961_##choice
#define INSULT_PRIVATE_EVAL_REC_961_CONTINUE                   INSULT_PRIVATE_EVAL_REC_962
#define INSULT_PRIVATE_EVAL_REC_961_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_962(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_962_OVERLOAD(INSULT_PRIVATE_EVAL_REC_962_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_962_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_962_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_962_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_962_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_962_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_962_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_962_##choice
#define INSULT_PRIVATE_EVAL_REC_962_CONTINUE                   INSULT_PRIVATE_EVAL_REC_963
#define INSULT_PRIVATE_EVAL_REC_962_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_963(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_963_OVERLOAD(INSULT_PRIVATE_EVAL_REC_963_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_963_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_963_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_963_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_963_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_963_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_963_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_963_##choice
#define INSULT_PRIVATE_EVAL_REC_963_CONTINUE                   INSULT_PRIVATE_EVAL_REC_964
#define INSULT_PRIVATE_EVAL_REC_963_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_964(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_964_OVERLOAD(INSULT_PRIVATE_EVAL_REC_964_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_964_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_964_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_964_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_964_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_964_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_964_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_964_##choice
#define INSULT_PRIVATE_EVAL_REC_964_CONTINUE                   INSULT_PRIVATE_EVAL_REC_965
#define INSULT_PRIVATE_EVAL_REC_964_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_965(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_965_OVERLOAD(INSULT_PRIVATE_EVAL_REC_965_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_965_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_965_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_965_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_965_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_965_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_965_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_965_##choice
#define INSULT_PRIVATE_EVAL_REC_965_CONTINUE                   INSULT_PRIVATE_EVAL_REC_966
#define INSULT_PRIVATE_EVAL_REC_965_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_966(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_966_OVERLOAD(INSULT_PRIVATE_EVAL_REC_966_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_966_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_966_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_966_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_966_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_966_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_966_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_966_##choice
#define INSULT_PRIVATE_EVAL_REC_966_CONTINUE                   INSULT_PRIVATE_EVAL_REC_967
#define INSULT_PRIVATE_EVAL_REC_966_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_967(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_967_OVERLOAD(INSULT_PRIVATE_EVAL_REC_967_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_967_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_967_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_967_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_967_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_967_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_967_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_967_##choice
#define INSULT_PRIVATE_EVAL_REC_967_CONTINUE                   INSULT_PRIVATE_EVAL_REC_968
#define INSULT_PRIVATE_EVAL_REC_967_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_968(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_968_OVERLOAD(INSULT_PRIVATE_EVAL_REC_968_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_968_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_968_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_968_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_968_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_968_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_968_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_968_##choice
#define INSULT_PRIVATE_EVAL_REC_968_CONTINUE                   INSULT_PRIVATE_EVAL_REC_969
#define INSULT_PRIVATE_EVAL_REC_968_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_969(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_969_OVERLOAD(INSULT_PRIVATE_EVAL_REC_969_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_969_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_969_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_969_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_969_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_969_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_969_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_969_##choice
#define INSULT_PRIVATE_EVAL_REC_969_CONTINUE                   INSULT_PRIVATE_EVAL_REC_970
#define INSULT_PRIVATE_EVAL_REC_969_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_970(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_970_OVERLOAD(INSULT_PRIVATE_EVAL_REC_970_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_970_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_970_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_970_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_970_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_970_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_970_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_970_##choice
#define INSULT_PRIVATE_EVAL_REC_970_CONTINUE                   INSULT_PRIVATE_EVAL_REC_971
#define INSULT_PRIVATE_EVAL_REC_970_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_971(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_971_OVERLOAD(INSULT_PRIVATE_EVAL_REC_971_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_971_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_971_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_971_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_971_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_971_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_971_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_971_##choice
#define INSULT_PRIVATE_EVAL_REC_971_CONTINUE                   INSULT_PRIVATE_EVAL_REC_972
#define INSULT_PRIVATE_EVAL_REC_971_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_972(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_972_OVERLOAD(INSULT_PRIVATE_EVAL_REC_972_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_972_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_972_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_972_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_972_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_972_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_972_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_972_##choice
#define INSULT_PRIVATE_EVAL_REC_972_CONTINUE                   INSULT_PRIVATE_EVAL_REC_973
#define INSULT_PRIVATE_EVAL_REC_972_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_973(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_973_OVERLOAD(INSULT_PRIVATE_EVAL_REC_973_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_973_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_973_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_973_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_973_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_973_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_973_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_973_##choice
#define INSULT_PRIVATE_EVAL_REC_973_CONTINUE                   INSULT_PRIVATE_EVAL_REC_974
#define INSULT_PRIVATE_EVAL_REC_973_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_974(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_974_OVERLOAD(INSULT_PRIVATE_EVAL_REC_974_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_974_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_974_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_974_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_974_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_974_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_974_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_974_##choice
#define INSULT_PRIVATE_EVAL_REC_974_CONTINUE                   INSULT_PRIVATE_EVAL_REC_975
#define INSULT_PRIVATE_EVAL_REC_974_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_975(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_975_OVERLOAD(INSULT_PRIVATE_EVAL_REC_975_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_975_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_975_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_975_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_975_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_975_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_975_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_975_##choice
#define INSULT_PRIVATE_EVAL_REC_975_CONTINUE                   INSULT_PRIVATE_EVAL_REC_976
#define INSULT_PRIVATE_EVAL_REC_975_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_976(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_976_OVERLOAD(INSULT_PRIVATE_EVAL_REC_976_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_976_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_976_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_976_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_976_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_976_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_976_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_976_##choice
#define INSULT_PRIVATE_EVAL_REC_976_CONTINUE                   INSULT_PRIVATE_EVAL_REC_977
#define INSULT_PRIVATE_EVAL_REC_976_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_977(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_977_OVERLOAD(INSULT_PRIVATE_EVAL_REC_977_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_977_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_977_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_977_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_977_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_977_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_977_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_977_##choice
#define INSULT_PRIVATE_EVAL_REC_977_CONTINUE                   INSULT_PRIVATE_EVAL_REC_978
#define INSULT_PRIVATE_EVAL_REC_977_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_978(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_978_OVERLOAD(INSULT_PRIVATE_EVAL_REC_978_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_978_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_978_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_978_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_978_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_978_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_978_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_978_##choice
#define INSULT_PRIVATE_EVAL_REC_978_CONTINUE                   INSULT_PRIVATE_EVAL_REC_979
#define INSULT_PRIVATE_EVAL_REC_978_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_979(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_979_OVERLOAD(INSULT_PRIVATE_EVAL_REC_979_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_979_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_979_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_979_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_979_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_979_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_979_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_979_##choice
#define INSULT_PRIVATE_EVAL_REC_979_CONTINUE                   INSULT_PRIVATE_EVAL_REC_980
#define INSULT_PRIVATE_EVAL_REC_979_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_980(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_980_OVERLOAD(INSULT_PRIVATE_EVAL_REC_980_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_980_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_980_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_980_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_980_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_980_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_980_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_980_##choice
#define INSULT_PRIVATE_EVAL_REC_980_CONTINUE                   INSULT_PRIVATE_EVAL_REC_981
#define INSULT_PRIVATE_EVAL_REC_980_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_981(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_981_OVERLOAD(INSULT_PRIVATE_EVAL_REC_981_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_981_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_981_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_981_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_981_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_981_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_981_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_981_##choice
#define INSULT_PRIVATE_EVAL_REC_981_CONTINUE                   INSULT_PRIVATE_EVAL_REC_982
#define INSULT_PRIVATE_EVAL_REC_981_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_982(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_982_OVERLOAD(INSULT_PRIVATE_EVAL_REC_982_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_982_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_982_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_982_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_982_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_982_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_982_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_982_##choice
#define INSULT_PRIVATE_EVAL_REC_982_CONTINUE                   INSULT_PRIVATE_EVAL_REC_983
#define INSULT_PRIVATE_EVAL_REC_982_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_983(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_983_OVERLOAD(INSULT_PRIVATE_EVAL_REC_983_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_983_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_983_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_983_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_983_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_983_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_983_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_983_##choice
#define INSULT_PRIVATE_EVAL_REC_983_CONTINUE                   INSULT_PRIVATE_EVAL_REC_984
#define INSULT_PRIVATE_EVAL_REC_983_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_984(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_984_OVERLOAD(INSULT_PRIVATE_EVAL_REC_984_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_984_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_984_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_984_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_984_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_984_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_984_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_984_##choice
#define INSULT_PRIVATE_EVAL_REC_984_CONTINUE                   INSULT_PRIVATE_EVAL_REC_985
#define INSULT_PRIVATE_EVAL_REC_984_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_985(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_985_OVERLOAD(INSULT_PRIVATE_EVAL_REC_985_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_985_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_985_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_985_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_985_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_985_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_985_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_985_##choice
#define INSULT_PRIVATE_EVAL_REC_985_CONTINUE                   INSULT_PRIVATE_EVAL_REC_986
#define INSULT_PRIVATE_EVAL_REC_985_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_986(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_986_OVERLOAD(INSULT_PRIVATE_EVAL_REC_986_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_986_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_986_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_986_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_986_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_986_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_986_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_986_##choice
#define INSULT_PRIVATE_EVAL_REC_986_CONTINUE                   INSULT_PRIVATE_EVAL_REC_987
#define INSULT_PRIVATE_EVAL_REC_986_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_987(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_987_OVERLOAD(INSULT_PRIVATE_EVAL_REC_987_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_987_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_987_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_987_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_987_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_987_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_987_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_987_##choice
#define INSULT_PRIVATE_EVAL_REC_987_CONTINUE                   INSULT_PRIVATE_EVAL_REC_988
#define INSULT_PRIVATE_EVAL_REC_987_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_988(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_988_OVERLOAD(INSULT_PRIVATE_EVAL_REC_988_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_988_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_988_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_988_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_988_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_988_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_988_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_988_##choice
#define INSULT_PRIVATE_EVAL_REC_988_CONTINUE                   INSULT_PRIVATE_EVAL_REC_989
#define INSULT_PRIVATE_EVAL_REC_988_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_989(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_989_OVERLOAD(INSULT_PRIVATE_EVAL_REC_989_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_989_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_989_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_989_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_989_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_989_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_989_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_989_##choice
#define INSULT_PRIVATE_EVAL_REC_989_CONTINUE                   INSULT_PRIVATE_EVAL_REC_990
#define INSULT_PRIVATE_EVAL_REC_989_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_990(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_990_OVERLOAD(INSULT_PRIVATE_EVAL_REC_990_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_990_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_990_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_990_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_990_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_990_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_990_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_990_##choice
#define INSULT_PRIVATE_EVAL_REC_990_CONTINUE                   INSULT_PRIVATE_EVAL_REC_991
#define INSULT_PRIVATE_EVAL_REC_990_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_991(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_991_OVERLOAD(INSULT_PRIVATE_EVAL_REC_991_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_991_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_991_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_991_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_991_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_991_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_991_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_991_##choice
#define INSULT_PRIVATE_EVAL_REC_991_CONTINUE                   INSULT_PRIVATE_EVAL_REC_992
#define INSULT_PRIVATE_EVAL_REC_991_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_992(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_992_OVERLOAD(INSULT_PRIVATE_EVAL_REC_992_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_992_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_992_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_992_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_992_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_992_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_992_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_992_##choice
#define INSULT_PRIVATE_EVAL_REC_992_CONTINUE                   INSULT_PRIVATE_EVAL_REC_993
#define INSULT_PRIVATE_EVAL_REC_992_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_993(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_993_OVERLOAD(INSULT_PRIVATE_EVAL_REC_993_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_993_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_993_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_993_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_993_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_993_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_993_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_993_##choice
#define INSULT_PRIVATE_EVAL_REC_993_CONTINUE                   INSULT_PRIVATE_EVAL_REC_994
#define INSULT_PRIVATE_EVAL_REC_993_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_994(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_994_OVERLOAD(INSULT_PRIVATE_EVAL_REC_994_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_994_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_994_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_994_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_994_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_994_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_994_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_994_##choice
#define INSULT_PRIVATE_EVAL_REC_994_CONTINUE                   INSULT_PRIVATE_EVAL_REC_995
#define INSULT_PRIVATE_EVAL_REC_994_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_995(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_995_OVERLOAD(INSULT_PRIVATE_EVAL_REC_995_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_995_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_995_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_995_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_995_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_995_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_995_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_995_##choice
#define INSULT_PRIVATE_EVAL_REC_995_CONTINUE                   INSULT_PRIVATE_EVAL_REC_996
#define INSULT_PRIVATE_EVAL_REC_995_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_996(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_996_OVERLOAD(INSULT_PRIVATE_EVAL_REC_996_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_996_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_996_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_996_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_996_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_996_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_996_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_996_##choice
#define INSULT_PRIVATE_EVAL_REC_996_CONTINUE                   INSULT_PRIVATE_EVAL_REC_997
#define INSULT_PRIVATE_EVAL_REC_996_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_997(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_997_OVERLOAD(INSULT_PRIVATE_EVAL_REC_997_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_997_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_997_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_997_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_997_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_997_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_997_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_997_##choice
#define INSULT_PRIVATE_EVAL_REC_997_CONTINUE                   INSULT_PRIVATE_EVAL_REC_998
#define INSULT_PRIVATE_EVAL_REC_997_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_998(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_998_OVERLOAD(INSULT_PRIVATE_EVAL_REC_998_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_998_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_998_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_998_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_998_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_998_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_998_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_998_##choice
#define INSULT_PRIVATE_EVAL_REC_998_CONTINUE                   INSULT_PRIVATE_EVAL_REC_999
#define INSULT_PRIVATE_EVAL_REC_998_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_999(...)                                                           \
    INSULT_PRIVATE_EVAL_REC_999_OVERLOAD(INSULT_PRIVATE_EVAL_REC_999_GET_CHOICE(__VA_ARGS__))      \
    (INSULT_PRIVATE_EVAL_REC_999_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_999_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_999_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_999_OVERLOAD(choice)                                               \
    INSULT_PRIVATE_EVAL_REC_999_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_999_OVERLOAD_PRIMITIVE(choice) INSULT_PRIVATE_EVAL_REC_999_##choice
#define INSULT_PRIVATE_EVAL_REC_999_CONTINUE                   INSULT_PRIVATE_EVAL_REC_1000
#define INSULT_PRIVATE_EVAL_REC_999_STOP(...)                  __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_1000(...)                                                          \
    INSULT_PRIVATE_EVAL_REC_1000_OVERLOAD(INSULT_PRIVATE_EVAL_REC_1000_GET_CHOICE(__VA_ARGS__))    \
    (INSULT_PRIVATE_EVAL_REC_1000_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_1000_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_1000_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_1000_OVERLOAD(choice)                                              \
    INSULT_PRIVATE_EVAL_REC_1000_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_1000_OVERLOAD_PRIMITIVE(choice)                                    \
    INSULT_PRIVATE_EVAL_REC_1000_##choice
#define INSULT_PRIVATE_EVAL_REC_1000_CONTINUE  INSULT_PRIVATE_EVAL_REC_1001
#define INSULT_PRIVATE_EVAL_REC_1000_STOP(...) __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_1001(...)                                                          \
    INSULT_PRIVATE_EVAL_REC_1001_OVERLOAD(INSULT_PRIVATE_EVAL_REC_1001_GET_CHOICE(__VA_ARGS__))    \
    (INSULT_PRIVATE_EVAL_REC_1001_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_1001_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_1001_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_1001_OVERLOAD(choice)                                              \
    INSULT_PRIVATE_EVAL_REC_1001_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_1001_OVERLOAD_PRIMITIVE(choice)                                    \
    INSULT_PRIVATE_EVAL_REC_1001_##choice
#define INSULT_PRIVATE_EVAL_REC_1001_CONTINUE  INSULT_PRIVATE_EVAL_REC_1002
#define INSULT_PRIVATE_EVAL_REC_1001_STOP(...) __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_1002(...)                                                          \
    INSULT_PRIVATE_EVAL_REC_1002_OVERLOAD(INSULT_PRIVATE_EVAL_REC_1002_GET_CHOICE(__VA_ARGS__))    \
    (INSULT_PRIVATE_EVAL_REC_1002_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_1002_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_1002_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_1002_OVERLOAD(choice)                                              \
    INSULT_PRIVATE_EVAL_REC_1002_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_1002_OVERLOAD_PRIMITIVE(choice)                                    \
    INSULT_PRIVATE_EVAL_REC_1002_##choice
#define INSULT_PRIVATE_EVAL_REC_1002_CONTINUE  INSULT_PRIVATE_EVAL_REC_1003
#define INSULT_PRIVATE_EVAL_REC_1002_STOP(...) __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_1003(...)                                                          \
    INSULT_PRIVATE_EVAL_REC_1003_OVERLOAD(INSULT_PRIVATE_EVAL_REC_1003_GET_CHOICE(__VA_ARGS__))    \
    (INSULT_PRIVATE_EVAL_REC_1003_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_1003_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_1003_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_1003_OVERLOAD(choice)                                              \
    INSULT_PRIVATE_EVAL_REC_1003_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_1003_OVERLOAD_PRIMITIVE(choice)                                    \
    INSULT_PRIVATE_EVAL_REC_1003_##choice
#define INSULT_PRIVATE_EVAL_REC_1003_CONTINUE  INSULT_PRIVATE_EVAL_REC_1004
#define INSULT_PRIVATE_EVAL_REC_1003_STOP(...) __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_1004(...)                                                          \
    INSULT_PRIVATE_EVAL_REC_1004_OVERLOAD(INSULT_PRIVATE_EVAL_REC_1004_GET_CHOICE(__VA_ARGS__))    \
    (INSULT_PRIVATE_EVAL_REC_1004_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_1004_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_1004_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_1004_OVERLOAD(choice)                                              \
    INSULT_PRIVATE_EVAL_REC_1004_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_1004_OVERLOAD_PRIMITIVE(choice)                                    \
    INSULT_PRIVATE_EVAL_REC_1004_##choice
#define INSULT_PRIVATE_EVAL_REC_1004_CONTINUE  INSULT_PRIVATE_EVAL_REC_1005
#define INSULT_PRIVATE_EVAL_REC_1004_STOP(...) __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_1005(...)                                                          \
    INSULT_PRIVATE_EVAL_REC_1005_OVERLOAD(INSULT_PRIVATE_EVAL_REC_1005_GET_CHOICE(__VA_ARGS__))    \
    (INSULT_PRIVATE_EVAL_REC_1005_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_1005_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_1005_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_1005_OVERLOAD(choice)                                              \
    INSULT_PRIVATE_EVAL_REC_1005_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_1005_OVERLOAD_PRIMITIVE(choice)                                    \
    INSULT_PRIVATE_EVAL_REC_1005_##choice
#define INSULT_PRIVATE_EVAL_REC_1005_CONTINUE  INSULT_PRIVATE_EVAL_REC_1006
#define INSULT_PRIVATE_EVAL_REC_1005_STOP(...) __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_1006(...)                                                          \
    INSULT_PRIVATE_EVAL_REC_1006_OVERLOAD(INSULT_PRIVATE_EVAL_REC_1006_GET_CHOICE(__VA_ARGS__))    \
    (INSULT_PRIVATE_EVAL_REC_1006_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_1006_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_1006_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_1006_OVERLOAD(choice)                                              \
    INSULT_PRIVATE_EVAL_REC_1006_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_1006_OVERLOAD_PRIMITIVE(choice)                                    \
    INSULT_PRIVATE_EVAL_REC_1006_##choice
#define INSULT_PRIVATE_EVAL_REC_1006_CONTINUE  INSULT_PRIVATE_EVAL_REC_1007
#define INSULT_PRIVATE_EVAL_REC_1006_STOP(...) __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_1007(...)                                                          \
    INSULT_PRIVATE_EVAL_REC_1007_OVERLOAD(INSULT_PRIVATE_EVAL_REC_1007_GET_CHOICE(__VA_ARGS__))    \
    (INSULT_PRIVATE_EVAL_REC_1007_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_1007_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_1007_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_1007_OVERLOAD(choice)                                              \
    INSULT_PRIVATE_EVAL_REC_1007_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_1007_OVERLOAD_PRIMITIVE(choice)                                    \
    INSULT_PRIVATE_EVAL_REC_1007_##choice
#define INSULT_PRIVATE_EVAL_REC_1007_CONTINUE  INSULT_PRIVATE_EVAL_REC_1008
#define INSULT_PRIVATE_EVAL_REC_1007_STOP(...) __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_1008(...)                                                          \
    INSULT_PRIVATE_EVAL_REC_1008_OVERLOAD(INSULT_PRIVATE_EVAL_REC_1008_GET_CHOICE(__VA_ARGS__))    \
    (INSULT_PRIVATE_EVAL_REC_1008_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_1008_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_1008_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_1008_OVERLOAD(choice)                                              \
    INSULT_PRIVATE_EVAL_REC_1008_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_1008_OVERLOAD_PRIMITIVE(choice)                                    \
    INSULT_PRIVATE_EVAL_REC_1008_##choice
#define INSULT_PRIVATE_EVAL_REC_1008_CONTINUE  INSULT_PRIVATE_EVAL_REC_1009
#define INSULT_PRIVATE_EVAL_REC_1008_STOP(...) __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_1009(...)                                                          \
    INSULT_PRIVATE_EVAL_REC_1009_OVERLOAD(INSULT_PRIVATE_EVAL_REC_1009_GET_CHOICE(__VA_ARGS__))    \
    (INSULT_PRIVATE_EVAL_REC_1009_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_1009_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_1009_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_1009_OVERLOAD(choice)                                              \
    INSULT_PRIVATE_EVAL_REC_1009_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_1009_OVERLOAD_PRIMITIVE(choice)                                    \
    INSULT_PRIVATE_EVAL_REC_1009_##choice
#define INSULT_PRIVATE_EVAL_REC_1009_CONTINUE  INSULT_PRIVATE_EVAL_REC_1010
#define INSULT_PRIVATE_EVAL_REC_1009_STOP(...) __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_1010(...)                                                          \
    INSULT_PRIVATE_EVAL_REC_1010_OVERLOAD(INSULT_PRIVATE_EVAL_REC_1010_GET_CHOICE(__VA_ARGS__))    \
    (INSULT_PRIVATE_EVAL_REC_1010_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_1010_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_1010_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_1010_OVERLOAD(choice)                                              \
    INSULT_PRIVATE_EVAL_REC_1010_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_1010_OVERLOAD_PRIMITIVE(choice)                                    \
    INSULT_PRIVATE_EVAL_REC_1010_##choice
#define INSULT_PRIVATE_EVAL_REC_1010_CONTINUE  INSULT_PRIVATE_EVAL_REC_1011
#define INSULT_PRIVATE_EVAL_REC_1010_STOP(...) __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_1011(...)                                                          \
    INSULT_PRIVATE_EVAL_REC_1011_OVERLOAD(INSULT_PRIVATE_EVAL_REC_1011_GET_CHOICE(__VA_ARGS__))    \
    (INSULT_PRIVATE_EVAL_REC_1011_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_1011_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_1011_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_1011_OVERLOAD(choice)                                              \
    INSULT_PRIVATE_EVAL_REC_1011_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_1011_OVERLOAD_PRIMITIVE(choice)                                    \
    INSULT_PRIVATE_EVAL_REC_1011_##choice
#define INSULT_PRIVATE_EVAL_REC_1011_CONTINUE  INSULT_PRIVATE_EVAL_REC_1012
#define INSULT_PRIVATE_EVAL_REC_1011_STOP(...) __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_1012(...)                                                          \
    INSULT_PRIVATE_EVAL_REC_1012_OVERLOAD(INSULT_PRIVATE_EVAL_REC_1012_GET_CHOICE(__VA_ARGS__))    \
    (INSULT_PRIVATE_EVAL_REC_1012_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_1012_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_1012_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_1012_OVERLOAD(choice)                                              \
    INSULT_PRIVATE_EVAL_REC_1012_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_1012_OVERLOAD_PRIMITIVE(choice)                                    \
    INSULT_PRIVATE_EVAL_REC_1012_##choice
#define INSULT_PRIVATE_EVAL_REC_1012_CONTINUE  INSULT_PRIVATE_EVAL_REC_1013
#define INSULT_PRIVATE_EVAL_REC_1012_STOP(...) __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_1013(...)                                                          \
    INSULT_PRIVATE_EVAL_REC_1013_OVERLOAD(INSULT_PRIVATE_EVAL_REC_1013_GET_CHOICE(__VA_ARGS__))    \
    (INSULT_PRIVATE_EVAL_REC_1013_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_1013_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_1013_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_1013_OVERLOAD(choice)                                              \
    INSULT_PRIVATE_EVAL_REC_1013_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_1013_OVERLOAD_PRIMITIVE(choice)                                    \
    INSULT_PRIVATE_EVAL_REC_1013_##choice
#define INSULT_PRIVATE_EVAL_REC_1013_CONTINUE  INSULT_PRIVATE_EVAL_REC_1014
#define INSULT_PRIVATE_EVAL_REC_1013_STOP(...) __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_1014(...)                                                          \
    INSULT_PRIVATE_EVAL_REC_1014_OVERLOAD(INSULT_PRIVATE_EVAL_REC_1014_GET_CHOICE(__VA_ARGS__))    \
    (INSULT_PRIVATE_EVAL_REC_1014_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_1014_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_1014_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_1014_OVERLOAD(choice)                                              \
    INSULT_PRIVATE_EVAL_REC_1014_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_1014_OVERLOAD_PRIMITIVE(choice)                                    \
    INSULT_PRIVATE_EVAL_REC_1014_##choice
#define INSULT_PRIVATE_EVAL_REC_1014_CONTINUE  INSULT_PRIVATE_EVAL_REC_1015
#define INSULT_PRIVATE_EVAL_REC_1014_STOP(...) __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_1015(...)                                                          \
    INSULT_PRIVATE_EVAL_REC_1015_OVERLOAD(INSULT_PRIVATE_EVAL_REC_1015_GET_CHOICE(__VA_ARGS__))    \
    (INSULT_PRIVATE_EVAL_REC_1015_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_1015_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_1015_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_1015_OVERLOAD(choice)                                              \
    INSULT_PRIVATE_EVAL_REC_1015_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_1015_OVERLOAD_PRIMITIVE(choice)                                    \
    INSULT_PRIVATE_EVAL_REC_1015_##choice
#define INSULT_PRIVATE_EVAL_REC_1015_CONTINUE  INSULT_PRIVATE_EVAL_REC_1016
#define INSULT_PRIVATE_EVAL_REC_1015_STOP(...) __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_1016(...)                                                          \
    INSULT_PRIVATE_EVAL_REC_1016_OVERLOAD(INSULT_PRIVATE_EVAL_REC_1016_GET_CHOICE(__VA_ARGS__))    \
    (INSULT_PRIVATE_EVAL_REC_1016_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_1016_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_1016_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_1016_OVERLOAD(choice)                                              \
    INSULT_PRIVATE_EVAL_REC_1016_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_1016_OVERLOAD_PRIMITIVE(choice)                                    \
    INSULT_PRIVATE_EVAL_REC_1016_##choice
#define INSULT_PRIVATE_EVAL_REC_1016_CONTINUE  INSULT_PRIVATE_EVAL_REC_1017
#define INSULT_PRIVATE_EVAL_REC_1016_STOP(...) __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_1017(...)                                                          \
    INSULT_PRIVATE_EVAL_REC_1017_OVERLOAD(INSULT_PRIVATE_EVAL_REC_1017_GET_CHOICE(__VA_ARGS__))    \
    (INSULT_PRIVATE_EVAL_REC_1017_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_1017_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_1017_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_1017_OVERLOAD(choice)                                              \
    INSULT_PRIVATE_EVAL_REC_1017_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_1017_OVERLOAD_PRIMITIVE(choice)                                    \
    INSULT_PRIVATE_EVAL_REC_1017_##choice
#define INSULT_PRIVATE_EVAL_REC_1017_CONTINUE  INSULT_PRIVATE_EVAL_REC_1018
#define INSULT_PRIVATE_EVAL_REC_1017_STOP(...) __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_1018(...)                                                          \
    INSULT_PRIVATE_EVAL_REC_1018_OVERLOAD(INSULT_PRIVATE_EVAL_REC_1018_GET_CHOICE(__VA_ARGS__))    \
    (INSULT_PRIVATE_EVAL_REC_1018_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_1018_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_1018_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_1018_OVERLOAD(choice)                                              \
    INSULT_PRIVATE_EVAL_REC_1018_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_1018_OVERLOAD_PRIMITIVE(choice)                                    \
    INSULT_PRIVATE_EVAL_REC_1018_##choice
#define INSULT_PRIVATE_EVAL_REC_1018_CONTINUE  INSULT_PRIVATE_EVAL_REC_1019
#define INSULT_PRIVATE_EVAL_REC_1018_STOP(...) __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_1019(...)                                                          \
    INSULT_PRIVATE_EVAL_REC_1019_OVERLOAD(INSULT_PRIVATE_EVAL_REC_1019_GET_CHOICE(__VA_ARGS__))    \
    (INSULT_PRIVATE_EVAL_REC_1019_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_1019_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_1019_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_1019_OVERLOAD(choice)                                              \
    INSULT_PRIVATE_EVAL_REC_1019_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_1019_OVERLOAD_PRIMITIVE(choice)                                    \
    INSULT_PRIVATE_EVAL_REC_1019_##choice
#define INSULT_PRIVATE_EVAL_REC_1019_CONTINUE  INSULT_PRIVATE_EVAL_REC_1020
#define INSULT_PRIVATE_EVAL_REC_1019_STOP(...) __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_1020(...)                                                          \
    INSULT_PRIVATE_EVAL_REC_1020_OVERLOAD(INSULT_PRIVATE_EVAL_REC_1020_GET_CHOICE(__VA_ARGS__))    \
    (INSULT_PRIVATE_EVAL_REC_1020_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_1020_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_1020_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_1020_OVERLOAD(choice)                                              \
    INSULT_PRIVATE_EVAL_REC_1020_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_1020_OVERLOAD_PRIMITIVE(choice)                                    \
    INSULT_PRIVATE_EVAL_REC_1020_##choice
#define INSULT_PRIVATE_EVAL_REC_1020_CONTINUE  INSULT_PRIVATE_EVAL_REC_1021
#define INSULT_PRIVATE_EVAL_REC_1020_STOP(...) __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_1021(...)                                                          \
    INSULT_PRIVATE_EVAL_REC_1021_OVERLOAD(INSULT_PRIVATE_EVAL_REC_1021_GET_CHOICE(__VA_ARGS__))    \
    (INSULT_PRIVATE_EVAL_REC_1021_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_1021_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_1021_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_1021_OVERLOAD(choice)                                              \
    INSULT_PRIVATE_EVAL_REC_1021_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_1021_OVERLOAD_PRIMITIVE(choice)                                    \
    INSULT_PRIVATE_EVAL_REC_1021_##choice
#define INSULT_PRIVATE_EVAL_REC_1021_CONTINUE  INSULT_PRIVATE_EVAL_REC_1022
#define INSULT_PRIVATE_EVAL_REC_1021_STOP(...) __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_1022(...)                                                          \
    INSULT_PRIVATE_EVAL_REC_1022_OVERLOAD(INSULT_PRIVATE_EVAL_REC_1022_GET_CHOICE(__VA_ARGS__))    \
    (INSULT_PRIVATE_EVAL_REC_1022_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_1022_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_1022_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_1022_OVERLOAD(choice)                                              \
    INSULT_PRIVATE_EVAL_REC_1022_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_1022_OVERLOAD_PRIMITIVE(choice)                                    \
    INSULT_PRIVATE_EVAL_REC_1022_##choice
#define INSULT_PRIVATE_EVAL_REC_1022_CONTINUE  INSULT_PRIVATE_EVAL_REC_1023
#define INSULT_PRIVATE_EVAL_REC_1022_STOP(...) __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_1023(...)                                                          \
    INSULT_PRIVATE_EVAL_REC_1023_OVERLOAD(INSULT_PRIVATE_EVAL_REC_1023_GET_CHOICE(__VA_ARGS__))    \
    (INSULT_PRIVATE_EVAL_REC_1023_GET_REST(__VA_ARGS__))
#define INSULT_PRIVATE_EVAL_REC_1023_GET_CHOICE(choice, ...) choice
#define INSULT_PRIVATE_EVAL_REC_1023_GET_REST(choice, ...)   __VA_ARGS__
#define INSULT_PRIVATE_EVAL_REC_1023_OVERLOAD(choice)                                              \
    INSULT_PRIVATE_EVAL_REC_1023_OVERLOAD_PRIMITIVE(choice)
#define INSULT_PRIVATE_EVAL_REC_1023_OVERLOAD_PRIMITIVE(choice)                                    \
    INSULT_PRIVATE_EVAL_REC_1023_##choice
#define INSULT_PRIVATE_EVAL_REC_1023_CONTINUE  INSULT_PRIVATE_EVAL_REC_1024
#define INSULT_PRIVATE_EVAL_REC_1023_STOP(...) __VA_ARGS__

#endif // INSULT_EVAL_REC_UNROLL_0_TO_1023_H
