/*
 * TFTLCD.h
 *
 *  Created on: Sep 21, 2023
 *      Author: smile
 */

#ifndef TFTLCD_H_
#define TFTLCD_H_

#include "main.h"

#define USE_DMA2D_EN        1


#define LCD_WIDTH       1024
#define LCD_HEIGHT      600

#define LCD_FRAME_BUFFER    0xc0000000

/**
 * @brief   color
 * @note    rgb565
*/
#define BLACK   0x0000
#define BLUE    0x001F
#define GREEN   0x07E0
#define GBLUE   0X07FF
#define GRAY    0X8430
#define BROWN   0XBC40
#define RED     0xF800
#define PINK    0XF81F
#define BRRED   0XFC07
#define YELLOW  0xFFE0
#define WHITE   0xFFFF

void test_tft_lcd(void);
void test_lcd_show_picture(void);

void TFTLCD_clear(uint16_t color);
void lcd_draw_point(uint16_t x, uint16_t y, uint16_t color);
void lcd_draw_circle(uint16_t x, uint16_t y, uint16_t r,uint16_t color);
void lcd_draw_circle_fill(uint16_t x, uint16_t y, uint16_t r,uint16_t color);

void TFTLCD_test(void);

#endif /* TFTLCD_H_ */
