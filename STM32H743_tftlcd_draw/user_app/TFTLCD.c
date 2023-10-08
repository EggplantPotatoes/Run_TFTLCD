/*
 * TFTLCD.c
 *
 *  Created on: Sep 21, 2023
 *      Author: smile
 */

#include "TFTLCD.h"
#include "string.h"
#include "picture.h"
#include "stdlib.h"
#include "math.h"
#include "user_delay.h"

extern DMA2D_HandleTypeDef hdma2d;

uint16_t LCD_BUFFER[1024*600] __attribute__((section(".sram_data1")));



void test_tft_lcd(void)
{
	memset(LCD_BUFFER,0xFF,sizeof(LCD_BUFFER));
	HAL_Delay(1000);
	memset(LCD_BUFFER,0xAA,sizeof(LCD_BUFFER));
	HAL_Delay(1000);
	memset(LCD_BUFFER,0xBB,sizeof(LCD_BUFFER));
	HAL_Delay(1000);
	memset(LCD_BUFFER,0xCC,sizeof(LCD_BUFFER));
	HAL_Delay(1000);
	memset(LCD_BUFFER,0xDD,sizeof(LCD_BUFFER));
	HAL_Delay(1000);
}

void test_lcd_show_picture(void)
{
	HAL_DMA2D_Start_IT(&hdma2d,(uint32_t)_acceshitupian4,(uint32_t)0xc0000000,1024,600);

}



//DMA2D传输数据函数
static void dma2d_transfer_data_r2m(uint32_t *addr, uint32_t xSize, uint32_t ySize, uint32_t offsetLine, uint16_t color)
{
    DMA2D->CR = DMA2D_R2M;   // dma2d mode: register to memory.
    DMA2D->OPFCCR = DMA2D_OUTPUT_RGB565;

    DMA2D->OCOLR = color;
    DMA2D->OMAR = (uint32_t)addr;
    DMA2D->OOR = offsetLine;
    DMA2D->NLR = (uint32_t)(xSize << 16) | (uint16_t)ySize;

    DMA2D->CR |= DMA2D_CR_START;
    while (DMA2D->CR & DMA2D_CR_START);
}

//清屏函数
void TFTLCD_clear(uint16_t color)
{
#if USE_DMA2D_EN
    dma2d_transfer_data_r2m((uint32_t *)LCD_FRAME_BUFFER, LCD_WIDTH, LCD_HEIGHT, 0, color);
#else
    uint16_t *ptr = (uint16_t*)LCD_FRAME_BUFFER;
    uint32_t i = 0;

    while (i++ < LCD_WIDTH*LCD_HEIGHT) {
        *(ptr+i) = color;
    }
#endif /* USE_DMA2D_EN */
}

//画点函数
/**
 * @brief	带颜色画点函数
 * @param   x,y	—— 画点坐标 ,color 颜色
 * @return  none
 */
void lcd_draw_point(uint16_t x, uint16_t y, uint16_t color)
{
    uint32_t pos;
    uint16_t *ptr;

    // check position.
    if (x > LCD_WIDTH || y > LCD_HEIGHT) {
        return;
    }

    // calculate the position offset in framebuffer.
    pos = x + y*LCD_WIDTH;
    ptr = (uint16_t*)LCD_FRAME_BUFFER;

    // modify the framebuffer.
#if USE_DMA2D_EN
    dma2d_transfer_data_r2m((uint32_t *)(ptr+pos), 1, 1, 0, color);
#else
    *(ptr+pos) = color;
#endif /* USE_DMA2D_EN */
}

//画线函数
/**
 * @brief	带颜色画线函数
 * @param   x0,y0 起点坐标 ,x1,y1 终点坐标 ,color 颜色
 * @return  none
 */
