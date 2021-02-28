#ifndef METALANG99_PRIV_COMPILER_ATTR_H
#define METALANG99_PRIV_COMPILER_ATTR_H

#ifdef __GNUC__
#define METALANG99_PRIV_COMPILER_ATTR_UNUSED __attribute__((unused))
#else
#define METALANG99_PRIV_COMPILER_ATTR_UNUSED
#endif

#ifdef __clang__
#define METALANG99_PRIV_SUPPRESS_W_SHADOW _Pragma("clang diagnostic ignored \"-Wshadow\"")
#else
#define METALANG99_PRIV_SUPPRESS_W_SHADOW
#endif

#endif // METALANG99_PRIV_COMPILER_ATTR_H
