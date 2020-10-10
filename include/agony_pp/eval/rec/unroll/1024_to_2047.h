#ifndef AGONY_PP_EVAL_REC_UNROLL_1024_TO_2047_H
#define AGONY_PP_EVAL_REC_UNROLL_1024_TO_2047_H

#define AGONY_PP_PRIVATE_EVAL_REC_1024(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1024_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1024_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1024_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1024_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1024_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1024_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1024_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1024_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1024_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1024_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1025
#define AGONY_PP_PRIVATE_EVAL_REC_1024_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1025(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1025_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1025_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1025_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1025_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1025_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1025_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1025_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1025_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1025_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1025_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1026
#define AGONY_PP_PRIVATE_EVAL_REC_1025_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1026(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1026_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1026_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1026_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1026_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1026_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1026_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1026_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1026_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1026_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1026_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1027
#define AGONY_PP_PRIVATE_EVAL_REC_1026_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1027(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1027_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1027_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1027_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1027_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1027_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1027_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1027_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1027_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1027_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1027_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1028
#define AGONY_PP_PRIVATE_EVAL_REC_1027_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1028(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1028_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1028_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1028_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1028_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1028_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1028_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1028_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1028_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1028_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1028_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1029
#define AGONY_PP_PRIVATE_EVAL_REC_1028_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1029(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1029_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1029_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1029_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1029_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1029_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1029_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1029_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1029_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1029_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1029_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1030
#define AGONY_PP_PRIVATE_EVAL_REC_1029_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1030(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1030_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1030_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1030_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1030_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1030_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1030_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1030_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1030_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1030_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1030_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1031
#define AGONY_PP_PRIVATE_EVAL_REC_1030_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1031(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1031_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1031_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1031_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1031_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1031_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1031_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1031_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1031_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1031_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1031_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1032
#define AGONY_PP_PRIVATE_EVAL_REC_1031_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1032(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1032_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1032_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1032_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1032_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1032_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1032_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1032_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1032_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1032_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1032_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1033
#define AGONY_PP_PRIVATE_EVAL_REC_1032_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1033(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1033_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1033_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1033_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1033_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1033_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1033_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1033_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1033_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1033_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1033_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1034
#define AGONY_PP_PRIVATE_EVAL_REC_1033_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1034(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1034_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1034_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1034_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1034_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1034_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1034_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1034_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1034_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1034_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1034_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1035
#define AGONY_PP_PRIVATE_EVAL_REC_1034_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1035(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1035_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1035_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1035_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1035_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1035_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1035_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1035_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1035_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1035_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1035_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1036
#define AGONY_PP_PRIVATE_EVAL_REC_1035_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1036(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1036_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1036_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1036_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1036_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1036_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1036_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1036_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1036_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1036_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1036_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1037
#define AGONY_PP_PRIVATE_EVAL_REC_1036_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1037(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1037_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1037_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1037_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1037_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1037_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1037_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1037_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1037_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1037_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1037_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1038
#define AGONY_PP_PRIVATE_EVAL_REC_1037_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1038(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1038_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1038_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1038_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1038_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1038_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1038_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1038_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1038_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1038_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1038_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1039
#define AGONY_PP_PRIVATE_EVAL_REC_1038_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1039(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1039_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1039_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1039_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1039_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1039_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1039_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1039_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1039_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1039_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1039_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1040
#define AGONY_PP_PRIVATE_EVAL_REC_1039_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1040(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1040_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1040_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1040_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1040_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1040_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1040_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1040_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1040_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1040_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1040_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1041
#define AGONY_PP_PRIVATE_EVAL_REC_1040_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1041(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1041_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1041_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1041_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1041_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1041_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1041_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1041_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1041_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1041_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1041_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1042
#define AGONY_PP_PRIVATE_EVAL_REC_1041_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1042(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1042_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1042_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1042_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1042_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1042_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1042_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1042_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1042_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1042_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1042_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1043
#define AGONY_PP_PRIVATE_EVAL_REC_1042_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1043(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1043_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1043_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1043_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1043_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1043_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1043_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1043_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1043_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1043_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1043_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1044
#define AGONY_PP_PRIVATE_EVAL_REC_1043_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1044(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1044_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1044_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1044_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1044_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1044_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1044_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1044_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1044_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1044_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1044_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1045
#define AGONY_PP_PRIVATE_EVAL_REC_1044_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1045(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1045_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1045_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1045_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1045_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1045_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1045_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1045_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1045_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1045_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1045_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1046
#define AGONY_PP_PRIVATE_EVAL_REC_1045_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1046(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1046_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1046_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1046_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1046_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1046_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1046_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1046_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1046_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1046_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1046_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1047
#define AGONY_PP_PRIVATE_EVAL_REC_1046_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1047(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1047_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1047_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1047_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1047_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1047_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1047_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1047_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1047_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1047_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1047_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1048
#define AGONY_PP_PRIVATE_EVAL_REC_1047_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1048(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1048_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1048_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1048_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1048_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1048_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1048_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1048_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1048_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1048_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1048_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1049
#define AGONY_PP_PRIVATE_EVAL_REC_1048_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1049(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1049_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1049_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1049_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1049_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1049_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1049_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1049_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1049_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1049_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1049_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1050
#define AGONY_PP_PRIVATE_EVAL_REC_1049_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1050(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1050_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1050_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1050_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1050_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1050_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1050_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1050_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1050_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1050_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1050_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1051
#define AGONY_PP_PRIVATE_EVAL_REC_1050_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1051(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1051_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1051_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1051_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1051_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1051_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1051_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1051_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1051_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1051_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1051_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1052
#define AGONY_PP_PRIVATE_EVAL_REC_1051_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1052(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1052_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1052_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1052_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1052_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1052_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1052_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1052_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1052_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1052_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1052_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1053
#define AGONY_PP_PRIVATE_EVAL_REC_1052_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1053(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1053_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1053_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1053_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1053_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1053_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1053_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1053_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1053_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1053_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1053_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1054
#define AGONY_PP_PRIVATE_EVAL_REC_1053_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1054(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1054_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1054_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1054_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1054_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1054_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1054_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1054_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1054_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1054_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1054_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1055
#define AGONY_PP_PRIVATE_EVAL_REC_1054_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1055(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1055_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1055_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1055_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1055_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1055_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1055_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1055_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1055_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1055_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1055_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1056
#define AGONY_PP_PRIVATE_EVAL_REC_1055_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1056(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1056_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1056_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1056_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1056_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1056_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1056_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1056_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1056_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1056_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1056_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1057
#define AGONY_PP_PRIVATE_EVAL_REC_1056_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1057(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1057_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1057_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1057_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1057_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1057_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1057_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1057_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1057_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1057_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1057_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1058
#define AGONY_PP_PRIVATE_EVAL_REC_1057_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1058(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1058_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1058_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1058_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1058_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1058_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1058_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1058_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1058_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1058_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1058_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1059
#define AGONY_PP_PRIVATE_EVAL_REC_1058_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1059(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1059_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1059_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1059_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1059_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1059_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1059_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1059_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1059_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1059_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1059_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1060
#define AGONY_PP_PRIVATE_EVAL_REC_1059_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1060(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1060_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1060_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1060_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1060_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1060_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1060_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1060_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1060_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1060_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1060_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1061
#define AGONY_PP_PRIVATE_EVAL_REC_1060_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1061(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1061_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1061_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1061_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1061_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1061_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1061_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1061_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1061_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1061_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1061_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1062
#define AGONY_PP_PRIVATE_EVAL_REC_1061_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1062(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1062_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1062_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1062_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1062_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1062_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1062_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1062_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1062_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1062_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1062_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1063
#define AGONY_PP_PRIVATE_EVAL_REC_1062_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1063(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1063_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1063_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1063_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1063_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1063_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1063_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1063_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1063_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1063_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1063_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1064
#define AGONY_PP_PRIVATE_EVAL_REC_1063_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1064(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1064_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1064_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1064_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1064_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1064_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1064_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1064_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1064_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1064_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1064_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1065
#define AGONY_PP_PRIVATE_EVAL_REC_1064_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1065(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1065_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1065_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1065_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1065_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1065_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1065_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1065_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1065_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1065_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1065_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1066
#define AGONY_PP_PRIVATE_EVAL_REC_1065_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1066(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1066_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1066_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1066_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1066_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1066_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1066_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1066_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1066_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1066_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1066_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1067
#define AGONY_PP_PRIVATE_EVAL_REC_1066_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1067(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1067_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1067_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1067_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1067_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1067_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1067_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1067_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1067_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1067_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1067_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1068
#define AGONY_PP_PRIVATE_EVAL_REC_1067_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1068(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1068_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1068_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1068_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1068_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1068_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1068_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1068_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1068_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1068_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1068_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1069
#define AGONY_PP_PRIVATE_EVAL_REC_1068_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1069(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1069_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1069_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1069_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1069_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1069_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1069_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1069_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1069_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1069_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1069_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1070
#define AGONY_PP_PRIVATE_EVAL_REC_1069_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1070(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1070_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1070_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1070_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1070_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1070_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1070_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1070_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1070_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1070_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1070_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1071
#define AGONY_PP_PRIVATE_EVAL_REC_1070_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1071(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1071_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1071_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1071_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1071_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1071_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1071_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1071_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1071_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1071_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1071_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1072
#define AGONY_PP_PRIVATE_EVAL_REC_1071_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1072(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1072_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1072_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1072_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1072_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1072_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1072_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1072_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1072_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1072_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1072_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1073
#define AGONY_PP_PRIVATE_EVAL_REC_1072_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1073(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1073_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1073_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1073_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1073_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1073_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1073_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1073_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1073_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1073_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1073_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1074
#define AGONY_PP_PRIVATE_EVAL_REC_1073_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1074(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1074_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1074_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1074_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1074_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1074_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1074_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1074_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1074_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1074_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1074_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1075
#define AGONY_PP_PRIVATE_EVAL_REC_1074_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1075(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1075_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1075_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1075_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1075_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1075_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1075_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1075_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1075_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1075_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1075_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1076
#define AGONY_PP_PRIVATE_EVAL_REC_1075_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1076(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1076_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1076_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1076_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1076_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1076_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1076_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1076_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1076_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1076_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1076_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1077
#define AGONY_PP_PRIVATE_EVAL_REC_1076_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1077(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1077_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1077_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1077_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1077_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1077_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1077_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1077_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1077_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1077_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1077_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1078
#define AGONY_PP_PRIVATE_EVAL_REC_1077_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1078(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1078_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1078_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1078_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1078_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1078_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1078_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1078_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1078_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1078_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1078_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1079
#define AGONY_PP_PRIVATE_EVAL_REC_1078_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1079(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1079_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1079_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1079_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1079_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1079_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1079_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1079_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1079_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1079_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1079_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1080
#define AGONY_PP_PRIVATE_EVAL_REC_1079_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1080(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1080_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1080_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1080_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1080_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1080_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1080_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1080_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1080_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1080_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1080_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1081
#define AGONY_PP_PRIVATE_EVAL_REC_1080_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1081(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1081_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1081_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1081_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1081_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1081_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1081_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1081_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1081_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1081_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1081_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1082
#define AGONY_PP_PRIVATE_EVAL_REC_1081_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1082(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1082_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1082_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1082_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1082_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1082_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1082_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1082_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1082_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1082_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1082_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1083
#define AGONY_PP_PRIVATE_EVAL_REC_1082_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1083(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1083_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1083_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1083_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1083_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1083_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1083_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1083_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1083_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1083_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1083_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1084
#define AGONY_PP_PRIVATE_EVAL_REC_1083_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1084(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1084_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1084_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1084_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1084_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1084_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1084_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1084_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1084_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1084_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1084_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1085
#define AGONY_PP_PRIVATE_EVAL_REC_1084_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1085(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1085_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1085_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1085_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1085_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1085_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1085_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1085_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1085_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1085_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1085_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1086
#define AGONY_PP_PRIVATE_EVAL_REC_1085_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1086(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1086_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1086_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1086_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1086_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1086_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1086_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1086_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1086_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1086_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1086_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1087
#define AGONY_PP_PRIVATE_EVAL_REC_1086_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1087(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1087_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1087_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1087_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1087_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1087_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1087_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1087_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1087_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1087_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1087_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1088
#define AGONY_PP_PRIVATE_EVAL_REC_1087_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1088(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1088_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1088_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1088_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1088_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1088_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1088_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1088_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1088_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1088_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1088_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1089
#define AGONY_PP_PRIVATE_EVAL_REC_1088_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1089(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1089_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1089_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1089_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1089_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1089_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1089_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1089_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1089_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1089_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1089_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1090
#define AGONY_PP_PRIVATE_EVAL_REC_1089_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1090(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1090_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1090_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1090_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1090_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1090_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1090_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1090_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1090_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1090_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1090_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1091
#define AGONY_PP_PRIVATE_EVAL_REC_1090_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1091(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1091_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1091_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1091_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1091_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1091_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1091_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1091_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1091_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1091_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1091_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1092
#define AGONY_PP_PRIVATE_EVAL_REC_1091_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1092(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1092_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1092_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1092_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1092_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1092_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1092_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1092_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1092_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1092_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1092_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1093
#define AGONY_PP_PRIVATE_EVAL_REC_1092_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1093(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1093_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1093_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1093_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1093_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1093_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1093_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1093_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1093_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1093_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1093_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1094
#define AGONY_PP_PRIVATE_EVAL_REC_1093_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1094(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1094_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1094_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1094_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1094_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1094_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1094_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1094_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1094_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1094_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1094_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1095
#define AGONY_PP_PRIVATE_EVAL_REC_1094_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1095(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1095_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1095_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1095_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1095_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1095_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1095_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1095_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1095_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1095_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1095_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1096
#define AGONY_PP_PRIVATE_EVAL_REC_1095_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1096(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1096_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1096_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1096_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1096_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1096_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1096_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1096_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1096_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1096_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1096_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1097
#define AGONY_PP_PRIVATE_EVAL_REC_1096_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1097(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1097_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1097_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1097_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1097_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1097_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1097_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1097_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1097_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1097_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1097_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1098
#define AGONY_PP_PRIVATE_EVAL_REC_1097_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1098(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1098_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1098_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1098_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1098_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1098_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1098_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1098_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1098_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1098_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1098_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1099
#define AGONY_PP_PRIVATE_EVAL_REC_1098_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1099(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1099_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1099_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1099_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1099_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1099_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1099_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1099_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1099_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1099_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1099_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1100
#define AGONY_PP_PRIVATE_EVAL_REC_1099_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1100(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1100_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1100_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1100_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1100_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1100_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1100_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1100_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1100_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1100_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1100_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1101
#define AGONY_PP_PRIVATE_EVAL_REC_1100_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1101(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1101_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1101_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1101_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1101_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1101_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1101_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1101_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1101_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1101_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1101_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1102
#define AGONY_PP_PRIVATE_EVAL_REC_1101_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1102(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1102_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1102_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1102_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1102_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1102_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1102_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1102_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1102_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1102_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1102_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1103
#define AGONY_PP_PRIVATE_EVAL_REC_1102_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1103(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1103_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1103_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1103_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1103_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1103_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1103_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1103_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1103_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1103_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1103_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1104
#define AGONY_PP_PRIVATE_EVAL_REC_1103_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1104(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1104_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1104_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1104_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1104_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1104_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1104_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1104_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1104_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1104_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1104_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1105
#define AGONY_PP_PRIVATE_EVAL_REC_1104_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1105(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1105_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1105_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1105_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1105_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1105_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1105_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1105_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1105_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1105_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1105_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1106
#define AGONY_PP_PRIVATE_EVAL_REC_1105_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1106(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1106_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1106_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1106_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1106_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1106_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1106_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1106_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1106_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1106_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1106_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1107
#define AGONY_PP_PRIVATE_EVAL_REC_1106_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1107(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1107_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1107_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1107_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1107_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1107_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1107_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1107_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1107_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1107_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1107_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1108
#define AGONY_PP_PRIVATE_EVAL_REC_1107_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1108(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1108_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1108_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1108_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1108_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1108_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1108_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1108_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1108_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1108_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1108_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1109
#define AGONY_PP_PRIVATE_EVAL_REC_1108_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1109(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1109_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1109_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1109_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1109_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1109_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1109_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1109_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1109_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1109_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1109_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1110
#define AGONY_PP_PRIVATE_EVAL_REC_1109_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1110(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1110_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1110_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1110_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1110_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1110_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1110_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1110_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1110_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1110_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1110_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1111
#define AGONY_PP_PRIVATE_EVAL_REC_1110_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1111(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1111_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1111_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1111_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1111_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1111_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1111_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1111_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1111_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1111_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1111_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1112
#define AGONY_PP_PRIVATE_EVAL_REC_1111_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1112(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1112_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1112_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1112_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1112_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1112_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1112_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1112_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1112_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1112_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1112_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1113
#define AGONY_PP_PRIVATE_EVAL_REC_1112_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1113(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1113_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1113_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1113_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1113_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1113_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1113_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1113_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1113_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1113_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1113_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1114
#define AGONY_PP_PRIVATE_EVAL_REC_1113_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1114(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1114_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1114_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1114_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1114_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1114_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1114_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1114_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1114_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1114_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1114_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1115
#define AGONY_PP_PRIVATE_EVAL_REC_1114_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1115(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1115_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1115_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1115_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1115_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1115_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1115_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1115_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1115_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1115_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1115_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1116
#define AGONY_PP_PRIVATE_EVAL_REC_1115_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1116(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1116_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1116_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1116_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1116_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1116_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1116_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1116_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1116_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1116_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1116_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1117
#define AGONY_PP_PRIVATE_EVAL_REC_1116_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1117(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1117_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1117_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1117_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1117_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1117_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1117_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1117_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1117_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1117_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1117_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1118
#define AGONY_PP_PRIVATE_EVAL_REC_1117_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1118(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1118_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1118_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1118_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1118_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1118_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1118_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1118_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1118_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1118_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1118_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1119
#define AGONY_PP_PRIVATE_EVAL_REC_1118_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1119(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1119_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1119_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1119_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1119_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1119_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1119_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1119_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1119_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1119_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1119_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1120
#define AGONY_PP_PRIVATE_EVAL_REC_1119_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1120(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1120_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1120_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1120_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1120_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1120_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1120_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1120_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1120_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1120_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1120_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1121
#define AGONY_PP_PRIVATE_EVAL_REC_1120_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1121(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1121_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1121_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1121_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1121_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1121_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1121_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1121_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1121_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1121_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1121_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1122
#define AGONY_PP_PRIVATE_EVAL_REC_1121_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1122(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1122_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1122_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1122_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1122_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1122_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1122_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1122_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1122_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1122_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1122_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1123
#define AGONY_PP_PRIVATE_EVAL_REC_1122_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1123(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1123_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1123_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1123_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1123_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1123_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1123_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1123_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1123_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1123_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1123_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1124
#define AGONY_PP_PRIVATE_EVAL_REC_1123_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1124(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1124_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1124_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1124_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1124_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1124_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1124_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1124_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1124_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1124_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1124_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1125
#define AGONY_PP_PRIVATE_EVAL_REC_1124_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1125(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1125_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1125_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1125_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1125_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1125_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1125_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1125_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1125_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1125_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1125_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1126
#define AGONY_PP_PRIVATE_EVAL_REC_1125_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1126(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1126_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1126_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1126_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1126_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1126_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1126_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1126_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1126_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1126_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1126_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1127
#define AGONY_PP_PRIVATE_EVAL_REC_1126_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1127(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1127_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1127_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1127_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1127_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1127_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1127_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1127_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1127_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1127_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1127_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1128
#define AGONY_PP_PRIVATE_EVAL_REC_1127_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1128(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1128_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1128_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1128_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1128_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1128_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1128_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1128_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1128_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1128_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1128_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1129
#define AGONY_PP_PRIVATE_EVAL_REC_1128_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1129(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1129_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1129_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1129_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1129_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1129_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1129_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1129_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1129_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1129_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1129_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1130
#define AGONY_PP_PRIVATE_EVAL_REC_1129_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1130(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1130_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1130_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1130_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1130_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1130_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1130_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1130_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1130_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1130_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1130_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1131
#define AGONY_PP_PRIVATE_EVAL_REC_1130_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1131(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1131_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1131_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1131_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1131_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1131_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1131_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1131_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1131_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1131_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1131_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1132
#define AGONY_PP_PRIVATE_EVAL_REC_1131_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1132(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1132_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1132_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1132_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1132_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1132_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1132_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1132_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1132_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1132_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1132_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1133
#define AGONY_PP_PRIVATE_EVAL_REC_1132_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1133(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1133_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1133_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1133_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1133_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1133_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1133_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1133_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1133_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1133_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1133_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1134
#define AGONY_PP_PRIVATE_EVAL_REC_1133_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1134(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1134_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1134_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1134_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1134_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1134_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1134_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1134_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1134_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1134_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1134_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1135
#define AGONY_PP_PRIVATE_EVAL_REC_1134_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1135(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1135_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1135_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1135_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1135_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1135_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1135_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1135_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1135_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1135_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1135_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1136
#define AGONY_PP_PRIVATE_EVAL_REC_1135_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1136(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1136_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1136_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1136_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1136_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1136_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1136_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1136_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1136_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1136_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1136_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1137
#define AGONY_PP_PRIVATE_EVAL_REC_1136_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1137(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1137_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1137_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1137_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1137_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1137_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1137_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1137_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1137_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1137_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1137_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1138
#define AGONY_PP_PRIVATE_EVAL_REC_1137_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1138(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1138_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1138_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1138_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1138_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1138_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1138_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1138_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1138_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1138_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1138_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1139
#define AGONY_PP_PRIVATE_EVAL_REC_1138_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1139(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1139_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1139_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1139_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1139_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1139_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1139_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1139_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1139_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1139_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1139_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1140
#define AGONY_PP_PRIVATE_EVAL_REC_1139_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1140(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1140_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1140_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1140_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1140_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1140_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1140_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1140_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1140_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1140_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1140_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1141
#define AGONY_PP_PRIVATE_EVAL_REC_1140_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1141(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1141_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1141_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1141_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1141_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1141_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1141_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1141_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1141_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1141_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1141_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1142
#define AGONY_PP_PRIVATE_EVAL_REC_1141_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1142(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1142_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1142_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1142_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1142_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1142_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1142_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1142_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1142_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1142_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1142_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1143
#define AGONY_PP_PRIVATE_EVAL_REC_1142_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1143(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1143_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1143_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1143_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1143_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1143_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1143_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1143_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1143_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1143_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1143_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1144
#define AGONY_PP_PRIVATE_EVAL_REC_1143_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1144(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1144_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1144_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1144_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1144_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1144_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1144_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1144_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1144_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1144_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1144_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1145
#define AGONY_PP_PRIVATE_EVAL_REC_1144_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1145(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1145_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1145_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1145_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1145_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1145_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1145_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1145_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1145_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1145_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1145_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1146
#define AGONY_PP_PRIVATE_EVAL_REC_1145_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1146(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1146_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1146_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1146_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1146_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1146_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1146_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1146_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1146_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1146_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1146_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1147
#define AGONY_PP_PRIVATE_EVAL_REC_1146_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1147(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1147_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1147_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1147_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1147_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1147_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1147_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1147_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1147_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1147_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1147_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1148
#define AGONY_PP_PRIVATE_EVAL_REC_1147_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1148(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1148_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1148_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1148_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1148_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1148_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1148_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1148_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1148_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1148_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1148_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1149
#define AGONY_PP_PRIVATE_EVAL_REC_1148_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1149(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1149_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1149_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1149_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1149_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1149_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1149_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1149_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1149_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1149_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1149_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1150
#define AGONY_PP_PRIVATE_EVAL_REC_1149_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1150(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1150_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1150_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1150_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1150_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1150_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1150_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1150_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1150_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1150_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1150_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1151
#define AGONY_PP_PRIVATE_EVAL_REC_1150_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1151(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1151_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1151_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1151_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1151_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1151_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1151_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1151_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1151_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1151_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1151_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1152
#define AGONY_PP_PRIVATE_EVAL_REC_1151_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1152(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1152_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1152_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1152_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1152_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1152_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1152_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1152_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1152_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1152_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1152_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1153
#define AGONY_PP_PRIVATE_EVAL_REC_1152_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1153(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1153_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1153_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1153_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1153_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1153_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1153_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1153_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1153_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1153_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1153_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1154
#define AGONY_PP_PRIVATE_EVAL_REC_1153_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1154(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1154_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1154_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1154_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1154_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1154_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1154_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1154_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1154_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1154_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1154_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1155
#define AGONY_PP_PRIVATE_EVAL_REC_1154_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1155(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1155_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1155_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1155_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1155_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1155_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1155_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1155_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1155_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1155_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1155_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1156
#define AGONY_PP_PRIVATE_EVAL_REC_1155_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1156(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1156_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1156_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1156_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1156_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1156_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1156_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1156_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1156_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1156_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1156_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1157
#define AGONY_PP_PRIVATE_EVAL_REC_1156_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1157(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1157_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1157_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1157_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1157_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1157_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1157_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1157_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1157_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1157_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1157_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1158
#define AGONY_PP_PRIVATE_EVAL_REC_1157_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1158(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1158_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1158_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1158_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1158_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1158_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1158_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1158_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1158_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1158_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1158_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1159
#define AGONY_PP_PRIVATE_EVAL_REC_1158_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1159(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1159_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1159_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1159_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1159_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1159_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1159_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1159_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1159_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1159_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1159_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1160
#define AGONY_PP_PRIVATE_EVAL_REC_1159_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1160(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1160_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1160_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1160_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1160_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1160_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1160_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1160_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1160_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1160_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1160_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1161
#define AGONY_PP_PRIVATE_EVAL_REC_1160_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1161(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1161_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1161_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1161_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1161_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1161_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1161_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1161_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1161_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1161_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1161_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1162
#define AGONY_PP_PRIVATE_EVAL_REC_1161_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1162(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1162_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1162_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1162_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1162_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1162_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1162_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1162_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1162_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1162_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1162_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1163
#define AGONY_PP_PRIVATE_EVAL_REC_1162_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1163(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1163_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1163_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1163_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1163_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1163_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1163_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1163_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1163_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1163_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1163_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1164
#define AGONY_PP_PRIVATE_EVAL_REC_1163_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1164(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1164_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1164_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1164_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1164_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1164_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1164_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1164_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1164_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1164_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1164_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1165
#define AGONY_PP_PRIVATE_EVAL_REC_1164_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1165(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1165_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1165_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1165_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1165_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1165_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1165_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1165_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1165_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1165_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1165_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1166
#define AGONY_PP_PRIVATE_EVAL_REC_1165_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1166(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1166_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1166_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1166_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1166_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1166_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1166_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1166_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1166_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1166_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1166_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1167
#define AGONY_PP_PRIVATE_EVAL_REC_1166_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1167(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1167_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1167_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1167_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1167_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1167_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1167_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1167_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1167_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1167_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1167_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1168
#define AGONY_PP_PRIVATE_EVAL_REC_1167_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1168(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1168_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1168_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1168_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1168_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1168_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1168_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1168_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1168_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1168_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1168_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1169
#define AGONY_PP_PRIVATE_EVAL_REC_1168_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1169(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1169_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1169_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1169_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1169_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1169_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1169_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1169_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1169_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1169_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1169_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1170
#define AGONY_PP_PRIVATE_EVAL_REC_1169_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1170(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1170_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1170_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1170_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1170_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1170_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1170_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1170_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1170_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1170_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1170_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1171
#define AGONY_PP_PRIVATE_EVAL_REC_1170_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1171(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1171_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1171_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1171_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1171_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1171_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1171_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1171_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1171_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1171_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1171_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1172
#define AGONY_PP_PRIVATE_EVAL_REC_1171_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1172(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1172_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1172_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1172_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1172_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1172_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1172_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1172_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1172_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1172_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1172_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1173
#define AGONY_PP_PRIVATE_EVAL_REC_1172_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1173(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1173_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1173_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1173_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1173_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1173_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1173_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1173_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1173_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1173_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1173_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1174
#define AGONY_PP_PRIVATE_EVAL_REC_1173_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1174(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1174_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1174_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1174_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1174_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1174_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1174_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1174_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1174_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1174_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1174_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1175
#define AGONY_PP_PRIVATE_EVAL_REC_1174_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1175(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1175_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1175_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1175_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1175_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1175_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1175_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1175_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1175_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1175_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1175_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1176
#define AGONY_PP_PRIVATE_EVAL_REC_1175_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1176(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1176_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1176_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1176_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1176_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1176_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1176_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1176_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1176_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1176_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1176_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1177
#define AGONY_PP_PRIVATE_EVAL_REC_1176_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1177(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1177_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1177_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1177_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1177_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1177_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1177_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1177_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1177_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1177_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1177_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1178
#define AGONY_PP_PRIVATE_EVAL_REC_1177_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1178(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1178_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1178_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1178_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1178_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1178_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1178_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1178_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1178_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1178_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1178_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1179
#define AGONY_PP_PRIVATE_EVAL_REC_1178_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1179(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1179_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1179_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1179_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1179_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1179_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1179_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1179_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1179_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1179_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1179_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1180
#define AGONY_PP_PRIVATE_EVAL_REC_1179_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1180(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1180_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1180_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1180_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1180_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1180_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1180_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1180_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1180_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1180_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1180_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1181
#define AGONY_PP_PRIVATE_EVAL_REC_1180_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1181(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1181_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1181_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1181_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1181_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1181_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1181_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1181_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1181_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1181_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1181_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1182
#define AGONY_PP_PRIVATE_EVAL_REC_1181_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1182(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1182_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1182_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1182_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1182_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1182_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1182_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1182_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1182_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1182_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1182_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1183
#define AGONY_PP_PRIVATE_EVAL_REC_1182_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1183(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1183_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1183_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1183_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1183_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1183_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1183_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1183_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1183_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1183_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1183_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1184
#define AGONY_PP_PRIVATE_EVAL_REC_1183_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1184(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1184_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1184_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1184_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1184_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1184_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1184_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1184_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1184_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1184_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1184_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1185
#define AGONY_PP_PRIVATE_EVAL_REC_1184_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1185(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1185_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1185_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1185_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1185_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1185_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1185_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1185_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1185_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1185_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1185_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1186
#define AGONY_PP_PRIVATE_EVAL_REC_1185_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1186(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1186_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1186_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1186_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1186_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1186_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1186_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1186_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1186_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1186_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1186_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1187
#define AGONY_PP_PRIVATE_EVAL_REC_1186_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1187(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1187_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1187_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1187_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1187_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1187_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1187_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1187_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1187_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1187_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1187_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1188
#define AGONY_PP_PRIVATE_EVAL_REC_1187_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1188(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1188_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1188_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1188_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1188_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1188_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1188_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1188_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1188_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1188_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1188_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1189
#define AGONY_PP_PRIVATE_EVAL_REC_1188_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1189(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1189_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1189_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1189_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1189_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1189_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1189_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1189_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1189_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1189_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1189_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1190
#define AGONY_PP_PRIVATE_EVAL_REC_1189_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1190(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1190_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1190_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1190_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1190_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1190_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1190_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1190_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1190_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1190_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1190_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1191
#define AGONY_PP_PRIVATE_EVAL_REC_1190_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1191(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1191_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1191_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1191_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1191_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1191_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1191_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1191_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1191_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1191_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1191_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1192
#define AGONY_PP_PRIVATE_EVAL_REC_1191_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1192(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1192_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1192_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1192_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1192_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1192_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1192_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1192_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1192_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1192_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1192_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1193
#define AGONY_PP_PRIVATE_EVAL_REC_1192_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1193(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1193_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1193_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1193_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1193_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1193_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1193_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1193_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1193_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1193_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1193_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1194
#define AGONY_PP_PRIVATE_EVAL_REC_1193_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1194(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1194_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1194_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1194_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1194_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1194_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1194_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1194_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1194_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1194_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1194_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1195
#define AGONY_PP_PRIVATE_EVAL_REC_1194_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1195(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1195_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1195_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1195_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1195_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1195_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1195_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1195_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1195_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1195_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1195_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1196
#define AGONY_PP_PRIVATE_EVAL_REC_1195_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1196(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1196_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1196_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1196_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1196_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1196_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1196_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1196_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1196_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1196_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1196_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1197
#define AGONY_PP_PRIVATE_EVAL_REC_1196_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1197(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1197_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1197_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1197_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1197_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1197_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1197_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1197_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1197_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1197_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1197_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1198
#define AGONY_PP_PRIVATE_EVAL_REC_1197_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1198(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1198_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1198_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1198_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1198_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1198_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1198_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1198_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1198_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1198_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1198_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1199
#define AGONY_PP_PRIVATE_EVAL_REC_1198_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1199(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1199_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1199_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1199_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1199_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1199_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1199_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1199_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1199_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1199_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1199_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1200
#define AGONY_PP_PRIVATE_EVAL_REC_1199_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1200(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1200_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1200_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1200_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1200_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1200_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1200_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1200_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1200_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1200_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1200_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1201
#define AGONY_PP_PRIVATE_EVAL_REC_1200_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1201(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1201_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1201_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1201_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1201_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1201_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1201_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1201_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1201_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1201_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1201_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1202
#define AGONY_PP_PRIVATE_EVAL_REC_1201_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1202(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1202_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1202_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1202_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1202_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1202_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1202_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1202_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1202_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1202_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1202_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1203
#define AGONY_PP_PRIVATE_EVAL_REC_1202_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1203(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1203_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1203_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1203_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1203_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1203_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1203_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1203_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1203_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1203_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1203_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1204
#define AGONY_PP_PRIVATE_EVAL_REC_1203_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1204(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1204_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1204_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1204_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1204_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1204_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1204_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1204_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1204_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1204_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1204_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1205
#define AGONY_PP_PRIVATE_EVAL_REC_1204_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1205(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1205_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1205_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1205_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1205_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1205_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1205_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1205_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1205_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1205_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1205_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1206
#define AGONY_PP_PRIVATE_EVAL_REC_1205_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1206(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1206_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1206_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1206_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1206_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1206_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1206_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1206_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1206_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1206_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1206_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1207
#define AGONY_PP_PRIVATE_EVAL_REC_1206_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1207(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1207_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1207_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1207_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1207_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1207_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1207_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1207_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1207_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1207_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1207_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1208
#define AGONY_PP_PRIVATE_EVAL_REC_1207_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1208(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1208_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1208_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1208_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1208_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1208_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1208_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1208_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1208_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1208_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1208_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1209
#define AGONY_PP_PRIVATE_EVAL_REC_1208_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1209(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1209_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1209_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1209_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1209_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1209_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1209_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1209_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1209_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1209_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1209_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1210
#define AGONY_PP_PRIVATE_EVAL_REC_1209_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1210(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1210_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1210_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1210_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1210_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1210_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1210_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1210_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1210_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1210_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1210_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1211
#define AGONY_PP_PRIVATE_EVAL_REC_1210_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1211(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1211_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1211_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1211_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1211_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1211_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1211_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1211_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1211_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1211_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1211_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1212
#define AGONY_PP_PRIVATE_EVAL_REC_1211_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1212(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1212_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1212_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1212_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1212_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1212_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1212_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1212_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1212_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1212_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1212_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1213
#define AGONY_PP_PRIVATE_EVAL_REC_1212_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1213(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1213_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1213_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1213_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1213_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1213_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1213_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1213_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1213_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1213_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1213_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1214
#define AGONY_PP_PRIVATE_EVAL_REC_1213_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1214(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1214_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1214_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1214_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1214_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1214_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1214_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1214_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1214_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1214_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1214_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1215
#define AGONY_PP_PRIVATE_EVAL_REC_1214_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1215(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1215_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1215_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1215_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1215_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1215_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1215_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1215_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1215_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1215_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1215_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1216
#define AGONY_PP_PRIVATE_EVAL_REC_1215_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1216(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1216_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1216_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1216_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1216_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1216_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1216_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1216_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1216_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1216_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1216_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1217
#define AGONY_PP_PRIVATE_EVAL_REC_1216_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1217(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1217_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1217_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1217_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1217_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1217_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1217_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1217_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1217_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1217_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1217_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1218
#define AGONY_PP_PRIVATE_EVAL_REC_1217_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1218(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1218_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1218_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1218_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1218_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1218_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1218_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1218_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1218_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1218_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1218_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1219
#define AGONY_PP_PRIVATE_EVAL_REC_1218_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1219(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1219_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1219_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1219_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1219_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1219_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1219_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1219_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1219_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1219_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1219_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1220
#define AGONY_PP_PRIVATE_EVAL_REC_1219_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1220(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1220_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1220_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1220_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1220_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1220_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1220_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1220_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1220_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1220_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1220_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1221
#define AGONY_PP_PRIVATE_EVAL_REC_1220_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1221(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1221_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1221_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1221_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1221_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1221_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1221_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1221_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1221_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1221_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1221_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1222
#define AGONY_PP_PRIVATE_EVAL_REC_1221_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1222(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1222_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1222_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1222_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1222_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1222_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1222_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1222_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1222_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1222_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1222_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1223
#define AGONY_PP_PRIVATE_EVAL_REC_1222_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1223(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1223_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1223_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1223_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1223_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1223_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1223_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1223_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1223_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1223_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1223_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1224
#define AGONY_PP_PRIVATE_EVAL_REC_1223_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1224(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1224_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1224_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1224_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1224_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1224_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1224_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1224_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1224_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1224_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1224_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1225
#define AGONY_PP_PRIVATE_EVAL_REC_1224_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1225(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1225_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1225_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1225_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1225_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1225_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1225_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1225_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1225_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1225_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1225_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1226
#define AGONY_PP_PRIVATE_EVAL_REC_1225_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1226(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1226_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1226_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1226_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1226_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1226_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1226_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1226_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1226_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1226_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1226_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1227
#define AGONY_PP_PRIVATE_EVAL_REC_1226_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1227(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1227_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1227_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1227_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1227_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1227_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1227_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1227_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1227_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1227_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1227_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1228
#define AGONY_PP_PRIVATE_EVAL_REC_1227_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1228(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1228_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1228_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1228_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1228_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1228_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1228_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1228_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1228_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1228_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1228_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1229
#define AGONY_PP_PRIVATE_EVAL_REC_1228_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1229(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1229_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1229_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1229_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1229_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1229_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1229_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1229_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1229_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1229_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1229_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1230
#define AGONY_PP_PRIVATE_EVAL_REC_1229_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1230(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1230_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1230_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1230_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1230_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1230_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1230_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1230_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1230_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1230_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1230_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1231
#define AGONY_PP_PRIVATE_EVAL_REC_1230_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1231(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1231_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1231_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1231_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1231_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1231_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1231_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1231_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1231_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1231_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1231_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1232
#define AGONY_PP_PRIVATE_EVAL_REC_1231_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1232(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1232_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1232_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1232_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1232_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1232_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1232_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1232_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1232_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1232_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1232_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1233
#define AGONY_PP_PRIVATE_EVAL_REC_1232_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1233(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1233_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1233_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1233_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1233_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1233_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1233_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1233_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1233_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1233_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1233_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1234
#define AGONY_PP_PRIVATE_EVAL_REC_1233_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1234(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1234_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1234_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1234_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1234_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1234_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1234_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1234_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1234_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1234_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1234_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1235
#define AGONY_PP_PRIVATE_EVAL_REC_1234_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1235(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1235_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1235_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1235_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1235_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1235_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1235_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1235_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1235_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1235_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1235_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1236
#define AGONY_PP_PRIVATE_EVAL_REC_1235_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1236(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1236_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1236_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1236_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1236_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1236_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1236_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1236_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1236_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1236_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1236_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1237
#define AGONY_PP_PRIVATE_EVAL_REC_1236_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1237(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1237_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1237_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1237_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1237_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1237_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1237_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1237_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1237_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1237_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1237_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1238
#define AGONY_PP_PRIVATE_EVAL_REC_1237_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1238(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1238_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1238_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1238_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1238_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1238_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1238_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1238_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1238_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1238_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1238_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1239
#define AGONY_PP_PRIVATE_EVAL_REC_1238_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1239(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1239_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1239_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1239_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1239_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1239_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1239_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1239_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1239_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1239_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1239_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1240
#define AGONY_PP_PRIVATE_EVAL_REC_1239_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1240(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1240_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1240_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1240_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1240_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1240_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1240_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1240_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1240_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1240_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1240_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1241
#define AGONY_PP_PRIVATE_EVAL_REC_1240_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1241(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1241_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1241_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1241_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1241_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1241_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1241_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1241_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1241_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1241_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1241_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1242
#define AGONY_PP_PRIVATE_EVAL_REC_1241_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1242(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1242_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1242_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1242_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1242_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1242_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1242_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1242_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1242_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1242_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1242_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1243
#define AGONY_PP_PRIVATE_EVAL_REC_1242_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1243(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1243_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1243_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1243_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1243_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1243_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1243_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1243_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1243_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1243_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1243_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1244
#define AGONY_PP_PRIVATE_EVAL_REC_1243_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1244(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1244_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1244_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1244_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1244_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1244_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1244_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1244_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1244_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1244_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1244_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1245
#define AGONY_PP_PRIVATE_EVAL_REC_1244_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1245(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1245_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1245_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1245_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1245_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1245_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1245_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1245_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1245_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1245_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1245_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1246
#define AGONY_PP_PRIVATE_EVAL_REC_1245_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1246(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1246_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1246_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1246_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1246_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1246_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1246_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1246_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1246_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1246_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1246_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1247
#define AGONY_PP_PRIVATE_EVAL_REC_1246_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1247(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1247_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1247_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1247_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1247_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1247_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1247_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1247_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1247_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1247_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1247_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1248
#define AGONY_PP_PRIVATE_EVAL_REC_1247_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1248(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1248_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1248_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1248_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1248_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1248_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1248_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1248_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1248_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1248_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1248_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1249
#define AGONY_PP_PRIVATE_EVAL_REC_1248_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1249(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1249_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1249_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1249_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1249_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1249_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1249_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1249_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1249_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1249_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1249_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1250
#define AGONY_PP_PRIVATE_EVAL_REC_1249_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1250(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1250_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1250_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1250_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1250_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1250_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1250_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1250_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1250_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1250_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1250_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1251
#define AGONY_PP_PRIVATE_EVAL_REC_1250_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1251(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1251_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1251_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1251_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1251_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1251_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1251_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1251_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1251_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1251_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1251_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1252
#define AGONY_PP_PRIVATE_EVAL_REC_1251_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1252(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1252_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1252_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1252_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1252_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1252_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1252_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1252_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1252_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1252_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1252_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1253
#define AGONY_PP_PRIVATE_EVAL_REC_1252_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1253(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1253_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1253_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1253_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1253_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1253_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1253_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1253_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1253_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1253_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1253_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1254
#define AGONY_PP_PRIVATE_EVAL_REC_1253_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1254(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1254_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1254_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1254_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1254_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1254_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1254_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1254_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1254_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1254_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1254_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1255
#define AGONY_PP_PRIVATE_EVAL_REC_1254_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1255(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1255_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1255_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1255_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1255_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1255_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1255_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1255_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1255_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1255_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1255_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1256
#define AGONY_PP_PRIVATE_EVAL_REC_1255_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1256(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1256_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1256_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1256_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1256_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1256_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1256_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1256_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1256_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1256_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1256_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1257
#define AGONY_PP_PRIVATE_EVAL_REC_1256_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1257(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1257_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1257_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1257_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1257_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1257_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1257_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1257_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1257_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1257_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1257_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1258
#define AGONY_PP_PRIVATE_EVAL_REC_1257_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1258(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1258_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1258_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1258_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1258_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1258_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1258_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1258_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1258_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1258_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1258_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1259
#define AGONY_PP_PRIVATE_EVAL_REC_1258_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1259(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1259_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1259_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1259_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1259_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1259_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1259_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1259_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1259_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1259_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1259_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1260
#define AGONY_PP_PRIVATE_EVAL_REC_1259_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1260(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1260_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1260_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1260_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1260_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1260_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1260_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1260_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1260_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1260_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1260_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1261
#define AGONY_PP_PRIVATE_EVAL_REC_1260_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1261(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1261_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1261_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1261_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1261_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1261_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1261_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1261_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1261_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1261_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1261_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1262
#define AGONY_PP_PRIVATE_EVAL_REC_1261_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1262(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1262_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1262_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1262_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1262_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1262_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1262_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1262_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1262_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1262_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1262_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1263
#define AGONY_PP_PRIVATE_EVAL_REC_1262_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1263(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1263_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1263_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1263_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1263_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1263_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1263_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1263_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1263_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1263_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1263_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1264
#define AGONY_PP_PRIVATE_EVAL_REC_1263_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1264(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1264_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1264_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1264_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1264_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1264_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1264_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1264_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1264_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1264_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1264_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1265
#define AGONY_PP_PRIVATE_EVAL_REC_1264_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1265(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1265_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1265_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1265_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1265_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1265_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1265_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1265_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1265_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1265_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1265_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1266
#define AGONY_PP_PRIVATE_EVAL_REC_1265_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1266(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1266_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1266_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1266_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1266_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1266_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1266_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1266_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1266_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1266_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1266_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1267
#define AGONY_PP_PRIVATE_EVAL_REC_1266_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1267(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1267_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1267_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1267_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1267_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1267_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1267_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1267_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1267_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1267_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1267_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1268
#define AGONY_PP_PRIVATE_EVAL_REC_1267_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1268(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1268_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1268_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1268_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1268_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1268_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1268_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1268_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1268_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1268_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1268_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1269
#define AGONY_PP_PRIVATE_EVAL_REC_1268_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1269(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1269_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1269_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1269_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1269_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1269_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1269_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1269_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1269_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1269_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1269_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1270
#define AGONY_PP_PRIVATE_EVAL_REC_1269_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1270(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1270_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1270_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1270_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1270_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1270_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1270_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1270_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1270_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1270_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1270_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1271
#define AGONY_PP_PRIVATE_EVAL_REC_1270_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1271(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1271_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1271_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1271_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1271_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1271_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1271_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1271_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1271_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1271_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1271_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1272
#define AGONY_PP_PRIVATE_EVAL_REC_1271_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1272(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1272_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1272_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1272_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1272_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1272_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1272_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1272_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1272_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1272_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1272_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1273
#define AGONY_PP_PRIVATE_EVAL_REC_1272_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1273(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1273_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1273_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1273_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1273_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1273_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1273_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1273_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1273_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1273_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1273_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1274
#define AGONY_PP_PRIVATE_EVAL_REC_1273_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1274(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1274_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1274_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1274_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1274_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1274_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1274_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1274_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1274_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1274_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1274_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1275
#define AGONY_PP_PRIVATE_EVAL_REC_1274_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1275(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1275_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1275_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1275_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1275_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1275_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1275_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1275_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1275_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1275_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1275_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1276
#define AGONY_PP_PRIVATE_EVAL_REC_1275_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1276(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1276_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1276_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1276_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1276_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1276_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1276_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1276_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1276_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1276_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1276_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1277
#define AGONY_PP_PRIVATE_EVAL_REC_1276_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1277(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1277_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1277_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1277_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1277_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1277_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1277_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1277_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1277_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1277_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1277_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1278
#define AGONY_PP_PRIVATE_EVAL_REC_1277_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1278(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1278_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1278_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1278_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1278_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1278_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1278_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1278_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1278_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1278_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1278_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1279
#define AGONY_PP_PRIVATE_EVAL_REC_1278_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1279(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1279_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1279_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1279_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1279_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1279_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1279_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1279_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1279_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1279_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1279_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1280
#define AGONY_PP_PRIVATE_EVAL_REC_1279_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1280(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1280_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1280_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1280_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1280_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1280_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1280_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1280_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1280_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1280_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1280_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1281
#define AGONY_PP_PRIVATE_EVAL_REC_1280_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1281(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1281_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1281_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1281_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1281_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1281_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1281_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1281_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1281_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1281_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1281_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1282
#define AGONY_PP_PRIVATE_EVAL_REC_1281_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1282(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1282_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1282_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1282_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1282_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1282_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1282_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1282_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1282_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1282_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1282_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1283
#define AGONY_PP_PRIVATE_EVAL_REC_1282_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1283(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1283_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1283_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1283_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1283_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1283_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1283_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1283_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1283_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1283_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1283_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1284
#define AGONY_PP_PRIVATE_EVAL_REC_1283_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1284(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1284_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1284_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1284_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1284_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1284_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1284_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1284_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1284_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1284_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1284_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1285
#define AGONY_PP_PRIVATE_EVAL_REC_1284_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1285(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1285_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1285_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1285_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1285_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1285_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1285_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1285_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1285_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1285_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1285_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1286
#define AGONY_PP_PRIVATE_EVAL_REC_1285_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1286(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1286_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1286_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1286_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1286_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1286_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1286_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1286_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1286_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1286_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1286_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1287
#define AGONY_PP_PRIVATE_EVAL_REC_1286_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1287(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1287_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1287_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1287_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1287_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1287_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1287_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1287_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1287_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1287_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1287_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1288
#define AGONY_PP_PRIVATE_EVAL_REC_1287_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1288(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1288_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1288_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1288_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1288_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1288_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1288_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1288_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1288_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1288_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1288_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1289
#define AGONY_PP_PRIVATE_EVAL_REC_1288_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1289(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1289_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1289_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1289_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1289_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1289_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1289_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1289_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1289_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1289_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1289_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1290
#define AGONY_PP_PRIVATE_EVAL_REC_1289_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1290(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1290_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1290_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1290_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1290_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1290_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1290_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1290_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1290_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1290_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1290_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1291
#define AGONY_PP_PRIVATE_EVAL_REC_1290_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1291(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1291_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1291_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1291_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1291_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1291_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1291_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1291_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1291_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1291_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1291_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1292
#define AGONY_PP_PRIVATE_EVAL_REC_1291_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1292(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1292_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1292_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1292_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1292_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1292_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1292_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1292_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1292_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1292_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1292_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1293
#define AGONY_PP_PRIVATE_EVAL_REC_1292_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1293(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1293_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1293_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1293_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1293_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1293_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1293_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1293_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1293_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1293_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1293_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1294
#define AGONY_PP_PRIVATE_EVAL_REC_1293_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1294(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1294_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1294_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1294_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1294_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1294_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1294_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1294_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1294_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1294_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1294_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1295
#define AGONY_PP_PRIVATE_EVAL_REC_1294_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1295(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1295_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1295_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1295_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1295_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1295_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1295_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1295_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1295_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1295_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1295_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1296
#define AGONY_PP_PRIVATE_EVAL_REC_1295_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1296(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1296_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1296_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1296_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1296_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1296_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1296_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1296_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1296_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1296_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1296_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1297
#define AGONY_PP_PRIVATE_EVAL_REC_1296_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1297(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1297_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1297_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1297_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1297_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1297_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1297_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1297_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1297_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1297_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1297_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1298
#define AGONY_PP_PRIVATE_EVAL_REC_1297_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1298(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1298_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1298_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1298_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1298_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1298_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1298_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1298_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1298_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1298_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1298_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1299
#define AGONY_PP_PRIVATE_EVAL_REC_1298_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1299(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1299_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1299_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1299_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1299_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1299_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1299_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1299_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1299_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1299_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1299_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1300
#define AGONY_PP_PRIVATE_EVAL_REC_1299_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1300(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1300_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1300_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1300_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1300_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1300_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1300_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1300_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1300_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1300_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1300_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1301
#define AGONY_PP_PRIVATE_EVAL_REC_1300_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1301(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1301_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1301_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1301_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1301_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1301_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1301_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1301_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1301_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1301_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1301_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1302
#define AGONY_PP_PRIVATE_EVAL_REC_1301_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1302(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1302_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1302_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1302_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1302_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1302_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1302_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1302_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1302_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1302_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1302_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1303
#define AGONY_PP_PRIVATE_EVAL_REC_1302_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1303(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1303_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1303_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1303_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1303_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1303_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1303_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1303_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1303_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1303_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1303_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1304
#define AGONY_PP_PRIVATE_EVAL_REC_1303_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1304(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1304_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1304_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1304_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1304_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1304_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1304_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1304_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1304_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1304_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1304_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1305
#define AGONY_PP_PRIVATE_EVAL_REC_1304_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1305(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1305_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1305_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1305_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1305_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1305_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1305_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1305_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1305_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1305_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1305_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1306
#define AGONY_PP_PRIVATE_EVAL_REC_1305_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1306(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1306_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1306_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1306_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1306_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1306_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1306_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1306_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1306_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1306_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1306_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1307
#define AGONY_PP_PRIVATE_EVAL_REC_1306_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1307(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1307_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1307_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1307_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1307_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1307_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1307_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1307_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1307_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1307_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1307_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1308
#define AGONY_PP_PRIVATE_EVAL_REC_1307_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1308(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1308_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1308_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1308_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1308_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1308_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1308_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1308_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1308_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1308_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1308_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1309
#define AGONY_PP_PRIVATE_EVAL_REC_1308_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1309(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1309_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1309_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1309_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1309_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1309_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1309_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1309_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1309_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1309_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1309_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1310
#define AGONY_PP_PRIVATE_EVAL_REC_1309_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1310(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1310_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1310_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1310_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1310_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1310_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1310_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1310_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1310_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1310_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1310_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1311
#define AGONY_PP_PRIVATE_EVAL_REC_1310_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1311(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1311_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1311_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1311_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1311_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1311_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1311_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1311_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1311_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1311_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1311_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1312
#define AGONY_PP_PRIVATE_EVAL_REC_1311_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1312(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1312_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1312_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1312_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1312_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1312_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1312_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1312_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1312_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1312_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1312_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1313
#define AGONY_PP_PRIVATE_EVAL_REC_1312_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1313(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1313_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1313_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1313_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1313_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1313_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1313_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1313_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1313_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1313_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1313_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1314
#define AGONY_PP_PRIVATE_EVAL_REC_1313_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1314(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1314_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1314_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1314_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1314_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1314_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1314_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1314_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1314_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1314_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1314_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1315
#define AGONY_PP_PRIVATE_EVAL_REC_1314_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1315(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1315_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1315_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1315_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1315_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1315_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1315_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1315_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1315_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1315_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1315_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1316
#define AGONY_PP_PRIVATE_EVAL_REC_1315_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1316(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1316_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1316_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1316_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1316_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1316_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1316_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1316_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1316_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1316_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1316_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1317
#define AGONY_PP_PRIVATE_EVAL_REC_1316_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1317(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1317_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1317_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1317_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1317_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1317_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1317_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1317_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1317_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1317_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1317_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1318
#define AGONY_PP_PRIVATE_EVAL_REC_1317_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1318(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1318_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1318_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1318_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1318_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1318_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1318_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1318_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1318_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1318_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1318_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1319
#define AGONY_PP_PRIVATE_EVAL_REC_1318_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1319(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1319_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1319_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1319_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1319_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1319_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1319_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1319_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1319_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1319_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1319_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1320
#define AGONY_PP_PRIVATE_EVAL_REC_1319_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1320(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1320_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1320_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1320_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1320_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1320_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1320_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1320_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1320_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1320_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1320_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1321
#define AGONY_PP_PRIVATE_EVAL_REC_1320_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1321(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1321_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1321_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1321_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1321_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1321_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1321_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1321_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1321_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1321_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1321_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1322
#define AGONY_PP_PRIVATE_EVAL_REC_1321_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1322(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1322_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1322_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1322_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1322_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1322_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1322_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1322_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1322_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1322_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1322_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1323
#define AGONY_PP_PRIVATE_EVAL_REC_1322_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1323(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1323_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1323_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1323_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1323_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1323_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1323_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1323_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1323_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1323_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1323_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1324
#define AGONY_PP_PRIVATE_EVAL_REC_1323_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1324(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1324_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1324_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1324_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1324_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1324_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1324_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1324_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1324_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1324_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1324_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1325
#define AGONY_PP_PRIVATE_EVAL_REC_1324_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1325(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1325_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1325_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1325_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1325_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1325_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1325_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1325_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1325_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1325_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1325_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1326
#define AGONY_PP_PRIVATE_EVAL_REC_1325_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1326(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1326_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1326_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1326_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1326_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1326_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1326_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1326_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1326_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1326_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1326_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1327
#define AGONY_PP_PRIVATE_EVAL_REC_1326_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1327(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1327_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1327_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1327_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1327_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1327_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1327_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1327_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1327_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1327_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1327_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1328
#define AGONY_PP_PRIVATE_EVAL_REC_1327_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1328(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1328_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1328_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1328_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1328_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1328_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1328_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1328_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1328_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1328_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1328_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1329
#define AGONY_PP_PRIVATE_EVAL_REC_1328_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1329(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1329_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1329_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1329_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1329_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1329_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1329_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1329_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1329_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1329_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1329_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1330
#define AGONY_PP_PRIVATE_EVAL_REC_1329_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1330(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1330_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1330_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1330_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1330_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1330_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1330_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1330_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1330_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1330_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1330_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1331
#define AGONY_PP_PRIVATE_EVAL_REC_1330_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1331(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1331_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1331_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1331_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1331_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1331_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1331_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1331_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1331_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1331_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1331_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1332
#define AGONY_PP_PRIVATE_EVAL_REC_1331_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1332(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1332_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1332_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1332_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1332_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1332_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1332_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1332_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1332_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1332_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1332_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1333
#define AGONY_PP_PRIVATE_EVAL_REC_1332_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1333(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1333_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1333_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1333_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1333_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1333_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1333_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1333_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1333_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1333_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1333_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1334
#define AGONY_PP_PRIVATE_EVAL_REC_1333_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1334(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1334_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1334_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1334_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1334_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1334_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1334_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1334_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1334_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1334_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1334_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1335
#define AGONY_PP_PRIVATE_EVAL_REC_1334_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1335(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1335_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1335_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1335_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1335_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1335_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1335_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1335_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1335_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1335_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1335_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1336
#define AGONY_PP_PRIVATE_EVAL_REC_1335_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1336(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1336_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1336_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1336_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1336_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1336_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1336_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1336_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1336_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1336_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1336_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1337
#define AGONY_PP_PRIVATE_EVAL_REC_1336_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1337(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1337_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1337_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1337_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1337_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1337_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1337_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1337_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1337_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1337_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1337_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1338
#define AGONY_PP_PRIVATE_EVAL_REC_1337_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1338(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1338_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1338_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1338_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1338_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1338_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1338_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1338_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1338_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1338_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1338_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1339
#define AGONY_PP_PRIVATE_EVAL_REC_1338_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1339(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1339_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1339_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1339_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1339_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1339_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1339_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1339_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1339_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1339_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1339_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1340
#define AGONY_PP_PRIVATE_EVAL_REC_1339_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1340(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1340_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1340_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1340_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1340_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1340_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1340_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1340_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1340_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1340_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1340_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1341
#define AGONY_PP_PRIVATE_EVAL_REC_1340_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1341(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1341_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1341_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1341_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1341_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1341_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1341_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1341_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1341_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1341_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1341_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1342
#define AGONY_PP_PRIVATE_EVAL_REC_1341_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1342(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1342_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1342_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1342_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1342_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1342_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1342_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1342_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1342_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1342_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1342_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1343
#define AGONY_PP_PRIVATE_EVAL_REC_1342_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1343(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1343_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1343_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1343_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1343_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1343_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1343_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1343_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1343_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1343_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1343_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1344
#define AGONY_PP_PRIVATE_EVAL_REC_1343_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1344(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1344_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1344_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1344_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1344_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1344_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1344_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1344_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1344_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1344_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1344_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1345
#define AGONY_PP_PRIVATE_EVAL_REC_1344_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1345(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1345_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1345_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1345_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1345_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1345_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1345_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1345_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1345_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1345_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1345_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1346
#define AGONY_PP_PRIVATE_EVAL_REC_1345_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1346(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1346_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1346_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1346_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1346_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1346_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1346_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1346_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1346_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1346_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1346_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1347
#define AGONY_PP_PRIVATE_EVAL_REC_1346_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1347(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1347_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1347_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1347_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1347_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1347_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1347_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1347_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1347_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1347_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1347_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1348
#define AGONY_PP_PRIVATE_EVAL_REC_1347_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1348(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1348_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1348_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1348_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1348_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1348_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1348_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1348_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1348_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1348_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1348_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1349
#define AGONY_PP_PRIVATE_EVAL_REC_1348_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1349(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1349_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1349_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1349_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1349_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1349_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1349_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1349_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1349_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1349_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1349_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1350
#define AGONY_PP_PRIVATE_EVAL_REC_1349_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1350(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1350_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1350_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1350_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1350_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1350_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1350_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1350_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1350_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1350_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1350_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1351
#define AGONY_PP_PRIVATE_EVAL_REC_1350_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1351(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1351_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1351_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1351_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1351_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1351_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1351_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1351_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1351_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1351_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1351_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1352
#define AGONY_PP_PRIVATE_EVAL_REC_1351_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1352(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1352_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1352_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1352_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1352_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1352_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1352_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1352_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1352_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1352_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1352_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1353
#define AGONY_PP_PRIVATE_EVAL_REC_1352_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1353(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1353_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1353_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1353_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1353_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1353_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1353_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1353_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1353_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1353_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1353_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1354
#define AGONY_PP_PRIVATE_EVAL_REC_1353_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1354(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1354_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1354_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1354_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1354_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1354_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1354_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1354_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1354_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1354_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1354_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1355
#define AGONY_PP_PRIVATE_EVAL_REC_1354_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1355(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1355_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1355_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1355_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1355_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1355_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1355_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1355_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1355_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1355_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1355_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1356
#define AGONY_PP_PRIVATE_EVAL_REC_1355_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1356(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1356_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1356_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1356_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1356_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1356_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1356_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1356_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1356_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1356_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1356_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1357
#define AGONY_PP_PRIVATE_EVAL_REC_1356_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1357(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1357_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1357_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1357_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1357_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1357_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1357_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1357_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1357_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1357_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1357_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1358
#define AGONY_PP_PRIVATE_EVAL_REC_1357_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1358(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1358_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1358_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1358_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1358_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1358_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1358_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1358_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1358_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1358_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1358_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1359
#define AGONY_PP_PRIVATE_EVAL_REC_1358_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1359(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1359_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1359_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1359_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1359_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1359_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1359_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1359_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1359_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1359_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1359_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1360
#define AGONY_PP_PRIVATE_EVAL_REC_1359_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1360(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1360_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1360_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1360_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1360_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1360_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1360_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1360_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1360_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1360_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1360_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1361
#define AGONY_PP_PRIVATE_EVAL_REC_1360_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1361(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1361_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1361_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1361_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1361_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1361_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1361_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1361_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1361_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1361_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1361_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1362
#define AGONY_PP_PRIVATE_EVAL_REC_1361_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1362(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1362_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1362_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1362_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1362_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1362_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1362_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1362_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1362_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1362_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1362_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1363
#define AGONY_PP_PRIVATE_EVAL_REC_1362_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1363(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1363_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1363_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1363_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1363_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1363_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1363_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1363_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1363_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1363_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1363_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1364
#define AGONY_PP_PRIVATE_EVAL_REC_1363_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1364(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1364_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1364_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1364_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1364_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1364_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1364_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1364_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1364_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1364_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1364_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1365
#define AGONY_PP_PRIVATE_EVAL_REC_1364_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1365(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1365_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1365_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1365_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1365_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1365_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1365_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1365_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1365_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1365_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1365_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1366
#define AGONY_PP_PRIVATE_EVAL_REC_1365_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1366(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1366_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1366_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1366_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1366_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1366_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1366_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1366_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1366_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1366_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1366_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1367
#define AGONY_PP_PRIVATE_EVAL_REC_1366_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1367(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1367_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1367_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1367_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1367_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1367_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1367_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1367_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1367_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1367_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1367_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1368
#define AGONY_PP_PRIVATE_EVAL_REC_1367_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1368(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1368_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1368_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1368_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1368_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1368_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1368_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1368_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1368_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1368_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1368_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1369
#define AGONY_PP_PRIVATE_EVAL_REC_1368_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1369(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1369_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1369_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1369_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1369_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1369_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1369_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1369_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1369_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1369_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1369_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1370
#define AGONY_PP_PRIVATE_EVAL_REC_1369_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1370(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1370_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1370_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1370_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1370_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1370_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1370_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1370_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1370_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1370_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1370_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1371
#define AGONY_PP_PRIVATE_EVAL_REC_1370_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1371(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1371_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1371_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1371_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1371_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1371_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1371_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1371_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1371_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1371_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1371_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1372
#define AGONY_PP_PRIVATE_EVAL_REC_1371_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1372(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1372_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1372_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1372_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1372_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1372_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1372_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1372_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1372_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1372_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1372_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1373
#define AGONY_PP_PRIVATE_EVAL_REC_1372_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1373(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1373_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1373_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1373_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1373_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1373_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1373_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1373_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1373_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1373_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1373_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1374
#define AGONY_PP_PRIVATE_EVAL_REC_1373_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1374(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1374_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1374_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1374_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1374_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1374_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1374_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1374_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1374_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1374_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1374_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1375
#define AGONY_PP_PRIVATE_EVAL_REC_1374_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1375(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1375_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1375_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1375_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1375_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1375_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1375_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1375_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1375_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1375_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1375_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1376
#define AGONY_PP_PRIVATE_EVAL_REC_1375_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1376(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1376_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1376_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1376_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1376_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1376_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1376_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1376_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1376_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1376_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1376_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1377
#define AGONY_PP_PRIVATE_EVAL_REC_1376_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1377(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1377_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1377_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1377_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1377_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1377_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1377_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1377_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1377_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1377_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1377_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1378
#define AGONY_PP_PRIVATE_EVAL_REC_1377_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1378(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1378_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1378_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1378_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1378_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1378_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1378_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1378_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1378_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1378_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1378_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1379
#define AGONY_PP_PRIVATE_EVAL_REC_1378_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1379(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1379_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1379_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1379_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1379_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1379_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1379_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1379_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1379_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1379_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1379_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1380
#define AGONY_PP_PRIVATE_EVAL_REC_1379_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1380(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1380_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1380_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1380_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1380_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1380_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1380_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1380_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1380_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1380_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1380_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1381
#define AGONY_PP_PRIVATE_EVAL_REC_1380_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1381(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1381_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1381_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1381_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1381_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1381_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1381_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1381_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1381_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1381_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1381_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1382
#define AGONY_PP_PRIVATE_EVAL_REC_1381_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1382(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1382_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1382_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1382_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1382_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1382_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1382_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1382_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1382_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1382_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1382_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1383
#define AGONY_PP_PRIVATE_EVAL_REC_1382_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1383(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1383_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1383_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1383_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1383_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1383_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1383_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1383_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1383_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1383_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1383_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1384
#define AGONY_PP_PRIVATE_EVAL_REC_1383_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1384(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1384_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1384_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1384_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1384_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1384_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1384_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1384_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1384_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1384_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1384_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1385
#define AGONY_PP_PRIVATE_EVAL_REC_1384_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1385(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1385_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1385_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1385_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1385_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1385_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1385_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1385_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1385_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1385_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1385_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1386
#define AGONY_PP_PRIVATE_EVAL_REC_1385_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1386(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1386_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1386_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1386_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1386_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1386_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1386_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1386_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1386_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1386_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1386_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1387
#define AGONY_PP_PRIVATE_EVAL_REC_1386_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1387(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1387_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1387_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1387_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1387_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1387_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1387_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1387_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1387_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1387_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1387_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1388
#define AGONY_PP_PRIVATE_EVAL_REC_1387_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1388(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1388_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1388_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1388_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1388_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1388_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1388_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1388_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1388_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1388_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1388_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1389
#define AGONY_PP_PRIVATE_EVAL_REC_1388_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1389(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1389_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1389_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1389_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1389_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1389_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1389_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1389_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1389_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1389_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1389_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1390
#define AGONY_PP_PRIVATE_EVAL_REC_1389_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1390(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1390_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1390_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1390_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1390_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1390_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1390_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1390_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1390_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1390_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1390_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1391
#define AGONY_PP_PRIVATE_EVAL_REC_1390_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1391(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1391_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1391_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1391_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1391_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1391_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1391_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1391_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1391_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1391_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1391_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1392
#define AGONY_PP_PRIVATE_EVAL_REC_1391_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1392(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1392_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1392_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1392_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1392_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1392_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1392_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1392_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1392_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1392_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1392_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1393
#define AGONY_PP_PRIVATE_EVAL_REC_1392_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1393(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1393_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1393_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1393_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1393_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1393_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1393_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1393_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1393_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1393_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1393_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1394
#define AGONY_PP_PRIVATE_EVAL_REC_1393_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1394(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1394_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1394_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1394_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1394_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1394_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1394_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1394_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1394_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1394_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1394_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1395
#define AGONY_PP_PRIVATE_EVAL_REC_1394_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1395(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1395_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1395_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1395_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1395_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1395_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1395_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1395_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1395_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1395_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1395_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1396
#define AGONY_PP_PRIVATE_EVAL_REC_1395_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1396(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1396_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1396_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1396_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1396_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1396_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1396_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1396_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1396_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1396_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1396_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1397
#define AGONY_PP_PRIVATE_EVAL_REC_1396_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1397(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1397_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1397_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1397_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1397_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1397_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1397_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1397_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1397_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1397_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1397_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1398
#define AGONY_PP_PRIVATE_EVAL_REC_1397_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1398(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1398_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1398_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1398_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1398_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1398_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1398_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1398_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1398_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1398_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1398_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1399
#define AGONY_PP_PRIVATE_EVAL_REC_1398_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1399(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1399_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1399_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1399_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1399_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1399_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1399_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1399_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1399_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1399_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1399_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1400
#define AGONY_PP_PRIVATE_EVAL_REC_1399_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1400(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1400_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1400_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1400_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1400_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1400_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1400_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1400_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1400_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1400_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1400_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1401
#define AGONY_PP_PRIVATE_EVAL_REC_1400_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1401(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1401_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1401_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1401_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1401_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1401_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1401_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1401_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1401_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1401_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1401_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1402
#define AGONY_PP_PRIVATE_EVAL_REC_1401_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1402(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1402_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1402_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1402_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1402_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1402_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1402_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1402_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1402_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1402_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1402_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1403
#define AGONY_PP_PRIVATE_EVAL_REC_1402_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1403(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1403_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1403_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1403_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1403_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1403_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1403_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1403_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1403_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1403_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1403_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1404
#define AGONY_PP_PRIVATE_EVAL_REC_1403_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1404(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1404_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1404_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1404_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1404_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1404_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1404_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1404_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1404_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1404_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1404_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1405
#define AGONY_PP_PRIVATE_EVAL_REC_1404_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1405(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1405_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1405_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1405_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1405_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1405_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1405_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1405_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1405_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1405_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1405_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1406
#define AGONY_PP_PRIVATE_EVAL_REC_1405_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1406(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1406_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1406_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1406_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1406_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1406_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1406_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1406_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1406_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1406_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1406_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1407
#define AGONY_PP_PRIVATE_EVAL_REC_1406_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1407(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1407_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1407_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1407_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1407_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1407_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1407_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1407_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1407_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1407_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1407_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1408
#define AGONY_PP_PRIVATE_EVAL_REC_1407_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1408(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1408_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1408_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1408_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1408_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1408_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1408_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1408_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1408_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1408_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1408_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1409
#define AGONY_PP_PRIVATE_EVAL_REC_1408_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1409(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1409_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1409_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1409_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1409_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1409_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1409_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1409_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1409_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1409_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1409_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1410
#define AGONY_PP_PRIVATE_EVAL_REC_1409_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1410(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1410_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1410_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1410_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1410_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1410_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1410_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1410_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1410_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1410_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1410_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1411
#define AGONY_PP_PRIVATE_EVAL_REC_1410_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1411(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1411_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1411_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1411_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1411_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1411_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1411_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1411_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1411_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1411_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1411_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1412
#define AGONY_PP_PRIVATE_EVAL_REC_1411_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1412(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1412_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1412_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1412_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1412_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1412_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1412_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1412_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1412_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1412_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1412_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1413
#define AGONY_PP_PRIVATE_EVAL_REC_1412_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1413(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1413_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1413_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1413_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1413_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1413_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1413_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1413_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1413_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1413_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1413_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1414
#define AGONY_PP_PRIVATE_EVAL_REC_1413_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1414(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1414_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1414_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1414_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1414_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1414_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1414_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1414_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1414_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1414_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1414_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1415
#define AGONY_PP_PRIVATE_EVAL_REC_1414_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1415(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1415_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1415_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1415_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1415_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1415_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1415_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1415_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1415_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1415_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1415_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1416
#define AGONY_PP_PRIVATE_EVAL_REC_1415_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1416(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1416_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1416_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1416_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1416_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1416_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1416_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1416_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1416_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1416_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1416_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1417
#define AGONY_PP_PRIVATE_EVAL_REC_1416_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1417(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1417_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1417_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1417_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1417_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1417_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1417_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1417_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1417_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1417_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1417_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1418
#define AGONY_PP_PRIVATE_EVAL_REC_1417_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1418(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1418_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1418_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1418_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1418_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1418_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1418_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1418_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1418_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1418_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1418_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1419
#define AGONY_PP_PRIVATE_EVAL_REC_1418_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1419(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1419_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1419_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1419_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1419_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1419_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1419_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1419_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1419_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1419_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1419_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1420
#define AGONY_PP_PRIVATE_EVAL_REC_1419_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1420(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1420_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1420_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1420_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1420_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1420_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1420_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1420_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1420_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1420_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1420_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1421
#define AGONY_PP_PRIVATE_EVAL_REC_1420_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1421(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1421_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1421_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1421_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1421_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1421_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1421_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1421_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1421_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1421_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1421_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1422
#define AGONY_PP_PRIVATE_EVAL_REC_1421_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1422(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1422_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1422_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1422_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1422_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1422_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1422_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1422_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1422_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1422_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1422_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1423
#define AGONY_PP_PRIVATE_EVAL_REC_1422_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1423(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1423_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1423_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1423_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1423_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1423_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1423_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1423_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1423_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1423_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1423_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1424
#define AGONY_PP_PRIVATE_EVAL_REC_1423_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1424(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1424_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1424_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1424_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1424_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1424_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1424_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1424_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1424_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1424_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1424_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1425
#define AGONY_PP_PRIVATE_EVAL_REC_1424_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1425(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1425_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1425_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1425_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1425_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1425_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1425_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1425_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1425_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1425_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1425_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1426
#define AGONY_PP_PRIVATE_EVAL_REC_1425_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1426(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1426_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1426_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1426_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1426_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1426_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1426_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1426_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1426_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1426_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1426_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1427
#define AGONY_PP_PRIVATE_EVAL_REC_1426_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1427(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1427_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1427_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1427_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1427_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1427_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1427_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1427_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1427_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1427_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1427_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1428
#define AGONY_PP_PRIVATE_EVAL_REC_1427_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1428(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1428_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1428_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1428_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1428_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1428_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1428_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1428_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1428_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1428_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1428_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1429
#define AGONY_PP_PRIVATE_EVAL_REC_1428_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1429(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1429_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1429_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1429_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1429_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1429_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1429_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1429_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1429_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1429_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1429_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1430
#define AGONY_PP_PRIVATE_EVAL_REC_1429_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1430(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1430_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1430_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1430_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1430_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1430_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1430_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1430_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1430_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1430_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1430_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1431
#define AGONY_PP_PRIVATE_EVAL_REC_1430_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1431(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1431_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1431_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1431_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1431_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1431_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1431_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1431_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1431_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1431_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1431_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1432
#define AGONY_PP_PRIVATE_EVAL_REC_1431_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1432(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1432_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1432_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1432_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1432_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1432_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1432_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1432_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1432_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1432_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1432_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1433
#define AGONY_PP_PRIVATE_EVAL_REC_1432_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1433(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1433_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1433_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1433_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1433_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1433_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1433_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1433_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1433_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1433_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1433_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1434
#define AGONY_PP_PRIVATE_EVAL_REC_1433_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1434(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1434_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1434_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1434_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1434_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1434_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1434_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1434_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1434_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1434_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1434_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1435
#define AGONY_PP_PRIVATE_EVAL_REC_1434_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1435(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1435_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1435_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1435_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1435_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1435_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1435_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1435_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1435_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1435_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1435_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1436
#define AGONY_PP_PRIVATE_EVAL_REC_1435_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1436(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1436_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1436_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1436_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1436_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1436_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1436_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1436_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1436_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1436_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1436_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1437
#define AGONY_PP_PRIVATE_EVAL_REC_1436_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1437(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1437_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1437_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1437_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1437_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1437_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1437_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1437_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1437_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1437_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1437_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1438
#define AGONY_PP_PRIVATE_EVAL_REC_1437_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1438(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1438_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1438_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1438_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1438_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1438_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1438_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1438_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1438_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1438_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1438_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1439
#define AGONY_PP_PRIVATE_EVAL_REC_1438_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1439(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1439_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1439_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1439_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1439_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1439_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1439_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1439_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1439_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1439_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1439_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1440
#define AGONY_PP_PRIVATE_EVAL_REC_1439_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1440(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1440_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1440_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1440_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1440_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1440_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1440_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1440_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1440_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1440_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1440_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1441
#define AGONY_PP_PRIVATE_EVAL_REC_1440_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1441(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1441_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1441_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1441_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1441_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1441_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1441_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1441_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1441_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1441_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1441_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1442
#define AGONY_PP_PRIVATE_EVAL_REC_1441_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1442(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1442_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1442_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1442_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1442_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1442_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1442_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1442_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1442_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1442_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1442_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1443
#define AGONY_PP_PRIVATE_EVAL_REC_1442_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1443(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1443_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1443_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1443_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1443_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1443_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1443_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1443_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1443_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1443_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1443_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1444
#define AGONY_PP_PRIVATE_EVAL_REC_1443_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1444(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1444_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1444_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1444_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1444_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1444_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1444_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1444_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1444_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1444_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1444_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1445
#define AGONY_PP_PRIVATE_EVAL_REC_1444_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1445(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1445_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1445_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1445_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1445_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1445_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1445_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1445_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1445_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1445_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1445_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1446
#define AGONY_PP_PRIVATE_EVAL_REC_1445_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1446(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1446_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1446_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1446_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1446_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1446_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1446_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1446_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1446_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1446_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1446_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1447
#define AGONY_PP_PRIVATE_EVAL_REC_1446_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1447(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1447_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1447_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1447_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1447_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1447_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1447_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1447_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1447_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1447_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1447_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1448
#define AGONY_PP_PRIVATE_EVAL_REC_1447_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1448(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1448_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1448_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1448_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1448_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1448_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1448_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1448_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1448_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1448_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1448_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1449
#define AGONY_PP_PRIVATE_EVAL_REC_1448_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1449(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1449_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1449_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1449_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1449_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1449_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1449_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1449_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1449_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1449_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1449_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1450
#define AGONY_PP_PRIVATE_EVAL_REC_1449_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1450(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1450_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1450_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1450_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1450_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1450_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1450_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1450_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1450_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1450_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1450_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1451
#define AGONY_PP_PRIVATE_EVAL_REC_1450_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1451(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1451_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1451_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1451_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1451_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1451_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1451_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1451_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1451_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1451_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1451_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1452
#define AGONY_PP_PRIVATE_EVAL_REC_1451_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1452(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1452_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1452_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1452_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1452_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1452_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1452_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1452_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1452_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1452_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1452_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1453
#define AGONY_PP_PRIVATE_EVAL_REC_1452_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1453(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1453_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1453_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1453_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1453_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1453_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1453_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1453_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1453_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1453_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1453_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1454
#define AGONY_PP_PRIVATE_EVAL_REC_1453_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1454(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1454_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1454_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1454_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1454_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1454_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1454_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1454_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1454_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1454_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1454_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1455
#define AGONY_PP_PRIVATE_EVAL_REC_1454_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1455(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1455_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1455_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1455_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1455_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1455_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1455_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1455_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1455_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1455_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1455_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1456
#define AGONY_PP_PRIVATE_EVAL_REC_1455_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1456(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1456_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1456_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1456_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1456_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1456_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1456_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1456_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1456_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1456_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1456_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1457
#define AGONY_PP_PRIVATE_EVAL_REC_1456_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1457(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1457_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1457_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1457_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1457_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1457_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1457_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1457_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1457_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1457_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1457_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1458
#define AGONY_PP_PRIVATE_EVAL_REC_1457_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1458(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1458_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1458_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1458_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1458_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1458_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1458_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1458_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1458_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1458_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1458_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1459
#define AGONY_PP_PRIVATE_EVAL_REC_1458_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1459(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1459_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1459_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1459_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1459_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1459_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1459_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1459_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1459_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1459_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1459_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1460
#define AGONY_PP_PRIVATE_EVAL_REC_1459_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1460(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1460_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1460_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1460_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1460_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1460_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1460_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1460_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1460_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1460_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1460_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1461
#define AGONY_PP_PRIVATE_EVAL_REC_1460_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1461(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1461_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1461_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1461_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1461_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1461_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1461_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1461_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1461_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1461_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1461_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1462
#define AGONY_PP_PRIVATE_EVAL_REC_1461_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1462(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1462_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1462_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1462_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1462_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1462_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1462_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1462_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1462_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1462_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1462_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1463
#define AGONY_PP_PRIVATE_EVAL_REC_1462_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1463(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1463_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1463_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1463_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1463_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1463_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1463_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1463_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1463_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1463_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1463_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1464
#define AGONY_PP_PRIVATE_EVAL_REC_1463_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1464(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1464_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1464_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1464_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1464_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1464_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1464_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1464_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1464_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1464_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1464_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1465
#define AGONY_PP_PRIVATE_EVAL_REC_1464_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1465(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1465_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1465_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1465_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1465_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1465_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1465_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1465_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1465_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1465_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1465_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1466
#define AGONY_PP_PRIVATE_EVAL_REC_1465_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1466(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1466_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1466_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1466_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1466_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1466_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1466_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1466_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1466_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1466_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1466_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1467
#define AGONY_PP_PRIVATE_EVAL_REC_1466_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1467(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1467_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1467_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1467_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1467_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1467_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1467_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1467_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1467_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1467_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1467_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1468
#define AGONY_PP_PRIVATE_EVAL_REC_1467_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1468(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1468_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1468_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1468_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1468_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1468_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1468_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1468_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1468_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1468_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1468_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1469
#define AGONY_PP_PRIVATE_EVAL_REC_1468_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1469(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1469_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1469_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1469_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1469_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1469_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1469_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1469_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1469_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1469_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1469_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1470
#define AGONY_PP_PRIVATE_EVAL_REC_1469_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1470(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1470_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1470_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1470_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1470_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1470_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1470_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1470_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1470_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1470_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1470_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1471
#define AGONY_PP_PRIVATE_EVAL_REC_1470_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1471(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1471_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1471_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1471_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1471_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1471_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1471_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1471_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1471_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1471_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1471_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1472
#define AGONY_PP_PRIVATE_EVAL_REC_1471_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1472(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1472_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1472_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1472_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1472_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1472_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1472_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1472_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1472_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1472_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1472_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1473
#define AGONY_PP_PRIVATE_EVAL_REC_1472_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1473(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1473_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1473_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1473_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1473_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1473_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1473_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1473_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1473_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1473_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1473_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1474
#define AGONY_PP_PRIVATE_EVAL_REC_1473_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1474(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1474_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1474_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1474_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1474_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1474_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1474_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1474_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1474_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1474_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1474_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1475
#define AGONY_PP_PRIVATE_EVAL_REC_1474_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1475(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1475_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1475_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1475_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1475_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1475_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1475_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1475_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1475_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1475_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1475_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1476
#define AGONY_PP_PRIVATE_EVAL_REC_1475_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1476(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1476_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1476_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1476_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1476_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1476_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1476_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1476_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1476_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1476_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1476_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1477
#define AGONY_PP_PRIVATE_EVAL_REC_1476_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1477(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1477_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1477_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1477_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1477_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1477_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1477_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1477_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1477_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1477_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1477_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1478
#define AGONY_PP_PRIVATE_EVAL_REC_1477_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1478(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1478_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1478_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1478_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1478_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1478_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1478_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1478_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1478_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1478_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1478_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1479
#define AGONY_PP_PRIVATE_EVAL_REC_1478_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1479(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1479_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1479_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1479_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1479_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1479_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1479_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1479_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1479_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1479_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1479_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1480
#define AGONY_PP_PRIVATE_EVAL_REC_1479_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1480(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1480_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1480_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1480_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1480_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1480_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1480_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1480_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1480_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1480_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1480_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1481
#define AGONY_PP_PRIVATE_EVAL_REC_1480_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1481(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1481_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1481_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1481_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1481_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1481_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1481_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1481_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1481_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1481_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1481_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1482
#define AGONY_PP_PRIVATE_EVAL_REC_1481_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1482(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1482_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1482_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1482_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1482_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1482_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1482_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1482_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1482_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1482_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1482_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1483
#define AGONY_PP_PRIVATE_EVAL_REC_1482_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1483(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1483_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1483_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1483_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1483_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1483_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1483_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1483_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1483_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1483_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1483_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1484
#define AGONY_PP_PRIVATE_EVAL_REC_1483_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1484(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1484_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1484_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1484_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1484_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1484_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1484_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1484_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1484_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1484_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1484_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1485
#define AGONY_PP_PRIVATE_EVAL_REC_1484_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1485(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1485_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1485_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1485_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1485_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1485_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1485_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1485_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1485_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1485_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1485_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1486
#define AGONY_PP_PRIVATE_EVAL_REC_1485_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1486(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1486_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1486_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1486_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1486_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1486_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1486_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1486_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1486_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1486_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1486_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1487
#define AGONY_PP_PRIVATE_EVAL_REC_1486_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1487(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1487_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1487_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1487_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1487_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1487_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1487_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1487_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1487_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1487_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1487_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1488
#define AGONY_PP_PRIVATE_EVAL_REC_1487_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1488(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1488_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1488_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1488_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1488_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1488_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1488_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1488_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1488_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1488_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1488_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1489
#define AGONY_PP_PRIVATE_EVAL_REC_1488_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1489(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1489_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1489_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1489_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1489_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1489_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1489_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1489_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1489_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1489_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1489_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1490
#define AGONY_PP_PRIVATE_EVAL_REC_1489_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1490(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1490_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1490_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1490_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1490_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1490_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1490_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1490_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1490_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1490_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1490_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1491
#define AGONY_PP_PRIVATE_EVAL_REC_1490_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1491(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1491_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1491_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1491_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1491_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1491_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1491_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1491_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1491_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1491_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1491_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1492
#define AGONY_PP_PRIVATE_EVAL_REC_1491_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1492(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1492_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1492_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1492_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1492_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1492_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1492_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1492_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1492_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1492_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1492_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1493
#define AGONY_PP_PRIVATE_EVAL_REC_1492_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1493(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1493_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1493_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1493_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1493_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1493_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1493_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1493_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1493_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1493_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1493_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1494
#define AGONY_PP_PRIVATE_EVAL_REC_1493_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1494(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1494_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1494_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1494_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1494_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1494_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1494_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1494_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1494_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1494_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1494_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1495
#define AGONY_PP_PRIVATE_EVAL_REC_1494_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1495(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1495_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1495_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1495_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1495_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1495_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1495_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1495_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1495_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1495_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1495_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1496
#define AGONY_PP_PRIVATE_EVAL_REC_1495_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1496(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1496_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1496_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1496_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1496_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1496_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1496_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1496_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1496_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1496_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1496_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1497
#define AGONY_PP_PRIVATE_EVAL_REC_1496_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1497(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1497_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1497_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1497_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1497_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1497_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1497_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1497_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1497_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1497_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1497_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1498
#define AGONY_PP_PRIVATE_EVAL_REC_1497_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1498(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1498_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1498_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1498_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1498_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1498_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1498_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1498_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1498_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1498_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1498_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1499
#define AGONY_PP_PRIVATE_EVAL_REC_1498_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1499(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1499_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1499_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1499_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1499_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1499_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1499_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1499_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1499_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1499_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1499_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1500
#define AGONY_PP_PRIVATE_EVAL_REC_1499_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1500(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1500_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1500_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1500_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1500_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1500_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1500_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1500_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1500_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1500_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1500_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1501
#define AGONY_PP_PRIVATE_EVAL_REC_1500_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1501(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1501_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1501_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1501_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1501_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1501_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1501_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1501_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1501_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1501_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1501_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1502
#define AGONY_PP_PRIVATE_EVAL_REC_1501_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1502(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1502_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1502_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1502_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1502_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1502_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1502_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1502_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1502_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1502_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1502_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1503
#define AGONY_PP_PRIVATE_EVAL_REC_1502_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1503(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1503_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1503_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1503_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1503_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1503_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1503_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1503_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1503_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1503_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1503_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1504
#define AGONY_PP_PRIVATE_EVAL_REC_1503_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1504(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1504_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1504_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1504_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1504_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1504_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1504_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1504_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1504_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1504_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1504_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1505
#define AGONY_PP_PRIVATE_EVAL_REC_1504_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1505(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1505_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1505_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1505_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1505_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1505_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1505_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1505_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1505_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1505_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1505_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1506
#define AGONY_PP_PRIVATE_EVAL_REC_1505_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1506(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1506_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1506_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1506_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1506_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1506_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1506_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1506_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1506_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1506_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1506_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1507
#define AGONY_PP_PRIVATE_EVAL_REC_1506_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1507(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1507_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1507_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1507_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1507_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1507_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1507_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1507_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1507_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1507_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1507_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1508
#define AGONY_PP_PRIVATE_EVAL_REC_1507_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1508(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1508_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1508_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1508_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1508_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1508_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1508_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1508_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1508_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1508_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1508_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1509
#define AGONY_PP_PRIVATE_EVAL_REC_1508_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1509(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1509_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1509_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1509_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1509_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1509_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1509_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1509_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1509_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1509_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1509_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1510
#define AGONY_PP_PRIVATE_EVAL_REC_1509_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1510(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1510_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1510_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1510_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1510_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1510_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1510_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1510_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1510_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1510_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1510_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1511
#define AGONY_PP_PRIVATE_EVAL_REC_1510_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1511(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1511_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1511_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1511_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1511_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1511_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1511_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1511_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1511_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1511_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1511_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1512
#define AGONY_PP_PRIVATE_EVAL_REC_1511_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1512(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1512_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1512_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1512_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1512_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1512_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1512_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1512_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1512_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1512_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1512_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1513
#define AGONY_PP_PRIVATE_EVAL_REC_1512_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1513(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1513_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1513_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1513_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1513_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1513_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1513_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1513_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1513_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1513_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1513_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1514
#define AGONY_PP_PRIVATE_EVAL_REC_1513_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1514(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1514_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1514_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1514_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1514_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1514_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1514_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1514_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1514_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1514_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1514_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1515
#define AGONY_PP_PRIVATE_EVAL_REC_1514_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1515(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1515_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1515_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1515_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1515_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1515_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1515_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1515_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1515_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1515_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1515_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1516
#define AGONY_PP_PRIVATE_EVAL_REC_1515_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1516(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1516_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1516_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1516_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1516_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1516_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1516_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1516_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1516_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1516_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1516_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1517
#define AGONY_PP_PRIVATE_EVAL_REC_1516_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1517(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1517_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1517_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1517_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1517_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1517_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1517_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1517_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1517_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1517_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1517_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1518
#define AGONY_PP_PRIVATE_EVAL_REC_1517_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1518(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1518_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1518_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1518_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1518_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1518_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1518_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1518_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1518_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1518_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1518_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1519
#define AGONY_PP_PRIVATE_EVAL_REC_1518_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1519(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1519_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1519_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1519_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1519_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1519_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1519_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1519_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1519_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1519_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1519_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1520
#define AGONY_PP_PRIVATE_EVAL_REC_1519_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1520(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1520_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1520_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1520_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1520_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1520_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1520_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1520_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1520_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1520_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1520_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1521
#define AGONY_PP_PRIVATE_EVAL_REC_1520_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1521(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1521_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1521_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1521_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1521_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1521_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1521_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1521_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1521_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1521_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1521_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1522
#define AGONY_PP_PRIVATE_EVAL_REC_1521_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1522(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1522_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1522_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1522_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1522_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1522_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1522_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1522_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1522_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1522_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1522_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1523
#define AGONY_PP_PRIVATE_EVAL_REC_1522_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1523(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1523_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1523_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1523_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1523_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1523_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1523_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1523_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1523_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1523_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1523_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1524
#define AGONY_PP_PRIVATE_EVAL_REC_1523_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1524(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1524_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1524_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1524_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1524_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1524_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1524_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1524_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1524_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1524_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1524_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1525
#define AGONY_PP_PRIVATE_EVAL_REC_1524_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1525(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1525_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1525_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1525_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1525_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1525_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1525_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1525_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1525_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1525_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1525_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1526
#define AGONY_PP_PRIVATE_EVAL_REC_1525_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1526(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1526_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1526_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1526_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1526_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1526_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1526_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1526_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1526_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1526_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1526_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1527
#define AGONY_PP_PRIVATE_EVAL_REC_1526_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1527(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1527_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1527_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1527_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1527_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1527_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1527_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1527_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1527_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1527_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1527_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1528
#define AGONY_PP_PRIVATE_EVAL_REC_1527_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1528(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1528_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1528_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1528_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1528_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1528_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1528_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1528_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1528_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1528_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1528_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1529
#define AGONY_PP_PRIVATE_EVAL_REC_1528_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1529(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1529_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1529_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1529_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1529_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1529_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1529_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1529_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1529_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1529_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1529_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1530
#define AGONY_PP_PRIVATE_EVAL_REC_1529_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1530(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1530_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1530_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1530_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1530_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1530_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1530_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1530_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1530_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1530_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1530_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1531
#define AGONY_PP_PRIVATE_EVAL_REC_1530_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1531(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1531_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1531_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1531_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1531_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1531_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1531_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1531_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1531_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1531_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1531_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1532
#define AGONY_PP_PRIVATE_EVAL_REC_1531_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1532(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1532_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1532_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1532_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1532_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1532_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1532_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1532_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1532_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1532_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1532_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1533
#define AGONY_PP_PRIVATE_EVAL_REC_1532_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1533(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1533_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1533_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1533_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1533_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1533_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1533_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1533_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1533_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1533_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1533_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1534
#define AGONY_PP_PRIVATE_EVAL_REC_1533_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1534(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1534_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1534_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1534_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1534_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1534_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1534_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1534_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1534_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1534_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1534_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1535
#define AGONY_PP_PRIVATE_EVAL_REC_1534_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1535(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1535_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1535_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1535_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1535_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1535_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1535_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1535_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1535_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1535_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1535_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1536
#define AGONY_PP_PRIVATE_EVAL_REC_1535_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1536(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1536_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1536_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1536_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1536_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1536_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1536_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1536_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1536_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1536_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1536_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1537
#define AGONY_PP_PRIVATE_EVAL_REC_1536_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1537(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1537_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1537_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1537_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1537_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1537_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1537_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1537_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1537_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1537_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1537_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1538
#define AGONY_PP_PRIVATE_EVAL_REC_1537_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1538(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1538_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1538_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1538_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1538_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1538_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1538_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1538_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1538_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1538_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1538_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1539
#define AGONY_PP_PRIVATE_EVAL_REC_1538_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1539(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1539_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1539_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1539_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1539_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1539_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1539_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1539_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1539_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1539_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1539_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1540
#define AGONY_PP_PRIVATE_EVAL_REC_1539_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1540(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1540_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1540_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1540_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1540_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1540_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1540_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1540_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1540_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1540_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1540_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1541
#define AGONY_PP_PRIVATE_EVAL_REC_1540_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1541(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1541_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1541_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1541_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1541_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1541_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1541_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1541_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1541_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1541_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1541_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1542
#define AGONY_PP_PRIVATE_EVAL_REC_1541_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1542(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1542_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1542_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1542_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1542_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1542_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1542_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1542_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1542_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1542_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1542_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1543
#define AGONY_PP_PRIVATE_EVAL_REC_1542_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1543(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1543_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1543_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1543_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1543_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1543_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1543_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1543_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1543_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1543_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1543_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1544
#define AGONY_PP_PRIVATE_EVAL_REC_1543_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1544(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1544_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1544_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1544_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1544_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1544_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1544_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1544_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1544_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1544_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1544_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1545
#define AGONY_PP_PRIVATE_EVAL_REC_1544_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1545(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1545_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1545_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1545_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1545_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1545_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1545_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1545_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1545_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1545_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1545_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1546
#define AGONY_PP_PRIVATE_EVAL_REC_1545_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1546(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1546_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1546_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1546_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1546_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1546_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1546_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1546_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1546_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1546_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1546_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1547
#define AGONY_PP_PRIVATE_EVAL_REC_1546_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1547(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1547_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1547_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1547_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1547_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1547_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1547_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1547_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1547_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1547_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1547_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1548
#define AGONY_PP_PRIVATE_EVAL_REC_1547_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1548(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1548_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1548_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1548_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1548_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1548_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1548_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1548_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1548_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1548_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1548_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1549
#define AGONY_PP_PRIVATE_EVAL_REC_1548_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1549(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1549_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1549_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1549_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1549_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1549_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1549_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1549_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1549_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1549_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1549_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1550
#define AGONY_PP_PRIVATE_EVAL_REC_1549_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1550(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1550_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1550_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1550_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1550_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1550_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1550_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1550_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1550_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1550_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1550_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1551
#define AGONY_PP_PRIVATE_EVAL_REC_1550_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1551(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1551_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1551_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1551_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1551_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1551_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1551_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1551_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1551_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1551_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1551_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1552
#define AGONY_PP_PRIVATE_EVAL_REC_1551_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1552(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1552_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1552_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1552_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1552_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1552_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1552_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1552_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1552_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1552_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1552_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1553
#define AGONY_PP_PRIVATE_EVAL_REC_1552_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1553(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1553_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1553_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1553_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1553_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1553_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1553_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1553_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1553_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1553_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1553_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1554
#define AGONY_PP_PRIVATE_EVAL_REC_1553_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1554(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1554_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1554_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1554_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1554_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1554_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1554_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1554_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1554_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1554_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1554_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1555
#define AGONY_PP_PRIVATE_EVAL_REC_1554_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1555(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1555_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1555_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1555_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1555_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1555_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1555_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1555_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1555_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1555_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1555_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1556
#define AGONY_PP_PRIVATE_EVAL_REC_1555_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1556(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1556_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1556_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1556_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1556_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1556_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1556_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1556_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1556_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1556_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1556_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1557
#define AGONY_PP_PRIVATE_EVAL_REC_1556_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1557(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1557_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1557_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1557_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1557_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1557_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1557_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1557_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1557_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1557_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1557_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1558
#define AGONY_PP_PRIVATE_EVAL_REC_1557_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1558(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1558_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1558_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1558_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1558_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1558_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1558_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1558_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1558_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1558_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1558_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1559
#define AGONY_PP_PRIVATE_EVAL_REC_1558_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1559(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1559_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1559_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1559_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1559_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1559_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1559_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1559_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1559_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1559_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1559_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1560
#define AGONY_PP_PRIVATE_EVAL_REC_1559_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1560(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1560_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1560_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1560_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1560_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1560_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1560_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1560_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1560_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1560_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1560_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1561
#define AGONY_PP_PRIVATE_EVAL_REC_1560_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1561(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1561_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1561_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1561_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1561_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1561_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1561_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1561_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1561_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1561_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1561_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1562
#define AGONY_PP_PRIVATE_EVAL_REC_1561_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1562(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1562_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1562_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1562_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1562_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1562_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1562_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1562_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1562_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1562_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1562_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1563
#define AGONY_PP_PRIVATE_EVAL_REC_1562_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1563(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1563_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1563_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1563_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1563_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1563_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1563_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1563_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1563_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1563_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1563_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1564
#define AGONY_PP_PRIVATE_EVAL_REC_1563_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1564(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1564_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1564_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1564_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1564_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1564_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1564_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1564_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1564_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1564_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1564_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1565
#define AGONY_PP_PRIVATE_EVAL_REC_1564_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1565(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1565_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1565_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1565_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1565_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1565_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1565_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1565_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1565_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1565_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1565_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1566
#define AGONY_PP_PRIVATE_EVAL_REC_1565_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1566(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1566_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1566_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1566_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1566_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1566_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1566_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1566_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1566_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1566_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1566_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1567
#define AGONY_PP_PRIVATE_EVAL_REC_1566_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1567(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1567_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1567_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1567_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1567_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1567_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1567_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1567_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1567_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1567_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1567_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1568
#define AGONY_PP_PRIVATE_EVAL_REC_1567_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1568(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1568_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1568_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1568_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1568_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1568_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1568_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1568_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1568_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1568_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1568_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1569
#define AGONY_PP_PRIVATE_EVAL_REC_1568_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1569(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1569_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1569_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1569_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1569_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1569_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1569_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1569_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1569_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1569_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1569_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1570
#define AGONY_PP_PRIVATE_EVAL_REC_1569_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1570(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1570_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1570_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1570_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1570_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1570_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1570_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1570_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1570_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1570_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1570_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1571
#define AGONY_PP_PRIVATE_EVAL_REC_1570_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1571(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1571_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1571_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1571_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1571_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1571_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1571_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1571_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1571_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1571_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1571_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1572
#define AGONY_PP_PRIVATE_EVAL_REC_1571_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1572(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1572_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1572_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1572_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1572_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1572_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1572_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1572_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1572_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1572_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1572_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1573
#define AGONY_PP_PRIVATE_EVAL_REC_1572_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1573(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1573_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1573_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1573_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1573_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1573_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1573_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1573_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1573_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1573_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1573_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1574
#define AGONY_PP_PRIVATE_EVAL_REC_1573_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1574(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1574_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1574_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1574_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1574_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1574_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1574_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1574_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1574_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1574_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1574_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1575
#define AGONY_PP_PRIVATE_EVAL_REC_1574_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1575(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1575_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1575_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1575_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1575_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1575_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1575_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1575_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1575_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1575_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1575_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1576
#define AGONY_PP_PRIVATE_EVAL_REC_1575_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1576(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1576_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1576_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1576_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1576_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1576_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1576_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1576_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1576_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1576_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1576_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1577
#define AGONY_PP_PRIVATE_EVAL_REC_1576_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1577(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1577_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1577_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1577_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1577_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1577_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1577_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1577_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1577_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1577_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1577_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1578
#define AGONY_PP_PRIVATE_EVAL_REC_1577_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1578(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1578_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1578_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1578_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1578_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1578_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1578_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1578_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1578_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1578_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1578_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1579
#define AGONY_PP_PRIVATE_EVAL_REC_1578_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1579(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1579_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1579_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1579_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1579_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1579_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1579_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1579_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1579_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1579_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1579_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1580
#define AGONY_PP_PRIVATE_EVAL_REC_1579_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1580(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1580_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1580_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1580_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1580_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1580_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1580_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1580_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1580_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1580_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1580_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1581
#define AGONY_PP_PRIVATE_EVAL_REC_1580_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1581(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1581_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1581_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1581_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1581_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1581_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1581_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1581_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1581_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1581_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1581_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1582
#define AGONY_PP_PRIVATE_EVAL_REC_1581_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1582(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1582_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1582_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1582_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1582_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1582_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1582_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1582_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1582_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1582_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1582_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1583
#define AGONY_PP_PRIVATE_EVAL_REC_1582_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1583(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1583_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1583_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1583_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1583_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1583_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1583_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1583_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1583_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1583_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1583_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1584
#define AGONY_PP_PRIVATE_EVAL_REC_1583_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1584(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1584_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1584_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1584_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1584_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1584_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1584_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1584_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1584_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1584_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1584_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1585
#define AGONY_PP_PRIVATE_EVAL_REC_1584_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1585(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1585_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1585_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1585_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1585_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1585_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1585_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1585_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1585_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1585_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1585_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1586
#define AGONY_PP_PRIVATE_EVAL_REC_1585_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1586(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1586_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1586_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1586_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1586_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1586_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1586_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1586_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1586_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1586_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1586_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1587
#define AGONY_PP_PRIVATE_EVAL_REC_1586_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1587(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1587_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1587_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1587_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1587_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1587_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1587_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1587_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1587_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1587_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1587_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1588
#define AGONY_PP_PRIVATE_EVAL_REC_1587_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1588(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1588_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1588_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1588_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1588_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1588_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1588_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1588_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1588_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1588_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1588_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1589
#define AGONY_PP_PRIVATE_EVAL_REC_1588_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1589(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1589_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1589_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1589_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1589_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1589_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1589_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1589_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1589_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1589_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1589_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1590
#define AGONY_PP_PRIVATE_EVAL_REC_1589_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1590(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1590_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1590_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1590_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1590_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1590_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1590_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1590_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1590_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1590_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1590_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1591
#define AGONY_PP_PRIVATE_EVAL_REC_1590_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1591(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1591_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1591_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1591_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1591_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1591_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1591_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1591_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1591_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1591_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1591_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1592
#define AGONY_PP_PRIVATE_EVAL_REC_1591_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1592(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1592_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1592_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1592_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1592_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1592_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1592_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1592_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1592_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1592_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1592_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1593
#define AGONY_PP_PRIVATE_EVAL_REC_1592_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1593(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1593_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1593_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1593_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1593_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1593_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1593_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1593_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1593_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1593_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1593_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1594
#define AGONY_PP_PRIVATE_EVAL_REC_1593_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1594(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1594_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1594_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1594_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1594_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1594_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1594_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1594_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1594_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1594_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1594_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1595
#define AGONY_PP_PRIVATE_EVAL_REC_1594_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1595(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1595_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1595_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1595_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1595_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1595_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1595_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1595_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1595_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1595_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1595_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1596
#define AGONY_PP_PRIVATE_EVAL_REC_1595_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1596(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1596_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1596_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1596_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1596_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1596_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1596_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1596_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1596_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1596_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1596_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1597
#define AGONY_PP_PRIVATE_EVAL_REC_1596_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1597(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1597_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1597_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1597_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1597_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1597_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1597_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1597_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1597_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1597_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1597_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1598
#define AGONY_PP_PRIVATE_EVAL_REC_1597_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1598(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1598_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1598_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1598_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1598_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1598_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1598_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1598_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1598_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1598_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1598_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1599
#define AGONY_PP_PRIVATE_EVAL_REC_1598_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1599(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1599_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1599_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1599_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1599_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1599_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1599_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1599_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1599_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1599_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1599_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1600
#define AGONY_PP_PRIVATE_EVAL_REC_1599_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1600(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1600_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1600_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1600_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1600_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1600_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1600_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1600_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1600_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1600_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1600_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1601
#define AGONY_PP_PRIVATE_EVAL_REC_1600_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1601(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1601_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1601_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1601_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1601_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1601_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1601_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1601_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1601_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1601_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1601_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1602
#define AGONY_PP_PRIVATE_EVAL_REC_1601_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1602(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1602_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1602_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1602_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1602_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1602_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1602_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1602_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1602_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1602_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1602_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1603
#define AGONY_PP_PRIVATE_EVAL_REC_1602_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1603(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1603_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1603_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1603_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1603_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1603_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1603_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1603_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1603_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1603_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1603_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1604
#define AGONY_PP_PRIVATE_EVAL_REC_1603_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1604(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1604_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1604_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1604_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1604_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1604_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1604_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1604_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1604_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1604_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1604_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1605
#define AGONY_PP_PRIVATE_EVAL_REC_1604_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1605(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1605_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1605_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1605_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1605_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1605_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1605_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1605_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1605_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1605_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1605_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1606
#define AGONY_PP_PRIVATE_EVAL_REC_1605_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1606(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1606_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1606_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1606_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1606_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1606_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1606_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1606_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1606_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1606_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1606_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1607
#define AGONY_PP_PRIVATE_EVAL_REC_1606_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1607(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1607_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1607_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1607_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1607_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1607_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1607_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1607_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1607_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1607_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1607_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1608
#define AGONY_PP_PRIVATE_EVAL_REC_1607_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1608(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1608_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1608_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1608_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1608_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1608_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1608_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1608_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1608_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1608_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1608_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1609
#define AGONY_PP_PRIVATE_EVAL_REC_1608_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1609(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1609_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1609_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1609_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1609_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1609_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1609_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1609_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1609_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1609_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1609_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1610
#define AGONY_PP_PRIVATE_EVAL_REC_1609_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1610(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1610_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1610_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1610_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1610_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1610_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1610_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1610_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1610_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1610_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1610_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1611
#define AGONY_PP_PRIVATE_EVAL_REC_1610_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1611(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1611_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1611_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1611_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1611_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1611_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1611_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1611_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1611_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1611_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1611_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1612
#define AGONY_PP_PRIVATE_EVAL_REC_1611_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1612(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1612_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1612_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1612_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1612_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1612_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1612_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1612_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1612_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1612_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1612_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1613
#define AGONY_PP_PRIVATE_EVAL_REC_1612_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1613(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1613_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1613_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1613_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1613_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1613_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1613_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1613_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1613_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1613_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1613_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1614
#define AGONY_PP_PRIVATE_EVAL_REC_1613_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1614(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1614_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1614_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1614_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1614_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1614_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1614_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1614_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1614_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1614_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1614_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1615
#define AGONY_PP_PRIVATE_EVAL_REC_1614_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1615(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1615_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1615_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1615_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1615_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1615_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1615_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1615_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1615_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1615_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1615_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1616
#define AGONY_PP_PRIVATE_EVAL_REC_1615_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1616(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1616_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1616_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1616_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1616_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1616_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1616_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1616_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1616_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1616_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1616_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1617
#define AGONY_PP_PRIVATE_EVAL_REC_1616_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1617(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1617_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1617_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1617_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1617_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1617_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1617_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1617_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1617_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1617_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1617_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1618
#define AGONY_PP_PRIVATE_EVAL_REC_1617_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1618(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1618_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1618_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1618_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1618_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1618_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1618_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1618_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1618_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1618_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1618_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1619
#define AGONY_PP_PRIVATE_EVAL_REC_1618_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1619(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1619_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1619_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1619_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1619_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1619_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1619_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1619_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1619_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1619_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1619_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1620
#define AGONY_PP_PRIVATE_EVAL_REC_1619_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1620(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1620_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1620_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1620_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1620_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1620_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1620_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1620_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1620_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1620_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1620_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1621
#define AGONY_PP_PRIVATE_EVAL_REC_1620_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1621(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1621_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1621_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1621_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1621_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1621_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1621_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1621_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1621_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1621_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1621_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1622
#define AGONY_PP_PRIVATE_EVAL_REC_1621_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1622(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1622_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1622_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1622_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1622_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1622_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1622_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1622_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1622_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1622_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1622_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1623
#define AGONY_PP_PRIVATE_EVAL_REC_1622_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1623(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1623_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1623_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1623_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1623_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1623_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1623_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1623_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1623_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1623_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1623_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1624
#define AGONY_PP_PRIVATE_EVAL_REC_1623_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1624(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1624_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1624_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1624_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1624_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1624_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1624_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1624_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1624_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1624_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1624_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1625
#define AGONY_PP_PRIVATE_EVAL_REC_1624_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1625(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1625_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1625_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1625_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1625_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1625_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1625_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1625_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1625_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1625_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1625_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1626
#define AGONY_PP_PRIVATE_EVAL_REC_1625_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1626(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1626_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1626_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1626_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1626_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1626_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1626_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1626_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1626_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1626_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1626_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1627
#define AGONY_PP_PRIVATE_EVAL_REC_1626_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1627(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1627_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1627_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1627_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1627_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1627_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1627_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1627_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1627_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1627_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1627_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1628
#define AGONY_PP_PRIVATE_EVAL_REC_1627_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1628(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1628_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1628_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1628_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1628_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1628_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1628_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1628_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1628_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1628_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1628_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1629
#define AGONY_PP_PRIVATE_EVAL_REC_1628_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1629(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1629_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1629_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1629_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1629_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1629_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1629_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1629_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1629_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1629_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1629_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1630
#define AGONY_PP_PRIVATE_EVAL_REC_1629_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1630(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1630_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1630_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1630_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1630_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1630_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1630_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1630_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1630_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1630_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1630_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1631
#define AGONY_PP_PRIVATE_EVAL_REC_1630_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1631(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1631_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1631_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1631_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1631_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1631_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1631_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1631_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1631_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1631_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1631_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1632
#define AGONY_PP_PRIVATE_EVAL_REC_1631_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1632(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1632_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1632_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1632_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1632_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1632_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1632_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1632_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1632_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1632_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1632_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1633
#define AGONY_PP_PRIVATE_EVAL_REC_1632_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1633(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1633_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1633_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1633_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1633_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1633_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1633_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1633_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1633_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1633_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1633_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1634
#define AGONY_PP_PRIVATE_EVAL_REC_1633_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1634(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1634_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1634_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1634_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1634_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1634_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1634_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1634_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1634_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1634_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1634_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1635
#define AGONY_PP_PRIVATE_EVAL_REC_1634_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1635(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1635_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1635_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1635_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1635_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1635_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1635_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1635_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1635_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1635_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1635_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1636
#define AGONY_PP_PRIVATE_EVAL_REC_1635_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1636(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1636_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1636_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1636_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1636_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1636_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1636_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1636_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1636_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1636_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1636_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1637
#define AGONY_PP_PRIVATE_EVAL_REC_1636_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1637(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1637_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1637_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1637_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1637_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1637_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1637_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1637_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1637_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1637_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1637_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1638
#define AGONY_PP_PRIVATE_EVAL_REC_1637_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1638(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1638_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1638_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1638_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1638_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1638_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1638_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1638_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1638_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1638_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1638_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1639
#define AGONY_PP_PRIVATE_EVAL_REC_1638_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1639(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1639_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1639_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1639_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1639_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1639_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1639_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1639_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1639_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1639_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1639_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1640
#define AGONY_PP_PRIVATE_EVAL_REC_1639_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1640(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1640_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1640_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1640_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1640_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1640_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1640_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1640_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1640_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1640_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1640_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1641
#define AGONY_PP_PRIVATE_EVAL_REC_1640_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1641(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1641_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1641_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1641_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1641_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1641_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1641_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1641_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1641_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1641_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1641_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1642
#define AGONY_PP_PRIVATE_EVAL_REC_1641_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1642(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1642_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1642_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1642_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1642_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1642_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1642_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1642_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1642_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1642_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1642_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1643
#define AGONY_PP_PRIVATE_EVAL_REC_1642_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1643(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1643_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1643_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1643_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1643_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1643_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1643_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1643_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1643_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1643_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1643_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1644
#define AGONY_PP_PRIVATE_EVAL_REC_1643_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1644(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1644_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1644_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1644_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1644_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1644_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1644_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1644_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1644_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1644_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1644_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1645
#define AGONY_PP_PRIVATE_EVAL_REC_1644_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1645(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1645_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1645_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1645_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1645_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1645_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1645_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1645_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1645_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1645_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1645_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1646
#define AGONY_PP_PRIVATE_EVAL_REC_1645_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1646(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1646_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1646_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1646_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1646_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1646_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1646_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1646_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1646_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1646_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1646_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1647
#define AGONY_PP_PRIVATE_EVAL_REC_1646_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1647(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1647_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1647_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1647_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1647_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1647_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1647_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1647_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1647_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1647_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1647_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1648
#define AGONY_PP_PRIVATE_EVAL_REC_1647_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1648(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1648_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1648_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1648_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1648_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1648_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1648_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1648_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1648_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1648_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1648_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1649
#define AGONY_PP_PRIVATE_EVAL_REC_1648_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1649(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1649_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1649_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1649_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1649_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1649_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1649_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1649_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1649_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1649_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1649_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1650
#define AGONY_PP_PRIVATE_EVAL_REC_1649_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1650(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1650_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1650_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1650_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1650_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1650_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1650_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1650_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1650_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1650_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1650_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1651
#define AGONY_PP_PRIVATE_EVAL_REC_1650_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1651(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1651_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1651_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1651_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1651_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1651_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1651_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1651_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1651_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1651_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1651_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1652
#define AGONY_PP_PRIVATE_EVAL_REC_1651_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1652(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1652_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1652_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1652_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1652_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1652_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1652_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1652_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1652_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1652_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1652_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1653
#define AGONY_PP_PRIVATE_EVAL_REC_1652_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1653(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1653_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1653_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1653_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1653_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1653_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1653_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1653_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1653_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1653_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1653_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1654
#define AGONY_PP_PRIVATE_EVAL_REC_1653_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1654(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1654_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1654_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1654_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1654_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1654_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1654_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1654_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1654_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1654_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1654_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1655
#define AGONY_PP_PRIVATE_EVAL_REC_1654_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1655(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1655_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1655_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1655_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1655_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1655_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1655_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1655_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1655_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1655_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1655_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1656
#define AGONY_PP_PRIVATE_EVAL_REC_1655_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1656(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1656_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1656_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1656_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1656_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1656_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1656_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1656_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1656_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1656_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1656_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1657
#define AGONY_PP_PRIVATE_EVAL_REC_1656_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1657(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1657_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1657_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1657_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1657_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1657_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1657_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1657_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1657_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1657_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1657_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1658
#define AGONY_PP_PRIVATE_EVAL_REC_1657_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1658(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1658_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1658_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1658_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1658_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1658_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1658_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1658_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1658_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1658_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1658_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1659
#define AGONY_PP_PRIVATE_EVAL_REC_1658_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1659(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1659_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1659_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1659_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1659_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1659_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1659_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1659_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1659_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1659_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1659_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1660
#define AGONY_PP_PRIVATE_EVAL_REC_1659_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1660(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1660_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1660_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1660_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1660_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1660_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1660_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1660_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1660_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1660_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1660_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1661
#define AGONY_PP_PRIVATE_EVAL_REC_1660_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1661(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1661_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1661_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1661_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1661_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1661_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1661_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1661_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1661_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1661_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1661_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1662
#define AGONY_PP_PRIVATE_EVAL_REC_1661_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1662(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1662_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1662_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1662_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1662_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1662_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1662_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1662_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1662_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1662_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1662_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1663
#define AGONY_PP_PRIVATE_EVAL_REC_1662_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1663(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1663_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1663_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1663_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1663_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1663_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1663_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1663_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1663_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1663_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1663_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1664
#define AGONY_PP_PRIVATE_EVAL_REC_1663_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1664(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1664_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1664_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1664_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1664_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1664_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1664_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1664_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1664_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1664_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1664_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1665
#define AGONY_PP_PRIVATE_EVAL_REC_1664_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1665(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1665_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1665_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1665_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1665_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1665_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1665_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1665_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1665_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1665_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1665_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1666
#define AGONY_PP_PRIVATE_EVAL_REC_1665_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1666(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1666_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1666_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1666_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1666_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1666_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1666_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1666_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1666_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1666_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1666_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1667
#define AGONY_PP_PRIVATE_EVAL_REC_1666_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1667(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1667_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1667_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1667_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1667_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1667_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1667_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1667_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1667_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1667_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1667_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1668
#define AGONY_PP_PRIVATE_EVAL_REC_1667_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1668(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1668_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1668_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1668_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1668_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1668_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1668_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1668_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1668_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1668_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1668_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1669
#define AGONY_PP_PRIVATE_EVAL_REC_1668_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1669(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1669_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1669_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1669_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1669_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1669_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1669_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1669_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1669_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1669_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1669_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1670
#define AGONY_PP_PRIVATE_EVAL_REC_1669_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1670(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1670_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1670_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1670_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1670_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1670_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1670_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1670_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1670_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1670_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1670_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1671
#define AGONY_PP_PRIVATE_EVAL_REC_1670_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1671(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1671_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1671_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1671_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1671_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1671_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1671_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1671_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1671_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1671_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1671_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1672
#define AGONY_PP_PRIVATE_EVAL_REC_1671_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1672(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1672_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1672_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1672_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1672_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1672_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1672_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1672_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1672_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1672_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1672_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1673
#define AGONY_PP_PRIVATE_EVAL_REC_1672_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1673(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1673_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1673_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1673_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1673_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1673_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1673_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1673_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1673_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1673_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1673_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1674
#define AGONY_PP_PRIVATE_EVAL_REC_1673_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1674(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1674_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1674_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1674_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1674_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1674_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1674_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1674_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1674_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1674_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1674_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1675
#define AGONY_PP_PRIVATE_EVAL_REC_1674_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1675(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1675_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1675_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1675_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1675_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1675_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1675_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1675_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1675_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1675_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1675_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1676
#define AGONY_PP_PRIVATE_EVAL_REC_1675_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1676(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1676_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1676_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1676_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1676_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1676_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1676_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1676_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1676_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1676_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1676_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1677
#define AGONY_PP_PRIVATE_EVAL_REC_1676_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1677(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1677_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1677_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1677_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1677_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1677_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1677_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1677_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1677_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1677_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1677_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1678
#define AGONY_PP_PRIVATE_EVAL_REC_1677_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1678(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1678_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1678_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1678_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1678_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1678_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1678_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1678_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1678_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1678_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1678_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1679
#define AGONY_PP_PRIVATE_EVAL_REC_1678_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1679(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1679_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1679_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1679_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1679_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1679_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1679_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1679_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1679_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1679_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1679_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1680
#define AGONY_PP_PRIVATE_EVAL_REC_1679_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1680(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1680_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1680_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1680_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1680_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1680_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1680_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1680_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1680_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1680_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1680_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1681
#define AGONY_PP_PRIVATE_EVAL_REC_1680_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1681(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1681_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1681_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1681_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1681_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1681_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1681_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1681_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1681_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1681_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1681_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1682
#define AGONY_PP_PRIVATE_EVAL_REC_1681_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1682(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1682_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1682_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1682_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1682_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1682_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1682_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1682_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1682_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1682_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1682_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1683
#define AGONY_PP_PRIVATE_EVAL_REC_1682_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1683(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1683_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1683_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1683_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1683_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1683_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1683_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1683_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1683_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1683_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1683_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1684
#define AGONY_PP_PRIVATE_EVAL_REC_1683_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1684(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1684_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1684_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1684_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1684_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1684_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1684_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1684_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1684_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1684_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1684_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1685
#define AGONY_PP_PRIVATE_EVAL_REC_1684_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1685(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1685_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1685_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1685_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1685_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1685_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1685_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1685_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1685_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1685_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1685_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1686
#define AGONY_PP_PRIVATE_EVAL_REC_1685_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1686(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1686_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1686_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1686_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1686_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1686_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1686_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1686_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1686_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1686_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1686_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1687
#define AGONY_PP_PRIVATE_EVAL_REC_1686_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1687(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1687_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1687_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1687_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1687_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1687_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1687_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1687_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1687_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1687_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1687_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1688
#define AGONY_PP_PRIVATE_EVAL_REC_1687_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1688(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1688_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1688_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1688_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1688_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1688_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1688_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1688_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1688_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1688_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1688_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1689
#define AGONY_PP_PRIVATE_EVAL_REC_1688_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1689(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1689_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1689_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1689_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1689_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1689_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1689_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1689_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1689_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1689_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1689_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1690
#define AGONY_PP_PRIVATE_EVAL_REC_1689_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1690(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1690_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1690_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1690_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1690_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1690_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1690_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1690_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1690_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1690_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1690_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1691
#define AGONY_PP_PRIVATE_EVAL_REC_1690_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1691(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1691_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1691_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1691_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1691_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1691_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1691_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1691_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1691_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1691_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1691_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1692
#define AGONY_PP_PRIVATE_EVAL_REC_1691_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1692(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1692_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1692_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1692_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1692_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1692_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1692_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1692_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1692_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1692_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1692_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1693
#define AGONY_PP_PRIVATE_EVAL_REC_1692_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1693(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1693_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1693_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1693_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1693_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1693_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1693_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1693_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1693_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1693_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1693_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1694
#define AGONY_PP_PRIVATE_EVAL_REC_1693_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1694(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1694_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1694_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1694_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1694_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1694_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1694_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1694_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1694_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1694_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1694_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1695
#define AGONY_PP_PRIVATE_EVAL_REC_1694_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1695(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1695_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1695_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1695_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1695_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1695_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1695_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1695_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1695_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1695_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1695_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1696
#define AGONY_PP_PRIVATE_EVAL_REC_1695_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1696(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1696_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1696_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1696_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1696_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1696_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1696_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1696_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1696_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1696_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1696_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1697
#define AGONY_PP_PRIVATE_EVAL_REC_1696_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1697(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1697_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1697_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1697_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1697_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1697_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1697_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1697_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1697_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1697_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1697_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1698
#define AGONY_PP_PRIVATE_EVAL_REC_1697_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1698(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1698_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1698_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1698_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1698_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1698_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1698_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1698_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1698_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1698_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1698_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1699
#define AGONY_PP_PRIVATE_EVAL_REC_1698_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1699(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1699_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1699_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1699_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1699_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1699_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1699_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1699_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1699_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1699_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1699_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1700
#define AGONY_PP_PRIVATE_EVAL_REC_1699_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1700(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1700_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1700_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1700_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1700_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1700_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1700_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1700_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1700_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1700_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1700_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1701
#define AGONY_PP_PRIVATE_EVAL_REC_1700_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1701(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1701_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1701_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1701_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1701_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1701_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1701_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1701_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1701_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1701_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1701_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1702
#define AGONY_PP_PRIVATE_EVAL_REC_1701_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1702(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1702_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1702_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1702_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1702_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1702_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1702_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1702_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1702_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1702_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1702_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1703
#define AGONY_PP_PRIVATE_EVAL_REC_1702_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1703(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1703_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1703_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1703_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1703_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1703_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1703_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1703_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1703_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1703_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1703_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1704
#define AGONY_PP_PRIVATE_EVAL_REC_1703_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1704(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1704_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1704_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1704_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1704_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1704_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1704_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1704_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1704_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1704_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1704_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1705
#define AGONY_PP_PRIVATE_EVAL_REC_1704_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1705(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1705_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1705_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1705_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1705_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1705_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1705_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1705_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1705_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1705_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1705_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1706
#define AGONY_PP_PRIVATE_EVAL_REC_1705_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1706(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1706_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1706_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1706_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1706_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1706_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1706_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1706_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1706_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1706_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1706_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1707
#define AGONY_PP_PRIVATE_EVAL_REC_1706_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1707(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1707_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1707_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1707_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1707_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1707_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1707_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1707_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1707_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1707_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1707_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1708
#define AGONY_PP_PRIVATE_EVAL_REC_1707_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1708(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1708_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1708_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1708_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1708_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1708_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1708_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1708_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1708_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1708_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1708_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1709
#define AGONY_PP_PRIVATE_EVAL_REC_1708_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1709(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1709_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1709_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1709_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1709_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1709_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1709_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1709_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1709_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1709_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1709_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1710
#define AGONY_PP_PRIVATE_EVAL_REC_1709_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1710(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1710_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1710_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1710_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1710_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1710_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1710_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1710_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1710_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1710_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1710_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1711
#define AGONY_PP_PRIVATE_EVAL_REC_1710_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1711(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1711_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1711_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1711_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1711_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1711_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1711_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1711_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1711_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1711_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1711_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1712
#define AGONY_PP_PRIVATE_EVAL_REC_1711_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1712(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1712_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1712_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1712_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1712_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1712_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1712_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1712_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1712_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1712_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1712_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1713
#define AGONY_PP_PRIVATE_EVAL_REC_1712_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1713(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1713_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1713_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1713_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1713_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1713_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1713_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1713_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1713_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1713_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1713_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1714
#define AGONY_PP_PRIVATE_EVAL_REC_1713_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1714(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1714_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1714_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1714_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1714_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1714_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1714_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1714_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1714_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1714_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1714_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1715
#define AGONY_PP_PRIVATE_EVAL_REC_1714_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1715(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1715_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1715_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1715_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1715_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1715_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1715_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1715_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1715_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1715_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1715_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1716
#define AGONY_PP_PRIVATE_EVAL_REC_1715_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1716(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1716_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1716_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1716_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1716_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1716_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1716_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1716_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1716_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1716_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1716_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1717
#define AGONY_PP_PRIVATE_EVAL_REC_1716_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1717(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1717_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1717_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1717_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1717_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1717_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1717_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1717_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1717_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1717_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1717_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1718
#define AGONY_PP_PRIVATE_EVAL_REC_1717_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1718(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1718_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1718_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1718_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1718_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1718_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1718_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1718_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1718_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1718_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1718_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1719
#define AGONY_PP_PRIVATE_EVAL_REC_1718_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1719(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1719_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1719_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1719_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1719_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1719_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1719_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1719_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1719_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1719_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1719_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1720
#define AGONY_PP_PRIVATE_EVAL_REC_1719_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1720(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1720_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1720_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1720_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1720_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1720_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1720_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1720_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1720_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1720_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1720_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1721
#define AGONY_PP_PRIVATE_EVAL_REC_1720_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1721(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1721_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1721_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1721_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1721_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1721_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1721_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1721_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1721_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1721_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1721_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1722
#define AGONY_PP_PRIVATE_EVAL_REC_1721_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1722(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1722_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1722_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1722_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1722_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1722_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1722_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1722_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1722_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1722_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1722_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1723
#define AGONY_PP_PRIVATE_EVAL_REC_1722_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1723(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1723_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1723_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1723_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1723_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1723_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1723_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1723_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1723_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1723_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1723_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1724
#define AGONY_PP_PRIVATE_EVAL_REC_1723_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1724(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1724_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1724_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1724_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1724_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1724_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1724_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1724_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1724_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1724_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1724_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1725
#define AGONY_PP_PRIVATE_EVAL_REC_1724_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1725(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1725_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1725_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1725_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1725_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1725_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1725_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1725_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1725_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1725_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1725_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1726
#define AGONY_PP_PRIVATE_EVAL_REC_1725_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1726(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1726_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1726_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1726_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1726_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1726_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1726_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1726_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1726_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1726_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1726_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1727
#define AGONY_PP_PRIVATE_EVAL_REC_1726_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1727(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1727_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1727_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1727_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1727_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1727_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1727_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1727_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1727_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1727_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1727_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1728
#define AGONY_PP_PRIVATE_EVAL_REC_1727_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1728(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1728_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1728_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1728_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1728_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1728_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1728_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1728_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1728_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1728_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1728_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1729
#define AGONY_PP_PRIVATE_EVAL_REC_1728_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1729(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1729_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1729_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1729_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1729_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1729_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1729_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1729_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1729_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1729_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1729_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1730
#define AGONY_PP_PRIVATE_EVAL_REC_1729_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1730(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1730_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1730_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1730_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1730_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1730_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1730_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1730_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1730_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1730_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1730_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1731
#define AGONY_PP_PRIVATE_EVAL_REC_1730_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1731(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1731_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1731_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1731_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1731_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1731_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1731_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1731_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1731_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1731_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1731_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1732
#define AGONY_PP_PRIVATE_EVAL_REC_1731_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1732(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1732_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1732_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1732_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1732_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1732_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1732_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1732_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1732_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1732_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1732_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1733
#define AGONY_PP_PRIVATE_EVAL_REC_1732_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1733(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1733_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1733_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1733_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1733_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1733_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1733_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1733_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1733_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1733_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1733_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1734
#define AGONY_PP_PRIVATE_EVAL_REC_1733_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1734(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1734_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1734_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1734_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1734_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1734_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1734_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1734_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1734_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1734_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1734_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1735
#define AGONY_PP_PRIVATE_EVAL_REC_1734_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1735(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1735_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1735_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1735_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1735_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1735_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1735_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1735_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1735_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1735_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1735_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1736
#define AGONY_PP_PRIVATE_EVAL_REC_1735_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1736(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1736_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1736_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1736_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1736_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1736_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1736_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1736_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1736_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1736_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1736_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1737
#define AGONY_PP_PRIVATE_EVAL_REC_1736_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1737(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1737_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1737_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1737_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1737_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1737_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1737_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1737_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1737_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1737_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1737_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1738
#define AGONY_PP_PRIVATE_EVAL_REC_1737_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1738(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1738_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1738_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1738_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1738_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1738_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1738_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1738_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1738_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1738_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1738_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1739
#define AGONY_PP_PRIVATE_EVAL_REC_1738_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1739(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1739_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1739_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1739_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1739_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1739_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1739_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1739_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1739_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1739_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1739_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1740
#define AGONY_PP_PRIVATE_EVAL_REC_1739_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1740(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1740_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1740_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1740_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1740_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1740_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1740_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1740_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1740_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1740_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1740_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1741
#define AGONY_PP_PRIVATE_EVAL_REC_1740_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1741(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1741_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1741_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1741_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1741_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1741_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1741_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1741_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1741_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1741_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1741_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1742
#define AGONY_PP_PRIVATE_EVAL_REC_1741_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1742(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1742_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1742_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1742_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1742_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1742_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1742_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1742_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1742_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1742_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1742_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1743
#define AGONY_PP_PRIVATE_EVAL_REC_1742_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1743(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1743_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1743_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1743_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1743_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1743_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1743_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1743_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1743_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1743_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1743_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1744
#define AGONY_PP_PRIVATE_EVAL_REC_1743_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1744(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1744_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1744_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1744_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1744_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1744_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1744_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1744_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1744_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1744_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1744_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1745
#define AGONY_PP_PRIVATE_EVAL_REC_1744_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1745(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1745_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1745_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1745_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1745_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1745_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1745_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1745_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1745_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1745_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1745_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1746
#define AGONY_PP_PRIVATE_EVAL_REC_1745_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1746(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1746_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1746_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1746_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1746_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1746_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1746_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1746_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1746_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1746_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1746_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1747
#define AGONY_PP_PRIVATE_EVAL_REC_1746_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1747(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1747_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1747_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1747_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1747_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1747_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1747_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1747_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1747_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1747_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1747_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1748
#define AGONY_PP_PRIVATE_EVAL_REC_1747_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1748(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1748_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1748_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1748_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1748_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1748_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1748_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1748_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1748_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1748_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1748_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1749
#define AGONY_PP_PRIVATE_EVAL_REC_1748_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1749(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1749_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1749_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1749_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1749_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1749_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1749_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1749_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1749_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1749_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1749_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1750
#define AGONY_PP_PRIVATE_EVAL_REC_1749_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1750(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1750_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1750_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1750_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1750_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1750_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1750_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1750_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1750_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1750_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1750_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1751
#define AGONY_PP_PRIVATE_EVAL_REC_1750_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1751(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1751_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1751_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1751_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1751_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1751_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1751_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1751_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1751_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1751_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1751_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1752
#define AGONY_PP_PRIVATE_EVAL_REC_1751_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1752(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1752_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1752_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1752_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1752_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1752_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1752_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1752_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1752_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1752_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1752_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1753
#define AGONY_PP_PRIVATE_EVAL_REC_1752_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1753(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1753_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1753_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1753_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1753_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1753_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1753_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1753_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1753_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1753_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1753_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1754
#define AGONY_PP_PRIVATE_EVAL_REC_1753_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1754(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1754_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1754_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1754_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1754_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1754_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1754_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1754_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1754_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1754_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1754_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1755
#define AGONY_PP_PRIVATE_EVAL_REC_1754_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1755(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1755_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1755_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1755_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1755_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1755_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1755_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1755_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1755_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1755_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1755_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1756
#define AGONY_PP_PRIVATE_EVAL_REC_1755_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1756(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1756_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1756_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1756_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1756_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1756_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1756_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1756_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1756_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1756_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1756_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1757
#define AGONY_PP_PRIVATE_EVAL_REC_1756_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1757(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1757_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1757_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1757_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1757_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1757_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1757_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1757_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1757_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1757_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1757_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1758
#define AGONY_PP_PRIVATE_EVAL_REC_1757_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1758(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1758_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1758_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1758_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1758_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1758_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1758_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1758_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1758_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1758_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1758_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1759
#define AGONY_PP_PRIVATE_EVAL_REC_1758_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1759(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1759_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1759_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1759_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1759_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1759_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1759_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1759_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1759_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1759_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1759_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1760
#define AGONY_PP_PRIVATE_EVAL_REC_1759_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1760(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1760_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1760_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1760_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1760_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1760_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1760_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1760_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1760_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1760_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1760_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1761
#define AGONY_PP_PRIVATE_EVAL_REC_1760_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1761(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1761_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1761_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1761_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1761_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1761_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1761_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1761_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1761_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1761_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1761_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1762
#define AGONY_PP_PRIVATE_EVAL_REC_1761_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1762(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1762_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1762_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1762_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1762_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1762_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1762_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1762_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1762_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1762_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1762_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1763
#define AGONY_PP_PRIVATE_EVAL_REC_1762_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1763(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1763_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1763_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1763_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1763_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1763_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1763_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1763_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1763_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1763_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1763_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1764
#define AGONY_PP_PRIVATE_EVAL_REC_1763_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1764(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1764_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1764_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1764_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1764_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1764_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1764_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1764_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1764_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1764_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1764_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1765
#define AGONY_PP_PRIVATE_EVAL_REC_1764_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1765(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1765_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1765_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1765_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1765_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1765_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1765_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1765_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1765_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1765_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1765_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1766
#define AGONY_PP_PRIVATE_EVAL_REC_1765_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1766(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1766_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1766_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1766_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1766_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1766_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1766_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1766_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1766_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1766_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1766_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1767
#define AGONY_PP_PRIVATE_EVAL_REC_1766_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1767(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1767_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1767_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1767_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1767_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1767_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1767_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1767_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1767_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1767_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1767_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1768
#define AGONY_PP_PRIVATE_EVAL_REC_1767_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1768(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1768_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1768_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1768_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1768_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1768_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1768_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1768_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1768_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1768_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1768_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1769
#define AGONY_PP_PRIVATE_EVAL_REC_1768_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1769(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1769_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1769_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1769_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1769_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1769_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1769_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1769_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1769_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1769_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1769_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1770
#define AGONY_PP_PRIVATE_EVAL_REC_1769_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1770(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1770_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1770_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1770_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1770_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1770_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1770_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1770_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1770_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1770_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1770_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1771
#define AGONY_PP_PRIVATE_EVAL_REC_1770_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1771(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1771_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1771_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1771_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1771_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1771_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1771_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1771_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1771_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1771_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1771_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1772
#define AGONY_PP_PRIVATE_EVAL_REC_1771_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1772(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1772_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1772_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1772_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1772_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1772_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1772_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1772_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1772_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1772_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1772_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1773
#define AGONY_PP_PRIVATE_EVAL_REC_1772_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1773(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1773_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1773_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1773_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1773_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1773_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1773_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1773_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1773_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1773_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1773_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1774
#define AGONY_PP_PRIVATE_EVAL_REC_1773_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1774(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1774_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1774_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1774_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1774_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1774_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1774_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1774_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1774_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1774_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1774_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1775
#define AGONY_PP_PRIVATE_EVAL_REC_1774_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1775(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1775_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1775_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1775_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1775_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1775_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1775_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1775_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1775_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1775_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1775_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1776
#define AGONY_PP_PRIVATE_EVAL_REC_1775_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1776(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1776_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1776_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1776_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1776_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1776_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1776_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1776_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1776_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1776_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1776_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1777
#define AGONY_PP_PRIVATE_EVAL_REC_1776_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1777(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1777_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1777_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1777_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1777_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1777_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1777_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1777_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1777_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1777_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1777_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1778
#define AGONY_PP_PRIVATE_EVAL_REC_1777_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1778(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1778_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1778_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1778_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1778_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1778_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1778_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1778_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1778_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1778_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1778_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1779
#define AGONY_PP_PRIVATE_EVAL_REC_1778_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1779(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1779_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1779_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1779_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1779_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1779_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1779_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1779_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1779_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1779_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1779_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1780
#define AGONY_PP_PRIVATE_EVAL_REC_1779_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1780(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1780_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1780_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1780_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1780_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1780_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1780_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1780_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1780_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1780_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1780_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1781
#define AGONY_PP_PRIVATE_EVAL_REC_1780_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1781(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1781_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1781_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1781_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1781_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1781_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1781_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1781_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1781_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1781_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1781_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1782
#define AGONY_PP_PRIVATE_EVAL_REC_1781_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1782(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1782_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1782_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1782_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1782_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1782_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1782_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1782_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1782_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1782_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1782_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1783
#define AGONY_PP_PRIVATE_EVAL_REC_1782_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1783(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1783_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1783_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1783_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1783_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1783_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1783_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1783_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1783_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1783_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1783_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1784
#define AGONY_PP_PRIVATE_EVAL_REC_1783_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1784(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1784_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1784_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1784_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1784_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1784_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1784_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1784_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1784_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1784_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1784_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1785
#define AGONY_PP_PRIVATE_EVAL_REC_1784_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1785(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1785_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1785_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1785_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1785_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1785_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1785_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1785_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1785_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1785_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1785_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1786
#define AGONY_PP_PRIVATE_EVAL_REC_1785_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1786(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1786_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1786_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1786_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1786_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1786_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1786_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1786_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1786_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1786_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1786_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1787
#define AGONY_PP_PRIVATE_EVAL_REC_1786_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1787(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1787_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1787_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1787_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1787_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1787_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1787_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1787_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1787_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1787_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1787_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1788
#define AGONY_PP_PRIVATE_EVAL_REC_1787_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1788(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1788_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1788_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1788_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1788_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1788_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1788_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1788_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1788_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1788_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1788_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1789
#define AGONY_PP_PRIVATE_EVAL_REC_1788_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1789(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1789_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1789_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1789_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1789_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1789_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1789_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1789_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1789_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1789_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1789_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1790
#define AGONY_PP_PRIVATE_EVAL_REC_1789_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1790(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1790_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1790_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1790_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1790_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1790_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1790_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1790_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1790_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1790_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1790_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1791
#define AGONY_PP_PRIVATE_EVAL_REC_1790_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1791(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1791_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1791_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1791_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1791_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1791_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1791_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1791_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1791_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1791_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1791_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1792
#define AGONY_PP_PRIVATE_EVAL_REC_1791_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1792(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1792_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1792_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1792_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1792_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1792_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1792_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1792_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1792_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1792_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1792_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1793
#define AGONY_PP_PRIVATE_EVAL_REC_1792_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1793(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1793_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1793_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1793_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1793_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1793_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1793_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1793_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1793_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1793_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1793_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1794
#define AGONY_PP_PRIVATE_EVAL_REC_1793_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1794(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1794_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1794_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1794_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1794_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1794_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1794_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1794_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1794_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1794_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1794_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1795
#define AGONY_PP_PRIVATE_EVAL_REC_1794_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1795(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1795_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1795_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1795_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1795_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1795_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1795_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1795_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1795_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1795_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1795_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1796
#define AGONY_PP_PRIVATE_EVAL_REC_1795_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1796(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1796_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1796_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1796_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1796_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1796_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1796_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1796_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1796_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1796_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1796_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1797
#define AGONY_PP_PRIVATE_EVAL_REC_1796_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1797(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1797_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1797_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1797_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1797_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1797_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1797_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1797_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1797_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1797_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1797_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1798
#define AGONY_PP_PRIVATE_EVAL_REC_1797_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1798(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1798_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1798_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1798_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1798_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1798_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1798_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1798_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1798_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1798_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1798_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1799
#define AGONY_PP_PRIVATE_EVAL_REC_1798_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1799(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1799_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1799_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1799_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1799_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1799_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1799_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1799_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1799_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1799_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1799_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1800
#define AGONY_PP_PRIVATE_EVAL_REC_1799_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1800(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1800_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1800_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1800_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1800_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1800_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1800_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1800_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1800_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1800_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1800_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1801
#define AGONY_PP_PRIVATE_EVAL_REC_1800_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1801(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1801_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1801_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1801_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1801_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1801_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1801_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1801_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1801_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1801_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1801_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1802
#define AGONY_PP_PRIVATE_EVAL_REC_1801_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1802(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1802_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1802_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1802_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1802_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1802_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1802_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1802_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1802_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1802_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1802_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1803
#define AGONY_PP_PRIVATE_EVAL_REC_1802_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1803(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1803_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1803_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1803_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1803_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1803_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1803_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1803_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1803_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1803_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1803_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1804
#define AGONY_PP_PRIVATE_EVAL_REC_1803_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1804(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1804_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1804_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1804_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1804_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1804_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1804_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1804_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1804_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1804_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1804_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1805
#define AGONY_PP_PRIVATE_EVAL_REC_1804_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1805(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1805_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1805_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1805_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1805_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1805_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1805_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1805_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1805_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1805_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1805_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1806
#define AGONY_PP_PRIVATE_EVAL_REC_1805_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1806(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1806_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1806_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1806_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1806_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1806_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1806_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1806_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1806_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1806_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1806_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1807
#define AGONY_PP_PRIVATE_EVAL_REC_1806_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1807(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1807_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1807_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1807_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1807_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1807_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1807_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1807_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1807_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1807_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1807_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1808
#define AGONY_PP_PRIVATE_EVAL_REC_1807_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1808(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1808_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1808_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1808_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1808_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1808_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1808_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1808_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1808_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1808_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1808_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1809
#define AGONY_PP_PRIVATE_EVAL_REC_1808_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1809(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1809_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1809_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1809_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1809_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1809_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1809_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1809_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1809_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1809_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1809_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1810
#define AGONY_PP_PRIVATE_EVAL_REC_1809_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1810(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1810_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1810_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1810_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1810_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1810_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1810_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1810_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1810_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1810_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1810_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1811
#define AGONY_PP_PRIVATE_EVAL_REC_1810_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1811(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1811_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1811_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1811_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1811_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1811_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1811_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1811_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1811_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1811_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1811_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1812
#define AGONY_PP_PRIVATE_EVAL_REC_1811_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1812(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1812_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1812_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1812_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1812_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1812_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1812_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1812_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1812_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1812_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1812_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1813
#define AGONY_PP_PRIVATE_EVAL_REC_1812_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1813(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1813_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1813_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1813_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1813_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1813_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1813_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1813_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1813_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1813_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1813_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1814
#define AGONY_PP_PRIVATE_EVAL_REC_1813_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1814(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1814_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1814_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1814_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1814_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1814_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1814_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1814_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1814_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1814_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1814_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1815
#define AGONY_PP_PRIVATE_EVAL_REC_1814_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1815(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1815_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1815_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1815_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1815_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1815_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1815_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1815_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1815_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1815_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1815_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1816
#define AGONY_PP_PRIVATE_EVAL_REC_1815_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1816(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1816_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1816_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1816_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1816_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1816_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1816_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1816_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1816_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1816_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1816_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1817
#define AGONY_PP_PRIVATE_EVAL_REC_1816_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1817(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1817_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1817_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1817_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1817_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1817_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1817_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1817_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1817_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1817_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1817_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1818
#define AGONY_PP_PRIVATE_EVAL_REC_1817_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1818(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1818_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1818_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1818_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1818_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1818_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1818_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1818_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1818_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1818_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1818_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1819
#define AGONY_PP_PRIVATE_EVAL_REC_1818_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1819(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1819_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1819_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1819_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1819_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1819_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1819_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1819_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1819_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1819_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1819_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1820
#define AGONY_PP_PRIVATE_EVAL_REC_1819_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1820(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1820_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1820_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1820_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1820_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1820_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1820_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1820_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1820_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1820_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1820_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1821
#define AGONY_PP_PRIVATE_EVAL_REC_1820_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1821(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1821_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1821_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1821_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1821_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1821_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1821_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1821_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1821_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1821_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1821_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1822
#define AGONY_PP_PRIVATE_EVAL_REC_1821_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1822(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1822_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1822_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1822_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1822_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1822_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1822_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1822_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1822_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1822_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1822_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1823
#define AGONY_PP_PRIVATE_EVAL_REC_1822_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1823(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1823_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1823_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1823_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1823_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1823_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1823_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1823_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1823_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1823_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1823_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1824
#define AGONY_PP_PRIVATE_EVAL_REC_1823_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1824(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1824_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1824_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1824_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1824_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1824_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1824_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1824_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1824_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1824_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1824_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1825
#define AGONY_PP_PRIVATE_EVAL_REC_1824_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1825(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1825_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1825_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1825_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1825_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1825_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1825_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1825_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1825_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1825_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1825_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1826
#define AGONY_PP_PRIVATE_EVAL_REC_1825_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1826(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1826_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1826_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1826_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1826_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1826_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1826_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1826_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1826_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1826_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1826_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1827
#define AGONY_PP_PRIVATE_EVAL_REC_1826_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1827(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1827_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1827_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1827_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1827_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1827_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1827_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1827_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1827_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1827_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1827_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1828
#define AGONY_PP_PRIVATE_EVAL_REC_1827_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1828(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1828_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1828_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1828_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1828_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1828_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1828_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1828_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1828_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1828_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1828_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1829
#define AGONY_PP_PRIVATE_EVAL_REC_1828_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1829(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1829_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1829_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1829_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1829_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1829_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1829_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1829_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1829_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1829_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1829_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1830
#define AGONY_PP_PRIVATE_EVAL_REC_1829_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1830(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1830_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1830_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1830_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1830_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1830_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1830_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1830_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1830_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1830_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1830_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1831
#define AGONY_PP_PRIVATE_EVAL_REC_1830_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1831(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1831_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1831_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1831_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1831_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1831_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1831_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1831_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1831_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1831_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1831_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1832
#define AGONY_PP_PRIVATE_EVAL_REC_1831_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1832(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1832_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1832_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1832_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1832_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1832_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1832_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1832_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1832_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1832_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1832_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1833
#define AGONY_PP_PRIVATE_EVAL_REC_1832_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1833(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1833_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1833_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1833_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1833_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1833_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1833_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1833_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1833_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1833_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1833_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1834
#define AGONY_PP_PRIVATE_EVAL_REC_1833_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1834(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1834_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1834_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1834_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1834_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1834_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1834_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1834_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1834_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1834_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1834_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1835
#define AGONY_PP_PRIVATE_EVAL_REC_1834_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1835(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1835_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1835_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1835_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1835_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1835_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1835_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1835_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1835_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1835_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1835_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1836
#define AGONY_PP_PRIVATE_EVAL_REC_1835_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1836(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1836_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1836_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1836_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1836_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1836_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1836_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1836_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1836_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1836_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1836_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1837
#define AGONY_PP_PRIVATE_EVAL_REC_1836_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1837(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1837_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1837_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1837_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1837_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1837_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1837_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1837_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1837_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1837_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1837_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1838
#define AGONY_PP_PRIVATE_EVAL_REC_1837_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1838(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1838_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1838_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1838_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1838_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1838_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1838_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1838_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1838_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1838_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1838_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1839
#define AGONY_PP_PRIVATE_EVAL_REC_1838_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1839(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1839_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1839_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1839_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1839_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1839_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1839_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1839_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1839_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1839_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1839_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1840
#define AGONY_PP_PRIVATE_EVAL_REC_1839_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1840(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1840_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1840_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1840_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1840_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1840_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1840_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1840_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1840_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1840_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1840_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1841
#define AGONY_PP_PRIVATE_EVAL_REC_1840_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1841(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1841_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1841_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1841_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1841_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1841_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1841_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1841_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1841_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1841_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1841_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1842
#define AGONY_PP_PRIVATE_EVAL_REC_1841_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1842(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1842_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1842_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1842_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1842_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1842_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1842_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1842_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1842_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1842_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1842_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1843
#define AGONY_PP_PRIVATE_EVAL_REC_1842_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1843(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1843_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1843_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1843_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1843_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1843_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1843_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1843_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1843_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1843_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1843_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1844
#define AGONY_PP_PRIVATE_EVAL_REC_1843_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1844(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1844_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1844_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1844_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1844_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1844_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1844_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1844_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1844_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1844_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1844_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1845
#define AGONY_PP_PRIVATE_EVAL_REC_1844_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1845(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1845_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1845_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1845_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1845_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1845_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1845_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1845_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1845_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1845_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1845_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1846
#define AGONY_PP_PRIVATE_EVAL_REC_1845_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1846(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1846_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1846_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1846_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1846_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1846_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1846_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1846_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1846_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1846_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1846_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1847
#define AGONY_PP_PRIVATE_EVAL_REC_1846_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1847(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1847_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1847_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1847_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1847_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1847_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1847_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1847_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1847_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1847_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1847_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1848
#define AGONY_PP_PRIVATE_EVAL_REC_1847_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1848(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1848_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1848_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1848_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1848_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1848_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1848_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1848_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1848_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1848_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1848_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1849
#define AGONY_PP_PRIVATE_EVAL_REC_1848_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1849(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1849_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1849_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1849_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1849_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1849_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1849_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1849_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1849_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1849_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1849_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1850
#define AGONY_PP_PRIVATE_EVAL_REC_1849_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1850(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1850_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1850_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1850_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1850_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1850_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1850_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1850_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1850_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1850_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1850_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1851
#define AGONY_PP_PRIVATE_EVAL_REC_1850_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1851(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1851_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1851_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1851_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1851_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1851_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1851_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1851_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1851_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1851_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1851_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1852
#define AGONY_PP_PRIVATE_EVAL_REC_1851_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1852(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1852_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1852_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1852_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1852_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1852_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1852_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1852_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1852_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1852_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1852_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1853
#define AGONY_PP_PRIVATE_EVAL_REC_1852_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1853(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1853_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1853_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1853_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1853_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1853_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1853_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1853_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1853_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1853_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1853_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1854
#define AGONY_PP_PRIVATE_EVAL_REC_1853_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1854(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1854_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1854_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1854_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1854_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1854_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1854_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1854_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1854_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1854_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1854_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1855
#define AGONY_PP_PRIVATE_EVAL_REC_1854_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1855(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1855_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1855_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1855_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1855_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1855_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1855_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1855_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1855_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1855_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1855_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1856
#define AGONY_PP_PRIVATE_EVAL_REC_1855_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1856(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1856_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1856_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1856_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1856_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1856_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1856_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1856_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1856_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1856_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1856_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1857
#define AGONY_PP_PRIVATE_EVAL_REC_1856_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1857(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1857_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1857_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1857_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1857_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1857_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1857_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1857_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1857_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1857_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1857_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1858
#define AGONY_PP_PRIVATE_EVAL_REC_1857_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1858(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1858_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1858_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1858_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1858_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1858_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1858_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1858_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1858_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1858_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1858_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1859
#define AGONY_PP_PRIVATE_EVAL_REC_1858_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1859(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1859_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1859_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1859_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1859_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1859_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1859_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1859_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1859_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1859_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1859_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1860
#define AGONY_PP_PRIVATE_EVAL_REC_1859_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1860(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1860_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1860_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1860_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1860_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1860_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1860_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1860_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1860_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1860_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1860_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1861
#define AGONY_PP_PRIVATE_EVAL_REC_1860_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1861(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1861_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1861_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1861_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1861_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1861_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1861_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1861_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1861_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1861_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1861_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1862
#define AGONY_PP_PRIVATE_EVAL_REC_1861_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1862(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1862_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1862_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1862_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1862_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1862_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1862_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1862_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1862_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1862_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1862_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1863
#define AGONY_PP_PRIVATE_EVAL_REC_1862_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1863(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1863_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1863_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1863_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1863_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1863_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1863_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1863_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1863_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1863_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1863_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1864
#define AGONY_PP_PRIVATE_EVAL_REC_1863_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1864(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1864_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1864_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1864_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1864_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1864_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1864_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1864_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1864_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1864_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1864_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1865
#define AGONY_PP_PRIVATE_EVAL_REC_1864_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1865(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1865_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1865_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1865_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1865_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1865_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1865_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1865_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1865_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1865_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1865_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1866
#define AGONY_PP_PRIVATE_EVAL_REC_1865_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1866(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1866_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1866_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1866_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1866_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1866_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1866_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1866_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1866_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1866_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1866_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1867
#define AGONY_PP_PRIVATE_EVAL_REC_1866_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1867(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1867_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1867_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1867_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1867_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1867_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1867_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1867_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1867_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1867_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1867_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1868
#define AGONY_PP_PRIVATE_EVAL_REC_1867_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1868(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1868_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1868_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1868_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1868_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1868_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1868_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1868_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1868_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1868_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1868_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1869
#define AGONY_PP_PRIVATE_EVAL_REC_1868_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1869(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1869_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1869_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1869_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1869_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1869_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1869_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1869_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1869_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1869_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1869_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1870
#define AGONY_PP_PRIVATE_EVAL_REC_1869_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1870(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1870_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1870_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1870_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1870_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1870_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1870_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1870_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1870_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1870_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1870_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1871
#define AGONY_PP_PRIVATE_EVAL_REC_1870_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1871(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1871_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1871_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1871_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1871_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1871_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1871_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1871_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1871_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1871_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1871_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1872
#define AGONY_PP_PRIVATE_EVAL_REC_1871_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1872(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1872_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1872_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1872_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1872_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1872_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1872_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1872_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1872_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1872_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1872_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1873
#define AGONY_PP_PRIVATE_EVAL_REC_1872_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1873(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1873_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1873_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1873_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1873_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1873_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1873_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1873_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1873_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1873_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1873_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1874
#define AGONY_PP_PRIVATE_EVAL_REC_1873_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1874(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1874_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1874_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1874_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1874_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1874_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1874_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1874_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1874_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1874_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1874_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1875
#define AGONY_PP_PRIVATE_EVAL_REC_1874_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1875(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1875_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1875_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1875_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1875_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1875_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1875_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1875_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1875_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1875_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1875_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1876
#define AGONY_PP_PRIVATE_EVAL_REC_1875_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1876(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1876_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1876_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1876_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1876_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1876_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1876_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1876_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1876_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1876_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1876_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1877
#define AGONY_PP_PRIVATE_EVAL_REC_1876_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1877(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1877_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1877_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1877_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1877_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1877_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1877_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1877_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1877_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1877_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1877_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1878
#define AGONY_PP_PRIVATE_EVAL_REC_1877_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1878(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1878_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1878_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1878_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1878_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1878_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1878_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1878_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1878_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1878_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1878_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1879
#define AGONY_PP_PRIVATE_EVAL_REC_1878_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1879(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1879_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1879_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1879_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1879_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1879_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1879_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1879_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1879_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1879_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1879_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1880
#define AGONY_PP_PRIVATE_EVAL_REC_1879_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1880(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1880_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1880_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1880_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1880_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1880_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1880_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1880_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1880_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1880_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1880_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1881
#define AGONY_PP_PRIVATE_EVAL_REC_1880_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1881(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1881_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1881_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1881_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1881_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1881_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1881_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1881_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1881_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1881_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1881_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1882
#define AGONY_PP_PRIVATE_EVAL_REC_1881_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1882(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1882_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1882_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1882_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1882_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1882_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1882_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1882_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1882_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1882_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1882_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1883
#define AGONY_PP_PRIVATE_EVAL_REC_1882_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1883(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1883_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1883_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1883_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1883_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1883_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1883_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1883_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1883_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1883_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1883_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1884
#define AGONY_PP_PRIVATE_EVAL_REC_1883_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1884(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1884_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1884_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1884_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1884_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1884_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1884_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1884_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1884_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1884_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1884_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1885
#define AGONY_PP_PRIVATE_EVAL_REC_1884_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1885(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1885_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1885_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1885_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1885_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1885_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1885_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1885_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1885_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1885_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1885_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1886
#define AGONY_PP_PRIVATE_EVAL_REC_1885_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1886(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1886_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1886_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1886_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1886_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1886_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1886_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1886_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1886_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1886_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1886_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1887
#define AGONY_PP_PRIVATE_EVAL_REC_1886_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1887(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1887_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1887_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1887_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1887_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1887_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1887_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1887_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1887_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1887_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1887_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1888
#define AGONY_PP_PRIVATE_EVAL_REC_1887_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1888(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1888_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1888_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1888_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1888_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1888_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1888_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1888_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1888_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1888_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1888_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1889
#define AGONY_PP_PRIVATE_EVAL_REC_1888_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1889(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1889_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1889_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1889_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1889_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1889_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1889_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1889_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1889_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1889_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1889_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1890
#define AGONY_PP_PRIVATE_EVAL_REC_1889_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1890(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1890_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1890_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1890_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1890_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1890_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1890_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1890_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1890_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1890_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1890_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1891
#define AGONY_PP_PRIVATE_EVAL_REC_1890_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1891(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1891_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1891_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1891_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1891_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1891_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1891_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1891_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1891_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1891_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1891_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1892
#define AGONY_PP_PRIVATE_EVAL_REC_1891_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1892(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1892_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1892_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1892_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1892_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1892_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1892_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1892_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1892_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1892_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1892_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1893
#define AGONY_PP_PRIVATE_EVAL_REC_1892_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1893(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1893_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1893_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1893_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1893_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1893_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1893_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1893_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1893_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1893_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1893_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1894
#define AGONY_PP_PRIVATE_EVAL_REC_1893_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1894(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1894_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1894_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1894_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1894_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1894_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1894_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1894_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1894_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1894_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1894_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1895
#define AGONY_PP_PRIVATE_EVAL_REC_1894_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1895(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1895_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1895_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1895_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1895_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1895_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1895_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1895_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1895_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1895_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1895_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1896
#define AGONY_PP_PRIVATE_EVAL_REC_1895_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1896(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1896_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1896_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1896_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1896_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1896_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1896_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1896_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1896_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1896_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1896_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1897
#define AGONY_PP_PRIVATE_EVAL_REC_1896_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1897(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1897_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1897_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1897_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1897_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1897_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1897_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1897_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1897_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1897_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1897_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1898
#define AGONY_PP_PRIVATE_EVAL_REC_1897_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1898(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1898_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1898_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1898_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1898_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1898_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1898_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1898_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1898_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1898_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1898_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1899
#define AGONY_PP_PRIVATE_EVAL_REC_1898_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1899(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1899_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1899_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1899_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1899_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1899_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1899_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1899_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1899_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1899_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1899_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1900
#define AGONY_PP_PRIVATE_EVAL_REC_1899_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1900(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1900_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1900_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1900_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1900_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1900_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1900_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1900_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1900_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1900_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1900_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1901
#define AGONY_PP_PRIVATE_EVAL_REC_1900_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1901(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1901_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1901_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1901_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1901_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1901_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1901_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1901_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1901_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1901_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1901_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1902
#define AGONY_PP_PRIVATE_EVAL_REC_1901_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1902(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1902_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1902_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1902_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1902_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1902_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1902_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1902_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1902_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1902_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1902_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1903
#define AGONY_PP_PRIVATE_EVAL_REC_1902_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1903(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1903_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1903_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1903_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1903_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1903_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1903_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1903_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1903_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1903_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1903_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1904
#define AGONY_PP_PRIVATE_EVAL_REC_1903_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1904(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1904_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1904_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1904_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1904_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1904_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1904_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1904_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1904_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1904_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1904_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1905
#define AGONY_PP_PRIVATE_EVAL_REC_1904_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1905(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1905_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1905_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1905_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1905_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1905_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1905_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1905_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1905_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1905_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1905_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1906
#define AGONY_PP_PRIVATE_EVAL_REC_1905_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1906(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1906_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1906_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1906_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1906_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1906_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1906_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1906_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1906_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1906_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1906_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1907
#define AGONY_PP_PRIVATE_EVAL_REC_1906_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1907(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1907_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1907_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1907_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1907_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1907_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1907_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1907_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1907_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1907_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1907_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1908
#define AGONY_PP_PRIVATE_EVAL_REC_1907_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1908(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1908_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1908_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1908_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1908_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1908_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1908_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1908_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1908_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1908_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1908_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1909
#define AGONY_PP_PRIVATE_EVAL_REC_1908_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1909(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1909_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1909_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1909_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1909_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1909_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1909_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1909_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1909_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1909_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1909_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1910
#define AGONY_PP_PRIVATE_EVAL_REC_1909_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1910(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1910_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1910_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1910_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1910_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1910_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1910_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1910_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1910_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1910_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1910_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1911
#define AGONY_PP_PRIVATE_EVAL_REC_1910_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1911(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1911_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1911_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1911_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1911_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1911_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1911_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1911_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1911_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1911_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1911_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1912
#define AGONY_PP_PRIVATE_EVAL_REC_1911_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1912(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1912_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1912_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1912_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1912_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1912_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1912_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1912_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1912_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1912_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1912_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1913
#define AGONY_PP_PRIVATE_EVAL_REC_1912_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1913(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1913_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1913_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1913_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1913_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1913_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1913_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1913_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1913_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1913_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1913_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1914
#define AGONY_PP_PRIVATE_EVAL_REC_1913_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1914(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1914_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1914_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1914_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1914_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1914_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1914_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1914_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1914_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1914_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1914_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1915
#define AGONY_PP_PRIVATE_EVAL_REC_1914_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1915(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1915_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1915_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1915_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1915_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1915_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1915_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1915_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1915_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1915_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1915_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1916
#define AGONY_PP_PRIVATE_EVAL_REC_1915_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1916(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1916_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1916_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1916_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1916_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1916_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1916_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1916_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1916_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1916_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1916_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1917
#define AGONY_PP_PRIVATE_EVAL_REC_1916_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1917(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1917_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1917_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1917_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1917_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1917_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1917_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1917_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1917_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1917_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1917_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1918
#define AGONY_PP_PRIVATE_EVAL_REC_1917_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1918(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1918_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1918_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1918_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1918_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1918_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1918_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1918_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1918_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1918_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1918_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1919
#define AGONY_PP_PRIVATE_EVAL_REC_1918_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1919(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1919_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1919_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1919_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1919_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1919_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1919_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1919_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1919_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1919_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1919_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1920
#define AGONY_PP_PRIVATE_EVAL_REC_1919_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1920(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1920_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1920_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1920_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1920_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1920_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1920_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1920_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1920_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1920_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1920_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1921
#define AGONY_PP_PRIVATE_EVAL_REC_1920_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1921(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1921_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1921_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1921_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1921_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1921_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1921_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1921_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1921_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1921_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1921_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1922
#define AGONY_PP_PRIVATE_EVAL_REC_1921_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1922(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1922_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1922_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1922_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1922_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1922_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1922_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1922_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1922_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1922_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1922_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1923
#define AGONY_PP_PRIVATE_EVAL_REC_1922_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1923(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1923_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1923_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1923_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1923_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1923_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1923_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1923_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1923_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1923_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1923_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1924
#define AGONY_PP_PRIVATE_EVAL_REC_1923_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1924(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1924_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1924_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1924_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1924_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1924_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1924_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1924_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1924_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1924_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1924_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1925
#define AGONY_PP_PRIVATE_EVAL_REC_1924_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1925(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1925_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1925_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1925_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1925_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1925_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1925_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1925_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1925_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1925_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1925_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1926
#define AGONY_PP_PRIVATE_EVAL_REC_1925_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1926(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1926_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1926_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1926_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1926_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1926_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1926_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1926_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1926_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1926_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1926_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1927
#define AGONY_PP_PRIVATE_EVAL_REC_1926_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1927(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1927_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1927_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1927_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1927_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1927_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1927_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1927_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1927_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1927_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1927_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1928
#define AGONY_PP_PRIVATE_EVAL_REC_1927_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1928(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1928_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1928_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1928_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1928_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1928_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1928_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1928_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1928_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1928_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1928_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1929
#define AGONY_PP_PRIVATE_EVAL_REC_1928_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1929(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1929_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1929_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1929_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1929_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1929_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1929_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1929_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1929_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1929_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1929_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1930
#define AGONY_PP_PRIVATE_EVAL_REC_1929_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1930(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1930_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1930_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1930_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1930_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1930_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1930_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1930_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1930_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1930_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1930_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1931
#define AGONY_PP_PRIVATE_EVAL_REC_1930_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1931(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1931_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1931_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1931_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1931_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1931_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1931_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1931_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1931_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1931_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1931_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1932
#define AGONY_PP_PRIVATE_EVAL_REC_1931_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1932(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1932_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1932_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1932_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1932_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1932_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1932_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1932_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1932_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1932_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1932_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1933
#define AGONY_PP_PRIVATE_EVAL_REC_1932_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1933(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1933_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1933_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1933_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1933_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1933_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1933_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1933_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1933_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1933_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1933_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1934
#define AGONY_PP_PRIVATE_EVAL_REC_1933_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1934(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1934_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1934_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1934_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1934_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1934_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1934_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1934_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1934_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1934_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1934_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1935
#define AGONY_PP_PRIVATE_EVAL_REC_1934_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1935(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1935_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1935_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1935_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1935_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1935_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1935_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1935_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1935_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1935_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1935_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1936
#define AGONY_PP_PRIVATE_EVAL_REC_1935_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1936(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1936_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1936_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1936_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1936_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1936_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1936_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1936_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1936_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1936_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1936_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1937
#define AGONY_PP_PRIVATE_EVAL_REC_1936_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1937(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1937_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1937_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1937_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1937_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1937_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1937_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1937_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1937_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1937_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1937_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1938
#define AGONY_PP_PRIVATE_EVAL_REC_1937_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1938(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1938_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1938_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1938_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1938_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1938_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1938_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1938_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1938_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1938_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1938_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1939
#define AGONY_PP_PRIVATE_EVAL_REC_1938_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1939(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1939_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1939_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1939_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1939_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1939_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1939_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1939_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1939_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1939_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1939_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1940
#define AGONY_PP_PRIVATE_EVAL_REC_1939_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1940(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1940_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1940_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1940_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1940_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1940_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1940_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1940_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1940_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1940_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1940_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1941
#define AGONY_PP_PRIVATE_EVAL_REC_1940_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1941(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1941_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1941_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1941_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1941_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1941_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1941_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1941_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1941_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1941_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1941_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1942
#define AGONY_PP_PRIVATE_EVAL_REC_1941_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1942(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1942_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1942_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1942_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1942_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1942_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1942_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1942_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1942_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1942_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1942_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1943
#define AGONY_PP_PRIVATE_EVAL_REC_1942_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1943(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1943_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1943_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1943_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1943_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1943_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1943_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1943_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1943_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1943_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1943_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1944
#define AGONY_PP_PRIVATE_EVAL_REC_1943_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1944(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1944_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1944_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1944_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1944_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1944_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1944_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1944_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1944_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1944_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1944_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1945
#define AGONY_PP_PRIVATE_EVAL_REC_1944_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1945(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1945_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1945_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1945_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1945_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1945_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1945_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1945_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1945_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1945_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1945_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1946
#define AGONY_PP_PRIVATE_EVAL_REC_1945_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1946(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1946_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1946_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1946_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1946_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1946_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1946_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1946_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1946_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1946_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1946_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1947
#define AGONY_PP_PRIVATE_EVAL_REC_1946_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1947(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1947_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1947_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1947_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1947_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1947_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1947_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1947_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1947_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1947_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1947_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1948
#define AGONY_PP_PRIVATE_EVAL_REC_1947_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1948(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1948_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1948_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1948_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1948_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1948_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1948_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1948_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1948_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1948_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1948_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1949
#define AGONY_PP_PRIVATE_EVAL_REC_1948_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1949(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1949_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1949_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1949_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1949_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1949_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1949_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1949_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1949_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1949_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1949_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1950
#define AGONY_PP_PRIVATE_EVAL_REC_1949_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1950(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1950_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1950_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1950_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1950_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1950_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1950_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1950_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1950_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1950_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1950_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1951
#define AGONY_PP_PRIVATE_EVAL_REC_1950_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1951(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1951_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1951_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1951_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1951_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1951_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1951_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1951_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1951_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1951_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1951_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1952
#define AGONY_PP_PRIVATE_EVAL_REC_1951_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1952(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1952_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1952_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1952_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1952_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1952_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1952_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1952_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1952_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1952_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1952_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1953
#define AGONY_PP_PRIVATE_EVAL_REC_1952_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1953(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1953_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1953_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1953_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1953_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1953_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1953_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1953_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1953_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1953_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1953_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1954
#define AGONY_PP_PRIVATE_EVAL_REC_1953_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1954(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1954_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1954_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1954_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1954_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1954_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1954_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1954_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1954_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1954_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1954_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1955
#define AGONY_PP_PRIVATE_EVAL_REC_1954_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1955(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1955_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1955_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1955_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1955_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1955_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1955_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1955_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1955_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1955_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1955_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1956
#define AGONY_PP_PRIVATE_EVAL_REC_1955_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1956(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1956_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1956_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1956_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1956_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1956_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1956_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1956_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1956_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1956_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1956_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1957
#define AGONY_PP_PRIVATE_EVAL_REC_1956_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1957(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1957_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1957_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1957_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1957_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1957_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1957_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1957_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1957_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1957_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1957_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1958
#define AGONY_PP_PRIVATE_EVAL_REC_1957_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1958(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1958_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1958_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1958_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1958_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1958_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1958_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1958_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1958_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1958_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1958_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1959
#define AGONY_PP_PRIVATE_EVAL_REC_1958_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1959(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1959_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1959_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1959_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1959_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1959_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1959_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1959_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1959_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1959_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1959_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1960
#define AGONY_PP_PRIVATE_EVAL_REC_1959_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1960(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1960_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1960_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1960_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1960_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1960_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1960_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1960_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1960_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1960_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1960_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1961
#define AGONY_PP_PRIVATE_EVAL_REC_1960_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1961(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1961_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1961_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1961_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1961_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1961_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1961_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1961_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1961_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1961_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1961_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1962
#define AGONY_PP_PRIVATE_EVAL_REC_1961_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1962(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1962_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1962_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1962_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1962_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1962_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1962_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1962_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1962_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1962_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1962_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1963
#define AGONY_PP_PRIVATE_EVAL_REC_1962_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1963(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1963_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1963_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1963_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1963_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1963_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1963_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1963_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1963_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1963_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1963_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1964
#define AGONY_PP_PRIVATE_EVAL_REC_1963_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1964(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1964_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1964_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1964_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1964_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1964_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1964_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1964_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1964_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1964_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1964_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1965
#define AGONY_PP_PRIVATE_EVAL_REC_1964_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1965(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1965_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1965_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1965_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1965_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1965_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1965_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1965_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1965_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1965_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1965_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1966
#define AGONY_PP_PRIVATE_EVAL_REC_1965_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1966(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1966_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1966_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1966_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1966_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1966_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1966_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1966_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1966_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1966_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1966_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1967
#define AGONY_PP_PRIVATE_EVAL_REC_1966_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1967(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1967_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1967_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1967_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1967_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1967_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1967_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1967_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1967_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1967_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1967_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1968
#define AGONY_PP_PRIVATE_EVAL_REC_1967_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1968(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1968_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1968_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1968_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1968_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1968_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1968_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1968_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1968_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1968_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1968_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1969
#define AGONY_PP_PRIVATE_EVAL_REC_1968_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1969(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1969_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1969_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1969_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1969_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1969_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1969_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1969_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1969_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1969_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1969_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1970
#define AGONY_PP_PRIVATE_EVAL_REC_1969_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1970(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1970_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1970_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1970_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1970_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1970_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1970_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1970_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1970_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1970_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1970_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1971
#define AGONY_PP_PRIVATE_EVAL_REC_1970_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1971(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1971_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1971_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1971_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1971_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1971_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1971_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1971_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1971_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1971_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1971_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1972
#define AGONY_PP_PRIVATE_EVAL_REC_1971_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1972(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1972_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1972_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1972_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1972_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1972_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1972_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1972_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1972_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1972_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1972_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1973
#define AGONY_PP_PRIVATE_EVAL_REC_1972_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1973(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1973_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1973_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1973_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1973_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1973_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1973_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1973_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1973_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1973_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1973_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1974
#define AGONY_PP_PRIVATE_EVAL_REC_1973_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1974(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1974_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1974_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1974_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1974_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1974_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1974_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1974_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1974_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1974_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1974_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1975
#define AGONY_PP_PRIVATE_EVAL_REC_1974_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1975(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1975_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1975_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1975_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1975_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1975_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1975_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1975_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1975_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1975_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1975_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1976
#define AGONY_PP_PRIVATE_EVAL_REC_1975_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1976(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1976_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1976_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1976_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1976_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1976_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1976_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1976_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1976_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1976_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1976_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1977
#define AGONY_PP_PRIVATE_EVAL_REC_1976_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1977(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1977_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1977_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1977_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1977_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1977_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1977_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1977_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1977_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1977_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1977_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1978
#define AGONY_PP_PRIVATE_EVAL_REC_1977_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1978(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1978_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1978_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1978_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1978_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1978_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1978_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1978_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1978_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1978_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1978_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1979
#define AGONY_PP_PRIVATE_EVAL_REC_1978_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1979(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1979_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1979_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1979_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1979_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1979_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1979_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1979_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1979_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1979_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1979_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1980
#define AGONY_PP_PRIVATE_EVAL_REC_1979_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1980(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1980_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1980_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1980_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1980_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1980_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1980_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1980_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1980_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1980_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1980_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1981
#define AGONY_PP_PRIVATE_EVAL_REC_1980_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1981(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1981_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1981_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1981_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1981_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1981_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1981_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1981_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1981_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1981_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1981_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1982
#define AGONY_PP_PRIVATE_EVAL_REC_1981_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1982(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1982_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1982_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1982_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1982_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1982_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1982_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1982_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1982_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1982_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1982_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1983
#define AGONY_PP_PRIVATE_EVAL_REC_1982_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1983(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1983_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1983_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1983_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1983_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1983_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1983_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1983_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1983_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1983_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1983_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1984
#define AGONY_PP_PRIVATE_EVAL_REC_1983_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1984(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1984_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1984_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1984_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1984_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1984_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1984_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1984_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1984_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1984_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1984_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1985
#define AGONY_PP_PRIVATE_EVAL_REC_1984_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1985(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1985_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1985_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1985_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1985_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1985_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1985_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1985_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1985_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1985_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1985_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1986
#define AGONY_PP_PRIVATE_EVAL_REC_1985_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1986(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1986_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1986_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1986_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1986_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1986_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1986_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1986_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1986_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1986_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1986_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1987
#define AGONY_PP_PRIVATE_EVAL_REC_1986_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1987(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1987_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1987_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1987_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1987_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1987_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1987_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1987_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1987_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1987_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1987_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1988
#define AGONY_PP_PRIVATE_EVAL_REC_1987_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1988(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1988_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1988_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1988_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1988_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1988_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1988_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1988_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1988_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1988_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1988_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1989
#define AGONY_PP_PRIVATE_EVAL_REC_1988_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1989(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1989_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1989_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1989_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1989_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1989_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1989_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1989_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1989_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1989_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1989_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1990
#define AGONY_PP_PRIVATE_EVAL_REC_1989_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1990(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1990_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1990_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1990_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1990_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1990_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1990_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1990_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1990_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1990_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1990_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1991
#define AGONY_PP_PRIVATE_EVAL_REC_1990_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1991(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1991_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1991_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1991_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1991_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1991_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1991_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1991_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1991_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1991_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1991_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1992
#define AGONY_PP_PRIVATE_EVAL_REC_1991_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1992(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1992_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1992_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1992_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1992_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1992_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1992_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1992_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1992_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1992_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1992_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1993
#define AGONY_PP_PRIVATE_EVAL_REC_1992_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1993(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1993_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1993_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1993_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1993_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1993_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1993_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1993_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1993_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1993_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1993_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1994
#define AGONY_PP_PRIVATE_EVAL_REC_1993_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1994(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1994_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1994_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1994_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1994_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1994_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1994_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1994_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1994_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1994_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1994_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1995
#define AGONY_PP_PRIVATE_EVAL_REC_1994_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1995(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1995_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1995_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1995_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1995_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1995_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1995_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1995_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1995_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1995_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1995_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1996
#define AGONY_PP_PRIVATE_EVAL_REC_1995_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1996(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1996_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1996_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1996_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1996_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1996_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1996_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1996_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1996_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1996_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1996_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1997
#define AGONY_PP_PRIVATE_EVAL_REC_1996_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1997(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1997_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1997_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1997_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1997_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1997_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1997_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1997_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1997_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1997_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1997_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1998
#define AGONY_PP_PRIVATE_EVAL_REC_1997_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1998(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1998_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1998_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1998_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1998_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1998_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1998_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1998_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1998_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1998_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1998_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1999
#define AGONY_PP_PRIVATE_EVAL_REC_1998_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1999(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1999_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1999_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1999_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1999_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1999_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1999_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1999_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1999_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1999_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1999_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2000
#define AGONY_PP_PRIVATE_EVAL_REC_1999_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2000(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2000_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2000_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2000_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2000_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2000_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2000_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2000_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2000_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2000_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2000_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2001
#define AGONY_PP_PRIVATE_EVAL_REC_2000_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2001(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2001_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2001_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2001_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2001_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2001_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2001_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2001_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2001_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2001_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2001_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2002
#define AGONY_PP_PRIVATE_EVAL_REC_2001_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2002(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2002_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2002_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2002_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2002_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2002_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2002_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2002_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2002_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2002_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2002_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2003
#define AGONY_PP_PRIVATE_EVAL_REC_2002_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2003(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2003_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2003_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2003_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2003_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2003_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2003_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2003_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2003_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2003_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2003_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2004
#define AGONY_PP_PRIVATE_EVAL_REC_2003_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2004(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2004_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2004_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2004_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2004_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2004_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2004_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2004_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2004_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2004_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2004_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2005
#define AGONY_PP_PRIVATE_EVAL_REC_2004_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2005(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2005_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2005_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2005_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2005_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2005_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2005_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2005_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2005_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2005_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2005_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2006
#define AGONY_PP_PRIVATE_EVAL_REC_2005_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2006(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2006_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2006_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2006_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2006_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2006_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2006_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2006_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2006_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2006_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2006_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2007
#define AGONY_PP_PRIVATE_EVAL_REC_2006_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2007(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2007_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2007_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2007_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2007_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2007_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2007_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2007_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2007_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2007_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2007_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2008
#define AGONY_PP_PRIVATE_EVAL_REC_2007_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2008(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2008_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2008_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2008_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2008_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2008_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2008_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2008_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2008_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2008_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2008_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2009
#define AGONY_PP_PRIVATE_EVAL_REC_2008_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2009(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2009_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2009_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2009_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2009_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2009_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2009_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2009_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2009_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2009_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2009_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2010
#define AGONY_PP_PRIVATE_EVAL_REC_2009_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2010(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2010_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2010_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2010_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2010_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2010_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2010_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2010_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2010_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2010_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2010_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2011
#define AGONY_PP_PRIVATE_EVAL_REC_2010_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2011(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2011_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2011_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2011_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2011_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2011_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2011_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2011_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2011_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2011_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2011_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2012
#define AGONY_PP_PRIVATE_EVAL_REC_2011_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2012(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2012_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2012_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2012_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2012_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2012_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2012_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2012_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2012_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2012_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2012_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2013
#define AGONY_PP_PRIVATE_EVAL_REC_2012_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2013(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2013_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2013_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2013_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2013_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2013_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2013_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2013_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2013_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2013_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2013_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2014
#define AGONY_PP_PRIVATE_EVAL_REC_2013_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2014(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2014_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2014_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2014_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2014_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2014_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2014_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2014_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2014_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2014_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2014_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2015
#define AGONY_PP_PRIVATE_EVAL_REC_2014_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2015(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2015_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2015_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2015_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2015_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2015_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2015_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2015_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2015_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2015_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2015_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2016
#define AGONY_PP_PRIVATE_EVAL_REC_2015_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2016(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2016_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2016_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2016_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2016_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2016_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2016_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2016_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2016_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2016_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2016_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2017
#define AGONY_PP_PRIVATE_EVAL_REC_2016_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2017(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2017_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2017_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2017_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2017_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2017_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2017_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2017_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2017_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2017_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2017_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2018
#define AGONY_PP_PRIVATE_EVAL_REC_2017_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2018(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2018_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2018_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2018_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2018_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2018_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2018_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2018_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2018_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2018_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2018_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2019
#define AGONY_PP_PRIVATE_EVAL_REC_2018_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2019(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2019_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2019_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2019_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2019_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2019_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2019_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2019_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2019_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2019_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2019_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2020
#define AGONY_PP_PRIVATE_EVAL_REC_2019_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2020(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2020_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2020_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2020_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2020_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2020_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2020_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2020_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2020_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2020_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2020_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2021
#define AGONY_PP_PRIVATE_EVAL_REC_2020_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2021(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2021_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2021_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2021_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2021_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2021_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2021_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2021_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2021_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2021_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2021_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2022
#define AGONY_PP_PRIVATE_EVAL_REC_2021_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2022(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2022_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2022_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2022_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2022_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2022_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2022_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2022_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2022_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2022_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2022_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2023
#define AGONY_PP_PRIVATE_EVAL_REC_2022_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2023(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2023_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2023_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2023_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2023_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2023_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2023_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2023_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2023_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2023_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2023_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2024
#define AGONY_PP_PRIVATE_EVAL_REC_2023_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2024(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2024_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2024_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2024_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2024_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2024_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2024_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2024_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2024_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2024_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2024_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2025
#define AGONY_PP_PRIVATE_EVAL_REC_2024_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2025(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2025_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2025_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2025_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2025_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2025_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2025_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2025_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2025_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2025_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2025_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2026
#define AGONY_PP_PRIVATE_EVAL_REC_2025_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2026(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2026_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2026_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2026_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2026_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2026_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2026_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2026_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2026_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2026_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2026_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2027
#define AGONY_PP_PRIVATE_EVAL_REC_2026_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2027(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2027_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2027_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2027_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2027_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2027_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2027_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2027_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2027_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2027_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2027_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2028
#define AGONY_PP_PRIVATE_EVAL_REC_2027_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2028(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2028_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2028_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2028_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2028_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2028_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2028_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2028_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2028_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2028_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2028_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2029
#define AGONY_PP_PRIVATE_EVAL_REC_2028_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2029(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2029_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2029_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2029_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2029_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2029_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2029_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2029_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2029_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2029_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2029_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2030
#define AGONY_PP_PRIVATE_EVAL_REC_2029_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2030(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2030_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2030_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2030_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2030_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2030_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2030_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2030_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2030_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2030_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2030_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2031
#define AGONY_PP_PRIVATE_EVAL_REC_2030_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2031(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2031_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2031_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2031_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2031_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2031_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2031_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2031_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2031_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2031_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2031_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2032
#define AGONY_PP_PRIVATE_EVAL_REC_2031_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2032(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2032_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2032_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2032_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2032_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2032_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2032_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2032_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2032_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2032_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2032_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2033
#define AGONY_PP_PRIVATE_EVAL_REC_2032_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2033(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2033_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2033_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2033_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2033_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2033_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2033_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2033_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2033_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2033_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2033_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2034
#define AGONY_PP_PRIVATE_EVAL_REC_2033_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2034(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2034_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2034_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2034_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2034_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2034_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2034_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2034_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2034_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2034_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2034_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2035
#define AGONY_PP_PRIVATE_EVAL_REC_2034_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2035(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2035_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2035_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2035_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2035_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2035_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2035_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2035_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2035_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2035_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2035_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2036
#define AGONY_PP_PRIVATE_EVAL_REC_2035_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2036(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2036_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2036_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2036_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2036_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2036_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2036_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2036_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2036_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2036_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2036_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2037
#define AGONY_PP_PRIVATE_EVAL_REC_2036_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2037(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2037_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2037_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2037_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2037_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2037_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2037_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2037_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2037_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2037_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2037_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2038
#define AGONY_PP_PRIVATE_EVAL_REC_2037_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2038(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2038_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2038_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2038_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2038_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2038_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2038_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2038_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2038_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2038_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2038_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2039
#define AGONY_PP_PRIVATE_EVAL_REC_2038_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2039(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2039_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2039_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2039_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2039_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2039_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2039_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2039_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2039_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2039_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2039_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2040
#define AGONY_PP_PRIVATE_EVAL_REC_2039_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2040(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2040_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2040_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2040_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2040_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2040_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2040_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2040_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2040_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2040_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2040_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2041
#define AGONY_PP_PRIVATE_EVAL_REC_2040_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2041(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2041_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2041_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2041_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2041_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2041_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2041_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2041_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2041_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2041_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2041_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2042
#define AGONY_PP_PRIVATE_EVAL_REC_2041_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2042(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2042_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2042_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2042_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2042_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2042_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2042_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2042_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2042_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2042_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2042_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2043
#define AGONY_PP_PRIVATE_EVAL_REC_2042_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2043(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2043_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2043_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2043_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2043_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2043_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2043_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2043_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2043_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2043_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2043_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2044
#define AGONY_PP_PRIVATE_EVAL_REC_2043_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2044(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2044_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2044_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2044_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2044_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2044_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2044_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2044_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2044_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2044_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2044_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2045
#define AGONY_PP_PRIVATE_EVAL_REC_2044_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2045(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2045_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2045_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2045_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2045_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2045_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2045_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2045_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2045_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2045_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2045_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2046
#define AGONY_PP_PRIVATE_EVAL_REC_2045_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2046(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2046_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2046_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2046_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2046_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2046_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2046_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2046_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2046_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2046_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2046_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2047
#define AGONY_PP_PRIVATE_EVAL_REC_2046_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2047(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_2047_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_2047_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_2047_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2047_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2047_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2047_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_2047_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2047_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_2047_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2047_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_2048
#define AGONY_PP_PRIVATE_EVAL_REC_2047_STOP(...) __VA_ARGS__

#endif // AGONY_PP_EVAL_REC_UNROLL_1024_TO_2047_H