void lcd_draw_line(uint16_t X0 ,uint16_t Y0,uint16_t X1,uint16_t Y1,uint16_t color)
{
    uint16_t X=0,Y=0;
    int16_t dx=0,dy=0;

    int16_t sub=0;
    int16_t num=0;
    uint16_t temp=0;
    if((X0==X1)&&(Y0==Y1))
    {
            return ;
    }
    dx=abs(X1-X0);
    dy=abs(Y1-Y0);
    if(dx>=dy)//斜率小于等于1
    {
            if(X0>X1) //互换
            {
                    temp=X1;
                    X1=X0;
                    X0=temp;
                    temp=Y1;
                    Y1=Y0;
                    Y0=temp;
            }
            dx=abs(X1-X0);
            dy=abs(Y1-Y0);
            num=(Y1-Y0)>0?1:-1;//判断加减
            sub=(dy<<1)-dx;//sub=dy*2-dx;
            lcd_draw_point(X0,Y0,color);//起点
            for(X=X0,Y=Y0;X<=X1;X++)
            {
                    if(sub>0)
                    {
                            Y+=num;
                            sub+=(dy<<1)-(dx<<1);//sub=2*dy-2*dx
                    }
                    else
                    {
                            sub+=dy<<1;
                    }
                    lcd_draw_point(X,Y,color);//打点
            }
    }
    else //斜率大于1
    {
            if(Y0>Y1)  //互换
            {
                    temp=X1;
                    X1=X0;
                    X0=temp;
                    temp=Y1;
                    Y1=Y0;
                    Y0=temp;
            }
            dx=abs(X1-X0);
            dy=abs(Y1-Y0);
            num=(X1-X0)>0?1:-1;//判断加减
            sub=(dx<<1)-dy;//sub=dy*2-dx;
            lcd_draw_point(X0,Y0,color);//起点
            for(X=X0,Y=Y0;Y<=Y1;Y++)
            {
                    if(sub>0)
                    {
                            X+=num;
                            sub+=(dx<<1)-(dy<<1);//sub=2*dy-2*dx
                    }
                    else
                    {
                            sub+=dx<<1;
                    }
                    lcd_draw_point(X,Y,color);//打点

            }
    }
}


//画圆函数
/**
 * @brief
 * @param   x,y 圆心坐标 ,r 半径 ,color 颜色
 * @return  none
 */
void lcd_draw_circle(uint16_t x, uint16_t y, uint16_t r,uint16_t color)
{
	uint16_t xm = 0,ym = r;
//	uint16_t i = 0;
	  //先画出圆在x、y轴上的四个点
	  lcd_draw_point(x,y+r,color);
	  lcd_draw_point(x+r,y,color);
	  lcd_draw_point(x,y-r,color);
	  lcd_draw_point(x-r,y,color);

	  while(xm<=ym)//判断是否画完
	  {
	    if((xm*xm+ym*ym)< (r*r))//在圆内
	      xm++;
	    else   //在圆外
	      ym--;
	    lcd_draw_point(x+xm,y+ym,color);
	    lcd_draw_point(x-xm,y+ym,color);
	    lcd_draw_point(x-ym,y+xm,color);
	    lcd_draw_point(x-ym,y-xm,color);
	    lcd_draw_point(x+ym,y+xm,color);
	    lcd_draw_point(x+ym,y-xm,color);
	    lcd_draw_point(x+xm,y-ym,color);
	    lcd_draw_point(x-xm,y-ym,color);
	  }
}
/**
 * @breif	带颜色画矩形函数
 * @param   x1,y1 —— 矩形起始点
 * @param	x2,y2 —— 矩形终点
 * @param	color	—— 颜色
 * @retval	none
 */
void LCD_Draw_Rect(uint16_t x1, uint16_t y1, uint16_t x2, uint16_t y2, uint16_t color)
{
	lcd_draw_line(x1,y1,x2,y1,color);
	lcd_draw_line(x1,y1,x1,y2,color);
	lcd_draw_line(x1,y2,x2,y2,color);
	lcd_draw_line(x2,y1,x2,y2,color);
}


