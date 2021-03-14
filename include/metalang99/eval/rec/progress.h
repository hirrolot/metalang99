#ifndef ML99_EVAL_REC_PROGRESS_H
#define ML99_EVAL_REC_PROGRESS_H

#define ML99_PRIV_REC_NEXT(next_lvl, choice)   ML99_PRIV_REC_NEXT_##choice(next_lvl)
#define ML99_PRIV_REC_NEXT_0continue(next_lvl) ML99_PRIV_REC_##next_lvl
#define ML99_PRIV_REC_NEXT_0stop(_next_lvl)    ML99_PRIV_REC_HALT

#define ML99_PRIV_REC_HALT(...) __VA_ARGS__

#endif // ML99_EVAL_REC_PROGRESS_H
