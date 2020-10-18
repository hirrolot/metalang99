#ifndef MACROLOP_EVAL_REC_UNROLL_8192_TO_9215_H
#undef MACROLOP_EVAL_REC_UNROLL_8192_TO_9215_H

#define MACROLOP_PRIVATE_EVAL_REC_8192(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8192_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8192_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8192_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8192_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8192_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8192_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8192_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8192_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8192_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8192_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8193
#define MACROLOP_PRIVATE_EVAL_REC_8192_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8193(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8193_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8193_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8193_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8193_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8193_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8193_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8193_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8193_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8193_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8193_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8194
#define MACROLOP_PRIVATE_EVAL_REC_8193_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8194(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8194_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8194_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8194_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8194_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8194_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8194_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8194_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8194_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8194_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8194_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8195
#define MACROLOP_PRIVATE_EVAL_REC_8194_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8195(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8195_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8195_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8195_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8195_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8195_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8195_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8195_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8195_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8195_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8195_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8196
#define MACROLOP_PRIVATE_EVAL_REC_8195_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8196(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8196_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8196_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8196_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8196_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8196_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8196_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8196_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8196_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8196_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8196_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8197
#define MACROLOP_PRIVATE_EVAL_REC_8196_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8197(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8197_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8197_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8197_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8197_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8197_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8197_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8197_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8197_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8197_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8197_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8198
#define MACROLOP_PRIVATE_EVAL_REC_8197_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8198(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8198_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8198_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8198_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8198_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8198_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8198_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8198_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8198_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8198_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8198_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8199
#define MACROLOP_PRIVATE_EVAL_REC_8198_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8199(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8199_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8199_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8199_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8199_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8199_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8199_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8199_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8199_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8199_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8199_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8200
#define MACROLOP_PRIVATE_EVAL_REC_8199_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8200(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8200_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8200_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8200_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8200_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8200_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8200_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8200_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8200_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8200_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8200_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8201
#define MACROLOP_PRIVATE_EVAL_REC_8200_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8201(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8201_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8201_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8201_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8201_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8201_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8201_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8201_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8201_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8201_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8201_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8202
#define MACROLOP_PRIVATE_EVAL_REC_8201_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8202(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8202_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8202_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8202_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8202_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8202_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8202_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8202_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8202_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8202_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8202_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8203
#define MACROLOP_PRIVATE_EVAL_REC_8202_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8203(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8203_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8203_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8203_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8203_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8203_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8203_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8203_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8203_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8203_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8203_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8204
#define MACROLOP_PRIVATE_EVAL_REC_8203_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8204(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8204_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8204_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8204_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8204_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8204_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8204_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8204_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8204_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8204_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8204_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8205
#define MACROLOP_PRIVATE_EVAL_REC_8204_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8205(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8205_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8205_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8205_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8205_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8205_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8205_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8205_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8205_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8205_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8205_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8206
#define MACROLOP_PRIVATE_EVAL_REC_8205_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8206(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8206_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8206_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8206_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8206_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8206_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8206_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8206_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8206_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8206_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8206_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8207
#define MACROLOP_PRIVATE_EVAL_REC_8206_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8207(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8207_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8207_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8207_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8207_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8207_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8207_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8207_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8207_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8207_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8207_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8208
#define MACROLOP_PRIVATE_EVAL_REC_8207_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8208(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8208_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8208_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8208_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8208_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8208_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8208_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8208_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8208_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8208_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8208_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8209
#define MACROLOP_PRIVATE_EVAL_REC_8208_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8209(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8209_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8209_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8209_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8209_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8209_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8209_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8209_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8209_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8209_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8209_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8210
#define MACROLOP_PRIVATE_EVAL_REC_8209_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8210(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8210_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8210_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8210_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8210_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8210_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8210_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8210_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8210_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8210_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8210_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8211
#define MACROLOP_PRIVATE_EVAL_REC_8210_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8211(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8211_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8211_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8211_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8211_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8211_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8211_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8211_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8211_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8211_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8211_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8212
#define MACROLOP_PRIVATE_EVAL_REC_8211_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8212(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8212_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8212_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8212_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8212_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8212_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8212_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8212_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8212_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8212_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8212_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8213
#define MACROLOP_PRIVATE_EVAL_REC_8212_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8213(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8213_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8213_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8213_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8213_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8213_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8213_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8213_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8213_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8213_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8213_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8214
#define MACROLOP_PRIVATE_EVAL_REC_8213_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8214(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8214_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8214_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8214_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8214_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8214_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8214_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8214_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8214_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8214_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8214_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8215
#define MACROLOP_PRIVATE_EVAL_REC_8214_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8215(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8215_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8215_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8215_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8215_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8215_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8215_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8215_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8215_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8215_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8215_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8216
#define MACROLOP_PRIVATE_EVAL_REC_8215_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8216(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8216_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8216_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8216_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8216_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8216_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8216_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8216_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8216_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8216_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8216_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8217
#define MACROLOP_PRIVATE_EVAL_REC_8216_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8217(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8217_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8217_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8217_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8217_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8217_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8217_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8217_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8217_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8217_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8217_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8218
#define MACROLOP_PRIVATE_EVAL_REC_8217_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8218(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8218_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8218_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8218_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8218_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8218_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8218_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8218_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8218_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8218_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8218_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8219
#define MACROLOP_PRIVATE_EVAL_REC_8218_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8219(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8219_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8219_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8219_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8219_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8219_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8219_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8219_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8219_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8219_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8219_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8220
#define MACROLOP_PRIVATE_EVAL_REC_8219_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8220(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8220_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8220_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8220_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8220_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8220_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8220_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8220_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8220_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8220_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8220_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8221
#define MACROLOP_PRIVATE_EVAL_REC_8220_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8221(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8221_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8221_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8221_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8221_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8221_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8221_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8221_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8221_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8221_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8221_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8222
#define MACROLOP_PRIVATE_EVAL_REC_8221_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8222(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8222_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8222_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8222_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8222_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8222_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8222_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8222_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8222_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8222_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8222_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8223
#define MACROLOP_PRIVATE_EVAL_REC_8222_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8223(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8223_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8223_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8223_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8223_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8223_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8223_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8223_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8223_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8223_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8223_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8224
#define MACROLOP_PRIVATE_EVAL_REC_8223_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8224(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8224_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8224_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8224_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8224_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8224_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8224_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8224_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8224_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8224_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8224_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8225
#define MACROLOP_PRIVATE_EVAL_REC_8224_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8225(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8225_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8225_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8225_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8225_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8225_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8225_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8225_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8225_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8225_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8225_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8226
#define MACROLOP_PRIVATE_EVAL_REC_8225_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8226(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8226_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8226_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8226_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8226_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8226_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8226_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8226_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8226_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8226_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8226_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8227
#define MACROLOP_PRIVATE_EVAL_REC_8226_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8227(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8227_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8227_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8227_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8227_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8227_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8227_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8227_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8227_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8227_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8227_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8228
#define MACROLOP_PRIVATE_EVAL_REC_8227_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8228(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8228_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8228_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8228_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8228_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8228_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8228_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8228_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8228_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8228_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8228_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8229
#define MACROLOP_PRIVATE_EVAL_REC_8228_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8229(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8229_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8229_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8229_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8229_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8229_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8229_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8229_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8229_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8229_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8229_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8230
#define MACROLOP_PRIVATE_EVAL_REC_8229_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8230(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8230_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8230_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8230_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8230_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8230_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8230_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8230_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8230_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8230_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8230_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8231
#define MACROLOP_PRIVATE_EVAL_REC_8230_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8231(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8231_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8231_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8231_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8231_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8231_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8231_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8231_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8231_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8231_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8231_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8232
#define MACROLOP_PRIVATE_EVAL_REC_8231_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8232(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8232_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8232_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8232_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8232_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8232_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8232_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8232_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8232_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8232_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8232_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8233
#define MACROLOP_PRIVATE_EVAL_REC_8232_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8233(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8233_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8233_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8233_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8233_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8233_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8233_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8233_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8233_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8233_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8233_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8234
#define MACROLOP_PRIVATE_EVAL_REC_8233_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8234(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8234_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8234_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8234_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8234_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8234_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8234_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8234_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8234_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8234_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8234_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8235
#define MACROLOP_PRIVATE_EVAL_REC_8234_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8235(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8235_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8235_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8235_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8235_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8235_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8235_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8235_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8235_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8235_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8235_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8236
#define MACROLOP_PRIVATE_EVAL_REC_8235_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8236(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8236_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8236_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8236_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8236_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8236_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8236_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8236_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8236_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8236_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8236_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8237
#define MACROLOP_PRIVATE_EVAL_REC_8236_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8237(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8237_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8237_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8237_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8237_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8237_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8237_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8237_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8237_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8237_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8237_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8238
#define MACROLOP_PRIVATE_EVAL_REC_8237_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8238(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8238_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8238_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8238_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8238_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8238_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8238_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8238_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8238_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8238_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8238_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8239
#define MACROLOP_PRIVATE_EVAL_REC_8238_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8239(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8239_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8239_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8239_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8239_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8239_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8239_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8239_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8239_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8239_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8239_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8240
#define MACROLOP_PRIVATE_EVAL_REC_8239_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8240(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8240_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8240_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8240_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8240_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8240_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8240_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8240_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8240_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8240_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8240_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8241
#define MACROLOP_PRIVATE_EVAL_REC_8240_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8241(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8241_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8241_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8241_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8241_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8241_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8241_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8241_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8241_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8241_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8241_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8242
#define MACROLOP_PRIVATE_EVAL_REC_8241_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8242(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8242_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8242_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8242_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8242_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8242_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8242_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8242_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8242_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8242_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8242_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8243
#define MACROLOP_PRIVATE_EVAL_REC_8242_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8243(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8243_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8243_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8243_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8243_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8243_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8243_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8243_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8243_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8243_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8243_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8244
#define MACROLOP_PRIVATE_EVAL_REC_8243_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8244(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8244_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8244_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8244_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8244_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8244_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8244_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8244_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8244_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8244_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8244_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8245
#define MACROLOP_PRIVATE_EVAL_REC_8244_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8245(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8245_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8245_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8245_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8245_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8245_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8245_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8245_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8245_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8245_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8245_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8246
#define MACROLOP_PRIVATE_EVAL_REC_8245_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8246(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8246_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8246_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8246_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8246_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8246_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8246_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8246_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8246_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8246_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8246_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8247
#define MACROLOP_PRIVATE_EVAL_REC_8246_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8247(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8247_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8247_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8247_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8247_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8247_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8247_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8247_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8247_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8247_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8247_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8248
#define MACROLOP_PRIVATE_EVAL_REC_8247_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8248(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8248_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8248_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8248_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8248_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8248_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8248_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8248_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8248_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8248_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8248_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8249
#define MACROLOP_PRIVATE_EVAL_REC_8248_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8249(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8249_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8249_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8249_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8249_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8249_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8249_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8249_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8249_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8249_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8249_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8250
#define MACROLOP_PRIVATE_EVAL_REC_8249_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8250(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8250_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8250_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8250_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8250_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8250_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8250_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8250_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8250_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8250_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8250_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8251
#define MACROLOP_PRIVATE_EVAL_REC_8250_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8251(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8251_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8251_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8251_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8251_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8251_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8251_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8251_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8251_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8251_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8251_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8252
#define MACROLOP_PRIVATE_EVAL_REC_8251_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8252(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8252_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8252_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8252_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8252_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8252_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8252_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8252_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8252_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8252_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8252_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8253
#define MACROLOP_PRIVATE_EVAL_REC_8252_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8253(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8253_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8253_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8253_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8253_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8253_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8253_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8253_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8253_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8253_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8253_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8254
#define MACROLOP_PRIVATE_EVAL_REC_8253_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8254(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8254_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8254_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8254_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8254_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8254_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8254_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8254_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8254_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8254_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8254_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8255
#define MACROLOP_PRIVATE_EVAL_REC_8254_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8255(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8255_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8255_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8255_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8255_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8255_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8255_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8255_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8255_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8255_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8255_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8256
#define MACROLOP_PRIVATE_EVAL_REC_8255_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8256(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8256_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8256_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8256_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8256_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8256_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8256_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8256_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8256_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8256_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8256_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8257
#define MACROLOP_PRIVATE_EVAL_REC_8256_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8257(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8257_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8257_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8257_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8257_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8257_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8257_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8257_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8257_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8257_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8257_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8258
#define MACROLOP_PRIVATE_EVAL_REC_8257_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8258(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8258_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8258_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8258_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8258_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8258_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8258_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8258_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8258_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8258_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8258_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8259
#define MACROLOP_PRIVATE_EVAL_REC_8258_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8259(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8259_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8259_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8259_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8259_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8259_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8259_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8259_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8259_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8259_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8259_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8260
#define MACROLOP_PRIVATE_EVAL_REC_8259_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8260(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8260_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8260_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8260_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8260_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8260_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8260_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8260_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8260_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8260_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8260_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8261
#define MACROLOP_PRIVATE_EVAL_REC_8260_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8261(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8261_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8261_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8261_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8261_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8261_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8261_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8261_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8261_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8261_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8261_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8262
#define MACROLOP_PRIVATE_EVAL_REC_8261_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8262(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8262_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8262_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8262_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8262_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8262_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8262_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8262_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8262_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8262_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8262_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8263
#define MACROLOP_PRIVATE_EVAL_REC_8262_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8263(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8263_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8263_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8263_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8263_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8263_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8263_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8263_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8263_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8263_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8263_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8264
#define MACROLOP_PRIVATE_EVAL_REC_8263_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8264(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8264_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8264_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8264_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8264_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8264_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8264_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8264_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8264_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8264_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8264_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8265
#define MACROLOP_PRIVATE_EVAL_REC_8264_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8265(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8265_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8265_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8265_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8265_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8265_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8265_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8265_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8265_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8265_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8265_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8266
#define MACROLOP_PRIVATE_EVAL_REC_8265_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8266(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8266_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8266_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8266_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8266_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8266_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8266_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8266_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8266_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8266_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8266_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8267
#define MACROLOP_PRIVATE_EVAL_REC_8266_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8267(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8267_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8267_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8267_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8267_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8267_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8267_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8267_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8267_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8267_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8267_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8268
#define MACROLOP_PRIVATE_EVAL_REC_8267_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8268(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8268_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8268_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8268_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8268_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8268_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8268_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8268_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8268_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8268_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8268_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8269
#define MACROLOP_PRIVATE_EVAL_REC_8268_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8269(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8269_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8269_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8269_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8269_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8269_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8269_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8269_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8269_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8269_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8269_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8270
#define MACROLOP_PRIVATE_EVAL_REC_8269_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8270(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8270_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8270_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8270_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8270_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8270_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8270_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8270_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8270_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8270_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8270_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8271
#define MACROLOP_PRIVATE_EVAL_REC_8270_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8271(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8271_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8271_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8271_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8271_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8271_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8271_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8271_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8271_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8271_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8271_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8272
#define MACROLOP_PRIVATE_EVAL_REC_8271_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8272(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8272_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8272_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8272_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8272_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8272_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8272_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8272_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8272_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8272_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8272_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8273
#define MACROLOP_PRIVATE_EVAL_REC_8272_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8273(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8273_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8273_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8273_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8273_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8273_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8273_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8273_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8273_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8273_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8273_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8274
#define MACROLOP_PRIVATE_EVAL_REC_8273_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8274(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8274_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8274_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8274_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8274_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8274_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8274_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8274_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8274_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8274_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8274_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8275
#define MACROLOP_PRIVATE_EVAL_REC_8274_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8275(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8275_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8275_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8275_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8275_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8275_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8275_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8275_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8275_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8275_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8275_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8276
#define MACROLOP_PRIVATE_EVAL_REC_8275_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8276(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8276_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8276_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8276_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8276_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8276_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8276_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8276_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8276_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8276_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8276_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8277
#define MACROLOP_PRIVATE_EVAL_REC_8276_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8277(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8277_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8277_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8277_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8277_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8277_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8277_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8277_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8277_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8277_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8277_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8278
#define MACROLOP_PRIVATE_EVAL_REC_8277_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8278(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8278_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8278_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8278_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8278_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8278_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8278_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8278_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8278_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8278_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8278_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8279
#define MACROLOP_PRIVATE_EVAL_REC_8278_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8279(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8279_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8279_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8279_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8279_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8279_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8279_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8279_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8279_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8279_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8279_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8280
#define MACROLOP_PRIVATE_EVAL_REC_8279_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8280(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8280_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8280_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8280_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8280_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8280_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8280_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8280_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8280_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8280_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8280_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8281
#define MACROLOP_PRIVATE_EVAL_REC_8280_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8281(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8281_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8281_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8281_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8281_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8281_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8281_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8281_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8281_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8281_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8281_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8282
#define MACROLOP_PRIVATE_EVAL_REC_8281_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8282(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8282_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8282_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8282_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8282_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8282_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8282_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8282_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8282_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8282_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8282_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8283
#define MACROLOP_PRIVATE_EVAL_REC_8282_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8283(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8283_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8283_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8283_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8283_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8283_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8283_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8283_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8283_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8283_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8283_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8284
#define MACROLOP_PRIVATE_EVAL_REC_8283_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8284(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8284_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8284_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8284_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8284_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8284_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8284_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8284_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8284_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8284_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8284_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8285
#define MACROLOP_PRIVATE_EVAL_REC_8284_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8285(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8285_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8285_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8285_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8285_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8285_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8285_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8285_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8285_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8285_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8285_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8286
#define MACROLOP_PRIVATE_EVAL_REC_8285_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8286(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8286_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8286_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8286_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8286_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8286_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8286_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8286_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8286_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8286_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8286_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8287
#define MACROLOP_PRIVATE_EVAL_REC_8286_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8287(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8287_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8287_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8287_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8287_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8287_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8287_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8287_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8287_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8287_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8287_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8288
#define MACROLOP_PRIVATE_EVAL_REC_8287_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8288(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8288_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8288_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8288_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8288_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8288_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8288_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8288_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8288_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8288_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8288_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8289
#define MACROLOP_PRIVATE_EVAL_REC_8288_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8289(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8289_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8289_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8289_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8289_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8289_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8289_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8289_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8289_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8289_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8289_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8290
#define MACROLOP_PRIVATE_EVAL_REC_8289_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8290(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8290_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8290_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8290_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8290_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8290_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8290_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8290_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8290_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8290_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8290_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8291
#define MACROLOP_PRIVATE_EVAL_REC_8290_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8291(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8291_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8291_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8291_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8291_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8291_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8291_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8291_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8291_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8291_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8291_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8292
#define MACROLOP_PRIVATE_EVAL_REC_8291_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8292(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8292_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8292_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8292_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8292_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8292_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8292_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8292_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8292_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8292_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8292_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8293
#define MACROLOP_PRIVATE_EVAL_REC_8292_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8293(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8293_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8293_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8293_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8293_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8293_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8293_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8293_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8293_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8293_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8293_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8294
#define MACROLOP_PRIVATE_EVAL_REC_8293_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8294(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8294_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8294_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8294_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8294_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8294_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8294_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8294_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8294_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8294_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8294_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8295
#define MACROLOP_PRIVATE_EVAL_REC_8294_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8295(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8295_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8295_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8295_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8295_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8295_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8295_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8295_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8295_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8295_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8295_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8296
#define MACROLOP_PRIVATE_EVAL_REC_8295_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8296(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8296_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8296_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8296_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8296_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8296_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8296_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8296_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8296_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8296_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8296_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8297
#define MACROLOP_PRIVATE_EVAL_REC_8296_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8297(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8297_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8297_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8297_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8297_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8297_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8297_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8297_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8297_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8297_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8297_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8298
#define MACROLOP_PRIVATE_EVAL_REC_8297_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8298(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8298_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8298_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8298_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8298_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8298_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8298_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8298_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8298_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8298_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8298_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8299
#define MACROLOP_PRIVATE_EVAL_REC_8298_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8299(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8299_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8299_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8299_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8299_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8299_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8299_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8299_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8299_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8299_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8299_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8300
#define MACROLOP_PRIVATE_EVAL_REC_8299_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8300(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8300_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8300_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8300_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8300_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8300_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8300_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8300_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8300_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8300_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8300_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8301
#define MACROLOP_PRIVATE_EVAL_REC_8300_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8301(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8301_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8301_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8301_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8301_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8301_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8301_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8301_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8301_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8301_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8301_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8302
#define MACROLOP_PRIVATE_EVAL_REC_8301_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8302(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8302_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8302_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8302_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8302_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8302_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8302_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8302_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8302_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8302_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8302_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8303
#define MACROLOP_PRIVATE_EVAL_REC_8302_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8303(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8303_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8303_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8303_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8303_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8303_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8303_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8303_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8303_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8303_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8303_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8304
#define MACROLOP_PRIVATE_EVAL_REC_8303_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8304(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8304_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8304_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8304_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8304_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8304_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8304_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8304_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8304_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8304_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8304_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8305
#define MACROLOP_PRIVATE_EVAL_REC_8304_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8305(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8305_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8305_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8305_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8305_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8305_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8305_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8305_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8305_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8305_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8305_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8306
#define MACROLOP_PRIVATE_EVAL_REC_8305_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8306(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8306_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8306_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8306_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8306_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8306_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8306_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8306_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8306_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8306_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8306_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8307
#define MACROLOP_PRIVATE_EVAL_REC_8306_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8307(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8307_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8307_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8307_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8307_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8307_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8307_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8307_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8307_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8307_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8307_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8308
#define MACROLOP_PRIVATE_EVAL_REC_8307_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8308(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8308_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8308_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8308_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8308_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8308_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8308_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8308_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8308_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8308_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8308_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8309
#define MACROLOP_PRIVATE_EVAL_REC_8308_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8309(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8309_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8309_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8309_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8309_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8309_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8309_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8309_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8309_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8309_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8309_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8310
#define MACROLOP_PRIVATE_EVAL_REC_8309_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8310(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8310_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8310_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8310_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8310_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8310_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8310_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8310_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8310_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8310_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8310_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8311
#define MACROLOP_PRIVATE_EVAL_REC_8310_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8311(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8311_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8311_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8311_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8311_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8311_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8311_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8311_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8311_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8311_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8311_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8312
#define MACROLOP_PRIVATE_EVAL_REC_8311_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8312(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8312_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8312_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8312_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8312_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8312_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8312_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8312_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8312_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8312_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8312_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8313
#define MACROLOP_PRIVATE_EVAL_REC_8312_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8313(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8313_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8313_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8313_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8313_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8313_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8313_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8313_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8313_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8313_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8313_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8314
#define MACROLOP_PRIVATE_EVAL_REC_8313_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8314(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8314_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8314_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8314_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8314_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8314_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8314_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8314_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8314_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8314_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8314_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8315
#define MACROLOP_PRIVATE_EVAL_REC_8314_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8315(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8315_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8315_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8315_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8315_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8315_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8315_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8315_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8315_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8315_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8315_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8316
#define MACROLOP_PRIVATE_EVAL_REC_8315_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8316(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8316_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8316_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8316_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8316_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8316_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8316_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8316_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8316_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8316_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8316_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8317
#define MACROLOP_PRIVATE_EVAL_REC_8316_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8317(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8317_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8317_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8317_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8317_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8317_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8317_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8317_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8317_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8317_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8317_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8318
#define MACROLOP_PRIVATE_EVAL_REC_8317_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8318(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8318_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8318_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8318_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8318_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8318_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8318_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8318_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8318_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8318_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8318_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8319
#define MACROLOP_PRIVATE_EVAL_REC_8318_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8319(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8319_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8319_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8319_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8319_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8319_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8319_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8319_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8319_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8319_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8319_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8320
#define MACROLOP_PRIVATE_EVAL_REC_8319_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8320(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8320_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8320_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8320_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8320_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8320_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8320_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8320_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8320_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8320_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8320_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8321
#define MACROLOP_PRIVATE_EVAL_REC_8320_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8321(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8321_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8321_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8321_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8321_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8321_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8321_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8321_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8321_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8321_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8321_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8322
#define MACROLOP_PRIVATE_EVAL_REC_8321_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8322(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8322_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8322_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8322_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8322_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8322_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8322_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8322_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8322_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8322_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8322_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8323
#define MACROLOP_PRIVATE_EVAL_REC_8322_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8323(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8323_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8323_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8323_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8323_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8323_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8323_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8323_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8323_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8323_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8323_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8324
#define MACROLOP_PRIVATE_EVAL_REC_8323_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8324(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8324_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8324_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8324_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8324_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8324_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8324_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8324_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8324_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8324_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8324_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8325
#define MACROLOP_PRIVATE_EVAL_REC_8324_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8325(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8325_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8325_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8325_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8325_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8325_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8325_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8325_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8325_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8325_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8325_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8326
#define MACROLOP_PRIVATE_EVAL_REC_8325_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8326(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8326_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8326_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8326_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8326_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8326_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8326_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8326_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8326_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8326_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8326_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8327
#define MACROLOP_PRIVATE_EVAL_REC_8326_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8327(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8327_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8327_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8327_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8327_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8327_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8327_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8327_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8327_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8327_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8327_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8328
#define MACROLOP_PRIVATE_EVAL_REC_8327_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8328(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8328_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8328_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8328_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8328_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8328_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8328_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8328_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8328_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8328_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8328_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8329
#define MACROLOP_PRIVATE_EVAL_REC_8328_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8329(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8329_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8329_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8329_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8329_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8329_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8329_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8329_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8329_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8329_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8329_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8330
#define MACROLOP_PRIVATE_EVAL_REC_8329_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8330(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8330_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8330_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8330_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8330_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8330_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8330_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8330_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8330_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8330_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8330_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8331
#define MACROLOP_PRIVATE_EVAL_REC_8330_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8331(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8331_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8331_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8331_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8331_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8331_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8331_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8331_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8331_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8331_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8331_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8332
#define MACROLOP_PRIVATE_EVAL_REC_8331_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8332(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8332_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8332_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8332_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8332_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8332_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8332_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8332_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8332_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8332_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8332_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8333
#define MACROLOP_PRIVATE_EVAL_REC_8332_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8333(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8333_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8333_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8333_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8333_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8333_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8333_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8333_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8333_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8333_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8333_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8334
#define MACROLOP_PRIVATE_EVAL_REC_8333_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8334(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8334_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8334_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8334_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8334_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8334_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8334_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8334_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8334_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8334_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8334_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8335
#define MACROLOP_PRIVATE_EVAL_REC_8334_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8335(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8335_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8335_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8335_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8335_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8335_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8335_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8335_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8335_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8335_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8335_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8336
#define MACROLOP_PRIVATE_EVAL_REC_8335_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8336(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8336_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8336_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8336_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8336_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8336_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8336_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8336_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8336_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8336_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8336_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8337
#define MACROLOP_PRIVATE_EVAL_REC_8336_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8337(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8337_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8337_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8337_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8337_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8337_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8337_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8337_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8337_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8337_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8337_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8338
#define MACROLOP_PRIVATE_EVAL_REC_8337_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8338(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8338_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8338_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8338_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8338_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8338_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8338_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8338_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8338_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8338_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8338_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8339
#define MACROLOP_PRIVATE_EVAL_REC_8338_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8339(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8339_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8339_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8339_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8339_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8339_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8339_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8339_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8339_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8339_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8339_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8340
#define MACROLOP_PRIVATE_EVAL_REC_8339_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8340(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8340_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8340_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8340_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8340_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8340_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8340_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8340_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8340_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8340_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8340_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8341
#define MACROLOP_PRIVATE_EVAL_REC_8340_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8341(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8341_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8341_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8341_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8341_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8341_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8341_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8341_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8341_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8341_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8341_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8342
#define MACROLOP_PRIVATE_EVAL_REC_8341_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8342(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8342_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8342_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8342_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8342_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8342_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8342_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8342_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8342_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8342_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8342_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8343
#define MACROLOP_PRIVATE_EVAL_REC_8342_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8343(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8343_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8343_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8343_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8343_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8343_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8343_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8343_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8343_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8343_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8343_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8344
#define MACROLOP_PRIVATE_EVAL_REC_8343_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8344(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8344_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8344_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8344_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8344_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8344_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8344_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8344_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8344_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8344_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8344_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8345
#define MACROLOP_PRIVATE_EVAL_REC_8344_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8345(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8345_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8345_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8345_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8345_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8345_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8345_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8345_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8345_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8345_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8345_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8346
#define MACROLOP_PRIVATE_EVAL_REC_8345_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8346(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8346_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8346_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8346_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8346_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8346_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8346_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8346_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8346_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8346_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8346_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8347
#define MACROLOP_PRIVATE_EVAL_REC_8346_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8347(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8347_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8347_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8347_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8347_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8347_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8347_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8347_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8347_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8347_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8347_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8348
#define MACROLOP_PRIVATE_EVAL_REC_8347_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8348(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8348_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8348_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8348_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8348_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8348_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8348_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8348_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8348_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8348_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8348_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8349
#define MACROLOP_PRIVATE_EVAL_REC_8348_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8349(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8349_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8349_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8349_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8349_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8349_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8349_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8349_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8349_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8349_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8349_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8350
#define MACROLOP_PRIVATE_EVAL_REC_8349_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8350(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8350_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8350_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8350_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8350_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8350_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8350_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8350_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8350_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8350_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8350_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8351
#define MACROLOP_PRIVATE_EVAL_REC_8350_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8351(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8351_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8351_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8351_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8351_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8351_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8351_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8351_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8351_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8351_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8351_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8352
#define MACROLOP_PRIVATE_EVAL_REC_8351_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8352(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8352_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8352_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8352_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8352_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8352_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8352_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8352_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8352_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8352_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8352_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8353
#define MACROLOP_PRIVATE_EVAL_REC_8352_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8353(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8353_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8353_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8353_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8353_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8353_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8353_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8353_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8353_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8353_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8353_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8354
#define MACROLOP_PRIVATE_EVAL_REC_8353_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8354(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8354_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8354_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8354_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8354_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8354_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8354_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8354_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8354_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8354_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8354_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8355
#define MACROLOP_PRIVATE_EVAL_REC_8354_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8355(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8355_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8355_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8355_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8355_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8355_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8355_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8355_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8355_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8355_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8355_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8356
#define MACROLOP_PRIVATE_EVAL_REC_8355_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8356(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8356_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8356_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8356_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8356_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8356_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8356_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8356_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8356_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8356_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8356_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8357
#define MACROLOP_PRIVATE_EVAL_REC_8356_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8357(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8357_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8357_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8357_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8357_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8357_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8357_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8357_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8357_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8357_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8357_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8358
#define MACROLOP_PRIVATE_EVAL_REC_8357_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8358(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8358_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8358_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8358_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8358_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8358_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8358_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8358_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8358_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8358_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8358_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8359
#define MACROLOP_PRIVATE_EVAL_REC_8358_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8359(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8359_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8359_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8359_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8359_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8359_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8359_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8359_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8359_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8359_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8359_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8360
#define MACROLOP_PRIVATE_EVAL_REC_8359_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8360(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8360_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8360_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8360_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8360_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8360_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8360_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8360_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8360_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8360_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8360_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8361
#define MACROLOP_PRIVATE_EVAL_REC_8360_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8361(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8361_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8361_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8361_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8361_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8361_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8361_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8361_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8361_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8361_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8361_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8362
#define MACROLOP_PRIVATE_EVAL_REC_8361_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8362(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8362_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8362_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8362_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8362_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8362_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8362_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8362_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8362_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8362_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8362_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8363
#define MACROLOP_PRIVATE_EVAL_REC_8362_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8363(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8363_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8363_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8363_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8363_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8363_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8363_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8363_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8363_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8363_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8363_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8364
#define MACROLOP_PRIVATE_EVAL_REC_8363_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8364(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8364_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8364_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8364_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8364_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8364_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8364_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8364_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8364_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8364_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8364_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8365
#define MACROLOP_PRIVATE_EVAL_REC_8364_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8365(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8365_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8365_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8365_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8365_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8365_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8365_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8365_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8365_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8365_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8365_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8366
#define MACROLOP_PRIVATE_EVAL_REC_8365_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8366(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8366_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8366_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8366_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8366_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8366_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8366_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8366_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8366_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8366_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8366_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8367
#define MACROLOP_PRIVATE_EVAL_REC_8366_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8367(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8367_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8367_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8367_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8367_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8367_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8367_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8367_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8367_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8367_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8367_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8368
#define MACROLOP_PRIVATE_EVAL_REC_8367_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8368(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8368_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8368_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8368_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8368_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8368_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8368_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8368_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8368_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8368_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8368_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8369
#define MACROLOP_PRIVATE_EVAL_REC_8368_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8369(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8369_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8369_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8369_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8369_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8369_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8369_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8369_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8369_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8369_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8369_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8370
#define MACROLOP_PRIVATE_EVAL_REC_8369_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8370(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8370_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8370_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8370_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8370_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8370_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8370_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8370_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8370_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8370_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8370_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8371
#define MACROLOP_PRIVATE_EVAL_REC_8370_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8371(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8371_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8371_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8371_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8371_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8371_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8371_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8371_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8371_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8371_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8371_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8372
#define MACROLOP_PRIVATE_EVAL_REC_8371_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8372(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8372_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8372_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8372_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8372_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8372_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8372_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8372_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8372_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8372_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8372_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8373
#define MACROLOP_PRIVATE_EVAL_REC_8372_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8373(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8373_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8373_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8373_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8373_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8373_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8373_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8373_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8373_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8373_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8373_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8374
#define MACROLOP_PRIVATE_EVAL_REC_8373_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8374(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8374_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8374_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8374_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8374_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8374_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8374_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8374_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8374_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8374_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8374_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8375
#define MACROLOP_PRIVATE_EVAL_REC_8374_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8375(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8375_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8375_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8375_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8375_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8375_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8375_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8375_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8375_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8375_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8375_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8376
#define MACROLOP_PRIVATE_EVAL_REC_8375_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8376(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8376_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8376_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8376_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8376_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8376_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8376_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8376_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8376_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8376_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8376_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8377
#define MACROLOP_PRIVATE_EVAL_REC_8376_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8377(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8377_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8377_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8377_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8377_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8377_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8377_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8377_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8377_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8377_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8377_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8378
#define MACROLOP_PRIVATE_EVAL_REC_8377_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8378(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8378_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8378_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8378_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8378_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8378_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8378_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8378_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8378_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8378_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8378_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8379
#define MACROLOP_PRIVATE_EVAL_REC_8378_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8379(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8379_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8379_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8379_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8379_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8379_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8379_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8379_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8379_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8379_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8379_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8380
#define MACROLOP_PRIVATE_EVAL_REC_8379_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8380(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8380_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8380_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8380_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8380_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8380_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8380_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8380_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8380_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8380_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8380_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8381
#define MACROLOP_PRIVATE_EVAL_REC_8380_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8381(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8381_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8381_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8381_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8381_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8381_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8381_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8381_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8381_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8381_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8381_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8382
#define MACROLOP_PRIVATE_EVAL_REC_8381_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8382(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8382_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8382_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8382_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8382_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8382_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8382_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8382_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8382_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8382_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8382_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8383
#define MACROLOP_PRIVATE_EVAL_REC_8382_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8383(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8383_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8383_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8383_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8383_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8383_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8383_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8383_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8383_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8383_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8383_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8384
#define MACROLOP_PRIVATE_EVAL_REC_8383_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8384(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8384_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8384_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8384_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8384_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8384_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8384_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8384_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8384_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8384_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8384_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8385
#define MACROLOP_PRIVATE_EVAL_REC_8384_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8385(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8385_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8385_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8385_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8385_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8385_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8385_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8385_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8385_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8385_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8385_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8386
#define MACROLOP_PRIVATE_EVAL_REC_8385_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8386(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8386_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8386_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8386_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8386_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8386_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8386_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8386_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8386_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8386_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8386_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8387
#define MACROLOP_PRIVATE_EVAL_REC_8386_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8387(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8387_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8387_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8387_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8387_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8387_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8387_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8387_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8387_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8387_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8387_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8388
#define MACROLOP_PRIVATE_EVAL_REC_8387_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8388(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8388_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8388_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8388_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8388_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8388_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8388_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8388_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8388_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8388_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8388_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8389
#define MACROLOP_PRIVATE_EVAL_REC_8388_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8389(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8389_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8389_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8389_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8389_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8389_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8389_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8389_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8389_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8389_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8389_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8390
#define MACROLOP_PRIVATE_EVAL_REC_8389_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8390(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8390_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8390_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8390_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8390_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8390_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8390_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8390_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8390_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8390_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8390_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8391
#define MACROLOP_PRIVATE_EVAL_REC_8390_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8391(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8391_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8391_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8391_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8391_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8391_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8391_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8391_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8391_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8391_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8391_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8392
#define MACROLOP_PRIVATE_EVAL_REC_8391_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8392(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8392_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8392_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8392_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8392_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8392_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8392_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8392_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8392_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8392_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8392_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8393
#define MACROLOP_PRIVATE_EVAL_REC_8392_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8393(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8393_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8393_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8393_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8393_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8393_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8393_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8393_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8393_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8393_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8393_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8394
#define MACROLOP_PRIVATE_EVAL_REC_8393_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8394(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8394_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8394_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8394_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8394_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8394_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8394_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8394_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8394_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8394_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8394_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8395
#define MACROLOP_PRIVATE_EVAL_REC_8394_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8395(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8395_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8395_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8395_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8395_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8395_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8395_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8395_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8395_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8395_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8395_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8396
#define MACROLOP_PRIVATE_EVAL_REC_8395_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8396(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8396_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8396_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8396_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8396_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8396_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8396_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8396_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8396_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8396_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8396_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8397
#define MACROLOP_PRIVATE_EVAL_REC_8396_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8397(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8397_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8397_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8397_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8397_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8397_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8397_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8397_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8397_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8397_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8397_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8398
#define MACROLOP_PRIVATE_EVAL_REC_8397_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8398(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8398_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8398_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8398_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8398_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8398_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8398_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8398_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8398_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8398_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8398_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8399
#define MACROLOP_PRIVATE_EVAL_REC_8398_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8399(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8399_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8399_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8399_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8399_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8399_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8399_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8399_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8399_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8399_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8399_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8400
#define MACROLOP_PRIVATE_EVAL_REC_8399_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8400(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8400_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8400_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8400_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8400_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8400_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8400_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8400_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8400_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8400_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8400_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8401
#define MACROLOP_PRIVATE_EVAL_REC_8400_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8401(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8401_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8401_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8401_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8401_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8401_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8401_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8401_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8401_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8401_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8401_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8402
#define MACROLOP_PRIVATE_EVAL_REC_8401_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8402(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8402_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8402_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8402_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8402_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8402_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8402_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8402_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8402_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8402_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8402_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8403
#define MACROLOP_PRIVATE_EVAL_REC_8402_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8403(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8403_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8403_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8403_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8403_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8403_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8403_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8403_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8403_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8403_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8403_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8404
#define MACROLOP_PRIVATE_EVAL_REC_8403_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8404(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8404_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8404_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8404_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8404_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8404_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8404_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8404_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8404_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8404_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8404_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8405
#define MACROLOP_PRIVATE_EVAL_REC_8404_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8405(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8405_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8405_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8405_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8405_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8405_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8405_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8405_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8405_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8405_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8405_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8406
#define MACROLOP_PRIVATE_EVAL_REC_8405_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8406(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8406_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8406_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8406_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8406_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8406_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8406_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8406_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8406_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8406_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8406_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8407
#define MACROLOP_PRIVATE_EVAL_REC_8406_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8407(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8407_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8407_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8407_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8407_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8407_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8407_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8407_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8407_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8407_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8407_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8408
#define MACROLOP_PRIVATE_EVAL_REC_8407_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8408(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8408_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8408_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8408_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8408_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8408_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8408_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8408_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8408_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8408_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8408_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8409
#define MACROLOP_PRIVATE_EVAL_REC_8408_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8409(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8409_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8409_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8409_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8409_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8409_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8409_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8409_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8409_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8409_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8409_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8410
#define MACROLOP_PRIVATE_EVAL_REC_8409_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8410(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8410_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8410_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8410_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8410_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8410_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8410_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8410_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8410_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8410_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8410_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8411
#define MACROLOP_PRIVATE_EVAL_REC_8410_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8411(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8411_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8411_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8411_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8411_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8411_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8411_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8411_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8411_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8411_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8411_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8412
#define MACROLOP_PRIVATE_EVAL_REC_8411_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8412(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8412_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8412_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8412_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8412_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8412_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8412_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8412_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8412_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8412_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8412_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8413
#define MACROLOP_PRIVATE_EVAL_REC_8412_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8413(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8413_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8413_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8413_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8413_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8413_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8413_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8413_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8413_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8413_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8413_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8414
#define MACROLOP_PRIVATE_EVAL_REC_8413_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8414(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8414_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8414_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8414_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8414_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8414_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8414_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8414_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8414_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8414_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8414_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8415
#define MACROLOP_PRIVATE_EVAL_REC_8414_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8415(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8415_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8415_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8415_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8415_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8415_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8415_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8415_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8415_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8415_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8415_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8416
#define MACROLOP_PRIVATE_EVAL_REC_8415_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8416(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8416_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8416_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8416_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8416_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8416_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8416_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8416_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8416_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8416_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8416_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8417
#define MACROLOP_PRIVATE_EVAL_REC_8416_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8417(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8417_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8417_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8417_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8417_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8417_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8417_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8417_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8417_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8417_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8417_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8418
#define MACROLOP_PRIVATE_EVAL_REC_8417_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8418(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8418_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8418_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8418_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8418_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8418_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8418_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8418_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8418_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8418_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8418_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8419
#define MACROLOP_PRIVATE_EVAL_REC_8418_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8419(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8419_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8419_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8419_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8419_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8419_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8419_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8419_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8419_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8419_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8419_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8420
#define MACROLOP_PRIVATE_EVAL_REC_8419_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8420(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8420_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8420_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8420_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8420_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8420_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8420_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8420_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8420_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8420_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8420_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8421
#define MACROLOP_PRIVATE_EVAL_REC_8420_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8421(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8421_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8421_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8421_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8421_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8421_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8421_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8421_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8421_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8421_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8421_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8422
#define MACROLOP_PRIVATE_EVAL_REC_8421_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8422(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8422_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8422_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8422_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8422_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8422_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8422_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8422_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8422_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8422_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8422_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8423
#define MACROLOP_PRIVATE_EVAL_REC_8422_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8423(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8423_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8423_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8423_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8423_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8423_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8423_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8423_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8423_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8423_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8423_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8424
#define MACROLOP_PRIVATE_EVAL_REC_8423_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8424(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8424_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8424_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8424_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8424_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8424_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8424_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8424_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8424_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8424_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8424_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8425
#define MACROLOP_PRIVATE_EVAL_REC_8424_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8425(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8425_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8425_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8425_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8425_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8425_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8425_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8425_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8425_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8425_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8425_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8426
#define MACROLOP_PRIVATE_EVAL_REC_8425_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8426(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8426_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8426_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8426_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8426_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8426_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8426_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8426_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8426_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8426_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8426_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8427
#define MACROLOP_PRIVATE_EVAL_REC_8426_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8427(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8427_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8427_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8427_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8427_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8427_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8427_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8427_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8427_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8427_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8427_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8428
#define MACROLOP_PRIVATE_EVAL_REC_8427_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8428(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8428_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8428_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8428_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8428_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8428_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8428_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8428_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8428_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8428_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8428_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8429
#define MACROLOP_PRIVATE_EVAL_REC_8428_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8429(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8429_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8429_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8429_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8429_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8429_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8429_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8429_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8429_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8429_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8429_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8430
#define MACROLOP_PRIVATE_EVAL_REC_8429_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8430(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8430_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8430_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8430_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8430_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8430_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8430_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8430_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8430_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8430_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8430_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8431
#define MACROLOP_PRIVATE_EVAL_REC_8430_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8431(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8431_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8431_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8431_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8431_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8431_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8431_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8431_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8431_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8431_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8431_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8432
#define MACROLOP_PRIVATE_EVAL_REC_8431_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8432(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8432_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8432_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8432_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8432_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8432_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8432_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8432_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8432_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8432_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8432_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8433
#define MACROLOP_PRIVATE_EVAL_REC_8432_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8433(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8433_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8433_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8433_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8433_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8433_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8433_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8433_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8433_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8433_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8433_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8434
#define MACROLOP_PRIVATE_EVAL_REC_8433_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8434(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8434_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8434_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8434_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8434_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8434_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8434_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8434_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8434_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8434_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8434_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8435
#define MACROLOP_PRIVATE_EVAL_REC_8434_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8435(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8435_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8435_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8435_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8435_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8435_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8435_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8435_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8435_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8435_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8435_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8436
#define MACROLOP_PRIVATE_EVAL_REC_8435_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8436(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8436_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8436_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8436_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8436_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8436_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8436_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8436_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8436_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8436_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8436_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8437
#define MACROLOP_PRIVATE_EVAL_REC_8436_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8437(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8437_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8437_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8437_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8437_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8437_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8437_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8437_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8437_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8437_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8437_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8438
#define MACROLOP_PRIVATE_EVAL_REC_8437_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8438(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8438_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8438_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8438_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8438_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8438_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8438_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8438_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8438_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8438_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8438_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8439
#define MACROLOP_PRIVATE_EVAL_REC_8438_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8439(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8439_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8439_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8439_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8439_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8439_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8439_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8439_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8439_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8439_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8439_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8440
#define MACROLOP_PRIVATE_EVAL_REC_8439_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8440(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8440_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8440_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8440_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8440_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8440_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8440_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8440_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8440_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8440_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8440_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8441
#define MACROLOP_PRIVATE_EVAL_REC_8440_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8441(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8441_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8441_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8441_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8441_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8441_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8441_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8441_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8441_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8441_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8441_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8442
#define MACROLOP_PRIVATE_EVAL_REC_8441_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8442(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8442_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8442_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8442_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8442_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8442_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8442_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8442_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8442_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8442_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8442_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8443
#define MACROLOP_PRIVATE_EVAL_REC_8442_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8443(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8443_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8443_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8443_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8443_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8443_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8443_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8443_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8443_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8443_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8443_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8444
#define MACROLOP_PRIVATE_EVAL_REC_8443_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8444(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8444_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8444_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8444_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8444_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8444_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8444_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8444_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8444_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8444_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8444_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8445
#define MACROLOP_PRIVATE_EVAL_REC_8444_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8445(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8445_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8445_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8445_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8445_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8445_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8445_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8445_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8445_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8445_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8445_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8446
#define MACROLOP_PRIVATE_EVAL_REC_8445_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8446(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8446_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8446_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8446_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8446_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8446_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8446_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8446_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8446_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8446_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8446_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8447
#define MACROLOP_PRIVATE_EVAL_REC_8446_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8447(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8447_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8447_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8447_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8447_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8447_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8447_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8447_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8447_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8447_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8447_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8448
#define MACROLOP_PRIVATE_EVAL_REC_8447_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8448(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8448_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8448_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8448_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8448_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8448_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8448_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8448_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8448_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8448_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8448_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8449
#define MACROLOP_PRIVATE_EVAL_REC_8448_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8449(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8449_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8449_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8449_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8449_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8449_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8449_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8449_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8449_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8449_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8449_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8450
#define MACROLOP_PRIVATE_EVAL_REC_8449_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8450(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8450_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8450_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8450_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8450_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8450_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8450_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8450_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8450_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8450_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8450_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8451
#define MACROLOP_PRIVATE_EVAL_REC_8450_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8451(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8451_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8451_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8451_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8451_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8451_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8451_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8451_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8451_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8451_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8451_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8452
#define MACROLOP_PRIVATE_EVAL_REC_8451_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8452(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8452_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8452_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8452_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8452_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8452_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8452_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8452_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8452_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8452_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8452_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8453
#define MACROLOP_PRIVATE_EVAL_REC_8452_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8453(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8453_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8453_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8453_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8453_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8453_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8453_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8453_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8453_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8453_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8453_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8454
#define MACROLOP_PRIVATE_EVAL_REC_8453_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8454(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8454_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8454_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8454_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8454_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8454_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8454_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8454_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8454_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8454_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8454_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8455
#define MACROLOP_PRIVATE_EVAL_REC_8454_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8455(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8455_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8455_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8455_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8455_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8455_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8455_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8455_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8455_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8455_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8455_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8456
#define MACROLOP_PRIVATE_EVAL_REC_8455_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8456(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8456_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8456_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8456_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8456_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8456_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8456_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8456_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8456_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8456_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8456_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8457
#define MACROLOP_PRIVATE_EVAL_REC_8456_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8457(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8457_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8457_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8457_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8457_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8457_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8457_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8457_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8457_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8457_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8457_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8458
#define MACROLOP_PRIVATE_EVAL_REC_8457_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8458(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8458_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8458_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8458_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8458_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8458_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8458_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8458_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8458_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8458_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8458_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8459
#define MACROLOP_PRIVATE_EVAL_REC_8458_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8459(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8459_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8459_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8459_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8459_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8459_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8459_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8459_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8459_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8459_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8459_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8460
#define MACROLOP_PRIVATE_EVAL_REC_8459_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8460(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8460_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8460_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8460_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8460_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8460_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8460_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8460_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8460_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8460_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8460_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8461
#define MACROLOP_PRIVATE_EVAL_REC_8460_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8461(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8461_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8461_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8461_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8461_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8461_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8461_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8461_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8461_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8461_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8461_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8462
#define MACROLOP_PRIVATE_EVAL_REC_8461_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8462(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8462_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8462_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8462_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8462_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8462_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8462_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8462_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8462_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8462_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8462_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8463
#define MACROLOP_PRIVATE_EVAL_REC_8462_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8463(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8463_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8463_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8463_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8463_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8463_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8463_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8463_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8463_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8463_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8463_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8464
#define MACROLOP_PRIVATE_EVAL_REC_8463_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8464(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8464_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8464_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8464_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8464_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8464_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8464_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8464_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8464_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8464_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8464_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8465
#define MACROLOP_PRIVATE_EVAL_REC_8464_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8465(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8465_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8465_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8465_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8465_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8465_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8465_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8465_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8465_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8465_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8465_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8466
#define MACROLOP_PRIVATE_EVAL_REC_8465_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8466(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8466_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8466_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8466_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8466_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8466_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8466_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8466_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8466_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8466_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8466_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8467
#define MACROLOP_PRIVATE_EVAL_REC_8466_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8467(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8467_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8467_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8467_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8467_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8467_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8467_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8467_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8467_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8467_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8467_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8468
#define MACROLOP_PRIVATE_EVAL_REC_8467_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8468(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8468_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8468_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8468_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8468_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8468_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8468_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8468_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8468_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8468_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8468_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8469
#define MACROLOP_PRIVATE_EVAL_REC_8468_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8469(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8469_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8469_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8469_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8469_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8469_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8469_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8469_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8469_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8469_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8469_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8470
#define MACROLOP_PRIVATE_EVAL_REC_8469_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8470(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8470_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8470_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8470_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8470_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8470_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8470_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8470_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8470_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8470_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8470_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8471
#define MACROLOP_PRIVATE_EVAL_REC_8470_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8471(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8471_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8471_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8471_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8471_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8471_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8471_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8471_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8471_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8471_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8471_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8472
#define MACROLOP_PRIVATE_EVAL_REC_8471_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8472(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8472_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8472_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8472_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8472_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8472_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8472_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8472_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8472_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8472_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8472_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8473
#define MACROLOP_PRIVATE_EVAL_REC_8472_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8473(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8473_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8473_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8473_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8473_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8473_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8473_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8473_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8473_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8473_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8473_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8474
#define MACROLOP_PRIVATE_EVAL_REC_8473_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8474(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8474_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8474_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8474_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8474_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8474_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8474_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8474_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8474_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8474_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8474_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8475
#define MACROLOP_PRIVATE_EVAL_REC_8474_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8475(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8475_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8475_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8475_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8475_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8475_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8475_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8475_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8475_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8475_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8475_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8476
#define MACROLOP_PRIVATE_EVAL_REC_8475_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8476(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8476_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8476_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8476_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8476_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8476_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8476_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8476_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8476_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8476_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8476_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8477
#define MACROLOP_PRIVATE_EVAL_REC_8476_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8477(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8477_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8477_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8477_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8477_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8477_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8477_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8477_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8477_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8477_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8477_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8478
#define MACROLOP_PRIVATE_EVAL_REC_8477_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8478(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8478_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8478_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8478_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8478_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8478_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8478_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8478_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8478_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8478_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8478_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8479
#define MACROLOP_PRIVATE_EVAL_REC_8478_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8479(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8479_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8479_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8479_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8479_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8479_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8479_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8479_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8479_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8479_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8479_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8480
#define MACROLOP_PRIVATE_EVAL_REC_8479_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8480(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8480_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8480_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8480_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8480_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8480_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8480_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8480_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8480_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8480_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8480_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8481
#define MACROLOP_PRIVATE_EVAL_REC_8480_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8481(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8481_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8481_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8481_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8481_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8481_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8481_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8481_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8481_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8481_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8481_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8482
#define MACROLOP_PRIVATE_EVAL_REC_8481_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8482(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8482_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8482_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8482_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8482_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8482_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8482_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8482_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8482_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8482_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8482_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8483
#define MACROLOP_PRIVATE_EVAL_REC_8482_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8483(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8483_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8483_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8483_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8483_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8483_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8483_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8483_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8483_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8483_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8483_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8484
#define MACROLOP_PRIVATE_EVAL_REC_8483_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8484(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8484_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8484_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8484_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8484_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8484_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8484_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8484_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8484_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8484_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8484_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8485
#define MACROLOP_PRIVATE_EVAL_REC_8484_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8485(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8485_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8485_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8485_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8485_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8485_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8485_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8485_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8485_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8485_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8485_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8486
#define MACROLOP_PRIVATE_EVAL_REC_8485_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8486(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8486_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8486_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8486_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8486_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8486_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8486_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8486_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8486_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8486_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8486_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8487
#define MACROLOP_PRIVATE_EVAL_REC_8486_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8487(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8487_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8487_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8487_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8487_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8487_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8487_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8487_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8487_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8487_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8487_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8488
#define MACROLOP_PRIVATE_EVAL_REC_8487_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8488(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8488_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8488_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8488_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8488_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8488_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8488_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8488_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8488_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8488_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8488_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8489
#define MACROLOP_PRIVATE_EVAL_REC_8488_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8489(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8489_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8489_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8489_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8489_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8489_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8489_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8489_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8489_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8489_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8489_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8490
#define MACROLOP_PRIVATE_EVAL_REC_8489_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8490(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8490_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8490_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8490_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8490_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8490_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8490_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8490_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8490_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8490_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8490_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8491
#define MACROLOP_PRIVATE_EVAL_REC_8490_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8491(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8491_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8491_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8491_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8491_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8491_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8491_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8491_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8491_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8491_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8491_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8492
#define MACROLOP_PRIVATE_EVAL_REC_8491_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8492(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8492_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8492_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8492_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8492_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8492_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8492_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8492_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8492_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8492_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8492_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8493
#define MACROLOP_PRIVATE_EVAL_REC_8492_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8493(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8493_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8493_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8493_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8493_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8493_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8493_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8493_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8493_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8493_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8493_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8494
#define MACROLOP_PRIVATE_EVAL_REC_8493_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8494(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8494_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8494_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8494_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8494_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8494_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8494_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8494_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8494_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8494_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8494_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8495
#define MACROLOP_PRIVATE_EVAL_REC_8494_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8495(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8495_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8495_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8495_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8495_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8495_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8495_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8495_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8495_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8495_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8495_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8496
#define MACROLOP_PRIVATE_EVAL_REC_8495_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8496(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8496_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8496_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8496_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8496_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8496_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8496_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8496_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8496_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8496_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8496_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8497
#define MACROLOP_PRIVATE_EVAL_REC_8496_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8497(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8497_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8497_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8497_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8497_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8497_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8497_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8497_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8497_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8497_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8497_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8498
#define MACROLOP_PRIVATE_EVAL_REC_8497_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8498(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8498_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8498_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8498_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8498_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8498_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8498_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8498_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8498_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8498_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8498_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8499
#define MACROLOP_PRIVATE_EVAL_REC_8498_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8499(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8499_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8499_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8499_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8499_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8499_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8499_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8499_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8499_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8499_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8499_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8500
#define MACROLOP_PRIVATE_EVAL_REC_8499_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8500(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8500_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8500_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8500_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8500_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8500_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8500_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8500_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8500_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8500_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8500_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8501
#define MACROLOP_PRIVATE_EVAL_REC_8500_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8501(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8501_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8501_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8501_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8501_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8501_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8501_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8501_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8501_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8501_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8501_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8502
#define MACROLOP_PRIVATE_EVAL_REC_8501_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8502(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8502_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8502_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8502_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8502_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8502_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8502_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8502_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8502_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8502_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8502_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8503
#define MACROLOP_PRIVATE_EVAL_REC_8502_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8503(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8503_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8503_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8503_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8503_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8503_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8503_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8503_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8503_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8503_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8503_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8504
#define MACROLOP_PRIVATE_EVAL_REC_8503_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8504(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8504_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8504_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8504_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8504_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8504_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8504_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8504_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8504_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8504_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8504_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8505
#define MACROLOP_PRIVATE_EVAL_REC_8504_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8505(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8505_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8505_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8505_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8505_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8505_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8505_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8505_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8505_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8505_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8505_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8506
#define MACROLOP_PRIVATE_EVAL_REC_8505_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8506(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8506_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8506_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8506_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8506_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8506_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8506_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8506_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8506_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8506_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8506_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8507
#define MACROLOP_PRIVATE_EVAL_REC_8506_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8507(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8507_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8507_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8507_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8507_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8507_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8507_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8507_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8507_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8507_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8507_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8508
#define MACROLOP_PRIVATE_EVAL_REC_8507_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8508(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8508_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8508_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8508_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8508_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8508_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8508_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8508_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8508_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8508_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8508_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8509
#define MACROLOP_PRIVATE_EVAL_REC_8508_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8509(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8509_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8509_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8509_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8509_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8509_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8509_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8509_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8509_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8509_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8509_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8510
#define MACROLOP_PRIVATE_EVAL_REC_8509_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8510(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8510_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8510_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8510_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8510_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8510_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8510_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8510_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8510_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8510_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8510_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8511
#define MACROLOP_PRIVATE_EVAL_REC_8510_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8511(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8511_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8511_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8511_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8511_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8511_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8511_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8511_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8511_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8511_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8511_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8512
#define MACROLOP_PRIVATE_EVAL_REC_8511_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8512(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8512_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8512_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8512_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8512_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8512_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8512_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8512_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8512_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8512_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8512_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8513
#define MACROLOP_PRIVATE_EVAL_REC_8512_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8513(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8513_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8513_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8513_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8513_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8513_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8513_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8513_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8513_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8513_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8513_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8514
#define MACROLOP_PRIVATE_EVAL_REC_8513_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8514(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8514_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8514_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8514_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8514_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8514_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8514_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8514_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8514_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8514_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8514_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8515
#define MACROLOP_PRIVATE_EVAL_REC_8514_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8515(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8515_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8515_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8515_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8515_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8515_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8515_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8515_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8515_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8515_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8515_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8516
#define MACROLOP_PRIVATE_EVAL_REC_8515_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8516(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8516_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8516_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8516_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8516_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8516_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8516_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8516_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8516_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8516_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8516_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8517
#define MACROLOP_PRIVATE_EVAL_REC_8516_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8517(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8517_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8517_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8517_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8517_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8517_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8517_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8517_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8517_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8517_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8517_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8518
#define MACROLOP_PRIVATE_EVAL_REC_8517_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8518(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8518_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8518_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8518_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8518_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8518_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8518_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8518_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8518_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8518_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8518_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8519
#define MACROLOP_PRIVATE_EVAL_REC_8518_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8519(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8519_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8519_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8519_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8519_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8519_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8519_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8519_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8519_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8519_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8519_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8520
#define MACROLOP_PRIVATE_EVAL_REC_8519_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8520(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8520_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8520_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8520_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8520_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8520_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8520_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8520_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8520_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8520_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8520_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8521
#define MACROLOP_PRIVATE_EVAL_REC_8520_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8521(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8521_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8521_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8521_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8521_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8521_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8521_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8521_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8521_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8521_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8521_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8522
#define MACROLOP_PRIVATE_EVAL_REC_8521_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8522(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8522_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8522_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8522_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8522_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8522_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8522_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8522_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8522_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8522_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8522_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8523
#define MACROLOP_PRIVATE_EVAL_REC_8522_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8523(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8523_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8523_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8523_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8523_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8523_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8523_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8523_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8523_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8523_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8523_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8524
#define MACROLOP_PRIVATE_EVAL_REC_8523_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8524(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8524_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8524_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8524_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8524_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8524_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8524_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8524_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8524_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8524_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8524_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8525
#define MACROLOP_PRIVATE_EVAL_REC_8524_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8525(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8525_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8525_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8525_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8525_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8525_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8525_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8525_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8525_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8525_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8525_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8526
#define MACROLOP_PRIVATE_EVAL_REC_8525_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8526(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8526_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8526_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8526_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8526_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8526_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8526_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8526_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8526_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8526_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8526_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8527
#define MACROLOP_PRIVATE_EVAL_REC_8526_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8527(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8527_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8527_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8527_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8527_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8527_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8527_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8527_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8527_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8527_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8527_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8528
#define MACROLOP_PRIVATE_EVAL_REC_8527_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8528(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8528_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8528_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8528_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8528_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8528_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8528_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8528_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8528_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8528_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8528_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8529
#define MACROLOP_PRIVATE_EVAL_REC_8528_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8529(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8529_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8529_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8529_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8529_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8529_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8529_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8529_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8529_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8529_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8529_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8530
#define MACROLOP_PRIVATE_EVAL_REC_8529_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8530(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8530_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8530_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8530_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8530_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8530_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8530_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8530_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8530_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8530_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8530_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8531
#define MACROLOP_PRIVATE_EVAL_REC_8530_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8531(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8531_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8531_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8531_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8531_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8531_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8531_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8531_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8531_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8531_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8531_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8532
#define MACROLOP_PRIVATE_EVAL_REC_8531_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8532(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8532_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8532_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8532_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8532_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8532_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8532_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8532_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8532_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8532_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8532_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8533
#define MACROLOP_PRIVATE_EVAL_REC_8532_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8533(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8533_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8533_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8533_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8533_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8533_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8533_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8533_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8533_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8533_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8533_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8534
#define MACROLOP_PRIVATE_EVAL_REC_8533_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8534(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8534_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8534_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8534_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8534_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8534_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8534_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8534_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8534_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8534_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8534_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8535
#define MACROLOP_PRIVATE_EVAL_REC_8534_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8535(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8535_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8535_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8535_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8535_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8535_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8535_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8535_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8535_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8535_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8535_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8536
#define MACROLOP_PRIVATE_EVAL_REC_8535_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8536(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8536_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8536_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8536_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8536_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8536_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8536_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8536_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8536_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8536_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8536_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8537
#define MACROLOP_PRIVATE_EVAL_REC_8536_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8537(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8537_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8537_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8537_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8537_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8537_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8537_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8537_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8537_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8537_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8537_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8538
#define MACROLOP_PRIVATE_EVAL_REC_8537_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8538(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8538_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8538_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8538_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8538_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8538_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8538_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8538_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8538_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8538_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8538_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8539
#define MACROLOP_PRIVATE_EVAL_REC_8538_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8539(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8539_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8539_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8539_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8539_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8539_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8539_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8539_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8539_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8539_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8539_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8540
#define MACROLOP_PRIVATE_EVAL_REC_8539_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8540(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8540_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8540_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8540_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8540_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8540_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8540_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8540_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8540_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8540_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8540_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8541
#define MACROLOP_PRIVATE_EVAL_REC_8540_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8541(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8541_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8541_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8541_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8541_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8541_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8541_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8541_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8541_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8541_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8541_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8542
#define MACROLOP_PRIVATE_EVAL_REC_8541_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8542(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8542_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8542_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8542_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8542_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8542_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8542_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8542_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8542_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8542_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8542_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8543
#define MACROLOP_PRIVATE_EVAL_REC_8542_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8543(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8543_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8543_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8543_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8543_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8543_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8543_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8543_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8543_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8543_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8543_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8544
#define MACROLOP_PRIVATE_EVAL_REC_8543_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8544(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8544_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8544_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8544_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8544_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8544_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8544_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8544_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8544_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8544_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8544_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8545
#define MACROLOP_PRIVATE_EVAL_REC_8544_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8545(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8545_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8545_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8545_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8545_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8545_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8545_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8545_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8545_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8545_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8545_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8546
#define MACROLOP_PRIVATE_EVAL_REC_8545_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8546(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8546_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8546_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8546_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8546_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8546_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8546_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8546_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8546_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8546_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8546_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8547
#define MACROLOP_PRIVATE_EVAL_REC_8546_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8547(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8547_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8547_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8547_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8547_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8547_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8547_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8547_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8547_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8547_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8547_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8548
#define MACROLOP_PRIVATE_EVAL_REC_8547_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8548(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8548_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8548_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8548_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8548_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8548_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8548_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8548_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8548_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8548_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8548_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8549
#define MACROLOP_PRIVATE_EVAL_REC_8548_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8549(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8549_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8549_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8549_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8549_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8549_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8549_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8549_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8549_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8549_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8549_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8550
#define MACROLOP_PRIVATE_EVAL_REC_8549_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8550(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8550_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8550_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8550_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8550_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8550_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8550_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8550_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8550_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8550_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8550_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8551
#define MACROLOP_PRIVATE_EVAL_REC_8550_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8551(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8551_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8551_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8551_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8551_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8551_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8551_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8551_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8551_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8551_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8551_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8552
#define MACROLOP_PRIVATE_EVAL_REC_8551_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8552(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8552_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8552_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8552_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8552_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8552_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8552_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8552_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8552_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8552_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8552_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8553
#define MACROLOP_PRIVATE_EVAL_REC_8552_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8553(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8553_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8553_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8553_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8553_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8553_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8553_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8553_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8553_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8553_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8553_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8554
#define MACROLOP_PRIVATE_EVAL_REC_8553_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8554(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8554_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8554_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8554_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8554_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8554_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8554_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8554_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8554_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8554_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8554_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8555
#define MACROLOP_PRIVATE_EVAL_REC_8554_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8555(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8555_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8555_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8555_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8555_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8555_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8555_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8555_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8555_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8555_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8555_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8556
#define MACROLOP_PRIVATE_EVAL_REC_8555_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8556(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8556_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8556_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8556_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8556_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8556_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8556_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8556_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8556_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8556_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8556_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8557
#define MACROLOP_PRIVATE_EVAL_REC_8556_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8557(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8557_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8557_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8557_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8557_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8557_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8557_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8557_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8557_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8557_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8557_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8558
#define MACROLOP_PRIVATE_EVAL_REC_8557_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8558(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8558_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8558_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8558_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8558_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8558_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8558_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8558_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8558_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8558_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8558_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8559
#define MACROLOP_PRIVATE_EVAL_REC_8558_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8559(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8559_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8559_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8559_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8559_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8559_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8559_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8559_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8559_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8559_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8559_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8560
#define MACROLOP_PRIVATE_EVAL_REC_8559_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8560(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8560_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8560_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8560_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8560_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8560_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8560_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8560_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8560_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8560_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8560_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8561
#define MACROLOP_PRIVATE_EVAL_REC_8560_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8561(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8561_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8561_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8561_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8561_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8561_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8561_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8561_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8561_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8561_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8561_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8562
#define MACROLOP_PRIVATE_EVAL_REC_8561_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8562(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8562_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8562_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8562_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8562_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8562_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8562_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8562_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8562_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8562_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8562_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8563
#define MACROLOP_PRIVATE_EVAL_REC_8562_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8563(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8563_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8563_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8563_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8563_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8563_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8563_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8563_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8563_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8563_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8563_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8564
#define MACROLOP_PRIVATE_EVAL_REC_8563_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8564(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8564_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8564_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8564_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8564_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8564_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8564_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8564_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8564_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8564_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8564_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8565
#define MACROLOP_PRIVATE_EVAL_REC_8564_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8565(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8565_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8565_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8565_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8565_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8565_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8565_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8565_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8565_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8565_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8565_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8566
#define MACROLOP_PRIVATE_EVAL_REC_8565_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8566(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8566_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8566_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8566_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8566_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8566_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8566_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8566_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8566_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8566_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8566_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8567
#define MACROLOP_PRIVATE_EVAL_REC_8566_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8567(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8567_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8567_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8567_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8567_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8567_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8567_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8567_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8567_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8567_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8567_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8568
#define MACROLOP_PRIVATE_EVAL_REC_8567_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8568(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8568_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8568_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8568_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8568_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8568_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8568_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8568_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8568_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8568_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8568_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8569
#define MACROLOP_PRIVATE_EVAL_REC_8568_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8569(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8569_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8569_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8569_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8569_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8569_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8569_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8569_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8569_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8569_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8569_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8570
#define MACROLOP_PRIVATE_EVAL_REC_8569_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8570(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8570_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8570_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8570_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8570_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8570_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8570_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8570_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8570_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8570_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8570_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8571
#define MACROLOP_PRIVATE_EVAL_REC_8570_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8571(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8571_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8571_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8571_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8571_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8571_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8571_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8571_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8571_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8571_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8571_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8572
#define MACROLOP_PRIVATE_EVAL_REC_8571_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8572(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8572_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8572_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8572_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8572_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8572_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8572_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8572_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8572_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8572_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8572_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8573
#define MACROLOP_PRIVATE_EVAL_REC_8572_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8573(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8573_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8573_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8573_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8573_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8573_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8573_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8573_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8573_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8573_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8573_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8574
#define MACROLOP_PRIVATE_EVAL_REC_8573_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8574(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8574_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8574_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8574_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8574_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8574_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8574_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8574_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8574_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8574_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8574_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8575
#define MACROLOP_PRIVATE_EVAL_REC_8574_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8575(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8575_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8575_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8575_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8575_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8575_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8575_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8575_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8575_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8575_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8575_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8576
#define MACROLOP_PRIVATE_EVAL_REC_8575_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8576(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8576_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8576_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8576_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8576_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8576_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8576_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8576_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8576_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8576_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8576_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8577
#define MACROLOP_PRIVATE_EVAL_REC_8576_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8577(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8577_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8577_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8577_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8577_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8577_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8577_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8577_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8577_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8577_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8577_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8578
#define MACROLOP_PRIVATE_EVAL_REC_8577_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8578(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8578_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8578_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8578_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8578_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8578_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8578_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8578_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8578_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8578_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8578_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8579
#define MACROLOP_PRIVATE_EVAL_REC_8578_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8579(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8579_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8579_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8579_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8579_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8579_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8579_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8579_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8579_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8579_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8579_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8580
#define MACROLOP_PRIVATE_EVAL_REC_8579_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8580(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8580_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8580_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8580_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8580_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8580_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8580_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8580_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8580_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8580_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8580_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8581
#define MACROLOP_PRIVATE_EVAL_REC_8580_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8581(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8581_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8581_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8581_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8581_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8581_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8581_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8581_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8581_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8581_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8581_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8582
#define MACROLOP_PRIVATE_EVAL_REC_8581_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8582(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8582_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8582_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8582_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8582_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8582_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8582_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8582_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8582_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8582_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8582_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8583
#define MACROLOP_PRIVATE_EVAL_REC_8582_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8583(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8583_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8583_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8583_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8583_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8583_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8583_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8583_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8583_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8583_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8583_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8584
#define MACROLOP_PRIVATE_EVAL_REC_8583_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8584(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8584_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8584_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8584_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8584_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8584_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8584_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8584_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8584_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8584_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8584_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8585
#define MACROLOP_PRIVATE_EVAL_REC_8584_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8585(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8585_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8585_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8585_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8585_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8585_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8585_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8585_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8585_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8585_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8585_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8586
#define MACROLOP_PRIVATE_EVAL_REC_8585_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8586(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8586_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8586_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8586_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8586_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8586_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8586_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8586_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8586_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8586_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8586_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8587
#define MACROLOP_PRIVATE_EVAL_REC_8586_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8587(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8587_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8587_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8587_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8587_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8587_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8587_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8587_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8587_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8587_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8587_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8588
#define MACROLOP_PRIVATE_EVAL_REC_8587_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8588(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8588_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8588_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8588_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8588_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8588_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8588_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8588_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8588_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8588_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8588_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8589
#define MACROLOP_PRIVATE_EVAL_REC_8588_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8589(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8589_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8589_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8589_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8589_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8589_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8589_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8589_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8589_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8589_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8589_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8590
#define MACROLOP_PRIVATE_EVAL_REC_8589_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8590(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8590_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8590_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8590_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8590_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8590_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8590_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8590_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8590_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8590_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8590_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8591
#define MACROLOP_PRIVATE_EVAL_REC_8590_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8591(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8591_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8591_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8591_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8591_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8591_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8591_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8591_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8591_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8591_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8591_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8592
#define MACROLOP_PRIVATE_EVAL_REC_8591_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8592(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8592_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8592_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8592_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8592_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8592_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8592_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8592_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8592_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8592_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8592_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8593
#define MACROLOP_PRIVATE_EVAL_REC_8592_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8593(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8593_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8593_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8593_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8593_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8593_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8593_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8593_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8593_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8593_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8593_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8594
#define MACROLOP_PRIVATE_EVAL_REC_8593_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8594(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8594_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8594_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8594_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8594_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8594_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8594_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8594_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8594_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8594_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8594_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8595
#define MACROLOP_PRIVATE_EVAL_REC_8594_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8595(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8595_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8595_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8595_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8595_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8595_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8595_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8595_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8595_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8595_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8595_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8596
#define MACROLOP_PRIVATE_EVAL_REC_8595_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8596(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8596_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8596_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8596_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8596_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8596_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8596_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8596_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8596_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8596_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8596_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8597
#define MACROLOP_PRIVATE_EVAL_REC_8596_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8597(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8597_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8597_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8597_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8597_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8597_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8597_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8597_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8597_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8597_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8597_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8598
#define MACROLOP_PRIVATE_EVAL_REC_8597_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8598(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8598_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8598_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8598_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8598_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8598_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8598_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8598_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8598_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8598_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8598_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8599
#define MACROLOP_PRIVATE_EVAL_REC_8598_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8599(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8599_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8599_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8599_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8599_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8599_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8599_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8599_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8599_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8599_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8599_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8600
#define MACROLOP_PRIVATE_EVAL_REC_8599_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8600(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8600_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8600_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8600_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8600_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8600_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8600_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8600_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8600_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8600_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8600_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8601
#define MACROLOP_PRIVATE_EVAL_REC_8600_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8601(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8601_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8601_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8601_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8601_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8601_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8601_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8601_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8601_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8601_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8601_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8602
#define MACROLOP_PRIVATE_EVAL_REC_8601_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8602(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8602_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8602_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8602_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8602_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8602_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8602_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8602_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8602_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8602_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8602_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8603
#define MACROLOP_PRIVATE_EVAL_REC_8602_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8603(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8603_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8603_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8603_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8603_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8603_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8603_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8603_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8603_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8603_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8603_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8604
#define MACROLOP_PRIVATE_EVAL_REC_8603_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8604(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8604_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8604_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8604_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8604_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8604_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8604_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8604_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8604_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8604_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8604_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8605
#define MACROLOP_PRIVATE_EVAL_REC_8604_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8605(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8605_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8605_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8605_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8605_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8605_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8605_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8605_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8605_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8605_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8605_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8606
#define MACROLOP_PRIVATE_EVAL_REC_8605_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8606(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8606_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8606_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8606_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8606_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8606_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8606_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8606_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8606_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8606_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8606_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8607
#define MACROLOP_PRIVATE_EVAL_REC_8606_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8607(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8607_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8607_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8607_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8607_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8607_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8607_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8607_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8607_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8607_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8607_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8608
#define MACROLOP_PRIVATE_EVAL_REC_8607_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8608(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8608_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8608_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8608_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8608_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8608_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8608_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8608_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8608_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8608_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8608_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8609
#define MACROLOP_PRIVATE_EVAL_REC_8608_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8609(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8609_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8609_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8609_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8609_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8609_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8609_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8609_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8609_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8609_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8609_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8610
#define MACROLOP_PRIVATE_EVAL_REC_8609_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8610(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8610_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8610_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8610_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8610_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8610_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8610_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8610_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8610_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8610_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8610_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8611
#define MACROLOP_PRIVATE_EVAL_REC_8610_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8611(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8611_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8611_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8611_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8611_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8611_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8611_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8611_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8611_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8611_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8611_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8612
#define MACROLOP_PRIVATE_EVAL_REC_8611_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8612(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8612_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8612_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8612_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8612_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8612_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8612_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8612_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8612_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8612_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8612_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8613
#define MACROLOP_PRIVATE_EVAL_REC_8612_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8613(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8613_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8613_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8613_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8613_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8613_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8613_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8613_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8613_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8613_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8613_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8614
#define MACROLOP_PRIVATE_EVAL_REC_8613_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8614(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8614_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8614_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8614_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8614_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8614_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8614_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8614_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8614_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8614_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8614_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8615
#define MACROLOP_PRIVATE_EVAL_REC_8614_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8615(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8615_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8615_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8615_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8615_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8615_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8615_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8615_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8615_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8615_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8615_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8616
#define MACROLOP_PRIVATE_EVAL_REC_8615_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8616(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8616_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8616_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8616_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8616_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8616_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8616_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8616_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8616_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8616_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8616_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8617
#define MACROLOP_PRIVATE_EVAL_REC_8616_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8617(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8617_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8617_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8617_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8617_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8617_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8617_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8617_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8617_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8617_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8617_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8618
#define MACROLOP_PRIVATE_EVAL_REC_8617_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8618(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8618_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8618_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8618_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8618_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8618_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8618_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8618_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8618_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8618_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8618_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8619
#define MACROLOP_PRIVATE_EVAL_REC_8618_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8619(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8619_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8619_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8619_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8619_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8619_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8619_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8619_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8619_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8619_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8619_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8620
#define MACROLOP_PRIVATE_EVAL_REC_8619_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8620(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8620_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8620_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8620_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8620_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8620_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8620_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8620_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8620_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8620_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8620_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8621
#define MACROLOP_PRIVATE_EVAL_REC_8620_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8621(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8621_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8621_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8621_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8621_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8621_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8621_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8621_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8621_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8621_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8621_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8622
#define MACROLOP_PRIVATE_EVAL_REC_8621_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8622(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8622_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8622_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8622_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8622_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8622_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8622_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8622_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8622_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8622_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8622_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8623
#define MACROLOP_PRIVATE_EVAL_REC_8622_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8623(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8623_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8623_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8623_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8623_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8623_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8623_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8623_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8623_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8623_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8623_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8624
#define MACROLOP_PRIVATE_EVAL_REC_8623_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8624(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8624_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8624_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8624_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8624_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8624_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8624_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8624_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8624_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8624_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8624_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8625
#define MACROLOP_PRIVATE_EVAL_REC_8624_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8625(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8625_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8625_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8625_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8625_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8625_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8625_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8625_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8625_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8625_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8625_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8626
#define MACROLOP_PRIVATE_EVAL_REC_8625_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8626(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8626_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8626_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8626_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8626_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8626_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8626_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8626_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8626_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8626_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8626_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8627
#define MACROLOP_PRIVATE_EVAL_REC_8626_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8627(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8627_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8627_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8627_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8627_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8627_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8627_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8627_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8627_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8627_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8627_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8628
#define MACROLOP_PRIVATE_EVAL_REC_8627_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8628(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8628_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8628_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8628_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8628_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8628_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8628_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8628_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8628_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8628_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8628_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8629
#define MACROLOP_PRIVATE_EVAL_REC_8628_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8629(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8629_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8629_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8629_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8629_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8629_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8629_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8629_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8629_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8629_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8629_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8630
#define MACROLOP_PRIVATE_EVAL_REC_8629_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8630(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8630_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8630_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8630_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8630_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8630_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8630_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8630_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8630_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8630_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8630_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8631
#define MACROLOP_PRIVATE_EVAL_REC_8630_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8631(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8631_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8631_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8631_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8631_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8631_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8631_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8631_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8631_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8631_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8631_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8632
#define MACROLOP_PRIVATE_EVAL_REC_8631_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8632(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8632_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8632_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8632_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8632_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8632_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8632_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8632_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8632_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8632_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8632_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8633
#define MACROLOP_PRIVATE_EVAL_REC_8632_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8633(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8633_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8633_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8633_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8633_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8633_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8633_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8633_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8633_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8633_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8633_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8634
#define MACROLOP_PRIVATE_EVAL_REC_8633_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8634(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8634_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8634_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8634_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8634_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8634_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8634_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8634_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8634_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8634_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8634_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8635
#define MACROLOP_PRIVATE_EVAL_REC_8634_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8635(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8635_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8635_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8635_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8635_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8635_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8635_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8635_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8635_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8635_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8635_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8636
#define MACROLOP_PRIVATE_EVAL_REC_8635_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8636(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8636_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8636_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8636_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8636_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8636_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8636_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8636_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8636_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8636_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8636_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8637
#define MACROLOP_PRIVATE_EVAL_REC_8636_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8637(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8637_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8637_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8637_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8637_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8637_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8637_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8637_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8637_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8637_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8637_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8638
#define MACROLOP_PRIVATE_EVAL_REC_8637_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8638(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8638_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8638_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8638_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8638_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8638_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8638_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8638_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8638_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8638_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8638_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8639
#define MACROLOP_PRIVATE_EVAL_REC_8638_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8639(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8639_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8639_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8639_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8639_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8639_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8639_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8639_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8639_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8639_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8639_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8640
#define MACROLOP_PRIVATE_EVAL_REC_8639_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8640(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8640_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8640_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8640_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8640_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8640_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8640_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8640_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8640_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8640_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8640_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8641
#define MACROLOP_PRIVATE_EVAL_REC_8640_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8641(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8641_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8641_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8641_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8641_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8641_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8641_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8641_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8641_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8641_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8641_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8642
#define MACROLOP_PRIVATE_EVAL_REC_8641_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8642(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8642_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8642_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8642_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8642_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8642_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8642_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8642_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8642_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8642_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8642_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8643
#define MACROLOP_PRIVATE_EVAL_REC_8642_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8643(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8643_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8643_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8643_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8643_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8643_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8643_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8643_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8643_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8643_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8643_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8644
#define MACROLOP_PRIVATE_EVAL_REC_8643_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8644(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8644_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8644_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8644_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8644_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8644_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8644_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8644_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8644_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8644_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8644_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8645
#define MACROLOP_PRIVATE_EVAL_REC_8644_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8645(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8645_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8645_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8645_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8645_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8645_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8645_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8645_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8645_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8645_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8645_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8646
#define MACROLOP_PRIVATE_EVAL_REC_8645_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8646(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8646_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8646_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8646_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8646_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8646_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8646_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8646_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8646_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8646_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8646_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8647
#define MACROLOP_PRIVATE_EVAL_REC_8646_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8647(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8647_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8647_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8647_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8647_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8647_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8647_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8647_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8647_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8647_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8647_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8648
#define MACROLOP_PRIVATE_EVAL_REC_8647_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8648(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8648_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8648_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8648_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8648_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8648_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8648_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8648_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8648_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8648_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8648_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8649
#define MACROLOP_PRIVATE_EVAL_REC_8648_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8649(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8649_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8649_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8649_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8649_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8649_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8649_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8649_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8649_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8649_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8649_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8650
#define MACROLOP_PRIVATE_EVAL_REC_8649_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8650(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8650_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8650_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8650_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8650_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8650_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8650_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8650_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8650_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8650_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8650_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8651
#define MACROLOP_PRIVATE_EVAL_REC_8650_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8651(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8651_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8651_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8651_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8651_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8651_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8651_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8651_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8651_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8651_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8651_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8652
#define MACROLOP_PRIVATE_EVAL_REC_8651_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8652(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8652_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8652_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8652_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8652_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8652_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8652_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8652_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8652_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8652_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8652_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8653
#define MACROLOP_PRIVATE_EVAL_REC_8652_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8653(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8653_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8653_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8653_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8653_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8653_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8653_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8653_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8653_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8653_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8653_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8654
#define MACROLOP_PRIVATE_EVAL_REC_8653_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8654(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8654_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8654_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8654_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8654_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8654_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8654_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8654_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8654_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8654_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8654_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8655
#define MACROLOP_PRIVATE_EVAL_REC_8654_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8655(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8655_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8655_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8655_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8655_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8655_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8655_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8655_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8655_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8655_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8655_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8656
#define MACROLOP_PRIVATE_EVAL_REC_8655_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8656(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8656_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8656_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8656_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8656_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8656_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8656_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8656_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8656_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8656_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8656_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8657
#define MACROLOP_PRIVATE_EVAL_REC_8656_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8657(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8657_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8657_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8657_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8657_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8657_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8657_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8657_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8657_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8657_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8657_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8658
#define MACROLOP_PRIVATE_EVAL_REC_8657_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8658(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8658_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8658_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8658_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8658_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8658_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8658_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8658_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8658_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8658_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8658_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8659
#define MACROLOP_PRIVATE_EVAL_REC_8658_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8659(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8659_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8659_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8659_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8659_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8659_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8659_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8659_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8659_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8659_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8659_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8660
#define MACROLOP_PRIVATE_EVAL_REC_8659_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8660(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8660_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8660_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8660_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8660_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8660_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8660_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8660_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8660_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8660_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8660_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8661
#define MACROLOP_PRIVATE_EVAL_REC_8660_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8661(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8661_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8661_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8661_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8661_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8661_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8661_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8661_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8661_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8661_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8661_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8662
#define MACROLOP_PRIVATE_EVAL_REC_8661_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8662(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8662_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8662_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8662_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8662_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8662_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8662_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8662_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8662_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8662_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8662_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8663
#define MACROLOP_PRIVATE_EVAL_REC_8662_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8663(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8663_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8663_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8663_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8663_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8663_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8663_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8663_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8663_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8663_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8663_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8664
#define MACROLOP_PRIVATE_EVAL_REC_8663_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8664(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8664_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8664_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8664_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8664_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8664_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8664_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8664_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8664_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8664_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8664_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8665
#define MACROLOP_PRIVATE_EVAL_REC_8664_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8665(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8665_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8665_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8665_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8665_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8665_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8665_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8665_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8665_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8665_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8665_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8666
#define MACROLOP_PRIVATE_EVAL_REC_8665_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8666(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8666_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8666_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8666_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8666_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8666_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8666_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8666_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8666_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8666_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8666_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8667
#define MACROLOP_PRIVATE_EVAL_REC_8666_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8667(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8667_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8667_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8667_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8667_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8667_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8667_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8667_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8667_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8667_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8667_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8668
#define MACROLOP_PRIVATE_EVAL_REC_8667_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8668(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8668_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8668_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8668_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8668_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8668_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8668_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8668_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8668_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8668_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8668_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8669
#define MACROLOP_PRIVATE_EVAL_REC_8668_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8669(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8669_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8669_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8669_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8669_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8669_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8669_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8669_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8669_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8669_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8669_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8670
#define MACROLOP_PRIVATE_EVAL_REC_8669_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8670(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8670_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8670_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8670_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8670_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8670_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8670_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8670_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8670_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8670_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8670_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8671
#define MACROLOP_PRIVATE_EVAL_REC_8670_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8671(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8671_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8671_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8671_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8671_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8671_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8671_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8671_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8671_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8671_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8671_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8672
#define MACROLOP_PRIVATE_EVAL_REC_8671_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8672(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8672_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8672_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8672_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8672_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8672_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8672_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8672_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8672_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8672_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8672_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8673
#define MACROLOP_PRIVATE_EVAL_REC_8672_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8673(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8673_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8673_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8673_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8673_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8673_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8673_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8673_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8673_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8673_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8673_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8674
#define MACROLOP_PRIVATE_EVAL_REC_8673_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8674(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8674_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8674_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8674_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8674_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8674_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8674_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8674_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8674_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8674_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8674_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8675
#define MACROLOP_PRIVATE_EVAL_REC_8674_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8675(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8675_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8675_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8675_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8675_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8675_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8675_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8675_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8675_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8675_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8675_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8676
#define MACROLOP_PRIVATE_EVAL_REC_8675_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8676(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8676_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8676_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8676_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8676_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8676_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8676_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8676_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8676_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8676_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8676_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8677
#define MACROLOP_PRIVATE_EVAL_REC_8676_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8677(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8677_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8677_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8677_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8677_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8677_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8677_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8677_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8677_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8677_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8677_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8678
#define MACROLOP_PRIVATE_EVAL_REC_8677_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8678(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8678_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8678_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8678_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8678_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8678_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8678_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8678_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8678_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8678_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8678_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8679
#define MACROLOP_PRIVATE_EVAL_REC_8678_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8679(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8679_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8679_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8679_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8679_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8679_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8679_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8679_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8679_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8679_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8679_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8680
#define MACROLOP_PRIVATE_EVAL_REC_8679_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8680(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8680_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8680_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8680_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8680_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8680_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8680_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8680_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8680_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8680_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8680_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8681
#define MACROLOP_PRIVATE_EVAL_REC_8680_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8681(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8681_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8681_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8681_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8681_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8681_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8681_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8681_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8681_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8681_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8681_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8682
#define MACROLOP_PRIVATE_EVAL_REC_8681_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8682(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8682_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8682_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8682_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8682_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8682_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8682_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8682_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8682_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8682_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8682_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8683
#define MACROLOP_PRIVATE_EVAL_REC_8682_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8683(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8683_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8683_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8683_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8683_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8683_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8683_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8683_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8683_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8683_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8683_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8684
#define MACROLOP_PRIVATE_EVAL_REC_8683_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8684(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8684_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8684_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8684_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8684_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8684_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8684_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8684_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8684_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8684_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8684_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8685
#define MACROLOP_PRIVATE_EVAL_REC_8684_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8685(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8685_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8685_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8685_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8685_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8685_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8685_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8685_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8685_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8685_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8685_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8686
#define MACROLOP_PRIVATE_EVAL_REC_8685_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8686(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8686_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8686_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8686_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8686_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8686_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8686_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8686_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8686_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8686_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8686_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8687
#define MACROLOP_PRIVATE_EVAL_REC_8686_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8687(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8687_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8687_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8687_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8687_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8687_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8687_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8687_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8687_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8687_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8687_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8688
#define MACROLOP_PRIVATE_EVAL_REC_8687_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8688(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8688_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8688_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8688_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8688_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8688_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8688_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8688_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8688_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8688_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8688_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8689
#define MACROLOP_PRIVATE_EVAL_REC_8688_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8689(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8689_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8689_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8689_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8689_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8689_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8689_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8689_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8689_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8689_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8689_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8690
#define MACROLOP_PRIVATE_EVAL_REC_8689_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8690(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8690_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8690_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8690_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8690_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8690_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8690_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8690_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8690_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8690_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8690_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8691
#define MACROLOP_PRIVATE_EVAL_REC_8690_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8691(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8691_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8691_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8691_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8691_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8691_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8691_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8691_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8691_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8691_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8691_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8692
#define MACROLOP_PRIVATE_EVAL_REC_8691_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8692(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8692_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8692_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8692_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8692_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8692_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8692_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8692_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8692_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8692_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8692_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8693
#define MACROLOP_PRIVATE_EVAL_REC_8692_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8693(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8693_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8693_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8693_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8693_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8693_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8693_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8693_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8693_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8693_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8693_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8694
#define MACROLOP_PRIVATE_EVAL_REC_8693_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8694(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8694_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8694_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8694_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8694_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8694_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8694_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8694_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8694_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8694_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8694_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8695
#define MACROLOP_PRIVATE_EVAL_REC_8694_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8695(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8695_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8695_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8695_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8695_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8695_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8695_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8695_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8695_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8695_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8695_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8696
#define MACROLOP_PRIVATE_EVAL_REC_8695_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8696(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8696_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8696_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8696_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8696_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8696_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8696_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8696_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8696_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8696_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8696_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8697
#define MACROLOP_PRIVATE_EVAL_REC_8696_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8697(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8697_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8697_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8697_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8697_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8697_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8697_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8697_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8697_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8697_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8697_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8698
#define MACROLOP_PRIVATE_EVAL_REC_8697_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8698(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8698_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8698_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8698_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8698_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8698_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8698_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8698_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8698_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8698_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8698_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8699
#define MACROLOP_PRIVATE_EVAL_REC_8698_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8699(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8699_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8699_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8699_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8699_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8699_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8699_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8699_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8699_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8699_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8699_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8700
#define MACROLOP_PRIVATE_EVAL_REC_8699_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8700(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8700_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8700_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8700_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8700_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8700_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8700_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8700_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8700_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8700_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8700_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8701
#define MACROLOP_PRIVATE_EVAL_REC_8700_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8701(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8701_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8701_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8701_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8701_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8701_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8701_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8701_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8701_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8701_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8701_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8702
#define MACROLOP_PRIVATE_EVAL_REC_8701_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8702(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8702_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8702_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8702_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8702_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8702_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8702_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8702_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8702_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8702_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8702_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8703
#define MACROLOP_PRIVATE_EVAL_REC_8702_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8703(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8703_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8703_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8703_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8703_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8703_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8703_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8703_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8703_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8703_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8703_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8704
#define MACROLOP_PRIVATE_EVAL_REC_8703_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8704(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8704_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8704_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8704_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8704_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8704_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8704_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8704_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8704_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8704_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8704_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8705
#define MACROLOP_PRIVATE_EVAL_REC_8704_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8705(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8705_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8705_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8705_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8705_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8705_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8705_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8705_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8705_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8705_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8705_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8706
#define MACROLOP_PRIVATE_EVAL_REC_8705_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8706(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8706_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8706_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8706_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8706_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8706_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8706_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8706_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8706_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8706_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8706_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8707
#define MACROLOP_PRIVATE_EVAL_REC_8706_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8707(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8707_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8707_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8707_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8707_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8707_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8707_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8707_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8707_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8707_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8707_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8708
#define MACROLOP_PRIVATE_EVAL_REC_8707_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8708(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8708_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8708_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8708_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8708_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8708_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8708_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8708_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8708_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8708_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8708_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8709
#define MACROLOP_PRIVATE_EVAL_REC_8708_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8709(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8709_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8709_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8709_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8709_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8709_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8709_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8709_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8709_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8709_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8709_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8710
#define MACROLOP_PRIVATE_EVAL_REC_8709_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8710(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8710_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8710_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8710_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8710_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8710_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8710_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8710_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8710_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8710_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8710_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8711
#define MACROLOP_PRIVATE_EVAL_REC_8710_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8711(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8711_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8711_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8711_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8711_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8711_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8711_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8711_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8711_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8711_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8711_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8712
#define MACROLOP_PRIVATE_EVAL_REC_8711_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8712(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8712_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8712_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8712_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8712_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8712_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8712_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8712_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8712_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8712_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8712_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8713
#define MACROLOP_PRIVATE_EVAL_REC_8712_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8713(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8713_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8713_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8713_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8713_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8713_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8713_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8713_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8713_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8713_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8713_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8714
#define MACROLOP_PRIVATE_EVAL_REC_8713_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8714(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8714_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8714_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8714_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8714_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8714_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8714_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8714_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8714_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8714_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8714_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8715
#define MACROLOP_PRIVATE_EVAL_REC_8714_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8715(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8715_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8715_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8715_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8715_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8715_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8715_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8715_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8715_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8715_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8715_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8716
#define MACROLOP_PRIVATE_EVAL_REC_8715_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8716(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8716_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8716_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8716_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8716_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8716_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8716_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8716_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8716_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8716_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8716_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8717
#define MACROLOP_PRIVATE_EVAL_REC_8716_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8717(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8717_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8717_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8717_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8717_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8717_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8717_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8717_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8717_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8717_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8717_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8718
#define MACROLOP_PRIVATE_EVAL_REC_8717_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8718(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8718_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8718_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8718_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8718_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8718_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8718_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8718_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8718_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8718_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8718_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8719
#define MACROLOP_PRIVATE_EVAL_REC_8718_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8719(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8719_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8719_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8719_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8719_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8719_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8719_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8719_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8719_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8719_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8719_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8720
#define MACROLOP_PRIVATE_EVAL_REC_8719_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8720(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8720_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8720_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8720_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8720_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8720_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8720_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8720_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8720_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8720_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8720_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8721
#define MACROLOP_PRIVATE_EVAL_REC_8720_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8721(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8721_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8721_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8721_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8721_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8721_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8721_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8721_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8721_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8721_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8721_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8722
#define MACROLOP_PRIVATE_EVAL_REC_8721_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8722(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8722_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8722_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8722_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8722_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8722_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8722_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8722_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8722_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8722_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8722_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8723
#define MACROLOP_PRIVATE_EVAL_REC_8722_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8723(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8723_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8723_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8723_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8723_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8723_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8723_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8723_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8723_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8723_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8723_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8724
#define MACROLOP_PRIVATE_EVAL_REC_8723_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8724(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8724_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8724_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8724_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8724_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8724_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8724_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8724_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8724_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8724_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8724_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8725
#define MACROLOP_PRIVATE_EVAL_REC_8724_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8725(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8725_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8725_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8725_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8725_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8725_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8725_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8725_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8725_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8725_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8725_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8726
#define MACROLOP_PRIVATE_EVAL_REC_8725_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8726(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8726_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8726_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8726_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8726_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8726_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8726_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8726_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8726_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8726_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8726_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8727
#define MACROLOP_PRIVATE_EVAL_REC_8726_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8727(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8727_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8727_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8727_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8727_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8727_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8727_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8727_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8727_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8727_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8727_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8728
#define MACROLOP_PRIVATE_EVAL_REC_8727_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8728(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8728_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8728_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8728_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8728_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8728_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8728_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8728_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8728_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8728_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8728_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8729
#define MACROLOP_PRIVATE_EVAL_REC_8728_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8729(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8729_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8729_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8729_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8729_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8729_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8729_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8729_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8729_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8729_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8729_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8730
#define MACROLOP_PRIVATE_EVAL_REC_8729_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8730(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8730_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8730_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8730_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8730_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8730_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8730_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8730_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8730_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8730_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8730_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8731
#define MACROLOP_PRIVATE_EVAL_REC_8730_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8731(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8731_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8731_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8731_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8731_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8731_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8731_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8731_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8731_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8731_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8731_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8732
#define MACROLOP_PRIVATE_EVAL_REC_8731_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8732(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8732_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8732_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8732_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8732_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8732_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8732_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8732_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8732_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8732_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8732_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8733
#define MACROLOP_PRIVATE_EVAL_REC_8732_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8733(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8733_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8733_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8733_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8733_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8733_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8733_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8733_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8733_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8733_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8733_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8734
#define MACROLOP_PRIVATE_EVAL_REC_8733_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8734(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8734_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8734_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8734_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8734_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8734_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8734_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8734_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8734_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8734_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8734_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8735
#define MACROLOP_PRIVATE_EVAL_REC_8734_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8735(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8735_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8735_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8735_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8735_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8735_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8735_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8735_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8735_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8735_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8735_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8736
#define MACROLOP_PRIVATE_EVAL_REC_8735_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8736(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8736_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8736_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8736_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8736_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8736_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8736_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8736_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8736_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8736_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8736_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8737
#define MACROLOP_PRIVATE_EVAL_REC_8736_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8737(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8737_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8737_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8737_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8737_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8737_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8737_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8737_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8737_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8737_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8737_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8738
#define MACROLOP_PRIVATE_EVAL_REC_8737_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8738(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8738_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8738_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8738_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8738_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8738_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8738_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8738_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8738_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8738_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8738_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8739
#define MACROLOP_PRIVATE_EVAL_REC_8738_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8739(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8739_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8739_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8739_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8739_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8739_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8739_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8739_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8739_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8739_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8739_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8740
#define MACROLOP_PRIVATE_EVAL_REC_8739_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8740(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8740_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8740_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8740_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8740_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8740_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8740_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8740_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8740_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8740_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8740_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8741
#define MACROLOP_PRIVATE_EVAL_REC_8740_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8741(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8741_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8741_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8741_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8741_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8741_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8741_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8741_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8741_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8741_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8741_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8742
#define MACROLOP_PRIVATE_EVAL_REC_8741_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8742(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8742_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8742_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8742_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8742_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8742_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8742_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8742_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8742_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8742_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8742_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8743
#define MACROLOP_PRIVATE_EVAL_REC_8742_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8743(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8743_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8743_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8743_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8743_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8743_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8743_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8743_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8743_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8743_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8743_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8744
#define MACROLOP_PRIVATE_EVAL_REC_8743_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8744(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8744_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8744_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8744_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8744_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8744_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8744_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8744_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8744_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8744_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8744_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8745
#define MACROLOP_PRIVATE_EVAL_REC_8744_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8745(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8745_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8745_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8745_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8745_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8745_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8745_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8745_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8745_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8745_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8745_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8746
#define MACROLOP_PRIVATE_EVAL_REC_8745_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8746(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8746_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8746_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8746_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8746_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8746_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8746_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8746_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8746_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8746_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8746_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8747
#define MACROLOP_PRIVATE_EVAL_REC_8746_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8747(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8747_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8747_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8747_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8747_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8747_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8747_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8747_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8747_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8747_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8747_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8748
#define MACROLOP_PRIVATE_EVAL_REC_8747_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8748(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8748_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8748_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8748_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8748_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8748_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8748_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8748_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8748_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8748_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8748_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8749
#define MACROLOP_PRIVATE_EVAL_REC_8748_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8749(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8749_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8749_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8749_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8749_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8749_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8749_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8749_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8749_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8749_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8749_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8750
#define MACROLOP_PRIVATE_EVAL_REC_8749_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8750(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8750_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8750_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8750_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8750_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8750_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8750_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8750_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8750_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8750_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8750_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8751
#define MACROLOP_PRIVATE_EVAL_REC_8750_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8751(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8751_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8751_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8751_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8751_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8751_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8751_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8751_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8751_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8751_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8751_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8752
#define MACROLOP_PRIVATE_EVAL_REC_8751_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8752(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8752_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8752_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8752_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8752_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8752_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8752_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8752_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8752_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8752_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8752_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8753
#define MACROLOP_PRIVATE_EVAL_REC_8752_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8753(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8753_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8753_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8753_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8753_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8753_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8753_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8753_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8753_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8753_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8753_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8754
#define MACROLOP_PRIVATE_EVAL_REC_8753_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8754(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8754_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8754_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8754_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8754_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8754_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8754_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8754_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8754_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8754_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8754_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8755
#define MACROLOP_PRIVATE_EVAL_REC_8754_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8755(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8755_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8755_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8755_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8755_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8755_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8755_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8755_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8755_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8755_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8755_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8756
#define MACROLOP_PRIVATE_EVAL_REC_8755_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8756(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8756_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8756_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8756_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8756_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8756_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8756_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8756_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8756_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8756_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8756_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8757
#define MACROLOP_PRIVATE_EVAL_REC_8756_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8757(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8757_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8757_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8757_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8757_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8757_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8757_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8757_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8757_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8757_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8757_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8758
#define MACROLOP_PRIVATE_EVAL_REC_8757_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8758(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8758_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8758_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8758_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8758_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8758_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8758_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8758_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8758_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8758_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8758_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8759
#define MACROLOP_PRIVATE_EVAL_REC_8758_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8759(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8759_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8759_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8759_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8759_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8759_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8759_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8759_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8759_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8759_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8759_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8760
#define MACROLOP_PRIVATE_EVAL_REC_8759_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8760(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8760_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8760_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8760_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8760_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8760_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8760_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8760_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8760_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8760_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8760_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8761
#define MACROLOP_PRIVATE_EVAL_REC_8760_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8761(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8761_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8761_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8761_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8761_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8761_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8761_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8761_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8761_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8761_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8761_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8762
#define MACROLOP_PRIVATE_EVAL_REC_8761_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8762(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8762_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8762_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8762_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8762_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8762_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8762_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8762_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8762_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8762_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8762_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8763
#define MACROLOP_PRIVATE_EVAL_REC_8762_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8763(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8763_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8763_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8763_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8763_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8763_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8763_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8763_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8763_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8763_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8763_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8764
#define MACROLOP_PRIVATE_EVAL_REC_8763_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8764(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8764_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8764_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8764_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8764_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8764_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8764_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8764_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8764_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8764_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8764_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8765
#define MACROLOP_PRIVATE_EVAL_REC_8764_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8765(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8765_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8765_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8765_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8765_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8765_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8765_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8765_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8765_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8765_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8765_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8766
#define MACROLOP_PRIVATE_EVAL_REC_8765_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8766(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8766_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8766_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8766_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8766_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8766_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8766_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8766_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8766_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8766_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8766_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8767
#define MACROLOP_PRIVATE_EVAL_REC_8766_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8767(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8767_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8767_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8767_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8767_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8767_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8767_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8767_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8767_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8767_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8767_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8768
#define MACROLOP_PRIVATE_EVAL_REC_8767_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8768(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8768_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8768_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8768_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8768_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8768_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8768_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8768_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8768_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8768_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8768_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8769
#define MACROLOP_PRIVATE_EVAL_REC_8768_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8769(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8769_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8769_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8769_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8769_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8769_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8769_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8769_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8769_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8769_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8769_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8770
#define MACROLOP_PRIVATE_EVAL_REC_8769_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8770(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8770_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8770_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8770_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8770_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8770_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8770_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8770_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8770_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8770_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8770_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8771
#define MACROLOP_PRIVATE_EVAL_REC_8770_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8771(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8771_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8771_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8771_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8771_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8771_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8771_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8771_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8771_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8771_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8771_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8772
#define MACROLOP_PRIVATE_EVAL_REC_8771_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8772(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8772_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8772_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8772_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8772_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8772_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8772_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8772_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8772_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8772_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8772_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8773
#define MACROLOP_PRIVATE_EVAL_REC_8772_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8773(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8773_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8773_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8773_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8773_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8773_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8773_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8773_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8773_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8773_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8773_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8774
#define MACROLOP_PRIVATE_EVAL_REC_8773_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8774(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8774_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8774_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8774_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8774_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8774_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8774_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8774_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8774_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8774_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8774_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8775
#define MACROLOP_PRIVATE_EVAL_REC_8774_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8775(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8775_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8775_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8775_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8775_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8775_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8775_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8775_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8775_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8775_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8775_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8776
#define MACROLOP_PRIVATE_EVAL_REC_8775_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8776(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8776_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8776_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8776_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8776_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8776_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8776_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8776_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8776_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8776_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8776_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8777
#define MACROLOP_PRIVATE_EVAL_REC_8776_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8777(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8777_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8777_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8777_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8777_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8777_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8777_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8777_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8777_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8777_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8777_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8778
#define MACROLOP_PRIVATE_EVAL_REC_8777_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8778(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8778_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8778_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8778_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8778_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8778_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8778_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8778_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8778_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8778_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8778_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8779
#define MACROLOP_PRIVATE_EVAL_REC_8778_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8779(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8779_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8779_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8779_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8779_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8779_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8779_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8779_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8779_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8779_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8779_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8780
#define MACROLOP_PRIVATE_EVAL_REC_8779_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8780(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8780_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8780_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8780_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8780_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8780_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8780_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8780_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8780_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8780_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8780_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8781
#define MACROLOP_PRIVATE_EVAL_REC_8780_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8781(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8781_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8781_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8781_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8781_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8781_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8781_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8781_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8781_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8781_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8781_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8782
#define MACROLOP_PRIVATE_EVAL_REC_8781_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8782(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8782_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8782_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8782_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8782_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8782_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8782_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8782_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8782_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8782_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8782_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8783
#define MACROLOP_PRIVATE_EVAL_REC_8782_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8783(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8783_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8783_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8783_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8783_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8783_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8783_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8783_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8783_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8783_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8783_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8784
#define MACROLOP_PRIVATE_EVAL_REC_8783_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8784(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8784_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8784_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8784_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8784_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8784_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8784_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8784_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8784_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8784_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8784_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8785
#define MACROLOP_PRIVATE_EVAL_REC_8784_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8785(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8785_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8785_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8785_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8785_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8785_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8785_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8785_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8785_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8785_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8785_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8786
#define MACROLOP_PRIVATE_EVAL_REC_8785_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8786(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8786_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8786_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8786_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8786_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8786_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8786_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8786_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8786_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8786_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8786_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8787
#define MACROLOP_PRIVATE_EVAL_REC_8786_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8787(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8787_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8787_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8787_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8787_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8787_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8787_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8787_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8787_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8787_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8787_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8788
#define MACROLOP_PRIVATE_EVAL_REC_8787_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8788(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8788_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8788_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8788_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8788_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8788_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8788_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8788_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8788_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8788_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8788_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8789
#define MACROLOP_PRIVATE_EVAL_REC_8788_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8789(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8789_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8789_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8789_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8789_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8789_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8789_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8789_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8789_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8789_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8789_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8790
#define MACROLOP_PRIVATE_EVAL_REC_8789_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8790(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8790_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8790_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8790_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8790_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8790_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8790_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8790_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8790_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8790_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8790_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8791
#define MACROLOP_PRIVATE_EVAL_REC_8790_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8791(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8791_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8791_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8791_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8791_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8791_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8791_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8791_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8791_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8791_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8791_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8792
#define MACROLOP_PRIVATE_EVAL_REC_8791_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8792(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8792_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8792_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8792_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8792_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8792_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8792_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8792_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8792_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8792_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8792_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8793
#define MACROLOP_PRIVATE_EVAL_REC_8792_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8793(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8793_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8793_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8793_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8793_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8793_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8793_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8793_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8793_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8793_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8793_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8794
#define MACROLOP_PRIVATE_EVAL_REC_8793_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8794(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8794_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8794_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8794_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8794_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8794_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8794_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8794_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8794_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8794_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8794_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8795
#define MACROLOP_PRIVATE_EVAL_REC_8794_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8795(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8795_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8795_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8795_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8795_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8795_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8795_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8795_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8795_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8795_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8795_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8796
#define MACROLOP_PRIVATE_EVAL_REC_8795_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8796(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8796_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8796_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8796_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8796_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8796_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8796_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8796_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8796_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8796_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8796_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8797
#define MACROLOP_PRIVATE_EVAL_REC_8796_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8797(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8797_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8797_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8797_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8797_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8797_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8797_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8797_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8797_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8797_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8797_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8798
#define MACROLOP_PRIVATE_EVAL_REC_8797_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8798(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8798_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8798_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8798_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8798_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8798_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8798_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8798_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8798_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8798_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8798_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8799
#define MACROLOP_PRIVATE_EVAL_REC_8798_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8799(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8799_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8799_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8799_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8799_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8799_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8799_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8799_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8799_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8799_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8799_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8800
#define MACROLOP_PRIVATE_EVAL_REC_8799_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8800(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8800_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8800_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8800_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8800_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8800_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8800_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8800_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8800_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8800_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8800_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8801
#define MACROLOP_PRIVATE_EVAL_REC_8800_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8801(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8801_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8801_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8801_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8801_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8801_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8801_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8801_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8801_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8801_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8801_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8802
#define MACROLOP_PRIVATE_EVAL_REC_8801_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8802(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8802_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8802_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8802_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8802_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8802_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8802_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8802_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8802_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8802_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8802_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8803
#define MACROLOP_PRIVATE_EVAL_REC_8802_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8803(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8803_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8803_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8803_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8803_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8803_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8803_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8803_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8803_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8803_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8803_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8804
#define MACROLOP_PRIVATE_EVAL_REC_8803_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8804(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8804_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8804_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8804_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8804_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8804_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8804_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8804_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8804_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8804_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8804_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8805
#define MACROLOP_PRIVATE_EVAL_REC_8804_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8805(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8805_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8805_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8805_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8805_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8805_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8805_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8805_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8805_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8805_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8805_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8806
#define MACROLOP_PRIVATE_EVAL_REC_8805_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8806(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8806_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8806_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8806_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8806_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8806_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8806_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8806_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8806_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8806_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8806_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8807
#define MACROLOP_PRIVATE_EVAL_REC_8806_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8807(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8807_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8807_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8807_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8807_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8807_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8807_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8807_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8807_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8807_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8807_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8808
#define MACROLOP_PRIVATE_EVAL_REC_8807_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8808(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8808_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8808_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8808_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8808_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8808_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8808_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8808_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8808_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8808_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8808_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8809
#define MACROLOP_PRIVATE_EVAL_REC_8808_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8809(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8809_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8809_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8809_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8809_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8809_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8809_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8809_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8809_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8809_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8809_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8810
#define MACROLOP_PRIVATE_EVAL_REC_8809_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8810(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8810_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8810_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8810_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8810_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8810_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8810_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8810_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8810_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8810_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8810_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8811
#define MACROLOP_PRIVATE_EVAL_REC_8810_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8811(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8811_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8811_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8811_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8811_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8811_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8811_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8811_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8811_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8811_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8811_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8812
#define MACROLOP_PRIVATE_EVAL_REC_8811_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8812(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8812_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8812_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8812_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8812_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8812_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8812_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8812_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8812_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8812_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8812_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8813
#define MACROLOP_PRIVATE_EVAL_REC_8812_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8813(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8813_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8813_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8813_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8813_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8813_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8813_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8813_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8813_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8813_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8813_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8814
#define MACROLOP_PRIVATE_EVAL_REC_8813_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8814(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8814_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8814_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8814_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8814_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8814_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8814_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8814_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8814_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8814_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8814_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8815
#define MACROLOP_PRIVATE_EVAL_REC_8814_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8815(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8815_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8815_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8815_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8815_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8815_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8815_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8815_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8815_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8815_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8815_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8816
#define MACROLOP_PRIVATE_EVAL_REC_8815_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8816(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8816_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8816_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8816_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8816_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8816_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8816_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8816_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8816_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8816_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8816_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8817
#define MACROLOP_PRIVATE_EVAL_REC_8816_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8817(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8817_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8817_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8817_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8817_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8817_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8817_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8817_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8817_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8817_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8817_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8818
#define MACROLOP_PRIVATE_EVAL_REC_8817_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8818(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8818_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8818_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8818_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8818_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8818_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8818_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8818_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8818_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8818_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8818_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8819
#define MACROLOP_PRIVATE_EVAL_REC_8818_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8819(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8819_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8819_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8819_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8819_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8819_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8819_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8819_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8819_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8819_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8819_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8820
#define MACROLOP_PRIVATE_EVAL_REC_8819_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8820(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8820_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8820_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8820_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8820_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8820_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8820_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8820_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8820_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8820_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8820_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8821
#define MACROLOP_PRIVATE_EVAL_REC_8820_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8821(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8821_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8821_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8821_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8821_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8821_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8821_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8821_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8821_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8821_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8821_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8822
#define MACROLOP_PRIVATE_EVAL_REC_8821_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8822(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8822_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8822_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8822_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8822_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8822_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8822_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8822_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8822_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8822_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8822_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8823
#define MACROLOP_PRIVATE_EVAL_REC_8822_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8823(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8823_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8823_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8823_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8823_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8823_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8823_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8823_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8823_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8823_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8823_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8824
#define MACROLOP_PRIVATE_EVAL_REC_8823_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8824(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8824_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8824_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8824_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8824_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8824_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8824_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8824_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8824_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8824_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8824_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8825
#define MACROLOP_PRIVATE_EVAL_REC_8824_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8825(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8825_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8825_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8825_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8825_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8825_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8825_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8825_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8825_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8825_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8825_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8826
#define MACROLOP_PRIVATE_EVAL_REC_8825_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8826(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8826_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8826_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8826_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8826_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8826_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8826_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8826_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8826_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8826_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8826_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8827
#define MACROLOP_PRIVATE_EVAL_REC_8826_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8827(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8827_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8827_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8827_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8827_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8827_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8827_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8827_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8827_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8827_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8827_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8828
#define MACROLOP_PRIVATE_EVAL_REC_8827_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8828(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8828_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8828_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8828_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8828_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8828_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8828_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8828_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8828_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8828_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8828_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8829
#define MACROLOP_PRIVATE_EVAL_REC_8828_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8829(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8829_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8829_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8829_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8829_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8829_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8829_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8829_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8829_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8829_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8829_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8830
#define MACROLOP_PRIVATE_EVAL_REC_8829_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8830(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8830_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8830_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8830_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8830_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8830_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8830_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8830_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8830_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8830_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8830_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8831
#define MACROLOP_PRIVATE_EVAL_REC_8830_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8831(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8831_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8831_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8831_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8831_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8831_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8831_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8831_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8831_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8831_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8831_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8832
#define MACROLOP_PRIVATE_EVAL_REC_8831_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8832(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8832_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8832_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8832_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8832_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8832_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8832_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8832_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8832_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8832_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8832_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8833
#define MACROLOP_PRIVATE_EVAL_REC_8832_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8833(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8833_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8833_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8833_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8833_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8833_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8833_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8833_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8833_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8833_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8833_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8834
#define MACROLOP_PRIVATE_EVAL_REC_8833_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8834(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8834_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8834_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8834_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8834_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8834_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8834_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8834_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8834_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8834_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8834_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8835
#define MACROLOP_PRIVATE_EVAL_REC_8834_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8835(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8835_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8835_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8835_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8835_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8835_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8835_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8835_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8835_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8835_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8835_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8836
#define MACROLOP_PRIVATE_EVAL_REC_8835_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8836(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8836_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8836_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8836_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8836_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8836_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8836_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8836_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8836_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8836_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8836_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8837
#define MACROLOP_PRIVATE_EVAL_REC_8836_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8837(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8837_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8837_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8837_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8837_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8837_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8837_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8837_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8837_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8837_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8837_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8838
#define MACROLOP_PRIVATE_EVAL_REC_8837_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8838(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8838_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8838_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8838_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8838_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8838_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8838_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8838_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8838_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8838_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8838_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8839
#define MACROLOP_PRIVATE_EVAL_REC_8838_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8839(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8839_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8839_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8839_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8839_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8839_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8839_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8839_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8839_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8839_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8839_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8840
#define MACROLOP_PRIVATE_EVAL_REC_8839_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8840(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8840_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8840_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8840_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8840_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8840_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8840_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8840_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8840_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8840_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8840_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8841
#define MACROLOP_PRIVATE_EVAL_REC_8840_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8841(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8841_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8841_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8841_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8841_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8841_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8841_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8841_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8841_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8841_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8841_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8842
#define MACROLOP_PRIVATE_EVAL_REC_8841_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8842(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8842_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8842_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8842_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8842_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8842_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8842_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8842_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8842_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8842_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8842_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8843
#define MACROLOP_PRIVATE_EVAL_REC_8842_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8843(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8843_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8843_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8843_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8843_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8843_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8843_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8843_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8843_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8843_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8843_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8844
#define MACROLOP_PRIVATE_EVAL_REC_8843_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8844(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8844_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8844_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8844_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8844_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8844_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8844_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8844_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8844_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8844_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8844_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8845
#define MACROLOP_PRIVATE_EVAL_REC_8844_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8845(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8845_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8845_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8845_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8845_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8845_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8845_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8845_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8845_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8845_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8845_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8846
#define MACROLOP_PRIVATE_EVAL_REC_8845_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8846(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8846_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8846_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8846_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8846_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8846_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8846_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8846_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8846_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8846_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8846_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8847
#define MACROLOP_PRIVATE_EVAL_REC_8846_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8847(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8847_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8847_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8847_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8847_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8847_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8847_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8847_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8847_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8847_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8847_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8848
#define MACROLOP_PRIVATE_EVAL_REC_8847_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8848(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8848_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8848_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8848_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8848_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8848_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8848_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8848_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8848_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8848_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8848_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8849
#define MACROLOP_PRIVATE_EVAL_REC_8848_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8849(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8849_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8849_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8849_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8849_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8849_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8849_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8849_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8849_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8849_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8849_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8850
#define MACROLOP_PRIVATE_EVAL_REC_8849_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8850(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8850_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8850_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8850_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8850_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8850_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8850_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8850_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8850_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8850_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8850_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8851
#define MACROLOP_PRIVATE_EVAL_REC_8850_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8851(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8851_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8851_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8851_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8851_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8851_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8851_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8851_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8851_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8851_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8851_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8852
#define MACROLOP_PRIVATE_EVAL_REC_8851_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8852(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8852_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8852_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8852_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8852_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8852_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8852_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8852_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8852_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8852_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8852_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8853
#define MACROLOP_PRIVATE_EVAL_REC_8852_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8853(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8853_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8853_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8853_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8853_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8853_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8853_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8853_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8853_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8853_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8853_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8854
#define MACROLOP_PRIVATE_EVAL_REC_8853_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8854(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8854_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8854_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8854_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8854_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8854_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8854_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8854_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8854_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8854_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8854_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8855
#define MACROLOP_PRIVATE_EVAL_REC_8854_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8855(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8855_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8855_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8855_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8855_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8855_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8855_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8855_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8855_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8855_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8855_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8856
#define MACROLOP_PRIVATE_EVAL_REC_8855_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8856(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8856_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8856_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8856_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8856_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8856_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8856_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8856_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8856_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8856_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8856_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8857
#define MACROLOP_PRIVATE_EVAL_REC_8856_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8857(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8857_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8857_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8857_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8857_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8857_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8857_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8857_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8857_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8857_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8857_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8858
#define MACROLOP_PRIVATE_EVAL_REC_8857_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8858(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8858_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8858_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8858_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8858_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8858_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8858_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8858_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8858_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8858_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8858_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8859
#define MACROLOP_PRIVATE_EVAL_REC_8858_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8859(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8859_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8859_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8859_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8859_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8859_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8859_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8859_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8859_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8859_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8859_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8860
#define MACROLOP_PRIVATE_EVAL_REC_8859_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8860(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8860_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8860_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8860_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8860_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8860_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8860_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8860_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8860_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8860_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8860_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8861
#define MACROLOP_PRIVATE_EVAL_REC_8860_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8861(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8861_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8861_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8861_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8861_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8861_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8861_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8861_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8861_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8861_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8861_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8862
#define MACROLOP_PRIVATE_EVAL_REC_8861_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8862(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8862_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8862_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8862_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8862_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8862_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8862_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8862_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8862_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8862_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8862_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8863
#define MACROLOP_PRIVATE_EVAL_REC_8862_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8863(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8863_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8863_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8863_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8863_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8863_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8863_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8863_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8863_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8863_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8863_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8864
#define MACROLOP_PRIVATE_EVAL_REC_8863_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8864(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8864_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8864_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8864_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8864_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8864_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8864_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8864_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8864_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8864_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8864_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8865
#define MACROLOP_PRIVATE_EVAL_REC_8864_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8865(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8865_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8865_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8865_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8865_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8865_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8865_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8865_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8865_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8865_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8865_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8866
#define MACROLOP_PRIVATE_EVAL_REC_8865_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8866(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8866_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8866_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8866_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8866_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8866_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8866_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8866_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8866_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8866_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8866_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8867
#define MACROLOP_PRIVATE_EVAL_REC_8866_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8867(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8867_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8867_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8867_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8867_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8867_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8867_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8867_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8867_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8867_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8867_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8868
#define MACROLOP_PRIVATE_EVAL_REC_8867_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8868(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8868_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8868_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8868_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8868_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8868_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8868_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8868_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8868_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8868_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8868_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8869
#define MACROLOP_PRIVATE_EVAL_REC_8868_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8869(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8869_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8869_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8869_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8869_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8869_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8869_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8869_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8869_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8869_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8869_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8870
#define MACROLOP_PRIVATE_EVAL_REC_8869_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8870(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8870_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8870_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8870_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8870_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8870_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8870_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8870_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8870_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8870_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8870_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8871
#define MACROLOP_PRIVATE_EVAL_REC_8870_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8871(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8871_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8871_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8871_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8871_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8871_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8871_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8871_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8871_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8871_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8871_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8872
#define MACROLOP_PRIVATE_EVAL_REC_8871_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8872(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8872_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8872_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8872_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8872_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8872_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8872_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8872_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8872_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8872_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8872_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8873
#define MACROLOP_PRIVATE_EVAL_REC_8872_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8873(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8873_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8873_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8873_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8873_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8873_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8873_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8873_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8873_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8873_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8873_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8874
#define MACROLOP_PRIVATE_EVAL_REC_8873_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8874(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8874_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8874_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8874_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8874_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8874_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8874_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8874_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8874_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8874_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8874_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8875
#define MACROLOP_PRIVATE_EVAL_REC_8874_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8875(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8875_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8875_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8875_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8875_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8875_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8875_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8875_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8875_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8875_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8875_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8876
#define MACROLOP_PRIVATE_EVAL_REC_8875_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8876(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8876_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8876_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8876_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8876_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8876_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8876_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8876_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8876_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8876_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8876_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8877
#define MACROLOP_PRIVATE_EVAL_REC_8876_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8877(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8877_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8877_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8877_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8877_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8877_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8877_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8877_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8877_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8877_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8877_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8878
#define MACROLOP_PRIVATE_EVAL_REC_8877_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8878(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8878_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8878_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8878_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8878_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8878_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8878_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8878_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8878_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8878_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8878_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8879
#define MACROLOP_PRIVATE_EVAL_REC_8878_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8879(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8879_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8879_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8879_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8879_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8879_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8879_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8879_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8879_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8879_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8879_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8880
#define MACROLOP_PRIVATE_EVAL_REC_8879_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8880(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8880_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8880_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8880_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8880_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8880_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8880_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8880_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8880_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8880_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8880_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8881
#define MACROLOP_PRIVATE_EVAL_REC_8880_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8881(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8881_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8881_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8881_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8881_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8881_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8881_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8881_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8881_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8881_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8881_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8882
#define MACROLOP_PRIVATE_EVAL_REC_8881_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8882(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8882_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8882_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8882_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8882_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8882_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8882_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8882_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8882_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8882_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8882_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8883
#define MACROLOP_PRIVATE_EVAL_REC_8882_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8883(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8883_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8883_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8883_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8883_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8883_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8883_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8883_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8883_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8883_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8883_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8884
#define MACROLOP_PRIVATE_EVAL_REC_8883_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8884(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8884_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8884_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8884_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8884_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8884_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8884_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8884_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8884_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8884_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8884_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8885
#define MACROLOP_PRIVATE_EVAL_REC_8884_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8885(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8885_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8885_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8885_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8885_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8885_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8885_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8885_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8885_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8885_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8885_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8886
#define MACROLOP_PRIVATE_EVAL_REC_8885_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8886(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8886_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8886_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8886_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8886_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8886_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8886_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8886_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8886_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8886_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8886_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8887
#define MACROLOP_PRIVATE_EVAL_REC_8886_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8887(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8887_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8887_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8887_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8887_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8887_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8887_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8887_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8887_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8887_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8887_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8888
#define MACROLOP_PRIVATE_EVAL_REC_8887_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8888(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8888_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8888_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8888_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8888_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8888_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8888_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8888_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8888_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8888_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8888_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8889
#define MACROLOP_PRIVATE_EVAL_REC_8888_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8889(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8889_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8889_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8889_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8889_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8889_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8889_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8889_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8889_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8889_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8889_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8890
#define MACROLOP_PRIVATE_EVAL_REC_8889_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8890(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8890_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8890_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8890_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8890_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8890_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8890_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8890_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8890_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8890_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8890_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8891
#define MACROLOP_PRIVATE_EVAL_REC_8890_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8891(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8891_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8891_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8891_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8891_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8891_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8891_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8891_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8891_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8891_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8891_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8892
#define MACROLOP_PRIVATE_EVAL_REC_8891_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8892(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8892_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8892_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8892_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8892_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8892_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8892_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8892_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8892_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8892_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8892_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8893
#define MACROLOP_PRIVATE_EVAL_REC_8892_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8893(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8893_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8893_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8893_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8893_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8893_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8893_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8893_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8893_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8893_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8893_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8894
#define MACROLOP_PRIVATE_EVAL_REC_8893_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8894(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8894_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8894_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8894_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8894_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8894_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8894_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8894_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8894_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8894_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8894_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8895
#define MACROLOP_PRIVATE_EVAL_REC_8894_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8895(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8895_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8895_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8895_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8895_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8895_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8895_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8895_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8895_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8895_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8895_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8896
#define MACROLOP_PRIVATE_EVAL_REC_8895_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8896(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8896_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8896_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8896_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8896_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8896_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8896_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8896_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8896_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8896_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8896_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8897
#define MACROLOP_PRIVATE_EVAL_REC_8896_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8897(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8897_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8897_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8897_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8897_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8897_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8897_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8897_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8897_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8897_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8897_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8898
#define MACROLOP_PRIVATE_EVAL_REC_8897_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8898(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8898_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8898_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8898_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8898_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8898_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8898_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8898_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8898_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8898_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8898_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8899
#define MACROLOP_PRIVATE_EVAL_REC_8898_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8899(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8899_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8899_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8899_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8899_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8899_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8899_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8899_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8899_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8899_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8899_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8900
#define MACROLOP_PRIVATE_EVAL_REC_8899_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8900(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8900_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8900_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8900_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8900_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8900_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8900_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8900_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8900_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8900_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8900_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8901
#define MACROLOP_PRIVATE_EVAL_REC_8900_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8901(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8901_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8901_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8901_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8901_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8901_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8901_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8901_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8901_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8901_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8901_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8902
#define MACROLOP_PRIVATE_EVAL_REC_8901_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8902(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8902_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8902_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8902_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8902_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8902_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8902_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8902_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8902_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8902_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8902_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8903
#define MACROLOP_PRIVATE_EVAL_REC_8902_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8903(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8903_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8903_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8903_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8903_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8903_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8903_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8903_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8903_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8903_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8903_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8904
#define MACROLOP_PRIVATE_EVAL_REC_8903_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8904(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8904_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8904_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8904_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8904_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8904_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8904_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8904_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8904_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8904_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8904_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8905
#define MACROLOP_PRIVATE_EVAL_REC_8904_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8905(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8905_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8905_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8905_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8905_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8905_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8905_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8905_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8905_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8905_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8905_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8906
#define MACROLOP_PRIVATE_EVAL_REC_8905_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8906(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8906_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8906_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8906_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8906_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8906_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8906_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8906_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8906_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8906_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8906_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8907
#define MACROLOP_PRIVATE_EVAL_REC_8906_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8907(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8907_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8907_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8907_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8907_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8907_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8907_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8907_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8907_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8907_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8907_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8908
#define MACROLOP_PRIVATE_EVAL_REC_8907_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8908(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8908_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8908_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8908_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8908_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8908_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8908_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8908_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8908_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8908_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8908_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8909
#define MACROLOP_PRIVATE_EVAL_REC_8908_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8909(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8909_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8909_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8909_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8909_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8909_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8909_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8909_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8909_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8909_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8909_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8910
#define MACROLOP_PRIVATE_EVAL_REC_8909_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8910(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8910_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8910_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8910_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8910_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8910_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8910_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8910_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8910_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8910_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8910_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8911
#define MACROLOP_PRIVATE_EVAL_REC_8910_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8911(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8911_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8911_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8911_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8911_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8911_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8911_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8911_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8911_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8911_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8911_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8912
#define MACROLOP_PRIVATE_EVAL_REC_8911_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8912(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8912_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8912_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8912_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8912_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8912_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8912_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8912_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8912_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8912_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8912_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8913
#define MACROLOP_PRIVATE_EVAL_REC_8912_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8913(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8913_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8913_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8913_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8913_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8913_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8913_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8913_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8913_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8913_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8913_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8914
#define MACROLOP_PRIVATE_EVAL_REC_8913_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8914(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8914_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8914_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8914_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8914_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8914_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8914_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8914_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8914_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8914_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8914_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8915
#define MACROLOP_PRIVATE_EVAL_REC_8914_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8915(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8915_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8915_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8915_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8915_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8915_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8915_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8915_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8915_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8915_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8915_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8916
#define MACROLOP_PRIVATE_EVAL_REC_8915_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8916(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8916_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8916_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8916_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8916_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8916_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8916_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8916_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8916_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8916_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8916_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8917
#define MACROLOP_PRIVATE_EVAL_REC_8916_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8917(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8917_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8917_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8917_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8917_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8917_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8917_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8917_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8917_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8917_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8917_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8918
#define MACROLOP_PRIVATE_EVAL_REC_8917_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8918(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8918_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8918_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8918_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8918_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8918_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8918_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8918_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8918_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8918_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8918_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8919
#define MACROLOP_PRIVATE_EVAL_REC_8918_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8919(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8919_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8919_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8919_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8919_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8919_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8919_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8919_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8919_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8919_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8919_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8920
#define MACROLOP_PRIVATE_EVAL_REC_8919_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8920(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8920_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8920_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8920_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8920_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8920_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8920_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8920_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8920_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8920_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8920_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8921
#define MACROLOP_PRIVATE_EVAL_REC_8920_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8921(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8921_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8921_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8921_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8921_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8921_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8921_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8921_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8921_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8921_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8921_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8922
#define MACROLOP_PRIVATE_EVAL_REC_8921_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8922(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8922_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8922_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8922_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8922_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8922_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8922_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8922_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8922_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8922_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8922_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8923
#define MACROLOP_PRIVATE_EVAL_REC_8922_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8923(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8923_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8923_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8923_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8923_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8923_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8923_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8923_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8923_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8923_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8923_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8924
#define MACROLOP_PRIVATE_EVAL_REC_8923_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8924(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8924_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8924_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8924_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8924_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8924_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8924_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8924_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8924_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8924_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8924_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8925
#define MACROLOP_PRIVATE_EVAL_REC_8924_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8925(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8925_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8925_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8925_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8925_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8925_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8925_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8925_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8925_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8925_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8925_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8926
#define MACROLOP_PRIVATE_EVAL_REC_8925_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8926(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8926_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8926_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8926_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8926_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8926_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8926_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8926_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8926_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8926_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8926_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8927
#define MACROLOP_PRIVATE_EVAL_REC_8926_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8927(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8927_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8927_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8927_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8927_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8927_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8927_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8927_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8927_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8927_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8927_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8928
#define MACROLOP_PRIVATE_EVAL_REC_8927_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8928(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8928_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8928_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8928_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8928_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8928_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8928_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8928_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8928_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8928_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8928_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8929
#define MACROLOP_PRIVATE_EVAL_REC_8928_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8929(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8929_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8929_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8929_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8929_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8929_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8929_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8929_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8929_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8929_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8929_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8930
#define MACROLOP_PRIVATE_EVAL_REC_8929_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8930(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8930_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8930_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8930_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8930_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8930_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8930_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8930_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8930_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8930_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8930_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8931
#define MACROLOP_PRIVATE_EVAL_REC_8930_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8931(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8931_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8931_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8931_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8931_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8931_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8931_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8931_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8931_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8931_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8931_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8932
#define MACROLOP_PRIVATE_EVAL_REC_8931_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8932(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8932_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8932_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8932_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8932_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8932_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8932_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8932_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8932_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8932_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8932_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8933
#define MACROLOP_PRIVATE_EVAL_REC_8932_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8933(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8933_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8933_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8933_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8933_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8933_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8933_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8933_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8933_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8933_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8933_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8934
#define MACROLOP_PRIVATE_EVAL_REC_8933_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8934(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8934_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8934_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8934_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8934_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8934_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8934_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8934_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8934_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8934_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8934_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8935
#define MACROLOP_PRIVATE_EVAL_REC_8934_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8935(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8935_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8935_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8935_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8935_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8935_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8935_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8935_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8935_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8935_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8935_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8936
#define MACROLOP_PRIVATE_EVAL_REC_8935_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8936(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8936_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8936_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8936_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8936_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8936_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8936_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8936_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8936_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8936_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8936_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8937
#define MACROLOP_PRIVATE_EVAL_REC_8936_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8937(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8937_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8937_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8937_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8937_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8937_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8937_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8937_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8937_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8937_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8937_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8938
#define MACROLOP_PRIVATE_EVAL_REC_8937_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8938(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8938_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8938_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8938_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8938_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8938_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8938_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8938_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8938_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8938_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8938_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8939
#define MACROLOP_PRIVATE_EVAL_REC_8938_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8939(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8939_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8939_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8939_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8939_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8939_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8939_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8939_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8939_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8939_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8939_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8940
#define MACROLOP_PRIVATE_EVAL_REC_8939_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8940(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8940_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8940_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8940_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8940_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8940_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8940_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8940_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8940_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8940_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8940_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8941
#define MACROLOP_PRIVATE_EVAL_REC_8940_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8941(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8941_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8941_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8941_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8941_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8941_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8941_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8941_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8941_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8941_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8941_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8942
#define MACROLOP_PRIVATE_EVAL_REC_8941_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8942(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8942_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8942_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8942_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8942_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8942_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8942_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8942_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8942_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8942_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8942_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8943
#define MACROLOP_PRIVATE_EVAL_REC_8942_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8943(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8943_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8943_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8943_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8943_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8943_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8943_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8943_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8943_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8943_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8943_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8944
#define MACROLOP_PRIVATE_EVAL_REC_8943_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8944(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8944_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8944_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8944_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8944_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8944_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8944_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8944_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8944_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8944_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8944_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8945
#define MACROLOP_PRIVATE_EVAL_REC_8944_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8945(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8945_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8945_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8945_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8945_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8945_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8945_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8945_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8945_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8945_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8945_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8946
#define MACROLOP_PRIVATE_EVAL_REC_8945_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8946(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8946_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8946_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8946_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8946_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8946_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8946_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8946_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8946_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8946_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8946_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8947
#define MACROLOP_PRIVATE_EVAL_REC_8946_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8947(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8947_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8947_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8947_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8947_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8947_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8947_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8947_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8947_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8947_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8947_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8948
#define MACROLOP_PRIVATE_EVAL_REC_8947_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8948(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8948_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8948_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8948_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8948_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8948_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8948_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8948_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8948_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8948_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8948_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8949
#define MACROLOP_PRIVATE_EVAL_REC_8948_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8949(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8949_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8949_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8949_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8949_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8949_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8949_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8949_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8949_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8949_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8949_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8950
#define MACROLOP_PRIVATE_EVAL_REC_8949_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8950(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8950_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8950_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8950_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8950_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8950_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8950_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8950_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8950_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8950_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8950_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8951
#define MACROLOP_PRIVATE_EVAL_REC_8950_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8951(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8951_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8951_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8951_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8951_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8951_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8951_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8951_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8951_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8951_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8951_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8952
#define MACROLOP_PRIVATE_EVAL_REC_8951_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8952(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8952_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8952_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8952_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8952_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8952_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8952_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8952_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8952_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8952_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8952_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8953
#define MACROLOP_PRIVATE_EVAL_REC_8952_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8953(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8953_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8953_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8953_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8953_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8953_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8953_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8953_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8953_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8953_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8953_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8954
#define MACROLOP_PRIVATE_EVAL_REC_8953_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8954(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8954_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8954_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8954_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8954_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8954_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8954_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8954_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8954_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8954_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8954_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8955
#define MACROLOP_PRIVATE_EVAL_REC_8954_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8955(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8955_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8955_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8955_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8955_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8955_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8955_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8955_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8955_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8955_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8955_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8956
#define MACROLOP_PRIVATE_EVAL_REC_8955_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8956(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8956_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8956_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8956_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8956_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8956_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8956_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8956_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8956_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8956_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8956_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8957
#define MACROLOP_PRIVATE_EVAL_REC_8956_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8957(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8957_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8957_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8957_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8957_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8957_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8957_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8957_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8957_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8957_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8957_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8958
#define MACROLOP_PRIVATE_EVAL_REC_8957_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8958(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8958_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8958_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8958_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8958_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8958_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8958_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8958_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8958_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8958_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8958_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8959
#define MACROLOP_PRIVATE_EVAL_REC_8958_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8959(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8959_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8959_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8959_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8959_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8959_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8959_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8959_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8959_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8959_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8959_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8960
#define MACROLOP_PRIVATE_EVAL_REC_8959_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8960(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8960_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8960_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8960_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8960_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8960_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8960_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8960_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8960_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8960_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8960_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8961
#define MACROLOP_PRIVATE_EVAL_REC_8960_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8961(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8961_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8961_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8961_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8961_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8961_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8961_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8961_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8961_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8961_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8961_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8962
#define MACROLOP_PRIVATE_EVAL_REC_8961_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8962(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8962_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8962_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8962_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8962_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8962_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8962_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8962_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8962_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8962_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8962_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8963
#define MACROLOP_PRIVATE_EVAL_REC_8962_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8963(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8963_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8963_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8963_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8963_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8963_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8963_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8963_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8963_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8963_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8963_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8964
#define MACROLOP_PRIVATE_EVAL_REC_8963_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8964(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8964_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8964_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8964_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8964_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8964_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8964_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8964_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8964_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8964_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8964_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8965
#define MACROLOP_PRIVATE_EVAL_REC_8964_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8965(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8965_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8965_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8965_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8965_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8965_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8965_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8965_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8965_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8965_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8965_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8966
#define MACROLOP_PRIVATE_EVAL_REC_8965_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8966(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8966_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8966_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8966_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8966_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8966_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8966_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8966_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8966_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8966_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8966_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8967
#define MACROLOP_PRIVATE_EVAL_REC_8966_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8967(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8967_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8967_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8967_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8967_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8967_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8967_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8967_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8967_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8967_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8967_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8968
#define MACROLOP_PRIVATE_EVAL_REC_8967_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8968(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8968_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8968_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8968_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8968_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8968_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8968_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8968_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8968_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8968_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8968_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8969
#define MACROLOP_PRIVATE_EVAL_REC_8968_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8969(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8969_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8969_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8969_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8969_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8969_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8969_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8969_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8969_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8969_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8969_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8970
#define MACROLOP_PRIVATE_EVAL_REC_8969_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8970(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8970_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8970_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8970_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8970_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8970_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8970_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8970_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8970_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8970_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8970_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8971
#define MACROLOP_PRIVATE_EVAL_REC_8970_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8971(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8971_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8971_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8971_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8971_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8971_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8971_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8971_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8971_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8971_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8971_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8972
#define MACROLOP_PRIVATE_EVAL_REC_8971_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8972(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8972_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8972_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8972_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8972_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8972_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8972_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8972_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8972_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8972_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8972_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8973
#define MACROLOP_PRIVATE_EVAL_REC_8972_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8973(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8973_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8973_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8973_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8973_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8973_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8973_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8973_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8973_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8973_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8973_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8974
#define MACROLOP_PRIVATE_EVAL_REC_8973_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8974(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8974_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8974_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8974_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8974_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8974_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8974_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8974_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8974_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8974_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8974_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8975
#define MACROLOP_PRIVATE_EVAL_REC_8974_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8975(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8975_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8975_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8975_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8975_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8975_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8975_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8975_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8975_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8975_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8975_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8976
#define MACROLOP_PRIVATE_EVAL_REC_8975_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8976(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8976_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8976_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8976_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8976_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8976_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8976_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8976_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8976_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8976_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8976_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8977
#define MACROLOP_PRIVATE_EVAL_REC_8976_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8977(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8977_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8977_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8977_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8977_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8977_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8977_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8977_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8977_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8977_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8977_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8978
#define MACROLOP_PRIVATE_EVAL_REC_8977_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8978(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8978_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8978_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8978_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8978_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8978_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8978_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8978_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8978_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8978_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8978_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8979
#define MACROLOP_PRIVATE_EVAL_REC_8978_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8979(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8979_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8979_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8979_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8979_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8979_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8979_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8979_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8979_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8979_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8979_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8980
#define MACROLOP_PRIVATE_EVAL_REC_8979_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8980(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8980_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8980_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8980_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8980_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8980_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8980_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8980_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8980_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8980_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8980_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8981
#define MACROLOP_PRIVATE_EVAL_REC_8980_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8981(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8981_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8981_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8981_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8981_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8981_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8981_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8981_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8981_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8981_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8981_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8982
#define MACROLOP_PRIVATE_EVAL_REC_8981_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8982(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8982_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8982_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8982_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8982_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8982_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8982_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8982_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8982_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8982_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8982_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8983
#define MACROLOP_PRIVATE_EVAL_REC_8982_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8983(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8983_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8983_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8983_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8983_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8983_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8983_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8983_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8983_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8983_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8983_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8984
#define MACROLOP_PRIVATE_EVAL_REC_8983_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8984(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8984_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8984_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8984_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8984_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8984_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8984_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8984_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8984_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8984_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8984_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8985
#define MACROLOP_PRIVATE_EVAL_REC_8984_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8985(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8985_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8985_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8985_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8985_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8985_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8985_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8985_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8985_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8985_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8985_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8986
#define MACROLOP_PRIVATE_EVAL_REC_8985_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8986(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8986_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8986_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8986_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8986_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8986_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8986_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8986_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8986_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8986_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8986_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8987
#define MACROLOP_PRIVATE_EVAL_REC_8986_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8987(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8987_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8987_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8987_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8987_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8987_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8987_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8987_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8987_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8987_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8987_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8988
#define MACROLOP_PRIVATE_EVAL_REC_8987_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8988(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8988_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8988_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8988_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8988_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8988_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8988_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8988_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8988_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8988_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8988_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8989
#define MACROLOP_PRIVATE_EVAL_REC_8988_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8989(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8989_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8989_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8989_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8989_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8989_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8989_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8989_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8989_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8989_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8989_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8990
#define MACROLOP_PRIVATE_EVAL_REC_8989_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8990(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8990_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8990_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8990_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8990_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8990_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8990_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8990_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8990_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8990_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8990_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8991
#define MACROLOP_PRIVATE_EVAL_REC_8990_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8991(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8991_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8991_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8991_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8991_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8991_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8991_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8991_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8991_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8991_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8991_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8992
#define MACROLOP_PRIVATE_EVAL_REC_8991_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8992(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8992_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8992_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8992_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8992_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8992_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8992_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8992_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8992_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8992_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8992_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8993
#define MACROLOP_PRIVATE_EVAL_REC_8992_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8993(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8993_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8993_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8993_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8993_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8993_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8993_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8993_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8993_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8993_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8993_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8994
#define MACROLOP_PRIVATE_EVAL_REC_8993_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8994(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8994_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8994_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8994_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8994_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8994_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8994_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8994_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8994_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8994_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8994_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8995
#define MACROLOP_PRIVATE_EVAL_REC_8994_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8995(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8995_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8995_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8995_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8995_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8995_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8995_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8995_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8995_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8995_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8995_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8996
#define MACROLOP_PRIVATE_EVAL_REC_8995_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8996(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8996_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8996_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8996_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8996_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8996_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8996_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8996_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8996_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8996_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8996_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8997
#define MACROLOP_PRIVATE_EVAL_REC_8996_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8997(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8997_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8997_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8997_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8997_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8997_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8997_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8997_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8997_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8997_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8997_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8998
#define MACROLOP_PRIVATE_EVAL_REC_8997_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8998(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8998_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8998_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8998_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8998_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8998_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8998_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8998_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8998_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8998_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8998_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_8999
#define MACROLOP_PRIVATE_EVAL_REC_8998_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_8999(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_8999_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_8999_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_8999_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_8999_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_8999_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_8999_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_8999_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_8999_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_8999_##choice
#define MACROLOP_PRIVATE_EVAL_REC_8999_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9000
#define MACROLOP_PRIVATE_EVAL_REC_8999_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9000(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9000_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9000_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9000_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9000_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9000_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9000_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9000_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9000_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9000_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9000_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9001
#define MACROLOP_PRIVATE_EVAL_REC_9000_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9001(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9001_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9001_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9001_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9001_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9001_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9001_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9001_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9001_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9001_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9001_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9002
#define MACROLOP_PRIVATE_EVAL_REC_9001_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9002(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9002_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9002_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9002_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9002_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9002_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9002_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9002_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9002_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9002_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9002_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9003
#define MACROLOP_PRIVATE_EVAL_REC_9002_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9003(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9003_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9003_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9003_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9003_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9003_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9003_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9003_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9003_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9003_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9003_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9004
#define MACROLOP_PRIVATE_EVAL_REC_9003_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9004(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9004_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9004_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9004_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9004_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9004_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9004_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9004_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9004_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9004_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9004_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9005
#define MACROLOP_PRIVATE_EVAL_REC_9004_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9005(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9005_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9005_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9005_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9005_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9005_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9005_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9005_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9005_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9005_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9005_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9006
#define MACROLOP_PRIVATE_EVAL_REC_9005_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9006(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9006_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9006_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9006_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9006_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9006_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9006_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9006_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9006_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9006_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9006_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9007
#define MACROLOP_PRIVATE_EVAL_REC_9006_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9007(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9007_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9007_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9007_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9007_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9007_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9007_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9007_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9007_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9007_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9007_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9008
#define MACROLOP_PRIVATE_EVAL_REC_9007_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9008(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9008_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9008_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9008_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9008_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9008_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9008_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9008_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9008_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9008_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9008_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9009
#define MACROLOP_PRIVATE_EVAL_REC_9008_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9009(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9009_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9009_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9009_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9009_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9009_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9009_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9009_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9009_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9009_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9009_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9010
#define MACROLOP_PRIVATE_EVAL_REC_9009_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9010(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9010_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9010_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9010_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9010_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9010_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9010_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9010_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9010_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9010_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9010_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9011
#define MACROLOP_PRIVATE_EVAL_REC_9010_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9011(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9011_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9011_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9011_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9011_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9011_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9011_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9011_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9011_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9011_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9011_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9012
#define MACROLOP_PRIVATE_EVAL_REC_9011_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9012(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9012_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9012_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9012_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9012_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9012_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9012_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9012_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9012_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9012_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9012_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9013
#define MACROLOP_PRIVATE_EVAL_REC_9012_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9013(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9013_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9013_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9013_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9013_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9013_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9013_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9013_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9013_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9013_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9013_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9014
#define MACROLOP_PRIVATE_EVAL_REC_9013_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9014(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9014_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9014_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9014_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9014_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9014_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9014_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9014_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9014_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9014_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9014_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9015
#define MACROLOP_PRIVATE_EVAL_REC_9014_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9015(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9015_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9015_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9015_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9015_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9015_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9015_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9015_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9015_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9015_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9015_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9016
#define MACROLOP_PRIVATE_EVAL_REC_9015_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9016(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9016_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9016_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9016_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9016_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9016_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9016_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9016_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9016_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9016_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9016_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9017
#define MACROLOP_PRIVATE_EVAL_REC_9016_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9017(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9017_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9017_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9017_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9017_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9017_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9017_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9017_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9017_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9017_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9017_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9018
#define MACROLOP_PRIVATE_EVAL_REC_9017_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9018(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9018_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9018_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9018_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9018_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9018_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9018_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9018_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9018_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9018_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9018_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9019
#define MACROLOP_PRIVATE_EVAL_REC_9018_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9019(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9019_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9019_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9019_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9019_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9019_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9019_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9019_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9019_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9019_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9019_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9020
#define MACROLOP_PRIVATE_EVAL_REC_9019_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9020(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9020_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9020_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9020_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9020_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9020_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9020_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9020_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9020_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9020_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9020_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9021
#define MACROLOP_PRIVATE_EVAL_REC_9020_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9021(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9021_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9021_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9021_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9021_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9021_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9021_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9021_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9021_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9021_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9021_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9022
#define MACROLOP_PRIVATE_EVAL_REC_9021_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9022(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9022_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9022_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9022_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9022_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9022_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9022_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9022_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9022_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9022_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9022_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9023
#define MACROLOP_PRIVATE_EVAL_REC_9022_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9023(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9023_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9023_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9023_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9023_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9023_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9023_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9023_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9023_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9023_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9023_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9024
#define MACROLOP_PRIVATE_EVAL_REC_9023_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9024(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9024_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9024_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9024_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9024_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9024_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9024_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9024_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9024_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9024_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9024_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9025
#define MACROLOP_PRIVATE_EVAL_REC_9024_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9025(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9025_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9025_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9025_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9025_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9025_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9025_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9025_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9025_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9025_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9025_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9026
#define MACROLOP_PRIVATE_EVAL_REC_9025_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9026(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9026_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9026_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9026_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9026_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9026_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9026_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9026_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9026_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9026_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9026_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9027
#define MACROLOP_PRIVATE_EVAL_REC_9026_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9027(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9027_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9027_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9027_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9027_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9027_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9027_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9027_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9027_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9027_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9027_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9028
#define MACROLOP_PRIVATE_EVAL_REC_9027_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9028(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9028_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9028_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9028_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9028_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9028_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9028_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9028_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9028_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9028_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9028_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9029
#define MACROLOP_PRIVATE_EVAL_REC_9028_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9029(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9029_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9029_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9029_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9029_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9029_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9029_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9029_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9029_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9029_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9029_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9030
#define MACROLOP_PRIVATE_EVAL_REC_9029_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9030(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9030_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9030_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9030_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9030_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9030_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9030_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9030_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9030_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9030_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9030_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9031
#define MACROLOP_PRIVATE_EVAL_REC_9030_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9031(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9031_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9031_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9031_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9031_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9031_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9031_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9031_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9031_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9031_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9031_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9032
#define MACROLOP_PRIVATE_EVAL_REC_9031_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9032(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9032_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9032_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9032_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9032_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9032_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9032_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9032_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9032_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9032_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9032_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9033
#define MACROLOP_PRIVATE_EVAL_REC_9032_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9033(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9033_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9033_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9033_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9033_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9033_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9033_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9033_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9033_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9033_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9033_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9034
#define MACROLOP_PRIVATE_EVAL_REC_9033_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9034(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9034_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9034_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9034_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9034_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9034_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9034_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9034_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9034_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9034_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9034_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9035
#define MACROLOP_PRIVATE_EVAL_REC_9034_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9035(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9035_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9035_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9035_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9035_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9035_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9035_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9035_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9035_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9035_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9035_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9036
#define MACROLOP_PRIVATE_EVAL_REC_9035_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9036(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9036_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9036_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9036_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9036_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9036_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9036_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9036_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9036_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9036_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9036_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9037
#define MACROLOP_PRIVATE_EVAL_REC_9036_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9037(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9037_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9037_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9037_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9037_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9037_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9037_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9037_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9037_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9037_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9037_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9038
#define MACROLOP_PRIVATE_EVAL_REC_9037_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9038(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9038_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9038_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9038_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9038_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9038_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9038_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9038_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9038_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9038_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9038_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9039
#define MACROLOP_PRIVATE_EVAL_REC_9038_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9039(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9039_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9039_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9039_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9039_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9039_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9039_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9039_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9039_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9039_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9039_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9040
#define MACROLOP_PRIVATE_EVAL_REC_9039_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9040(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9040_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9040_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9040_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9040_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9040_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9040_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9040_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9040_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9040_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9040_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9041
#define MACROLOP_PRIVATE_EVAL_REC_9040_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9041(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9041_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9041_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9041_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9041_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9041_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9041_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9041_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9041_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9041_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9041_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9042
#define MACROLOP_PRIVATE_EVAL_REC_9041_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9042(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9042_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9042_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9042_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9042_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9042_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9042_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9042_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9042_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9042_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9042_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9043
#define MACROLOP_PRIVATE_EVAL_REC_9042_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9043(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9043_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9043_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9043_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9043_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9043_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9043_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9043_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9043_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9043_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9043_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9044
#define MACROLOP_PRIVATE_EVAL_REC_9043_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9044(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9044_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9044_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9044_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9044_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9044_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9044_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9044_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9044_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9044_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9044_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9045
#define MACROLOP_PRIVATE_EVAL_REC_9044_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9045(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9045_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9045_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9045_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9045_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9045_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9045_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9045_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9045_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9045_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9045_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9046
#define MACROLOP_PRIVATE_EVAL_REC_9045_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9046(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9046_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9046_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9046_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9046_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9046_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9046_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9046_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9046_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9046_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9046_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9047
#define MACROLOP_PRIVATE_EVAL_REC_9046_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9047(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9047_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9047_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9047_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9047_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9047_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9047_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9047_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9047_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9047_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9047_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9048
#define MACROLOP_PRIVATE_EVAL_REC_9047_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9048(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9048_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9048_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9048_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9048_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9048_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9048_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9048_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9048_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9048_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9048_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9049
#define MACROLOP_PRIVATE_EVAL_REC_9048_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9049(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9049_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9049_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9049_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9049_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9049_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9049_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9049_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9049_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9049_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9049_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9050
#define MACROLOP_PRIVATE_EVAL_REC_9049_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9050(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9050_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9050_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9050_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9050_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9050_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9050_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9050_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9050_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9050_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9050_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9051
#define MACROLOP_PRIVATE_EVAL_REC_9050_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9051(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9051_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9051_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9051_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9051_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9051_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9051_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9051_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9051_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9051_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9051_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9052
#define MACROLOP_PRIVATE_EVAL_REC_9051_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9052(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9052_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9052_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9052_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9052_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9052_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9052_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9052_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9052_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9052_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9052_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9053
#define MACROLOP_PRIVATE_EVAL_REC_9052_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9053(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9053_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9053_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9053_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9053_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9053_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9053_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9053_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9053_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9053_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9053_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9054
#define MACROLOP_PRIVATE_EVAL_REC_9053_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9054(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9054_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9054_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9054_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9054_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9054_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9054_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9054_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9054_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9054_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9054_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9055
#define MACROLOP_PRIVATE_EVAL_REC_9054_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9055(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9055_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9055_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9055_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9055_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9055_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9055_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9055_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9055_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9055_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9055_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9056
#define MACROLOP_PRIVATE_EVAL_REC_9055_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9056(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9056_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9056_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9056_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9056_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9056_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9056_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9056_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9056_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9056_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9056_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9057
#define MACROLOP_PRIVATE_EVAL_REC_9056_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9057(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9057_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9057_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9057_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9057_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9057_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9057_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9057_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9057_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9057_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9057_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9058
#define MACROLOP_PRIVATE_EVAL_REC_9057_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9058(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9058_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9058_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9058_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9058_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9058_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9058_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9058_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9058_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9058_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9058_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9059
#define MACROLOP_PRIVATE_EVAL_REC_9058_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9059(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9059_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9059_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9059_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9059_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9059_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9059_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9059_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9059_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9059_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9059_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9060
#define MACROLOP_PRIVATE_EVAL_REC_9059_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9060(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9060_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9060_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9060_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9060_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9060_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9060_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9060_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9060_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9060_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9060_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9061
#define MACROLOP_PRIVATE_EVAL_REC_9060_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9061(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9061_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9061_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9061_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9061_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9061_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9061_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9061_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9061_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9061_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9061_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9062
#define MACROLOP_PRIVATE_EVAL_REC_9061_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9062(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9062_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9062_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9062_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9062_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9062_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9062_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9062_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9062_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9062_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9062_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9063
#define MACROLOP_PRIVATE_EVAL_REC_9062_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9063(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9063_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9063_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9063_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9063_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9063_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9063_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9063_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9063_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9063_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9063_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9064
#define MACROLOP_PRIVATE_EVAL_REC_9063_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9064(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9064_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9064_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9064_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9064_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9064_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9064_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9064_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9064_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9064_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9064_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9065
#define MACROLOP_PRIVATE_EVAL_REC_9064_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9065(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9065_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9065_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9065_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9065_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9065_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9065_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9065_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9065_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9065_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9065_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9066
#define MACROLOP_PRIVATE_EVAL_REC_9065_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9066(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9066_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9066_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9066_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9066_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9066_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9066_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9066_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9066_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9066_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9066_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9067
#define MACROLOP_PRIVATE_EVAL_REC_9066_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9067(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9067_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9067_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9067_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9067_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9067_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9067_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9067_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9067_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9067_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9067_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9068
#define MACROLOP_PRIVATE_EVAL_REC_9067_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9068(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9068_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9068_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9068_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9068_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9068_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9068_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9068_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9068_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9068_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9068_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9069
#define MACROLOP_PRIVATE_EVAL_REC_9068_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9069(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9069_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9069_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9069_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9069_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9069_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9069_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9069_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9069_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9069_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9069_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9070
#define MACROLOP_PRIVATE_EVAL_REC_9069_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9070(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9070_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9070_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9070_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9070_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9070_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9070_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9070_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9070_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9070_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9070_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9071
#define MACROLOP_PRIVATE_EVAL_REC_9070_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9071(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9071_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9071_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9071_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9071_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9071_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9071_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9071_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9071_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9071_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9071_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9072
#define MACROLOP_PRIVATE_EVAL_REC_9071_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9072(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9072_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9072_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9072_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9072_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9072_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9072_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9072_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9072_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9072_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9072_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9073
#define MACROLOP_PRIVATE_EVAL_REC_9072_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9073(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9073_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9073_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9073_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9073_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9073_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9073_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9073_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9073_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9073_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9073_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9074
#define MACROLOP_PRIVATE_EVAL_REC_9073_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9074(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9074_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9074_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9074_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9074_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9074_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9074_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9074_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9074_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9074_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9074_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9075
#define MACROLOP_PRIVATE_EVAL_REC_9074_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9075(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9075_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9075_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9075_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9075_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9075_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9075_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9075_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9075_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9075_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9075_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9076
#define MACROLOP_PRIVATE_EVAL_REC_9075_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9076(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9076_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9076_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9076_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9076_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9076_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9076_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9076_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9076_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9076_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9076_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9077
#define MACROLOP_PRIVATE_EVAL_REC_9076_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9077(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9077_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9077_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9077_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9077_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9077_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9077_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9077_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9077_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9077_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9077_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9078
#define MACROLOP_PRIVATE_EVAL_REC_9077_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9078(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9078_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9078_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9078_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9078_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9078_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9078_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9078_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9078_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9078_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9078_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9079
#define MACROLOP_PRIVATE_EVAL_REC_9078_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9079(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9079_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9079_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9079_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9079_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9079_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9079_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9079_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9079_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9079_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9079_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9080
#define MACROLOP_PRIVATE_EVAL_REC_9079_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9080(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9080_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9080_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9080_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9080_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9080_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9080_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9080_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9080_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9080_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9080_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9081
#define MACROLOP_PRIVATE_EVAL_REC_9080_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9081(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9081_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9081_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9081_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9081_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9081_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9081_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9081_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9081_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9081_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9081_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9082
#define MACROLOP_PRIVATE_EVAL_REC_9081_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9082(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9082_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9082_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9082_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9082_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9082_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9082_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9082_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9082_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9082_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9082_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9083
#define MACROLOP_PRIVATE_EVAL_REC_9082_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9083(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9083_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9083_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9083_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9083_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9083_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9083_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9083_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9083_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9083_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9083_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9084
#define MACROLOP_PRIVATE_EVAL_REC_9083_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9084(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9084_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9084_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9084_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9084_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9084_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9084_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9084_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9084_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9084_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9084_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9085
#define MACROLOP_PRIVATE_EVAL_REC_9084_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9085(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9085_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9085_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9085_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9085_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9085_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9085_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9085_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9085_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9085_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9085_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9086
#define MACROLOP_PRIVATE_EVAL_REC_9085_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9086(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9086_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9086_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9086_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9086_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9086_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9086_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9086_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9086_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9086_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9086_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9087
#define MACROLOP_PRIVATE_EVAL_REC_9086_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9087(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9087_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9087_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9087_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9087_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9087_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9087_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9087_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9087_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9087_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9087_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9088
#define MACROLOP_PRIVATE_EVAL_REC_9087_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9088(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9088_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9088_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9088_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9088_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9088_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9088_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9088_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9088_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9088_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9088_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9089
#define MACROLOP_PRIVATE_EVAL_REC_9088_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9089(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9089_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9089_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9089_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9089_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9089_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9089_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9089_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9089_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9089_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9089_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9090
#define MACROLOP_PRIVATE_EVAL_REC_9089_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9090(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9090_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9090_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9090_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9090_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9090_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9090_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9090_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9090_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9090_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9090_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9091
#define MACROLOP_PRIVATE_EVAL_REC_9090_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9091(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9091_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9091_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9091_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9091_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9091_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9091_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9091_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9091_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9091_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9091_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9092
#define MACROLOP_PRIVATE_EVAL_REC_9091_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9092(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9092_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9092_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9092_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9092_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9092_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9092_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9092_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9092_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9092_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9092_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9093
#define MACROLOP_PRIVATE_EVAL_REC_9092_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9093(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9093_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9093_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9093_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9093_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9093_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9093_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9093_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9093_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9093_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9093_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9094
#define MACROLOP_PRIVATE_EVAL_REC_9093_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9094(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9094_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9094_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9094_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9094_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9094_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9094_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9094_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9094_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9094_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9094_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9095
#define MACROLOP_PRIVATE_EVAL_REC_9094_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9095(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9095_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9095_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9095_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9095_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9095_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9095_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9095_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9095_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9095_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9095_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9096
#define MACROLOP_PRIVATE_EVAL_REC_9095_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9096(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9096_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9096_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9096_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9096_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9096_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9096_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9096_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9096_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9096_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9096_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9097
#define MACROLOP_PRIVATE_EVAL_REC_9096_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9097(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9097_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9097_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9097_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9097_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9097_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9097_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9097_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9097_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9097_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9097_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9098
#define MACROLOP_PRIVATE_EVAL_REC_9097_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9098(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9098_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9098_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9098_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9098_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9098_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9098_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9098_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9098_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9098_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9098_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9099
#define MACROLOP_PRIVATE_EVAL_REC_9098_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9099(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9099_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9099_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9099_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9099_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9099_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9099_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9099_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9099_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9099_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9099_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9100
#define MACROLOP_PRIVATE_EVAL_REC_9099_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9100(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9100_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9100_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9100_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9100_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9100_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9100_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9100_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9100_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9100_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9100_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9101
#define MACROLOP_PRIVATE_EVAL_REC_9100_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9101(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9101_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9101_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9101_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9101_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9101_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9101_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9101_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9101_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9101_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9101_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9102
#define MACROLOP_PRIVATE_EVAL_REC_9101_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9102(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9102_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9102_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9102_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9102_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9102_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9102_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9102_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9102_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9102_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9102_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9103
#define MACROLOP_PRIVATE_EVAL_REC_9102_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9103(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9103_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9103_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9103_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9103_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9103_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9103_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9103_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9103_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9103_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9103_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9104
#define MACROLOP_PRIVATE_EVAL_REC_9103_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9104(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9104_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9104_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9104_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9104_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9104_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9104_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9104_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9104_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9104_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9104_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9105
#define MACROLOP_PRIVATE_EVAL_REC_9104_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9105(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9105_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9105_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9105_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9105_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9105_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9105_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9105_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9105_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9105_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9105_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9106
#define MACROLOP_PRIVATE_EVAL_REC_9105_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9106(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9106_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9106_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9106_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9106_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9106_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9106_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9106_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9106_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9106_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9106_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9107
#define MACROLOP_PRIVATE_EVAL_REC_9106_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9107(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9107_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9107_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9107_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9107_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9107_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9107_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9107_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9107_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9107_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9107_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9108
#define MACROLOP_PRIVATE_EVAL_REC_9107_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9108(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9108_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9108_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9108_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9108_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9108_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9108_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9108_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9108_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9108_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9108_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9109
#define MACROLOP_PRIVATE_EVAL_REC_9108_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9109(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9109_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9109_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9109_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9109_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9109_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9109_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9109_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9109_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9109_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9109_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9110
#define MACROLOP_PRIVATE_EVAL_REC_9109_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9110(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9110_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9110_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9110_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9110_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9110_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9110_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9110_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9110_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9110_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9110_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9111
#define MACROLOP_PRIVATE_EVAL_REC_9110_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9111(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9111_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9111_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9111_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9111_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9111_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9111_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9111_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9111_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9111_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9111_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9112
#define MACROLOP_PRIVATE_EVAL_REC_9111_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9112(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9112_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9112_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9112_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9112_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9112_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9112_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9112_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9112_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9112_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9112_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9113
#define MACROLOP_PRIVATE_EVAL_REC_9112_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9113(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9113_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9113_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9113_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9113_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9113_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9113_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9113_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9113_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9113_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9113_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9114
#define MACROLOP_PRIVATE_EVAL_REC_9113_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9114(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9114_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9114_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9114_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9114_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9114_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9114_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9114_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9114_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9114_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9114_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9115
#define MACROLOP_PRIVATE_EVAL_REC_9114_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9115(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9115_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9115_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9115_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9115_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9115_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9115_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9115_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9115_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9115_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9115_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9116
#define MACROLOP_PRIVATE_EVAL_REC_9115_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9116(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9116_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9116_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9116_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9116_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9116_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9116_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9116_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9116_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9116_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9116_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9117
#define MACROLOP_PRIVATE_EVAL_REC_9116_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9117(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9117_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9117_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9117_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9117_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9117_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9117_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9117_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9117_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9117_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9117_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9118
#define MACROLOP_PRIVATE_EVAL_REC_9117_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9118(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9118_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9118_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9118_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9118_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9118_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9118_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9118_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9118_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9118_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9118_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9119
#define MACROLOP_PRIVATE_EVAL_REC_9118_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9119(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9119_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9119_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9119_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9119_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9119_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9119_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9119_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9119_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9119_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9119_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9120
#define MACROLOP_PRIVATE_EVAL_REC_9119_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9120(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9120_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9120_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9120_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9120_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9120_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9120_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9120_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9120_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9120_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9120_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9121
#define MACROLOP_PRIVATE_EVAL_REC_9120_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9121(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9121_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9121_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9121_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9121_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9121_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9121_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9121_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9121_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9121_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9121_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9122
#define MACROLOP_PRIVATE_EVAL_REC_9121_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9122(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9122_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9122_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9122_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9122_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9122_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9122_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9122_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9122_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9122_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9122_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9123
#define MACROLOP_PRIVATE_EVAL_REC_9122_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9123(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9123_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9123_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9123_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9123_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9123_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9123_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9123_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9123_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9123_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9123_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9124
#define MACROLOP_PRIVATE_EVAL_REC_9123_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9124(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9124_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9124_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9124_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9124_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9124_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9124_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9124_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9124_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9124_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9124_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9125
#define MACROLOP_PRIVATE_EVAL_REC_9124_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9125(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9125_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9125_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9125_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9125_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9125_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9125_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9125_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9125_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9125_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9125_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9126
#define MACROLOP_PRIVATE_EVAL_REC_9125_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9126(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9126_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9126_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9126_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9126_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9126_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9126_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9126_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9126_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9126_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9126_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9127
#define MACROLOP_PRIVATE_EVAL_REC_9126_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9127(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9127_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9127_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9127_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9127_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9127_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9127_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9127_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9127_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9127_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9127_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9128
#define MACROLOP_PRIVATE_EVAL_REC_9127_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9128(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9128_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9128_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9128_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9128_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9128_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9128_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9128_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9128_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9128_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9128_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9129
#define MACROLOP_PRIVATE_EVAL_REC_9128_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9129(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9129_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9129_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9129_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9129_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9129_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9129_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9129_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9129_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9129_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9129_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9130
#define MACROLOP_PRIVATE_EVAL_REC_9129_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9130(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9130_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9130_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9130_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9130_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9130_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9130_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9130_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9130_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9130_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9130_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9131
#define MACROLOP_PRIVATE_EVAL_REC_9130_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9131(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9131_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9131_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9131_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9131_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9131_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9131_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9131_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9131_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9131_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9131_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9132
#define MACROLOP_PRIVATE_EVAL_REC_9131_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9132(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9132_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9132_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9132_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9132_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9132_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9132_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9132_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9132_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9132_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9132_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9133
#define MACROLOP_PRIVATE_EVAL_REC_9132_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9133(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9133_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9133_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9133_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9133_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9133_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9133_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9133_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9133_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9133_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9133_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9134
#define MACROLOP_PRIVATE_EVAL_REC_9133_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9134(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9134_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9134_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9134_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9134_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9134_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9134_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9134_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9134_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9134_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9134_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9135
#define MACROLOP_PRIVATE_EVAL_REC_9134_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9135(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9135_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9135_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9135_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9135_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9135_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9135_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9135_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9135_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9135_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9135_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9136
#define MACROLOP_PRIVATE_EVAL_REC_9135_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9136(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9136_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9136_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9136_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9136_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9136_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9136_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9136_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9136_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9136_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9136_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9137
#define MACROLOP_PRIVATE_EVAL_REC_9136_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9137(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9137_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9137_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9137_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9137_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9137_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9137_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9137_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9137_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9137_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9137_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9138
#define MACROLOP_PRIVATE_EVAL_REC_9137_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9138(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9138_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9138_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9138_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9138_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9138_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9138_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9138_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9138_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9138_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9138_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9139
#define MACROLOP_PRIVATE_EVAL_REC_9138_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9139(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9139_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9139_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9139_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9139_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9139_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9139_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9139_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9139_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9139_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9139_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9140
#define MACROLOP_PRIVATE_EVAL_REC_9139_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9140(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9140_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9140_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9140_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9140_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9140_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9140_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9140_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9140_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9140_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9140_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9141
#define MACROLOP_PRIVATE_EVAL_REC_9140_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9141(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9141_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9141_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9141_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9141_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9141_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9141_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9141_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9141_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9141_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9141_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9142
#define MACROLOP_PRIVATE_EVAL_REC_9141_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9142(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9142_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9142_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9142_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9142_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9142_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9142_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9142_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9142_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9142_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9142_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9143
#define MACROLOP_PRIVATE_EVAL_REC_9142_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9143(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9143_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9143_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9143_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9143_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9143_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9143_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9143_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9143_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9143_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9143_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9144
#define MACROLOP_PRIVATE_EVAL_REC_9143_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9144(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9144_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9144_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9144_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9144_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9144_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9144_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9144_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9144_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9144_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9144_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9145
#define MACROLOP_PRIVATE_EVAL_REC_9144_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9145(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9145_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9145_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9145_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9145_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9145_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9145_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9145_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9145_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9145_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9145_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9146
#define MACROLOP_PRIVATE_EVAL_REC_9145_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9146(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9146_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9146_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9146_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9146_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9146_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9146_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9146_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9146_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9146_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9146_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9147
#define MACROLOP_PRIVATE_EVAL_REC_9146_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9147(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9147_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9147_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9147_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9147_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9147_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9147_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9147_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9147_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9147_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9147_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9148
#define MACROLOP_PRIVATE_EVAL_REC_9147_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9148(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9148_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9148_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9148_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9148_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9148_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9148_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9148_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9148_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9148_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9148_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9149
#define MACROLOP_PRIVATE_EVAL_REC_9148_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9149(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9149_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9149_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9149_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9149_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9149_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9149_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9149_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9149_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9149_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9149_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9150
#define MACROLOP_PRIVATE_EVAL_REC_9149_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9150(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9150_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9150_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9150_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9150_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9150_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9150_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9150_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9150_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9150_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9150_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9151
#define MACROLOP_PRIVATE_EVAL_REC_9150_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9151(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9151_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9151_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9151_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9151_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9151_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9151_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9151_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9151_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9151_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9151_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9152
#define MACROLOP_PRIVATE_EVAL_REC_9151_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9152(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9152_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9152_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9152_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9152_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9152_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9152_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9152_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9152_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9152_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9152_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9153
#define MACROLOP_PRIVATE_EVAL_REC_9152_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9153(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9153_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9153_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9153_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9153_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9153_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9153_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9153_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9153_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9153_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9153_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9154
#define MACROLOP_PRIVATE_EVAL_REC_9153_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9154(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9154_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9154_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9154_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9154_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9154_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9154_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9154_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9154_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9154_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9154_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9155
#define MACROLOP_PRIVATE_EVAL_REC_9154_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9155(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9155_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9155_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9155_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9155_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9155_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9155_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9155_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9155_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9155_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9155_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9156
#define MACROLOP_PRIVATE_EVAL_REC_9155_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9156(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9156_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9156_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9156_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9156_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9156_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9156_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9156_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9156_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9156_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9156_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9157
#define MACROLOP_PRIVATE_EVAL_REC_9156_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9157(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9157_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9157_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9157_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9157_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9157_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9157_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9157_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9157_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9157_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9157_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9158
#define MACROLOP_PRIVATE_EVAL_REC_9157_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9158(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9158_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9158_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9158_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9158_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9158_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9158_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9158_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9158_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9158_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9158_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9159
#define MACROLOP_PRIVATE_EVAL_REC_9158_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9159(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9159_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9159_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9159_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9159_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9159_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9159_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9159_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9159_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9159_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9159_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9160
#define MACROLOP_PRIVATE_EVAL_REC_9159_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9160(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9160_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9160_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9160_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9160_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9160_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9160_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9160_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9160_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9160_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9160_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9161
#define MACROLOP_PRIVATE_EVAL_REC_9160_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9161(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9161_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9161_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9161_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9161_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9161_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9161_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9161_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9161_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9161_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9161_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9162
#define MACROLOP_PRIVATE_EVAL_REC_9161_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9162(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9162_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9162_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9162_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9162_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9162_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9162_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9162_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9162_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9162_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9162_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9163
#define MACROLOP_PRIVATE_EVAL_REC_9162_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9163(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9163_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9163_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9163_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9163_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9163_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9163_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9163_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9163_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9163_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9163_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9164
#define MACROLOP_PRIVATE_EVAL_REC_9163_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9164(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9164_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9164_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9164_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9164_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9164_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9164_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9164_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9164_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9164_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9164_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9165
#define MACROLOP_PRIVATE_EVAL_REC_9164_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9165(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9165_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9165_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9165_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9165_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9165_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9165_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9165_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9165_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9165_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9165_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9166
#define MACROLOP_PRIVATE_EVAL_REC_9165_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9166(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9166_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9166_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9166_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9166_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9166_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9166_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9166_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9166_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9166_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9166_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9167
#define MACROLOP_PRIVATE_EVAL_REC_9166_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9167(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9167_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9167_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9167_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9167_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9167_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9167_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9167_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9167_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9167_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9167_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9168
#define MACROLOP_PRIVATE_EVAL_REC_9167_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9168(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9168_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9168_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9168_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9168_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9168_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9168_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9168_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9168_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9168_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9168_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9169
#define MACROLOP_PRIVATE_EVAL_REC_9168_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9169(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9169_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9169_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9169_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9169_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9169_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9169_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9169_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9169_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9169_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9169_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9170
#define MACROLOP_PRIVATE_EVAL_REC_9169_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9170(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9170_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9170_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9170_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9170_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9170_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9170_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9170_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9170_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9170_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9170_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9171
#define MACROLOP_PRIVATE_EVAL_REC_9170_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9171(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9171_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9171_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9171_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9171_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9171_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9171_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9171_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9171_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9171_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9171_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9172
#define MACROLOP_PRIVATE_EVAL_REC_9171_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9172(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9172_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9172_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9172_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9172_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9172_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9172_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9172_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9172_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9172_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9172_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9173
#define MACROLOP_PRIVATE_EVAL_REC_9172_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9173(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9173_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9173_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9173_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9173_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9173_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9173_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9173_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9173_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9173_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9173_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9174
#define MACROLOP_PRIVATE_EVAL_REC_9173_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9174(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9174_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9174_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9174_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9174_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9174_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9174_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9174_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9174_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9174_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9174_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9175
#define MACROLOP_PRIVATE_EVAL_REC_9174_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9175(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9175_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9175_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9175_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9175_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9175_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9175_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9175_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9175_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9175_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9175_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9176
#define MACROLOP_PRIVATE_EVAL_REC_9175_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9176(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9176_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9176_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9176_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9176_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9176_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9176_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9176_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9176_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9176_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9176_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9177
#define MACROLOP_PRIVATE_EVAL_REC_9176_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9177(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9177_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9177_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9177_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9177_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9177_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9177_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9177_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9177_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9177_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9177_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9178
#define MACROLOP_PRIVATE_EVAL_REC_9177_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9178(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9178_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9178_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9178_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9178_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9178_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9178_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9178_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9178_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9178_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9178_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9179
#define MACROLOP_PRIVATE_EVAL_REC_9178_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9179(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9179_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9179_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9179_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9179_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9179_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9179_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9179_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9179_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9179_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9179_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9180
#define MACROLOP_PRIVATE_EVAL_REC_9179_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9180(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9180_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9180_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9180_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9180_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9180_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9180_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9180_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9180_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9180_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9180_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9181
#define MACROLOP_PRIVATE_EVAL_REC_9180_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9181(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9181_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9181_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9181_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9181_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9181_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9181_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9181_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9181_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9181_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9181_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9182
#define MACROLOP_PRIVATE_EVAL_REC_9181_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9182(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9182_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9182_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9182_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9182_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9182_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9182_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9182_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9182_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9182_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9182_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9183
#define MACROLOP_PRIVATE_EVAL_REC_9182_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9183(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9183_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9183_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9183_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9183_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9183_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9183_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9183_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9183_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9183_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9183_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9184
#define MACROLOP_PRIVATE_EVAL_REC_9183_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9184(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9184_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9184_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9184_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9184_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9184_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9184_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9184_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9184_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9184_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9184_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9185
#define MACROLOP_PRIVATE_EVAL_REC_9184_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9185(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9185_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9185_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9185_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9185_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9185_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9185_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9185_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9185_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9185_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9185_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9186
#define MACROLOP_PRIVATE_EVAL_REC_9185_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9186(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9186_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9186_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9186_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9186_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9186_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9186_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9186_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9186_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9186_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9186_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9187
#define MACROLOP_PRIVATE_EVAL_REC_9186_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9187(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9187_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9187_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9187_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9187_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9187_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9187_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9187_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9187_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9187_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9187_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9188
#define MACROLOP_PRIVATE_EVAL_REC_9187_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9188(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9188_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9188_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9188_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9188_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9188_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9188_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9188_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9188_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9188_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9188_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9189
#define MACROLOP_PRIVATE_EVAL_REC_9188_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9189(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9189_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9189_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9189_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9189_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9189_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9189_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9189_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9189_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9189_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9189_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9190
#define MACROLOP_PRIVATE_EVAL_REC_9189_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9190(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9190_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9190_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9190_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9190_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9190_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9190_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9190_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9190_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9190_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9190_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9191
#define MACROLOP_PRIVATE_EVAL_REC_9190_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9191(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9191_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9191_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9191_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9191_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9191_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9191_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9191_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9191_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9191_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9191_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9192
#define MACROLOP_PRIVATE_EVAL_REC_9191_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9192(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9192_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9192_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9192_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9192_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9192_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9192_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9192_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9192_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9192_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9192_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9193
#define MACROLOP_PRIVATE_EVAL_REC_9192_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9193(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9193_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9193_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9193_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9193_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9193_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9193_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9193_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9193_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9193_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9193_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9194
#define MACROLOP_PRIVATE_EVAL_REC_9193_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9194(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9194_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9194_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9194_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9194_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9194_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9194_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9194_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9194_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9194_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9194_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9195
#define MACROLOP_PRIVATE_EVAL_REC_9194_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9195(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9195_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9195_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9195_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9195_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9195_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9195_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9195_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9195_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9195_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9195_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9196
#define MACROLOP_PRIVATE_EVAL_REC_9195_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9196(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9196_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9196_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9196_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9196_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9196_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9196_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9196_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9196_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9196_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9196_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9197
#define MACROLOP_PRIVATE_EVAL_REC_9196_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9197(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9197_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9197_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9197_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9197_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9197_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9197_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9197_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9197_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9197_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9197_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9198
#define MACROLOP_PRIVATE_EVAL_REC_9197_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9198(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9198_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9198_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9198_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9198_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9198_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9198_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9198_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9198_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9198_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9198_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9199
#define MACROLOP_PRIVATE_EVAL_REC_9198_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9199(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9199_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9199_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9199_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9199_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9199_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9199_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9199_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9199_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9199_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9199_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9200
#define MACROLOP_PRIVATE_EVAL_REC_9199_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9200(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9200_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9200_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9200_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9200_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9200_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9200_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9200_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9200_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9200_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9200_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9201
#define MACROLOP_PRIVATE_EVAL_REC_9200_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9201(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9201_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9201_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9201_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9201_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9201_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9201_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9201_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9201_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9201_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9201_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9202
#define MACROLOP_PRIVATE_EVAL_REC_9201_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9202(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9202_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9202_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9202_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9202_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9202_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9202_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9202_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9202_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9202_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9202_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9203
#define MACROLOP_PRIVATE_EVAL_REC_9202_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9203(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9203_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9203_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9203_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9203_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9203_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9203_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9203_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9203_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9203_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9203_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9204
#define MACROLOP_PRIVATE_EVAL_REC_9203_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9204(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9204_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9204_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9204_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9204_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9204_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9204_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9204_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9204_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9204_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9204_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9205
#define MACROLOP_PRIVATE_EVAL_REC_9204_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9205(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9205_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9205_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9205_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9205_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9205_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9205_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9205_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9205_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9205_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9205_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9206
#define MACROLOP_PRIVATE_EVAL_REC_9205_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9206(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9206_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9206_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9206_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9206_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9206_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9206_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9206_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9206_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9206_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9206_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9207
#define MACROLOP_PRIVATE_EVAL_REC_9206_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9207(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9207_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9207_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9207_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9207_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9207_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9207_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9207_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9207_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9207_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9207_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9208
#define MACROLOP_PRIVATE_EVAL_REC_9207_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9208(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9208_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9208_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9208_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9208_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9208_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9208_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9208_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9208_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9208_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9208_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9209
#define MACROLOP_PRIVATE_EVAL_REC_9208_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9209(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9209_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9209_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9209_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9209_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9209_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9209_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9209_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9209_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9209_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9209_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9210
#define MACROLOP_PRIVATE_EVAL_REC_9209_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9210(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9210_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9210_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9210_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9210_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9210_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9210_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9210_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9210_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9210_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9210_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9211
#define MACROLOP_PRIVATE_EVAL_REC_9210_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9211(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9211_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9211_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9211_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9211_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9211_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9211_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9211_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9211_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9211_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9211_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9212
#define MACROLOP_PRIVATE_EVAL_REC_9211_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9212(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9212_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9212_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9212_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9212_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9212_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9212_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9212_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9212_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9212_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9212_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9213
#define MACROLOP_PRIVATE_EVAL_REC_9212_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9213(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9213_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9213_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9213_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9213_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9213_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9213_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9213_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9213_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9213_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9213_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9214
#define MACROLOP_PRIVATE_EVAL_REC_9213_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9214(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9214_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9214_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9214_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9214_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9214_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9214_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9214_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9214_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9214_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9214_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9215
#define MACROLOP_PRIVATE_EVAL_REC_9214_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_9215(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_9215_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_9215_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_9215_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_9215_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_9215_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_9215_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_9215_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_9215_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_9215_##choice
#define MACROLOP_PRIVATE_EVAL_REC_9215_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_9216
#define MACROLOP_PRIVATE_EVAL_REC_9215_STOP(...) __VA_ARGS__

#endif // MACROLOP_EVAL_REC_UNROLL_8192_TO_9215_H