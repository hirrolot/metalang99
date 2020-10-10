#ifndef AGONY_PP_EVAL_REC_UNROLL_3072_TO_4096_H
#define AGONY_PP_EVAL_REC_UNROLL_3072_TO_4096_H

#define AGONY_PP_PRIVATE_EVAL_REC_3072(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3072_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3072_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3072_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3072_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3072_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3072_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3072_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3072_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3072_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3072_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3073
#define AGONY_PP_PRIVATE_EVAL_REC_3072_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3073(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3073_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3073_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3073_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3073_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3073_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3073_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3073_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3073_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3073_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3073_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3074
#define AGONY_PP_PRIVATE_EVAL_REC_3073_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3074(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3074_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3074_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3074_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3074_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3074_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3074_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3074_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3074_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3074_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3074_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3075
#define AGONY_PP_PRIVATE_EVAL_REC_3074_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3075(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3075_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3075_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3075_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3075_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3075_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3075_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3075_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3075_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3075_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3075_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3076
#define AGONY_PP_PRIVATE_EVAL_REC_3075_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3076(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3076_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3076_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3076_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3076_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3076_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3076_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3076_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3076_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3076_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3076_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3077
#define AGONY_PP_PRIVATE_EVAL_REC_3076_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3077(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3077_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3077_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3077_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3077_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3077_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3077_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3077_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3077_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3077_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3077_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3078
#define AGONY_PP_PRIVATE_EVAL_REC_3077_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3078(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3078_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3078_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3078_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3078_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3078_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3078_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3078_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3078_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3078_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3078_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3079
#define AGONY_PP_PRIVATE_EVAL_REC_3078_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3079(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3079_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3079_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3079_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3079_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3079_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3079_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3079_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3079_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3079_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3079_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3080
#define AGONY_PP_PRIVATE_EVAL_REC_3079_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3080(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3080_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3080_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3080_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3080_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3080_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3080_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3080_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3080_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3080_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3080_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3081
#define AGONY_PP_PRIVATE_EVAL_REC_3080_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3081(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3081_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3081_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3081_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3081_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3081_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3081_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3081_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3081_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3081_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3081_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3082
#define AGONY_PP_PRIVATE_EVAL_REC_3081_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3082(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3082_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3082_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3082_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3082_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3082_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3082_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3082_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3082_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3082_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3082_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3083
#define AGONY_PP_PRIVATE_EVAL_REC_3082_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3083(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3083_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3083_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3083_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3083_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3083_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3083_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3083_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3083_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3083_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3083_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3084
#define AGONY_PP_PRIVATE_EVAL_REC_3083_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3084(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3084_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3084_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3084_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3084_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3084_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3084_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3084_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3084_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3084_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3084_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3085
#define AGONY_PP_PRIVATE_EVAL_REC_3084_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3085(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3085_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3085_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3085_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3085_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3085_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3085_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3085_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3085_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3085_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3085_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3086
#define AGONY_PP_PRIVATE_EVAL_REC_3085_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3086(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3086_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3086_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3086_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3086_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3086_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3086_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3086_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3086_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3086_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3086_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3087
#define AGONY_PP_PRIVATE_EVAL_REC_3086_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3087(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3087_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3087_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3087_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3087_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3087_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3087_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3087_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3087_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3087_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3087_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3088
#define AGONY_PP_PRIVATE_EVAL_REC_3087_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3088(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3088_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3088_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3088_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3088_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3088_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3088_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3088_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3088_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3088_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3088_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3089
#define AGONY_PP_PRIVATE_EVAL_REC_3088_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3089(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3089_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3089_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3089_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3089_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3089_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3089_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3089_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3089_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3089_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3089_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3090
#define AGONY_PP_PRIVATE_EVAL_REC_3089_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3090(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3090_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3090_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3090_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3090_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3090_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3090_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3090_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3090_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3090_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3090_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3091
#define AGONY_PP_PRIVATE_EVAL_REC_3090_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3091(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3091_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3091_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3091_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3091_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3091_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3091_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3091_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3091_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3091_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3091_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3092
#define AGONY_PP_PRIVATE_EVAL_REC_3091_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3092(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3092_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3092_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3092_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3092_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3092_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3092_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3092_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3092_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3092_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3092_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3093
#define AGONY_PP_PRIVATE_EVAL_REC_3092_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3093(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3093_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3093_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3093_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3093_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3093_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3093_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3093_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3093_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3093_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3093_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3094
#define AGONY_PP_PRIVATE_EVAL_REC_3093_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3094(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3094_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3094_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3094_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3094_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3094_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3094_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3094_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3094_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3094_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3094_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3095
#define AGONY_PP_PRIVATE_EVAL_REC_3094_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3095(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3095_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3095_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3095_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3095_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3095_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3095_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3095_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3095_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3095_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3095_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3096
#define AGONY_PP_PRIVATE_EVAL_REC_3095_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3096(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3096_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3096_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3096_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3096_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3096_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3096_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3096_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3096_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3096_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3096_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3097
#define AGONY_PP_PRIVATE_EVAL_REC_3096_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3097(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3097_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3097_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3097_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3097_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3097_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3097_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3097_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3097_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3097_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3097_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3098
#define AGONY_PP_PRIVATE_EVAL_REC_3097_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3098(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3098_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3098_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3098_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3098_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3098_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3098_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3098_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3098_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3098_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3098_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3099
#define AGONY_PP_PRIVATE_EVAL_REC_3098_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3099(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3099_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3099_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3099_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3099_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3099_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3099_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3099_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3099_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3099_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3099_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3100
#define AGONY_PP_PRIVATE_EVAL_REC_3099_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3100(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3100_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3100_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3100_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3100_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3100_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3100_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3100_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3100_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3100_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3100_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3101
#define AGONY_PP_PRIVATE_EVAL_REC_3100_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3101(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3101_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3101_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3101_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3101_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3101_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3101_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3101_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3101_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3101_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3101_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3102
#define AGONY_PP_PRIVATE_EVAL_REC_3101_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3102(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3102_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3102_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3102_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3102_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3102_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3102_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3102_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3102_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3102_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3102_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3103
#define AGONY_PP_PRIVATE_EVAL_REC_3102_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3103(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3103_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3103_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3103_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3103_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3103_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3103_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3103_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3103_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3103_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3103_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3104
#define AGONY_PP_PRIVATE_EVAL_REC_3103_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3104(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3104_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3104_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3104_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3104_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3104_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3104_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3104_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3104_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3104_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3104_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3105
#define AGONY_PP_PRIVATE_EVAL_REC_3104_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3105(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3105_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3105_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3105_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3105_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3105_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3105_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3105_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3105_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3105_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3105_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3106
#define AGONY_PP_PRIVATE_EVAL_REC_3105_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3106(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3106_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3106_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3106_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3106_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3106_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3106_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3106_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3106_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3106_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3106_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3107
#define AGONY_PP_PRIVATE_EVAL_REC_3106_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3107(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3107_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3107_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3107_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3107_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3107_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3107_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3107_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3107_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3107_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3107_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3108
#define AGONY_PP_PRIVATE_EVAL_REC_3107_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3108(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3108_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3108_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3108_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3108_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3108_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3108_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3108_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3108_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3108_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3108_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3109
#define AGONY_PP_PRIVATE_EVAL_REC_3108_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3109(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3109_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3109_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3109_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3109_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3109_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3109_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3109_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3109_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3109_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3109_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3110
#define AGONY_PP_PRIVATE_EVAL_REC_3109_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3110(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3110_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3110_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3110_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3110_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3110_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3110_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3110_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3110_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3110_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3110_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3111
#define AGONY_PP_PRIVATE_EVAL_REC_3110_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3111(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3111_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3111_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3111_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3111_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3111_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3111_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3111_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3111_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3111_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3111_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3112
#define AGONY_PP_PRIVATE_EVAL_REC_3111_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3112(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3112_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3112_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3112_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3112_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3112_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3112_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3112_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3112_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3112_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3112_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3113
#define AGONY_PP_PRIVATE_EVAL_REC_3112_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3113(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3113_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3113_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3113_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3113_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3113_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3113_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3113_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3113_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3113_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3113_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3114
#define AGONY_PP_PRIVATE_EVAL_REC_3113_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3114(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3114_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3114_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3114_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3114_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3114_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3114_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3114_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3114_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3114_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3114_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3115
#define AGONY_PP_PRIVATE_EVAL_REC_3114_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3115(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3115_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3115_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3115_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3115_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3115_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3115_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3115_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3115_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3115_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3115_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3116
#define AGONY_PP_PRIVATE_EVAL_REC_3115_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3116(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3116_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3116_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3116_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3116_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3116_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3116_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3116_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3116_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3116_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3116_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3117
#define AGONY_PP_PRIVATE_EVAL_REC_3116_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3117(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3117_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3117_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3117_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3117_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3117_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3117_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3117_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3117_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3117_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3117_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3118
#define AGONY_PP_PRIVATE_EVAL_REC_3117_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3118(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3118_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3118_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3118_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3118_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3118_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3118_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3118_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3118_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3118_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3118_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3119
#define AGONY_PP_PRIVATE_EVAL_REC_3118_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3119(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3119_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3119_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3119_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3119_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3119_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3119_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3119_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3119_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3119_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3119_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3120
#define AGONY_PP_PRIVATE_EVAL_REC_3119_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3120(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3120_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3120_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3120_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3120_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3120_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3120_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3120_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3120_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3120_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3120_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3121
#define AGONY_PP_PRIVATE_EVAL_REC_3120_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3121(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3121_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3121_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3121_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3121_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3121_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3121_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3121_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3121_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3121_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3121_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3122
#define AGONY_PP_PRIVATE_EVAL_REC_3121_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3122(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3122_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3122_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3122_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3122_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3122_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3122_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3122_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3122_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3122_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3122_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3123
#define AGONY_PP_PRIVATE_EVAL_REC_3122_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3123(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3123_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3123_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3123_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3123_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3123_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3123_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3123_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3123_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3123_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3123_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3124
#define AGONY_PP_PRIVATE_EVAL_REC_3123_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3124(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3124_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3124_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3124_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3124_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3124_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3124_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3124_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3124_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3124_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3124_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3125
#define AGONY_PP_PRIVATE_EVAL_REC_3124_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3125(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3125_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3125_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3125_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3125_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3125_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3125_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3125_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3125_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3125_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3125_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3126
#define AGONY_PP_PRIVATE_EVAL_REC_3125_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3126(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3126_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3126_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3126_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3126_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3126_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3126_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3126_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3126_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3126_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3126_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3127
#define AGONY_PP_PRIVATE_EVAL_REC_3126_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3127(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3127_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3127_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3127_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3127_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3127_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3127_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3127_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3127_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3127_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3127_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3128
#define AGONY_PP_PRIVATE_EVAL_REC_3127_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3128(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3128_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3128_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3128_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3128_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3128_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3128_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3128_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3128_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3128_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3128_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3129
#define AGONY_PP_PRIVATE_EVAL_REC_3128_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3129(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3129_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3129_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3129_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3129_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3129_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3129_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3129_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3129_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3129_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3129_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3130
#define AGONY_PP_PRIVATE_EVAL_REC_3129_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3130(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3130_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3130_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3130_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3130_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3130_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3130_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3130_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3130_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3130_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3130_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3131
#define AGONY_PP_PRIVATE_EVAL_REC_3130_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3131(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3131_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3131_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3131_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3131_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3131_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3131_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3131_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3131_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3131_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3131_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3132
#define AGONY_PP_PRIVATE_EVAL_REC_3131_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3132(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3132_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3132_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3132_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3132_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3132_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3132_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3132_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3132_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3132_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3132_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3133
#define AGONY_PP_PRIVATE_EVAL_REC_3132_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3133(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3133_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3133_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3133_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3133_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3133_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3133_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3133_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3133_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3133_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3133_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3134
#define AGONY_PP_PRIVATE_EVAL_REC_3133_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3134(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3134_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3134_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3134_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3134_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3134_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3134_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3134_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3134_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3134_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3134_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3135
#define AGONY_PP_PRIVATE_EVAL_REC_3134_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3135(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3135_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3135_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3135_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3135_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3135_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3135_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3135_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3135_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3135_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3135_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3136
#define AGONY_PP_PRIVATE_EVAL_REC_3135_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3136(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3136_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3136_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3136_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3136_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3136_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3136_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3136_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3136_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3136_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3136_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3137
#define AGONY_PP_PRIVATE_EVAL_REC_3136_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3137(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3137_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3137_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3137_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3137_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3137_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3137_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3137_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3137_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3137_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3137_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3138
#define AGONY_PP_PRIVATE_EVAL_REC_3137_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3138(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3138_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3138_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3138_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3138_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3138_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3138_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3138_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3138_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3138_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3138_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3139
#define AGONY_PP_PRIVATE_EVAL_REC_3138_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3139(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3139_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3139_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3139_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3139_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3139_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3139_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3139_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3139_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3139_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3139_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3140
#define AGONY_PP_PRIVATE_EVAL_REC_3139_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3140(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3140_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3140_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3140_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3140_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3140_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3140_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3140_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3140_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3140_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3140_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3141
#define AGONY_PP_PRIVATE_EVAL_REC_3140_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3141(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3141_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3141_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3141_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3141_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3141_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3141_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3141_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3141_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3141_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3141_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3142
#define AGONY_PP_PRIVATE_EVAL_REC_3141_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3142(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3142_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3142_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3142_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3142_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3142_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3142_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3142_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3142_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3142_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3142_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3143
#define AGONY_PP_PRIVATE_EVAL_REC_3142_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3143(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3143_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3143_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3143_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3143_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3143_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3143_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3143_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3143_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3143_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3143_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3144
#define AGONY_PP_PRIVATE_EVAL_REC_3143_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3144(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3144_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3144_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3144_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3144_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3144_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3144_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3144_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3144_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3144_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3144_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3145
#define AGONY_PP_PRIVATE_EVAL_REC_3144_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3145(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3145_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3145_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3145_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3145_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3145_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3145_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3145_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3145_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3145_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3145_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3146
#define AGONY_PP_PRIVATE_EVAL_REC_3145_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3146(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3146_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3146_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3146_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3146_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3146_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3146_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3146_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3146_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3146_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3146_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3147
#define AGONY_PP_PRIVATE_EVAL_REC_3146_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3147(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3147_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3147_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3147_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3147_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3147_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3147_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3147_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3147_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3147_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3147_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3148
#define AGONY_PP_PRIVATE_EVAL_REC_3147_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3148(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3148_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3148_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3148_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3148_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3148_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3148_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3148_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3148_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3148_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3148_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3149
#define AGONY_PP_PRIVATE_EVAL_REC_3148_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3149(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3149_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3149_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3149_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3149_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3149_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3149_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3149_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3149_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3149_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3149_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3150
#define AGONY_PP_PRIVATE_EVAL_REC_3149_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3150(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3150_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3150_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3150_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3150_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3150_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3150_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3150_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3150_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3150_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3150_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3151
#define AGONY_PP_PRIVATE_EVAL_REC_3150_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3151(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3151_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3151_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3151_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3151_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3151_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3151_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3151_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3151_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3151_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3151_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3152
#define AGONY_PP_PRIVATE_EVAL_REC_3151_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3152(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3152_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3152_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3152_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3152_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3152_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3152_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3152_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3152_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3152_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3152_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3153
#define AGONY_PP_PRIVATE_EVAL_REC_3152_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3153(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3153_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3153_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3153_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3153_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3153_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3153_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3153_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3153_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3153_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3153_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3154
#define AGONY_PP_PRIVATE_EVAL_REC_3153_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3154(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3154_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3154_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3154_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3154_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3154_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3154_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3154_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3154_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3154_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3154_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3155
#define AGONY_PP_PRIVATE_EVAL_REC_3154_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3155(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3155_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3155_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3155_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3155_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3155_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3155_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3155_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3155_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3155_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3155_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3156
#define AGONY_PP_PRIVATE_EVAL_REC_3155_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3156(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3156_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3156_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3156_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3156_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3156_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3156_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3156_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3156_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3156_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3156_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3157
#define AGONY_PP_PRIVATE_EVAL_REC_3156_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3157(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3157_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3157_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3157_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3157_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3157_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3157_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3157_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3157_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3157_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3157_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3158
#define AGONY_PP_PRIVATE_EVAL_REC_3157_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3158(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3158_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3158_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3158_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3158_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3158_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3158_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3158_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3158_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3158_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3158_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3159
#define AGONY_PP_PRIVATE_EVAL_REC_3158_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3159(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3159_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3159_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3159_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3159_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3159_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3159_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3159_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3159_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3159_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3159_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3160
#define AGONY_PP_PRIVATE_EVAL_REC_3159_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3160(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3160_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3160_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3160_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3160_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3160_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3160_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3160_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3160_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3160_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3160_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3161
#define AGONY_PP_PRIVATE_EVAL_REC_3160_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3161(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3161_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3161_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3161_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3161_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3161_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3161_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3161_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3161_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3161_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3161_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3162
#define AGONY_PP_PRIVATE_EVAL_REC_3161_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3162(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3162_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3162_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3162_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3162_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3162_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3162_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3162_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3162_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3162_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3162_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3163
#define AGONY_PP_PRIVATE_EVAL_REC_3162_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3163(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3163_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3163_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3163_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3163_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3163_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3163_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3163_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3163_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3163_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3163_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3164
#define AGONY_PP_PRIVATE_EVAL_REC_3163_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3164(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3164_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3164_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3164_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3164_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3164_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3164_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3164_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3164_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3164_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3164_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3165
#define AGONY_PP_PRIVATE_EVAL_REC_3164_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3165(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3165_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3165_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3165_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3165_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3165_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3165_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3165_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3165_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3165_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3165_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3166
#define AGONY_PP_PRIVATE_EVAL_REC_3165_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3166(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3166_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3166_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3166_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3166_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3166_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3166_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3166_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3166_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3166_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3166_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3167
#define AGONY_PP_PRIVATE_EVAL_REC_3166_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3167(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3167_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3167_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3167_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3167_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3167_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3167_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3167_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3167_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3167_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3167_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3168
#define AGONY_PP_PRIVATE_EVAL_REC_3167_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3168(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3168_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3168_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3168_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3168_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3168_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3168_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3168_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3168_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3168_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3168_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3169
#define AGONY_PP_PRIVATE_EVAL_REC_3168_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3169(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3169_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3169_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3169_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3169_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3169_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3169_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3169_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3169_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3169_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3169_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3170
#define AGONY_PP_PRIVATE_EVAL_REC_3169_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3170(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3170_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3170_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3170_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3170_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3170_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3170_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3170_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3170_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3170_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3170_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3171
#define AGONY_PP_PRIVATE_EVAL_REC_3170_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3171(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3171_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3171_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3171_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3171_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3171_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3171_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3171_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3171_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3171_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3171_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3172
#define AGONY_PP_PRIVATE_EVAL_REC_3171_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3172(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3172_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3172_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3172_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3172_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3172_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3172_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3172_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3172_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3172_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3172_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3173
#define AGONY_PP_PRIVATE_EVAL_REC_3172_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3173(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3173_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3173_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3173_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3173_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3173_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3173_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3173_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3173_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3173_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3173_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3174
#define AGONY_PP_PRIVATE_EVAL_REC_3173_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3174(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3174_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3174_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3174_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3174_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3174_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3174_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3174_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3174_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3174_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3174_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3175
#define AGONY_PP_PRIVATE_EVAL_REC_3174_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3175(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3175_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3175_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3175_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3175_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3175_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3175_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3175_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3175_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3175_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3175_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3176
#define AGONY_PP_PRIVATE_EVAL_REC_3175_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3176(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3176_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3176_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3176_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3176_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3176_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3176_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3176_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3176_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3176_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3176_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3177
#define AGONY_PP_PRIVATE_EVAL_REC_3176_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3177(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3177_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3177_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3177_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3177_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3177_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3177_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3177_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3177_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3177_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3177_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3178
#define AGONY_PP_PRIVATE_EVAL_REC_3177_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3178(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3178_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3178_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3178_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3178_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3178_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3178_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3178_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3178_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3178_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3178_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3179
#define AGONY_PP_PRIVATE_EVAL_REC_3178_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3179(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3179_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3179_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3179_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3179_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3179_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3179_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3179_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3179_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3179_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3179_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3180
#define AGONY_PP_PRIVATE_EVAL_REC_3179_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3180(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3180_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3180_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3180_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3180_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3180_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3180_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3180_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3180_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3180_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3180_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3181
#define AGONY_PP_PRIVATE_EVAL_REC_3180_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3181(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3181_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3181_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3181_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3181_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3181_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3181_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3181_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3181_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3181_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3181_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3182
#define AGONY_PP_PRIVATE_EVAL_REC_3181_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3182(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3182_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3182_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3182_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3182_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3182_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3182_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3182_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3182_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3182_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3182_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3183
#define AGONY_PP_PRIVATE_EVAL_REC_3182_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3183(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3183_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3183_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3183_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3183_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3183_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3183_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3183_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3183_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3183_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3183_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3184
#define AGONY_PP_PRIVATE_EVAL_REC_3183_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3184(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3184_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3184_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3184_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3184_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3184_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3184_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3184_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3184_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3184_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3184_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3185
#define AGONY_PP_PRIVATE_EVAL_REC_3184_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3185(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3185_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3185_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3185_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3185_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3185_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3185_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3185_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3185_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3185_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3185_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3186
#define AGONY_PP_PRIVATE_EVAL_REC_3185_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3186(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3186_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3186_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3186_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3186_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3186_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3186_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3186_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3186_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3186_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3186_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3187
#define AGONY_PP_PRIVATE_EVAL_REC_3186_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3187(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3187_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3187_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3187_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3187_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3187_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3187_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3187_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3187_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3187_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3187_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3188
#define AGONY_PP_PRIVATE_EVAL_REC_3187_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3188(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3188_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3188_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3188_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3188_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3188_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3188_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3188_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3188_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3188_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3188_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3189
#define AGONY_PP_PRIVATE_EVAL_REC_3188_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3189(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3189_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3189_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3189_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3189_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3189_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3189_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3189_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3189_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3189_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3189_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3190
#define AGONY_PP_PRIVATE_EVAL_REC_3189_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3190(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3190_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3190_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3190_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3190_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3190_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3190_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3190_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3190_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3190_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3190_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3191
#define AGONY_PP_PRIVATE_EVAL_REC_3190_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3191(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3191_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3191_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3191_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3191_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3191_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3191_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3191_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3191_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3191_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3191_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3192
#define AGONY_PP_PRIVATE_EVAL_REC_3191_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3192(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3192_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3192_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3192_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3192_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3192_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3192_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3192_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3192_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3192_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3192_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3193
#define AGONY_PP_PRIVATE_EVAL_REC_3192_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3193(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3193_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3193_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3193_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3193_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3193_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3193_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3193_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3193_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3193_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3193_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3194
#define AGONY_PP_PRIVATE_EVAL_REC_3193_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3194(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3194_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3194_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3194_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3194_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3194_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3194_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3194_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3194_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3194_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3194_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3195
#define AGONY_PP_PRIVATE_EVAL_REC_3194_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3195(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3195_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3195_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3195_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3195_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3195_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3195_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3195_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3195_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3195_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3195_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3196
#define AGONY_PP_PRIVATE_EVAL_REC_3195_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3196(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3196_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3196_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3196_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3196_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3196_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3196_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3196_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3196_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3196_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3196_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3197
#define AGONY_PP_PRIVATE_EVAL_REC_3196_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3197(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3197_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3197_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3197_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3197_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3197_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3197_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3197_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3197_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3197_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3197_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3198
#define AGONY_PP_PRIVATE_EVAL_REC_3197_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3198(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3198_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3198_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3198_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3198_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3198_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3198_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3198_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3198_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3198_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3198_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3199
#define AGONY_PP_PRIVATE_EVAL_REC_3198_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3199(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3199_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3199_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3199_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3199_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3199_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3199_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3199_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3199_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3199_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3199_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3200
#define AGONY_PP_PRIVATE_EVAL_REC_3199_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3200(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3200_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3200_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3200_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3200_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3200_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3200_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3200_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3200_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3200_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3200_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3201
#define AGONY_PP_PRIVATE_EVAL_REC_3200_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3201(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3201_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3201_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3201_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3201_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3201_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3201_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3201_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3201_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3201_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3201_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3202
#define AGONY_PP_PRIVATE_EVAL_REC_3201_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3202(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3202_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3202_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3202_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3202_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3202_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3202_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3202_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3202_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3202_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3202_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3203
#define AGONY_PP_PRIVATE_EVAL_REC_3202_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3203(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3203_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3203_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3203_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3203_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3203_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3203_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3203_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3203_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3203_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3203_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3204
#define AGONY_PP_PRIVATE_EVAL_REC_3203_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3204(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3204_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3204_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3204_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3204_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3204_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3204_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3204_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3204_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3204_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3204_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3205
#define AGONY_PP_PRIVATE_EVAL_REC_3204_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3205(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3205_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3205_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3205_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3205_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3205_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3205_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3205_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3205_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3205_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3205_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3206
#define AGONY_PP_PRIVATE_EVAL_REC_3205_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3206(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3206_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3206_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3206_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3206_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3206_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3206_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3206_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3206_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3206_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3206_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3207
#define AGONY_PP_PRIVATE_EVAL_REC_3206_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3207(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3207_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3207_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3207_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3207_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3207_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3207_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3207_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3207_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3207_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3207_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3208
#define AGONY_PP_PRIVATE_EVAL_REC_3207_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3208(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3208_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3208_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3208_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3208_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3208_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3208_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3208_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3208_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3208_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3208_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3209
#define AGONY_PP_PRIVATE_EVAL_REC_3208_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3209(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3209_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3209_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3209_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3209_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3209_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3209_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3209_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3209_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3209_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3209_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3210
#define AGONY_PP_PRIVATE_EVAL_REC_3209_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3210(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3210_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3210_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3210_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3210_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3210_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3210_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3210_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3210_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3210_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3210_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3211
#define AGONY_PP_PRIVATE_EVAL_REC_3210_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3211(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3211_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3211_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3211_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3211_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3211_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3211_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3211_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3211_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3211_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3211_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3212
#define AGONY_PP_PRIVATE_EVAL_REC_3211_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3212(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3212_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3212_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3212_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3212_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3212_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3212_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3212_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3212_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3212_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3212_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3213
#define AGONY_PP_PRIVATE_EVAL_REC_3212_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3213(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3213_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3213_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3213_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3213_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3213_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3213_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3213_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3213_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3213_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3213_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3214
#define AGONY_PP_PRIVATE_EVAL_REC_3213_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3214(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3214_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3214_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3214_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3214_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3214_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3214_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3214_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3214_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3214_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3214_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3215
#define AGONY_PP_PRIVATE_EVAL_REC_3214_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3215(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3215_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3215_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3215_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3215_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3215_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3215_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3215_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3215_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3215_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3215_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3216
#define AGONY_PP_PRIVATE_EVAL_REC_3215_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3216(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3216_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3216_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3216_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3216_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3216_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3216_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3216_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3216_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3216_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3216_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3217
#define AGONY_PP_PRIVATE_EVAL_REC_3216_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3217(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3217_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3217_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3217_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3217_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3217_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3217_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3217_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3217_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3217_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3217_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3218
#define AGONY_PP_PRIVATE_EVAL_REC_3217_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3218(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3218_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3218_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3218_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3218_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3218_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3218_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3218_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3218_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3218_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3218_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3219
#define AGONY_PP_PRIVATE_EVAL_REC_3218_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3219(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3219_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3219_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3219_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3219_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3219_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3219_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3219_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3219_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3219_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3219_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3220
#define AGONY_PP_PRIVATE_EVAL_REC_3219_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3220(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3220_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3220_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3220_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3220_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3220_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3220_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3220_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3220_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3220_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3220_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3221
#define AGONY_PP_PRIVATE_EVAL_REC_3220_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3221(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3221_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3221_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3221_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3221_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3221_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3221_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3221_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3221_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3221_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3221_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3222
#define AGONY_PP_PRIVATE_EVAL_REC_3221_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3222(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3222_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3222_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3222_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3222_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3222_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3222_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3222_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3222_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3222_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3222_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3223
#define AGONY_PP_PRIVATE_EVAL_REC_3222_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3223(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3223_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3223_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3223_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3223_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3223_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3223_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3223_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3223_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3223_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3223_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3224
#define AGONY_PP_PRIVATE_EVAL_REC_3223_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3224(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3224_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3224_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3224_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3224_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3224_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3224_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3224_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3224_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3224_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3224_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3225
#define AGONY_PP_PRIVATE_EVAL_REC_3224_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3225(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3225_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3225_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3225_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3225_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3225_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3225_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3225_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3225_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3225_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3225_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3226
#define AGONY_PP_PRIVATE_EVAL_REC_3225_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3226(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3226_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3226_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3226_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3226_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3226_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3226_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3226_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3226_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3226_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3226_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3227
#define AGONY_PP_PRIVATE_EVAL_REC_3226_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3227(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3227_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3227_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3227_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3227_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3227_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3227_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3227_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3227_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3227_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3227_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3228
#define AGONY_PP_PRIVATE_EVAL_REC_3227_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3228(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3228_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3228_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3228_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3228_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3228_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3228_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3228_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3228_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3228_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3228_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3229
#define AGONY_PP_PRIVATE_EVAL_REC_3228_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3229(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3229_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3229_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3229_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3229_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3229_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3229_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3229_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3229_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3229_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3229_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3230
#define AGONY_PP_PRIVATE_EVAL_REC_3229_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3230(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3230_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3230_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3230_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3230_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3230_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3230_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3230_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3230_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3230_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3230_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3231
#define AGONY_PP_PRIVATE_EVAL_REC_3230_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3231(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3231_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3231_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3231_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3231_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3231_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3231_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3231_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3231_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3231_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3231_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3232
#define AGONY_PP_PRIVATE_EVAL_REC_3231_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3232(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3232_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3232_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3232_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3232_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3232_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3232_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3232_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3232_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3232_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3232_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3233
#define AGONY_PP_PRIVATE_EVAL_REC_3232_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3233(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3233_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3233_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3233_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3233_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3233_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3233_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3233_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3233_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3233_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3233_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3234
#define AGONY_PP_PRIVATE_EVAL_REC_3233_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3234(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3234_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3234_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3234_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3234_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3234_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3234_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3234_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3234_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3234_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3234_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3235
#define AGONY_PP_PRIVATE_EVAL_REC_3234_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3235(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3235_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3235_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3235_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3235_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3235_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3235_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3235_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3235_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3235_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3235_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3236
#define AGONY_PP_PRIVATE_EVAL_REC_3235_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3236(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3236_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3236_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3236_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3236_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3236_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3236_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3236_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3236_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3236_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3236_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3237
#define AGONY_PP_PRIVATE_EVAL_REC_3236_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3237(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3237_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3237_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3237_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3237_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3237_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3237_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3237_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3237_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3237_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3237_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3238
#define AGONY_PP_PRIVATE_EVAL_REC_3237_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3238(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3238_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3238_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3238_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3238_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3238_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3238_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3238_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3238_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3238_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3238_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3239
#define AGONY_PP_PRIVATE_EVAL_REC_3238_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3239(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3239_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3239_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3239_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3239_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3239_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3239_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3239_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3239_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3239_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3239_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3240
#define AGONY_PP_PRIVATE_EVAL_REC_3239_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3240(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3240_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3240_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3240_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3240_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3240_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3240_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3240_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3240_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3240_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3240_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3241
#define AGONY_PP_PRIVATE_EVAL_REC_3240_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3241(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3241_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3241_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3241_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3241_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3241_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3241_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3241_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3241_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3241_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3241_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3242
#define AGONY_PP_PRIVATE_EVAL_REC_3241_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3242(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3242_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3242_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3242_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3242_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3242_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3242_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3242_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3242_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3242_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3242_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3243
#define AGONY_PP_PRIVATE_EVAL_REC_3242_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3243(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3243_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3243_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3243_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3243_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3243_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3243_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3243_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3243_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3243_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3243_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3244
#define AGONY_PP_PRIVATE_EVAL_REC_3243_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3244(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3244_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3244_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3244_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3244_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3244_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3244_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3244_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3244_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3244_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3244_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3245
#define AGONY_PP_PRIVATE_EVAL_REC_3244_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3245(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3245_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3245_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3245_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3245_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3245_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3245_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3245_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3245_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3245_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3245_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3246
#define AGONY_PP_PRIVATE_EVAL_REC_3245_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3246(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3246_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3246_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3246_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3246_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3246_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3246_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3246_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3246_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3246_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3246_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3247
#define AGONY_PP_PRIVATE_EVAL_REC_3246_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3247(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3247_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3247_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3247_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3247_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3247_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3247_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3247_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3247_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3247_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3247_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3248
#define AGONY_PP_PRIVATE_EVAL_REC_3247_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3248(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3248_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3248_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3248_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3248_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3248_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3248_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3248_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3248_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3248_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3248_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3249
#define AGONY_PP_PRIVATE_EVAL_REC_3248_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3249(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3249_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3249_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3249_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3249_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3249_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3249_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3249_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3249_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3249_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3249_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3250
#define AGONY_PP_PRIVATE_EVAL_REC_3249_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3250(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3250_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3250_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3250_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3250_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3250_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3250_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3250_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3250_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3250_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3250_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3251
#define AGONY_PP_PRIVATE_EVAL_REC_3250_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3251(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3251_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3251_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3251_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3251_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3251_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3251_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3251_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3251_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3251_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3251_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3252
#define AGONY_PP_PRIVATE_EVAL_REC_3251_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3252(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3252_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3252_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3252_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3252_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3252_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3252_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3252_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3252_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3252_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3252_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3253
#define AGONY_PP_PRIVATE_EVAL_REC_3252_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3253(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3253_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3253_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3253_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3253_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3253_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3253_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3253_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3253_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3253_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3253_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3254
#define AGONY_PP_PRIVATE_EVAL_REC_3253_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3254(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3254_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3254_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3254_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3254_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3254_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3254_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3254_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3254_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3254_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3254_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3255
#define AGONY_PP_PRIVATE_EVAL_REC_3254_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3255(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3255_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3255_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3255_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3255_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3255_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3255_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3255_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3255_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3255_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3255_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3256
#define AGONY_PP_PRIVATE_EVAL_REC_3255_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3256(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3256_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3256_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3256_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3256_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3256_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3256_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3256_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3256_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3256_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3256_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3257
#define AGONY_PP_PRIVATE_EVAL_REC_3256_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3257(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3257_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3257_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3257_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3257_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3257_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3257_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3257_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3257_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3257_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3257_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3258
#define AGONY_PP_PRIVATE_EVAL_REC_3257_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3258(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3258_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3258_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3258_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3258_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3258_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3258_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3258_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3258_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3258_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3258_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3259
#define AGONY_PP_PRIVATE_EVAL_REC_3258_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3259(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3259_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3259_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3259_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3259_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3259_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3259_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3259_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3259_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3259_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3259_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3260
#define AGONY_PP_PRIVATE_EVAL_REC_3259_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3260(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3260_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3260_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3260_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3260_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3260_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3260_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3260_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3260_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3260_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3260_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3261
#define AGONY_PP_PRIVATE_EVAL_REC_3260_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3261(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3261_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3261_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3261_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3261_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3261_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3261_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3261_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3261_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3261_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3261_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3262
#define AGONY_PP_PRIVATE_EVAL_REC_3261_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3262(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3262_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3262_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3262_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3262_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3262_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3262_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3262_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3262_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3262_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3262_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3263
#define AGONY_PP_PRIVATE_EVAL_REC_3262_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3263(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3263_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3263_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3263_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3263_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3263_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3263_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3263_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3263_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3263_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3263_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3264
#define AGONY_PP_PRIVATE_EVAL_REC_3263_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3264(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3264_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3264_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3264_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3264_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3264_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3264_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3264_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3264_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3264_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3264_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3265
#define AGONY_PP_PRIVATE_EVAL_REC_3264_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3265(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3265_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3265_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3265_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3265_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3265_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3265_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3265_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3265_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3265_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3265_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3266
#define AGONY_PP_PRIVATE_EVAL_REC_3265_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3266(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3266_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3266_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3266_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3266_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3266_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3266_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3266_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3266_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3266_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3266_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3267
#define AGONY_PP_PRIVATE_EVAL_REC_3266_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3267(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3267_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3267_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3267_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3267_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3267_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3267_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3267_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3267_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3267_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3267_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3268
#define AGONY_PP_PRIVATE_EVAL_REC_3267_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3268(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3268_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3268_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3268_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3268_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3268_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3268_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3268_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3268_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3268_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3268_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3269
#define AGONY_PP_PRIVATE_EVAL_REC_3268_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3269(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3269_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3269_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3269_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3269_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3269_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3269_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3269_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3269_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3269_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3269_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3270
#define AGONY_PP_PRIVATE_EVAL_REC_3269_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3270(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3270_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3270_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3270_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3270_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3270_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3270_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3270_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3270_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3270_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3270_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3271
#define AGONY_PP_PRIVATE_EVAL_REC_3270_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3271(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3271_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3271_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3271_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3271_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3271_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3271_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3271_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3271_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3271_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3271_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3272
#define AGONY_PP_PRIVATE_EVAL_REC_3271_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3272(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3272_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3272_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3272_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3272_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3272_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3272_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3272_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3272_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3272_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3272_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3273
#define AGONY_PP_PRIVATE_EVAL_REC_3272_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3273(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3273_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3273_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3273_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3273_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3273_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3273_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3273_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3273_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3273_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3273_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3274
#define AGONY_PP_PRIVATE_EVAL_REC_3273_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3274(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3274_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3274_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3274_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3274_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3274_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3274_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3274_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3274_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3274_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3274_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3275
#define AGONY_PP_PRIVATE_EVAL_REC_3274_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3275(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3275_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3275_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3275_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3275_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3275_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3275_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3275_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3275_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3275_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3275_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3276
#define AGONY_PP_PRIVATE_EVAL_REC_3275_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3276(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3276_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3276_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3276_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3276_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3276_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3276_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3276_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3276_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3276_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3276_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3277
#define AGONY_PP_PRIVATE_EVAL_REC_3276_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3277(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3277_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3277_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3277_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3277_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3277_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3277_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3277_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3277_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3277_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3277_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3278
#define AGONY_PP_PRIVATE_EVAL_REC_3277_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3278(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3278_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3278_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3278_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3278_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3278_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3278_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3278_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3278_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3278_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3278_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3279
#define AGONY_PP_PRIVATE_EVAL_REC_3278_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3279(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3279_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3279_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3279_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3279_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3279_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3279_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3279_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3279_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3279_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3279_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3280
#define AGONY_PP_PRIVATE_EVAL_REC_3279_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3280(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3280_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3280_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3280_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3280_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3280_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3280_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3280_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3280_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3280_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3280_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3281
#define AGONY_PP_PRIVATE_EVAL_REC_3280_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3281(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3281_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3281_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3281_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3281_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3281_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3281_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3281_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3281_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3281_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3281_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3282
#define AGONY_PP_PRIVATE_EVAL_REC_3281_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3282(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3282_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3282_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3282_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3282_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3282_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3282_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3282_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3282_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3282_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3282_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3283
#define AGONY_PP_PRIVATE_EVAL_REC_3282_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3283(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3283_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3283_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3283_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3283_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3283_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3283_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3283_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3283_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3283_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3283_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3284
#define AGONY_PP_PRIVATE_EVAL_REC_3283_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3284(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3284_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3284_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3284_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3284_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3284_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3284_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3284_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3284_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3284_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3284_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3285
#define AGONY_PP_PRIVATE_EVAL_REC_3284_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3285(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3285_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3285_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3285_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3285_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3285_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3285_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3285_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3285_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3285_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3285_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3286
#define AGONY_PP_PRIVATE_EVAL_REC_3285_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3286(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3286_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3286_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3286_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3286_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3286_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3286_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3286_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3286_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3286_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3286_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3287
#define AGONY_PP_PRIVATE_EVAL_REC_3286_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3287(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3287_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3287_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3287_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3287_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3287_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3287_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3287_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3287_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3287_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3287_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3288
#define AGONY_PP_PRIVATE_EVAL_REC_3287_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3288(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3288_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3288_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3288_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3288_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3288_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3288_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3288_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3288_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3288_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3288_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3289
#define AGONY_PP_PRIVATE_EVAL_REC_3288_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3289(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3289_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3289_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3289_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3289_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3289_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3289_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3289_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3289_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3289_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3289_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3290
#define AGONY_PP_PRIVATE_EVAL_REC_3289_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3290(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3290_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3290_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3290_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3290_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3290_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3290_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3290_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3290_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3290_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3290_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3291
#define AGONY_PP_PRIVATE_EVAL_REC_3290_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3291(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3291_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3291_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3291_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3291_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3291_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3291_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3291_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3291_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3291_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3291_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3292
#define AGONY_PP_PRIVATE_EVAL_REC_3291_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3292(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3292_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3292_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3292_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3292_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3292_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3292_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3292_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3292_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3292_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3292_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3293
#define AGONY_PP_PRIVATE_EVAL_REC_3292_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3293(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3293_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3293_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3293_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3293_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3293_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3293_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3293_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3293_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3293_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3293_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3294
#define AGONY_PP_PRIVATE_EVAL_REC_3293_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3294(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3294_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3294_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3294_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3294_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3294_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3294_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3294_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3294_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3294_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3294_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3295
#define AGONY_PP_PRIVATE_EVAL_REC_3294_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3295(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3295_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3295_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3295_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3295_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3295_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3295_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3295_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3295_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3295_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3295_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3296
#define AGONY_PP_PRIVATE_EVAL_REC_3295_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3296(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3296_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3296_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3296_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3296_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3296_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3296_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3296_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3296_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3296_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3296_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3297
#define AGONY_PP_PRIVATE_EVAL_REC_3296_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3297(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3297_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3297_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3297_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3297_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3297_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3297_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3297_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3297_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3297_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3297_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3298
#define AGONY_PP_PRIVATE_EVAL_REC_3297_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3298(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3298_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3298_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3298_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3298_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3298_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3298_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3298_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3298_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3298_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3298_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3299
#define AGONY_PP_PRIVATE_EVAL_REC_3298_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3299(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3299_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3299_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3299_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3299_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3299_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3299_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3299_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3299_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3299_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3299_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3300
#define AGONY_PP_PRIVATE_EVAL_REC_3299_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3300(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3300_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3300_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3300_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3300_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3300_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3300_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3300_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3300_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3300_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3300_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3301
#define AGONY_PP_PRIVATE_EVAL_REC_3300_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3301(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3301_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3301_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3301_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3301_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3301_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3301_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3301_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3301_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3301_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3301_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3302
#define AGONY_PP_PRIVATE_EVAL_REC_3301_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3302(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3302_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3302_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3302_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3302_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3302_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3302_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3302_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3302_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3302_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3302_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3303
#define AGONY_PP_PRIVATE_EVAL_REC_3302_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3303(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3303_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3303_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3303_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3303_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3303_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3303_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3303_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3303_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3303_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3303_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3304
#define AGONY_PP_PRIVATE_EVAL_REC_3303_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3304(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3304_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3304_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3304_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3304_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3304_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3304_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3304_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3304_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3304_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3304_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3305
#define AGONY_PP_PRIVATE_EVAL_REC_3304_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3305(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3305_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3305_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3305_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3305_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3305_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3305_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3305_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3305_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3305_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3305_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3306
#define AGONY_PP_PRIVATE_EVAL_REC_3305_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3306(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3306_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3306_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3306_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3306_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3306_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3306_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3306_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3306_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3306_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3306_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3307
#define AGONY_PP_PRIVATE_EVAL_REC_3306_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3307(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3307_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3307_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3307_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3307_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3307_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3307_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3307_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3307_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3307_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3307_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3308
#define AGONY_PP_PRIVATE_EVAL_REC_3307_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3308(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3308_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3308_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3308_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3308_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3308_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3308_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3308_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3308_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3308_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3308_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3309
#define AGONY_PP_PRIVATE_EVAL_REC_3308_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3309(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3309_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3309_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3309_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3309_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3309_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3309_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3309_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3309_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3309_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3309_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3310
#define AGONY_PP_PRIVATE_EVAL_REC_3309_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3310(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3310_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3310_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3310_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3310_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3310_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3310_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3310_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3310_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3310_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3310_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3311
#define AGONY_PP_PRIVATE_EVAL_REC_3310_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3311(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3311_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3311_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3311_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3311_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3311_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3311_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3311_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3311_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3311_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3311_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3312
#define AGONY_PP_PRIVATE_EVAL_REC_3311_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3312(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3312_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3312_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3312_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3312_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3312_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3312_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3312_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3312_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3312_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3312_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3313
#define AGONY_PP_PRIVATE_EVAL_REC_3312_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3313(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3313_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3313_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3313_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3313_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3313_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3313_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3313_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3313_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3313_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3313_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3314
#define AGONY_PP_PRIVATE_EVAL_REC_3313_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3314(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3314_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3314_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3314_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3314_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3314_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3314_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3314_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3314_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3314_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3314_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3315
#define AGONY_PP_PRIVATE_EVAL_REC_3314_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3315(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3315_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3315_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3315_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3315_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3315_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3315_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3315_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3315_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3315_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3315_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3316
#define AGONY_PP_PRIVATE_EVAL_REC_3315_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3316(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3316_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3316_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3316_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3316_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3316_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3316_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3316_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3316_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3316_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3316_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3317
#define AGONY_PP_PRIVATE_EVAL_REC_3316_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3317(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3317_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3317_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3317_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3317_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3317_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3317_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3317_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3317_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3317_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3317_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3318
#define AGONY_PP_PRIVATE_EVAL_REC_3317_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3318(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3318_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3318_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3318_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3318_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3318_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3318_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3318_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3318_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3318_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3318_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3319
#define AGONY_PP_PRIVATE_EVAL_REC_3318_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3319(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3319_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3319_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3319_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3319_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3319_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3319_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3319_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3319_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3319_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3319_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3320
#define AGONY_PP_PRIVATE_EVAL_REC_3319_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3320(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3320_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3320_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3320_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3320_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3320_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3320_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3320_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3320_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3320_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3320_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3321
#define AGONY_PP_PRIVATE_EVAL_REC_3320_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3321(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3321_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3321_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3321_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3321_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3321_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3321_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3321_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3321_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3321_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3321_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3322
#define AGONY_PP_PRIVATE_EVAL_REC_3321_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3322(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3322_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3322_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3322_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3322_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3322_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3322_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3322_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3322_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3322_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3322_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3323
#define AGONY_PP_PRIVATE_EVAL_REC_3322_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3323(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3323_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3323_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3323_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3323_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3323_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3323_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3323_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3323_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3323_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3323_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3324
#define AGONY_PP_PRIVATE_EVAL_REC_3323_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3324(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3324_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3324_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3324_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3324_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3324_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3324_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3324_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3324_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3324_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3324_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3325
#define AGONY_PP_PRIVATE_EVAL_REC_3324_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3325(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3325_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3325_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3325_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3325_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3325_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3325_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3325_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3325_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3325_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3325_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3326
#define AGONY_PP_PRIVATE_EVAL_REC_3325_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3326(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3326_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3326_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3326_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3326_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3326_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3326_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3326_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3326_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3326_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3326_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3327
#define AGONY_PP_PRIVATE_EVAL_REC_3326_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3327(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3327_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3327_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3327_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3327_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3327_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3327_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3327_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3327_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3327_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3327_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3328
#define AGONY_PP_PRIVATE_EVAL_REC_3327_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3328(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3328_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3328_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3328_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3328_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3328_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3328_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3328_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3328_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3328_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3328_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3329
#define AGONY_PP_PRIVATE_EVAL_REC_3328_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3329(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3329_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3329_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3329_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3329_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3329_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3329_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3329_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3329_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3329_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3329_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3330
#define AGONY_PP_PRIVATE_EVAL_REC_3329_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3330(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3330_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3330_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3330_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3330_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3330_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3330_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3330_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3330_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3330_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3330_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3331
#define AGONY_PP_PRIVATE_EVAL_REC_3330_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3331(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3331_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3331_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3331_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3331_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3331_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3331_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3331_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3331_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3331_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3331_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3332
#define AGONY_PP_PRIVATE_EVAL_REC_3331_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3332(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3332_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3332_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3332_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3332_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3332_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3332_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3332_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3332_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3332_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3332_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3333
#define AGONY_PP_PRIVATE_EVAL_REC_3332_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3333(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3333_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3333_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3333_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3333_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3333_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3333_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3333_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3333_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3333_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3333_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3334
#define AGONY_PP_PRIVATE_EVAL_REC_3333_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3334(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3334_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3334_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3334_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3334_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3334_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3334_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3334_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3334_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3334_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3334_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3335
#define AGONY_PP_PRIVATE_EVAL_REC_3334_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3335(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3335_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3335_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3335_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3335_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3335_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3335_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3335_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3335_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3335_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3335_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3336
#define AGONY_PP_PRIVATE_EVAL_REC_3335_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3336(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3336_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3336_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3336_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3336_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3336_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3336_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3336_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3336_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3336_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3336_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3337
#define AGONY_PP_PRIVATE_EVAL_REC_3336_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3337(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3337_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3337_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3337_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3337_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3337_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3337_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3337_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3337_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3337_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3337_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3338
#define AGONY_PP_PRIVATE_EVAL_REC_3337_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3338(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3338_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3338_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3338_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3338_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3338_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3338_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3338_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3338_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3338_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3338_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3339
#define AGONY_PP_PRIVATE_EVAL_REC_3338_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3339(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3339_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3339_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3339_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3339_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3339_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3339_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3339_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3339_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3339_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3339_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3340
#define AGONY_PP_PRIVATE_EVAL_REC_3339_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3340(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3340_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3340_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3340_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3340_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3340_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3340_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3340_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3340_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3340_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3340_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3341
#define AGONY_PP_PRIVATE_EVAL_REC_3340_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3341(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3341_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3341_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3341_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3341_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3341_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3341_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3341_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3341_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3341_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3341_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3342
#define AGONY_PP_PRIVATE_EVAL_REC_3341_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3342(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3342_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3342_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3342_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3342_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3342_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3342_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3342_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3342_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3342_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3342_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3343
#define AGONY_PP_PRIVATE_EVAL_REC_3342_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3343(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3343_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3343_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3343_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3343_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3343_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3343_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3343_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3343_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3343_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3343_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3344
#define AGONY_PP_PRIVATE_EVAL_REC_3343_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3344(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3344_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3344_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3344_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3344_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3344_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3344_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3344_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3344_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3344_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3344_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3345
#define AGONY_PP_PRIVATE_EVAL_REC_3344_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3345(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3345_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3345_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3345_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3345_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3345_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3345_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3345_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3345_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3345_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3345_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3346
#define AGONY_PP_PRIVATE_EVAL_REC_3345_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3346(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3346_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3346_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3346_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3346_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3346_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3346_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3346_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3346_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3346_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3346_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3347
#define AGONY_PP_PRIVATE_EVAL_REC_3346_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3347(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3347_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3347_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3347_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3347_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3347_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3347_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3347_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3347_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3347_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3347_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3348
#define AGONY_PP_PRIVATE_EVAL_REC_3347_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3348(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3348_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3348_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3348_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3348_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3348_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3348_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3348_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3348_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3348_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3348_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3349
#define AGONY_PP_PRIVATE_EVAL_REC_3348_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3349(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3349_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3349_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3349_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3349_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3349_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3349_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3349_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3349_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3349_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3349_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3350
#define AGONY_PP_PRIVATE_EVAL_REC_3349_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3350(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3350_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3350_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3350_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3350_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3350_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3350_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3350_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3350_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3350_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3350_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3351
#define AGONY_PP_PRIVATE_EVAL_REC_3350_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3351(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3351_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3351_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3351_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3351_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3351_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3351_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3351_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3351_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3351_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3351_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3352
#define AGONY_PP_PRIVATE_EVAL_REC_3351_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3352(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3352_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3352_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3352_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3352_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3352_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3352_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3352_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3352_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3352_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3352_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3353
#define AGONY_PP_PRIVATE_EVAL_REC_3352_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3353(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3353_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3353_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3353_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3353_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3353_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3353_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3353_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3353_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3353_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3353_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3354
#define AGONY_PP_PRIVATE_EVAL_REC_3353_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3354(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3354_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3354_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3354_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3354_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3354_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3354_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3354_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3354_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3354_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3354_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3355
#define AGONY_PP_PRIVATE_EVAL_REC_3354_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3355(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3355_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3355_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3355_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3355_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3355_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3355_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3355_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3355_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3355_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3355_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3356
#define AGONY_PP_PRIVATE_EVAL_REC_3355_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3356(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3356_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3356_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3356_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3356_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3356_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3356_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3356_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3356_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3356_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3356_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3357
#define AGONY_PP_PRIVATE_EVAL_REC_3356_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3357(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3357_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3357_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3357_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3357_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3357_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3357_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3357_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3357_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3357_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3357_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3358
#define AGONY_PP_PRIVATE_EVAL_REC_3357_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3358(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3358_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3358_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3358_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3358_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3358_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3358_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3358_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3358_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3358_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3358_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3359
#define AGONY_PP_PRIVATE_EVAL_REC_3358_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3359(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3359_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3359_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3359_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3359_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3359_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3359_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3359_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3359_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3359_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3359_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3360
#define AGONY_PP_PRIVATE_EVAL_REC_3359_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3360(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3360_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3360_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3360_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3360_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3360_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3360_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3360_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3360_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3360_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3360_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3361
#define AGONY_PP_PRIVATE_EVAL_REC_3360_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3361(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3361_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3361_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3361_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3361_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3361_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3361_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3361_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3361_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3361_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3361_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3362
#define AGONY_PP_PRIVATE_EVAL_REC_3361_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3362(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3362_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3362_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3362_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3362_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3362_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3362_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3362_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3362_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3362_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3362_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3363
#define AGONY_PP_PRIVATE_EVAL_REC_3362_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3363(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3363_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3363_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3363_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3363_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3363_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3363_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3363_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3363_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3363_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3363_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3364
#define AGONY_PP_PRIVATE_EVAL_REC_3363_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3364(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3364_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3364_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3364_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3364_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3364_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3364_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3364_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3364_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3364_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3364_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3365
#define AGONY_PP_PRIVATE_EVAL_REC_3364_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3365(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3365_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3365_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3365_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3365_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3365_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3365_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3365_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3365_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3365_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3365_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3366
#define AGONY_PP_PRIVATE_EVAL_REC_3365_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3366(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3366_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3366_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3366_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3366_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3366_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3366_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3366_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3366_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3366_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3366_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3367
#define AGONY_PP_PRIVATE_EVAL_REC_3366_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3367(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3367_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3367_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3367_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3367_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3367_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3367_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3367_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3367_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3367_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3367_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3368
#define AGONY_PP_PRIVATE_EVAL_REC_3367_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3368(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3368_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3368_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3368_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3368_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3368_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3368_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3368_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3368_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3368_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3368_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3369
#define AGONY_PP_PRIVATE_EVAL_REC_3368_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3369(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3369_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3369_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3369_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3369_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3369_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3369_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3369_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3369_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3369_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3369_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3370
#define AGONY_PP_PRIVATE_EVAL_REC_3369_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3370(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3370_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3370_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3370_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3370_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3370_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3370_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3370_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3370_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3370_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3370_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3371
#define AGONY_PP_PRIVATE_EVAL_REC_3370_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3371(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3371_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3371_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3371_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3371_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3371_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3371_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3371_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3371_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3371_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3371_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3372
#define AGONY_PP_PRIVATE_EVAL_REC_3371_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3372(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3372_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3372_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3372_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3372_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3372_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3372_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3372_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3372_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3372_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3372_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3373
#define AGONY_PP_PRIVATE_EVAL_REC_3372_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3373(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3373_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3373_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3373_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3373_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3373_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3373_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3373_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3373_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3373_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3373_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3374
#define AGONY_PP_PRIVATE_EVAL_REC_3373_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3374(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3374_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3374_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3374_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3374_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3374_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3374_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3374_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3374_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3374_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3374_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3375
#define AGONY_PP_PRIVATE_EVAL_REC_3374_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3375(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3375_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3375_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3375_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3375_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3375_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3375_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3375_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3375_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3375_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3375_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3376
#define AGONY_PP_PRIVATE_EVAL_REC_3375_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3376(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3376_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3376_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3376_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3376_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3376_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3376_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3376_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3376_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3376_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3376_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3377
#define AGONY_PP_PRIVATE_EVAL_REC_3376_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3377(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3377_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3377_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3377_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3377_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3377_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3377_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3377_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3377_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3377_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3377_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3378
#define AGONY_PP_PRIVATE_EVAL_REC_3377_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3378(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3378_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3378_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3378_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3378_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3378_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3378_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3378_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3378_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3378_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3378_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3379
#define AGONY_PP_PRIVATE_EVAL_REC_3378_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3379(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3379_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3379_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3379_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3379_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3379_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3379_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3379_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3379_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3379_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3379_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3380
#define AGONY_PP_PRIVATE_EVAL_REC_3379_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3380(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3380_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3380_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3380_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3380_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3380_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3380_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3380_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3380_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3380_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3380_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3381
#define AGONY_PP_PRIVATE_EVAL_REC_3380_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3381(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3381_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3381_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3381_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3381_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3381_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3381_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3381_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3381_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3381_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3381_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3382
#define AGONY_PP_PRIVATE_EVAL_REC_3381_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3382(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3382_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3382_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3382_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3382_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3382_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3382_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3382_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3382_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3382_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3382_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3383
#define AGONY_PP_PRIVATE_EVAL_REC_3382_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3383(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3383_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3383_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3383_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3383_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3383_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3383_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3383_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3383_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3383_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3383_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3384
#define AGONY_PP_PRIVATE_EVAL_REC_3383_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3384(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3384_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3384_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3384_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3384_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3384_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3384_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3384_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3384_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3384_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3384_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3385
#define AGONY_PP_PRIVATE_EVAL_REC_3384_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3385(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3385_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3385_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3385_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3385_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3385_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3385_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3385_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3385_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3385_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3385_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3386
#define AGONY_PP_PRIVATE_EVAL_REC_3385_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3386(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3386_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3386_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3386_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3386_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3386_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3386_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3386_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3386_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3386_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3386_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3387
#define AGONY_PP_PRIVATE_EVAL_REC_3386_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3387(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3387_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3387_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3387_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3387_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3387_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3387_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3387_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3387_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3387_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3387_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3388
#define AGONY_PP_PRIVATE_EVAL_REC_3387_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3388(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3388_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3388_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3388_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3388_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3388_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3388_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3388_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3388_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3388_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3388_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3389
#define AGONY_PP_PRIVATE_EVAL_REC_3388_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3389(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3389_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3389_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3389_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3389_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3389_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3389_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3389_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3389_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3389_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3389_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3390
#define AGONY_PP_PRIVATE_EVAL_REC_3389_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3390(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3390_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3390_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3390_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3390_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3390_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3390_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3390_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3390_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3390_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3390_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3391
#define AGONY_PP_PRIVATE_EVAL_REC_3390_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3391(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3391_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3391_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3391_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3391_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3391_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3391_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3391_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3391_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3391_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3391_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3392
#define AGONY_PP_PRIVATE_EVAL_REC_3391_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3392(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3392_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3392_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3392_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3392_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3392_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3392_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3392_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3392_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3392_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3392_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3393
#define AGONY_PP_PRIVATE_EVAL_REC_3392_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3393(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3393_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3393_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3393_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3393_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3393_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3393_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3393_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3393_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3393_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3393_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3394
#define AGONY_PP_PRIVATE_EVAL_REC_3393_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3394(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3394_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3394_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3394_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3394_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3394_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3394_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3394_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3394_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3394_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3394_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3395
#define AGONY_PP_PRIVATE_EVAL_REC_3394_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3395(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3395_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3395_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3395_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3395_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3395_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3395_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3395_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3395_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3395_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3395_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3396
#define AGONY_PP_PRIVATE_EVAL_REC_3395_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3396(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3396_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3396_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3396_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3396_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3396_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3396_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3396_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3396_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3396_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3396_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3397
#define AGONY_PP_PRIVATE_EVAL_REC_3396_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3397(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3397_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3397_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3397_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3397_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3397_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3397_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3397_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3397_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3397_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3397_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3398
#define AGONY_PP_PRIVATE_EVAL_REC_3397_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3398(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3398_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3398_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3398_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3398_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3398_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3398_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3398_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3398_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3398_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3398_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3399
#define AGONY_PP_PRIVATE_EVAL_REC_3398_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3399(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3399_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3399_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3399_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3399_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3399_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3399_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3399_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3399_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3399_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3399_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3400
#define AGONY_PP_PRIVATE_EVAL_REC_3399_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3400(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3400_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3400_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3400_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3400_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3400_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3400_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3400_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3400_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3400_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3400_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3401
#define AGONY_PP_PRIVATE_EVAL_REC_3400_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3401(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3401_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3401_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3401_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3401_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3401_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3401_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3401_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3401_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3401_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3401_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3402
#define AGONY_PP_PRIVATE_EVAL_REC_3401_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3402(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3402_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3402_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3402_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3402_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3402_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3402_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3402_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3402_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3402_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3402_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3403
#define AGONY_PP_PRIVATE_EVAL_REC_3402_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3403(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3403_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3403_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3403_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3403_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3403_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3403_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3403_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3403_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3403_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3403_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3404
#define AGONY_PP_PRIVATE_EVAL_REC_3403_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3404(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3404_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3404_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3404_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3404_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3404_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3404_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3404_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3404_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3404_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3404_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3405
#define AGONY_PP_PRIVATE_EVAL_REC_3404_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3405(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3405_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3405_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3405_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3405_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3405_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3405_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3405_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3405_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3405_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3405_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3406
#define AGONY_PP_PRIVATE_EVAL_REC_3405_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3406(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3406_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3406_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3406_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3406_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3406_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3406_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3406_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3406_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3406_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3406_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3407
#define AGONY_PP_PRIVATE_EVAL_REC_3406_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3407(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3407_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3407_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3407_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3407_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3407_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3407_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3407_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3407_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3407_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3407_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3408
#define AGONY_PP_PRIVATE_EVAL_REC_3407_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3408(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3408_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3408_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3408_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3408_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3408_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3408_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3408_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3408_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3408_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3408_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3409
#define AGONY_PP_PRIVATE_EVAL_REC_3408_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3409(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3409_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3409_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3409_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3409_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3409_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3409_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3409_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3409_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3409_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3409_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3410
#define AGONY_PP_PRIVATE_EVAL_REC_3409_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3410(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3410_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3410_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3410_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3410_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3410_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3410_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3410_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3410_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3410_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3410_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3411
#define AGONY_PP_PRIVATE_EVAL_REC_3410_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3411(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3411_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3411_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3411_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3411_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3411_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3411_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3411_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3411_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3411_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3411_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3412
#define AGONY_PP_PRIVATE_EVAL_REC_3411_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3412(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3412_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3412_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3412_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3412_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3412_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3412_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3412_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3412_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3412_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3412_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3413
#define AGONY_PP_PRIVATE_EVAL_REC_3412_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3413(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3413_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3413_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3413_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3413_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3413_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3413_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3413_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3413_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3413_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3413_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3414
#define AGONY_PP_PRIVATE_EVAL_REC_3413_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3414(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3414_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3414_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3414_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3414_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3414_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3414_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3414_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3414_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3414_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3414_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3415
#define AGONY_PP_PRIVATE_EVAL_REC_3414_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3415(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3415_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3415_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3415_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3415_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3415_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3415_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3415_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3415_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3415_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3415_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3416
#define AGONY_PP_PRIVATE_EVAL_REC_3415_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3416(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3416_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3416_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3416_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3416_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3416_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3416_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3416_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3416_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3416_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3416_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3417
#define AGONY_PP_PRIVATE_EVAL_REC_3416_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3417(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3417_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3417_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3417_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3417_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3417_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3417_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3417_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3417_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3417_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3417_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3418
#define AGONY_PP_PRIVATE_EVAL_REC_3417_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3418(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3418_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3418_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3418_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3418_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3418_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3418_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3418_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3418_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3418_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3418_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3419
#define AGONY_PP_PRIVATE_EVAL_REC_3418_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3419(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3419_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3419_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3419_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3419_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3419_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3419_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3419_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3419_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3419_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3419_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3420
#define AGONY_PP_PRIVATE_EVAL_REC_3419_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3420(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3420_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3420_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3420_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3420_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3420_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3420_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3420_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3420_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3420_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3420_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3421
#define AGONY_PP_PRIVATE_EVAL_REC_3420_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3421(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3421_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3421_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3421_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3421_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3421_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3421_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3421_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3421_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3421_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3421_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3422
#define AGONY_PP_PRIVATE_EVAL_REC_3421_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3422(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3422_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3422_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3422_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3422_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3422_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3422_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3422_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3422_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3422_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3422_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3423
#define AGONY_PP_PRIVATE_EVAL_REC_3422_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3423(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3423_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3423_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3423_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3423_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3423_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3423_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3423_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3423_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3423_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3423_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3424
#define AGONY_PP_PRIVATE_EVAL_REC_3423_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3424(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3424_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3424_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3424_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3424_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3424_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3424_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3424_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3424_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3424_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3424_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3425
#define AGONY_PP_PRIVATE_EVAL_REC_3424_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3425(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3425_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3425_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3425_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3425_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3425_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3425_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3425_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3425_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3425_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3425_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3426
#define AGONY_PP_PRIVATE_EVAL_REC_3425_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3426(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3426_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3426_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3426_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3426_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3426_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3426_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3426_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3426_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3426_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3426_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3427
#define AGONY_PP_PRIVATE_EVAL_REC_3426_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3427(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3427_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3427_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3427_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3427_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3427_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3427_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3427_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3427_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3427_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3427_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3428
#define AGONY_PP_PRIVATE_EVAL_REC_3427_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3428(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3428_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3428_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3428_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3428_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3428_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3428_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3428_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3428_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3428_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3428_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3429
#define AGONY_PP_PRIVATE_EVAL_REC_3428_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3429(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3429_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3429_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3429_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3429_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3429_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3429_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3429_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3429_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3429_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3429_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3430
#define AGONY_PP_PRIVATE_EVAL_REC_3429_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3430(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3430_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3430_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3430_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3430_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3430_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3430_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3430_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3430_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3430_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3430_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3431
#define AGONY_PP_PRIVATE_EVAL_REC_3430_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3431(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3431_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3431_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3431_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3431_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3431_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3431_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3431_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3431_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3431_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3431_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3432
#define AGONY_PP_PRIVATE_EVAL_REC_3431_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3432(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3432_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3432_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3432_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3432_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3432_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3432_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3432_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3432_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3432_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3432_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3433
#define AGONY_PP_PRIVATE_EVAL_REC_3432_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3433(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3433_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3433_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3433_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3433_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3433_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3433_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3433_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3433_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3433_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3433_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3434
#define AGONY_PP_PRIVATE_EVAL_REC_3433_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3434(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3434_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3434_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3434_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3434_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3434_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3434_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3434_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3434_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3434_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3434_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3435
#define AGONY_PP_PRIVATE_EVAL_REC_3434_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3435(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3435_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3435_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3435_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3435_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3435_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3435_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3435_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3435_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3435_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3435_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3436
#define AGONY_PP_PRIVATE_EVAL_REC_3435_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3436(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3436_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3436_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3436_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3436_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3436_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3436_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3436_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3436_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3436_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3436_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3437
#define AGONY_PP_PRIVATE_EVAL_REC_3436_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3437(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3437_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3437_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3437_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3437_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3437_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3437_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3437_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3437_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3437_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3437_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3438
#define AGONY_PP_PRIVATE_EVAL_REC_3437_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3438(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3438_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3438_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3438_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3438_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3438_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3438_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3438_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3438_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3438_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3438_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3439
#define AGONY_PP_PRIVATE_EVAL_REC_3438_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3439(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3439_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3439_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3439_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3439_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3439_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3439_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3439_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3439_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3439_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3439_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3440
#define AGONY_PP_PRIVATE_EVAL_REC_3439_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3440(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3440_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3440_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3440_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3440_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3440_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3440_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3440_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3440_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3440_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3440_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3441
#define AGONY_PP_PRIVATE_EVAL_REC_3440_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3441(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3441_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3441_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3441_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3441_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3441_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3441_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3441_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3441_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3441_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3441_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3442
#define AGONY_PP_PRIVATE_EVAL_REC_3441_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3442(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3442_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3442_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3442_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3442_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3442_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3442_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3442_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3442_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3442_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3442_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3443
#define AGONY_PP_PRIVATE_EVAL_REC_3442_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3443(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3443_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3443_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3443_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3443_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3443_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3443_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3443_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3443_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3443_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3443_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3444
#define AGONY_PP_PRIVATE_EVAL_REC_3443_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3444(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3444_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3444_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3444_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3444_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3444_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3444_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3444_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3444_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3444_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3444_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3445
#define AGONY_PP_PRIVATE_EVAL_REC_3444_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3445(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3445_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3445_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3445_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3445_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3445_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3445_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3445_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3445_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3445_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3445_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3446
#define AGONY_PP_PRIVATE_EVAL_REC_3445_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3446(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3446_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3446_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3446_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3446_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3446_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3446_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3446_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3446_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3446_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3446_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3447
#define AGONY_PP_PRIVATE_EVAL_REC_3446_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3447(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3447_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3447_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3447_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3447_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3447_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3447_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3447_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3447_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3447_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3447_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3448
#define AGONY_PP_PRIVATE_EVAL_REC_3447_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3448(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3448_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3448_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3448_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3448_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3448_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3448_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3448_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3448_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3448_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3448_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3449
#define AGONY_PP_PRIVATE_EVAL_REC_3448_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3449(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3449_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3449_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3449_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3449_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3449_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3449_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3449_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3449_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3449_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3449_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3450
#define AGONY_PP_PRIVATE_EVAL_REC_3449_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3450(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3450_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3450_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3450_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3450_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3450_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3450_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3450_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3450_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3450_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3450_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3451
#define AGONY_PP_PRIVATE_EVAL_REC_3450_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3451(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3451_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3451_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3451_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3451_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3451_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3451_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3451_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3451_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3451_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3451_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3452
#define AGONY_PP_PRIVATE_EVAL_REC_3451_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3452(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3452_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3452_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3452_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3452_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3452_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3452_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3452_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3452_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3452_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3452_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3453
#define AGONY_PP_PRIVATE_EVAL_REC_3452_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3453(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3453_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3453_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3453_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3453_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3453_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3453_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3453_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3453_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3453_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3453_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3454
#define AGONY_PP_PRIVATE_EVAL_REC_3453_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3454(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3454_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3454_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3454_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3454_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3454_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3454_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3454_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3454_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3454_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3454_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3455
#define AGONY_PP_PRIVATE_EVAL_REC_3454_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3455(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3455_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3455_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3455_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3455_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3455_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3455_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3455_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3455_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3455_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3455_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3456
#define AGONY_PP_PRIVATE_EVAL_REC_3455_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3456(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3456_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3456_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3456_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3456_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3456_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3456_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3456_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3456_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3456_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3456_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3457
#define AGONY_PP_PRIVATE_EVAL_REC_3456_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3457(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3457_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3457_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3457_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3457_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3457_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3457_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3457_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3457_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3457_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3457_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3458
#define AGONY_PP_PRIVATE_EVAL_REC_3457_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3458(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3458_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3458_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3458_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3458_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3458_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3458_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3458_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3458_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3458_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3458_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3459
#define AGONY_PP_PRIVATE_EVAL_REC_3458_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3459(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3459_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3459_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3459_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3459_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3459_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3459_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3459_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3459_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3459_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3459_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3460
#define AGONY_PP_PRIVATE_EVAL_REC_3459_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3460(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3460_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3460_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3460_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3460_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3460_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3460_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3460_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3460_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3460_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3460_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3461
#define AGONY_PP_PRIVATE_EVAL_REC_3460_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3461(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3461_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3461_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3461_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3461_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3461_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3461_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3461_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3461_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3461_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3461_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3462
#define AGONY_PP_PRIVATE_EVAL_REC_3461_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3462(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3462_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3462_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3462_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3462_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3462_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3462_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3462_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3462_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3462_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3462_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3463
#define AGONY_PP_PRIVATE_EVAL_REC_3462_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3463(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3463_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3463_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3463_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3463_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3463_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3463_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3463_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3463_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3463_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3463_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3464
#define AGONY_PP_PRIVATE_EVAL_REC_3463_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3464(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3464_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3464_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3464_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3464_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3464_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3464_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3464_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3464_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3464_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3464_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3465
#define AGONY_PP_PRIVATE_EVAL_REC_3464_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3465(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3465_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3465_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3465_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3465_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3465_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3465_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3465_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3465_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3465_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3465_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3466
#define AGONY_PP_PRIVATE_EVAL_REC_3465_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3466(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3466_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3466_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3466_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3466_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3466_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3466_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3466_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3466_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3466_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3466_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3467
#define AGONY_PP_PRIVATE_EVAL_REC_3466_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3467(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3467_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3467_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3467_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3467_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3467_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3467_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3467_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3467_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3467_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3467_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3468
#define AGONY_PP_PRIVATE_EVAL_REC_3467_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3468(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3468_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3468_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3468_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3468_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3468_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3468_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3468_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3468_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3468_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3468_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3469
#define AGONY_PP_PRIVATE_EVAL_REC_3468_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3469(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3469_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3469_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3469_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3469_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3469_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3469_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3469_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3469_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3469_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3469_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3470
#define AGONY_PP_PRIVATE_EVAL_REC_3469_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3470(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3470_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3470_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3470_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3470_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3470_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3470_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3470_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3470_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3470_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3470_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3471
#define AGONY_PP_PRIVATE_EVAL_REC_3470_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3471(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3471_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3471_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3471_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3471_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3471_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3471_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3471_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3471_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3471_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3471_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3472
#define AGONY_PP_PRIVATE_EVAL_REC_3471_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3472(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3472_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3472_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3472_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3472_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3472_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3472_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3472_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3472_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3472_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3472_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3473
#define AGONY_PP_PRIVATE_EVAL_REC_3472_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3473(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3473_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3473_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3473_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3473_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3473_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3473_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3473_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3473_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3473_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3473_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3474
#define AGONY_PP_PRIVATE_EVAL_REC_3473_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3474(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3474_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3474_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3474_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3474_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3474_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3474_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3474_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3474_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3474_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3474_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3475
#define AGONY_PP_PRIVATE_EVAL_REC_3474_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3475(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3475_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3475_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3475_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3475_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3475_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3475_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3475_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3475_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3475_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3475_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3476
#define AGONY_PP_PRIVATE_EVAL_REC_3475_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3476(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3476_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3476_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3476_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3476_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3476_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3476_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3476_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3476_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3476_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3476_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3477
#define AGONY_PP_PRIVATE_EVAL_REC_3476_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3477(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3477_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3477_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3477_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3477_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3477_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3477_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3477_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3477_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3477_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3477_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3478
#define AGONY_PP_PRIVATE_EVAL_REC_3477_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3478(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3478_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3478_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3478_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3478_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3478_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3478_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3478_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3478_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3478_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3478_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3479
#define AGONY_PP_PRIVATE_EVAL_REC_3478_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3479(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3479_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3479_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3479_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3479_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3479_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3479_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3479_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3479_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3479_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3479_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3480
#define AGONY_PP_PRIVATE_EVAL_REC_3479_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3480(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3480_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3480_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3480_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3480_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3480_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3480_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3480_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3480_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3480_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3480_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3481
#define AGONY_PP_PRIVATE_EVAL_REC_3480_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3481(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3481_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3481_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3481_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3481_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3481_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3481_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3481_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3481_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3481_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3481_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3482
#define AGONY_PP_PRIVATE_EVAL_REC_3481_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3482(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3482_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3482_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3482_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3482_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3482_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3482_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3482_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3482_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3482_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3482_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3483
#define AGONY_PP_PRIVATE_EVAL_REC_3482_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3483(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3483_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3483_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3483_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3483_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3483_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3483_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3483_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3483_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3483_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3483_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3484
#define AGONY_PP_PRIVATE_EVAL_REC_3483_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3484(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3484_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3484_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3484_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3484_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3484_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3484_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3484_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3484_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3484_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3484_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3485
#define AGONY_PP_PRIVATE_EVAL_REC_3484_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3485(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3485_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3485_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3485_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3485_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3485_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3485_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3485_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3485_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3485_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3485_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3486
#define AGONY_PP_PRIVATE_EVAL_REC_3485_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3486(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3486_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3486_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3486_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3486_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3486_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3486_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3486_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3486_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3486_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3486_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3487
#define AGONY_PP_PRIVATE_EVAL_REC_3486_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3487(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3487_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3487_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3487_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3487_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3487_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3487_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3487_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3487_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3487_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3487_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3488
#define AGONY_PP_PRIVATE_EVAL_REC_3487_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3488(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3488_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3488_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3488_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3488_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3488_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3488_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3488_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3488_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3488_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3488_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3489
#define AGONY_PP_PRIVATE_EVAL_REC_3488_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3489(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3489_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3489_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3489_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3489_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3489_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3489_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3489_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3489_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3489_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3489_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3490
#define AGONY_PP_PRIVATE_EVAL_REC_3489_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3490(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3490_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3490_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3490_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3490_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3490_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3490_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3490_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3490_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3490_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3490_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3491
#define AGONY_PP_PRIVATE_EVAL_REC_3490_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3491(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3491_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3491_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3491_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3491_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3491_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3491_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3491_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3491_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3491_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3491_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3492
#define AGONY_PP_PRIVATE_EVAL_REC_3491_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3492(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3492_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3492_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3492_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3492_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3492_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3492_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3492_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3492_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3492_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3492_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3493
#define AGONY_PP_PRIVATE_EVAL_REC_3492_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3493(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3493_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3493_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3493_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3493_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3493_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3493_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3493_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3493_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3493_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3493_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3494
#define AGONY_PP_PRIVATE_EVAL_REC_3493_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3494(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3494_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3494_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3494_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3494_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3494_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3494_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3494_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3494_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3494_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3494_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3495
#define AGONY_PP_PRIVATE_EVAL_REC_3494_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3495(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3495_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3495_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3495_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3495_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3495_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3495_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3495_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3495_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3495_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3495_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3496
#define AGONY_PP_PRIVATE_EVAL_REC_3495_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3496(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3496_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3496_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3496_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3496_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3496_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3496_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3496_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3496_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3496_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3496_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3497
#define AGONY_PP_PRIVATE_EVAL_REC_3496_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3497(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3497_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3497_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3497_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3497_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3497_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3497_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3497_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3497_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3497_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3497_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3498
#define AGONY_PP_PRIVATE_EVAL_REC_3497_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3498(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3498_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3498_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3498_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3498_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3498_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3498_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3498_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3498_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3498_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3498_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3499
#define AGONY_PP_PRIVATE_EVAL_REC_3498_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3499(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3499_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3499_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3499_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3499_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3499_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3499_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3499_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3499_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3499_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3499_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3500
#define AGONY_PP_PRIVATE_EVAL_REC_3499_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3500(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3500_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3500_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3500_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3500_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3500_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3500_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3500_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3500_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3500_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3500_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3501
#define AGONY_PP_PRIVATE_EVAL_REC_3500_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3501(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3501_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3501_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3501_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3501_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3501_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3501_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3501_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3501_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3501_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3501_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3502
#define AGONY_PP_PRIVATE_EVAL_REC_3501_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3502(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3502_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3502_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3502_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3502_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3502_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3502_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3502_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3502_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3502_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3502_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3503
#define AGONY_PP_PRIVATE_EVAL_REC_3502_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3503(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3503_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3503_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3503_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3503_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3503_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3503_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3503_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3503_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3503_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3503_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3504
#define AGONY_PP_PRIVATE_EVAL_REC_3503_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3504(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3504_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3504_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3504_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3504_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3504_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3504_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3504_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3504_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3504_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3504_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3505
#define AGONY_PP_PRIVATE_EVAL_REC_3504_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3505(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3505_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3505_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3505_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3505_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3505_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3505_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3505_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3505_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3505_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3505_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3506
#define AGONY_PP_PRIVATE_EVAL_REC_3505_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3506(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3506_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3506_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3506_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3506_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3506_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3506_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3506_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3506_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3506_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3506_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3507
#define AGONY_PP_PRIVATE_EVAL_REC_3506_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3507(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3507_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3507_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3507_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3507_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3507_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3507_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3507_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3507_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3507_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3507_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3508
#define AGONY_PP_PRIVATE_EVAL_REC_3507_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3508(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3508_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3508_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3508_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3508_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3508_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3508_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3508_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3508_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3508_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3508_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3509
#define AGONY_PP_PRIVATE_EVAL_REC_3508_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3509(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3509_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3509_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3509_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3509_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3509_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3509_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3509_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3509_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3509_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3509_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3510
#define AGONY_PP_PRIVATE_EVAL_REC_3509_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3510(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3510_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3510_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3510_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3510_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3510_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3510_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3510_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3510_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3510_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3510_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3511
#define AGONY_PP_PRIVATE_EVAL_REC_3510_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3511(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3511_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3511_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3511_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3511_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3511_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3511_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3511_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3511_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3511_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3511_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3512
#define AGONY_PP_PRIVATE_EVAL_REC_3511_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3512(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3512_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3512_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3512_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3512_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3512_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3512_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3512_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3512_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3512_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3512_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3513
#define AGONY_PP_PRIVATE_EVAL_REC_3512_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3513(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3513_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3513_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3513_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3513_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3513_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3513_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3513_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3513_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3513_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3513_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3514
#define AGONY_PP_PRIVATE_EVAL_REC_3513_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3514(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3514_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3514_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3514_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3514_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3514_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3514_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3514_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3514_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3514_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3514_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3515
#define AGONY_PP_PRIVATE_EVAL_REC_3514_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3515(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3515_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3515_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3515_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3515_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3515_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3515_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3515_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3515_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3515_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3515_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3516
#define AGONY_PP_PRIVATE_EVAL_REC_3515_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3516(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3516_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3516_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3516_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3516_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3516_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3516_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3516_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3516_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3516_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3516_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3517
#define AGONY_PP_PRIVATE_EVAL_REC_3516_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3517(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3517_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3517_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3517_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3517_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3517_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3517_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3517_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3517_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3517_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3517_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3518
#define AGONY_PP_PRIVATE_EVAL_REC_3517_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3518(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3518_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3518_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3518_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3518_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3518_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3518_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3518_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3518_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3518_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3518_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3519
#define AGONY_PP_PRIVATE_EVAL_REC_3518_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3519(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3519_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3519_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3519_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3519_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3519_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3519_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3519_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3519_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3519_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3519_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3520
#define AGONY_PP_PRIVATE_EVAL_REC_3519_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3520(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3520_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3520_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3520_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3520_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3520_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3520_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3520_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3520_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3520_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3520_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3521
#define AGONY_PP_PRIVATE_EVAL_REC_3520_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3521(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3521_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3521_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3521_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3521_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3521_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3521_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3521_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3521_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3521_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3521_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3522
#define AGONY_PP_PRIVATE_EVAL_REC_3521_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3522(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3522_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3522_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3522_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3522_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3522_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3522_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3522_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3522_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3522_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3522_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3523
#define AGONY_PP_PRIVATE_EVAL_REC_3522_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3523(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3523_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3523_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3523_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3523_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3523_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3523_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3523_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3523_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3523_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3523_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3524
#define AGONY_PP_PRIVATE_EVAL_REC_3523_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3524(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3524_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3524_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3524_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3524_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3524_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3524_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3524_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3524_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3524_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3524_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3525
#define AGONY_PP_PRIVATE_EVAL_REC_3524_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3525(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3525_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3525_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3525_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3525_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3525_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3525_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3525_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3525_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3525_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3525_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3526
#define AGONY_PP_PRIVATE_EVAL_REC_3525_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3526(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3526_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3526_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3526_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3526_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3526_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3526_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3526_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3526_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3526_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3526_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3527
#define AGONY_PP_PRIVATE_EVAL_REC_3526_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3527(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3527_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3527_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3527_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3527_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3527_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3527_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3527_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3527_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3527_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3527_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3528
#define AGONY_PP_PRIVATE_EVAL_REC_3527_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3528(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3528_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3528_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3528_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3528_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3528_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3528_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3528_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3528_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3528_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3528_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3529
#define AGONY_PP_PRIVATE_EVAL_REC_3528_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3529(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3529_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3529_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3529_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3529_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3529_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3529_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3529_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3529_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3529_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3529_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3530
#define AGONY_PP_PRIVATE_EVAL_REC_3529_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3530(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3530_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3530_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3530_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3530_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3530_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3530_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3530_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3530_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3530_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3530_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3531
#define AGONY_PP_PRIVATE_EVAL_REC_3530_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3531(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3531_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3531_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3531_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3531_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3531_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3531_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3531_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3531_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3531_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3531_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3532
#define AGONY_PP_PRIVATE_EVAL_REC_3531_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3532(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3532_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3532_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3532_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3532_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3532_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3532_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3532_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3532_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3532_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3532_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3533
#define AGONY_PP_PRIVATE_EVAL_REC_3532_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3533(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3533_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3533_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3533_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3533_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3533_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3533_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3533_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3533_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3533_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3533_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3534
#define AGONY_PP_PRIVATE_EVAL_REC_3533_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3534(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3534_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3534_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3534_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3534_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3534_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3534_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3534_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3534_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3534_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3534_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3535
#define AGONY_PP_PRIVATE_EVAL_REC_3534_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3535(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3535_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3535_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3535_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3535_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3535_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3535_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3535_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3535_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3535_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3535_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3536
#define AGONY_PP_PRIVATE_EVAL_REC_3535_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3536(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3536_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3536_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3536_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3536_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3536_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3536_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3536_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3536_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3536_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3536_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3537
#define AGONY_PP_PRIVATE_EVAL_REC_3536_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3537(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3537_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3537_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3537_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3537_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3537_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3537_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3537_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3537_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3537_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3537_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3538
#define AGONY_PP_PRIVATE_EVAL_REC_3537_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3538(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3538_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3538_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3538_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3538_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3538_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3538_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3538_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3538_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3538_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3538_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3539
#define AGONY_PP_PRIVATE_EVAL_REC_3538_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3539(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3539_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3539_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3539_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3539_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3539_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3539_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3539_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3539_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3539_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3539_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3540
#define AGONY_PP_PRIVATE_EVAL_REC_3539_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3540(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3540_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3540_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3540_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3540_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3540_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3540_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3540_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3540_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3540_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3540_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3541
#define AGONY_PP_PRIVATE_EVAL_REC_3540_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3541(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3541_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3541_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3541_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3541_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3541_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3541_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3541_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3541_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3541_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3541_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3542
#define AGONY_PP_PRIVATE_EVAL_REC_3541_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3542(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3542_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3542_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3542_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3542_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3542_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3542_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3542_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3542_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3542_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3542_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3543
#define AGONY_PP_PRIVATE_EVAL_REC_3542_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3543(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3543_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3543_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3543_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3543_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3543_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3543_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3543_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3543_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3543_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3543_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3544
#define AGONY_PP_PRIVATE_EVAL_REC_3543_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3544(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3544_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3544_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3544_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3544_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3544_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3544_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3544_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3544_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3544_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3544_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3545
#define AGONY_PP_PRIVATE_EVAL_REC_3544_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3545(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3545_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3545_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3545_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3545_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3545_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3545_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3545_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3545_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3545_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3545_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3546
#define AGONY_PP_PRIVATE_EVAL_REC_3545_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3546(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3546_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3546_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3546_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3546_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3546_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3546_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3546_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3546_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3546_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3546_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3547
#define AGONY_PP_PRIVATE_EVAL_REC_3546_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3547(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3547_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3547_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3547_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3547_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3547_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3547_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3547_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3547_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3547_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3547_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3548
#define AGONY_PP_PRIVATE_EVAL_REC_3547_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3548(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3548_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3548_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3548_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3548_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3548_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3548_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3548_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3548_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3548_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3548_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3549
#define AGONY_PP_PRIVATE_EVAL_REC_3548_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3549(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3549_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3549_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3549_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3549_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3549_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3549_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3549_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3549_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3549_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3549_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3550
#define AGONY_PP_PRIVATE_EVAL_REC_3549_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3550(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3550_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3550_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3550_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3550_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3550_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3550_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3550_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3550_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3550_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3550_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3551
#define AGONY_PP_PRIVATE_EVAL_REC_3550_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3551(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3551_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3551_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3551_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3551_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3551_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3551_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3551_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3551_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3551_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3551_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3552
#define AGONY_PP_PRIVATE_EVAL_REC_3551_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3552(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3552_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3552_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3552_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3552_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3552_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3552_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3552_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3552_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3552_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3552_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3553
#define AGONY_PP_PRIVATE_EVAL_REC_3552_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3553(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3553_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3553_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3553_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3553_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3553_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3553_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3553_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3553_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3553_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3553_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3554
#define AGONY_PP_PRIVATE_EVAL_REC_3553_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3554(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3554_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3554_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3554_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3554_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3554_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3554_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3554_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3554_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3554_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3554_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3555
#define AGONY_PP_PRIVATE_EVAL_REC_3554_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3555(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3555_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3555_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3555_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3555_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3555_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3555_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3555_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3555_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3555_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3555_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3556
#define AGONY_PP_PRIVATE_EVAL_REC_3555_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3556(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3556_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3556_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3556_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3556_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3556_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3556_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3556_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3556_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3556_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3556_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3557
#define AGONY_PP_PRIVATE_EVAL_REC_3556_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3557(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3557_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3557_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3557_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3557_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3557_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3557_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3557_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3557_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3557_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3557_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3558
#define AGONY_PP_PRIVATE_EVAL_REC_3557_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3558(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3558_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3558_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3558_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3558_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3558_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3558_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3558_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3558_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3558_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3558_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3559
#define AGONY_PP_PRIVATE_EVAL_REC_3558_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3559(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3559_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3559_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3559_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3559_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3559_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3559_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3559_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3559_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3559_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3559_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3560
#define AGONY_PP_PRIVATE_EVAL_REC_3559_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3560(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3560_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3560_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3560_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3560_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3560_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3560_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3560_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3560_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3560_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3560_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3561
#define AGONY_PP_PRIVATE_EVAL_REC_3560_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3561(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3561_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3561_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3561_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3561_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3561_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3561_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3561_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3561_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3561_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3561_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3562
#define AGONY_PP_PRIVATE_EVAL_REC_3561_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3562(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3562_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3562_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3562_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3562_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3562_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3562_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3562_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3562_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3562_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3562_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3563
#define AGONY_PP_PRIVATE_EVAL_REC_3562_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3563(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3563_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3563_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3563_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3563_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3563_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3563_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3563_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3563_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3563_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3563_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3564
#define AGONY_PP_PRIVATE_EVAL_REC_3563_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3564(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3564_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3564_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3564_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3564_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3564_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3564_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3564_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3564_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3564_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3564_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3565
#define AGONY_PP_PRIVATE_EVAL_REC_3564_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3565(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3565_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3565_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3565_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3565_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3565_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3565_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3565_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3565_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3565_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3565_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3566
#define AGONY_PP_PRIVATE_EVAL_REC_3565_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3566(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3566_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3566_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3566_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3566_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3566_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3566_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3566_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3566_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3566_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3566_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3567
#define AGONY_PP_PRIVATE_EVAL_REC_3566_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3567(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3567_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3567_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3567_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3567_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3567_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3567_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3567_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3567_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3567_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3567_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3568
#define AGONY_PP_PRIVATE_EVAL_REC_3567_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3568(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3568_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3568_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3568_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3568_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3568_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3568_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3568_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3568_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3568_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3568_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3569
#define AGONY_PP_PRIVATE_EVAL_REC_3568_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3569(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3569_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3569_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3569_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3569_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3569_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3569_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3569_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3569_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3569_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3569_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3570
#define AGONY_PP_PRIVATE_EVAL_REC_3569_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3570(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3570_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3570_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3570_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3570_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3570_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3570_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3570_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3570_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3570_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3570_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3571
#define AGONY_PP_PRIVATE_EVAL_REC_3570_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3571(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3571_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3571_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3571_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3571_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3571_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3571_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3571_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3571_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3571_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3571_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3572
#define AGONY_PP_PRIVATE_EVAL_REC_3571_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3572(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3572_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3572_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3572_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3572_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3572_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3572_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3572_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3572_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3572_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3572_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3573
#define AGONY_PP_PRIVATE_EVAL_REC_3572_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3573(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3573_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3573_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3573_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3573_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3573_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3573_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3573_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3573_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3573_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3573_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3574
#define AGONY_PP_PRIVATE_EVAL_REC_3573_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3574(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3574_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3574_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3574_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3574_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3574_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3574_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3574_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3574_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3574_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3574_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3575
#define AGONY_PP_PRIVATE_EVAL_REC_3574_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3575(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3575_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3575_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3575_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3575_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3575_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3575_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3575_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3575_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3575_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3575_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3576
#define AGONY_PP_PRIVATE_EVAL_REC_3575_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3576(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3576_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3576_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3576_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3576_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3576_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3576_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3576_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3576_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3576_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3576_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3577
#define AGONY_PP_PRIVATE_EVAL_REC_3576_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3577(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3577_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3577_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3577_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3577_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3577_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3577_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3577_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3577_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3577_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3577_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3578
#define AGONY_PP_PRIVATE_EVAL_REC_3577_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3578(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3578_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3578_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3578_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3578_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3578_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3578_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3578_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3578_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3578_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3578_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3579
#define AGONY_PP_PRIVATE_EVAL_REC_3578_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3579(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3579_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3579_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3579_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3579_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3579_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3579_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3579_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3579_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3579_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3579_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3580
#define AGONY_PP_PRIVATE_EVAL_REC_3579_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3580(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3580_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3580_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3580_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3580_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3580_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3580_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3580_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3580_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3580_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3580_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3581
#define AGONY_PP_PRIVATE_EVAL_REC_3580_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3581(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3581_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3581_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3581_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3581_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3581_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3581_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3581_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3581_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3581_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3581_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3582
#define AGONY_PP_PRIVATE_EVAL_REC_3581_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3582(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3582_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3582_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3582_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3582_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3582_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3582_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3582_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3582_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3582_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3582_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3583
#define AGONY_PP_PRIVATE_EVAL_REC_3582_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3583(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3583_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3583_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3583_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3583_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3583_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3583_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3583_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3583_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3583_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3583_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3584
#define AGONY_PP_PRIVATE_EVAL_REC_3583_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3584(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3584_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3584_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3584_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3584_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3584_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3584_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3584_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3584_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3584_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3584_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3585
#define AGONY_PP_PRIVATE_EVAL_REC_3584_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3585(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3585_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3585_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3585_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3585_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3585_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3585_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3585_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3585_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3585_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3585_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3586
#define AGONY_PP_PRIVATE_EVAL_REC_3585_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3586(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3586_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3586_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3586_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3586_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3586_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3586_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3586_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3586_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3586_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3586_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3587
#define AGONY_PP_PRIVATE_EVAL_REC_3586_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3587(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3587_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3587_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3587_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3587_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3587_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3587_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3587_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3587_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3587_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3587_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3588
#define AGONY_PP_PRIVATE_EVAL_REC_3587_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3588(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3588_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3588_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3588_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3588_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3588_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3588_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3588_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3588_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3588_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3588_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3589
#define AGONY_PP_PRIVATE_EVAL_REC_3588_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3589(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3589_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3589_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3589_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3589_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3589_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3589_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3589_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3589_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3589_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3589_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3590
#define AGONY_PP_PRIVATE_EVAL_REC_3589_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3590(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3590_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3590_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3590_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3590_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3590_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3590_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3590_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3590_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3590_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3590_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3591
#define AGONY_PP_PRIVATE_EVAL_REC_3590_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3591(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3591_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3591_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3591_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3591_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3591_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3591_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3591_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3591_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3591_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3591_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3592
#define AGONY_PP_PRIVATE_EVAL_REC_3591_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3592(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3592_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3592_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3592_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3592_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3592_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3592_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3592_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3592_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3592_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3592_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3593
#define AGONY_PP_PRIVATE_EVAL_REC_3592_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3593(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3593_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3593_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3593_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3593_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3593_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3593_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3593_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3593_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3593_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3593_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3594
#define AGONY_PP_PRIVATE_EVAL_REC_3593_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3594(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3594_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3594_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3594_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3594_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3594_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3594_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3594_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3594_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3594_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3594_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3595
#define AGONY_PP_PRIVATE_EVAL_REC_3594_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3595(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3595_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3595_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3595_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3595_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3595_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3595_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3595_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3595_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3595_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3595_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3596
#define AGONY_PP_PRIVATE_EVAL_REC_3595_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3596(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3596_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3596_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3596_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3596_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3596_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3596_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3596_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3596_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3596_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3596_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3597
#define AGONY_PP_PRIVATE_EVAL_REC_3596_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3597(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3597_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3597_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3597_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3597_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3597_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3597_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3597_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3597_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3597_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3597_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3598
#define AGONY_PP_PRIVATE_EVAL_REC_3597_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3598(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3598_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3598_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3598_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3598_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3598_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3598_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3598_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3598_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3598_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3598_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3599
#define AGONY_PP_PRIVATE_EVAL_REC_3598_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3599(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3599_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3599_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3599_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3599_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3599_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3599_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3599_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3599_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3599_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3599_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3600
#define AGONY_PP_PRIVATE_EVAL_REC_3599_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3600(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3600_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3600_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3600_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3600_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3600_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3600_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3600_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3600_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3600_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3600_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3601
#define AGONY_PP_PRIVATE_EVAL_REC_3600_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3601(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3601_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3601_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3601_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3601_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3601_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3601_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3601_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3601_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3601_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3601_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3602
#define AGONY_PP_PRIVATE_EVAL_REC_3601_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3602(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3602_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3602_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3602_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3602_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3602_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3602_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3602_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3602_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3602_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3602_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3603
#define AGONY_PP_PRIVATE_EVAL_REC_3602_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3603(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3603_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3603_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3603_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3603_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3603_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3603_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3603_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3603_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3603_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3603_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3604
#define AGONY_PP_PRIVATE_EVAL_REC_3603_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3604(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3604_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3604_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3604_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3604_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3604_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3604_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3604_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3604_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3604_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3604_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3605
#define AGONY_PP_PRIVATE_EVAL_REC_3604_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3605(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3605_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3605_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3605_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3605_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3605_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3605_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3605_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3605_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3605_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3605_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3606
#define AGONY_PP_PRIVATE_EVAL_REC_3605_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3606(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3606_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3606_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3606_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3606_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3606_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3606_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3606_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3606_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3606_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3606_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3607
#define AGONY_PP_PRIVATE_EVAL_REC_3606_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3607(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3607_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3607_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3607_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3607_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3607_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3607_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3607_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3607_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3607_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3607_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3608
#define AGONY_PP_PRIVATE_EVAL_REC_3607_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3608(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3608_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3608_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3608_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3608_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3608_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3608_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3608_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3608_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3608_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3608_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3609
#define AGONY_PP_PRIVATE_EVAL_REC_3608_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3609(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3609_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3609_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3609_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3609_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3609_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3609_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3609_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3609_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3609_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3609_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3610
#define AGONY_PP_PRIVATE_EVAL_REC_3609_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3610(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3610_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3610_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3610_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3610_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3610_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3610_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3610_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3610_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3610_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3610_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3611
#define AGONY_PP_PRIVATE_EVAL_REC_3610_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3611(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3611_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3611_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3611_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3611_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3611_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3611_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3611_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3611_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3611_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3611_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3612
#define AGONY_PP_PRIVATE_EVAL_REC_3611_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3612(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3612_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3612_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3612_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3612_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3612_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3612_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3612_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3612_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3612_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3612_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3613
#define AGONY_PP_PRIVATE_EVAL_REC_3612_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3613(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3613_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3613_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3613_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3613_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3613_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3613_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3613_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3613_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3613_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3613_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3614
#define AGONY_PP_PRIVATE_EVAL_REC_3613_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3614(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3614_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3614_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3614_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3614_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3614_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3614_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3614_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3614_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3614_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3614_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3615
#define AGONY_PP_PRIVATE_EVAL_REC_3614_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3615(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3615_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3615_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3615_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3615_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3615_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3615_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3615_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3615_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3615_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3615_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3616
#define AGONY_PP_PRIVATE_EVAL_REC_3615_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3616(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3616_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3616_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3616_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3616_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3616_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3616_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3616_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3616_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3616_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3616_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3617
#define AGONY_PP_PRIVATE_EVAL_REC_3616_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3617(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3617_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3617_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3617_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3617_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3617_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3617_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3617_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3617_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3617_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3617_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3618
#define AGONY_PP_PRIVATE_EVAL_REC_3617_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3618(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3618_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3618_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3618_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3618_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3618_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3618_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3618_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3618_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3618_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3618_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3619
#define AGONY_PP_PRIVATE_EVAL_REC_3618_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3619(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3619_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3619_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3619_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3619_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3619_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3619_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3619_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3619_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3619_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3619_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3620
#define AGONY_PP_PRIVATE_EVAL_REC_3619_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3620(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3620_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3620_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3620_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3620_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3620_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3620_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3620_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3620_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3620_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3620_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3621
#define AGONY_PP_PRIVATE_EVAL_REC_3620_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3621(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3621_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3621_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3621_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3621_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3621_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3621_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3621_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3621_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3621_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3621_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3622
#define AGONY_PP_PRIVATE_EVAL_REC_3621_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3622(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3622_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3622_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3622_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3622_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3622_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3622_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3622_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3622_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3622_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3622_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3623
#define AGONY_PP_PRIVATE_EVAL_REC_3622_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3623(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3623_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3623_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3623_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3623_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3623_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3623_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3623_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3623_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3623_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3623_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3624
#define AGONY_PP_PRIVATE_EVAL_REC_3623_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3624(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3624_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3624_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3624_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3624_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3624_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3624_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3624_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3624_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3624_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3624_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3625
#define AGONY_PP_PRIVATE_EVAL_REC_3624_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3625(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3625_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3625_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3625_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3625_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3625_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3625_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3625_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3625_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3625_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3625_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3626
#define AGONY_PP_PRIVATE_EVAL_REC_3625_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3626(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3626_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3626_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3626_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3626_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3626_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3626_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3626_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3626_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3626_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3626_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3627
#define AGONY_PP_PRIVATE_EVAL_REC_3626_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3627(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3627_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3627_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3627_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3627_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3627_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3627_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3627_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3627_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3627_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3627_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3628
#define AGONY_PP_PRIVATE_EVAL_REC_3627_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3628(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3628_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3628_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3628_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3628_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3628_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3628_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3628_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3628_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3628_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3628_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3629
#define AGONY_PP_PRIVATE_EVAL_REC_3628_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3629(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3629_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3629_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3629_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3629_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3629_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3629_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3629_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3629_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3629_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3629_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3630
#define AGONY_PP_PRIVATE_EVAL_REC_3629_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3630(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3630_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3630_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3630_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3630_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3630_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3630_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3630_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3630_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3630_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3630_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3631
#define AGONY_PP_PRIVATE_EVAL_REC_3630_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3631(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3631_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3631_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3631_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3631_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3631_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3631_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3631_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3631_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3631_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3631_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3632
#define AGONY_PP_PRIVATE_EVAL_REC_3631_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3632(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3632_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3632_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3632_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3632_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3632_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3632_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3632_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3632_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3632_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3632_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3633
#define AGONY_PP_PRIVATE_EVAL_REC_3632_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3633(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3633_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3633_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3633_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3633_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3633_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3633_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3633_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3633_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3633_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3633_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3634
#define AGONY_PP_PRIVATE_EVAL_REC_3633_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3634(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3634_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3634_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3634_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3634_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3634_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3634_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3634_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3634_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3634_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3634_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3635
#define AGONY_PP_PRIVATE_EVAL_REC_3634_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3635(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3635_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3635_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3635_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3635_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3635_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3635_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3635_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3635_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3635_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3635_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3636
#define AGONY_PP_PRIVATE_EVAL_REC_3635_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3636(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3636_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3636_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3636_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3636_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3636_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3636_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3636_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3636_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3636_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3636_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3637
#define AGONY_PP_PRIVATE_EVAL_REC_3636_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3637(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3637_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3637_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3637_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3637_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3637_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3637_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3637_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3637_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3637_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3637_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3638
#define AGONY_PP_PRIVATE_EVAL_REC_3637_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3638(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3638_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3638_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3638_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3638_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3638_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3638_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3638_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3638_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3638_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3638_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3639
#define AGONY_PP_PRIVATE_EVAL_REC_3638_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3639(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3639_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3639_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3639_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3639_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3639_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3639_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3639_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3639_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3639_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3639_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3640
#define AGONY_PP_PRIVATE_EVAL_REC_3639_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3640(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3640_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3640_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3640_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3640_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3640_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3640_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3640_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3640_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3640_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3640_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3641
#define AGONY_PP_PRIVATE_EVAL_REC_3640_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3641(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3641_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3641_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3641_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3641_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3641_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3641_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3641_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3641_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3641_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3641_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3642
#define AGONY_PP_PRIVATE_EVAL_REC_3641_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3642(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3642_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3642_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3642_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3642_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3642_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3642_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3642_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3642_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3642_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3642_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3643
#define AGONY_PP_PRIVATE_EVAL_REC_3642_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3643(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3643_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3643_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3643_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3643_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3643_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3643_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3643_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3643_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3643_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3643_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3644
#define AGONY_PP_PRIVATE_EVAL_REC_3643_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3644(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3644_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3644_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3644_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3644_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3644_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3644_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3644_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3644_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3644_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3644_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3645
#define AGONY_PP_PRIVATE_EVAL_REC_3644_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3645(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3645_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3645_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3645_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3645_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3645_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3645_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3645_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3645_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3645_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3645_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3646
#define AGONY_PP_PRIVATE_EVAL_REC_3645_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3646(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3646_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3646_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3646_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3646_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3646_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3646_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3646_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3646_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3646_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3646_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3647
#define AGONY_PP_PRIVATE_EVAL_REC_3646_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3647(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3647_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3647_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3647_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3647_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3647_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3647_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3647_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3647_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3647_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3647_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3648
#define AGONY_PP_PRIVATE_EVAL_REC_3647_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3648(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3648_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3648_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3648_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3648_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3648_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3648_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3648_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3648_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3648_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3648_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3649
#define AGONY_PP_PRIVATE_EVAL_REC_3648_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3649(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3649_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3649_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3649_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3649_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3649_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3649_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3649_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3649_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3649_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3649_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3650
#define AGONY_PP_PRIVATE_EVAL_REC_3649_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3650(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3650_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3650_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3650_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3650_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3650_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3650_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3650_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3650_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3650_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3650_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3651
#define AGONY_PP_PRIVATE_EVAL_REC_3650_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3651(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3651_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3651_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3651_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3651_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3651_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3651_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3651_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3651_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3651_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3651_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3652
#define AGONY_PP_PRIVATE_EVAL_REC_3651_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3652(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3652_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3652_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3652_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3652_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3652_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3652_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3652_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3652_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3652_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3652_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3653
#define AGONY_PP_PRIVATE_EVAL_REC_3652_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3653(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3653_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3653_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3653_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3653_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3653_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3653_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3653_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3653_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3653_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3653_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3654
#define AGONY_PP_PRIVATE_EVAL_REC_3653_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3654(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3654_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3654_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3654_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3654_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3654_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3654_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3654_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3654_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3654_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3654_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3655
#define AGONY_PP_PRIVATE_EVAL_REC_3654_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3655(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3655_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3655_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3655_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3655_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3655_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3655_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3655_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3655_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3655_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3655_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3656
#define AGONY_PP_PRIVATE_EVAL_REC_3655_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3656(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3656_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3656_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3656_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3656_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3656_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3656_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3656_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3656_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3656_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3656_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3657
#define AGONY_PP_PRIVATE_EVAL_REC_3656_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3657(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3657_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3657_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3657_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3657_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3657_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3657_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3657_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3657_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3657_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3657_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3658
#define AGONY_PP_PRIVATE_EVAL_REC_3657_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3658(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3658_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3658_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3658_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3658_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3658_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3658_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3658_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3658_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3658_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3658_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3659
#define AGONY_PP_PRIVATE_EVAL_REC_3658_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3659(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3659_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3659_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3659_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3659_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3659_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3659_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3659_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3659_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3659_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3659_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3660
#define AGONY_PP_PRIVATE_EVAL_REC_3659_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3660(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3660_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3660_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3660_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3660_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3660_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3660_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3660_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3660_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3660_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3660_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3661
#define AGONY_PP_PRIVATE_EVAL_REC_3660_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3661(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3661_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3661_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3661_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3661_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3661_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3661_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3661_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3661_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3661_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3661_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3662
#define AGONY_PP_PRIVATE_EVAL_REC_3661_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3662(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3662_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3662_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3662_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3662_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3662_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3662_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3662_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3662_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3662_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3662_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3663
#define AGONY_PP_PRIVATE_EVAL_REC_3662_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3663(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3663_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3663_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3663_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3663_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3663_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3663_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3663_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3663_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3663_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3663_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3664
#define AGONY_PP_PRIVATE_EVAL_REC_3663_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3664(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3664_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3664_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3664_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3664_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3664_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3664_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3664_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3664_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3664_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3664_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3665
#define AGONY_PP_PRIVATE_EVAL_REC_3664_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3665(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3665_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3665_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3665_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3665_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3665_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3665_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3665_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3665_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3665_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3665_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3666
#define AGONY_PP_PRIVATE_EVAL_REC_3665_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3666(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3666_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3666_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3666_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3666_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3666_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3666_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3666_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3666_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3666_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3666_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3667
#define AGONY_PP_PRIVATE_EVAL_REC_3666_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3667(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3667_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3667_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3667_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3667_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3667_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3667_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3667_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3667_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3667_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3667_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3668
#define AGONY_PP_PRIVATE_EVAL_REC_3667_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3668(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3668_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3668_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3668_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3668_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3668_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3668_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3668_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3668_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3668_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3668_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3669
#define AGONY_PP_PRIVATE_EVAL_REC_3668_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3669(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3669_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3669_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3669_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3669_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3669_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3669_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3669_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3669_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3669_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3669_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3670
#define AGONY_PP_PRIVATE_EVAL_REC_3669_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3670(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3670_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3670_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3670_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3670_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3670_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3670_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3670_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3670_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3670_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3670_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3671
#define AGONY_PP_PRIVATE_EVAL_REC_3670_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3671(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3671_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3671_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3671_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3671_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3671_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3671_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3671_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3671_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3671_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3671_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3672
#define AGONY_PP_PRIVATE_EVAL_REC_3671_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3672(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3672_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3672_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3672_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3672_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3672_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3672_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3672_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3672_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3672_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3672_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3673
#define AGONY_PP_PRIVATE_EVAL_REC_3672_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3673(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3673_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3673_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3673_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3673_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3673_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3673_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3673_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3673_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3673_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3673_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3674
#define AGONY_PP_PRIVATE_EVAL_REC_3673_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3674(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3674_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3674_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3674_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3674_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3674_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3674_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3674_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3674_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3674_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3674_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3675
#define AGONY_PP_PRIVATE_EVAL_REC_3674_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3675(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3675_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3675_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3675_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3675_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3675_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3675_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3675_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3675_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3675_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3675_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3676
#define AGONY_PP_PRIVATE_EVAL_REC_3675_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3676(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3676_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3676_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3676_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3676_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3676_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3676_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3676_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3676_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3676_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3676_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3677
#define AGONY_PP_PRIVATE_EVAL_REC_3676_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3677(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3677_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3677_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3677_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3677_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3677_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3677_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3677_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3677_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3677_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3677_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3678
#define AGONY_PP_PRIVATE_EVAL_REC_3677_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3678(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3678_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3678_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3678_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3678_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3678_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3678_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3678_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3678_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3678_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3678_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3679
#define AGONY_PP_PRIVATE_EVAL_REC_3678_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3679(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3679_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3679_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3679_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3679_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3679_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3679_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3679_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3679_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3679_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3679_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3680
#define AGONY_PP_PRIVATE_EVAL_REC_3679_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3680(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3680_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3680_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3680_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3680_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3680_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3680_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3680_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3680_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3680_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3680_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3681
#define AGONY_PP_PRIVATE_EVAL_REC_3680_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3681(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3681_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3681_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3681_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3681_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3681_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3681_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3681_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3681_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3681_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3681_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3682
#define AGONY_PP_PRIVATE_EVAL_REC_3681_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3682(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3682_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3682_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3682_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3682_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3682_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3682_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3682_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3682_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3682_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3682_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3683
#define AGONY_PP_PRIVATE_EVAL_REC_3682_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3683(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3683_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3683_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3683_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3683_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3683_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3683_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3683_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3683_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3683_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3683_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3684
#define AGONY_PP_PRIVATE_EVAL_REC_3683_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3684(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3684_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3684_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3684_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3684_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3684_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3684_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3684_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3684_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3684_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3684_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3685
#define AGONY_PP_PRIVATE_EVAL_REC_3684_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3685(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3685_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3685_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3685_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3685_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3685_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3685_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3685_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3685_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3685_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3685_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3686
#define AGONY_PP_PRIVATE_EVAL_REC_3685_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3686(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3686_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3686_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3686_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3686_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3686_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3686_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3686_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3686_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3686_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3686_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3687
#define AGONY_PP_PRIVATE_EVAL_REC_3686_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3687(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3687_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3687_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3687_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3687_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3687_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3687_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3687_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3687_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3687_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3687_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3688
#define AGONY_PP_PRIVATE_EVAL_REC_3687_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3688(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3688_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3688_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3688_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3688_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3688_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3688_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3688_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3688_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3688_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3688_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3689
#define AGONY_PP_PRIVATE_EVAL_REC_3688_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3689(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3689_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3689_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3689_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3689_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3689_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3689_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3689_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3689_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3689_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3689_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3690
#define AGONY_PP_PRIVATE_EVAL_REC_3689_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3690(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3690_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3690_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3690_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3690_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3690_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3690_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3690_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3690_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3690_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3690_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3691
#define AGONY_PP_PRIVATE_EVAL_REC_3690_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3691(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3691_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3691_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3691_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3691_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3691_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3691_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3691_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3691_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3691_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3691_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3692
#define AGONY_PP_PRIVATE_EVAL_REC_3691_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3692(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3692_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3692_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3692_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3692_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3692_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3692_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3692_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3692_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3692_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3692_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3693
#define AGONY_PP_PRIVATE_EVAL_REC_3692_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3693(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3693_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3693_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3693_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3693_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3693_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3693_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3693_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3693_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3693_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3693_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3694
#define AGONY_PP_PRIVATE_EVAL_REC_3693_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3694(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3694_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3694_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3694_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3694_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3694_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3694_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3694_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3694_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3694_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3694_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3695
#define AGONY_PP_PRIVATE_EVAL_REC_3694_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3695(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3695_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3695_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3695_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3695_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3695_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3695_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3695_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3695_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3695_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3695_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3696
#define AGONY_PP_PRIVATE_EVAL_REC_3695_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3696(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3696_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3696_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3696_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3696_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3696_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3696_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3696_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3696_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3696_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3696_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3697
#define AGONY_PP_PRIVATE_EVAL_REC_3696_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3697(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3697_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3697_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3697_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3697_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3697_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3697_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3697_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3697_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3697_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3697_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3698
#define AGONY_PP_PRIVATE_EVAL_REC_3697_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3698(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3698_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3698_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3698_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3698_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3698_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3698_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3698_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3698_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3698_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3698_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3699
#define AGONY_PP_PRIVATE_EVAL_REC_3698_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3699(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3699_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3699_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3699_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3699_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3699_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3699_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3699_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3699_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3699_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3699_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3700
#define AGONY_PP_PRIVATE_EVAL_REC_3699_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3700(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3700_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3700_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3700_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3700_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3700_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3700_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3700_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3700_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3700_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3700_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3701
#define AGONY_PP_PRIVATE_EVAL_REC_3700_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3701(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3701_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3701_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3701_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3701_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3701_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3701_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3701_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3701_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3701_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3701_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3702
#define AGONY_PP_PRIVATE_EVAL_REC_3701_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3702(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3702_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3702_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3702_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3702_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3702_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3702_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3702_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3702_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3702_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3702_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3703
#define AGONY_PP_PRIVATE_EVAL_REC_3702_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3703(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3703_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3703_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3703_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3703_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3703_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3703_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3703_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3703_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3703_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3703_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3704
#define AGONY_PP_PRIVATE_EVAL_REC_3703_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3704(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3704_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3704_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3704_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3704_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3704_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3704_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3704_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3704_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3704_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3704_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3705
#define AGONY_PP_PRIVATE_EVAL_REC_3704_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3705(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3705_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3705_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3705_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3705_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3705_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3705_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3705_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3705_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3705_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3705_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3706
#define AGONY_PP_PRIVATE_EVAL_REC_3705_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3706(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3706_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3706_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3706_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3706_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3706_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3706_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3706_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3706_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3706_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3706_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3707
#define AGONY_PP_PRIVATE_EVAL_REC_3706_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3707(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3707_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3707_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3707_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3707_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3707_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3707_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3707_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3707_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3707_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3707_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3708
#define AGONY_PP_PRIVATE_EVAL_REC_3707_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3708(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3708_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3708_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3708_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3708_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3708_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3708_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3708_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3708_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3708_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3708_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3709
#define AGONY_PP_PRIVATE_EVAL_REC_3708_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3709(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3709_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3709_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3709_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3709_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3709_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3709_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3709_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3709_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3709_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3709_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3710
#define AGONY_PP_PRIVATE_EVAL_REC_3709_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3710(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3710_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3710_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3710_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3710_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3710_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3710_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3710_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3710_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3710_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3710_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3711
#define AGONY_PP_PRIVATE_EVAL_REC_3710_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3711(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3711_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3711_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3711_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3711_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3711_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3711_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3711_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3711_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3711_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3711_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3712
#define AGONY_PP_PRIVATE_EVAL_REC_3711_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3712(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3712_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3712_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3712_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3712_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3712_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3712_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3712_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3712_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3712_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3712_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3713
#define AGONY_PP_PRIVATE_EVAL_REC_3712_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3713(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3713_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3713_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3713_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3713_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3713_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3713_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3713_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3713_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3713_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3713_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3714
#define AGONY_PP_PRIVATE_EVAL_REC_3713_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3714(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3714_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3714_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3714_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3714_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3714_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3714_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3714_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3714_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3714_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3714_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3715
#define AGONY_PP_PRIVATE_EVAL_REC_3714_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3715(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3715_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3715_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3715_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3715_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3715_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3715_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3715_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3715_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3715_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3715_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3716
#define AGONY_PP_PRIVATE_EVAL_REC_3715_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3716(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3716_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3716_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3716_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3716_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3716_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3716_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3716_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3716_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3716_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3716_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3717
#define AGONY_PP_PRIVATE_EVAL_REC_3716_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3717(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3717_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3717_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3717_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3717_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3717_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3717_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3717_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3717_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3717_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3717_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3718
#define AGONY_PP_PRIVATE_EVAL_REC_3717_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3718(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3718_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3718_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3718_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3718_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3718_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3718_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3718_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3718_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3718_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3718_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3719
#define AGONY_PP_PRIVATE_EVAL_REC_3718_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3719(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3719_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3719_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3719_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3719_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3719_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3719_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3719_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3719_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3719_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3719_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3720
#define AGONY_PP_PRIVATE_EVAL_REC_3719_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3720(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3720_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3720_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3720_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3720_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3720_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3720_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3720_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3720_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3720_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3720_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3721
#define AGONY_PP_PRIVATE_EVAL_REC_3720_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3721(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3721_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3721_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3721_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3721_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3721_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3721_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3721_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3721_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3721_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3721_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3722
#define AGONY_PP_PRIVATE_EVAL_REC_3721_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3722(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3722_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3722_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3722_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3722_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3722_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3722_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3722_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3722_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3722_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3722_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3723
#define AGONY_PP_PRIVATE_EVAL_REC_3722_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3723(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3723_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3723_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3723_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3723_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3723_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3723_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3723_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3723_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3723_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3723_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3724
#define AGONY_PP_PRIVATE_EVAL_REC_3723_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3724(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3724_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3724_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3724_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3724_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3724_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3724_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3724_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3724_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3724_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3724_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3725
#define AGONY_PP_PRIVATE_EVAL_REC_3724_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3725(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3725_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3725_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3725_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3725_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3725_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3725_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3725_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3725_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3725_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3725_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3726
#define AGONY_PP_PRIVATE_EVAL_REC_3725_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3726(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3726_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3726_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3726_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3726_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3726_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3726_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3726_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3726_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3726_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3726_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3727
#define AGONY_PP_PRIVATE_EVAL_REC_3726_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3727(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3727_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3727_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3727_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3727_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3727_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3727_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3727_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3727_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3727_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3727_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3728
#define AGONY_PP_PRIVATE_EVAL_REC_3727_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3728(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3728_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3728_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3728_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3728_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3728_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3728_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3728_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3728_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3728_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3728_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3729
#define AGONY_PP_PRIVATE_EVAL_REC_3728_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3729(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3729_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3729_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3729_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3729_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3729_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3729_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3729_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3729_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3729_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3729_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3730
#define AGONY_PP_PRIVATE_EVAL_REC_3729_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3730(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3730_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3730_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3730_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3730_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3730_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3730_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3730_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3730_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3730_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3730_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3731
#define AGONY_PP_PRIVATE_EVAL_REC_3730_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3731(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3731_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3731_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3731_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3731_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3731_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3731_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3731_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3731_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3731_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3731_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3732
#define AGONY_PP_PRIVATE_EVAL_REC_3731_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3732(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3732_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3732_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3732_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3732_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3732_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3732_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3732_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3732_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3732_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3732_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3733
#define AGONY_PP_PRIVATE_EVAL_REC_3732_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3733(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3733_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3733_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3733_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3733_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3733_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3733_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3733_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3733_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3733_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3733_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3734
#define AGONY_PP_PRIVATE_EVAL_REC_3733_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3734(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3734_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3734_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3734_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3734_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3734_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3734_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3734_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3734_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3734_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3734_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3735
#define AGONY_PP_PRIVATE_EVAL_REC_3734_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3735(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3735_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3735_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3735_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3735_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3735_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3735_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3735_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3735_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3735_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3735_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3736
#define AGONY_PP_PRIVATE_EVAL_REC_3735_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3736(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3736_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3736_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3736_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3736_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3736_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3736_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3736_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3736_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3736_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3736_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3737
#define AGONY_PP_PRIVATE_EVAL_REC_3736_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3737(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3737_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3737_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3737_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3737_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3737_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3737_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3737_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3737_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3737_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3737_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3738
#define AGONY_PP_PRIVATE_EVAL_REC_3737_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3738(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3738_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3738_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3738_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3738_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3738_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3738_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3738_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3738_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3738_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3738_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3739
#define AGONY_PP_PRIVATE_EVAL_REC_3738_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3739(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3739_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3739_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3739_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3739_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3739_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3739_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3739_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3739_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3739_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3739_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3740
#define AGONY_PP_PRIVATE_EVAL_REC_3739_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3740(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3740_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3740_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3740_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3740_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3740_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3740_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3740_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3740_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3740_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3740_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3741
#define AGONY_PP_PRIVATE_EVAL_REC_3740_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3741(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3741_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3741_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3741_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3741_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3741_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3741_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3741_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3741_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3741_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3741_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3742
#define AGONY_PP_PRIVATE_EVAL_REC_3741_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3742(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3742_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3742_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3742_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3742_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3742_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3742_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3742_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3742_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3742_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3742_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3743
#define AGONY_PP_PRIVATE_EVAL_REC_3742_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3743(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3743_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3743_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3743_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3743_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3743_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3743_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3743_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3743_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3743_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3743_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3744
#define AGONY_PP_PRIVATE_EVAL_REC_3743_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3744(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3744_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3744_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3744_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3744_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3744_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3744_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3744_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3744_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3744_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3744_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3745
#define AGONY_PP_PRIVATE_EVAL_REC_3744_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3745(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3745_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3745_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3745_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3745_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3745_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3745_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3745_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3745_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3745_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3745_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3746
#define AGONY_PP_PRIVATE_EVAL_REC_3745_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3746(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3746_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3746_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3746_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3746_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3746_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3746_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3746_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3746_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3746_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3746_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3747
#define AGONY_PP_PRIVATE_EVAL_REC_3746_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3747(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3747_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3747_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3747_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3747_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3747_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3747_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3747_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3747_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3747_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3747_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3748
#define AGONY_PP_PRIVATE_EVAL_REC_3747_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3748(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3748_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3748_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3748_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3748_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3748_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3748_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3748_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3748_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3748_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3748_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3749
#define AGONY_PP_PRIVATE_EVAL_REC_3748_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3749(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3749_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3749_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3749_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3749_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3749_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3749_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3749_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3749_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3749_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3749_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3750
#define AGONY_PP_PRIVATE_EVAL_REC_3749_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3750(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3750_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3750_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3750_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3750_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3750_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3750_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3750_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3750_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3750_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3750_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3751
#define AGONY_PP_PRIVATE_EVAL_REC_3750_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3751(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3751_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3751_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3751_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3751_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3751_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3751_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3751_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3751_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3751_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3751_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3752
#define AGONY_PP_PRIVATE_EVAL_REC_3751_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3752(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3752_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3752_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3752_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3752_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3752_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3752_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3752_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3752_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3752_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3752_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3753
#define AGONY_PP_PRIVATE_EVAL_REC_3752_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3753(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3753_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3753_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3753_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3753_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3753_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3753_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3753_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3753_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3753_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3753_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3754
#define AGONY_PP_PRIVATE_EVAL_REC_3753_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3754(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3754_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3754_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3754_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3754_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3754_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3754_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3754_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3754_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3754_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3754_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3755
#define AGONY_PP_PRIVATE_EVAL_REC_3754_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3755(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3755_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3755_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3755_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3755_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3755_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3755_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3755_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3755_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3755_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3755_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3756
#define AGONY_PP_PRIVATE_EVAL_REC_3755_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3756(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3756_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3756_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3756_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3756_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3756_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3756_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3756_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3756_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3756_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3756_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3757
#define AGONY_PP_PRIVATE_EVAL_REC_3756_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3757(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3757_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3757_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3757_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3757_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3757_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3757_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3757_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3757_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3757_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3757_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3758
#define AGONY_PP_PRIVATE_EVAL_REC_3757_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3758(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3758_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3758_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3758_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3758_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3758_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3758_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3758_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3758_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3758_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3758_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3759
#define AGONY_PP_PRIVATE_EVAL_REC_3758_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3759(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3759_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3759_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3759_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3759_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3759_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3759_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3759_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3759_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3759_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3759_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3760
#define AGONY_PP_PRIVATE_EVAL_REC_3759_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3760(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3760_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3760_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3760_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3760_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3760_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3760_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3760_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3760_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3760_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3760_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3761
#define AGONY_PP_PRIVATE_EVAL_REC_3760_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3761(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3761_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3761_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3761_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3761_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3761_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3761_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3761_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3761_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3761_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3761_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3762
#define AGONY_PP_PRIVATE_EVAL_REC_3761_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3762(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3762_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3762_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3762_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3762_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3762_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3762_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3762_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3762_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3762_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3762_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3763
#define AGONY_PP_PRIVATE_EVAL_REC_3762_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3763(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3763_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3763_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3763_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3763_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3763_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3763_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3763_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3763_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3763_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3763_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3764
#define AGONY_PP_PRIVATE_EVAL_REC_3763_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3764(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3764_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3764_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3764_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3764_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3764_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3764_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3764_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3764_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3764_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3764_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3765
#define AGONY_PP_PRIVATE_EVAL_REC_3764_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3765(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3765_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3765_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3765_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3765_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3765_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3765_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3765_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3765_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3765_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3765_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3766
#define AGONY_PP_PRIVATE_EVAL_REC_3765_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3766(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3766_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3766_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3766_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3766_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3766_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3766_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3766_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3766_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3766_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3766_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3767
#define AGONY_PP_PRIVATE_EVAL_REC_3766_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3767(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3767_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3767_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3767_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3767_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3767_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3767_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3767_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3767_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3767_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3767_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3768
#define AGONY_PP_PRIVATE_EVAL_REC_3767_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3768(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3768_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3768_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3768_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3768_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3768_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3768_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3768_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3768_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3768_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3768_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3769
#define AGONY_PP_PRIVATE_EVAL_REC_3768_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3769(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3769_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3769_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3769_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3769_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3769_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3769_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3769_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3769_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3769_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3769_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3770
#define AGONY_PP_PRIVATE_EVAL_REC_3769_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3770(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3770_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3770_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3770_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3770_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3770_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3770_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3770_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3770_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3770_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3770_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3771
#define AGONY_PP_PRIVATE_EVAL_REC_3770_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3771(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3771_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3771_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3771_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3771_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3771_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3771_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3771_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3771_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3771_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3771_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3772
#define AGONY_PP_PRIVATE_EVAL_REC_3771_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3772(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3772_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3772_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3772_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3772_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3772_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3772_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3772_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3772_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3772_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3772_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3773
#define AGONY_PP_PRIVATE_EVAL_REC_3772_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3773(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3773_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3773_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3773_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3773_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3773_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3773_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3773_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3773_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3773_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3773_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3774
#define AGONY_PP_PRIVATE_EVAL_REC_3773_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3774(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3774_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3774_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3774_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3774_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3774_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3774_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3774_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3774_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3774_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3774_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3775
#define AGONY_PP_PRIVATE_EVAL_REC_3774_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3775(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3775_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3775_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3775_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3775_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3775_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3775_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3775_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3775_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3775_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3775_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3776
#define AGONY_PP_PRIVATE_EVAL_REC_3775_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3776(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3776_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3776_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3776_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3776_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3776_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3776_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3776_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3776_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3776_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3776_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3777
#define AGONY_PP_PRIVATE_EVAL_REC_3776_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3777(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3777_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3777_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3777_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3777_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3777_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3777_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3777_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3777_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3777_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3777_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3778
#define AGONY_PP_PRIVATE_EVAL_REC_3777_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3778(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3778_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3778_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3778_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3778_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3778_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3778_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3778_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3778_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3778_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3778_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3779
#define AGONY_PP_PRIVATE_EVAL_REC_3778_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3779(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3779_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3779_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3779_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3779_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3779_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3779_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3779_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3779_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3779_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3779_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3780
#define AGONY_PP_PRIVATE_EVAL_REC_3779_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3780(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3780_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3780_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3780_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3780_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3780_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3780_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3780_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3780_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3780_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3780_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3781
#define AGONY_PP_PRIVATE_EVAL_REC_3780_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3781(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3781_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3781_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3781_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3781_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3781_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3781_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3781_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3781_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3781_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3781_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3782
#define AGONY_PP_PRIVATE_EVAL_REC_3781_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3782(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3782_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3782_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3782_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3782_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3782_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3782_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3782_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3782_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3782_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3782_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3783
#define AGONY_PP_PRIVATE_EVAL_REC_3782_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3783(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3783_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3783_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3783_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3783_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3783_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3783_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3783_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3783_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3783_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3783_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3784
#define AGONY_PP_PRIVATE_EVAL_REC_3783_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3784(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3784_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3784_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3784_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3784_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3784_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3784_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3784_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3784_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3784_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3784_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3785
#define AGONY_PP_PRIVATE_EVAL_REC_3784_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3785(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3785_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3785_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3785_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3785_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3785_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3785_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3785_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3785_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3785_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3785_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3786
#define AGONY_PP_PRIVATE_EVAL_REC_3785_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3786(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3786_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3786_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3786_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3786_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3786_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3786_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3786_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3786_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3786_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3786_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3787
#define AGONY_PP_PRIVATE_EVAL_REC_3786_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3787(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3787_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3787_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3787_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3787_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3787_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3787_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3787_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3787_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3787_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3787_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3788
#define AGONY_PP_PRIVATE_EVAL_REC_3787_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3788(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3788_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3788_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3788_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3788_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3788_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3788_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3788_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3788_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3788_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3788_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3789
#define AGONY_PP_PRIVATE_EVAL_REC_3788_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3789(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3789_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3789_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3789_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3789_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3789_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3789_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3789_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3789_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3789_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3789_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3790
#define AGONY_PP_PRIVATE_EVAL_REC_3789_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3790(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3790_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3790_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3790_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3790_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3790_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3790_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3790_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3790_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3790_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3790_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3791
#define AGONY_PP_PRIVATE_EVAL_REC_3790_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3791(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3791_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3791_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3791_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3791_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3791_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3791_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3791_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3791_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3791_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3791_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3792
#define AGONY_PP_PRIVATE_EVAL_REC_3791_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3792(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3792_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3792_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3792_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3792_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3792_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3792_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3792_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3792_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3792_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3792_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3793
#define AGONY_PP_PRIVATE_EVAL_REC_3792_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3793(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3793_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3793_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3793_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3793_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3793_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3793_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3793_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3793_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3793_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3793_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3794
#define AGONY_PP_PRIVATE_EVAL_REC_3793_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3794(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3794_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3794_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3794_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3794_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3794_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3794_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3794_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3794_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3794_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3794_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3795
#define AGONY_PP_PRIVATE_EVAL_REC_3794_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3795(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3795_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3795_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3795_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3795_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3795_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3795_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3795_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3795_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3795_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3795_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3796
#define AGONY_PP_PRIVATE_EVAL_REC_3795_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3796(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3796_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3796_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3796_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3796_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3796_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3796_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3796_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3796_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3796_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3796_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3797
#define AGONY_PP_PRIVATE_EVAL_REC_3796_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3797(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3797_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3797_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3797_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3797_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3797_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3797_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3797_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3797_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3797_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3797_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3798
#define AGONY_PP_PRIVATE_EVAL_REC_3797_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3798(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3798_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3798_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3798_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3798_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3798_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3798_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3798_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3798_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3798_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3798_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3799
#define AGONY_PP_PRIVATE_EVAL_REC_3798_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3799(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3799_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3799_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3799_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3799_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3799_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3799_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3799_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3799_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3799_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3799_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3800
#define AGONY_PP_PRIVATE_EVAL_REC_3799_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3800(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3800_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3800_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3800_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3800_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3800_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3800_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3800_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3800_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3800_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3800_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3801
#define AGONY_PP_PRIVATE_EVAL_REC_3800_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3801(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3801_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3801_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3801_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3801_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3801_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3801_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3801_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3801_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3801_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3801_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3802
#define AGONY_PP_PRIVATE_EVAL_REC_3801_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3802(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3802_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3802_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3802_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3802_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3802_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3802_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3802_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3802_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3802_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3802_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3803
#define AGONY_PP_PRIVATE_EVAL_REC_3802_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3803(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3803_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3803_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3803_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3803_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3803_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3803_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3803_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3803_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3803_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3803_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3804
#define AGONY_PP_PRIVATE_EVAL_REC_3803_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3804(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3804_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3804_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3804_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3804_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3804_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3804_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3804_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3804_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3804_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3804_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3805
#define AGONY_PP_PRIVATE_EVAL_REC_3804_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3805(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3805_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3805_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3805_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3805_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3805_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3805_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3805_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3805_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3805_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3805_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3806
#define AGONY_PP_PRIVATE_EVAL_REC_3805_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3806(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3806_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3806_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3806_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3806_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3806_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3806_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3806_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3806_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3806_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3806_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3807
#define AGONY_PP_PRIVATE_EVAL_REC_3806_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3807(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3807_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3807_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3807_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3807_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3807_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3807_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3807_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3807_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3807_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3807_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3808
#define AGONY_PP_PRIVATE_EVAL_REC_3807_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3808(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3808_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3808_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3808_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3808_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3808_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3808_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3808_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3808_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3808_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3808_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3809
#define AGONY_PP_PRIVATE_EVAL_REC_3808_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3809(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3809_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3809_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3809_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3809_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3809_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3809_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3809_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3809_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3809_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3809_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3810
#define AGONY_PP_PRIVATE_EVAL_REC_3809_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3810(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3810_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3810_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3810_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3810_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3810_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3810_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3810_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3810_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3810_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3810_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3811
#define AGONY_PP_PRIVATE_EVAL_REC_3810_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3811(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3811_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3811_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3811_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3811_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3811_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3811_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3811_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3811_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3811_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3811_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3812
#define AGONY_PP_PRIVATE_EVAL_REC_3811_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3812(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3812_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3812_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3812_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3812_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3812_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3812_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3812_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3812_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3812_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3812_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3813
#define AGONY_PP_PRIVATE_EVAL_REC_3812_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3813(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3813_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3813_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3813_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3813_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3813_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3813_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3813_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3813_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3813_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3813_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3814
#define AGONY_PP_PRIVATE_EVAL_REC_3813_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3814(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3814_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3814_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3814_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3814_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3814_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3814_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3814_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3814_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3814_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3814_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3815
#define AGONY_PP_PRIVATE_EVAL_REC_3814_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3815(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3815_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3815_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3815_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3815_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3815_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3815_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3815_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3815_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3815_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3815_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3816
#define AGONY_PP_PRIVATE_EVAL_REC_3815_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3816(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3816_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3816_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3816_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3816_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3816_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3816_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3816_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3816_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3816_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3816_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3817
#define AGONY_PP_PRIVATE_EVAL_REC_3816_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3817(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3817_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3817_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3817_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3817_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3817_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3817_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3817_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3817_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3817_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3817_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3818
#define AGONY_PP_PRIVATE_EVAL_REC_3817_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3818(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3818_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3818_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3818_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3818_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3818_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3818_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3818_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3818_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3818_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3818_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3819
#define AGONY_PP_PRIVATE_EVAL_REC_3818_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3819(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3819_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3819_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3819_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3819_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3819_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3819_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3819_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3819_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3819_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3819_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3820
#define AGONY_PP_PRIVATE_EVAL_REC_3819_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3820(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3820_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3820_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3820_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3820_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3820_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3820_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3820_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3820_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3820_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3820_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3821
#define AGONY_PP_PRIVATE_EVAL_REC_3820_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3821(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3821_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3821_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3821_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3821_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3821_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3821_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3821_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3821_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3821_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3821_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3822
#define AGONY_PP_PRIVATE_EVAL_REC_3821_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3822(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3822_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3822_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3822_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3822_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3822_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3822_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3822_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3822_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3822_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3822_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3823
#define AGONY_PP_PRIVATE_EVAL_REC_3822_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3823(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3823_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3823_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3823_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3823_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3823_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3823_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3823_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3823_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3823_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3823_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3824
#define AGONY_PP_PRIVATE_EVAL_REC_3823_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3824(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3824_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3824_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3824_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3824_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3824_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3824_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3824_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3824_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3824_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3824_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3825
#define AGONY_PP_PRIVATE_EVAL_REC_3824_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3825(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3825_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3825_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3825_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3825_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3825_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3825_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3825_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3825_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3825_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3825_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3826
#define AGONY_PP_PRIVATE_EVAL_REC_3825_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3826(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3826_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3826_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3826_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3826_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3826_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3826_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3826_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3826_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3826_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3826_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3827
#define AGONY_PP_PRIVATE_EVAL_REC_3826_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3827(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3827_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3827_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3827_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3827_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3827_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3827_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3827_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3827_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3827_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3827_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3828
#define AGONY_PP_PRIVATE_EVAL_REC_3827_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3828(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3828_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3828_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3828_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3828_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3828_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3828_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3828_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3828_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3828_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3828_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3829
#define AGONY_PP_PRIVATE_EVAL_REC_3828_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3829(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3829_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3829_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3829_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3829_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3829_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3829_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3829_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3829_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3829_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3829_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3830
#define AGONY_PP_PRIVATE_EVAL_REC_3829_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3830(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3830_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3830_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3830_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3830_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3830_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3830_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3830_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3830_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3830_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3830_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3831
#define AGONY_PP_PRIVATE_EVAL_REC_3830_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3831(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3831_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3831_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3831_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3831_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3831_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3831_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3831_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3831_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3831_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3831_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3832
#define AGONY_PP_PRIVATE_EVAL_REC_3831_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3832(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3832_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3832_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3832_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3832_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3832_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3832_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3832_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3832_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3832_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3832_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3833
#define AGONY_PP_PRIVATE_EVAL_REC_3832_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3833(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3833_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3833_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3833_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3833_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3833_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3833_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3833_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3833_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3833_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3833_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3834
#define AGONY_PP_PRIVATE_EVAL_REC_3833_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3834(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3834_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3834_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3834_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3834_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3834_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3834_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3834_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3834_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3834_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3834_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3835
#define AGONY_PP_PRIVATE_EVAL_REC_3834_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3835(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3835_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3835_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3835_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3835_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3835_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3835_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3835_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3835_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3835_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3835_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3836
#define AGONY_PP_PRIVATE_EVAL_REC_3835_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3836(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3836_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3836_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3836_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3836_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3836_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3836_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3836_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3836_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3836_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3836_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3837
#define AGONY_PP_PRIVATE_EVAL_REC_3836_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3837(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3837_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3837_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3837_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3837_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3837_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3837_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3837_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3837_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3837_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3837_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3838
#define AGONY_PP_PRIVATE_EVAL_REC_3837_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3838(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3838_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3838_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3838_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3838_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3838_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3838_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3838_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3838_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3838_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3838_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3839
#define AGONY_PP_PRIVATE_EVAL_REC_3838_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3839(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3839_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3839_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3839_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3839_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3839_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3839_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3839_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3839_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3839_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3839_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3840
#define AGONY_PP_PRIVATE_EVAL_REC_3839_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3840(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3840_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3840_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3840_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3840_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3840_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3840_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3840_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3840_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3840_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3840_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3841
#define AGONY_PP_PRIVATE_EVAL_REC_3840_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3841(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3841_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3841_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3841_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3841_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3841_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3841_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3841_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3841_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3841_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3841_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3842
#define AGONY_PP_PRIVATE_EVAL_REC_3841_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3842(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3842_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3842_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3842_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3842_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3842_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3842_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3842_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3842_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3842_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3842_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3843
#define AGONY_PP_PRIVATE_EVAL_REC_3842_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3843(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3843_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3843_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3843_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3843_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3843_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3843_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3843_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3843_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3843_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3843_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3844
#define AGONY_PP_PRIVATE_EVAL_REC_3843_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3844(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3844_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3844_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3844_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3844_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3844_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3844_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3844_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3844_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3844_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3844_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3845
#define AGONY_PP_PRIVATE_EVAL_REC_3844_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3845(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3845_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3845_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3845_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3845_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3845_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3845_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3845_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3845_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3845_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3845_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3846
#define AGONY_PP_PRIVATE_EVAL_REC_3845_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3846(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3846_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3846_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3846_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3846_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3846_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3846_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3846_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3846_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3846_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3846_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3847
#define AGONY_PP_PRIVATE_EVAL_REC_3846_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3847(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3847_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3847_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3847_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3847_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3847_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3847_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3847_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3847_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3847_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3847_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3848
#define AGONY_PP_PRIVATE_EVAL_REC_3847_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3848(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3848_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3848_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3848_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3848_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3848_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3848_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3848_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3848_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3848_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3848_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3849
#define AGONY_PP_PRIVATE_EVAL_REC_3848_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3849(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3849_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3849_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3849_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3849_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3849_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3849_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3849_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3849_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3849_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3849_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3850
#define AGONY_PP_PRIVATE_EVAL_REC_3849_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3850(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3850_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3850_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3850_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3850_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3850_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3850_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3850_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3850_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3850_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3850_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3851
#define AGONY_PP_PRIVATE_EVAL_REC_3850_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3851(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3851_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3851_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3851_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3851_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3851_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3851_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3851_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3851_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3851_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3851_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3852
#define AGONY_PP_PRIVATE_EVAL_REC_3851_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3852(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3852_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3852_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3852_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3852_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3852_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3852_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3852_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3852_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3852_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3852_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3853
#define AGONY_PP_PRIVATE_EVAL_REC_3852_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3853(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3853_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3853_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3853_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3853_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3853_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3853_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3853_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3853_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3853_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3853_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3854
#define AGONY_PP_PRIVATE_EVAL_REC_3853_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3854(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3854_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3854_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3854_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3854_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3854_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3854_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3854_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3854_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3854_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3854_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3855
#define AGONY_PP_PRIVATE_EVAL_REC_3854_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3855(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3855_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3855_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3855_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3855_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3855_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3855_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3855_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3855_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3855_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3855_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3856
#define AGONY_PP_PRIVATE_EVAL_REC_3855_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3856(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3856_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3856_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3856_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3856_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3856_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3856_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3856_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3856_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3856_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3856_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3857
#define AGONY_PP_PRIVATE_EVAL_REC_3856_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3857(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3857_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3857_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3857_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3857_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3857_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3857_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3857_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3857_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3857_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3857_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3858
#define AGONY_PP_PRIVATE_EVAL_REC_3857_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3858(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3858_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3858_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3858_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3858_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3858_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3858_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3858_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3858_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3858_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3858_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3859
#define AGONY_PP_PRIVATE_EVAL_REC_3858_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3859(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3859_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3859_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3859_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3859_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3859_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3859_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3859_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3859_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3859_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3859_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3860
#define AGONY_PP_PRIVATE_EVAL_REC_3859_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3860(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3860_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3860_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3860_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3860_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3860_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3860_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3860_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3860_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3860_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3860_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3861
#define AGONY_PP_PRIVATE_EVAL_REC_3860_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3861(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3861_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3861_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3861_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3861_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3861_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3861_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3861_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3861_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3861_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3861_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3862
#define AGONY_PP_PRIVATE_EVAL_REC_3861_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3862(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3862_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3862_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3862_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3862_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3862_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3862_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3862_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3862_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3862_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3862_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3863
#define AGONY_PP_PRIVATE_EVAL_REC_3862_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3863(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3863_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3863_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3863_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3863_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3863_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3863_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3863_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3863_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3863_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3863_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3864
#define AGONY_PP_PRIVATE_EVAL_REC_3863_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3864(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3864_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3864_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3864_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3864_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3864_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3864_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3864_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3864_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3864_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3864_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3865
#define AGONY_PP_PRIVATE_EVAL_REC_3864_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3865(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3865_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3865_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3865_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3865_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3865_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3865_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3865_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3865_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3865_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3865_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3866
#define AGONY_PP_PRIVATE_EVAL_REC_3865_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3866(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3866_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3866_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3866_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3866_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3866_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3866_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3866_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3866_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3866_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3866_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3867
#define AGONY_PP_PRIVATE_EVAL_REC_3866_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3867(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3867_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3867_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3867_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3867_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3867_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3867_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3867_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3867_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3867_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3867_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3868
#define AGONY_PP_PRIVATE_EVAL_REC_3867_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3868(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3868_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3868_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3868_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3868_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3868_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3868_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3868_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3868_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3868_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3868_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3869
#define AGONY_PP_PRIVATE_EVAL_REC_3868_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3869(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3869_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3869_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3869_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3869_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3869_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3869_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3869_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3869_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3869_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3869_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3870
#define AGONY_PP_PRIVATE_EVAL_REC_3869_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3870(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3870_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3870_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3870_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3870_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3870_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3870_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3870_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3870_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3870_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3870_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3871
#define AGONY_PP_PRIVATE_EVAL_REC_3870_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3871(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3871_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3871_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3871_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3871_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3871_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3871_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3871_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3871_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3871_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3871_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3872
#define AGONY_PP_PRIVATE_EVAL_REC_3871_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3872(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3872_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3872_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3872_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3872_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3872_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3872_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3872_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3872_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3872_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3872_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3873
#define AGONY_PP_PRIVATE_EVAL_REC_3872_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3873(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3873_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3873_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3873_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3873_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3873_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3873_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3873_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3873_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3873_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3873_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3874
#define AGONY_PP_PRIVATE_EVAL_REC_3873_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3874(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3874_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3874_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3874_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3874_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3874_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3874_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3874_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3874_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3874_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3874_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3875
#define AGONY_PP_PRIVATE_EVAL_REC_3874_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3875(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3875_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3875_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3875_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3875_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3875_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3875_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3875_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3875_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3875_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3875_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3876
#define AGONY_PP_PRIVATE_EVAL_REC_3875_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3876(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3876_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3876_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3876_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3876_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3876_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3876_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3876_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3876_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3876_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3876_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3877
#define AGONY_PP_PRIVATE_EVAL_REC_3876_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3877(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3877_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3877_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3877_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3877_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3877_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3877_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3877_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3877_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3877_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3877_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3878
#define AGONY_PP_PRIVATE_EVAL_REC_3877_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3878(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3878_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3878_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3878_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3878_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3878_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3878_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3878_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3878_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3878_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3878_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3879
#define AGONY_PP_PRIVATE_EVAL_REC_3878_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3879(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3879_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3879_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3879_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3879_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3879_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3879_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3879_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3879_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3879_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3879_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3880
#define AGONY_PP_PRIVATE_EVAL_REC_3879_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3880(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3880_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3880_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3880_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3880_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3880_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3880_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3880_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3880_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3880_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3880_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3881
#define AGONY_PP_PRIVATE_EVAL_REC_3880_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3881(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3881_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3881_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3881_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3881_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3881_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3881_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3881_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3881_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3881_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3881_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3882
#define AGONY_PP_PRIVATE_EVAL_REC_3881_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3882(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3882_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3882_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3882_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3882_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3882_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3882_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3882_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3882_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3882_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3882_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3883
#define AGONY_PP_PRIVATE_EVAL_REC_3882_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3883(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3883_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3883_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3883_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3883_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3883_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3883_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3883_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3883_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3883_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3883_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3884
#define AGONY_PP_PRIVATE_EVAL_REC_3883_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3884(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3884_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3884_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3884_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3884_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3884_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3884_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3884_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3884_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3884_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3884_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3885
#define AGONY_PP_PRIVATE_EVAL_REC_3884_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3885(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3885_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3885_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3885_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3885_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3885_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3885_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3885_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3885_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3885_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3885_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3886
#define AGONY_PP_PRIVATE_EVAL_REC_3885_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3886(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3886_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3886_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3886_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3886_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3886_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3886_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3886_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3886_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3886_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3886_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3887
#define AGONY_PP_PRIVATE_EVAL_REC_3886_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3887(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3887_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3887_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3887_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3887_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3887_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3887_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3887_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3887_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3887_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3887_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3888
#define AGONY_PP_PRIVATE_EVAL_REC_3887_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3888(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3888_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3888_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3888_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3888_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3888_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3888_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3888_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3888_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3888_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3888_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3889
#define AGONY_PP_PRIVATE_EVAL_REC_3888_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3889(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3889_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3889_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3889_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3889_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3889_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3889_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3889_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3889_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3889_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3889_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3890
#define AGONY_PP_PRIVATE_EVAL_REC_3889_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3890(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3890_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3890_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3890_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3890_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3890_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3890_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3890_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3890_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3890_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3890_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3891
#define AGONY_PP_PRIVATE_EVAL_REC_3890_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3891(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3891_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3891_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3891_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3891_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3891_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3891_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3891_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3891_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3891_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3891_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3892
#define AGONY_PP_PRIVATE_EVAL_REC_3891_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3892(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3892_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3892_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3892_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3892_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3892_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3892_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3892_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3892_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3892_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3892_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3893
#define AGONY_PP_PRIVATE_EVAL_REC_3892_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3893(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3893_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3893_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3893_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3893_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3893_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3893_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3893_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3893_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3893_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3893_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3894
#define AGONY_PP_PRIVATE_EVAL_REC_3893_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3894(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3894_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3894_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3894_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3894_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3894_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3894_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3894_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3894_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3894_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3894_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3895
#define AGONY_PP_PRIVATE_EVAL_REC_3894_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3895(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3895_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3895_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3895_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3895_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3895_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3895_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3895_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3895_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3895_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3895_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3896
#define AGONY_PP_PRIVATE_EVAL_REC_3895_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3896(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3896_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3896_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3896_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3896_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3896_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3896_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3896_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3896_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3896_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3896_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3897
#define AGONY_PP_PRIVATE_EVAL_REC_3896_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3897(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3897_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3897_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3897_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3897_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3897_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3897_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3897_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3897_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3897_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3897_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3898
#define AGONY_PP_PRIVATE_EVAL_REC_3897_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3898(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3898_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3898_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3898_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3898_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3898_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3898_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3898_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3898_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3898_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3898_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3899
#define AGONY_PP_PRIVATE_EVAL_REC_3898_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3899(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3899_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3899_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3899_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3899_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3899_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3899_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3899_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3899_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3899_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3899_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3900
#define AGONY_PP_PRIVATE_EVAL_REC_3899_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3900(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3900_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3900_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3900_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3900_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3900_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3900_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3900_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3900_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3900_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3900_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3901
#define AGONY_PP_PRIVATE_EVAL_REC_3900_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3901(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3901_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3901_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3901_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3901_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3901_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3901_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3901_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3901_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3901_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3901_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3902
#define AGONY_PP_PRIVATE_EVAL_REC_3901_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3902(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3902_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3902_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3902_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3902_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3902_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3902_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3902_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3902_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3902_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3902_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3903
#define AGONY_PP_PRIVATE_EVAL_REC_3902_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3903(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3903_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3903_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3903_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3903_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3903_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3903_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3903_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3903_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3903_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3903_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3904
#define AGONY_PP_PRIVATE_EVAL_REC_3903_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3904(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3904_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3904_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3904_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3904_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3904_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3904_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3904_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3904_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3904_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3904_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3905
#define AGONY_PP_PRIVATE_EVAL_REC_3904_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3905(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3905_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3905_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3905_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3905_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3905_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3905_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3905_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3905_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3905_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3905_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3906
#define AGONY_PP_PRIVATE_EVAL_REC_3905_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3906(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3906_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3906_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3906_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3906_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3906_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3906_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3906_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3906_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3906_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3906_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3907
#define AGONY_PP_PRIVATE_EVAL_REC_3906_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3907(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3907_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3907_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3907_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3907_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3907_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3907_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3907_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3907_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3907_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3907_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3908
#define AGONY_PP_PRIVATE_EVAL_REC_3907_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3908(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3908_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3908_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3908_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3908_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3908_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3908_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3908_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3908_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3908_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3908_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3909
#define AGONY_PP_PRIVATE_EVAL_REC_3908_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3909(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3909_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3909_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3909_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3909_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3909_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3909_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3909_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3909_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3909_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3909_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3910
#define AGONY_PP_PRIVATE_EVAL_REC_3909_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3910(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3910_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3910_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3910_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3910_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3910_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3910_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3910_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3910_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3910_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3910_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3911
#define AGONY_PP_PRIVATE_EVAL_REC_3910_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3911(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3911_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3911_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3911_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3911_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3911_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3911_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3911_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3911_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3911_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3911_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3912
#define AGONY_PP_PRIVATE_EVAL_REC_3911_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3912(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3912_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3912_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3912_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3912_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3912_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3912_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3912_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3912_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3912_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3912_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3913
#define AGONY_PP_PRIVATE_EVAL_REC_3912_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3913(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3913_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3913_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3913_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3913_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3913_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3913_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3913_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3913_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3913_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3913_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3914
#define AGONY_PP_PRIVATE_EVAL_REC_3913_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3914(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3914_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3914_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3914_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3914_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3914_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3914_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3914_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3914_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3914_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3914_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3915
#define AGONY_PP_PRIVATE_EVAL_REC_3914_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3915(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3915_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3915_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3915_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3915_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3915_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3915_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3915_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3915_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3915_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3915_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3916
#define AGONY_PP_PRIVATE_EVAL_REC_3915_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3916(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3916_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3916_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3916_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3916_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3916_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3916_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3916_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3916_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3916_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3916_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3917
#define AGONY_PP_PRIVATE_EVAL_REC_3916_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3917(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3917_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3917_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3917_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3917_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3917_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3917_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3917_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3917_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3917_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3917_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3918
#define AGONY_PP_PRIVATE_EVAL_REC_3917_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3918(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3918_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3918_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3918_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3918_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3918_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3918_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3918_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3918_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3918_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3918_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3919
#define AGONY_PP_PRIVATE_EVAL_REC_3918_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3919(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3919_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3919_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3919_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3919_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3919_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3919_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3919_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3919_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3919_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3919_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3920
#define AGONY_PP_PRIVATE_EVAL_REC_3919_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3920(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3920_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3920_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3920_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3920_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3920_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3920_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3920_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3920_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3920_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3920_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3921
#define AGONY_PP_PRIVATE_EVAL_REC_3920_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3921(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3921_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3921_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3921_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3921_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3921_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3921_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3921_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3921_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3921_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3921_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3922
#define AGONY_PP_PRIVATE_EVAL_REC_3921_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3922(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3922_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3922_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3922_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3922_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3922_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3922_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3922_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3922_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3922_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3922_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3923
#define AGONY_PP_PRIVATE_EVAL_REC_3922_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3923(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3923_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3923_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3923_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3923_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3923_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3923_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3923_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3923_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3923_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3923_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3924
#define AGONY_PP_PRIVATE_EVAL_REC_3923_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3924(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3924_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3924_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3924_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3924_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3924_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3924_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3924_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3924_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3924_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3924_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3925
#define AGONY_PP_PRIVATE_EVAL_REC_3924_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3925(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3925_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3925_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3925_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3925_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3925_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3925_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3925_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3925_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3925_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3925_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3926
#define AGONY_PP_PRIVATE_EVAL_REC_3925_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3926(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3926_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3926_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3926_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3926_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3926_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3926_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3926_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3926_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3926_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3926_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3927
#define AGONY_PP_PRIVATE_EVAL_REC_3926_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3927(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3927_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3927_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3927_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3927_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3927_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3927_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3927_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3927_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3927_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3927_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3928
#define AGONY_PP_PRIVATE_EVAL_REC_3927_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3928(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3928_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3928_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3928_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3928_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3928_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3928_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3928_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3928_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3928_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3928_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3929
#define AGONY_PP_PRIVATE_EVAL_REC_3928_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3929(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3929_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3929_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3929_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3929_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3929_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3929_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3929_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3929_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3929_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3929_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3930
#define AGONY_PP_PRIVATE_EVAL_REC_3929_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3930(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3930_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3930_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3930_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3930_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3930_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3930_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3930_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3930_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3930_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3930_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3931
#define AGONY_PP_PRIVATE_EVAL_REC_3930_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3931(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3931_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3931_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3931_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3931_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3931_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3931_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3931_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3931_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3931_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3931_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3932
#define AGONY_PP_PRIVATE_EVAL_REC_3931_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3932(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3932_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3932_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3932_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3932_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3932_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3932_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3932_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3932_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3932_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3932_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3933
#define AGONY_PP_PRIVATE_EVAL_REC_3932_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3933(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3933_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3933_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3933_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3933_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3933_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3933_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3933_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3933_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3933_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3933_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3934
#define AGONY_PP_PRIVATE_EVAL_REC_3933_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3934(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3934_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3934_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3934_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3934_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3934_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3934_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3934_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3934_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3934_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3934_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3935
#define AGONY_PP_PRIVATE_EVAL_REC_3934_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3935(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3935_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3935_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3935_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3935_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3935_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3935_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3935_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3935_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3935_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3935_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3936
#define AGONY_PP_PRIVATE_EVAL_REC_3935_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3936(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3936_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3936_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3936_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3936_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3936_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3936_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3936_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3936_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3936_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3936_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3937
#define AGONY_PP_PRIVATE_EVAL_REC_3936_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3937(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3937_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3937_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3937_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3937_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3937_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3937_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3937_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3937_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3937_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3937_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3938
#define AGONY_PP_PRIVATE_EVAL_REC_3937_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3938(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3938_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3938_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3938_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3938_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3938_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3938_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3938_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3938_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3938_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3938_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3939
#define AGONY_PP_PRIVATE_EVAL_REC_3938_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3939(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3939_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3939_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3939_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3939_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3939_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3939_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3939_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3939_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3939_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3939_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3940
#define AGONY_PP_PRIVATE_EVAL_REC_3939_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3940(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3940_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3940_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3940_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3940_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3940_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3940_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3940_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3940_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3940_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3940_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3941
#define AGONY_PP_PRIVATE_EVAL_REC_3940_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3941(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3941_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3941_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3941_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3941_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3941_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3941_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3941_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3941_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3941_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3941_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3942
#define AGONY_PP_PRIVATE_EVAL_REC_3941_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3942(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3942_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3942_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3942_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3942_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3942_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3942_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3942_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3942_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3942_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3942_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3943
#define AGONY_PP_PRIVATE_EVAL_REC_3942_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3943(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3943_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3943_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3943_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3943_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3943_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3943_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3943_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3943_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3943_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3943_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3944
#define AGONY_PP_PRIVATE_EVAL_REC_3943_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3944(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3944_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3944_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3944_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3944_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3944_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3944_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3944_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3944_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3944_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3944_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3945
#define AGONY_PP_PRIVATE_EVAL_REC_3944_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3945(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3945_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3945_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3945_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3945_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3945_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3945_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3945_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3945_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3945_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3945_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3946
#define AGONY_PP_PRIVATE_EVAL_REC_3945_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3946(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3946_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3946_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3946_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3946_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3946_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3946_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3946_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3946_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3946_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3946_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3947
#define AGONY_PP_PRIVATE_EVAL_REC_3946_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3947(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3947_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3947_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3947_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3947_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3947_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3947_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3947_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3947_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3947_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3947_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3948
#define AGONY_PP_PRIVATE_EVAL_REC_3947_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3948(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3948_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3948_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3948_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3948_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3948_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3948_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3948_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3948_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3948_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3948_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3949
#define AGONY_PP_PRIVATE_EVAL_REC_3948_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3949(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3949_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3949_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3949_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3949_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3949_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3949_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3949_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3949_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3949_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3949_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3950
#define AGONY_PP_PRIVATE_EVAL_REC_3949_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3950(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3950_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3950_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3950_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3950_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3950_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3950_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3950_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3950_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3950_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3950_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3951
#define AGONY_PP_PRIVATE_EVAL_REC_3950_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3951(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3951_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3951_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3951_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3951_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3951_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3951_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3951_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3951_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3951_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3951_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3952
#define AGONY_PP_PRIVATE_EVAL_REC_3951_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3952(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3952_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3952_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3952_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3952_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3952_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3952_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3952_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3952_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3952_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3952_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3953
#define AGONY_PP_PRIVATE_EVAL_REC_3952_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3953(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3953_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3953_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3953_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3953_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3953_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3953_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3953_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3953_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3953_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3953_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3954
#define AGONY_PP_PRIVATE_EVAL_REC_3953_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3954(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3954_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3954_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3954_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3954_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3954_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3954_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3954_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3954_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3954_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3954_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3955
#define AGONY_PP_PRIVATE_EVAL_REC_3954_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3955(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3955_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3955_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3955_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3955_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3955_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3955_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3955_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3955_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3955_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3955_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3956
#define AGONY_PP_PRIVATE_EVAL_REC_3955_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3956(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3956_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3956_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3956_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3956_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3956_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3956_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3956_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3956_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3956_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3956_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3957
#define AGONY_PP_PRIVATE_EVAL_REC_3956_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3957(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3957_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3957_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3957_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3957_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3957_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3957_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3957_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3957_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3957_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3957_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3958
#define AGONY_PP_PRIVATE_EVAL_REC_3957_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3958(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3958_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3958_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3958_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3958_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3958_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3958_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3958_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3958_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3958_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3958_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3959
#define AGONY_PP_PRIVATE_EVAL_REC_3958_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3959(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3959_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3959_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3959_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3959_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3959_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3959_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3959_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3959_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3959_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3959_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3960
#define AGONY_PP_PRIVATE_EVAL_REC_3959_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3960(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3960_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3960_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3960_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3960_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3960_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3960_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3960_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3960_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3960_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3960_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3961
#define AGONY_PP_PRIVATE_EVAL_REC_3960_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3961(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3961_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3961_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3961_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3961_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3961_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3961_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3961_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3961_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3961_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3961_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3962
#define AGONY_PP_PRIVATE_EVAL_REC_3961_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3962(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3962_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3962_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3962_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3962_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3962_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3962_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3962_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3962_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3962_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3962_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3963
#define AGONY_PP_PRIVATE_EVAL_REC_3962_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3963(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3963_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3963_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3963_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3963_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3963_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3963_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3963_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3963_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3963_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3963_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3964
#define AGONY_PP_PRIVATE_EVAL_REC_3963_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3964(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3964_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3964_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3964_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3964_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3964_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3964_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3964_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3964_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3964_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3964_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3965
#define AGONY_PP_PRIVATE_EVAL_REC_3964_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3965(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3965_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3965_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3965_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3965_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3965_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3965_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3965_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3965_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3965_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3965_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3966
#define AGONY_PP_PRIVATE_EVAL_REC_3965_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3966(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3966_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3966_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3966_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3966_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3966_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3966_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3966_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3966_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3966_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3966_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3967
#define AGONY_PP_PRIVATE_EVAL_REC_3966_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3967(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3967_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3967_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3967_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3967_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3967_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3967_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3967_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3967_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3967_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3967_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3968
#define AGONY_PP_PRIVATE_EVAL_REC_3967_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3968(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3968_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3968_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3968_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3968_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3968_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3968_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3968_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3968_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3968_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3968_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3969
#define AGONY_PP_PRIVATE_EVAL_REC_3968_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3969(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3969_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3969_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3969_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3969_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3969_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3969_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3969_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3969_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3969_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3969_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3970
#define AGONY_PP_PRIVATE_EVAL_REC_3969_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3970(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3970_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3970_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3970_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3970_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3970_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3970_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3970_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3970_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3970_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3970_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3971
#define AGONY_PP_PRIVATE_EVAL_REC_3970_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3971(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3971_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3971_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3971_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3971_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3971_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3971_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3971_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3971_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3971_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3971_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3972
#define AGONY_PP_PRIVATE_EVAL_REC_3971_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3972(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3972_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3972_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3972_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3972_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3972_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3972_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3972_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3972_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3972_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3972_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3973
#define AGONY_PP_PRIVATE_EVAL_REC_3972_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3973(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3973_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3973_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3973_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3973_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3973_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3973_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3973_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3973_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3973_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3973_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3974
#define AGONY_PP_PRIVATE_EVAL_REC_3973_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3974(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3974_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3974_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3974_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3974_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3974_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3974_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3974_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3974_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3974_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3974_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3975
#define AGONY_PP_PRIVATE_EVAL_REC_3974_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3975(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3975_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3975_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3975_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3975_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3975_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3975_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3975_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3975_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3975_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3975_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3976
#define AGONY_PP_PRIVATE_EVAL_REC_3975_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3976(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3976_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3976_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3976_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3976_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3976_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3976_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3976_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3976_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3976_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3976_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3977
#define AGONY_PP_PRIVATE_EVAL_REC_3976_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3977(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3977_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3977_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3977_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3977_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3977_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3977_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3977_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3977_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3977_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3977_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3978
#define AGONY_PP_PRIVATE_EVAL_REC_3977_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3978(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3978_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3978_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3978_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3978_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3978_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3978_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3978_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3978_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3978_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3978_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3979
#define AGONY_PP_PRIVATE_EVAL_REC_3978_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3979(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3979_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3979_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3979_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3979_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3979_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3979_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3979_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3979_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3979_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3979_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3980
#define AGONY_PP_PRIVATE_EVAL_REC_3979_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3980(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3980_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3980_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3980_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3980_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3980_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3980_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3980_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3980_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3980_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3980_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3981
#define AGONY_PP_PRIVATE_EVAL_REC_3980_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3981(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3981_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3981_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3981_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3981_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3981_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3981_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3981_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3981_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3981_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3981_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3982
#define AGONY_PP_PRIVATE_EVAL_REC_3981_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3982(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3982_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3982_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3982_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3982_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3982_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3982_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3982_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3982_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3982_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3982_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3983
#define AGONY_PP_PRIVATE_EVAL_REC_3982_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3983(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3983_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3983_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3983_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3983_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3983_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3983_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3983_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3983_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3983_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3983_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3984
#define AGONY_PP_PRIVATE_EVAL_REC_3983_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3984(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3984_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3984_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3984_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3984_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3984_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3984_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3984_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3984_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3984_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3984_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3985
#define AGONY_PP_PRIVATE_EVAL_REC_3984_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3985(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3985_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3985_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3985_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3985_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3985_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3985_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3985_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3985_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3985_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3985_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3986
#define AGONY_PP_PRIVATE_EVAL_REC_3985_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3986(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3986_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3986_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3986_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3986_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3986_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3986_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3986_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3986_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3986_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3986_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3987
#define AGONY_PP_PRIVATE_EVAL_REC_3986_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3987(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3987_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3987_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3987_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3987_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3987_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3987_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3987_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3987_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3987_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3987_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3988
#define AGONY_PP_PRIVATE_EVAL_REC_3987_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3988(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3988_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3988_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3988_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3988_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3988_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3988_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3988_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3988_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3988_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3988_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3989
#define AGONY_PP_PRIVATE_EVAL_REC_3988_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3989(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3989_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3989_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3989_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3989_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3989_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3989_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3989_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3989_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3989_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3989_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3990
#define AGONY_PP_PRIVATE_EVAL_REC_3989_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3990(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3990_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3990_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3990_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3990_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3990_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3990_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3990_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3990_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3990_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3990_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3991
#define AGONY_PP_PRIVATE_EVAL_REC_3990_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3991(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3991_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3991_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3991_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3991_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3991_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3991_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3991_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3991_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3991_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3991_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3992
#define AGONY_PP_PRIVATE_EVAL_REC_3991_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3992(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3992_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3992_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3992_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3992_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3992_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3992_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3992_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3992_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3992_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3992_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3993
#define AGONY_PP_PRIVATE_EVAL_REC_3992_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3993(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3993_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3993_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3993_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3993_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3993_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3993_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3993_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3993_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3993_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3993_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3994
#define AGONY_PP_PRIVATE_EVAL_REC_3993_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3994(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3994_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3994_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3994_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3994_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3994_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3994_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3994_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3994_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3994_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3994_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3995
#define AGONY_PP_PRIVATE_EVAL_REC_3994_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3995(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3995_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3995_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3995_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3995_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3995_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3995_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3995_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3995_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3995_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3995_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3996
#define AGONY_PP_PRIVATE_EVAL_REC_3995_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3996(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3996_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3996_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3996_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3996_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3996_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3996_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3996_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3996_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3996_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3996_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3997
#define AGONY_PP_PRIVATE_EVAL_REC_3996_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3997(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3997_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3997_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3997_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3997_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3997_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3997_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3997_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3997_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3997_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3997_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3998
#define AGONY_PP_PRIVATE_EVAL_REC_3997_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3998(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3998_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3998_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3998_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3998_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3998_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3998_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3998_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3998_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3998_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3998_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_3999
#define AGONY_PP_PRIVATE_EVAL_REC_3998_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3999(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_3999_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_3999_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_3999_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3999_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3999_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3999_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_3999_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3999_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_3999_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3999_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_4000
#define AGONY_PP_PRIVATE_EVAL_REC_3999_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_4000(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_4000_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_4000_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_4000_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_4000_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_4000_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_4000_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_4000_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_4000_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_4000_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_4000_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_4001
#define AGONY_PP_PRIVATE_EVAL_REC_4000_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_4001(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_4001_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_4001_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_4001_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_4001_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_4001_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_4001_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_4001_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_4001_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_4001_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_4001_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_4002
#define AGONY_PP_PRIVATE_EVAL_REC_4001_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_4002(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_4002_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_4002_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_4002_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_4002_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_4002_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_4002_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_4002_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_4002_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_4002_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_4002_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_4003
#define AGONY_PP_PRIVATE_EVAL_REC_4002_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_4003(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_4003_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_4003_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_4003_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_4003_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_4003_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_4003_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_4003_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_4003_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_4003_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_4003_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_4004
#define AGONY_PP_PRIVATE_EVAL_REC_4003_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_4004(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_4004_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_4004_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_4004_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_4004_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_4004_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_4004_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_4004_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_4004_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_4004_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_4004_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_4005
#define AGONY_PP_PRIVATE_EVAL_REC_4004_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_4005(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_4005_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_4005_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_4005_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_4005_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_4005_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_4005_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_4005_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_4005_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_4005_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_4005_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_4006
#define AGONY_PP_PRIVATE_EVAL_REC_4005_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_4006(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_4006_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_4006_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_4006_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_4006_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_4006_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_4006_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_4006_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_4006_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_4006_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_4006_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_4007
#define AGONY_PP_PRIVATE_EVAL_REC_4006_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_4007(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_4007_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_4007_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_4007_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_4007_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_4007_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_4007_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_4007_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_4007_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_4007_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_4007_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_4008
#define AGONY_PP_PRIVATE_EVAL_REC_4007_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_4008(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_4008_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_4008_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_4008_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_4008_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_4008_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_4008_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_4008_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_4008_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_4008_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_4008_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_4009
#define AGONY_PP_PRIVATE_EVAL_REC_4008_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_4009(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_4009_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_4009_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_4009_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_4009_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_4009_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_4009_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_4009_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_4009_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_4009_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_4009_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_4010
#define AGONY_PP_PRIVATE_EVAL_REC_4009_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_4010(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_4010_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_4010_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_4010_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_4010_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_4010_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_4010_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_4010_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_4010_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_4010_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_4010_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_4011
#define AGONY_PP_PRIVATE_EVAL_REC_4010_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_4011(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_4011_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_4011_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_4011_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_4011_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_4011_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_4011_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_4011_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_4011_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_4011_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_4011_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_4012
#define AGONY_PP_PRIVATE_EVAL_REC_4011_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_4012(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_4012_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_4012_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_4012_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_4012_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_4012_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_4012_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_4012_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_4012_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_4012_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_4012_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_4013
#define AGONY_PP_PRIVATE_EVAL_REC_4012_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_4013(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_4013_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_4013_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_4013_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_4013_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_4013_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_4013_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_4013_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_4013_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_4013_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_4013_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_4014
#define AGONY_PP_PRIVATE_EVAL_REC_4013_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_4014(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_4014_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_4014_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_4014_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_4014_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_4014_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_4014_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_4014_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_4014_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_4014_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_4014_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_4015
#define AGONY_PP_PRIVATE_EVAL_REC_4014_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_4015(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_4015_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_4015_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_4015_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_4015_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_4015_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_4015_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_4015_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_4015_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_4015_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_4015_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_4016
#define AGONY_PP_PRIVATE_EVAL_REC_4015_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_4016(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_4016_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_4016_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_4016_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_4016_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_4016_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_4016_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_4016_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_4016_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_4016_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_4016_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_4017
#define AGONY_PP_PRIVATE_EVAL_REC_4016_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_4017(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_4017_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_4017_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_4017_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_4017_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_4017_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_4017_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_4017_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_4017_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_4017_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_4017_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_4018
#define AGONY_PP_PRIVATE_EVAL_REC_4017_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_4018(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_4018_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_4018_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_4018_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_4018_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_4018_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_4018_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_4018_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_4018_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_4018_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_4018_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_4019
#define AGONY_PP_PRIVATE_EVAL_REC_4018_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_4019(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_4019_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_4019_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_4019_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_4019_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_4019_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_4019_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_4019_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_4019_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_4019_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_4019_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_4020
#define AGONY_PP_PRIVATE_EVAL_REC_4019_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_4020(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_4020_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_4020_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_4020_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_4020_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_4020_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_4020_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_4020_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_4020_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_4020_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_4020_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_4021
#define AGONY_PP_PRIVATE_EVAL_REC_4020_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_4021(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_4021_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_4021_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_4021_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_4021_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_4021_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_4021_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_4021_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_4021_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_4021_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_4021_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_4022
#define AGONY_PP_PRIVATE_EVAL_REC_4021_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_4022(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_4022_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_4022_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_4022_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_4022_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_4022_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_4022_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_4022_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_4022_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_4022_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_4022_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_4023
#define AGONY_PP_PRIVATE_EVAL_REC_4022_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_4023(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_4023_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_4023_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_4023_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_4023_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_4023_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_4023_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_4023_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_4023_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_4023_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_4023_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_4024
#define AGONY_PP_PRIVATE_EVAL_REC_4023_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_4024(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_4024_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_4024_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_4024_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_4024_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_4024_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_4024_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_4024_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_4024_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_4024_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_4024_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_4025
#define AGONY_PP_PRIVATE_EVAL_REC_4024_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_4025(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_4025_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_4025_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_4025_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_4025_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_4025_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_4025_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_4025_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_4025_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_4025_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_4025_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_4026
#define AGONY_PP_PRIVATE_EVAL_REC_4025_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_4026(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_4026_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_4026_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_4026_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_4026_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_4026_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_4026_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_4026_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_4026_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_4026_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_4026_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_4027
#define AGONY_PP_PRIVATE_EVAL_REC_4026_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_4027(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_4027_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_4027_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_4027_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_4027_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_4027_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_4027_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_4027_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_4027_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_4027_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_4027_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_4028
#define AGONY_PP_PRIVATE_EVAL_REC_4027_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_4028(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_4028_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_4028_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_4028_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_4028_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_4028_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_4028_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_4028_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_4028_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_4028_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_4028_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_4029
#define AGONY_PP_PRIVATE_EVAL_REC_4028_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_4029(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_4029_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_4029_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_4029_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_4029_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_4029_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_4029_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_4029_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_4029_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_4029_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_4029_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_4030
#define AGONY_PP_PRIVATE_EVAL_REC_4029_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_4030(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_4030_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_4030_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_4030_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_4030_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_4030_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_4030_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_4030_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_4030_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_4030_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_4030_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_4031
#define AGONY_PP_PRIVATE_EVAL_REC_4030_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_4031(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_4031_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_4031_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_4031_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_4031_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_4031_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_4031_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_4031_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_4031_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_4031_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_4031_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_4032
#define AGONY_PP_PRIVATE_EVAL_REC_4031_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_4032(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_4032_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_4032_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_4032_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_4032_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_4032_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_4032_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_4032_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_4032_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_4032_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_4032_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_4033
#define AGONY_PP_PRIVATE_EVAL_REC_4032_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_4033(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_4033_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_4033_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_4033_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_4033_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_4033_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_4033_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_4033_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_4033_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_4033_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_4033_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_4034
#define AGONY_PP_PRIVATE_EVAL_REC_4033_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_4034(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_4034_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_4034_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_4034_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_4034_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_4034_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_4034_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_4034_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_4034_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_4034_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_4034_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_4035
#define AGONY_PP_PRIVATE_EVAL_REC_4034_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_4035(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_4035_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_4035_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_4035_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_4035_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_4035_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_4035_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_4035_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_4035_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_4035_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_4035_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_4036
#define AGONY_PP_PRIVATE_EVAL_REC_4035_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_4036(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_4036_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_4036_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_4036_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_4036_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_4036_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_4036_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_4036_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_4036_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_4036_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_4036_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_4037
#define AGONY_PP_PRIVATE_EVAL_REC_4036_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_4037(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_4037_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_4037_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_4037_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_4037_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_4037_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_4037_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_4037_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_4037_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_4037_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_4037_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_4038
#define AGONY_PP_PRIVATE_EVAL_REC_4037_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_4038(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_4038_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_4038_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_4038_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_4038_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_4038_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_4038_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_4038_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_4038_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_4038_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_4038_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_4039
#define AGONY_PP_PRIVATE_EVAL_REC_4038_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_4039(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_4039_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_4039_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_4039_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_4039_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_4039_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_4039_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_4039_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_4039_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_4039_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_4039_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_4040
#define AGONY_PP_PRIVATE_EVAL_REC_4039_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_4040(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_4040_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_4040_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_4040_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_4040_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_4040_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_4040_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_4040_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_4040_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_4040_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_4040_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_4041
#define AGONY_PP_PRIVATE_EVAL_REC_4040_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_4041(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_4041_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_4041_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_4041_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_4041_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_4041_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_4041_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_4041_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_4041_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_4041_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_4041_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_4042
#define AGONY_PP_PRIVATE_EVAL_REC_4041_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_4042(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_4042_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_4042_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_4042_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_4042_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_4042_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_4042_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_4042_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_4042_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_4042_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_4042_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_4043
#define AGONY_PP_PRIVATE_EVAL_REC_4042_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_4043(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_4043_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_4043_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_4043_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_4043_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_4043_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_4043_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_4043_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_4043_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_4043_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_4043_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_4044
#define AGONY_PP_PRIVATE_EVAL_REC_4043_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_4044(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_4044_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_4044_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_4044_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_4044_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_4044_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_4044_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_4044_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_4044_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_4044_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_4044_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_4045
#define AGONY_PP_PRIVATE_EVAL_REC_4044_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_4045(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_4045_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_4045_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_4045_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_4045_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_4045_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_4045_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_4045_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_4045_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_4045_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_4045_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_4046
#define AGONY_PP_PRIVATE_EVAL_REC_4045_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_4046(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_4046_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_4046_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_4046_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_4046_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_4046_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_4046_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_4046_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_4046_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_4046_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_4046_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_4047
#define AGONY_PP_PRIVATE_EVAL_REC_4046_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_4047(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_4047_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_4047_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_4047_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_4047_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_4047_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_4047_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_4047_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_4047_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_4047_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_4047_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_4048
#define AGONY_PP_PRIVATE_EVAL_REC_4047_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_4048(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_4048_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_4048_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_4048_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_4048_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_4048_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_4048_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_4048_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_4048_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_4048_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_4048_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_4049
#define AGONY_PP_PRIVATE_EVAL_REC_4048_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_4049(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_4049_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_4049_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_4049_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_4049_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_4049_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_4049_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_4049_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_4049_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_4049_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_4049_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_4050
#define AGONY_PP_PRIVATE_EVAL_REC_4049_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_4050(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_4050_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_4050_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_4050_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_4050_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_4050_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_4050_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_4050_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_4050_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_4050_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_4050_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_4051
#define AGONY_PP_PRIVATE_EVAL_REC_4050_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_4051(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_4051_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_4051_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_4051_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_4051_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_4051_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_4051_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_4051_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_4051_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_4051_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_4051_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_4052
#define AGONY_PP_PRIVATE_EVAL_REC_4051_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_4052(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_4052_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_4052_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_4052_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_4052_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_4052_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_4052_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_4052_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_4052_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_4052_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_4052_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_4053
#define AGONY_PP_PRIVATE_EVAL_REC_4052_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_4053(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_4053_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_4053_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_4053_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_4053_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_4053_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_4053_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_4053_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_4053_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_4053_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_4053_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_4054
#define AGONY_PP_PRIVATE_EVAL_REC_4053_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_4054(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_4054_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_4054_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_4054_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_4054_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_4054_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_4054_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_4054_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_4054_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_4054_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_4054_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_4055
#define AGONY_PP_PRIVATE_EVAL_REC_4054_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_4055(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_4055_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_4055_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_4055_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_4055_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_4055_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_4055_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_4055_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_4055_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_4055_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_4055_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_4056
#define AGONY_PP_PRIVATE_EVAL_REC_4055_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_4056(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_4056_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_4056_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_4056_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_4056_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_4056_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_4056_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_4056_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_4056_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_4056_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_4056_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_4057
#define AGONY_PP_PRIVATE_EVAL_REC_4056_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_4057(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_4057_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_4057_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_4057_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_4057_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_4057_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_4057_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_4057_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_4057_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_4057_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_4057_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_4058
#define AGONY_PP_PRIVATE_EVAL_REC_4057_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_4058(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_4058_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_4058_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_4058_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_4058_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_4058_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_4058_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_4058_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_4058_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_4058_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_4058_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_4059
#define AGONY_PP_PRIVATE_EVAL_REC_4058_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_4059(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_4059_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_4059_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_4059_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_4059_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_4059_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_4059_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_4059_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_4059_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_4059_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_4059_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_4060
#define AGONY_PP_PRIVATE_EVAL_REC_4059_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_4060(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_4060_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_4060_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_4060_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_4060_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_4060_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_4060_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_4060_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_4060_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_4060_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_4060_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_4061
#define AGONY_PP_PRIVATE_EVAL_REC_4060_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_4061(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_4061_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_4061_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_4061_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_4061_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_4061_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_4061_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_4061_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_4061_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_4061_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_4061_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_4062
#define AGONY_PP_PRIVATE_EVAL_REC_4061_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_4062(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_4062_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_4062_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_4062_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_4062_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_4062_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_4062_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_4062_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_4062_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_4062_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_4062_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_4063
#define AGONY_PP_PRIVATE_EVAL_REC_4062_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_4063(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_4063_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_4063_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_4063_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_4063_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_4063_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_4063_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_4063_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_4063_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_4063_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_4063_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_4064
#define AGONY_PP_PRIVATE_EVAL_REC_4063_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_4064(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_4064_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_4064_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_4064_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_4064_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_4064_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_4064_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_4064_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_4064_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_4064_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_4064_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_4065
#define AGONY_PP_PRIVATE_EVAL_REC_4064_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_4065(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_4065_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_4065_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_4065_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_4065_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_4065_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_4065_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_4065_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_4065_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_4065_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_4065_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_4066
#define AGONY_PP_PRIVATE_EVAL_REC_4065_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_4066(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_4066_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_4066_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_4066_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_4066_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_4066_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_4066_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_4066_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_4066_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_4066_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_4066_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_4067
#define AGONY_PP_PRIVATE_EVAL_REC_4066_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_4067(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_4067_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_4067_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_4067_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_4067_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_4067_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_4067_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_4067_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_4067_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_4067_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_4067_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_4068
#define AGONY_PP_PRIVATE_EVAL_REC_4067_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_4068(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_4068_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_4068_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_4068_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_4068_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_4068_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_4068_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_4068_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_4068_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_4068_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_4068_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_4069
#define AGONY_PP_PRIVATE_EVAL_REC_4068_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_4069(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_4069_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_4069_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_4069_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_4069_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_4069_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_4069_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_4069_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_4069_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_4069_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_4069_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_4070
#define AGONY_PP_PRIVATE_EVAL_REC_4069_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_4070(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_4070_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_4070_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_4070_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_4070_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_4070_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_4070_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_4070_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_4070_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_4070_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_4070_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_4071
#define AGONY_PP_PRIVATE_EVAL_REC_4070_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_4071(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_4071_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_4071_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_4071_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_4071_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_4071_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_4071_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_4071_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_4071_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_4071_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_4071_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_4072
#define AGONY_PP_PRIVATE_EVAL_REC_4071_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_4072(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_4072_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_4072_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_4072_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_4072_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_4072_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_4072_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_4072_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_4072_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_4072_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_4072_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_4073
#define AGONY_PP_PRIVATE_EVAL_REC_4072_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_4073(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_4073_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_4073_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_4073_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_4073_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_4073_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_4073_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_4073_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_4073_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_4073_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_4073_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_4074
#define AGONY_PP_PRIVATE_EVAL_REC_4073_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_4074(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_4074_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_4074_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_4074_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_4074_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_4074_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_4074_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_4074_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_4074_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_4074_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_4074_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_4075
#define AGONY_PP_PRIVATE_EVAL_REC_4074_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_4075(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_4075_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_4075_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_4075_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_4075_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_4075_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_4075_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_4075_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_4075_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_4075_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_4075_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_4076
#define AGONY_PP_PRIVATE_EVAL_REC_4075_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_4076(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_4076_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_4076_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_4076_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_4076_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_4076_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_4076_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_4076_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_4076_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_4076_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_4076_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_4077
#define AGONY_PP_PRIVATE_EVAL_REC_4076_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_4077(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_4077_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_4077_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_4077_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_4077_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_4077_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_4077_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_4077_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_4077_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_4077_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_4077_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_4078
#define AGONY_PP_PRIVATE_EVAL_REC_4077_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_4078(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_4078_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_4078_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_4078_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_4078_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_4078_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_4078_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_4078_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_4078_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_4078_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_4078_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_4079
#define AGONY_PP_PRIVATE_EVAL_REC_4078_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_4079(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_4079_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_4079_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_4079_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_4079_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_4079_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_4079_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_4079_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_4079_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_4079_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_4079_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_4080
#define AGONY_PP_PRIVATE_EVAL_REC_4079_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_4080(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_4080_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_4080_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_4080_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_4080_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_4080_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_4080_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_4080_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_4080_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_4080_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_4080_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_4081
#define AGONY_PP_PRIVATE_EVAL_REC_4080_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_4081(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_4081_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_4081_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_4081_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_4081_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_4081_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_4081_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_4081_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_4081_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_4081_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_4081_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_4082
#define AGONY_PP_PRIVATE_EVAL_REC_4081_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_4082(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_4082_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_4082_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_4082_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_4082_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_4082_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_4082_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_4082_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_4082_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_4082_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_4082_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_4083
#define AGONY_PP_PRIVATE_EVAL_REC_4082_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_4083(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_4083_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_4083_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_4083_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_4083_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_4083_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_4083_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_4083_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_4083_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_4083_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_4083_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_4084
#define AGONY_PP_PRIVATE_EVAL_REC_4083_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_4084(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_4084_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_4084_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_4084_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_4084_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_4084_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_4084_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_4084_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_4084_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_4084_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_4084_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_4085
#define AGONY_PP_PRIVATE_EVAL_REC_4084_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_4085(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_4085_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_4085_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_4085_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_4085_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_4085_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_4085_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_4085_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_4085_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_4085_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_4085_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_4086
#define AGONY_PP_PRIVATE_EVAL_REC_4085_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_4086(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_4086_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_4086_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_4086_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_4086_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_4086_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_4086_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_4086_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_4086_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_4086_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_4086_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_4087
#define AGONY_PP_PRIVATE_EVAL_REC_4086_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_4087(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_4087_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_4087_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_4087_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_4087_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_4087_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_4087_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_4087_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_4087_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_4087_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_4087_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_4088
#define AGONY_PP_PRIVATE_EVAL_REC_4087_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_4088(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_4088_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_4088_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_4088_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_4088_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_4088_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_4088_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_4088_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_4088_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_4088_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_4088_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_4089
#define AGONY_PP_PRIVATE_EVAL_REC_4088_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_4089(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_4089_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_4089_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_4089_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_4089_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_4089_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_4089_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_4089_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_4089_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_4089_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_4089_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_4090
#define AGONY_PP_PRIVATE_EVAL_REC_4089_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_4090(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_4090_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_4090_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_4090_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_4090_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_4090_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_4090_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_4090_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_4090_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_4090_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_4090_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_4091
#define AGONY_PP_PRIVATE_EVAL_REC_4090_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_4091(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_4091_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_4091_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_4091_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_4091_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_4091_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_4091_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_4091_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_4091_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_4091_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_4091_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_4092
#define AGONY_PP_PRIVATE_EVAL_REC_4091_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_4092(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_4092_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_4092_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_4092_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_4092_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_4092_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_4092_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_4092_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_4092_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_4092_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_4092_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_4093
#define AGONY_PP_PRIVATE_EVAL_REC_4092_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_4093(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_4093_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_4093_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_4093_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_4093_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_4093_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_4093_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_4093_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_4093_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_4093_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_4093_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_4094
#define AGONY_PP_PRIVATE_EVAL_REC_4093_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_4094(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_4094_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_4094_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_4094_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_4094_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_4094_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_4094_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_4094_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_4094_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_4094_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_4094_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_4095
#define AGONY_PP_PRIVATE_EVAL_REC_4094_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_4095(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_4095_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_4095_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_4095_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_4095_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_4095_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_4095_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_4095_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_4095_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_4095_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_4095_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_4096
#define AGONY_PP_PRIVATE_EVAL_REC_4095_STOP(...) __VA_ARGS__

#endif // AGONY_PP_EVAL_REC_UNROLL_3072_TO_4096_H
