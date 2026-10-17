#ifndef TASKS_INIT_H
#define TASKS_INIT_H

#include "stm32f1xx_hal.h"

//全局tick，严格名字 tick，volatile uint32_t
extern volatile uint32_t tick;

void Tasks_Init(void);

#endif