void TFTLCD_test(void)
{
	uint16_t i,j;
    float alpha = 0.0f;

    //清屏
	TFTLCD_clear(WHITE);

	//用点画线
	for(i=0;i<300;i++)
	{
		lcd_draw_point(512+i,300+i,RED);
		HAL_Delay(1);
		lcd_draw_point(512-i,300-i,RED);
		HAL_Delay(1);
		lcd_draw_point(512+i,300-i,RED);
		HAL_Delay(1);
		lcd_draw_point(512-i,300+i,RED);
		HAL_Delay(1);

	}
	for(i=0;i<300;i++)
	{
		lcd_draw_point(512+i,300+i,WHITE);
		HAL_Delay(1);
		lcd_draw_point(512-i,300-i,WHITE);
		HAL_Delay(1);
		lcd_draw_point(512+i,300-i,WHITE);
		HAL_Delay(1);
		lcd_draw_point(512-i,300+i,WHITE);
		HAL_Delay(1);
	}
	//画线
	lcd_draw_line(512,300,1023,599,RED);
	HAL_Delay(300);
	lcd_draw_line(512,300,1023,0,RED);
	HAL_Delay(300);
	lcd_draw_line(512,300,0,0,RED);
	HAL_Delay(300);
	lcd_draw_line(512,300,0,599,RED);
	HAL_Delay(300);
	lcd_draw_line(512,300,0,599,WHITE);
	HAL_Delay(300);
	lcd_draw_line(512,300,0,0,WHITE);
	HAL_Delay(300);
	lcd_draw_line(512,300,1023,0,WHITE);
	HAL_Delay(300);
	lcd_draw_line(512,300,1023,599,WHITE);
	HAL_Delay(300);

	//画正弦波
	for(i=0;i<512;i++)
	{
		lcd_draw_line(512+i,300+200*sin(alpha+i*0.035),512+i+1,300+200*sin(alpha+(i+1)*0.035),RED);
		HAL_Delay(5);
		lcd_draw_line(512-i,300+200*sin(alpha+i*0.035),512-i-1,300+200*sin(alpha+(i+1)*0.035),RED);
		HAL_Delay(5);
	}

	for(i=0;i<512;i++)
	{
		lcd_draw_line(512+i,300+200*sin(alpha+i*0.035),512+i+1,300+200*sin(alpha+(i+1)*0.035),WHITE);
		HAL_Delay(5);
		lcd_draw_line(512-i,300+200*sin(alpha+i*0.035),512-i-1,300+200*sin(alpha+(i+1)*0.035),WHITE);
		HAL_Delay(5);
	}

	for(j=0;j<250;j++)
	{
		for(i=0;i<512;i++)
		{
			lcd_draw_line(512+i,300+j*sin(alpha+i*0.035),512+i+1,300+j*sin(alpha+(i+1)*0.035),YELLOW);
			user_delay_us(20);
			lcd_draw_line(512-i,300+j*sin(alpha+i*0.035),512-i-1,300+j*sin(alpha+(i+1)*0.035),YELLOW);
			user_delay_us(20);
		}
	}
	for(j=0;j<250;j++)
	{
		for(i=0;i<512;i++)
		{
			lcd_draw_line(512+i,300+j*sin(alpha+i*0.035),512+i+1,300+j*sin(alpha+(i+1)*0.035),WHITE);
			user_delay_us(20);
			lcd_draw_line(512-i,300+j*sin(alpha+i*0.035),512-i-1,300+j*sin(alpha+(i+1)*0.035),WHITE);
			user_delay_us(20);
		}
	}

	//画圆
	for(i=20;i<250;i++)
	{
	 lcd_draw_circle(512,300,i,RED);
	 HAL_Delay(10);
	}
	for(i=20;i<250;i++)
	{
	 lcd_draw_circle(512,300,i,PINK);
	 HAL_Delay(10);
	}
	for(i=20;i<250;i++)
	{
	 lcd_draw_circle(512,300,i,YELLOW);
	 HAL_Delay(10);
	}
	for(i=20;i<250;i++)
	{
	 lcd_draw_circle(512,300,i,WHITE);
	 HAL_Delay(10);
	}
	//画矩形
	for(i=0;i<250;i++)
	{
		LCD_Draw_Rect(312+i,100+i,712-i,500-i,RED);
		HAL_Delay(10);
	}
	for(i=0;i<250;i++)
	{
		LCD_Draw_Rect(312+i,100+i,712-i,500-i,GREEN);
		HAL_Delay(10);
	}
	for(i=0;i<250;i++)
	{
		LCD_Draw_Rect(312+i,100+i,712-i,500-i,BLUE);
		HAL_Delay(10);
	}
	for(i=0;i<250;i++)
	{
		LCD_Draw_Rect(312+i,100+i,712-i,500-i,WHITE);
		HAL_Delay(10);
	}
	HAL_Delay(1000);

}
