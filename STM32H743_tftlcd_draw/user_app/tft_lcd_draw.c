/*
 * tft_lcd_draw.c
 *
 *  Created on: Oct 9, 2023
 *      Author: smile
 */
#include "tft_lcd_draw.h"
#include "touch.h"
#include "TFTLCD.h"
#include "key_led.h"

uint16_t change_color(void)
{
	static uint8_t key_cnt = 0;
	static uint16_t change_color = 0;

	key_cnt++;
	switch(key_cnt)
	{
		case 1:
			change_color = BLACK;
			break;
		case 2:
			change_color = BLUE;
			break;
		case 3:
			change_color = GREEN;
			break;
		case 4:
			change_color = GBLUE;
			break;
		case 5:
			change_color = GRAY;
			break;
		case 6:
			change_color = BROWN;
			break;
		case 7:
			change_color = RED;
			break;
		case 8:
			change_color = PINK;
			break;
		case 9:
			change_color = BRRED;
			break;
		case 10:
			change_color = YELLOW;
			break;
		case 11:
			change_color = WHITE;
			key_cnt = 0;
			break;
		default:

			break;
	}
	return change_color;

}
void tft_lcd_draw(void)
{
	uint8_t key;
	static uint16_t color = 0;

	touch_Scanf();
	key=KEY_Scan(0);
	if(key==KEY0_PRES)
	{
		color = change_color();
		lcd_draw_circle_fill(974,550,50,color);
	}
//	if(key==KEY1_PRES)
//	{

//	}
//	if(key==KEY2_PRES)
//	{

//	}


	switch(User_Touch.num)
	{
		case 1:
			lcd_draw_circle_fill(User_Touch.point[0].x,User_Touch.point[0].y,5,color);
		    break;
		case 2:
			lcd_draw_circle_fill(User_Touch.point[0].x,User_Touch.point[0].y,5,color);
			lcd_draw_circle_fill(User_Touch.point[1].x,User_Touch.point[1].y,5,color);
		    break;
		case 3:
			lcd_draw_circle_fill(User_Touch.point[0].x,User_Touch.point[0].y,5,color);
			lcd_draw_circle_fill(User_Touch.point[1].x,User_Touch.point[1].y,5,color);
			lcd_draw_circle_fill(User_Touch.point[2].x,User_Touch.point[2].y,5,color);
		    break;
		case 4:
			lcd_draw_circle_fill(User_Touch.point[0].x,User_Touch.point[0].y,5,color);
			lcd_draw_circle_fill(User_Touch.point[1].x,User_Touch.point[1].y,5,color);
			lcd_draw_circle_fill(User_Touch.point[2].x,User_Touch.point[2].y,5,color);
			lcd_draw_circle_fill(User_Touch.point[3].x,User_Touch.point[3].y,5,color);
		    break;
		case 5:
			lcd_draw_circle_fill(User_Touch.point[0].x,User_Touch.point[0].y,5,color);
			lcd_draw_circle_fill(User_Touch.point[1].x,User_Touch.point[1].y,5,color);
			lcd_draw_circle_fill(User_Touch.point[2].x,User_Touch.point[2].y,5,color);
			lcd_draw_circle_fill(User_Touch.point[3].x,User_Touch.point[3].y,5,color);
			lcd_draw_circle_fill(User_Touch.point[4].x,User_Touch.point[4].y,5,color);
		    break;
		default:

			break;
	}


}
