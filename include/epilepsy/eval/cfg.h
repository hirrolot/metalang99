#ifndef EPILEPSY_EVAL_CFG_H
#define EPILEPSY_EVAL_CFG_H

#define EPILEPSY_PRIV_EVAL_CFG(k, k_cx, f, acc) (k, k_cx, f, acc)

#define EPILEPSY_PRIV_EVAL_CFG_K(cfg)                     EPILEPSY_PRIV_EVAL_CFG_K_EXTRACT cfg
#define EPILEPSY_PRIV_EVAL_CFG_K_EXTRACT(k, k_cx, f, acc) k

#define EPILEPSY_PRIV_EVAL_CFG_K_CX(cfg)                     EPILEPSY_PRIV_EVAL_CFG_K_CX_EXTRACT cfg
#define EPILEPSY_PRIV_EVAL_CFG_K_CX_EXTRACT(k, k_cx, f, acc) k_cx

#define EPILEPSY_PRIV_EVAL_CFG_F(cfg)                     EPILEPSY_PRIV_EVAL_CFG_F_EXTRACT cfg
#define EPILEPSY_PRIV_EVAL_CFG_F_EXTRACT(k, k_cx, f, acc) f

#define EPILEPSY_PRIV_EVAL_CFG_ACC(cfg)                     EPILEPSY_PRIV_EVAL_CFG_ACC_EXTRACT cfg
#define EPILEPSY_PRIV_EVAL_CFG_ACC_EXTRACT(k, k_cx, f, acc) acc

#define EPILEPSY_PRIV_EVAL_CFG_UPDATE_ACC(cfg, new_acc)                                            \
    EPILEPSY_PRIV_EVAL_CFG(                                                                        \
        EPILEPSY_PRIV_EVAL_CFG_K(cfg),                                                             \
        EPILEPSY_PRIV_EVAL_CFG_K_CX(cfg),                                                          \
        EPILEPSY_PRIV_EVAL_CFG_F(cfg),                                                             \
        new_acc)

#endif // EPILEPSY_EVAL_CFG_H
