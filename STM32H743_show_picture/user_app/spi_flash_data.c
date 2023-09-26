/*
 * spi_flash_data.c
 *
 *  Created on: Sep 23, 2023
 *      Author: smile
 */

#include "spi_flash_data.h"
#include "QSPI_flash.h"
#include "key_led.h"
#include "picture.h"
#include "stdio.h"

extern DMA2D_HandleTypeDef hdma2d;
//uint8_t TEXT_Buffer[]={0x00,0x01,0x02,0x03,0x04,0x05,0x06,0x07,0x08,0x09};
//uint8_t TEXT_Buffer[10] __attribute__((section(".sram_data3"))) = {0};

//uint8_t data_temp_wr[1024*600*2] __attribute__((section(".sram_data3")));
//uint8_t data_temp_rd[1024*600*2] __attribute__((section(".sram_data3")));

uint16_t picture_rd[1024*600] __attribute__((section(".sram_data3")));

//存一张图片
void spi_flash_write_picture(uint16_t* p_Buffer,uint32_t WriteAddr)
{
	uint32_t i;

	for(i=0;i<300;i++)  //一张图片300页
	{
		W25QXX_Write((uint8_t*)p_Buffer+i*4096,WriteAddr+4096*i,4096);
		HAL_Delay(1);

	}

}

//读取一张图片
void spi_flash_read_picture(uint16_t* p_Buffer,uint32_t Read_Addr)
{
	uint32_t i;
	for(i=0;i<300;i=i+1) //一张图片300页
	{
		W25QXX_Read((uint8_t*)p_Buffer+i*4096,Read_Addr+4096*i,4096);
		HAL_Delay(1);
	}

}



void test_spi_flash(void)
{
	uint8_t key;
//	uint32_t i;
//	uint8_t datatemp[10];

	static uint8_t key_cnt = 0;

	key=KEY_Scan(0);



//	if(key==KEY0_PRES)
//	{
//	  W25QXX_Write(TEXT_Buffer,PICTURE_START_ADDR,10);
//	}
//	if(key==KEY1_PRES)
//	{
//		W25QXX_Read(datatemp,PICTURE_START_ADDR,10);
//		for(i=0;i<10;i++)
//		{
//			printf(" %x",datatemp[i]);
//		}
//		printf(" \r\n ");
//	}
//	if(key==KEY2_PRES)
//	{
//		TEXT_Buffer[0] = (_acceshitupian4[0]>>8);
//		TEXT_Buffer[1] = _acceshitupian4[0];
//		TEXT_Buffer[2] = (_acceshitupian4[1]>>8);
//		TEXT_Buffer[3] = _acceshitupian4[1];
//		printf(" ABCDEFG\r\n");
//	}

		if(key==KEY0_PRES)   //需要先使用按键将图片逐一存到QSPI flash中
		{
//			spi_flash_write_picture((uint16_t*)_acceshitupian1,PICTURE_1_ADDR);
//			spi_flash_write_picture((uint16_t*)_acceshitupian2,PICTURE_2_ADDR);
//			spi_flash_write_picture((uint16_t*)_acceshitupian3,PICTURE_3_ADDR);
//			spi_flash_write_picture((uint16_t*)_acceshitupian4,PICTURE_4_ADDR);
//			spi_flash_write_picture((uint16_t*)_acceshitu_1,PICTURE_5_ADDR);

			printf(" spi_flash_write_picture\r\n");
		}
		if(key==KEY1_PRES)
		{
			key_cnt++;
			if(key_cnt==1)
			{
				spi_flash_read_picture(picture_rd,PICTURE_1_ADDR);
				HAL_DMA2D_Start_IT(&hdma2d,(uint32_t)picture_rd,(uint32_t)0xc0000000,1024,600);
			}
			else if(key_cnt==2)
			{
				spi_flash_read_picture(picture_rd,PICTURE_2_ADDR);
				HAL_DMA2D_Start_IT(&hdma2d,(uint32_t)picture_rd,(uint32_t)0xc0000000,1024,600);
			}
			else if(key_cnt==3)
			{
				spi_flash_read_picture(picture_rd,PICTURE_3_ADDR);
				HAL_DMA2D_Start_IT(&hdma2d,(uint32_t)picture_rd,(uint32_t)0xc0000000,1024,600);
			}
			else if(key_cnt==4)
			{
				spi_flash_read_picture(picture_rd,PICTURE_4_ADDR);
				HAL_DMA2D_Start_IT(&hdma2d,(uint32_t)picture_rd,(uint32_t)0xc0000000,1024,600);
			}
			else if(key_cnt==5)
			{
				spi_flash_read_picture(picture_rd,PICTURE_5_ADDR);
				HAL_DMA2D_Start_IT(&hdma2d,(uint32_t)picture_rd,(uint32_t)0xc0000000,1024,600);
			}
			else if(key_cnt==6)
			{
				key_cnt = 0;
			}
//			for(i=0;i<100;i++)
//			{
//				printf(" %x ",picture_rd[i]);
//			}
			printf(" spi_flash_read_picture\r\n");
		}
//		if(key==KEY2_PRES)
//		{


//			printf(" show picture \r\n");
//		}
}


void test_picture_show(void)
{

		spi_flash_read_picture(picture_rd,PICTURE_1_ADDR);
		HAL_DMA2D_Start_IT(&hdma2d,(uint32_t)picture_rd,(uint32_t)0xc0000000,1024,600);
        HAL_Delay(1000);

		spi_flash_read_picture(picture_rd,PICTURE_2_ADDR);
		HAL_DMA2D_Start_IT(&hdma2d,(uint32_t)picture_rd,(uint32_t)0xc0000000,1024,600);
		HAL_Delay(1000);

		spi_flash_read_picture(picture_rd,PICTURE_3_ADDR);
		HAL_DMA2D_Start_IT(&hdma2d,(uint32_t)picture_rd,(uint32_t)0xc0000000,1024,600);
		HAL_Delay(1000);

		spi_flash_read_picture(picture_rd,PICTURE_4_ADDR);
		HAL_DMA2D_Start_IT(&hdma2d,(uint32_t)picture_rd,(uint32_t)0xc0000000,1024,600);
		HAL_Delay(1000);

		spi_flash_read_picture(picture_rd,PICTURE_5_ADDR);
		HAL_DMA2D_Start_IT(&hdma2d,(uint32_t)picture_rd,(uint32_t)0xc0000000,1024,600);
		HAL_Delay(1000);

}

