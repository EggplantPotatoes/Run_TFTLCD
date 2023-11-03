/*
 * user_delay.c
 *
 *  Created on: Sep 16, 2023
 *      Author: smile
 */

#include "user_delay.h"

void user_delay_us(uint32_t nus)
{
    uint32_t Delay = nus * 200;
    do
    {
        __NOP();
    }
    while (Delay --);
}

void user_delay_ms(uint16_t ms)
{
	uint16_t i;
	for(i=0;i<ms;i++)
	{
		user_delay_us(1000);
	}
}


