/**
 * @file
 * @brief Unsigned integers.
 */

#ifndef KOSHMAR_PP_UINT_H
#define KOSHMAR_PP_UINT_H

#include "uint/dec.h"
#include "uint/eq.h"
#include "uint/greater.h"
#include "uint/greater_equal.h"
#include "uint/inc.h"
#include "uint/lesser.h"
#include "uint/lesser_equal.h"
#include "uint/neq.h"

#define KOSHMAR_PP_UINT_DEC(x) KOSHMAR_PP_PRIVATE_UINT_DEC(x)
#define KOSHMAR_PP_UINT_INC(x) KOSHMAR_PP_PRIVATE_UINT_INC(x)

#define KOSHMAR_PP_UINT_EQ(x, y)  KOSHMAR_PP_PRIVATE_UINT_EQ(x, y)
#define KOSHMAR_PP_UINT_NEQ(x, y) KOSHMAR_PP_PRIVATE_UINT_NEQ(x, y)

#define KOSHMAR_PP_UINT_GREATER(x, y)       KOSHMAR_PP_PRIVATE_UINT_GREATER(x, y)
#define KOSHMAR_PP_UINT_GREATER_EQUAL(x, y) KOSHMAR_PP_PRIVATE_UINT_GREATER_EQUAL(x, y)

#define KOSHMAR_PP_UINT_LESSER(x, y)       KOSHMAR_PP_PRIVATE_UINT_LESSER(x, y)
#define KOSHMAR_PP_UINT_LESSER_EQUAL(x, y) KOSHMAR_PP_PRIVATE_UINT_LESSER_EQUAL(x, y)

#endif // KOSHMAR_PP_UINT_H
