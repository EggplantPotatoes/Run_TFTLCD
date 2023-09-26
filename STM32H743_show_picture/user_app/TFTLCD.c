/*
 * TFTLCD.c
 *
 *  Created on: Sep 21, 2023
 *      Author: smile
 */

#include "TFTLCD.h"
#include "string.h"
#include "picture.h"
extern DMA2D_HandleTypeDef hdma2d;

//uint16_t LCD_BUFFER[600][1024] __attribute__((section(".sram_data1")));
//
//
//
//void test_tft_lcd(void)
//{
//	memset(LCD_BUFFER,0xFF,sizeof(LCD_BUFFER));
//	HAL_Delay(1000);
//	memset(LCD_BUFFER,0xAA,sizeof(LCD_BUFFER));
//	HAL_Delay(1000);
//	memset(LCD_BUFFER,0xD0,sizeof(LCD_BUFFER));
//	HAL_Delay(1000);
//	memset(LCD_BUFFER,0x00,sizeof(LCD_BUFFER));
//	HAL_Delay(1000);
//
//}

void test_lcd_show_picture(void)
{
	HAL_DMA2D_Start_IT(&hdma2d,(uint32_t)_acceshitupian4,(uint32_t)0xc0000000,1024,600);

}
