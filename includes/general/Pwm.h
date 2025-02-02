#ifndef INCLUDES_GENERAL_PWM_H_
#define INCLUDES_GENERAL_PWM_H_

/*********************************************************************************************************************/
/*-----------------------------------------------------Includes------------------------------------------------------*/
/*********************************************************************************************************************/
#include "Platform_Types.h"
#include "IfxGtm_Tom_Pwm.h"

/*********************************************************************************************************************/
/*-------------------------------------------------Data Structures---------------------------------------------------*/
/*********************************************************************************************************************/
typedef struct _Pwm {
    IfxGtm_Tom_Pwm_Config config;
    IfxGtm_Tom_Pwm_Driver driver;
} Pwm;

/*********************************************************************************************************************/
/*------------------------------------------------Function Prototypes------------------------------------------------*/
/*********************************************************************************************************************/
void Init_Pwm(Pwm *pwm, IfxGtm_Tom_ToutMap *tom, uint16 period, uint16 duty_cycle);
void Set_Duty_Cycle(Pwm *pwm, uint32 duty_cycle);
void Set_Duty_Ratio(Pwm *pwm, uint8 duty_ratio);
void Set_Pwm_Period(Pwm *pwm, uint32 period);

#endif /* INCLUDES_GENERAL_PWM_H_ */
