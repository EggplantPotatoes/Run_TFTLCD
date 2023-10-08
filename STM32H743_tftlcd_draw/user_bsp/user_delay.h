/*
 * user_delay.h
 *
 *  Created on: Sep 16, 2023
 *      Author: smile
 */

#ifndef USER_DELAY_H_
#define USER_DELAY_H_

#include "main.h"

void user_delay_init(uint16_t sysclk);
void user_delay_us(uint32_t nus);
void user_delay_ms(uint16_t nms);

#endif /* USER_DELAY_H_ */
