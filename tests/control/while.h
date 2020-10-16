#include "../assert.h"

#include "../../include/insult/aux.h"
#include "../../include/insult/control.h"
#include "../../include/insult/lang.h"
#include "../../include/insult/uint.h"

#define LIMIT 10
#define SUM   ((LIMIT + 1) * (LIMIT / 2))

#define PREDICATE(state)       call(PREDICATE_REAL, state)
#define PREDICATE_REAL(state)  call(PREDICATE_AUX, INSULT_UNPARENTHESISE(v(state)))
#define PREDICATE_AUX(_acc, i) INSULT_UINT_NEQ(v(i), INSULT_UINT_INC(v(LIMIT)))

#define OP(state)      call(OP_REAL, state)
#define OP_REAL(state) call(OP_AUX, INSULT_UNPARENTHESISE(v(state)))
#define OP_AUX(acc, i) v((v(acc + i) INSULT_UINT_INC(v(i))))

#define STATE_FINALISER(state)      call(STATE_FINALISER_AUX, INSULT_UNPARENTHESISE(v(state)))
#define STATE_FINALISER_AUX(acc, i) v(acc)

ASSERT_EQ(call(STATE_FINALISER, INSULT_WHILE(v(PREDICATE), v(OP), v((v(0, 1))))), v(SUM));

#undef PREDICATE
#undef PREDICATE_AUX
#undef OP
#undef OP_AUX
#undef STATE_FINALISER
#undef STATE_FINALISER_AUX
#undef LIMIT
#undef SUM
