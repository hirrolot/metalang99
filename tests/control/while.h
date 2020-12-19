#include <epilepsy/assert.h>
#include <epilepsy/aux.h>
#include <epilepsy/control.h>
#include <epilepsy/lang.h>
#include <epilepsy/uint.h>

#define LIMIT 10
#define SUM   ((LIMIT + 1) * (LIMIT / 2))

#define PREDICATE(state)       call(PREDICATE_IMPL, state)
#define PREDICATE_IMPL(state)  call(PREDICATE_AUX, EPILEPSY_UNPARENTHESISE(v(state)))
#define PREDICATE_AUX(_acc, i) EPILEPSY_UINT_NEQ(v(i), EPILEPSY_UINT_INC(v(LIMIT)))

#define OP(state)      call(OP_IMPL, state)
#define OP_IMPL(state) call(OP_AUX, EPILEPSY_UNPARENTHESISE(v(state)))
#define OP_AUX(acc, i) v((v(acc + i) EPILEPSY_UINT_INC(v(i))))

#define STATE_FINALISER(state)      call(STATE_FINALISER_AUX, EPILEPSY_UNPARENTHESISE(v(state)))
#define STATE_FINALISER_AUX(acc, i) v(acc)

EPILEPSY_ASSERT_EQ(
    call(STATE_FINALISER, EPILEPSY_WHILE(v(PREDICATE), v(OP), v((v(0, 1))))), v(SUM));

#undef PREDICATE
#undef PREDICATE_AUX
#undef OP
#undef OP_AUX
#undef STATE_FINALISER
#undef STATE_FINALISER_AUX
#undef LIMIT
#undef SUM
