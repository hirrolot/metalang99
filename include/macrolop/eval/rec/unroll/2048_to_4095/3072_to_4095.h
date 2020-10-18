#ifndef MACROLOP_EVAL_REC_UNROLL_3072_TO_4096_H
#define MACROLOP_EVAL_REC_UNROLL_3072_TO_4096_H

#define MACROLOP_PRIVATE_EVAL_REC_3072(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3072_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3072_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3072_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3072_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3072_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3072_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3072_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3072_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3072_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3072_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3073
#define MACROLOP_PRIVATE_EVAL_REC_3072_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3073(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3073_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3073_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3073_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3073_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3073_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3073_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3073_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3073_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3073_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3073_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3074
#define MACROLOP_PRIVATE_EVAL_REC_3073_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3074(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3074_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3074_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3074_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3074_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3074_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3074_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3074_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3074_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3074_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3074_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3075
#define MACROLOP_PRIVATE_EVAL_REC_3074_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3075(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3075_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3075_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3075_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3075_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3075_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3075_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3075_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3075_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3075_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3075_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3076
#define MACROLOP_PRIVATE_EVAL_REC_3075_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3076(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3076_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3076_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3076_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3076_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3076_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3076_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3076_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3076_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3076_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3076_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3077
#define MACROLOP_PRIVATE_EVAL_REC_3076_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3077(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3077_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3077_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3077_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3077_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3077_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3077_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3077_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3077_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3077_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3077_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3078
#define MACROLOP_PRIVATE_EVAL_REC_3077_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3078(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3078_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3078_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3078_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3078_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3078_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3078_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3078_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3078_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3078_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3078_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3079
#define MACROLOP_PRIVATE_EVAL_REC_3078_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3079(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3079_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3079_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3079_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3079_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3079_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3079_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3079_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3079_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3079_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3079_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3080
#define MACROLOP_PRIVATE_EVAL_REC_3079_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3080(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3080_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3080_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3080_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3080_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3080_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3080_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3080_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3080_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3080_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3080_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3081
#define MACROLOP_PRIVATE_EVAL_REC_3080_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3081(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3081_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3081_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3081_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3081_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3081_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3081_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3081_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3081_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3081_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3081_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3082
#define MACROLOP_PRIVATE_EVAL_REC_3081_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3082(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3082_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3082_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3082_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3082_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3082_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3082_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3082_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3082_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3082_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3082_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3083
#define MACROLOP_PRIVATE_EVAL_REC_3082_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3083(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3083_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3083_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3083_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3083_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3083_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3083_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3083_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3083_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3083_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3083_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3084
#define MACROLOP_PRIVATE_EVAL_REC_3083_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3084(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3084_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3084_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3084_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3084_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3084_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3084_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3084_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3084_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3084_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3084_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3085
#define MACROLOP_PRIVATE_EVAL_REC_3084_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3085(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3085_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3085_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3085_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3085_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3085_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3085_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3085_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3085_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3085_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3085_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3086
#define MACROLOP_PRIVATE_EVAL_REC_3085_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3086(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3086_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3086_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3086_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3086_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3086_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3086_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3086_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3086_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3086_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3086_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3087
#define MACROLOP_PRIVATE_EVAL_REC_3086_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3087(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3087_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3087_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3087_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3087_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3087_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3087_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3087_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3087_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3087_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3087_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3088
#define MACROLOP_PRIVATE_EVAL_REC_3087_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3088(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3088_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3088_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3088_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3088_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3088_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3088_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3088_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3088_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3088_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3088_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3089
#define MACROLOP_PRIVATE_EVAL_REC_3088_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3089(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3089_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3089_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3089_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3089_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3089_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3089_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3089_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3089_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3089_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3089_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3090
#define MACROLOP_PRIVATE_EVAL_REC_3089_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3090(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3090_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3090_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3090_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3090_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3090_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3090_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3090_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3090_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3090_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3090_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3091
#define MACROLOP_PRIVATE_EVAL_REC_3090_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3091(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3091_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3091_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3091_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3091_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3091_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3091_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3091_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3091_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3091_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3091_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3092
#define MACROLOP_PRIVATE_EVAL_REC_3091_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3092(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3092_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3092_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3092_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3092_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3092_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3092_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3092_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3092_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3092_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3092_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3093
#define MACROLOP_PRIVATE_EVAL_REC_3092_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3093(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3093_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3093_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3093_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3093_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3093_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3093_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3093_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3093_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3093_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3093_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3094
#define MACROLOP_PRIVATE_EVAL_REC_3093_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3094(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3094_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3094_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3094_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3094_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3094_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3094_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3094_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3094_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3094_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3094_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3095
#define MACROLOP_PRIVATE_EVAL_REC_3094_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3095(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3095_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3095_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3095_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3095_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3095_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3095_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3095_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3095_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3095_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3095_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3096
#define MACROLOP_PRIVATE_EVAL_REC_3095_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3096(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3096_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3096_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3096_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3096_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3096_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3096_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3096_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3096_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3096_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3096_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3097
#define MACROLOP_PRIVATE_EVAL_REC_3096_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3097(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3097_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3097_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3097_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3097_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3097_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3097_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3097_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3097_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3097_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3097_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3098
#define MACROLOP_PRIVATE_EVAL_REC_3097_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3098(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3098_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3098_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3098_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3098_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3098_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3098_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3098_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3098_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3098_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3098_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3099
#define MACROLOP_PRIVATE_EVAL_REC_3098_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3099(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3099_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3099_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3099_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3099_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3099_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3099_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3099_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3099_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3099_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3099_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3100
#define MACROLOP_PRIVATE_EVAL_REC_3099_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3100(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3100_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3100_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3100_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3100_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3100_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3100_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3100_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3100_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3100_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3100_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3101
#define MACROLOP_PRIVATE_EVAL_REC_3100_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3101(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3101_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3101_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3101_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3101_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3101_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3101_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3101_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3101_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3101_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3101_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3102
#define MACROLOP_PRIVATE_EVAL_REC_3101_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3102(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3102_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3102_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3102_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3102_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3102_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3102_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3102_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3102_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3102_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3102_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3103
#define MACROLOP_PRIVATE_EVAL_REC_3102_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3103(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3103_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3103_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3103_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3103_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3103_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3103_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3103_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3103_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3103_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3103_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3104
#define MACROLOP_PRIVATE_EVAL_REC_3103_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3104(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3104_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3104_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3104_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3104_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3104_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3104_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3104_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3104_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3104_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3104_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3105
#define MACROLOP_PRIVATE_EVAL_REC_3104_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3105(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3105_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3105_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3105_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3105_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3105_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3105_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3105_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3105_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3105_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3105_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3106
#define MACROLOP_PRIVATE_EVAL_REC_3105_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3106(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3106_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3106_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3106_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3106_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3106_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3106_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3106_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3106_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3106_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3106_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3107
#define MACROLOP_PRIVATE_EVAL_REC_3106_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3107(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3107_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3107_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3107_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3107_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3107_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3107_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3107_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3107_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3107_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3107_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3108
#define MACROLOP_PRIVATE_EVAL_REC_3107_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3108(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3108_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3108_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3108_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3108_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3108_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3108_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3108_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3108_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3108_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3108_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3109
#define MACROLOP_PRIVATE_EVAL_REC_3108_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3109(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3109_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3109_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3109_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3109_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3109_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3109_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3109_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3109_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3109_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3109_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3110
#define MACROLOP_PRIVATE_EVAL_REC_3109_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3110(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3110_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3110_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3110_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3110_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3110_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3110_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3110_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3110_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3110_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3110_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3111
#define MACROLOP_PRIVATE_EVAL_REC_3110_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3111(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3111_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3111_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3111_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3111_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3111_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3111_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3111_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3111_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3111_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3111_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3112
#define MACROLOP_PRIVATE_EVAL_REC_3111_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3112(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3112_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3112_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3112_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3112_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3112_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3112_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3112_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3112_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3112_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3112_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3113
#define MACROLOP_PRIVATE_EVAL_REC_3112_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3113(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3113_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3113_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3113_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3113_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3113_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3113_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3113_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3113_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3113_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3113_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3114
#define MACROLOP_PRIVATE_EVAL_REC_3113_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3114(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3114_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3114_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3114_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3114_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3114_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3114_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3114_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3114_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3114_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3114_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3115
#define MACROLOP_PRIVATE_EVAL_REC_3114_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3115(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3115_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3115_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3115_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3115_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3115_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3115_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3115_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3115_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3115_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3115_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3116
#define MACROLOP_PRIVATE_EVAL_REC_3115_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3116(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3116_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3116_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3116_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3116_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3116_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3116_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3116_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3116_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3116_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3116_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3117
#define MACROLOP_PRIVATE_EVAL_REC_3116_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3117(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3117_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3117_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3117_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3117_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3117_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3117_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3117_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3117_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3117_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3117_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3118
#define MACROLOP_PRIVATE_EVAL_REC_3117_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3118(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3118_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3118_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3118_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3118_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3118_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3118_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3118_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3118_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3118_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3118_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3119
#define MACROLOP_PRIVATE_EVAL_REC_3118_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3119(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3119_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3119_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3119_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3119_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3119_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3119_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3119_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3119_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3119_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3119_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3120
#define MACROLOP_PRIVATE_EVAL_REC_3119_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3120(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3120_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3120_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3120_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3120_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3120_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3120_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3120_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3120_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3120_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3120_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3121
#define MACROLOP_PRIVATE_EVAL_REC_3120_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3121(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3121_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3121_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3121_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3121_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3121_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3121_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3121_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3121_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3121_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3121_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3122
#define MACROLOP_PRIVATE_EVAL_REC_3121_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3122(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3122_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3122_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3122_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3122_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3122_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3122_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3122_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3122_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3122_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3122_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3123
#define MACROLOP_PRIVATE_EVAL_REC_3122_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3123(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3123_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3123_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3123_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3123_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3123_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3123_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3123_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3123_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3123_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3123_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3124
#define MACROLOP_PRIVATE_EVAL_REC_3123_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3124(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3124_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3124_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3124_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3124_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3124_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3124_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3124_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3124_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3124_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3124_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3125
#define MACROLOP_PRIVATE_EVAL_REC_3124_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3125(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3125_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3125_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3125_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3125_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3125_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3125_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3125_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3125_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3125_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3125_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3126
#define MACROLOP_PRIVATE_EVAL_REC_3125_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3126(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3126_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3126_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3126_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3126_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3126_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3126_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3126_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3126_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3126_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3126_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3127
#define MACROLOP_PRIVATE_EVAL_REC_3126_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3127(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3127_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3127_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3127_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3127_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3127_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3127_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3127_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3127_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3127_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3127_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3128
#define MACROLOP_PRIVATE_EVAL_REC_3127_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3128(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3128_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3128_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3128_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3128_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3128_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3128_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3128_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3128_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3128_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3128_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3129
#define MACROLOP_PRIVATE_EVAL_REC_3128_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3129(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3129_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3129_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3129_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3129_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3129_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3129_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3129_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3129_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3129_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3129_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3130
#define MACROLOP_PRIVATE_EVAL_REC_3129_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3130(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3130_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3130_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3130_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3130_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3130_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3130_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3130_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3130_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3130_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3130_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3131
#define MACROLOP_PRIVATE_EVAL_REC_3130_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3131(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3131_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3131_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3131_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3131_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3131_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3131_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3131_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3131_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3131_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3131_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3132
#define MACROLOP_PRIVATE_EVAL_REC_3131_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3132(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3132_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3132_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3132_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3132_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3132_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3132_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3132_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3132_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3132_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3132_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3133
#define MACROLOP_PRIVATE_EVAL_REC_3132_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3133(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3133_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3133_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3133_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3133_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3133_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3133_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3133_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3133_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3133_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3133_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3134
#define MACROLOP_PRIVATE_EVAL_REC_3133_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3134(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3134_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3134_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3134_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3134_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3134_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3134_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3134_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3134_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3134_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3134_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3135
#define MACROLOP_PRIVATE_EVAL_REC_3134_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3135(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3135_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3135_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3135_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3135_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3135_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3135_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3135_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3135_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3135_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3135_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3136
#define MACROLOP_PRIVATE_EVAL_REC_3135_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3136(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3136_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3136_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3136_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3136_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3136_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3136_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3136_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3136_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3136_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3136_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3137
#define MACROLOP_PRIVATE_EVAL_REC_3136_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3137(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3137_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3137_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3137_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3137_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3137_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3137_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3137_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3137_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3137_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3137_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3138
#define MACROLOP_PRIVATE_EVAL_REC_3137_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3138(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3138_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3138_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3138_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3138_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3138_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3138_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3138_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3138_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3138_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3138_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3139
#define MACROLOP_PRIVATE_EVAL_REC_3138_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3139(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3139_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3139_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3139_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3139_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3139_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3139_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3139_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3139_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3139_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3139_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3140
#define MACROLOP_PRIVATE_EVAL_REC_3139_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3140(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3140_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3140_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3140_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3140_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3140_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3140_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3140_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3140_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3140_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3140_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3141
#define MACROLOP_PRIVATE_EVAL_REC_3140_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3141(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3141_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3141_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3141_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3141_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3141_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3141_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3141_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3141_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3141_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3141_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3142
#define MACROLOP_PRIVATE_EVAL_REC_3141_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3142(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3142_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3142_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3142_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3142_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3142_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3142_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3142_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3142_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3142_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3142_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3143
#define MACROLOP_PRIVATE_EVAL_REC_3142_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3143(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3143_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3143_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3143_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3143_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3143_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3143_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3143_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3143_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3143_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3143_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3144
#define MACROLOP_PRIVATE_EVAL_REC_3143_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3144(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3144_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3144_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3144_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3144_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3144_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3144_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3144_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3144_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3144_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3144_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3145
#define MACROLOP_PRIVATE_EVAL_REC_3144_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3145(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3145_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3145_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3145_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3145_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3145_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3145_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3145_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3145_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3145_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3145_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3146
#define MACROLOP_PRIVATE_EVAL_REC_3145_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3146(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3146_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3146_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3146_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3146_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3146_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3146_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3146_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3146_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3146_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3146_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3147
#define MACROLOP_PRIVATE_EVAL_REC_3146_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3147(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3147_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3147_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3147_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3147_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3147_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3147_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3147_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3147_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3147_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3147_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3148
#define MACROLOP_PRIVATE_EVAL_REC_3147_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3148(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3148_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3148_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3148_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3148_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3148_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3148_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3148_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3148_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3148_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3148_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3149
#define MACROLOP_PRIVATE_EVAL_REC_3148_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3149(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3149_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3149_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3149_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3149_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3149_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3149_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3149_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3149_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3149_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3149_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3150
#define MACROLOP_PRIVATE_EVAL_REC_3149_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3150(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3150_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3150_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3150_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3150_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3150_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3150_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3150_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3150_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3150_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3150_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3151
#define MACROLOP_PRIVATE_EVAL_REC_3150_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3151(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3151_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3151_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3151_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3151_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3151_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3151_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3151_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3151_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3151_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3151_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3152
#define MACROLOP_PRIVATE_EVAL_REC_3151_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3152(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3152_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3152_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3152_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3152_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3152_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3152_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3152_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3152_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3152_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3152_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3153
#define MACROLOP_PRIVATE_EVAL_REC_3152_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3153(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3153_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3153_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3153_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3153_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3153_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3153_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3153_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3153_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3153_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3153_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3154
#define MACROLOP_PRIVATE_EVAL_REC_3153_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3154(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3154_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3154_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3154_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3154_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3154_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3154_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3154_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3154_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3154_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3154_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3155
#define MACROLOP_PRIVATE_EVAL_REC_3154_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3155(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3155_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3155_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3155_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3155_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3155_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3155_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3155_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3155_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3155_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3155_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3156
#define MACROLOP_PRIVATE_EVAL_REC_3155_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3156(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3156_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3156_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3156_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3156_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3156_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3156_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3156_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3156_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3156_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3156_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3157
#define MACROLOP_PRIVATE_EVAL_REC_3156_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3157(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3157_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3157_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3157_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3157_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3157_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3157_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3157_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3157_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3157_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3157_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3158
#define MACROLOP_PRIVATE_EVAL_REC_3157_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3158(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3158_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3158_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3158_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3158_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3158_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3158_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3158_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3158_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3158_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3158_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3159
#define MACROLOP_PRIVATE_EVAL_REC_3158_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3159(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3159_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3159_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3159_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3159_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3159_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3159_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3159_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3159_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3159_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3159_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3160
#define MACROLOP_PRIVATE_EVAL_REC_3159_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3160(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3160_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3160_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3160_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3160_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3160_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3160_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3160_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3160_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3160_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3160_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3161
#define MACROLOP_PRIVATE_EVAL_REC_3160_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3161(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3161_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3161_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3161_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3161_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3161_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3161_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3161_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3161_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3161_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3161_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3162
#define MACROLOP_PRIVATE_EVAL_REC_3161_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3162(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3162_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3162_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3162_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3162_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3162_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3162_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3162_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3162_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3162_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3162_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3163
#define MACROLOP_PRIVATE_EVAL_REC_3162_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3163(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3163_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3163_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3163_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3163_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3163_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3163_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3163_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3163_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3163_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3163_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3164
#define MACROLOP_PRIVATE_EVAL_REC_3163_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3164(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3164_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3164_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3164_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3164_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3164_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3164_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3164_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3164_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3164_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3164_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3165
#define MACROLOP_PRIVATE_EVAL_REC_3164_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3165(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3165_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3165_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3165_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3165_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3165_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3165_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3165_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3165_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3165_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3165_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3166
#define MACROLOP_PRIVATE_EVAL_REC_3165_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3166(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3166_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3166_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3166_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3166_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3166_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3166_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3166_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3166_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3166_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3166_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3167
#define MACROLOP_PRIVATE_EVAL_REC_3166_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3167(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3167_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3167_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3167_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3167_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3167_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3167_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3167_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3167_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3167_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3167_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3168
#define MACROLOP_PRIVATE_EVAL_REC_3167_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3168(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3168_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3168_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3168_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3168_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3168_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3168_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3168_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3168_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3168_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3168_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3169
#define MACROLOP_PRIVATE_EVAL_REC_3168_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3169(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3169_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3169_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3169_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3169_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3169_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3169_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3169_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3169_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3169_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3169_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3170
#define MACROLOP_PRIVATE_EVAL_REC_3169_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3170(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3170_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3170_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3170_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3170_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3170_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3170_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3170_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3170_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3170_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3170_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3171
#define MACROLOP_PRIVATE_EVAL_REC_3170_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3171(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3171_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3171_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3171_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3171_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3171_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3171_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3171_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3171_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3171_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3171_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3172
#define MACROLOP_PRIVATE_EVAL_REC_3171_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3172(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3172_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3172_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3172_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3172_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3172_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3172_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3172_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3172_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3172_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3172_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3173
#define MACROLOP_PRIVATE_EVAL_REC_3172_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3173(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3173_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3173_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3173_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3173_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3173_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3173_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3173_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3173_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3173_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3173_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3174
#define MACROLOP_PRIVATE_EVAL_REC_3173_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3174(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3174_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3174_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3174_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3174_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3174_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3174_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3174_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3174_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3174_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3174_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3175
#define MACROLOP_PRIVATE_EVAL_REC_3174_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3175(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3175_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3175_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3175_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3175_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3175_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3175_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3175_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3175_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3175_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3175_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3176
#define MACROLOP_PRIVATE_EVAL_REC_3175_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3176(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3176_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3176_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3176_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3176_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3176_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3176_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3176_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3176_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3176_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3176_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3177
#define MACROLOP_PRIVATE_EVAL_REC_3176_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3177(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3177_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3177_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3177_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3177_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3177_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3177_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3177_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3177_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3177_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3177_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3178
#define MACROLOP_PRIVATE_EVAL_REC_3177_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3178(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3178_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3178_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3178_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3178_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3178_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3178_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3178_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3178_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3178_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3178_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3179
#define MACROLOP_PRIVATE_EVAL_REC_3178_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3179(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3179_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3179_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3179_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3179_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3179_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3179_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3179_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3179_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3179_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3179_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3180
#define MACROLOP_PRIVATE_EVAL_REC_3179_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3180(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3180_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3180_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3180_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3180_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3180_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3180_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3180_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3180_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3180_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3180_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3181
#define MACROLOP_PRIVATE_EVAL_REC_3180_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3181(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3181_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3181_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3181_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3181_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3181_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3181_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3181_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3181_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3181_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3181_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3182
#define MACROLOP_PRIVATE_EVAL_REC_3181_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3182(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3182_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3182_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3182_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3182_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3182_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3182_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3182_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3182_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3182_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3182_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3183
#define MACROLOP_PRIVATE_EVAL_REC_3182_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3183(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3183_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3183_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3183_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3183_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3183_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3183_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3183_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3183_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3183_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3183_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3184
#define MACROLOP_PRIVATE_EVAL_REC_3183_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3184(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3184_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3184_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3184_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3184_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3184_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3184_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3184_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3184_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3184_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3184_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3185
#define MACROLOP_PRIVATE_EVAL_REC_3184_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3185(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3185_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3185_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3185_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3185_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3185_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3185_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3185_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3185_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3185_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3185_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3186
#define MACROLOP_PRIVATE_EVAL_REC_3185_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3186(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3186_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3186_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3186_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3186_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3186_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3186_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3186_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3186_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3186_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3186_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3187
#define MACROLOP_PRIVATE_EVAL_REC_3186_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3187(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3187_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3187_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3187_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3187_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3187_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3187_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3187_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3187_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3187_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3187_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3188
#define MACROLOP_PRIVATE_EVAL_REC_3187_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3188(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3188_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3188_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3188_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3188_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3188_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3188_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3188_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3188_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3188_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3188_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3189
#define MACROLOP_PRIVATE_EVAL_REC_3188_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3189(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3189_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3189_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3189_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3189_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3189_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3189_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3189_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3189_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3189_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3189_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3190
#define MACROLOP_PRIVATE_EVAL_REC_3189_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3190(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3190_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3190_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3190_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3190_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3190_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3190_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3190_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3190_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3190_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3190_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3191
#define MACROLOP_PRIVATE_EVAL_REC_3190_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3191(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3191_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3191_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3191_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3191_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3191_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3191_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3191_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3191_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3191_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3191_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3192
#define MACROLOP_PRIVATE_EVAL_REC_3191_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3192(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3192_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3192_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3192_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3192_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3192_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3192_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3192_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3192_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3192_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3192_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3193
#define MACROLOP_PRIVATE_EVAL_REC_3192_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3193(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3193_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3193_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3193_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3193_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3193_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3193_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3193_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3193_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3193_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3193_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3194
#define MACROLOP_PRIVATE_EVAL_REC_3193_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3194(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3194_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3194_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3194_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3194_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3194_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3194_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3194_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3194_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3194_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3194_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3195
#define MACROLOP_PRIVATE_EVAL_REC_3194_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3195(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3195_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3195_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3195_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3195_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3195_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3195_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3195_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3195_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3195_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3195_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3196
#define MACROLOP_PRIVATE_EVAL_REC_3195_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3196(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3196_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3196_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3196_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3196_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3196_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3196_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3196_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3196_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3196_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3196_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3197
#define MACROLOP_PRIVATE_EVAL_REC_3196_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3197(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3197_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3197_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3197_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3197_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3197_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3197_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3197_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3197_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3197_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3197_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3198
#define MACROLOP_PRIVATE_EVAL_REC_3197_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3198(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3198_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3198_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3198_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3198_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3198_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3198_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3198_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3198_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3198_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3198_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3199
#define MACROLOP_PRIVATE_EVAL_REC_3198_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3199(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3199_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3199_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3199_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3199_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3199_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3199_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3199_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3199_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3199_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3199_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3200
#define MACROLOP_PRIVATE_EVAL_REC_3199_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3200(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3200_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3200_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3200_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3200_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3200_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3200_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3200_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3200_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3200_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3200_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3201
#define MACROLOP_PRIVATE_EVAL_REC_3200_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3201(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3201_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3201_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3201_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3201_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3201_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3201_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3201_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3201_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3201_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3201_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3202
#define MACROLOP_PRIVATE_EVAL_REC_3201_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3202(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3202_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3202_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3202_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3202_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3202_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3202_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3202_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3202_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3202_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3202_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3203
#define MACROLOP_PRIVATE_EVAL_REC_3202_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3203(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3203_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3203_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3203_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3203_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3203_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3203_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3203_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3203_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3203_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3203_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3204
#define MACROLOP_PRIVATE_EVAL_REC_3203_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3204(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3204_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3204_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3204_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3204_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3204_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3204_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3204_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3204_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3204_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3204_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3205
#define MACROLOP_PRIVATE_EVAL_REC_3204_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3205(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3205_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3205_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3205_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3205_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3205_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3205_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3205_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3205_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3205_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3205_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3206
#define MACROLOP_PRIVATE_EVAL_REC_3205_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3206(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3206_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3206_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3206_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3206_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3206_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3206_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3206_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3206_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3206_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3206_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3207
#define MACROLOP_PRIVATE_EVAL_REC_3206_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3207(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3207_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3207_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3207_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3207_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3207_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3207_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3207_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3207_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3207_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3207_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3208
#define MACROLOP_PRIVATE_EVAL_REC_3207_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3208(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3208_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3208_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3208_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3208_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3208_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3208_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3208_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3208_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3208_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3208_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3209
#define MACROLOP_PRIVATE_EVAL_REC_3208_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3209(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3209_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3209_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3209_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3209_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3209_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3209_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3209_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3209_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3209_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3209_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3210
#define MACROLOP_PRIVATE_EVAL_REC_3209_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3210(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3210_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3210_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3210_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3210_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3210_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3210_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3210_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3210_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3210_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3210_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3211
#define MACROLOP_PRIVATE_EVAL_REC_3210_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3211(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3211_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3211_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3211_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3211_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3211_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3211_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3211_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3211_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3211_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3211_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3212
#define MACROLOP_PRIVATE_EVAL_REC_3211_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3212(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3212_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3212_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3212_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3212_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3212_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3212_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3212_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3212_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3212_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3212_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3213
#define MACROLOP_PRIVATE_EVAL_REC_3212_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3213(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3213_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3213_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3213_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3213_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3213_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3213_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3213_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3213_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3213_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3213_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3214
#define MACROLOP_PRIVATE_EVAL_REC_3213_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3214(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3214_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3214_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3214_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3214_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3214_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3214_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3214_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3214_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3214_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3214_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3215
#define MACROLOP_PRIVATE_EVAL_REC_3214_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3215(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3215_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3215_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3215_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3215_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3215_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3215_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3215_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3215_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3215_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3215_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3216
#define MACROLOP_PRIVATE_EVAL_REC_3215_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3216(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3216_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3216_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3216_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3216_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3216_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3216_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3216_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3216_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3216_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3216_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3217
#define MACROLOP_PRIVATE_EVAL_REC_3216_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3217(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3217_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3217_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3217_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3217_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3217_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3217_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3217_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3217_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3217_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3217_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3218
#define MACROLOP_PRIVATE_EVAL_REC_3217_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3218(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3218_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3218_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3218_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3218_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3218_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3218_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3218_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3218_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3218_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3218_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3219
#define MACROLOP_PRIVATE_EVAL_REC_3218_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3219(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3219_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3219_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3219_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3219_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3219_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3219_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3219_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3219_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3219_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3219_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3220
#define MACROLOP_PRIVATE_EVAL_REC_3219_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3220(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3220_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3220_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3220_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3220_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3220_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3220_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3220_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3220_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3220_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3220_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3221
#define MACROLOP_PRIVATE_EVAL_REC_3220_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3221(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3221_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3221_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3221_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3221_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3221_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3221_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3221_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3221_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3221_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3221_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3222
#define MACROLOP_PRIVATE_EVAL_REC_3221_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3222(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3222_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3222_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3222_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3222_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3222_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3222_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3222_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3222_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3222_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3222_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3223
#define MACROLOP_PRIVATE_EVAL_REC_3222_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3223(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3223_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3223_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3223_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3223_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3223_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3223_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3223_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3223_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3223_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3223_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3224
#define MACROLOP_PRIVATE_EVAL_REC_3223_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3224(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3224_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3224_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3224_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3224_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3224_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3224_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3224_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3224_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3224_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3224_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3225
#define MACROLOP_PRIVATE_EVAL_REC_3224_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3225(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3225_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3225_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3225_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3225_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3225_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3225_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3225_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3225_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3225_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3225_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3226
#define MACROLOP_PRIVATE_EVAL_REC_3225_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3226(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3226_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3226_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3226_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3226_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3226_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3226_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3226_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3226_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3226_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3226_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3227
#define MACROLOP_PRIVATE_EVAL_REC_3226_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3227(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3227_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3227_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3227_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3227_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3227_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3227_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3227_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3227_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3227_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3227_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3228
#define MACROLOP_PRIVATE_EVAL_REC_3227_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3228(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3228_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3228_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3228_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3228_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3228_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3228_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3228_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3228_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3228_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3228_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3229
#define MACROLOP_PRIVATE_EVAL_REC_3228_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3229(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3229_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3229_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3229_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3229_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3229_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3229_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3229_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3229_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3229_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3229_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3230
#define MACROLOP_PRIVATE_EVAL_REC_3229_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3230(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3230_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3230_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3230_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3230_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3230_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3230_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3230_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3230_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3230_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3230_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3231
#define MACROLOP_PRIVATE_EVAL_REC_3230_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3231(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3231_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3231_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3231_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3231_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3231_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3231_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3231_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3231_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3231_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3231_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3232
#define MACROLOP_PRIVATE_EVAL_REC_3231_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3232(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3232_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3232_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3232_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3232_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3232_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3232_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3232_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3232_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3232_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3232_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3233
#define MACROLOP_PRIVATE_EVAL_REC_3232_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3233(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3233_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3233_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3233_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3233_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3233_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3233_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3233_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3233_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3233_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3233_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3234
#define MACROLOP_PRIVATE_EVAL_REC_3233_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3234(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3234_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3234_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3234_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3234_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3234_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3234_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3234_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3234_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3234_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3234_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3235
#define MACROLOP_PRIVATE_EVAL_REC_3234_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3235(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3235_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3235_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3235_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3235_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3235_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3235_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3235_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3235_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3235_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3235_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3236
#define MACROLOP_PRIVATE_EVAL_REC_3235_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3236(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3236_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3236_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3236_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3236_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3236_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3236_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3236_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3236_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3236_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3236_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3237
#define MACROLOP_PRIVATE_EVAL_REC_3236_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3237(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3237_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3237_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3237_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3237_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3237_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3237_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3237_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3237_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3237_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3237_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3238
#define MACROLOP_PRIVATE_EVAL_REC_3237_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3238(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3238_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3238_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3238_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3238_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3238_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3238_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3238_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3238_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3238_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3238_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3239
#define MACROLOP_PRIVATE_EVAL_REC_3238_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3239(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3239_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3239_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3239_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3239_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3239_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3239_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3239_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3239_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3239_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3239_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3240
#define MACROLOP_PRIVATE_EVAL_REC_3239_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3240(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3240_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3240_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3240_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3240_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3240_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3240_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3240_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3240_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3240_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3240_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3241
#define MACROLOP_PRIVATE_EVAL_REC_3240_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3241(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3241_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3241_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3241_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3241_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3241_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3241_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3241_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3241_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3241_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3241_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3242
#define MACROLOP_PRIVATE_EVAL_REC_3241_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3242(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3242_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3242_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3242_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3242_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3242_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3242_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3242_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3242_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3242_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3242_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3243
#define MACROLOP_PRIVATE_EVAL_REC_3242_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3243(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3243_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3243_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3243_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3243_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3243_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3243_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3243_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3243_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3243_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3243_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3244
#define MACROLOP_PRIVATE_EVAL_REC_3243_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3244(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3244_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3244_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3244_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3244_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3244_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3244_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3244_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3244_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3244_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3244_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3245
#define MACROLOP_PRIVATE_EVAL_REC_3244_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3245(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3245_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3245_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3245_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3245_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3245_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3245_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3245_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3245_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3245_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3245_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3246
#define MACROLOP_PRIVATE_EVAL_REC_3245_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3246(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3246_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3246_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3246_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3246_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3246_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3246_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3246_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3246_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3246_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3246_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3247
#define MACROLOP_PRIVATE_EVAL_REC_3246_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3247(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3247_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3247_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3247_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3247_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3247_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3247_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3247_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3247_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3247_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3247_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3248
#define MACROLOP_PRIVATE_EVAL_REC_3247_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3248(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3248_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3248_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3248_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3248_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3248_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3248_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3248_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3248_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3248_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3248_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3249
#define MACROLOP_PRIVATE_EVAL_REC_3248_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3249(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3249_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3249_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3249_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3249_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3249_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3249_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3249_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3249_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3249_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3249_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3250
#define MACROLOP_PRIVATE_EVAL_REC_3249_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3250(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3250_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3250_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3250_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3250_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3250_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3250_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3250_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3250_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3250_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3250_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3251
#define MACROLOP_PRIVATE_EVAL_REC_3250_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3251(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3251_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3251_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3251_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3251_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3251_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3251_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3251_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3251_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3251_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3251_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3252
#define MACROLOP_PRIVATE_EVAL_REC_3251_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3252(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3252_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3252_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3252_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3252_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3252_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3252_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3252_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3252_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3252_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3252_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3253
#define MACROLOP_PRIVATE_EVAL_REC_3252_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3253(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3253_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3253_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3253_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3253_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3253_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3253_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3253_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3253_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3253_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3253_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3254
#define MACROLOP_PRIVATE_EVAL_REC_3253_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3254(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3254_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3254_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3254_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3254_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3254_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3254_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3254_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3254_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3254_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3254_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3255
#define MACROLOP_PRIVATE_EVAL_REC_3254_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3255(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3255_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3255_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3255_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3255_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3255_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3255_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3255_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3255_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3255_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3255_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3256
#define MACROLOP_PRIVATE_EVAL_REC_3255_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3256(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3256_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3256_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3256_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3256_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3256_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3256_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3256_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3256_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3256_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3256_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3257
#define MACROLOP_PRIVATE_EVAL_REC_3256_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3257(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3257_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3257_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3257_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3257_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3257_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3257_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3257_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3257_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3257_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3257_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3258
#define MACROLOP_PRIVATE_EVAL_REC_3257_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3258(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3258_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3258_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3258_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3258_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3258_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3258_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3258_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3258_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3258_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3258_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3259
#define MACROLOP_PRIVATE_EVAL_REC_3258_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3259(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3259_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3259_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3259_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3259_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3259_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3259_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3259_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3259_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3259_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3259_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3260
#define MACROLOP_PRIVATE_EVAL_REC_3259_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3260(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3260_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3260_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3260_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3260_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3260_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3260_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3260_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3260_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3260_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3260_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3261
#define MACROLOP_PRIVATE_EVAL_REC_3260_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3261(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3261_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3261_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3261_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3261_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3261_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3261_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3261_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3261_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3261_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3261_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3262
#define MACROLOP_PRIVATE_EVAL_REC_3261_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3262(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3262_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3262_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3262_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3262_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3262_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3262_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3262_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3262_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3262_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3262_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3263
#define MACROLOP_PRIVATE_EVAL_REC_3262_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3263(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3263_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3263_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3263_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3263_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3263_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3263_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3263_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3263_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3263_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3263_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3264
#define MACROLOP_PRIVATE_EVAL_REC_3263_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3264(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3264_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3264_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3264_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3264_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3264_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3264_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3264_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3264_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3264_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3264_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3265
#define MACROLOP_PRIVATE_EVAL_REC_3264_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3265(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3265_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3265_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3265_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3265_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3265_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3265_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3265_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3265_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3265_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3265_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3266
#define MACROLOP_PRIVATE_EVAL_REC_3265_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3266(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3266_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3266_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3266_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3266_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3266_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3266_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3266_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3266_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3266_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3266_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3267
#define MACROLOP_PRIVATE_EVAL_REC_3266_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3267(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3267_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3267_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3267_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3267_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3267_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3267_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3267_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3267_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3267_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3267_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3268
#define MACROLOP_PRIVATE_EVAL_REC_3267_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3268(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3268_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3268_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3268_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3268_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3268_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3268_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3268_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3268_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3268_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3268_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3269
#define MACROLOP_PRIVATE_EVAL_REC_3268_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3269(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3269_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3269_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3269_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3269_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3269_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3269_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3269_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3269_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3269_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3269_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3270
#define MACROLOP_PRIVATE_EVAL_REC_3269_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3270(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3270_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3270_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3270_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3270_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3270_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3270_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3270_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3270_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3270_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3270_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3271
#define MACROLOP_PRIVATE_EVAL_REC_3270_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3271(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3271_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3271_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3271_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3271_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3271_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3271_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3271_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3271_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3271_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3271_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3272
#define MACROLOP_PRIVATE_EVAL_REC_3271_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3272(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3272_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3272_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3272_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3272_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3272_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3272_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3272_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3272_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3272_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3272_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3273
#define MACROLOP_PRIVATE_EVAL_REC_3272_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3273(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3273_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3273_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3273_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3273_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3273_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3273_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3273_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3273_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3273_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3273_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3274
#define MACROLOP_PRIVATE_EVAL_REC_3273_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3274(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3274_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3274_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3274_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3274_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3274_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3274_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3274_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3274_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3274_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3274_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3275
#define MACROLOP_PRIVATE_EVAL_REC_3274_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3275(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3275_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3275_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3275_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3275_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3275_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3275_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3275_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3275_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3275_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3275_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3276
#define MACROLOP_PRIVATE_EVAL_REC_3275_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3276(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3276_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3276_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3276_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3276_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3276_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3276_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3276_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3276_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3276_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3276_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3277
#define MACROLOP_PRIVATE_EVAL_REC_3276_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3277(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3277_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3277_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3277_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3277_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3277_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3277_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3277_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3277_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3277_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3277_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3278
#define MACROLOP_PRIVATE_EVAL_REC_3277_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3278(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3278_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3278_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3278_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3278_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3278_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3278_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3278_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3278_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3278_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3278_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3279
#define MACROLOP_PRIVATE_EVAL_REC_3278_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3279(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3279_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3279_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3279_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3279_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3279_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3279_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3279_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3279_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3279_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3279_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3280
#define MACROLOP_PRIVATE_EVAL_REC_3279_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3280(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3280_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3280_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3280_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3280_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3280_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3280_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3280_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3280_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3280_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3280_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3281
#define MACROLOP_PRIVATE_EVAL_REC_3280_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3281(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3281_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3281_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3281_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3281_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3281_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3281_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3281_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3281_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3281_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3281_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3282
#define MACROLOP_PRIVATE_EVAL_REC_3281_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3282(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3282_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3282_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3282_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3282_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3282_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3282_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3282_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3282_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3282_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3282_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3283
#define MACROLOP_PRIVATE_EVAL_REC_3282_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3283(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3283_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3283_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3283_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3283_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3283_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3283_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3283_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3283_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3283_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3283_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3284
#define MACROLOP_PRIVATE_EVAL_REC_3283_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3284(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3284_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3284_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3284_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3284_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3284_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3284_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3284_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3284_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3284_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3284_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3285
#define MACROLOP_PRIVATE_EVAL_REC_3284_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3285(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3285_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3285_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3285_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3285_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3285_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3285_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3285_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3285_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3285_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3285_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3286
#define MACROLOP_PRIVATE_EVAL_REC_3285_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3286(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3286_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3286_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3286_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3286_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3286_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3286_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3286_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3286_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3286_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3286_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3287
#define MACROLOP_PRIVATE_EVAL_REC_3286_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3287(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3287_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3287_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3287_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3287_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3287_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3287_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3287_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3287_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3287_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3287_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3288
#define MACROLOP_PRIVATE_EVAL_REC_3287_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3288(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3288_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3288_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3288_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3288_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3288_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3288_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3288_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3288_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3288_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3288_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3289
#define MACROLOP_PRIVATE_EVAL_REC_3288_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3289(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3289_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3289_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3289_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3289_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3289_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3289_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3289_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3289_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3289_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3289_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3290
#define MACROLOP_PRIVATE_EVAL_REC_3289_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3290(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3290_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3290_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3290_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3290_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3290_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3290_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3290_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3290_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3290_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3290_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3291
#define MACROLOP_PRIVATE_EVAL_REC_3290_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3291(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3291_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3291_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3291_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3291_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3291_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3291_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3291_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3291_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3291_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3291_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3292
#define MACROLOP_PRIVATE_EVAL_REC_3291_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3292(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3292_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3292_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3292_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3292_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3292_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3292_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3292_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3292_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3292_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3292_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3293
#define MACROLOP_PRIVATE_EVAL_REC_3292_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3293(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3293_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3293_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3293_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3293_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3293_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3293_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3293_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3293_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3293_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3293_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3294
#define MACROLOP_PRIVATE_EVAL_REC_3293_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3294(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3294_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3294_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3294_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3294_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3294_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3294_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3294_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3294_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3294_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3294_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3295
#define MACROLOP_PRIVATE_EVAL_REC_3294_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3295(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3295_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3295_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3295_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3295_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3295_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3295_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3295_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3295_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3295_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3295_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3296
#define MACROLOP_PRIVATE_EVAL_REC_3295_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3296(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3296_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3296_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3296_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3296_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3296_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3296_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3296_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3296_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3296_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3296_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3297
#define MACROLOP_PRIVATE_EVAL_REC_3296_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3297(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3297_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3297_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3297_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3297_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3297_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3297_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3297_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3297_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3297_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3297_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3298
#define MACROLOP_PRIVATE_EVAL_REC_3297_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3298(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3298_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3298_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3298_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3298_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3298_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3298_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3298_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3298_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3298_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3298_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3299
#define MACROLOP_PRIVATE_EVAL_REC_3298_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3299(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3299_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3299_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3299_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3299_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3299_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3299_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3299_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3299_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3299_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3299_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3300
#define MACROLOP_PRIVATE_EVAL_REC_3299_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3300(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3300_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3300_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3300_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3300_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3300_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3300_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3300_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3300_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3300_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3300_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3301
#define MACROLOP_PRIVATE_EVAL_REC_3300_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3301(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3301_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3301_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3301_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3301_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3301_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3301_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3301_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3301_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3301_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3301_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3302
#define MACROLOP_PRIVATE_EVAL_REC_3301_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3302(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3302_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3302_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3302_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3302_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3302_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3302_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3302_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3302_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3302_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3302_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3303
#define MACROLOP_PRIVATE_EVAL_REC_3302_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3303(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3303_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3303_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3303_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3303_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3303_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3303_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3303_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3303_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3303_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3303_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3304
#define MACROLOP_PRIVATE_EVAL_REC_3303_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3304(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3304_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3304_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3304_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3304_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3304_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3304_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3304_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3304_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3304_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3304_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3305
#define MACROLOP_PRIVATE_EVAL_REC_3304_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3305(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3305_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3305_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3305_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3305_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3305_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3305_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3305_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3305_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3305_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3305_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3306
#define MACROLOP_PRIVATE_EVAL_REC_3305_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3306(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3306_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3306_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3306_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3306_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3306_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3306_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3306_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3306_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3306_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3306_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3307
#define MACROLOP_PRIVATE_EVAL_REC_3306_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3307(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3307_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3307_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3307_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3307_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3307_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3307_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3307_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3307_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3307_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3307_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3308
#define MACROLOP_PRIVATE_EVAL_REC_3307_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3308(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3308_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3308_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3308_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3308_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3308_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3308_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3308_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3308_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3308_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3308_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3309
#define MACROLOP_PRIVATE_EVAL_REC_3308_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3309(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3309_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3309_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3309_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3309_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3309_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3309_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3309_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3309_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3309_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3309_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3310
#define MACROLOP_PRIVATE_EVAL_REC_3309_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3310(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3310_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3310_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3310_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3310_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3310_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3310_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3310_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3310_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3310_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3310_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3311
#define MACROLOP_PRIVATE_EVAL_REC_3310_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3311(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3311_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3311_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3311_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3311_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3311_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3311_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3311_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3311_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3311_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3311_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3312
#define MACROLOP_PRIVATE_EVAL_REC_3311_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3312(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3312_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3312_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3312_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3312_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3312_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3312_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3312_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3312_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3312_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3312_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3313
#define MACROLOP_PRIVATE_EVAL_REC_3312_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3313(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3313_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3313_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3313_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3313_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3313_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3313_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3313_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3313_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3313_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3313_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3314
#define MACROLOP_PRIVATE_EVAL_REC_3313_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3314(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3314_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3314_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3314_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3314_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3314_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3314_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3314_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3314_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3314_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3314_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3315
#define MACROLOP_PRIVATE_EVAL_REC_3314_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3315(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3315_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3315_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3315_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3315_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3315_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3315_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3315_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3315_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3315_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3315_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3316
#define MACROLOP_PRIVATE_EVAL_REC_3315_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3316(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3316_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3316_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3316_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3316_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3316_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3316_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3316_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3316_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3316_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3316_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3317
#define MACROLOP_PRIVATE_EVAL_REC_3316_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3317(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3317_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3317_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3317_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3317_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3317_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3317_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3317_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3317_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3317_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3317_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3318
#define MACROLOP_PRIVATE_EVAL_REC_3317_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3318(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3318_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3318_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3318_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3318_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3318_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3318_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3318_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3318_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3318_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3318_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3319
#define MACROLOP_PRIVATE_EVAL_REC_3318_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3319(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3319_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3319_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3319_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3319_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3319_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3319_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3319_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3319_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3319_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3319_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3320
#define MACROLOP_PRIVATE_EVAL_REC_3319_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3320(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3320_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3320_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3320_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3320_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3320_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3320_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3320_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3320_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3320_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3320_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3321
#define MACROLOP_PRIVATE_EVAL_REC_3320_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3321(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3321_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3321_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3321_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3321_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3321_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3321_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3321_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3321_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3321_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3321_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3322
#define MACROLOP_PRIVATE_EVAL_REC_3321_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3322(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3322_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3322_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3322_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3322_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3322_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3322_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3322_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3322_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3322_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3322_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3323
#define MACROLOP_PRIVATE_EVAL_REC_3322_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3323(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3323_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3323_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3323_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3323_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3323_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3323_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3323_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3323_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3323_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3323_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3324
#define MACROLOP_PRIVATE_EVAL_REC_3323_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3324(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3324_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3324_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3324_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3324_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3324_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3324_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3324_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3324_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3324_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3324_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3325
#define MACROLOP_PRIVATE_EVAL_REC_3324_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3325(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3325_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3325_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3325_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3325_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3325_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3325_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3325_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3325_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3325_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3325_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3326
#define MACROLOP_PRIVATE_EVAL_REC_3325_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3326(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3326_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3326_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3326_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3326_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3326_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3326_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3326_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3326_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3326_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3326_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3327
#define MACROLOP_PRIVATE_EVAL_REC_3326_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3327(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3327_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3327_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3327_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3327_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3327_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3327_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3327_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3327_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3327_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3327_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3328
#define MACROLOP_PRIVATE_EVAL_REC_3327_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3328(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3328_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3328_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3328_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3328_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3328_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3328_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3328_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3328_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3328_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3328_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3329
#define MACROLOP_PRIVATE_EVAL_REC_3328_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3329(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3329_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3329_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3329_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3329_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3329_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3329_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3329_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3329_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3329_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3329_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3330
#define MACROLOP_PRIVATE_EVAL_REC_3329_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3330(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3330_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3330_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3330_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3330_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3330_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3330_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3330_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3330_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3330_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3330_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3331
#define MACROLOP_PRIVATE_EVAL_REC_3330_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3331(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3331_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3331_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3331_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3331_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3331_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3331_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3331_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3331_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3331_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3331_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3332
#define MACROLOP_PRIVATE_EVAL_REC_3331_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3332(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3332_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3332_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3332_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3332_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3332_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3332_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3332_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3332_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3332_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3332_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3333
#define MACROLOP_PRIVATE_EVAL_REC_3332_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3333(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3333_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3333_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3333_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3333_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3333_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3333_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3333_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3333_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3333_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3333_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3334
#define MACROLOP_PRIVATE_EVAL_REC_3333_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3334(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3334_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3334_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3334_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3334_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3334_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3334_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3334_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3334_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3334_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3334_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3335
#define MACROLOP_PRIVATE_EVAL_REC_3334_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3335(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3335_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3335_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3335_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3335_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3335_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3335_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3335_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3335_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3335_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3335_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3336
#define MACROLOP_PRIVATE_EVAL_REC_3335_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3336(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3336_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3336_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3336_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3336_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3336_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3336_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3336_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3336_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3336_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3336_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3337
#define MACROLOP_PRIVATE_EVAL_REC_3336_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3337(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3337_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3337_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3337_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3337_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3337_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3337_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3337_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3337_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3337_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3337_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3338
#define MACROLOP_PRIVATE_EVAL_REC_3337_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3338(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3338_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3338_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3338_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3338_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3338_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3338_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3338_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3338_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3338_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3338_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3339
#define MACROLOP_PRIVATE_EVAL_REC_3338_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3339(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3339_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3339_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3339_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3339_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3339_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3339_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3339_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3339_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3339_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3339_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3340
#define MACROLOP_PRIVATE_EVAL_REC_3339_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3340(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3340_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3340_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3340_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3340_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3340_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3340_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3340_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3340_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3340_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3340_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3341
#define MACROLOP_PRIVATE_EVAL_REC_3340_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3341(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3341_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3341_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3341_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3341_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3341_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3341_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3341_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3341_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3341_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3341_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3342
#define MACROLOP_PRIVATE_EVAL_REC_3341_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3342(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3342_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3342_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3342_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3342_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3342_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3342_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3342_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3342_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3342_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3342_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3343
#define MACROLOP_PRIVATE_EVAL_REC_3342_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3343(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3343_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3343_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3343_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3343_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3343_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3343_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3343_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3343_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3343_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3343_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3344
#define MACROLOP_PRIVATE_EVAL_REC_3343_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3344(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3344_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3344_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3344_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3344_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3344_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3344_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3344_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3344_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3344_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3344_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3345
#define MACROLOP_PRIVATE_EVAL_REC_3344_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3345(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3345_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3345_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3345_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3345_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3345_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3345_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3345_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3345_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3345_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3345_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3346
#define MACROLOP_PRIVATE_EVAL_REC_3345_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3346(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3346_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3346_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3346_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3346_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3346_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3346_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3346_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3346_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3346_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3346_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3347
#define MACROLOP_PRIVATE_EVAL_REC_3346_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3347(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3347_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3347_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3347_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3347_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3347_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3347_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3347_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3347_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3347_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3347_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3348
#define MACROLOP_PRIVATE_EVAL_REC_3347_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3348(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3348_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3348_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3348_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3348_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3348_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3348_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3348_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3348_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3348_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3348_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3349
#define MACROLOP_PRIVATE_EVAL_REC_3348_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3349(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3349_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3349_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3349_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3349_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3349_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3349_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3349_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3349_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3349_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3349_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3350
#define MACROLOP_PRIVATE_EVAL_REC_3349_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3350(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3350_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3350_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3350_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3350_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3350_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3350_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3350_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3350_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3350_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3350_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3351
#define MACROLOP_PRIVATE_EVAL_REC_3350_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3351(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3351_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3351_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3351_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3351_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3351_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3351_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3351_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3351_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3351_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3351_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3352
#define MACROLOP_PRIVATE_EVAL_REC_3351_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3352(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3352_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3352_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3352_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3352_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3352_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3352_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3352_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3352_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3352_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3352_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3353
#define MACROLOP_PRIVATE_EVAL_REC_3352_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3353(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3353_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3353_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3353_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3353_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3353_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3353_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3353_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3353_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3353_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3353_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3354
#define MACROLOP_PRIVATE_EVAL_REC_3353_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3354(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3354_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3354_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3354_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3354_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3354_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3354_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3354_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3354_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3354_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3354_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3355
#define MACROLOP_PRIVATE_EVAL_REC_3354_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3355(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3355_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3355_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3355_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3355_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3355_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3355_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3355_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3355_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3355_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3355_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3356
#define MACROLOP_PRIVATE_EVAL_REC_3355_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3356(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3356_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3356_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3356_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3356_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3356_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3356_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3356_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3356_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3356_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3356_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3357
#define MACROLOP_PRIVATE_EVAL_REC_3356_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3357(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3357_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3357_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3357_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3357_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3357_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3357_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3357_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3357_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3357_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3357_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3358
#define MACROLOP_PRIVATE_EVAL_REC_3357_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3358(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3358_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3358_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3358_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3358_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3358_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3358_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3358_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3358_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3358_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3358_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3359
#define MACROLOP_PRIVATE_EVAL_REC_3358_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3359(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3359_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3359_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3359_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3359_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3359_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3359_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3359_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3359_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3359_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3359_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3360
#define MACROLOP_PRIVATE_EVAL_REC_3359_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3360(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3360_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3360_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3360_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3360_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3360_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3360_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3360_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3360_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3360_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3360_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3361
#define MACROLOP_PRIVATE_EVAL_REC_3360_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3361(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3361_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3361_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3361_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3361_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3361_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3361_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3361_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3361_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3361_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3361_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3362
#define MACROLOP_PRIVATE_EVAL_REC_3361_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3362(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3362_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3362_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3362_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3362_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3362_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3362_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3362_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3362_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3362_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3362_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3363
#define MACROLOP_PRIVATE_EVAL_REC_3362_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3363(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3363_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3363_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3363_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3363_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3363_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3363_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3363_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3363_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3363_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3363_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3364
#define MACROLOP_PRIVATE_EVAL_REC_3363_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3364(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3364_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3364_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3364_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3364_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3364_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3364_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3364_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3364_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3364_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3364_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3365
#define MACROLOP_PRIVATE_EVAL_REC_3364_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3365(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3365_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3365_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3365_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3365_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3365_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3365_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3365_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3365_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3365_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3365_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3366
#define MACROLOP_PRIVATE_EVAL_REC_3365_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3366(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3366_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3366_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3366_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3366_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3366_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3366_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3366_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3366_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3366_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3366_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3367
#define MACROLOP_PRIVATE_EVAL_REC_3366_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3367(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3367_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3367_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3367_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3367_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3367_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3367_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3367_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3367_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3367_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3367_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3368
#define MACROLOP_PRIVATE_EVAL_REC_3367_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3368(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3368_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3368_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3368_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3368_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3368_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3368_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3368_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3368_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3368_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3368_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3369
#define MACROLOP_PRIVATE_EVAL_REC_3368_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3369(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3369_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3369_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3369_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3369_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3369_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3369_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3369_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3369_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3369_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3369_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3370
#define MACROLOP_PRIVATE_EVAL_REC_3369_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3370(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3370_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3370_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3370_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3370_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3370_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3370_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3370_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3370_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3370_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3370_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3371
#define MACROLOP_PRIVATE_EVAL_REC_3370_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3371(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3371_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3371_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3371_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3371_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3371_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3371_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3371_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3371_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3371_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3371_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3372
#define MACROLOP_PRIVATE_EVAL_REC_3371_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3372(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3372_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3372_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3372_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3372_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3372_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3372_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3372_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3372_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3372_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3372_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3373
#define MACROLOP_PRIVATE_EVAL_REC_3372_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3373(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3373_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3373_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3373_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3373_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3373_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3373_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3373_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3373_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3373_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3373_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3374
#define MACROLOP_PRIVATE_EVAL_REC_3373_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3374(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3374_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3374_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3374_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3374_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3374_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3374_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3374_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3374_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3374_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3374_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3375
#define MACROLOP_PRIVATE_EVAL_REC_3374_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3375(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3375_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3375_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3375_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3375_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3375_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3375_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3375_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3375_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3375_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3375_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3376
#define MACROLOP_PRIVATE_EVAL_REC_3375_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3376(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3376_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3376_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3376_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3376_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3376_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3376_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3376_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3376_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3376_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3376_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3377
#define MACROLOP_PRIVATE_EVAL_REC_3376_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3377(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3377_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3377_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3377_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3377_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3377_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3377_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3377_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3377_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3377_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3377_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3378
#define MACROLOP_PRIVATE_EVAL_REC_3377_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3378(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3378_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3378_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3378_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3378_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3378_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3378_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3378_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3378_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3378_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3378_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3379
#define MACROLOP_PRIVATE_EVAL_REC_3378_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3379(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3379_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3379_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3379_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3379_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3379_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3379_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3379_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3379_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3379_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3379_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3380
#define MACROLOP_PRIVATE_EVAL_REC_3379_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3380(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3380_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3380_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3380_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3380_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3380_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3380_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3380_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3380_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3380_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3380_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3381
#define MACROLOP_PRIVATE_EVAL_REC_3380_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3381(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3381_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3381_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3381_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3381_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3381_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3381_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3381_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3381_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3381_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3381_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3382
#define MACROLOP_PRIVATE_EVAL_REC_3381_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3382(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3382_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3382_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3382_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3382_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3382_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3382_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3382_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3382_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3382_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3382_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3383
#define MACROLOP_PRIVATE_EVAL_REC_3382_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3383(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3383_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3383_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3383_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3383_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3383_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3383_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3383_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3383_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3383_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3383_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3384
#define MACROLOP_PRIVATE_EVAL_REC_3383_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3384(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3384_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3384_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3384_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3384_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3384_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3384_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3384_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3384_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3384_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3384_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3385
#define MACROLOP_PRIVATE_EVAL_REC_3384_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3385(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3385_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3385_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3385_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3385_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3385_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3385_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3385_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3385_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3385_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3385_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3386
#define MACROLOP_PRIVATE_EVAL_REC_3385_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3386(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3386_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3386_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3386_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3386_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3386_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3386_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3386_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3386_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3386_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3386_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3387
#define MACROLOP_PRIVATE_EVAL_REC_3386_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3387(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3387_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3387_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3387_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3387_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3387_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3387_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3387_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3387_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3387_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3387_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3388
#define MACROLOP_PRIVATE_EVAL_REC_3387_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3388(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3388_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3388_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3388_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3388_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3388_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3388_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3388_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3388_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3388_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3388_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3389
#define MACROLOP_PRIVATE_EVAL_REC_3388_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3389(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3389_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3389_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3389_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3389_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3389_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3389_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3389_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3389_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3389_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3389_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3390
#define MACROLOP_PRIVATE_EVAL_REC_3389_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3390(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3390_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3390_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3390_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3390_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3390_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3390_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3390_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3390_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3390_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3390_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3391
#define MACROLOP_PRIVATE_EVAL_REC_3390_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3391(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3391_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3391_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3391_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3391_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3391_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3391_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3391_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3391_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3391_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3391_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3392
#define MACROLOP_PRIVATE_EVAL_REC_3391_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3392(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3392_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3392_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3392_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3392_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3392_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3392_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3392_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3392_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3392_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3392_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3393
#define MACROLOP_PRIVATE_EVAL_REC_3392_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3393(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3393_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3393_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3393_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3393_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3393_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3393_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3393_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3393_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3393_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3393_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3394
#define MACROLOP_PRIVATE_EVAL_REC_3393_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3394(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3394_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3394_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3394_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3394_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3394_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3394_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3394_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3394_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3394_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3394_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3395
#define MACROLOP_PRIVATE_EVAL_REC_3394_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3395(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3395_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3395_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3395_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3395_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3395_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3395_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3395_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3395_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3395_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3395_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3396
#define MACROLOP_PRIVATE_EVAL_REC_3395_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3396(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3396_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3396_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3396_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3396_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3396_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3396_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3396_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3396_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3396_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3396_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3397
#define MACROLOP_PRIVATE_EVAL_REC_3396_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3397(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3397_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3397_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3397_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3397_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3397_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3397_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3397_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3397_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3397_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3397_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3398
#define MACROLOP_PRIVATE_EVAL_REC_3397_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3398(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3398_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3398_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3398_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3398_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3398_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3398_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3398_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3398_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3398_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3398_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3399
#define MACROLOP_PRIVATE_EVAL_REC_3398_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3399(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3399_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3399_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3399_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3399_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3399_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3399_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3399_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3399_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3399_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3399_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3400
#define MACROLOP_PRIVATE_EVAL_REC_3399_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3400(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3400_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3400_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3400_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3400_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3400_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3400_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3400_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3400_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3400_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3400_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3401
#define MACROLOP_PRIVATE_EVAL_REC_3400_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3401(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3401_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3401_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3401_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3401_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3401_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3401_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3401_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3401_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3401_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3401_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3402
#define MACROLOP_PRIVATE_EVAL_REC_3401_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3402(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3402_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3402_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3402_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3402_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3402_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3402_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3402_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3402_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3402_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3402_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3403
#define MACROLOP_PRIVATE_EVAL_REC_3402_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3403(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3403_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3403_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3403_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3403_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3403_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3403_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3403_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3403_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3403_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3403_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3404
#define MACROLOP_PRIVATE_EVAL_REC_3403_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3404(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3404_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3404_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3404_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3404_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3404_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3404_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3404_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3404_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3404_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3404_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3405
#define MACROLOP_PRIVATE_EVAL_REC_3404_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3405(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3405_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3405_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3405_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3405_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3405_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3405_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3405_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3405_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3405_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3405_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3406
#define MACROLOP_PRIVATE_EVAL_REC_3405_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3406(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3406_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3406_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3406_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3406_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3406_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3406_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3406_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3406_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3406_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3406_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3407
#define MACROLOP_PRIVATE_EVAL_REC_3406_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3407(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3407_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3407_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3407_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3407_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3407_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3407_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3407_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3407_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3407_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3407_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3408
#define MACROLOP_PRIVATE_EVAL_REC_3407_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3408(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3408_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3408_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3408_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3408_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3408_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3408_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3408_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3408_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3408_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3408_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3409
#define MACROLOP_PRIVATE_EVAL_REC_3408_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3409(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3409_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3409_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3409_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3409_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3409_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3409_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3409_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3409_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3409_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3409_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3410
#define MACROLOP_PRIVATE_EVAL_REC_3409_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3410(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3410_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3410_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3410_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3410_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3410_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3410_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3410_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3410_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3410_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3410_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3411
#define MACROLOP_PRIVATE_EVAL_REC_3410_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3411(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3411_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3411_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3411_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3411_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3411_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3411_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3411_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3411_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3411_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3411_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3412
#define MACROLOP_PRIVATE_EVAL_REC_3411_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3412(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3412_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3412_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3412_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3412_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3412_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3412_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3412_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3412_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3412_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3412_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3413
#define MACROLOP_PRIVATE_EVAL_REC_3412_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3413(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3413_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3413_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3413_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3413_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3413_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3413_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3413_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3413_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3413_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3413_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3414
#define MACROLOP_PRIVATE_EVAL_REC_3413_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3414(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3414_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3414_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3414_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3414_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3414_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3414_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3414_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3414_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3414_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3414_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3415
#define MACROLOP_PRIVATE_EVAL_REC_3414_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3415(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3415_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3415_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3415_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3415_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3415_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3415_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3415_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3415_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3415_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3415_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3416
#define MACROLOP_PRIVATE_EVAL_REC_3415_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3416(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3416_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3416_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3416_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3416_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3416_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3416_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3416_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3416_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3416_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3416_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3417
#define MACROLOP_PRIVATE_EVAL_REC_3416_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3417(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3417_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3417_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3417_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3417_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3417_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3417_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3417_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3417_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3417_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3417_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3418
#define MACROLOP_PRIVATE_EVAL_REC_3417_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3418(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3418_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3418_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3418_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3418_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3418_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3418_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3418_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3418_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3418_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3418_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3419
#define MACROLOP_PRIVATE_EVAL_REC_3418_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3419(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3419_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3419_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3419_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3419_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3419_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3419_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3419_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3419_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3419_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3419_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3420
#define MACROLOP_PRIVATE_EVAL_REC_3419_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3420(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3420_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3420_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3420_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3420_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3420_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3420_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3420_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3420_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3420_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3420_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3421
#define MACROLOP_PRIVATE_EVAL_REC_3420_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3421(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3421_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3421_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3421_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3421_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3421_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3421_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3421_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3421_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3421_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3421_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3422
#define MACROLOP_PRIVATE_EVAL_REC_3421_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3422(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3422_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3422_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3422_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3422_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3422_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3422_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3422_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3422_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3422_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3422_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3423
#define MACROLOP_PRIVATE_EVAL_REC_3422_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3423(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3423_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3423_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3423_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3423_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3423_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3423_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3423_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3423_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3423_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3423_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3424
#define MACROLOP_PRIVATE_EVAL_REC_3423_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3424(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3424_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3424_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3424_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3424_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3424_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3424_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3424_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3424_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3424_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3424_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3425
#define MACROLOP_PRIVATE_EVAL_REC_3424_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3425(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3425_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3425_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3425_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3425_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3425_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3425_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3425_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3425_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3425_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3425_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3426
#define MACROLOP_PRIVATE_EVAL_REC_3425_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3426(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3426_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3426_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3426_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3426_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3426_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3426_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3426_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3426_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3426_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3426_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3427
#define MACROLOP_PRIVATE_EVAL_REC_3426_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3427(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3427_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3427_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3427_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3427_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3427_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3427_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3427_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3427_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3427_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3427_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3428
#define MACROLOP_PRIVATE_EVAL_REC_3427_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3428(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3428_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3428_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3428_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3428_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3428_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3428_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3428_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3428_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3428_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3428_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3429
#define MACROLOP_PRIVATE_EVAL_REC_3428_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3429(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3429_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3429_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3429_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3429_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3429_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3429_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3429_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3429_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3429_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3429_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3430
#define MACROLOP_PRIVATE_EVAL_REC_3429_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3430(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3430_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3430_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3430_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3430_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3430_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3430_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3430_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3430_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3430_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3430_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3431
#define MACROLOP_PRIVATE_EVAL_REC_3430_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3431(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3431_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3431_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3431_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3431_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3431_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3431_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3431_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3431_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3431_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3431_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3432
#define MACROLOP_PRIVATE_EVAL_REC_3431_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3432(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3432_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3432_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3432_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3432_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3432_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3432_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3432_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3432_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3432_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3432_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3433
#define MACROLOP_PRIVATE_EVAL_REC_3432_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3433(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3433_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3433_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3433_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3433_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3433_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3433_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3433_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3433_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3433_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3433_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3434
#define MACROLOP_PRIVATE_EVAL_REC_3433_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3434(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3434_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3434_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3434_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3434_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3434_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3434_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3434_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3434_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3434_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3434_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3435
#define MACROLOP_PRIVATE_EVAL_REC_3434_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3435(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3435_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3435_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3435_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3435_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3435_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3435_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3435_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3435_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3435_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3435_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3436
#define MACROLOP_PRIVATE_EVAL_REC_3435_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3436(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3436_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3436_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3436_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3436_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3436_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3436_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3436_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3436_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3436_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3436_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3437
#define MACROLOP_PRIVATE_EVAL_REC_3436_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3437(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3437_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3437_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3437_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3437_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3437_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3437_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3437_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3437_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3437_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3437_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3438
#define MACROLOP_PRIVATE_EVAL_REC_3437_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3438(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3438_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3438_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3438_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3438_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3438_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3438_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3438_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3438_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3438_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3438_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3439
#define MACROLOP_PRIVATE_EVAL_REC_3438_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3439(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3439_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3439_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3439_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3439_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3439_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3439_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3439_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3439_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3439_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3439_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3440
#define MACROLOP_PRIVATE_EVAL_REC_3439_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3440(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3440_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3440_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3440_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3440_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3440_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3440_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3440_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3440_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3440_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3440_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3441
#define MACROLOP_PRIVATE_EVAL_REC_3440_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3441(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3441_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3441_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3441_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3441_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3441_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3441_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3441_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3441_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3441_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3441_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3442
#define MACROLOP_PRIVATE_EVAL_REC_3441_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3442(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3442_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3442_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3442_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3442_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3442_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3442_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3442_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3442_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3442_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3442_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3443
#define MACROLOP_PRIVATE_EVAL_REC_3442_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3443(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3443_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3443_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3443_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3443_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3443_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3443_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3443_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3443_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3443_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3443_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3444
#define MACROLOP_PRIVATE_EVAL_REC_3443_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3444(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3444_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3444_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3444_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3444_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3444_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3444_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3444_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3444_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3444_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3444_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3445
#define MACROLOP_PRIVATE_EVAL_REC_3444_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3445(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3445_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3445_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3445_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3445_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3445_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3445_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3445_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3445_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3445_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3445_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3446
#define MACROLOP_PRIVATE_EVAL_REC_3445_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3446(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3446_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3446_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3446_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3446_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3446_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3446_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3446_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3446_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3446_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3446_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3447
#define MACROLOP_PRIVATE_EVAL_REC_3446_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3447(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3447_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3447_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3447_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3447_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3447_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3447_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3447_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3447_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3447_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3447_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3448
#define MACROLOP_PRIVATE_EVAL_REC_3447_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3448(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3448_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3448_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3448_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3448_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3448_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3448_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3448_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3448_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3448_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3448_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3449
#define MACROLOP_PRIVATE_EVAL_REC_3448_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3449(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3449_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3449_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3449_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3449_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3449_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3449_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3449_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3449_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3449_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3449_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3450
#define MACROLOP_PRIVATE_EVAL_REC_3449_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3450(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3450_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3450_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3450_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3450_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3450_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3450_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3450_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3450_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3450_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3450_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3451
#define MACROLOP_PRIVATE_EVAL_REC_3450_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3451(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3451_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3451_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3451_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3451_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3451_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3451_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3451_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3451_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3451_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3451_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3452
#define MACROLOP_PRIVATE_EVAL_REC_3451_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3452(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3452_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3452_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3452_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3452_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3452_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3452_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3452_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3452_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3452_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3452_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3453
#define MACROLOP_PRIVATE_EVAL_REC_3452_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3453(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3453_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3453_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3453_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3453_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3453_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3453_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3453_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3453_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3453_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3453_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3454
#define MACROLOP_PRIVATE_EVAL_REC_3453_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3454(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3454_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3454_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3454_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3454_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3454_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3454_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3454_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3454_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3454_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3454_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3455
#define MACROLOP_PRIVATE_EVAL_REC_3454_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3455(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3455_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3455_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3455_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3455_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3455_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3455_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3455_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3455_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3455_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3455_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3456
#define MACROLOP_PRIVATE_EVAL_REC_3455_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3456(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3456_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3456_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3456_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3456_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3456_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3456_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3456_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3456_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3456_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3456_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3457
#define MACROLOP_PRIVATE_EVAL_REC_3456_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3457(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3457_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3457_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3457_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3457_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3457_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3457_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3457_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3457_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3457_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3457_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3458
#define MACROLOP_PRIVATE_EVAL_REC_3457_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3458(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3458_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3458_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3458_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3458_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3458_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3458_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3458_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3458_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3458_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3458_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3459
#define MACROLOP_PRIVATE_EVAL_REC_3458_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3459(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3459_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3459_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3459_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3459_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3459_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3459_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3459_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3459_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3459_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3459_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3460
#define MACROLOP_PRIVATE_EVAL_REC_3459_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3460(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3460_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3460_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3460_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3460_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3460_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3460_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3460_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3460_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3460_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3460_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3461
#define MACROLOP_PRIVATE_EVAL_REC_3460_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3461(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3461_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3461_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3461_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3461_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3461_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3461_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3461_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3461_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3461_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3461_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3462
#define MACROLOP_PRIVATE_EVAL_REC_3461_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3462(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3462_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3462_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3462_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3462_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3462_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3462_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3462_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3462_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3462_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3462_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3463
#define MACROLOP_PRIVATE_EVAL_REC_3462_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3463(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3463_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3463_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3463_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3463_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3463_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3463_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3463_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3463_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3463_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3463_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3464
#define MACROLOP_PRIVATE_EVAL_REC_3463_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3464(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3464_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3464_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3464_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3464_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3464_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3464_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3464_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3464_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3464_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3464_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3465
#define MACROLOP_PRIVATE_EVAL_REC_3464_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3465(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3465_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3465_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3465_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3465_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3465_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3465_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3465_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3465_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3465_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3465_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3466
#define MACROLOP_PRIVATE_EVAL_REC_3465_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3466(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3466_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3466_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3466_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3466_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3466_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3466_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3466_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3466_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3466_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3466_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3467
#define MACROLOP_PRIVATE_EVAL_REC_3466_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3467(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3467_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3467_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3467_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3467_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3467_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3467_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3467_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3467_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3467_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3467_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3468
#define MACROLOP_PRIVATE_EVAL_REC_3467_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3468(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3468_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3468_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3468_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3468_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3468_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3468_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3468_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3468_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3468_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3468_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3469
#define MACROLOP_PRIVATE_EVAL_REC_3468_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3469(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3469_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3469_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3469_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3469_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3469_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3469_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3469_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3469_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3469_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3469_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3470
#define MACROLOP_PRIVATE_EVAL_REC_3469_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3470(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3470_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3470_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3470_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3470_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3470_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3470_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3470_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3470_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3470_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3470_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3471
#define MACROLOP_PRIVATE_EVAL_REC_3470_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3471(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3471_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3471_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3471_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3471_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3471_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3471_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3471_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3471_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3471_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3471_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3472
#define MACROLOP_PRIVATE_EVAL_REC_3471_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3472(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3472_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3472_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3472_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3472_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3472_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3472_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3472_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3472_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3472_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3472_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3473
#define MACROLOP_PRIVATE_EVAL_REC_3472_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3473(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3473_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3473_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3473_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3473_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3473_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3473_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3473_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3473_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3473_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3473_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3474
#define MACROLOP_PRIVATE_EVAL_REC_3473_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3474(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3474_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3474_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3474_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3474_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3474_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3474_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3474_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3474_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3474_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3474_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3475
#define MACROLOP_PRIVATE_EVAL_REC_3474_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3475(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3475_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3475_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3475_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3475_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3475_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3475_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3475_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3475_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3475_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3475_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3476
#define MACROLOP_PRIVATE_EVAL_REC_3475_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3476(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3476_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3476_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3476_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3476_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3476_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3476_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3476_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3476_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3476_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3476_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3477
#define MACROLOP_PRIVATE_EVAL_REC_3476_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3477(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3477_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3477_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3477_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3477_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3477_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3477_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3477_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3477_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3477_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3477_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3478
#define MACROLOP_PRIVATE_EVAL_REC_3477_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3478(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3478_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3478_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3478_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3478_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3478_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3478_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3478_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3478_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3478_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3478_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3479
#define MACROLOP_PRIVATE_EVAL_REC_3478_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3479(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3479_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3479_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3479_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3479_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3479_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3479_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3479_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3479_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3479_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3479_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3480
#define MACROLOP_PRIVATE_EVAL_REC_3479_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3480(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3480_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3480_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3480_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3480_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3480_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3480_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3480_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3480_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3480_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3480_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3481
#define MACROLOP_PRIVATE_EVAL_REC_3480_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3481(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3481_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3481_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3481_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3481_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3481_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3481_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3481_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3481_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3481_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3481_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3482
#define MACROLOP_PRIVATE_EVAL_REC_3481_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3482(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3482_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3482_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3482_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3482_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3482_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3482_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3482_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3482_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3482_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3482_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3483
#define MACROLOP_PRIVATE_EVAL_REC_3482_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3483(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3483_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3483_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3483_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3483_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3483_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3483_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3483_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3483_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3483_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3483_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3484
#define MACROLOP_PRIVATE_EVAL_REC_3483_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3484(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3484_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3484_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3484_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3484_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3484_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3484_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3484_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3484_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3484_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3484_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3485
#define MACROLOP_PRIVATE_EVAL_REC_3484_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3485(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3485_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3485_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3485_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3485_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3485_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3485_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3485_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3485_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3485_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3485_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3486
#define MACROLOP_PRIVATE_EVAL_REC_3485_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3486(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3486_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3486_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3486_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3486_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3486_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3486_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3486_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3486_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3486_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3486_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3487
#define MACROLOP_PRIVATE_EVAL_REC_3486_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3487(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3487_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3487_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3487_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3487_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3487_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3487_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3487_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3487_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3487_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3487_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3488
#define MACROLOP_PRIVATE_EVAL_REC_3487_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3488(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3488_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3488_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3488_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3488_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3488_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3488_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3488_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3488_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3488_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3488_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3489
#define MACROLOP_PRIVATE_EVAL_REC_3488_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3489(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3489_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3489_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3489_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3489_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3489_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3489_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3489_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3489_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3489_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3489_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3490
#define MACROLOP_PRIVATE_EVAL_REC_3489_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3490(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3490_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3490_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3490_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3490_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3490_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3490_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3490_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3490_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3490_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3490_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3491
#define MACROLOP_PRIVATE_EVAL_REC_3490_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3491(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3491_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3491_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3491_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3491_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3491_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3491_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3491_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3491_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3491_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3491_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3492
#define MACROLOP_PRIVATE_EVAL_REC_3491_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3492(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3492_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3492_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3492_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3492_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3492_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3492_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3492_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3492_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3492_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3492_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3493
#define MACROLOP_PRIVATE_EVAL_REC_3492_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3493(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3493_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3493_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3493_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3493_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3493_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3493_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3493_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3493_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3493_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3493_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3494
#define MACROLOP_PRIVATE_EVAL_REC_3493_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3494(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3494_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3494_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3494_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3494_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3494_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3494_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3494_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3494_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3494_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3494_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3495
#define MACROLOP_PRIVATE_EVAL_REC_3494_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3495(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3495_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3495_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3495_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3495_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3495_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3495_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3495_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3495_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3495_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3495_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3496
#define MACROLOP_PRIVATE_EVAL_REC_3495_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3496(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3496_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3496_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3496_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3496_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3496_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3496_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3496_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3496_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3496_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3496_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3497
#define MACROLOP_PRIVATE_EVAL_REC_3496_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3497(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3497_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3497_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3497_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3497_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3497_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3497_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3497_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3497_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3497_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3497_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3498
#define MACROLOP_PRIVATE_EVAL_REC_3497_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3498(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3498_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3498_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3498_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3498_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3498_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3498_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3498_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3498_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3498_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3498_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3499
#define MACROLOP_PRIVATE_EVAL_REC_3498_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3499(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3499_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3499_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3499_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3499_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3499_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3499_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3499_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3499_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3499_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3499_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3500
#define MACROLOP_PRIVATE_EVAL_REC_3499_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3500(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3500_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3500_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3500_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3500_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3500_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3500_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3500_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3500_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3500_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3500_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3501
#define MACROLOP_PRIVATE_EVAL_REC_3500_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3501(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3501_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3501_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3501_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3501_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3501_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3501_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3501_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3501_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3501_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3501_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3502
#define MACROLOP_PRIVATE_EVAL_REC_3501_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3502(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3502_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3502_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3502_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3502_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3502_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3502_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3502_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3502_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3502_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3502_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3503
#define MACROLOP_PRIVATE_EVAL_REC_3502_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3503(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3503_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3503_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3503_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3503_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3503_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3503_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3503_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3503_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3503_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3503_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3504
#define MACROLOP_PRIVATE_EVAL_REC_3503_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3504(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3504_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3504_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3504_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3504_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3504_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3504_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3504_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3504_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3504_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3504_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3505
#define MACROLOP_PRIVATE_EVAL_REC_3504_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3505(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3505_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3505_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3505_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3505_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3505_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3505_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3505_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3505_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3505_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3505_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3506
#define MACROLOP_PRIVATE_EVAL_REC_3505_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3506(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3506_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3506_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3506_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3506_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3506_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3506_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3506_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3506_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3506_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3506_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3507
#define MACROLOP_PRIVATE_EVAL_REC_3506_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3507(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3507_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3507_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3507_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3507_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3507_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3507_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3507_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3507_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3507_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3507_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3508
#define MACROLOP_PRIVATE_EVAL_REC_3507_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3508(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3508_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3508_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3508_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3508_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3508_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3508_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3508_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3508_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3508_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3508_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3509
#define MACROLOP_PRIVATE_EVAL_REC_3508_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3509(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3509_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3509_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3509_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3509_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3509_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3509_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3509_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3509_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3509_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3509_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3510
#define MACROLOP_PRIVATE_EVAL_REC_3509_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3510(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3510_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3510_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3510_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3510_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3510_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3510_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3510_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3510_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3510_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3510_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3511
#define MACROLOP_PRIVATE_EVAL_REC_3510_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3511(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3511_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3511_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3511_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3511_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3511_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3511_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3511_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3511_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3511_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3511_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3512
#define MACROLOP_PRIVATE_EVAL_REC_3511_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3512(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3512_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3512_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3512_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3512_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3512_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3512_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3512_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3512_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3512_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3512_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3513
#define MACROLOP_PRIVATE_EVAL_REC_3512_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3513(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3513_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3513_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3513_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3513_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3513_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3513_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3513_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3513_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3513_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3513_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3514
#define MACROLOP_PRIVATE_EVAL_REC_3513_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3514(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3514_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3514_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3514_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3514_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3514_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3514_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3514_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3514_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3514_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3514_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3515
#define MACROLOP_PRIVATE_EVAL_REC_3514_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3515(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3515_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3515_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3515_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3515_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3515_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3515_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3515_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3515_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3515_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3515_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3516
#define MACROLOP_PRIVATE_EVAL_REC_3515_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3516(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3516_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3516_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3516_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3516_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3516_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3516_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3516_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3516_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3516_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3516_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3517
#define MACROLOP_PRIVATE_EVAL_REC_3516_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3517(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3517_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3517_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3517_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3517_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3517_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3517_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3517_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3517_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3517_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3517_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3518
#define MACROLOP_PRIVATE_EVAL_REC_3517_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3518(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3518_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3518_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3518_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3518_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3518_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3518_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3518_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3518_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3518_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3518_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3519
#define MACROLOP_PRIVATE_EVAL_REC_3518_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3519(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3519_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3519_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3519_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3519_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3519_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3519_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3519_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3519_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3519_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3519_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3520
#define MACROLOP_PRIVATE_EVAL_REC_3519_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3520(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3520_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3520_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3520_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3520_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3520_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3520_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3520_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3520_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3520_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3520_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3521
#define MACROLOP_PRIVATE_EVAL_REC_3520_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3521(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3521_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3521_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3521_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3521_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3521_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3521_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3521_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3521_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3521_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3521_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3522
#define MACROLOP_PRIVATE_EVAL_REC_3521_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3522(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3522_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3522_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3522_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3522_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3522_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3522_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3522_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3522_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3522_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3522_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3523
#define MACROLOP_PRIVATE_EVAL_REC_3522_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3523(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3523_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3523_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3523_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3523_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3523_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3523_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3523_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3523_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3523_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3523_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3524
#define MACROLOP_PRIVATE_EVAL_REC_3523_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3524(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3524_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3524_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3524_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3524_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3524_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3524_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3524_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3524_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3524_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3524_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3525
#define MACROLOP_PRIVATE_EVAL_REC_3524_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3525(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3525_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3525_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3525_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3525_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3525_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3525_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3525_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3525_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3525_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3525_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3526
#define MACROLOP_PRIVATE_EVAL_REC_3525_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3526(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3526_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3526_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3526_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3526_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3526_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3526_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3526_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3526_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3526_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3526_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3527
#define MACROLOP_PRIVATE_EVAL_REC_3526_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3527(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3527_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3527_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3527_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3527_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3527_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3527_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3527_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3527_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3527_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3527_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3528
#define MACROLOP_PRIVATE_EVAL_REC_3527_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3528(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3528_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3528_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3528_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3528_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3528_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3528_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3528_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3528_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3528_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3528_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3529
#define MACROLOP_PRIVATE_EVAL_REC_3528_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3529(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3529_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3529_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3529_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3529_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3529_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3529_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3529_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3529_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3529_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3529_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3530
#define MACROLOP_PRIVATE_EVAL_REC_3529_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3530(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3530_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3530_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3530_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3530_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3530_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3530_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3530_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3530_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3530_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3530_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3531
#define MACROLOP_PRIVATE_EVAL_REC_3530_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3531(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3531_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3531_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3531_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3531_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3531_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3531_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3531_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3531_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3531_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3531_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3532
#define MACROLOP_PRIVATE_EVAL_REC_3531_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3532(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3532_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3532_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3532_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3532_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3532_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3532_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3532_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3532_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3532_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3532_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3533
#define MACROLOP_PRIVATE_EVAL_REC_3532_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3533(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3533_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3533_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3533_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3533_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3533_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3533_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3533_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3533_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3533_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3533_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3534
#define MACROLOP_PRIVATE_EVAL_REC_3533_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3534(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3534_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3534_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3534_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3534_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3534_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3534_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3534_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3534_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3534_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3534_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3535
#define MACROLOP_PRIVATE_EVAL_REC_3534_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3535(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3535_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3535_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3535_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3535_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3535_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3535_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3535_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3535_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3535_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3535_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3536
#define MACROLOP_PRIVATE_EVAL_REC_3535_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3536(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3536_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3536_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3536_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3536_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3536_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3536_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3536_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3536_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3536_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3536_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3537
#define MACROLOP_PRIVATE_EVAL_REC_3536_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3537(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3537_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3537_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3537_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3537_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3537_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3537_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3537_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3537_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3537_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3537_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3538
#define MACROLOP_PRIVATE_EVAL_REC_3537_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3538(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3538_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3538_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3538_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3538_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3538_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3538_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3538_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3538_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3538_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3538_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3539
#define MACROLOP_PRIVATE_EVAL_REC_3538_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3539(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3539_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3539_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3539_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3539_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3539_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3539_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3539_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3539_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3539_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3539_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3540
#define MACROLOP_PRIVATE_EVAL_REC_3539_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3540(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3540_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3540_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3540_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3540_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3540_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3540_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3540_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3540_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3540_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3540_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3541
#define MACROLOP_PRIVATE_EVAL_REC_3540_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3541(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3541_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3541_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3541_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3541_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3541_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3541_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3541_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3541_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3541_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3541_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3542
#define MACROLOP_PRIVATE_EVAL_REC_3541_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3542(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3542_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3542_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3542_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3542_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3542_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3542_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3542_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3542_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3542_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3542_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3543
#define MACROLOP_PRIVATE_EVAL_REC_3542_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3543(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3543_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3543_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3543_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3543_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3543_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3543_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3543_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3543_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3543_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3543_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3544
#define MACROLOP_PRIVATE_EVAL_REC_3543_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3544(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3544_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3544_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3544_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3544_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3544_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3544_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3544_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3544_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3544_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3544_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3545
#define MACROLOP_PRIVATE_EVAL_REC_3544_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3545(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3545_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3545_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3545_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3545_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3545_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3545_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3545_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3545_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3545_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3545_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3546
#define MACROLOP_PRIVATE_EVAL_REC_3545_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3546(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3546_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3546_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3546_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3546_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3546_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3546_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3546_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3546_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3546_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3546_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3547
#define MACROLOP_PRIVATE_EVAL_REC_3546_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3547(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3547_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3547_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3547_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3547_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3547_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3547_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3547_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3547_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3547_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3547_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3548
#define MACROLOP_PRIVATE_EVAL_REC_3547_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3548(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3548_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3548_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3548_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3548_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3548_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3548_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3548_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3548_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3548_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3548_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3549
#define MACROLOP_PRIVATE_EVAL_REC_3548_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3549(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3549_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3549_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3549_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3549_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3549_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3549_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3549_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3549_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3549_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3549_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3550
#define MACROLOP_PRIVATE_EVAL_REC_3549_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3550(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3550_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3550_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3550_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3550_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3550_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3550_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3550_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3550_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3550_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3550_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3551
#define MACROLOP_PRIVATE_EVAL_REC_3550_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3551(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3551_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3551_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3551_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3551_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3551_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3551_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3551_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3551_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3551_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3551_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3552
#define MACROLOP_PRIVATE_EVAL_REC_3551_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3552(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3552_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3552_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3552_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3552_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3552_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3552_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3552_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3552_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3552_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3552_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3553
#define MACROLOP_PRIVATE_EVAL_REC_3552_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3553(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3553_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3553_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3553_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3553_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3553_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3553_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3553_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3553_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3553_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3553_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3554
#define MACROLOP_PRIVATE_EVAL_REC_3553_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3554(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3554_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3554_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3554_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3554_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3554_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3554_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3554_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3554_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3554_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3554_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3555
#define MACROLOP_PRIVATE_EVAL_REC_3554_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3555(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3555_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3555_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3555_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3555_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3555_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3555_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3555_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3555_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3555_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3555_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3556
#define MACROLOP_PRIVATE_EVAL_REC_3555_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3556(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3556_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3556_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3556_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3556_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3556_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3556_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3556_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3556_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3556_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3556_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3557
#define MACROLOP_PRIVATE_EVAL_REC_3556_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3557(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3557_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3557_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3557_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3557_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3557_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3557_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3557_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3557_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3557_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3557_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3558
#define MACROLOP_PRIVATE_EVAL_REC_3557_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3558(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3558_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3558_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3558_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3558_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3558_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3558_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3558_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3558_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3558_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3558_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3559
#define MACROLOP_PRIVATE_EVAL_REC_3558_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3559(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3559_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3559_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3559_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3559_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3559_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3559_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3559_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3559_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3559_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3559_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3560
#define MACROLOP_PRIVATE_EVAL_REC_3559_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3560(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3560_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3560_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3560_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3560_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3560_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3560_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3560_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3560_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3560_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3560_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3561
#define MACROLOP_PRIVATE_EVAL_REC_3560_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3561(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3561_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3561_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3561_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3561_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3561_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3561_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3561_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3561_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3561_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3561_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3562
#define MACROLOP_PRIVATE_EVAL_REC_3561_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3562(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3562_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3562_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3562_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3562_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3562_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3562_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3562_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3562_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3562_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3562_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3563
#define MACROLOP_PRIVATE_EVAL_REC_3562_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3563(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3563_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3563_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3563_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3563_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3563_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3563_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3563_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3563_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3563_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3563_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3564
#define MACROLOP_PRIVATE_EVAL_REC_3563_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3564(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3564_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3564_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3564_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3564_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3564_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3564_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3564_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3564_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3564_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3564_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3565
#define MACROLOP_PRIVATE_EVAL_REC_3564_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3565(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3565_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3565_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3565_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3565_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3565_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3565_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3565_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3565_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3565_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3565_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3566
#define MACROLOP_PRIVATE_EVAL_REC_3565_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3566(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3566_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3566_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3566_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3566_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3566_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3566_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3566_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3566_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3566_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3566_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3567
#define MACROLOP_PRIVATE_EVAL_REC_3566_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3567(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3567_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3567_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3567_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3567_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3567_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3567_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3567_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3567_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3567_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3567_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3568
#define MACROLOP_PRIVATE_EVAL_REC_3567_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3568(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3568_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3568_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3568_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3568_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3568_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3568_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3568_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3568_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3568_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3568_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3569
#define MACROLOP_PRIVATE_EVAL_REC_3568_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3569(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3569_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3569_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3569_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3569_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3569_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3569_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3569_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3569_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3569_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3569_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3570
#define MACROLOP_PRIVATE_EVAL_REC_3569_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3570(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3570_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3570_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3570_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3570_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3570_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3570_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3570_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3570_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3570_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3570_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3571
#define MACROLOP_PRIVATE_EVAL_REC_3570_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3571(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3571_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3571_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3571_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3571_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3571_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3571_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3571_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3571_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3571_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3571_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3572
#define MACROLOP_PRIVATE_EVAL_REC_3571_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3572(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3572_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3572_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3572_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3572_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3572_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3572_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3572_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3572_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3572_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3572_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3573
#define MACROLOP_PRIVATE_EVAL_REC_3572_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3573(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3573_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3573_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3573_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3573_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3573_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3573_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3573_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3573_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3573_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3573_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3574
#define MACROLOP_PRIVATE_EVAL_REC_3573_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3574(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3574_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3574_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3574_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3574_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3574_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3574_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3574_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3574_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3574_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3574_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3575
#define MACROLOP_PRIVATE_EVAL_REC_3574_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3575(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3575_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3575_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3575_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3575_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3575_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3575_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3575_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3575_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3575_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3575_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3576
#define MACROLOP_PRIVATE_EVAL_REC_3575_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3576(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3576_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3576_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3576_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3576_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3576_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3576_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3576_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3576_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3576_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3576_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3577
#define MACROLOP_PRIVATE_EVAL_REC_3576_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3577(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3577_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3577_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3577_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3577_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3577_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3577_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3577_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3577_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3577_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3577_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3578
#define MACROLOP_PRIVATE_EVAL_REC_3577_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3578(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3578_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3578_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3578_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3578_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3578_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3578_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3578_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3578_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3578_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3578_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3579
#define MACROLOP_PRIVATE_EVAL_REC_3578_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3579(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3579_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3579_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3579_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3579_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3579_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3579_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3579_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3579_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3579_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3579_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3580
#define MACROLOP_PRIVATE_EVAL_REC_3579_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3580(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3580_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3580_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3580_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3580_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3580_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3580_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3580_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3580_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3580_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3580_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3581
#define MACROLOP_PRIVATE_EVAL_REC_3580_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3581(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3581_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3581_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3581_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3581_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3581_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3581_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3581_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3581_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3581_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3581_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3582
#define MACROLOP_PRIVATE_EVAL_REC_3581_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3582(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3582_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3582_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3582_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3582_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3582_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3582_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3582_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3582_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3582_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3582_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3583
#define MACROLOP_PRIVATE_EVAL_REC_3582_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3583(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3583_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3583_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3583_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3583_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3583_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3583_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3583_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3583_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3583_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3583_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3584
#define MACROLOP_PRIVATE_EVAL_REC_3583_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3584(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3584_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3584_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3584_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3584_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3584_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3584_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3584_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3584_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3584_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3584_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3585
#define MACROLOP_PRIVATE_EVAL_REC_3584_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3585(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3585_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3585_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3585_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3585_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3585_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3585_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3585_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3585_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3585_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3585_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3586
#define MACROLOP_PRIVATE_EVAL_REC_3585_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3586(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3586_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3586_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3586_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3586_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3586_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3586_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3586_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3586_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3586_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3586_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3587
#define MACROLOP_PRIVATE_EVAL_REC_3586_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3587(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3587_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3587_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3587_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3587_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3587_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3587_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3587_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3587_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3587_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3587_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3588
#define MACROLOP_PRIVATE_EVAL_REC_3587_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3588(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3588_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3588_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3588_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3588_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3588_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3588_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3588_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3588_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3588_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3588_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3589
#define MACROLOP_PRIVATE_EVAL_REC_3588_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3589(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3589_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3589_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3589_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3589_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3589_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3589_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3589_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3589_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3589_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3589_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3590
#define MACROLOP_PRIVATE_EVAL_REC_3589_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3590(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3590_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3590_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3590_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3590_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3590_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3590_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3590_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3590_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3590_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3590_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3591
#define MACROLOP_PRIVATE_EVAL_REC_3590_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3591(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3591_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3591_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3591_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3591_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3591_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3591_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3591_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3591_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3591_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3591_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3592
#define MACROLOP_PRIVATE_EVAL_REC_3591_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3592(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3592_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3592_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3592_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3592_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3592_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3592_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3592_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3592_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3592_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3592_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3593
#define MACROLOP_PRIVATE_EVAL_REC_3592_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3593(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3593_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3593_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3593_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3593_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3593_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3593_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3593_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3593_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3593_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3593_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3594
#define MACROLOP_PRIVATE_EVAL_REC_3593_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3594(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3594_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3594_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3594_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3594_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3594_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3594_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3594_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3594_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3594_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3594_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3595
#define MACROLOP_PRIVATE_EVAL_REC_3594_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3595(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3595_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3595_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3595_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3595_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3595_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3595_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3595_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3595_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3595_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3595_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3596
#define MACROLOP_PRIVATE_EVAL_REC_3595_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3596(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3596_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3596_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3596_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3596_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3596_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3596_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3596_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3596_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3596_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3596_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3597
#define MACROLOP_PRIVATE_EVAL_REC_3596_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3597(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3597_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3597_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3597_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3597_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3597_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3597_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3597_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3597_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3597_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3597_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3598
#define MACROLOP_PRIVATE_EVAL_REC_3597_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3598(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3598_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3598_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3598_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3598_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3598_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3598_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3598_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3598_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3598_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3598_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3599
#define MACROLOP_PRIVATE_EVAL_REC_3598_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3599(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3599_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3599_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3599_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3599_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3599_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3599_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3599_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3599_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3599_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3599_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3600
#define MACROLOP_PRIVATE_EVAL_REC_3599_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3600(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3600_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3600_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3600_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3600_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3600_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3600_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3600_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3600_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3600_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3600_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3601
#define MACROLOP_PRIVATE_EVAL_REC_3600_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3601(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3601_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3601_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3601_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3601_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3601_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3601_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3601_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3601_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3601_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3601_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3602
#define MACROLOP_PRIVATE_EVAL_REC_3601_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3602(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3602_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3602_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3602_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3602_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3602_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3602_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3602_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3602_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3602_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3602_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3603
#define MACROLOP_PRIVATE_EVAL_REC_3602_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3603(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3603_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3603_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3603_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3603_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3603_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3603_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3603_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3603_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3603_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3603_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3604
#define MACROLOP_PRIVATE_EVAL_REC_3603_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3604(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3604_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3604_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3604_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3604_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3604_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3604_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3604_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3604_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3604_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3604_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3605
#define MACROLOP_PRIVATE_EVAL_REC_3604_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3605(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3605_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3605_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3605_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3605_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3605_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3605_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3605_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3605_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3605_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3605_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3606
#define MACROLOP_PRIVATE_EVAL_REC_3605_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3606(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3606_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3606_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3606_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3606_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3606_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3606_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3606_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3606_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3606_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3606_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3607
#define MACROLOP_PRIVATE_EVAL_REC_3606_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3607(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3607_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3607_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3607_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3607_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3607_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3607_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3607_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3607_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3607_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3607_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3608
#define MACROLOP_PRIVATE_EVAL_REC_3607_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3608(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3608_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3608_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3608_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3608_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3608_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3608_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3608_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3608_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3608_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3608_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3609
#define MACROLOP_PRIVATE_EVAL_REC_3608_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3609(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3609_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3609_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3609_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3609_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3609_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3609_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3609_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3609_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3609_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3609_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3610
#define MACROLOP_PRIVATE_EVAL_REC_3609_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3610(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3610_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3610_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3610_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3610_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3610_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3610_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3610_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3610_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3610_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3610_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3611
#define MACROLOP_PRIVATE_EVAL_REC_3610_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3611(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3611_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3611_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3611_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3611_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3611_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3611_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3611_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3611_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3611_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3611_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3612
#define MACROLOP_PRIVATE_EVAL_REC_3611_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3612(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3612_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3612_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3612_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3612_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3612_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3612_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3612_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3612_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3612_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3612_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3613
#define MACROLOP_PRIVATE_EVAL_REC_3612_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3613(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3613_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3613_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3613_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3613_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3613_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3613_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3613_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3613_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3613_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3613_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3614
#define MACROLOP_PRIVATE_EVAL_REC_3613_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3614(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3614_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3614_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3614_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3614_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3614_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3614_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3614_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3614_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3614_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3614_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3615
#define MACROLOP_PRIVATE_EVAL_REC_3614_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3615(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3615_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3615_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3615_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3615_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3615_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3615_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3615_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3615_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3615_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3615_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3616
#define MACROLOP_PRIVATE_EVAL_REC_3615_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3616(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3616_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3616_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3616_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3616_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3616_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3616_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3616_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3616_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3616_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3616_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3617
#define MACROLOP_PRIVATE_EVAL_REC_3616_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3617(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3617_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3617_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3617_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3617_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3617_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3617_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3617_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3617_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3617_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3617_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3618
#define MACROLOP_PRIVATE_EVAL_REC_3617_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3618(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3618_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3618_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3618_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3618_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3618_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3618_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3618_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3618_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3618_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3618_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3619
#define MACROLOP_PRIVATE_EVAL_REC_3618_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3619(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3619_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3619_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3619_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3619_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3619_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3619_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3619_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3619_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3619_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3619_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3620
#define MACROLOP_PRIVATE_EVAL_REC_3619_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3620(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3620_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3620_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3620_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3620_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3620_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3620_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3620_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3620_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3620_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3620_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3621
#define MACROLOP_PRIVATE_EVAL_REC_3620_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3621(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3621_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3621_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3621_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3621_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3621_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3621_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3621_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3621_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3621_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3621_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3622
#define MACROLOP_PRIVATE_EVAL_REC_3621_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3622(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3622_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3622_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3622_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3622_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3622_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3622_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3622_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3622_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3622_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3622_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3623
#define MACROLOP_PRIVATE_EVAL_REC_3622_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3623(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3623_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3623_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3623_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3623_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3623_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3623_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3623_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3623_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3623_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3623_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3624
#define MACROLOP_PRIVATE_EVAL_REC_3623_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3624(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3624_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3624_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3624_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3624_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3624_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3624_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3624_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3624_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3624_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3624_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3625
#define MACROLOP_PRIVATE_EVAL_REC_3624_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3625(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3625_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3625_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3625_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3625_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3625_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3625_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3625_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3625_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3625_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3625_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3626
#define MACROLOP_PRIVATE_EVAL_REC_3625_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3626(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3626_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3626_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3626_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3626_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3626_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3626_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3626_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3626_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3626_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3626_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3627
#define MACROLOP_PRIVATE_EVAL_REC_3626_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3627(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3627_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3627_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3627_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3627_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3627_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3627_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3627_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3627_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3627_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3627_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3628
#define MACROLOP_PRIVATE_EVAL_REC_3627_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3628(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3628_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3628_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3628_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3628_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3628_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3628_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3628_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3628_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3628_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3628_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3629
#define MACROLOP_PRIVATE_EVAL_REC_3628_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3629(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3629_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3629_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3629_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3629_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3629_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3629_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3629_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3629_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3629_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3629_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3630
#define MACROLOP_PRIVATE_EVAL_REC_3629_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3630(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3630_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3630_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3630_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3630_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3630_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3630_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3630_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3630_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3630_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3630_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3631
#define MACROLOP_PRIVATE_EVAL_REC_3630_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3631(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3631_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3631_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3631_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3631_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3631_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3631_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3631_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3631_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3631_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3631_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3632
#define MACROLOP_PRIVATE_EVAL_REC_3631_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3632(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3632_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3632_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3632_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3632_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3632_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3632_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3632_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3632_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3632_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3632_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3633
#define MACROLOP_PRIVATE_EVAL_REC_3632_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3633(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3633_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3633_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3633_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3633_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3633_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3633_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3633_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3633_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3633_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3633_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3634
#define MACROLOP_PRIVATE_EVAL_REC_3633_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3634(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3634_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3634_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3634_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3634_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3634_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3634_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3634_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3634_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3634_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3634_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3635
#define MACROLOP_PRIVATE_EVAL_REC_3634_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3635(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3635_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3635_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3635_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3635_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3635_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3635_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3635_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3635_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3635_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3635_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3636
#define MACROLOP_PRIVATE_EVAL_REC_3635_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3636(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3636_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3636_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3636_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3636_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3636_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3636_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3636_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3636_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3636_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3636_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3637
#define MACROLOP_PRIVATE_EVAL_REC_3636_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3637(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3637_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3637_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3637_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3637_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3637_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3637_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3637_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3637_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3637_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3637_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3638
#define MACROLOP_PRIVATE_EVAL_REC_3637_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3638(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3638_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3638_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3638_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3638_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3638_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3638_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3638_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3638_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3638_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3638_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3639
#define MACROLOP_PRIVATE_EVAL_REC_3638_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3639(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3639_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3639_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3639_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3639_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3639_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3639_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3639_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3639_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3639_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3639_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3640
#define MACROLOP_PRIVATE_EVAL_REC_3639_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3640(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3640_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3640_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3640_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3640_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3640_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3640_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3640_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3640_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3640_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3640_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3641
#define MACROLOP_PRIVATE_EVAL_REC_3640_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3641(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3641_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3641_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3641_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3641_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3641_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3641_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3641_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3641_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3641_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3641_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3642
#define MACROLOP_PRIVATE_EVAL_REC_3641_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3642(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3642_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3642_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3642_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3642_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3642_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3642_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3642_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3642_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3642_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3642_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3643
#define MACROLOP_PRIVATE_EVAL_REC_3642_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3643(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3643_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3643_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3643_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3643_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3643_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3643_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3643_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3643_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3643_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3643_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3644
#define MACROLOP_PRIVATE_EVAL_REC_3643_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3644(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3644_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3644_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3644_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3644_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3644_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3644_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3644_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3644_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3644_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3644_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3645
#define MACROLOP_PRIVATE_EVAL_REC_3644_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3645(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3645_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3645_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3645_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3645_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3645_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3645_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3645_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3645_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3645_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3645_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3646
#define MACROLOP_PRIVATE_EVAL_REC_3645_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3646(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3646_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3646_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3646_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3646_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3646_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3646_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3646_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3646_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3646_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3646_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3647
#define MACROLOP_PRIVATE_EVAL_REC_3646_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3647(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3647_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3647_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3647_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3647_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3647_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3647_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3647_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3647_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3647_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3647_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3648
#define MACROLOP_PRIVATE_EVAL_REC_3647_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3648(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3648_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3648_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3648_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3648_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3648_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3648_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3648_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3648_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3648_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3648_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3649
#define MACROLOP_PRIVATE_EVAL_REC_3648_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3649(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3649_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3649_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3649_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3649_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3649_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3649_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3649_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3649_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3649_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3649_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3650
#define MACROLOP_PRIVATE_EVAL_REC_3649_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3650(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3650_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3650_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3650_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3650_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3650_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3650_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3650_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3650_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3650_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3650_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3651
#define MACROLOP_PRIVATE_EVAL_REC_3650_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3651(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3651_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3651_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3651_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3651_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3651_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3651_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3651_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3651_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3651_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3651_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3652
#define MACROLOP_PRIVATE_EVAL_REC_3651_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3652(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3652_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3652_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3652_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3652_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3652_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3652_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3652_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3652_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3652_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3652_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3653
#define MACROLOP_PRIVATE_EVAL_REC_3652_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3653(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3653_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3653_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3653_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3653_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3653_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3653_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3653_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3653_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3653_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3653_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3654
#define MACROLOP_PRIVATE_EVAL_REC_3653_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3654(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3654_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3654_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3654_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3654_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3654_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3654_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3654_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3654_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3654_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3654_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3655
#define MACROLOP_PRIVATE_EVAL_REC_3654_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3655(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3655_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3655_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3655_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3655_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3655_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3655_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3655_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3655_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3655_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3655_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3656
#define MACROLOP_PRIVATE_EVAL_REC_3655_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3656(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3656_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3656_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3656_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3656_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3656_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3656_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3656_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3656_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3656_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3656_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3657
#define MACROLOP_PRIVATE_EVAL_REC_3656_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3657(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3657_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3657_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3657_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3657_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3657_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3657_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3657_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3657_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3657_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3657_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3658
#define MACROLOP_PRIVATE_EVAL_REC_3657_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3658(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3658_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3658_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3658_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3658_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3658_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3658_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3658_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3658_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3658_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3658_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3659
#define MACROLOP_PRIVATE_EVAL_REC_3658_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3659(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3659_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3659_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3659_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3659_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3659_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3659_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3659_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3659_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3659_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3659_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3660
#define MACROLOP_PRIVATE_EVAL_REC_3659_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3660(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3660_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3660_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3660_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3660_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3660_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3660_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3660_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3660_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3660_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3660_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3661
#define MACROLOP_PRIVATE_EVAL_REC_3660_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3661(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3661_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3661_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3661_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3661_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3661_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3661_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3661_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3661_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3661_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3661_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3662
#define MACROLOP_PRIVATE_EVAL_REC_3661_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3662(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3662_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3662_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3662_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3662_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3662_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3662_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3662_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3662_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3662_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3662_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3663
#define MACROLOP_PRIVATE_EVAL_REC_3662_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3663(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3663_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3663_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3663_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3663_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3663_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3663_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3663_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3663_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3663_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3663_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3664
#define MACROLOP_PRIVATE_EVAL_REC_3663_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3664(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3664_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3664_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3664_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3664_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3664_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3664_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3664_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3664_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3664_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3664_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3665
#define MACROLOP_PRIVATE_EVAL_REC_3664_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3665(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3665_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3665_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3665_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3665_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3665_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3665_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3665_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3665_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3665_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3665_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3666
#define MACROLOP_PRIVATE_EVAL_REC_3665_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3666(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3666_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3666_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3666_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3666_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3666_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3666_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3666_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3666_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3666_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3666_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3667
#define MACROLOP_PRIVATE_EVAL_REC_3666_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3667(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3667_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3667_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3667_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3667_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3667_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3667_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3667_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3667_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3667_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3667_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3668
#define MACROLOP_PRIVATE_EVAL_REC_3667_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3668(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3668_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3668_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3668_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3668_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3668_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3668_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3668_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3668_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3668_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3668_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3669
#define MACROLOP_PRIVATE_EVAL_REC_3668_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3669(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3669_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3669_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3669_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3669_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3669_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3669_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3669_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3669_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3669_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3669_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3670
#define MACROLOP_PRIVATE_EVAL_REC_3669_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3670(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3670_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3670_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3670_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3670_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3670_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3670_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3670_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3670_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3670_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3670_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3671
#define MACROLOP_PRIVATE_EVAL_REC_3670_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3671(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3671_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3671_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3671_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3671_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3671_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3671_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3671_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3671_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3671_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3671_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3672
#define MACROLOP_PRIVATE_EVAL_REC_3671_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3672(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3672_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3672_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3672_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3672_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3672_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3672_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3672_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3672_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3672_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3672_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3673
#define MACROLOP_PRIVATE_EVAL_REC_3672_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3673(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3673_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3673_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3673_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3673_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3673_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3673_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3673_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3673_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3673_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3673_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3674
#define MACROLOP_PRIVATE_EVAL_REC_3673_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3674(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3674_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3674_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3674_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3674_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3674_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3674_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3674_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3674_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3674_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3674_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3675
#define MACROLOP_PRIVATE_EVAL_REC_3674_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3675(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3675_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3675_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3675_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3675_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3675_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3675_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3675_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3675_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3675_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3675_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3676
#define MACROLOP_PRIVATE_EVAL_REC_3675_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3676(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3676_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3676_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3676_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3676_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3676_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3676_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3676_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3676_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3676_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3676_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3677
#define MACROLOP_PRIVATE_EVAL_REC_3676_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3677(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3677_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3677_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3677_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3677_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3677_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3677_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3677_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3677_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3677_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3677_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3678
#define MACROLOP_PRIVATE_EVAL_REC_3677_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3678(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3678_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3678_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3678_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3678_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3678_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3678_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3678_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3678_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3678_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3678_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3679
#define MACROLOP_PRIVATE_EVAL_REC_3678_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3679(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3679_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3679_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3679_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3679_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3679_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3679_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3679_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3679_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3679_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3679_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3680
#define MACROLOP_PRIVATE_EVAL_REC_3679_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3680(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3680_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3680_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3680_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3680_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3680_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3680_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3680_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3680_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3680_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3680_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3681
#define MACROLOP_PRIVATE_EVAL_REC_3680_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3681(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3681_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3681_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3681_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3681_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3681_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3681_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3681_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3681_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3681_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3681_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3682
#define MACROLOP_PRIVATE_EVAL_REC_3681_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3682(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3682_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3682_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3682_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3682_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3682_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3682_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3682_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3682_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3682_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3682_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3683
#define MACROLOP_PRIVATE_EVAL_REC_3682_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3683(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3683_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3683_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3683_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3683_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3683_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3683_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3683_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3683_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3683_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3683_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3684
#define MACROLOP_PRIVATE_EVAL_REC_3683_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3684(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3684_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3684_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3684_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3684_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3684_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3684_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3684_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3684_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3684_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3684_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3685
#define MACROLOP_PRIVATE_EVAL_REC_3684_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3685(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3685_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3685_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3685_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3685_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3685_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3685_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3685_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3685_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3685_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3685_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3686
#define MACROLOP_PRIVATE_EVAL_REC_3685_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3686(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3686_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3686_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3686_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3686_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3686_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3686_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3686_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3686_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3686_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3686_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3687
#define MACROLOP_PRIVATE_EVAL_REC_3686_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3687(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3687_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3687_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3687_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3687_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3687_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3687_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3687_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3687_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3687_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3687_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3688
#define MACROLOP_PRIVATE_EVAL_REC_3687_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3688(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3688_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3688_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3688_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3688_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3688_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3688_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3688_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3688_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3688_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3688_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3689
#define MACROLOP_PRIVATE_EVAL_REC_3688_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3689(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3689_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3689_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3689_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3689_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3689_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3689_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3689_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3689_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3689_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3689_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3690
#define MACROLOP_PRIVATE_EVAL_REC_3689_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3690(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3690_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3690_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3690_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3690_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3690_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3690_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3690_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3690_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3690_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3690_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3691
#define MACROLOP_PRIVATE_EVAL_REC_3690_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3691(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3691_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3691_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3691_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3691_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3691_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3691_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3691_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3691_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3691_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3691_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3692
#define MACROLOP_PRIVATE_EVAL_REC_3691_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3692(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3692_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3692_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3692_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3692_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3692_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3692_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3692_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3692_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3692_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3692_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3693
#define MACROLOP_PRIVATE_EVAL_REC_3692_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3693(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3693_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3693_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3693_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3693_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3693_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3693_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3693_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3693_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3693_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3693_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3694
#define MACROLOP_PRIVATE_EVAL_REC_3693_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3694(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3694_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3694_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3694_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3694_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3694_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3694_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3694_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3694_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3694_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3694_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3695
#define MACROLOP_PRIVATE_EVAL_REC_3694_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3695(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3695_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3695_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3695_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3695_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3695_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3695_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3695_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3695_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3695_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3695_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3696
#define MACROLOP_PRIVATE_EVAL_REC_3695_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3696(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3696_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3696_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3696_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3696_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3696_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3696_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3696_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3696_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3696_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3696_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3697
#define MACROLOP_PRIVATE_EVAL_REC_3696_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3697(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3697_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3697_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3697_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3697_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3697_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3697_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3697_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3697_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3697_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3697_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3698
#define MACROLOP_PRIVATE_EVAL_REC_3697_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3698(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3698_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3698_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3698_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3698_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3698_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3698_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3698_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3698_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3698_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3698_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3699
#define MACROLOP_PRIVATE_EVAL_REC_3698_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3699(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3699_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3699_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3699_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3699_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3699_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3699_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3699_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3699_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3699_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3699_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3700
#define MACROLOP_PRIVATE_EVAL_REC_3699_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3700(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3700_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3700_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3700_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3700_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3700_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3700_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3700_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3700_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3700_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3700_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3701
#define MACROLOP_PRIVATE_EVAL_REC_3700_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3701(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3701_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3701_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3701_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3701_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3701_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3701_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3701_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3701_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3701_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3701_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3702
#define MACROLOP_PRIVATE_EVAL_REC_3701_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3702(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3702_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3702_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3702_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3702_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3702_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3702_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3702_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3702_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3702_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3702_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3703
#define MACROLOP_PRIVATE_EVAL_REC_3702_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3703(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3703_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3703_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3703_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3703_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3703_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3703_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3703_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3703_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3703_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3703_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3704
#define MACROLOP_PRIVATE_EVAL_REC_3703_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3704(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3704_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3704_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3704_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3704_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3704_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3704_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3704_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3704_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3704_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3704_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3705
#define MACROLOP_PRIVATE_EVAL_REC_3704_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3705(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3705_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3705_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3705_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3705_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3705_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3705_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3705_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3705_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3705_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3705_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3706
#define MACROLOP_PRIVATE_EVAL_REC_3705_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3706(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3706_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3706_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3706_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3706_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3706_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3706_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3706_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3706_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3706_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3706_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3707
#define MACROLOP_PRIVATE_EVAL_REC_3706_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3707(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3707_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3707_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3707_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3707_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3707_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3707_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3707_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3707_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3707_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3707_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3708
#define MACROLOP_PRIVATE_EVAL_REC_3707_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3708(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3708_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3708_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3708_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3708_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3708_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3708_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3708_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3708_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3708_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3708_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3709
#define MACROLOP_PRIVATE_EVAL_REC_3708_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3709(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3709_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3709_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3709_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3709_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3709_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3709_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3709_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3709_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3709_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3709_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3710
#define MACROLOP_PRIVATE_EVAL_REC_3709_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3710(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3710_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3710_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3710_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3710_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3710_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3710_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3710_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3710_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3710_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3710_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3711
#define MACROLOP_PRIVATE_EVAL_REC_3710_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3711(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3711_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3711_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3711_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3711_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3711_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3711_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3711_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3711_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3711_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3711_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3712
#define MACROLOP_PRIVATE_EVAL_REC_3711_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3712(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3712_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3712_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3712_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3712_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3712_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3712_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3712_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3712_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3712_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3712_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3713
#define MACROLOP_PRIVATE_EVAL_REC_3712_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3713(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3713_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3713_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3713_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3713_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3713_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3713_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3713_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3713_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3713_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3713_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3714
#define MACROLOP_PRIVATE_EVAL_REC_3713_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3714(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3714_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3714_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3714_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3714_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3714_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3714_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3714_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3714_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3714_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3714_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3715
#define MACROLOP_PRIVATE_EVAL_REC_3714_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3715(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3715_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3715_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3715_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3715_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3715_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3715_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3715_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3715_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3715_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3715_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3716
#define MACROLOP_PRIVATE_EVAL_REC_3715_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3716(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3716_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3716_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3716_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3716_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3716_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3716_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3716_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3716_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3716_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3716_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3717
#define MACROLOP_PRIVATE_EVAL_REC_3716_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3717(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3717_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3717_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3717_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3717_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3717_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3717_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3717_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3717_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3717_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3717_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3718
#define MACROLOP_PRIVATE_EVAL_REC_3717_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3718(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3718_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3718_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3718_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3718_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3718_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3718_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3718_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3718_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3718_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3718_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3719
#define MACROLOP_PRIVATE_EVAL_REC_3718_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3719(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3719_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3719_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3719_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3719_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3719_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3719_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3719_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3719_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3719_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3719_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3720
#define MACROLOP_PRIVATE_EVAL_REC_3719_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3720(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3720_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3720_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3720_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3720_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3720_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3720_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3720_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3720_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3720_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3720_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3721
#define MACROLOP_PRIVATE_EVAL_REC_3720_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3721(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3721_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3721_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3721_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3721_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3721_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3721_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3721_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3721_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3721_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3721_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3722
#define MACROLOP_PRIVATE_EVAL_REC_3721_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3722(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3722_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3722_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3722_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3722_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3722_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3722_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3722_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3722_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3722_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3722_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3723
#define MACROLOP_PRIVATE_EVAL_REC_3722_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3723(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3723_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3723_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3723_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3723_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3723_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3723_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3723_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3723_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3723_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3723_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3724
#define MACROLOP_PRIVATE_EVAL_REC_3723_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3724(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3724_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3724_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3724_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3724_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3724_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3724_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3724_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3724_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3724_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3724_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3725
#define MACROLOP_PRIVATE_EVAL_REC_3724_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3725(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3725_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3725_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3725_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3725_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3725_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3725_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3725_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3725_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3725_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3725_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3726
#define MACROLOP_PRIVATE_EVAL_REC_3725_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3726(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3726_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3726_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3726_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3726_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3726_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3726_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3726_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3726_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3726_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3726_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3727
#define MACROLOP_PRIVATE_EVAL_REC_3726_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3727(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3727_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3727_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3727_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3727_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3727_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3727_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3727_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3727_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3727_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3727_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3728
#define MACROLOP_PRIVATE_EVAL_REC_3727_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3728(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3728_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3728_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3728_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3728_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3728_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3728_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3728_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3728_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3728_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3728_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3729
#define MACROLOP_PRIVATE_EVAL_REC_3728_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3729(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3729_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3729_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3729_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3729_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3729_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3729_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3729_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3729_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3729_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3729_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3730
#define MACROLOP_PRIVATE_EVAL_REC_3729_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3730(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3730_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3730_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3730_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3730_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3730_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3730_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3730_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3730_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3730_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3730_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3731
#define MACROLOP_PRIVATE_EVAL_REC_3730_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3731(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3731_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3731_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3731_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3731_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3731_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3731_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3731_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3731_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3731_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3731_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3732
#define MACROLOP_PRIVATE_EVAL_REC_3731_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3732(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3732_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3732_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3732_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3732_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3732_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3732_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3732_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3732_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3732_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3732_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3733
#define MACROLOP_PRIVATE_EVAL_REC_3732_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3733(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3733_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3733_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3733_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3733_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3733_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3733_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3733_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3733_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3733_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3733_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3734
#define MACROLOP_PRIVATE_EVAL_REC_3733_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3734(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3734_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3734_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3734_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3734_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3734_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3734_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3734_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3734_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3734_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3734_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3735
#define MACROLOP_PRIVATE_EVAL_REC_3734_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3735(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3735_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3735_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3735_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3735_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3735_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3735_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3735_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3735_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3735_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3735_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3736
#define MACROLOP_PRIVATE_EVAL_REC_3735_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3736(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3736_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3736_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3736_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3736_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3736_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3736_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3736_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3736_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3736_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3736_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3737
#define MACROLOP_PRIVATE_EVAL_REC_3736_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3737(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3737_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3737_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3737_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3737_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3737_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3737_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3737_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3737_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3737_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3737_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3738
#define MACROLOP_PRIVATE_EVAL_REC_3737_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3738(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3738_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3738_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3738_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3738_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3738_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3738_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3738_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3738_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3738_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3738_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3739
#define MACROLOP_PRIVATE_EVAL_REC_3738_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3739(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3739_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3739_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3739_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3739_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3739_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3739_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3739_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3739_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3739_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3739_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3740
#define MACROLOP_PRIVATE_EVAL_REC_3739_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3740(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3740_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3740_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3740_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3740_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3740_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3740_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3740_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3740_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3740_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3740_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3741
#define MACROLOP_PRIVATE_EVAL_REC_3740_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3741(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3741_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3741_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3741_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3741_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3741_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3741_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3741_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3741_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3741_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3741_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3742
#define MACROLOP_PRIVATE_EVAL_REC_3741_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3742(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3742_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3742_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3742_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3742_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3742_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3742_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3742_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3742_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3742_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3742_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3743
#define MACROLOP_PRIVATE_EVAL_REC_3742_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3743(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3743_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3743_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3743_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3743_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3743_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3743_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3743_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3743_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3743_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3743_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3744
#define MACROLOP_PRIVATE_EVAL_REC_3743_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3744(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3744_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3744_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3744_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3744_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3744_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3744_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3744_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3744_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3744_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3744_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3745
#define MACROLOP_PRIVATE_EVAL_REC_3744_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3745(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3745_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3745_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3745_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3745_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3745_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3745_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3745_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3745_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3745_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3745_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3746
#define MACROLOP_PRIVATE_EVAL_REC_3745_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3746(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3746_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3746_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3746_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3746_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3746_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3746_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3746_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3746_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3746_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3746_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3747
#define MACROLOP_PRIVATE_EVAL_REC_3746_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3747(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3747_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3747_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3747_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3747_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3747_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3747_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3747_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3747_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3747_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3747_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3748
#define MACROLOP_PRIVATE_EVAL_REC_3747_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3748(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3748_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3748_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3748_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3748_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3748_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3748_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3748_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3748_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3748_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3748_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3749
#define MACROLOP_PRIVATE_EVAL_REC_3748_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3749(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3749_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3749_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3749_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3749_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3749_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3749_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3749_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3749_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3749_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3749_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3750
#define MACROLOP_PRIVATE_EVAL_REC_3749_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3750(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3750_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3750_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3750_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3750_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3750_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3750_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3750_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3750_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3750_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3750_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3751
#define MACROLOP_PRIVATE_EVAL_REC_3750_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3751(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3751_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3751_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3751_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3751_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3751_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3751_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3751_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3751_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3751_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3751_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3752
#define MACROLOP_PRIVATE_EVAL_REC_3751_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3752(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3752_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3752_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3752_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3752_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3752_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3752_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3752_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3752_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3752_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3752_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3753
#define MACROLOP_PRIVATE_EVAL_REC_3752_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3753(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3753_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3753_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3753_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3753_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3753_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3753_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3753_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3753_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3753_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3753_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3754
#define MACROLOP_PRIVATE_EVAL_REC_3753_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3754(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3754_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3754_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3754_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3754_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3754_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3754_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3754_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3754_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3754_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3754_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3755
#define MACROLOP_PRIVATE_EVAL_REC_3754_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3755(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3755_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3755_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3755_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3755_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3755_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3755_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3755_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3755_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3755_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3755_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3756
#define MACROLOP_PRIVATE_EVAL_REC_3755_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3756(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3756_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3756_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3756_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3756_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3756_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3756_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3756_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3756_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3756_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3756_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3757
#define MACROLOP_PRIVATE_EVAL_REC_3756_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3757(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3757_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3757_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3757_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3757_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3757_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3757_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3757_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3757_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3757_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3757_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3758
#define MACROLOP_PRIVATE_EVAL_REC_3757_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3758(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3758_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3758_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3758_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3758_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3758_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3758_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3758_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3758_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3758_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3758_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3759
#define MACROLOP_PRIVATE_EVAL_REC_3758_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3759(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3759_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3759_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3759_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3759_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3759_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3759_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3759_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3759_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3759_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3759_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3760
#define MACROLOP_PRIVATE_EVAL_REC_3759_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3760(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3760_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3760_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3760_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3760_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3760_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3760_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3760_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3760_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3760_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3760_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3761
#define MACROLOP_PRIVATE_EVAL_REC_3760_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3761(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3761_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3761_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3761_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3761_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3761_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3761_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3761_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3761_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3761_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3761_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3762
#define MACROLOP_PRIVATE_EVAL_REC_3761_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3762(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3762_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3762_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3762_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3762_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3762_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3762_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3762_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3762_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3762_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3762_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3763
#define MACROLOP_PRIVATE_EVAL_REC_3762_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3763(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3763_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3763_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3763_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3763_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3763_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3763_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3763_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3763_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3763_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3763_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3764
#define MACROLOP_PRIVATE_EVAL_REC_3763_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3764(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3764_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3764_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3764_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3764_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3764_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3764_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3764_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3764_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3764_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3764_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3765
#define MACROLOP_PRIVATE_EVAL_REC_3764_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3765(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3765_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3765_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3765_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3765_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3765_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3765_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3765_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3765_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3765_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3765_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3766
#define MACROLOP_PRIVATE_EVAL_REC_3765_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3766(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3766_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3766_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3766_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3766_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3766_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3766_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3766_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3766_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3766_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3766_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3767
#define MACROLOP_PRIVATE_EVAL_REC_3766_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3767(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3767_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3767_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3767_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3767_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3767_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3767_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3767_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3767_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3767_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3767_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3768
#define MACROLOP_PRIVATE_EVAL_REC_3767_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3768(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3768_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3768_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3768_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3768_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3768_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3768_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3768_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3768_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3768_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3768_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3769
#define MACROLOP_PRIVATE_EVAL_REC_3768_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3769(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3769_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3769_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3769_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3769_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3769_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3769_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3769_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3769_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3769_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3769_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3770
#define MACROLOP_PRIVATE_EVAL_REC_3769_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3770(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3770_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3770_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3770_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3770_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3770_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3770_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3770_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3770_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3770_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3770_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3771
#define MACROLOP_PRIVATE_EVAL_REC_3770_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3771(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3771_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3771_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3771_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3771_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3771_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3771_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3771_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3771_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3771_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3771_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3772
#define MACROLOP_PRIVATE_EVAL_REC_3771_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3772(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3772_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3772_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3772_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3772_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3772_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3772_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3772_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3772_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3772_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3772_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3773
#define MACROLOP_PRIVATE_EVAL_REC_3772_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3773(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3773_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3773_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3773_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3773_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3773_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3773_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3773_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3773_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3773_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3773_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3774
#define MACROLOP_PRIVATE_EVAL_REC_3773_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3774(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3774_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3774_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3774_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3774_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3774_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3774_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3774_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3774_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3774_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3774_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3775
#define MACROLOP_PRIVATE_EVAL_REC_3774_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3775(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3775_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3775_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3775_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3775_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3775_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3775_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3775_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3775_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3775_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3775_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3776
#define MACROLOP_PRIVATE_EVAL_REC_3775_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3776(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3776_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3776_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3776_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3776_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3776_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3776_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3776_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3776_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3776_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3776_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3777
#define MACROLOP_PRIVATE_EVAL_REC_3776_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3777(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3777_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3777_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3777_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3777_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3777_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3777_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3777_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3777_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3777_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3777_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3778
#define MACROLOP_PRIVATE_EVAL_REC_3777_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3778(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3778_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3778_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3778_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3778_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3778_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3778_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3778_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3778_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3778_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3778_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3779
#define MACROLOP_PRIVATE_EVAL_REC_3778_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3779(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3779_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3779_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3779_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3779_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3779_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3779_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3779_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3779_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3779_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3779_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3780
#define MACROLOP_PRIVATE_EVAL_REC_3779_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3780(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3780_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3780_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3780_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3780_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3780_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3780_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3780_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3780_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3780_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3780_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3781
#define MACROLOP_PRIVATE_EVAL_REC_3780_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3781(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3781_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3781_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3781_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3781_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3781_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3781_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3781_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3781_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3781_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3781_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3782
#define MACROLOP_PRIVATE_EVAL_REC_3781_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3782(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3782_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3782_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3782_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3782_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3782_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3782_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3782_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3782_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3782_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3782_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3783
#define MACROLOP_PRIVATE_EVAL_REC_3782_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3783(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3783_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3783_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3783_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3783_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3783_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3783_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3783_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3783_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3783_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3783_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3784
#define MACROLOP_PRIVATE_EVAL_REC_3783_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3784(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3784_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3784_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3784_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3784_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3784_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3784_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3784_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3784_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3784_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3784_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3785
#define MACROLOP_PRIVATE_EVAL_REC_3784_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3785(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3785_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3785_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3785_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3785_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3785_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3785_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3785_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3785_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3785_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3785_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3786
#define MACROLOP_PRIVATE_EVAL_REC_3785_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3786(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3786_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3786_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3786_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3786_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3786_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3786_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3786_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3786_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3786_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3786_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3787
#define MACROLOP_PRIVATE_EVAL_REC_3786_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3787(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3787_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3787_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3787_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3787_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3787_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3787_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3787_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3787_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3787_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3787_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3788
#define MACROLOP_PRIVATE_EVAL_REC_3787_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3788(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3788_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3788_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3788_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3788_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3788_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3788_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3788_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3788_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3788_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3788_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3789
#define MACROLOP_PRIVATE_EVAL_REC_3788_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3789(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3789_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3789_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3789_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3789_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3789_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3789_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3789_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3789_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3789_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3789_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3790
#define MACROLOP_PRIVATE_EVAL_REC_3789_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3790(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3790_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3790_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3790_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3790_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3790_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3790_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3790_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3790_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3790_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3790_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3791
#define MACROLOP_PRIVATE_EVAL_REC_3790_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3791(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3791_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3791_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3791_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3791_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3791_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3791_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3791_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3791_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3791_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3791_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3792
#define MACROLOP_PRIVATE_EVAL_REC_3791_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3792(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3792_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3792_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3792_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3792_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3792_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3792_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3792_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3792_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3792_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3792_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3793
#define MACROLOP_PRIVATE_EVAL_REC_3792_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3793(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3793_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3793_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3793_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3793_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3793_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3793_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3793_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3793_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3793_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3793_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3794
#define MACROLOP_PRIVATE_EVAL_REC_3793_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3794(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3794_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3794_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3794_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3794_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3794_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3794_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3794_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3794_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3794_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3794_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3795
#define MACROLOP_PRIVATE_EVAL_REC_3794_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3795(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3795_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3795_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3795_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3795_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3795_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3795_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3795_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3795_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3795_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3795_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3796
#define MACROLOP_PRIVATE_EVAL_REC_3795_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3796(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3796_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3796_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3796_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3796_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3796_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3796_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3796_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3796_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3796_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3796_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3797
#define MACROLOP_PRIVATE_EVAL_REC_3796_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3797(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3797_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3797_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3797_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3797_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3797_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3797_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3797_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3797_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3797_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3797_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3798
#define MACROLOP_PRIVATE_EVAL_REC_3797_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3798(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3798_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3798_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3798_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3798_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3798_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3798_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3798_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3798_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3798_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3798_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3799
#define MACROLOP_PRIVATE_EVAL_REC_3798_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3799(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3799_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3799_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3799_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3799_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3799_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3799_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3799_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3799_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3799_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3799_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3800
#define MACROLOP_PRIVATE_EVAL_REC_3799_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3800(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3800_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3800_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3800_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3800_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3800_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3800_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3800_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3800_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3800_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3800_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3801
#define MACROLOP_PRIVATE_EVAL_REC_3800_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3801(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3801_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3801_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3801_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3801_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3801_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3801_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3801_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3801_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3801_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3801_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3802
#define MACROLOP_PRIVATE_EVAL_REC_3801_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3802(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3802_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3802_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3802_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3802_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3802_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3802_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3802_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3802_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3802_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3802_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3803
#define MACROLOP_PRIVATE_EVAL_REC_3802_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3803(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3803_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3803_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3803_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3803_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3803_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3803_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3803_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3803_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3803_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3803_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3804
#define MACROLOP_PRIVATE_EVAL_REC_3803_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3804(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3804_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3804_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3804_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3804_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3804_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3804_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3804_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3804_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3804_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3804_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3805
#define MACROLOP_PRIVATE_EVAL_REC_3804_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3805(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3805_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3805_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3805_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3805_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3805_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3805_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3805_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3805_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3805_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3805_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3806
#define MACROLOP_PRIVATE_EVAL_REC_3805_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3806(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3806_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3806_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3806_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3806_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3806_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3806_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3806_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3806_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3806_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3806_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3807
#define MACROLOP_PRIVATE_EVAL_REC_3806_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3807(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3807_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3807_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3807_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3807_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3807_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3807_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3807_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3807_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3807_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3807_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3808
#define MACROLOP_PRIVATE_EVAL_REC_3807_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3808(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3808_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3808_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3808_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3808_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3808_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3808_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3808_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3808_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3808_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3808_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3809
#define MACROLOP_PRIVATE_EVAL_REC_3808_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3809(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3809_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3809_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3809_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3809_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3809_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3809_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3809_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3809_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3809_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3809_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3810
#define MACROLOP_PRIVATE_EVAL_REC_3809_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3810(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3810_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3810_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3810_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3810_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3810_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3810_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3810_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3810_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3810_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3810_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3811
#define MACROLOP_PRIVATE_EVAL_REC_3810_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3811(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3811_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3811_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3811_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3811_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3811_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3811_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3811_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3811_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3811_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3811_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3812
#define MACROLOP_PRIVATE_EVAL_REC_3811_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3812(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3812_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3812_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3812_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3812_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3812_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3812_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3812_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3812_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3812_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3812_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3813
#define MACROLOP_PRIVATE_EVAL_REC_3812_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3813(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3813_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3813_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3813_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3813_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3813_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3813_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3813_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3813_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3813_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3813_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3814
#define MACROLOP_PRIVATE_EVAL_REC_3813_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3814(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3814_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3814_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3814_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3814_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3814_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3814_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3814_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3814_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3814_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3814_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3815
#define MACROLOP_PRIVATE_EVAL_REC_3814_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3815(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3815_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3815_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3815_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3815_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3815_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3815_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3815_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3815_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3815_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3815_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3816
#define MACROLOP_PRIVATE_EVAL_REC_3815_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3816(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3816_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3816_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3816_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3816_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3816_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3816_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3816_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3816_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3816_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3816_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3817
#define MACROLOP_PRIVATE_EVAL_REC_3816_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3817(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3817_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3817_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3817_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3817_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3817_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3817_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3817_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3817_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3817_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3817_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3818
#define MACROLOP_PRIVATE_EVAL_REC_3817_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3818(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3818_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3818_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3818_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3818_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3818_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3818_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3818_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3818_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3818_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3818_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3819
#define MACROLOP_PRIVATE_EVAL_REC_3818_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3819(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3819_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3819_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3819_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3819_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3819_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3819_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3819_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3819_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3819_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3819_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3820
#define MACROLOP_PRIVATE_EVAL_REC_3819_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3820(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3820_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3820_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3820_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3820_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3820_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3820_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3820_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3820_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3820_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3820_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3821
#define MACROLOP_PRIVATE_EVAL_REC_3820_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3821(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3821_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3821_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3821_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3821_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3821_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3821_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3821_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3821_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3821_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3821_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3822
#define MACROLOP_PRIVATE_EVAL_REC_3821_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3822(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3822_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3822_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3822_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3822_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3822_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3822_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3822_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3822_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3822_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3822_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3823
#define MACROLOP_PRIVATE_EVAL_REC_3822_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3823(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3823_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3823_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3823_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3823_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3823_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3823_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3823_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3823_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3823_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3823_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3824
#define MACROLOP_PRIVATE_EVAL_REC_3823_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3824(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3824_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3824_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3824_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3824_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3824_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3824_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3824_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3824_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3824_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3824_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3825
#define MACROLOP_PRIVATE_EVAL_REC_3824_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3825(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3825_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3825_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3825_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3825_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3825_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3825_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3825_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3825_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3825_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3825_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3826
#define MACROLOP_PRIVATE_EVAL_REC_3825_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3826(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3826_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3826_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3826_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3826_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3826_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3826_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3826_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3826_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3826_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3826_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3827
#define MACROLOP_PRIVATE_EVAL_REC_3826_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3827(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3827_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3827_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3827_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3827_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3827_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3827_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3827_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3827_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3827_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3827_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3828
#define MACROLOP_PRIVATE_EVAL_REC_3827_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3828(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3828_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3828_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3828_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3828_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3828_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3828_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3828_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3828_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3828_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3828_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3829
#define MACROLOP_PRIVATE_EVAL_REC_3828_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3829(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3829_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3829_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3829_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3829_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3829_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3829_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3829_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3829_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3829_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3829_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3830
#define MACROLOP_PRIVATE_EVAL_REC_3829_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3830(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3830_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3830_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3830_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3830_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3830_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3830_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3830_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3830_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3830_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3830_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3831
#define MACROLOP_PRIVATE_EVAL_REC_3830_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3831(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3831_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3831_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3831_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3831_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3831_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3831_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3831_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3831_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3831_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3831_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3832
#define MACROLOP_PRIVATE_EVAL_REC_3831_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3832(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3832_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3832_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3832_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3832_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3832_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3832_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3832_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3832_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3832_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3832_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3833
#define MACROLOP_PRIVATE_EVAL_REC_3832_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3833(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3833_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3833_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3833_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3833_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3833_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3833_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3833_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3833_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3833_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3833_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3834
#define MACROLOP_PRIVATE_EVAL_REC_3833_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3834(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3834_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3834_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3834_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3834_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3834_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3834_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3834_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3834_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3834_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3834_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3835
#define MACROLOP_PRIVATE_EVAL_REC_3834_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3835(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3835_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3835_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3835_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3835_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3835_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3835_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3835_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3835_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3835_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3835_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3836
#define MACROLOP_PRIVATE_EVAL_REC_3835_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3836(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3836_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3836_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3836_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3836_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3836_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3836_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3836_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3836_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3836_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3836_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3837
#define MACROLOP_PRIVATE_EVAL_REC_3836_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3837(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3837_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3837_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3837_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3837_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3837_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3837_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3837_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3837_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3837_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3837_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3838
#define MACROLOP_PRIVATE_EVAL_REC_3837_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3838(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3838_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3838_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3838_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3838_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3838_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3838_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3838_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3838_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3838_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3838_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3839
#define MACROLOP_PRIVATE_EVAL_REC_3838_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3839(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3839_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3839_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3839_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3839_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3839_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3839_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3839_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3839_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3839_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3839_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3840
#define MACROLOP_PRIVATE_EVAL_REC_3839_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3840(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3840_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3840_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3840_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3840_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3840_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3840_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3840_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3840_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3840_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3840_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3841
#define MACROLOP_PRIVATE_EVAL_REC_3840_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3841(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3841_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3841_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3841_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3841_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3841_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3841_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3841_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3841_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3841_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3841_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3842
#define MACROLOP_PRIVATE_EVAL_REC_3841_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3842(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3842_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3842_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3842_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3842_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3842_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3842_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3842_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3842_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3842_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3842_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3843
#define MACROLOP_PRIVATE_EVAL_REC_3842_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3843(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3843_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3843_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3843_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3843_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3843_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3843_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3843_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3843_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3843_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3843_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3844
#define MACROLOP_PRIVATE_EVAL_REC_3843_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3844(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3844_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3844_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3844_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3844_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3844_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3844_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3844_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3844_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3844_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3844_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3845
#define MACROLOP_PRIVATE_EVAL_REC_3844_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3845(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3845_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3845_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3845_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3845_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3845_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3845_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3845_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3845_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3845_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3845_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3846
#define MACROLOP_PRIVATE_EVAL_REC_3845_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3846(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3846_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3846_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3846_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3846_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3846_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3846_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3846_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3846_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3846_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3846_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3847
#define MACROLOP_PRIVATE_EVAL_REC_3846_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3847(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3847_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3847_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3847_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3847_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3847_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3847_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3847_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3847_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3847_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3847_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3848
#define MACROLOP_PRIVATE_EVAL_REC_3847_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3848(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3848_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3848_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3848_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3848_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3848_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3848_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3848_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3848_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3848_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3848_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3849
#define MACROLOP_PRIVATE_EVAL_REC_3848_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3849(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3849_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3849_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3849_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3849_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3849_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3849_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3849_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3849_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3849_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3849_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3850
#define MACROLOP_PRIVATE_EVAL_REC_3849_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3850(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3850_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3850_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3850_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3850_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3850_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3850_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3850_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3850_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3850_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3850_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3851
#define MACROLOP_PRIVATE_EVAL_REC_3850_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3851(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3851_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3851_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3851_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3851_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3851_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3851_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3851_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3851_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3851_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3851_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3852
#define MACROLOP_PRIVATE_EVAL_REC_3851_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3852(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3852_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3852_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3852_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3852_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3852_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3852_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3852_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3852_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3852_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3852_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3853
#define MACROLOP_PRIVATE_EVAL_REC_3852_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3853(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3853_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3853_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3853_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3853_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3853_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3853_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3853_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3853_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3853_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3853_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3854
#define MACROLOP_PRIVATE_EVAL_REC_3853_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3854(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3854_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3854_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3854_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3854_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3854_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3854_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3854_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3854_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3854_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3854_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3855
#define MACROLOP_PRIVATE_EVAL_REC_3854_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3855(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3855_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3855_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3855_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3855_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3855_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3855_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3855_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3855_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3855_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3855_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3856
#define MACROLOP_PRIVATE_EVAL_REC_3855_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3856(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3856_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3856_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3856_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3856_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3856_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3856_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3856_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3856_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3856_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3856_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3857
#define MACROLOP_PRIVATE_EVAL_REC_3856_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3857(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3857_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3857_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3857_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3857_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3857_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3857_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3857_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3857_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3857_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3857_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3858
#define MACROLOP_PRIVATE_EVAL_REC_3857_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3858(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3858_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3858_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3858_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3858_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3858_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3858_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3858_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3858_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3858_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3858_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3859
#define MACROLOP_PRIVATE_EVAL_REC_3858_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3859(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3859_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3859_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3859_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3859_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3859_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3859_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3859_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3859_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3859_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3859_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3860
#define MACROLOP_PRIVATE_EVAL_REC_3859_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3860(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3860_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3860_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3860_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3860_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3860_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3860_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3860_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3860_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3860_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3860_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3861
#define MACROLOP_PRIVATE_EVAL_REC_3860_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3861(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3861_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3861_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3861_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3861_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3861_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3861_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3861_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3861_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3861_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3861_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3862
#define MACROLOP_PRIVATE_EVAL_REC_3861_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3862(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3862_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3862_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3862_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3862_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3862_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3862_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3862_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3862_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3862_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3862_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3863
#define MACROLOP_PRIVATE_EVAL_REC_3862_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3863(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3863_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3863_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3863_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3863_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3863_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3863_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3863_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3863_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3863_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3863_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3864
#define MACROLOP_PRIVATE_EVAL_REC_3863_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3864(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3864_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3864_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3864_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3864_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3864_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3864_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3864_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3864_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3864_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3864_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3865
#define MACROLOP_PRIVATE_EVAL_REC_3864_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3865(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3865_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3865_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3865_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3865_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3865_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3865_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3865_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3865_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3865_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3865_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3866
#define MACROLOP_PRIVATE_EVAL_REC_3865_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3866(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3866_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3866_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3866_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3866_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3866_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3866_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3866_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3866_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3866_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3866_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3867
#define MACROLOP_PRIVATE_EVAL_REC_3866_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3867(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3867_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3867_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3867_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3867_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3867_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3867_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3867_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3867_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3867_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3867_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3868
#define MACROLOP_PRIVATE_EVAL_REC_3867_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3868(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3868_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3868_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3868_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3868_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3868_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3868_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3868_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3868_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3868_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3868_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3869
#define MACROLOP_PRIVATE_EVAL_REC_3868_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3869(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3869_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3869_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3869_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3869_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3869_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3869_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3869_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3869_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3869_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3869_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3870
#define MACROLOP_PRIVATE_EVAL_REC_3869_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3870(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3870_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3870_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3870_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3870_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3870_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3870_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3870_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3870_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3870_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3870_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3871
#define MACROLOP_PRIVATE_EVAL_REC_3870_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3871(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3871_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3871_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3871_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3871_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3871_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3871_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3871_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3871_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3871_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3871_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3872
#define MACROLOP_PRIVATE_EVAL_REC_3871_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3872(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3872_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3872_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3872_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3872_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3872_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3872_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3872_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3872_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3872_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3872_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3873
#define MACROLOP_PRIVATE_EVAL_REC_3872_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3873(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3873_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3873_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3873_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3873_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3873_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3873_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3873_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3873_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3873_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3873_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3874
#define MACROLOP_PRIVATE_EVAL_REC_3873_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3874(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3874_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3874_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3874_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3874_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3874_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3874_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3874_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3874_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3874_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3874_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3875
#define MACROLOP_PRIVATE_EVAL_REC_3874_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3875(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3875_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3875_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3875_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3875_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3875_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3875_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3875_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3875_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3875_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3875_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3876
#define MACROLOP_PRIVATE_EVAL_REC_3875_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3876(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3876_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3876_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3876_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3876_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3876_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3876_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3876_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3876_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3876_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3876_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3877
#define MACROLOP_PRIVATE_EVAL_REC_3876_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3877(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3877_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3877_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3877_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3877_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3877_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3877_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3877_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3877_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3877_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3877_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3878
#define MACROLOP_PRIVATE_EVAL_REC_3877_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3878(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3878_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3878_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3878_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3878_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3878_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3878_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3878_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3878_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3878_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3878_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3879
#define MACROLOP_PRIVATE_EVAL_REC_3878_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3879(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3879_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3879_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3879_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3879_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3879_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3879_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3879_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3879_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3879_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3879_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3880
#define MACROLOP_PRIVATE_EVAL_REC_3879_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3880(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3880_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3880_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3880_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3880_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3880_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3880_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3880_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3880_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3880_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3880_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3881
#define MACROLOP_PRIVATE_EVAL_REC_3880_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3881(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3881_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3881_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3881_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3881_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3881_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3881_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3881_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3881_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3881_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3881_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3882
#define MACROLOP_PRIVATE_EVAL_REC_3881_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3882(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3882_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3882_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3882_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3882_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3882_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3882_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3882_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3882_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3882_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3882_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3883
#define MACROLOP_PRIVATE_EVAL_REC_3882_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3883(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3883_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3883_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3883_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3883_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3883_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3883_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3883_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3883_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3883_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3883_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3884
#define MACROLOP_PRIVATE_EVAL_REC_3883_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3884(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3884_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3884_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3884_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3884_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3884_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3884_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3884_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3884_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3884_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3884_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3885
#define MACROLOP_PRIVATE_EVAL_REC_3884_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3885(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3885_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3885_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3885_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3885_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3885_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3885_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3885_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3885_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3885_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3885_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3886
#define MACROLOP_PRIVATE_EVAL_REC_3885_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3886(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3886_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3886_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3886_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3886_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3886_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3886_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3886_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3886_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3886_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3886_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3887
#define MACROLOP_PRIVATE_EVAL_REC_3886_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3887(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3887_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3887_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3887_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3887_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3887_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3887_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3887_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3887_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3887_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3887_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3888
#define MACROLOP_PRIVATE_EVAL_REC_3887_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3888(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3888_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3888_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3888_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3888_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3888_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3888_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3888_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3888_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3888_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3888_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3889
#define MACROLOP_PRIVATE_EVAL_REC_3888_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3889(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3889_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3889_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3889_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3889_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3889_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3889_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3889_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3889_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3889_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3889_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3890
#define MACROLOP_PRIVATE_EVAL_REC_3889_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3890(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3890_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3890_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3890_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3890_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3890_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3890_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3890_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3890_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3890_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3890_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3891
#define MACROLOP_PRIVATE_EVAL_REC_3890_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3891(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3891_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3891_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3891_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3891_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3891_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3891_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3891_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3891_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3891_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3891_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3892
#define MACROLOP_PRIVATE_EVAL_REC_3891_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3892(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3892_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3892_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3892_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3892_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3892_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3892_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3892_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3892_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3892_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3892_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3893
#define MACROLOP_PRIVATE_EVAL_REC_3892_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3893(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3893_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3893_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3893_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3893_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3893_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3893_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3893_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3893_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3893_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3893_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3894
#define MACROLOP_PRIVATE_EVAL_REC_3893_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3894(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3894_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3894_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3894_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3894_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3894_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3894_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3894_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3894_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3894_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3894_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3895
#define MACROLOP_PRIVATE_EVAL_REC_3894_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3895(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3895_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3895_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3895_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3895_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3895_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3895_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3895_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3895_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3895_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3895_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3896
#define MACROLOP_PRIVATE_EVAL_REC_3895_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3896(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3896_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3896_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3896_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3896_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3896_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3896_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3896_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3896_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3896_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3896_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3897
#define MACROLOP_PRIVATE_EVAL_REC_3896_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3897(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3897_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3897_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3897_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3897_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3897_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3897_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3897_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3897_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3897_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3897_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3898
#define MACROLOP_PRIVATE_EVAL_REC_3897_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3898(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3898_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3898_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3898_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3898_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3898_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3898_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3898_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3898_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3898_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3898_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3899
#define MACROLOP_PRIVATE_EVAL_REC_3898_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3899(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3899_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3899_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3899_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3899_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3899_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3899_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3899_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3899_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3899_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3899_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3900
#define MACROLOP_PRIVATE_EVAL_REC_3899_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3900(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3900_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3900_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3900_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3900_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3900_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3900_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3900_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3900_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3900_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3900_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3901
#define MACROLOP_PRIVATE_EVAL_REC_3900_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3901(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3901_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3901_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3901_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3901_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3901_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3901_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3901_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3901_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3901_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3901_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3902
#define MACROLOP_PRIVATE_EVAL_REC_3901_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3902(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3902_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3902_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3902_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3902_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3902_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3902_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3902_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3902_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3902_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3902_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3903
#define MACROLOP_PRIVATE_EVAL_REC_3902_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3903(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3903_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3903_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3903_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3903_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3903_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3903_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3903_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3903_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3903_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3903_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3904
#define MACROLOP_PRIVATE_EVAL_REC_3903_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3904(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3904_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3904_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3904_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3904_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3904_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3904_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3904_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3904_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3904_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3904_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3905
#define MACROLOP_PRIVATE_EVAL_REC_3904_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3905(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3905_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3905_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3905_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3905_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3905_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3905_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3905_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3905_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3905_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3905_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3906
#define MACROLOP_PRIVATE_EVAL_REC_3905_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3906(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3906_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3906_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3906_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3906_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3906_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3906_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3906_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3906_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3906_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3906_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3907
#define MACROLOP_PRIVATE_EVAL_REC_3906_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3907(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3907_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3907_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3907_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3907_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3907_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3907_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3907_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3907_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3907_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3907_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3908
#define MACROLOP_PRIVATE_EVAL_REC_3907_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3908(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3908_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3908_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3908_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3908_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3908_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3908_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3908_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3908_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3908_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3908_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3909
#define MACROLOP_PRIVATE_EVAL_REC_3908_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3909(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3909_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3909_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3909_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3909_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3909_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3909_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3909_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3909_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3909_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3909_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3910
#define MACROLOP_PRIVATE_EVAL_REC_3909_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3910(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3910_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3910_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3910_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3910_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3910_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3910_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3910_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3910_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3910_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3910_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3911
#define MACROLOP_PRIVATE_EVAL_REC_3910_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3911(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3911_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3911_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3911_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3911_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3911_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3911_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3911_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3911_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3911_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3911_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3912
#define MACROLOP_PRIVATE_EVAL_REC_3911_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3912(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3912_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3912_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3912_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3912_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3912_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3912_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3912_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3912_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3912_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3912_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3913
#define MACROLOP_PRIVATE_EVAL_REC_3912_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3913(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3913_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3913_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3913_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3913_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3913_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3913_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3913_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3913_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3913_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3913_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3914
#define MACROLOP_PRIVATE_EVAL_REC_3913_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3914(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3914_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3914_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3914_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3914_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3914_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3914_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3914_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3914_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3914_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3914_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3915
#define MACROLOP_PRIVATE_EVAL_REC_3914_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3915(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3915_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3915_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3915_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3915_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3915_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3915_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3915_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3915_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3915_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3915_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3916
#define MACROLOP_PRIVATE_EVAL_REC_3915_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3916(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3916_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3916_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3916_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3916_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3916_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3916_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3916_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3916_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3916_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3916_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3917
#define MACROLOP_PRIVATE_EVAL_REC_3916_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3917(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3917_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3917_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3917_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3917_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3917_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3917_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3917_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3917_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3917_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3917_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3918
#define MACROLOP_PRIVATE_EVAL_REC_3917_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3918(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3918_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3918_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3918_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3918_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3918_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3918_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3918_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3918_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3918_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3918_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3919
#define MACROLOP_PRIVATE_EVAL_REC_3918_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3919(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3919_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3919_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3919_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3919_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3919_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3919_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3919_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3919_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3919_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3919_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3920
#define MACROLOP_PRIVATE_EVAL_REC_3919_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3920(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3920_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3920_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3920_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3920_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3920_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3920_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3920_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3920_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3920_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3920_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3921
#define MACROLOP_PRIVATE_EVAL_REC_3920_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3921(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3921_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3921_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3921_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3921_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3921_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3921_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3921_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3921_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3921_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3921_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3922
#define MACROLOP_PRIVATE_EVAL_REC_3921_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3922(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3922_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3922_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3922_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3922_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3922_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3922_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3922_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3922_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3922_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3922_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3923
#define MACROLOP_PRIVATE_EVAL_REC_3922_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3923(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3923_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3923_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3923_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3923_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3923_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3923_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3923_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3923_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3923_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3923_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3924
#define MACROLOP_PRIVATE_EVAL_REC_3923_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3924(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3924_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3924_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3924_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3924_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3924_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3924_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3924_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3924_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3924_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3924_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3925
#define MACROLOP_PRIVATE_EVAL_REC_3924_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3925(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3925_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3925_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3925_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3925_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3925_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3925_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3925_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3925_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3925_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3925_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3926
#define MACROLOP_PRIVATE_EVAL_REC_3925_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3926(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3926_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3926_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3926_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3926_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3926_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3926_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3926_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3926_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3926_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3926_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3927
#define MACROLOP_PRIVATE_EVAL_REC_3926_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3927(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3927_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3927_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3927_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3927_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3927_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3927_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3927_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3927_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3927_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3927_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3928
#define MACROLOP_PRIVATE_EVAL_REC_3927_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3928(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3928_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3928_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3928_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3928_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3928_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3928_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3928_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3928_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3928_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3928_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3929
#define MACROLOP_PRIVATE_EVAL_REC_3928_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3929(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3929_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3929_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3929_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3929_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3929_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3929_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3929_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3929_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3929_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3929_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3930
#define MACROLOP_PRIVATE_EVAL_REC_3929_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3930(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3930_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3930_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3930_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3930_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3930_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3930_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3930_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3930_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3930_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3930_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3931
#define MACROLOP_PRIVATE_EVAL_REC_3930_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3931(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3931_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3931_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3931_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3931_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3931_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3931_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3931_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3931_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3931_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3931_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3932
#define MACROLOP_PRIVATE_EVAL_REC_3931_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3932(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3932_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3932_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3932_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3932_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3932_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3932_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3932_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3932_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3932_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3932_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3933
#define MACROLOP_PRIVATE_EVAL_REC_3932_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3933(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3933_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3933_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3933_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3933_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3933_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3933_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3933_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3933_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3933_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3933_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3934
#define MACROLOP_PRIVATE_EVAL_REC_3933_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3934(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3934_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3934_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3934_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3934_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3934_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3934_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3934_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3934_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3934_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3934_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3935
#define MACROLOP_PRIVATE_EVAL_REC_3934_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3935(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3935_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3935_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3935_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3935_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3935_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3935_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3935_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3935_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3935_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3935_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3936
#define MACROLOP_PRIVATE_EVAL_REC_3935_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3936(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3936_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3936_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3936_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3936_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3936_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3936_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3936_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3936_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3936_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3936_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3937
#define MACROLOP_PRIVATE_EVAL_REC_3936_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3937(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3937_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3937_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3937_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3937_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3937_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3937_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3937_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3937_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3937_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3937_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3938
#define MACROLOP_PRIVATE_EVAL_REC_3937_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3938(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3938_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3938_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3938_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3938_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3938_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3938_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3938_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3938_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3938_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3938_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3939
#define MACROLOP_PRIVATE_EVAL_REC_3938_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3939(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3939_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3939_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3939_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3939_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3939_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3939_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3939_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3939_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3939_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3939_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3940
#define MACROLOP_PRIVATE_EVAL_REC_3939_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3940(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3940_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3940_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3940_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3940_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3940_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3940_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3940_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3940_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3940_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3940_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3941
#define MACROLOP_PRIVATE_EVAL_REC_3940_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3941(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3941_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3941_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3941_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3941_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3941_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3941_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3941_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3941_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3941_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3941_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3942
#define MACROLOP_PRIVATE_EVAL_REC_3941_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3942(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3942_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3942_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3942_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3942_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3942_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3942_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3942_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3942_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3942_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3942_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3943
#define MACROLOP_PRIVATE_EVAL_REC_3942_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3943(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3943_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3943_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3943_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3943_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3943_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3943_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3943_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3943_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3943_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3943_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3944
#define MACROLOP_PRIVATE_EVAL_REC_3943_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3944(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3944_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3944_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3944_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3944_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3944_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3944_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3944_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3944_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3944_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3944_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3945
#define MACROLOP_PRIVATE_EVAL_REC_3944_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3945(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3945_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3945_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3945_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3945_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3945_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3945_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3945_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3945_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3945_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3945_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3946
#define MACROLOP_PRIVATE_EVAL_REC_3945_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3946(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3946_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3946_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3946_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3946_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3946_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3946_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3946_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3946_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3946_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3946_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3947
#define MACROLOP_PRIVATE_EVAL_REC_3946_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3947(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3947_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3947_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3947_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3947_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3947_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3947_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3947_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3947_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3947_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3947_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3948
#define MACROLOP_PRIVATE_EVAL_REC_3947_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3948(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3948_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3948_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3948_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3948_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3948_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3948_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3948_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3948_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3948_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3948_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3949
#define MACROLOP_PRIVATE_EVAL_REC_3948_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3949(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3949_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3949_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3949_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3949_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3949_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3949_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3949_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3949_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3949_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3949_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3950
#define MACROLOP_PRIVATE_EVAL_REC_3949_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3950(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3950_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3950_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3950_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3950_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3950_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3950_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3950_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3950_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3950_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3950_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3951
#define MACROLOP_PRIVATE_EVAL_REC_3950_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3951(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3951_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3951_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3951_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3951_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3951_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3951_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3951_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3951_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3951_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3951_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3952
#define MACROLOP_PRIVATE_EVAL_REC_3951_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3952(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3952_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3952_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3952_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3952_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3952_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3952_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3952_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3952_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3952_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3952_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3953
#define MACROLOP_PRIVATE_EVAL_REC_3952_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3953(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3953_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3953_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3953_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3953_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3953_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3953_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3953_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3953_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3953_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3953_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3954
#define MACROLOP_PRIVATE_EVAL_REC_3953_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3954(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3954_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3954_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3954_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3954_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3954_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3954_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3954_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3954_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3954_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3954_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3955
#define MACROLOP_PRIVATE_EVAL_REC_3954_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3955(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3955_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3955_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3955_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3955_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3955_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3955_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3955_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3955_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3955_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3955_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3956
#define MACROLOP_PRIVATE_EVAL_REC_3955_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3956(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3956_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3956_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3956_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3956_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3956_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3956_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3956_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3956_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3956_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3956_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3957
#define MACROLOP_PRIVATE_EVAL_REC_3956_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3957(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3957_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3957_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3957_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3957_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3957_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3957_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3957_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3957_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3957_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3957_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3958
#define MACROLOP_PRIVATE_EVAL_REC_3957_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3958(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3958_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3958_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3958_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3958_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3958_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3958_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3958_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3958_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3958_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3958_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3959
#define MACROLOP_PRIVATE_EVAL_REC_3958_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3959(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3959_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3959_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3959_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3959_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3959_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3959_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3959_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3959_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3959_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3959_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3960
#define MACROLOP_PRIVATE_EVAL_REC_3959_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3960(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3960_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3960_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3960_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3960_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3960_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3960_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3960_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3960_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3960_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3960_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3961
#define MACROLOP_PRIVATE_EVAL_REC_3960_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3961(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3961_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3961_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3961_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3961_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3961_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3961_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3961_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3961_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3961_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3961_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3962
#define MACROLOP_PRIVATE_EVAL_REC_3961_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3962(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3962_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3962_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3962_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3962_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3962_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3962_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3962_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3962_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3962_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3962_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3963
#define MACROLOP_PRIVATE_EVAL_REC_3962_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3963(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3963_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3963_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3963_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3963_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3963_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3963_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3963_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3963_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3963_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3963_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3964
#define MACROLOP_PRIVATE_EVAL_REC_3963_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3964(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3964_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3964_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3964_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3964_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3964_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3964_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3964_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3964_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3964_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3964_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3965
#define MACROLOP_PRIVATE_EVAL_REC_3964_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3965(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3965_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3965_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3965_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3965_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3965_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3965_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3965_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3965_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3965_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3965_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3966
#define MACROLOP_PRIVATE_EVAL_REC_3965_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3966(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3966_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3966_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3966_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3966_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3966_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3966_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3966_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3966_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3966_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3966_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3967
#define MACROLOP_PRIVATE_EVAL_REC_3966_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3967(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3967_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3967_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3967_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3967_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3967_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3967_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3967_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3967_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3967_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3967_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3968
#define MACROLOP_PRIVATE_EVAL_REC_3967_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3968(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3968_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3968_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3968_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3968_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3968_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3968_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3968_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3968_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3968_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3968_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3969
#define MACROLOP_PRIVATE_EVAL_REC_3968_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3969(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3969_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3969_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3969_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3969_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3969_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3969_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3969_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3969_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3969_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3969_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3970
#define MACROLOP_PRIVATE_EVAL_REC_3969_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3970(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3970_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3970_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3970_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3970_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3970_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3970_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3970_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3970_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3970_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3970_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3971
#define MACROLOP_PRIVATE_EVAL_REC_3970_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3971(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3971_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3971_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3971_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3971_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3971_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3971_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3971_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3971_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3971_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3971_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3972
#define MACROLOP_PRIVATE_EVAL_REC_3971_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3972(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3972_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3972_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3972_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3972_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3972_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3972_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3972_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3972_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3972_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3972_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3973
#define MACROLOP_PRIVATE_EVAL_REC_3972_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3973(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3973_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3973_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3973_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3973_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3973_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3973_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3973_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3973_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3973_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3973_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3974
#define MACROLOP_PRIVATE_EVAL_REC_3973_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3974(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3974_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3974_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3974_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3974_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3974_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3974_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3974_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3974_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3974_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3974_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3975
#define MACROLOP_PRIVATE_EVAL_REC_3974_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3975(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3975_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3975_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3975_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3975_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3975_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3975_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3975_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3975_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3975_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3975_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3976
#define MACROLOP_PRIVATE_EVAL_REC_3975_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3976(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3976_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3976_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3976_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3976_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3976_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3976_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3976_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3976_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3976_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3976_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3977
#define MACROLOP_PRIVATE_EVAL_REC_3976_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3977(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3977_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3977_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3977_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3977_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3977_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3977_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3977_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3977_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3977_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3977_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3978
#define MACROLOP_PRIVATE_EVAL_REC_3977_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3978(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3978_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3978_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3978_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3978_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3978_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3978_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3978_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3978_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3978_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3978_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3979
#define MACROLOP_PRIVATE_EVAL_REC_3978_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3979(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3979_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3979_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3979_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3979_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3979_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3979_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3979_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3979_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3979_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3979_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3980
#define MACROLOP_PRIVATE_EVAL_REC_3979_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3980(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3980_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3980_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3980_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3980_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3980_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3980_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3980_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3980_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3980_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3980_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3981
#define MACROLOP_PRIVATE_EVAL_REC_3980_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3981(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3981_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3981_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3981_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3981_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3981_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3981_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3981_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3981_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3981_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3981_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3982
#define MACROLOP_PRIVATE_EVAL_REC_3981_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3982(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3982_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3982_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3982_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3982_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3982_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3982_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3982_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3982_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3982_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3982_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3983
#define MACROLOP_PRIVATE_EVAL_REC_3982_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3983(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3983_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3983_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3983_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3983_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3983_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3983_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3983_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3983_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3983_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3983_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3984
#define MACROLOP_PRIVATE_EVAL_REC_3983_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3984(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3984_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3984_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3984_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3984_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3984_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3984_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3984_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3984_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3984_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3984_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3985
#define MACROLOP_PRIVATE_EVAL_REC_3984_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3985(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3985_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3985_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3985_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3985_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3985_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3985_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3985_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3985_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3985_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3985_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3986
#define MACROLOP_PRIVATE_EVAL_REC_3985_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3986(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3986_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3986_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3986_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3986_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3986_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3986_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3986_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3986_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3986_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3986_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3987
#define MACROLOP_PRIVATE_EVAL_REC_3986_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3987(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3987_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3987_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3987_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3987_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3987_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3987_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3987_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3987_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3987_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3987_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3988
#define MACROLOP_PRIVATE_EVAL_REC_3987_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3988(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3988_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3988_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3988_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3988_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3988_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3988_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3988_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3988_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3988_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3988_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3989
#define MACROLOP_PRIVATE_EVAL_REC_3988_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3989(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3989_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3989_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3989_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3989_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3989_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3989_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3989_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3989_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3989_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3989_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3990
#define MACROLOP_PRIVATE_EVAL_REC_3989_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3990(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3990_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3990_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3990_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3990_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3990_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3990_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3990_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3990_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3990_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3990_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3991
#define MACROLOP_PRIVATE_EVAL_REC_3990_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3991(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3991_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3991_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3991_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3991_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3991_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3991_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3991_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3991_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3991_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3991_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3992
#define MACROLOP_PRIVATE_EVAL_REC_3991_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3992(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3992_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3992_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3992_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3992_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3992_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3992_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3992_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3992_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3992_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3992_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3993
#define MACROLOP_PRIVATE_EVAL_REC_3992_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3993(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3993_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3993_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3993_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3993_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3993_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3993_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3993_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3993_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3993_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3993_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3994
#define MACROLOP_PRIVATE_EVAL_REC_3993_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3994(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3994_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3994_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3994_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3994_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3994_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3994_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3994_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3994_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3994_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3994_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3995
#define MACROLOP_PRIVATE_EVAL_REC_3994_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3995(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3995_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3995_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3995_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3995_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3995_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3995_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3995_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3995_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3995_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3995_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3996
#define MACROLOP_PRIVATE_EVAL_REC_3995_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3996(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3996_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3996_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3996_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3996_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3996_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3996_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3996_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3996_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3996_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3996_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3997
#define MACROLOP_PRIVATE_EVAL_REC_3996_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3997(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3997_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3997_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3997_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3997_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3997_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3997_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3997_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3997_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3997_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3997_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3998
#define MACROLOP_PRIVATE_EVAL_REC_3997_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3998(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3998_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3998_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3998_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3998_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3998_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3998_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3998_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3998_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3998_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3998_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3999
#define MACROLOP_PRIVATE_EVAL_REC_3998_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3999(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3999_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3999_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3999_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3999_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3999_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3999_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3999_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3999_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3999_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3999_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4000
#define MACROLOP_PRIVATE_EVAL_REC_3999_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4000(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4000_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4000_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4000_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4000_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4000_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4000_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4000_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4000_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4000_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4000_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4001
#define MACROLOP_PRIVATE_EVAL_REC_4000_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4001(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4001_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4001_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4001_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4001_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4001_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4001_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4001_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4001_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4001_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4001_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4002
#define MACROLOP_PRIVATE_EVAL_REC_4001_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4002(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4002_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4002_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4002_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4002_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4002_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4002_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4002_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4002_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4002_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4002_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4003
#define MACROLOP_PRIVATE_EVAL_REC_4002_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4003(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4003_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4003_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4003_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4003_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4003_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4003_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4003_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4003_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4003_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4003_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4004
#define MACROLOP_PRIVATE_EVAL_REC_4003_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4004(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4004_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4004_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4004_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4004_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4004_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4004_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4004_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4004_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4004_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4004_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4005
#define MACROLOP_PRIVATE_EVAL_REC_4004_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4005(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4005_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4005_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4005_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4005_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4005_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4005_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4005_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4005_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4005_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4005_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4006
#define MACROLOP_PRIVATE_EVAL_REC_4005_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4006(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4006_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4006_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4006_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4006_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4006_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4006_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4006_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4006_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4006_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4006_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4007
#define MACROLOP_PRIVATE_EVAL_REC_4006_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4007(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4007_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4007_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4007_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4007_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4007_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4007_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4007_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4007_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4007_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4007_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4008
#define MACROLOP_PRIVATE_EVAL_REC_4007_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4008(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4008_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4008_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4008_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4008_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4008_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4008_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4008_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4008_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4008_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4008_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4009
#define MACROLOP_PRIVATE_EVAL_REC_4008_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4009(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4009_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4009_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4009_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4009_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4009_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4009_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4009_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4009_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4009_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4009_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4010
#define MACROLOP_PRIVATE_EVAL_REC_4009_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4010(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4010_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4010_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4010_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4010_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4010_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4010_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4010_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4010_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4010_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4010_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4011
#define MACROLOP_PRIVATE_EVAL_REC_4010_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4011(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4011_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4011_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4011_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4011_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4011_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4011_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4011_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4011_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4011_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4011_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4012
#define MACROLOP_PRIVATE_EVAL_REC_4011_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4012(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4012_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4012_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4012_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4012_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4012_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4012_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4012_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4012_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4012_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4012_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4013
#define MACROLOP_PRIVATE_EVAL_REC_4012_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4013(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4013_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4013_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4013_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4013_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4013_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4013_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4013_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4013_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4013_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4013_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4014
#define MACROLOP_PRIVATE_EVAL_REC_4013_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4014(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4014_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4014_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4014_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4014_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4014_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4014_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4014_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4014_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4014_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4014_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4015
#define MACROLOP_PRIVATE_EVAL_REC_4014_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4015(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4015_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4015_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4015_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4015_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4015_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4015_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4015_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4015_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4015_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4015_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4016
#define MACROLOP_PRIVATE_EVAL_REC_4015_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4016(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4016_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4016_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4016_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4016_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4016_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4016_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4016_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4016_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4016_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4016_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4017
#define MACROLOP_PRIVATE_EVAL_REC_4016_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4017(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4017_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4017_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4017_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4017_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4017_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4017_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4017_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4017_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4017_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4017_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4018
#define MACROLOP_PRIVATE_EVAL_REC_4017_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4018(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4018_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4018_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4018_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4018_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4018_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4018_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4018_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4018_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4018_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4018_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4019
#define MACROLOP_PRIVATE_EVAL_REC_4018_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4019(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4019_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4019_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4019_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4019_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4019_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4019_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4019_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4019_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4019_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4019_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4020
#define MACROLOP_PRIVATE_EVAL_REC_4019_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4020(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4020_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4020_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4020_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4020_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4020_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4020_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4020_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4020_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4020_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4020_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4021
#define MACROLOP_PRIVATE_EVAL_REC_4020_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4021(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4021_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4021_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4021_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4021_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4021_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4021_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4021_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4021_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4021_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4021_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4022
#define MACROLOP_PRIVATE_EVAL_REC_4021_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4022(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4022_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4022_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4022_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4022_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4022_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4022_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4022_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4022_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4022_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4022_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4023
#define MACROLOP_PRIVATE_EVAL_REC_4022_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4023(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4023_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4023_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4023_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4023_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4023_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4023_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4023_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4023_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4023_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4023_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4024
#define MACROLOP_PRIVATE_EVAL_REC_4023_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4024(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4024_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4024_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4024_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4024_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4024_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4024_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4024_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4024_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4024_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4024_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4025
#define MACROLOP_PRIVATE_EVAL_REC_4024_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4025(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4025_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4025_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4025_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4025_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4025_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4025_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4025_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4025_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4025_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4025_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4026
#define MACROLOP_PRIVATE_EVAL_REC_4025_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4026(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4026_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4026_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4026_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4026_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4026_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4026_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4026_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4026_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4026_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4026_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4027
#define MACROLOP_PRIVATE_EVAL_REC_4026_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4027(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4027_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4027_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4027_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4027_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4027_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4027_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4027_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4027_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4027_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4027_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4028
#define MACROLOP_PRIVATE_EVAL_REC_4027_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4028(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4028_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4028_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4028_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4028_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4028_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4028_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4028_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4028_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4028_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4028_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4029
#define MACROLOP_PRIVATE_EVAL_REC_4028_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4029(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4029_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4029_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4029_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4029_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4029_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4029_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4029_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4029_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4029_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4029_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4030
#define MACROLOP_PRIVATE_EVAL_REC_4029_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4030(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4030_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4030_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4030_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4030_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4030_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4030_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4030_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4030_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4030_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4030_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4031
#define MACROLOP_PRIVATE_EVAL_REC_4030_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4031(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4031_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4031_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4031_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4031_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4031_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4031_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4031_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4031_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4031_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4031_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4032
#define MACROLOP_PRIVATE_EVAL_REC_4031_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4032(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4032_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4032_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4032_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4032_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4032_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4032_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4032_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4032_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4032_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4032_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4033
#define MACROLOP_PRIVATE_EVAL_REC_4032_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4033(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4033_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4033_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4033_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4033_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4033_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4033_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4033_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4033_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4033_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4033_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4034
#define MACROLOP_PRIVATE_EVAL_REC_4033_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4034(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4034_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4034_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4034_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4034_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4034_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4034_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4034_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4034_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4034_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4034_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4035
#define MACROLOP_PRIVATE_EVAL_REC_4034_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4035(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4035_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4035_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4035_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4035_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4035_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4035_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4035_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4035_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4035_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4035_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4036
#define MACROLOP_PRIVATE_EVAL_REC_4035_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4036(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4036_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4036_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4036_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4036_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4036_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4036_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4036_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4036_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4036_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4036_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4037
#define MACROLOP_PRIVATE_EVAL_REC_4036_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4037(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4037_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4037_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4037_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4037_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4037_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4037_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4037_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4037_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4037_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4037_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4038
#define MACROLOP_PRIVATE_EVAL_REC_4037_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4038(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4038_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4038_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4038_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4038_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4038_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4038_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4038_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4038_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4038_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4038_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4039
#define MACROLOP_PRIVATE_EVAL_REC_4038_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4039(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4039_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4039_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4039_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4039_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4039_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4039_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4039_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4039_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4039_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4039_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4040
#define MACROLOP_PRIVATE_EVAL_REC_4039_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4040(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4040_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4040_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4040_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4040_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4040_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4040_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4040_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4040_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4040_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4040_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4041
#define MACROLOP_PRIVATE_EVAL_REC_4040_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4041(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4041_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4041_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4041_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4041_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4041_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4041_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4041_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4041_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4041_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4041_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4042
#define MACROLOP_PRIVATE_EVAL_REC_4041_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4042(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4042_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4042_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4042_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4042_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4042_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4042_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4042_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4042_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4042_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4042_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4043
#define MACROLOP_PRIVATE_EVAL_REC_4042_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4043(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4043_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4043_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4043_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4043_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4043_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4043_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4043_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4043_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4043_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4043_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4044
#define MACROLOP_PRIVATE_EVAL_REC_4043_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4044(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4044_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4044_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4044_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4044_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4044_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4044_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4044_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4044_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4044_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4044_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4045
#define MACROLOP_PRIVATE_EVAL_REC_4044_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4045(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4045_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4045_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4045_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4045_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4045_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4045_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4045_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4045_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4045_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4045_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4046
#define MACROLOP_PRIVATE_EVAL_REC_4045_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4046(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4046_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4046_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4046_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4046_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4046_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4046_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4046_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4046_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4046_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4046_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4047
#define MACROLOP_PRIVATE_EVAL_REC_4046_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4047(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4047_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4047_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4047_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4047_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4047_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4047_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4047_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4047_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4047_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4047_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4048
#define MACROLOP_PRIVATE_EVAL_REC_4047_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4048(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4048_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4048_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4048_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4048_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4048_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4048_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4048_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4048_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4048_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4048_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4049
#define MACROLOP_PRIVATE_EVAL_REC_4048_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4049(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4049_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4049_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4049_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4049_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4049_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4049_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4049_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4049_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4049_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4049_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4050
#define MACROLOP_PRIVATE_EVAL_REC_4049_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4050(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4050_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4050_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4050_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4050_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4050_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4050_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4050_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4050_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4050_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4050_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4051
#define MACROLOP_PRIVATE_EVAL_REC_4050_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4051(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4051_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4051_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4051_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4051_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4051_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4051_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4051_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4051_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4051_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4051_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4052
#define MACROLOP_PRIVATE_EVAL_REC_4051_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4052(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4052_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4052_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4052_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4052_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4052_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4052_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4052_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4052_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4052_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4052_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4053
#define MACROLOP_PRIVATE_EVAL_REC_4052_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4053(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4053_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4053_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4053_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4053_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4053_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4053_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4053_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4053_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4053_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4053_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4054
#define MACROLOP_PRIVATE_EVAL_REC_4053_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4054(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4054_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4054_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4054_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4054_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4054_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4054_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4054_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4054_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4054_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4054_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4055
#define MACROLOP_PRIVATE_EVAL_REC_4054_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4055(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4055_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4055_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4055_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4055_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4055_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4055_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4055_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4055_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4055_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4055_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4056
#define MACROLOP_PRIVATE_EVAL_REC_4055_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4056(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4056_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4056_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4056_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4056_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4056_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4056_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4056_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4056_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4056_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4056_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4057
#define MACROLOP_PRIVATE_EVAL_REC_4056_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4057(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4057_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4057_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4057_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4057_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4057_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4057_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4057_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4057_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4057_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4057_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4058
#define MACROLOP_PRIVATE_EVAL_REC_4057_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4058(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4058_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4058_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4058_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4058_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4058_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4058_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4058_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4058_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4058_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4058_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4059
#define MACROLOP_PRIVATE_EVAL_REC_4058_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4059(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4059_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4059_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4059_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4059_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4059_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4059_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4059_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4059_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4059_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4059_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4060
#define MACROLOP_PRIVATE_EVAL_REC_4059_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4060(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4060_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4060_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4060_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4060_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4060_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4060_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4060_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4060_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4060_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4060_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4061
#define MACROLOP_PRIVATE_EVAL_REC_4060_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4061(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4061_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4061_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4061_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4061_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4061_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4061_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4061_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4061_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4061_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4061_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4062
#define MACROLOP_PRIVATE_EVAL_REC_4061_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4062(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4062_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4062_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4062_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4062_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4062_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4062_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4062_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4062_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4062_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4062_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4063
#define MACROLOP_PRIVATE_EVAL_REC_4062_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4063(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4063_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4063_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4063_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4063_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4063_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4063_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4063_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4063_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4063_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4063_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4064
#define MACROLOP_PRIVATE_EVAL_REC_4063_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4064(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4064_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4064_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4064_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4064_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4064_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4064_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4064_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4064_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4064_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4064_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4065
#define MACROLOP_PRIVATE_EVAL_REC_4064_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4065(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4065_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4065_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4065_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4065_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4065_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4065_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4065_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4065_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4065_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4065_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4066
#define MACROLOP_PRIVATE_EVAL_REC_4065_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4066(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4066_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4066_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4066_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4066_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4066_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4066_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4066_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4066_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4066_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4066_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4067
#define MACROLOP_PRIVATE_EVAL_REC_4066_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4067(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4067_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4067_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4067_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4067_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4067_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4067_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4067_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4067_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4067_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4067_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4068
#define MACROLOP_PRIVATE_EVAL_REC_4067_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4068(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4068_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4068_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4068_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4068_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4068_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4068_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4068_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4068_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4068_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4068_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4069
#define MACROLOP_PRIVATE_EVAL_REC_4068_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4069(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4069_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4069_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4069_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4069_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4069_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4069_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4069_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4069_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4069_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4069_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4070
#define MACROLOP_PRIVATE_EVAL_REC_4069_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4070(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4070_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4070_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4070_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4070_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4070_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4070_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4070_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4070_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4070_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4070_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4071
#define MACROLOP_PRIVATE_EVAL_REC_4070_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4071(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4071_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4071_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4071_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4071_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4071_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4071_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4071_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4071_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4071_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4071_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4072
#define MACROLOP_PRIVATE_EVAL_REC_4071_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4072(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4072_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4072_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4072_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4072_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4072_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4072_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4072_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4072_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4072_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4072_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4073
#define MACROLOP_PRIVATE_EVAL_REC_4072_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4073(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4073_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4073_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4073_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4073_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4073_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4073_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4073_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4073_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4073_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4073_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4074
#define MACROLOP_PRIVATE_EVAL_REC_4073_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4074(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4074_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4074_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4074_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4074_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4074_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4074_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4074_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4074_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4074_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4074_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4075
#define MACROLOP_PRIVATE_EVAL_REC_4074_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4075(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4075_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4075_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4075_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4075_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4075_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4075_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4075_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4075_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4075_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4075_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4076
#define MACROLOP_PRIVATE_EVAL_REC_4075_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4076(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4076_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4076_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4076_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4076_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4076_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4076_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4076_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4076_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4076_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4076_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4077
#define MACROLOP_PRIVATE_EVAL_REC_4076_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4077(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4077_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4077_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4077_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4077_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4077_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4077_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4077_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4077_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4077_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4077_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4078
#define MACROLOP_PRIVATE_EVAL_REC_4077_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4078(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4078_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4078_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4078_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4078_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4078_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4078_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4078_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4078_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4078_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4078_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4079
#define MACROLOP_PRIVATE_EVAL_REC_4078_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4079(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4079_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4079_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4079_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4079_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4079_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4079_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4079_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4079_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4079_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4079_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4080
#define MACROLOP_PRIVATE_EVAL_REC_4079_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4080(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4080_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4080_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4080_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4080_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4080_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4080_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4080_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4080_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4080_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4080_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4081
#define MACROLOP_PRIVATE_EVAL_REC_4080_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4081(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4081_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4081_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4081_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4081_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4081_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4081_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4081_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4081_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4081_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4081_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4082
#define MACROLOP_PRIVATE_EVAL_REC_4081_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4082(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4082_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4082_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4082_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4082_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4082_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4082_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4082_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4082_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4082_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4082_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4083
#define MACROLOP_PRIVATE_EVAL_REC_4082_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4083(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4083_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4083_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4083_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4083_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4083_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4083_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4083_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4083_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4083_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4083_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4084
#define MACROLOP_PRIVATE_EVAL_REC_4083_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4084(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4084_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4084_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4084_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4084_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4084_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4084_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4084_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4084_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4084_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4084_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4085
#define MACROLOP_PRIVATE_EVAL_REC_4084_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4085(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4085_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4085_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4085_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4085_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4085_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4085_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4085_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4085_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4085_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4085_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4086
#define MACROLOP_PRIVATE_EVAL_REC_4085_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4086(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4086_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4086_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4086_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4086_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4086_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4086_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4086_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4086_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4086_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4086_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4087
#define MACROLOP_PRIVATE_EVAL_REC_4086_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4087(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4087_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4087_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4087_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4087_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4087_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4087_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4087_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4087_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4087_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4087_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4088
#define MACROLOP_PRIVATE_EVAL_REC_4087_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4088(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4088_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4088_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4088_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4088_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4088_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4088_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4088_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4088_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4088_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4088_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4089
#define MACROLOP_PRIVATE_EVAL_REC_4088_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4089(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4089_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4089_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4089_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4089_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4089_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4089_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4089_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4089_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4089_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4089_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4090
#define MACROLOP_PRIVATE_EVAL_REC_4089_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4090(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4090_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4090_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4090_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4090_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4090_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4090_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4090_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4090_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4090_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4090_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4091
#define MACROLOP_PRIVATE_EVAL_REC_4090_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4091(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4091_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4091_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4091_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4091_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4091_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4091_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4091_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4091_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4091_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4091_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4092
#define MACROLOP_PRIVATE_EVAL_REC_4091_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4092(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4092_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4092_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4092_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4092_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4092_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4092_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4092_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4092_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4092_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4092_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4093
#define MACROLOP_PRIVATE_EVAL_REC_4092_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4093(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4093_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4093_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4093_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4093_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4093_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4093_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4093_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4093_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4093_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4093_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4094
#define MACROLOP_PRIVATE_EVAL_REC_4093_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4094(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4094_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4094_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4094_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4094_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4094_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4094_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4094_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4094_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4094_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4094_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4095
#define MACROLOP_PRIVATE_EVAL_REC_4094_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4095(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4095_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4095_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4095_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4095_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4095_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4095_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4095_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4095_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4095_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4095_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4096
#define MACROLOP_PRIVATE_EVAL_REC_4095_STOP(...) __VA_ARGS__

#endif // MACROLOP_EVAL_REC_UNROLL_3072_TO_4096_H
