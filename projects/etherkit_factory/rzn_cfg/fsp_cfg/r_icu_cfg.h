/* generated configuration header file - do not edit */
#ifndef R_ICU_CFG_H_
#define R_ICU_CFG_H_
#define ICU_CFG_PARAM_CHECKING_ENABLE (BSP_CFG_PARAM_CHECKING_ENABLE)
#define ICU_CFG_MULTIPLEX_INTERRUPT_SUPPORTED (0)
#if ICU_CFG_MULTIPLEX_INTERRUPT_SUPPORTED
 #define ICU_CFG_MULTIPLEX_INTERRUPT_ENABLE         BSP_INTERRUPT_ENABLE
 #define ICU_CFG_MULTIPLEX_INTERRUPT_DISABLE        BSP_INTERRUPT_DISABLE
#else
 #define ICU_CFG_MULTIPLEX_INTERRUPT_ENABLE
 #define ICU_CFG_MULTIPLEX_INTERRUPT_DISABLE
#endif
#endif /* R_ICU_CFG_H_ */