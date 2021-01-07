#ifndef epEval_CONFIG_H
#define epEval_CONFIG_H

#define EPILEPSY_PRIV_EVAL_CONFIG(k, k_cx, f, acc) (k, k_cx, f, acc)

#define EPILEPSY_PRIV_EVAL_CONFIG_K(config)                  EPILEPSY_PRIV_EVAL_CONFIG_K_EXTRACT config
#define EPILEPSY_PRIV_EVAL_CONFIG_K_EXTRACT(k, k_cx, f, acc) k

#define EPILEPSY_PRIV_EVAL_CONFIG_K_CX(config)                  EPILEPSY_PRIV_EVAL_CONFIG_K_CX_EXTRACT config
#define EPILEPSY_PRIV_EVAL_CONFIG_K_CX_EXTRACT(k, k_cx, f, acc) k_cx

#define EPILEPSY_PRIV_EVAL_CONFIG_F(config)                  EPILEPSY_PRIV_EVAL_CONFIG_F_EXTRACT config
#define EPILEPSY_PRIV_EVAL_CONFIG_F_EXTRACT(k, k_cx, f, acc) f

#define EPILEPSY_PRIV_EVAL_CONFIG_ACC(config)                  EPILEPSY_PRIV_EVAL_CONFIG_ACC_EXTRACT config
#define EPILEPSY_PRIV_EVAL_CONFIG_ACC_EXTRACT(k, k_cx, f, acc) acc

#define EPILEPSY_PRIV_EVAL_CONFIG_UPDATE_ACC(config, new_acc)                                      \
    EPILEPSY_PRIV_EVAL_CONFIG(                                                                     \
        EPILEPSY_PRIV_EVAL_CONFIG_K(config),                                                       \
        EPILEPSY_PRIV_EVAL_CONFIG_K_CX(config),                                                    \
        EPILEPSY_PRIV_EVAL_CONFIG_F(config),                                                       \
        new_acc)

#endif // epEval_CONFIG_H
