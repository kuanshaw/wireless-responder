#ifndef __TIMER_H
#define __TIMER_H
#include "sys.h"	 


void TIM3_Init(u16 arr,u16 psc);
void TIM3_IRQHandler(void);


#endif
