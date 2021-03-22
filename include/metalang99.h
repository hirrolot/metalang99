/**
 * @file
 * Everything Metalang99 provides.
 */

#ifndef ML99_H
#define ML99_H

#if defined(_MSVC_TRADITIONAL) && _MSVC_TRADITIONAL
#error Please, specify /Zc:preprocessor to enable a standard-compliant C99/C++11 preprocessor.
#endif

#include <metalang99/assert.h>
#include <metalang99/choice.h>
#include <metalang99/control.h>
#include <metalang99/gen.h>
#include <metalang99/lang.h>
#include <metalang99/list.h>
#include <metalang99/maybe.h>
#include <metalang99/nat.h>
#include <metalang99/tuple.h>
#include <metalang99/util.h>
#include <metalang99/variadics.h>

#define ML99_MAJOR 0
#define ML99_MINOR 5
#define ML99_PATCH 0

#endif // ML99_H
