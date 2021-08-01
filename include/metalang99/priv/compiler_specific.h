#ifndef ML99_PRIV_COMPILER_SPECIFIC_H
#define ML99_PRIV_COMPILER_SPECIFIC_H

// ML99_PRIV_COMPILER_ATTR_UNUSED {
#ifdef __GNUC__
#define ML99_PRIV_COMPILER_ATTR_UNUSED __attribute__((unused))
#else
#define ML99_PRIV_COMPILER_ATTR_UNUSED
#endif
// }

// ML99_PRIV_EMIT_ERROR {
#if __STDC_VERSION__ >= 201112L // C11

#define ML99_PRIV_EMIT_ERROR(message) _Static_assert(0, message)

#elif defined(__clang__)

#if __has_extension(c_static_assert)
#define ML99_PRIV_EMIT_ERROR(message) _Static_assert(0, message)
#endif

#elif defined(__GNUC__)

// GCC 4.6 Release Series: <https://gcc.gnu.org/gcc-4.6/changes.html>.
#if (__GNUC__ == 4 && __GNUC_MINOR__ >= 6) || (__GNUC__ >= 5)
#define ML99_PRIV_EMIT_ERROR(message) _Static_assert(0, message)
#else

// GCC Common Function Attributes:
// <https://gcc.gnu.org/onlinedocs/gcc/Common-Function-Attributes.html>.
#define ML99_PRIV_EMIT_ERROR(message)                                                              \
    void __attribute__((constructor, error(message))) ML99_CAT(ml99_error_, __LINE__)(void) {      \
        ML99_CAT(ml99_error_, __LINE__)();                                                         \
    }

#endif

#endif

#if !defined(ML99_PRIV_EMIT_ERROR) && !defined(ML99_ALLOW_POOR_DIAGNOSTICS)
#error Your compiler doesn't support decent diagnostic messages. \
You'll have to search for Metalang99 errors in a preprocessed-only file (-E) by yourself. \
Define ML99_ALLOW_POOR_DIAGNOSTICS to suppress this error.
#endif
// } (ML99_PRIV_EMIT_ERROR)

#endif // ML99_PRIV_COMPILER_SPECIFIC_H
