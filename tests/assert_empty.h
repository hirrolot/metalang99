#include <epilepsy/assert.h>
#include <epilepsy/aux.h>

#define ASSERT_EMPTY(x) EPILEPSY_assertPlain(EPILEPSY_catPlain(ASSERT_EMPTY_, x))
#define ASSERT_EMPTY_   1
