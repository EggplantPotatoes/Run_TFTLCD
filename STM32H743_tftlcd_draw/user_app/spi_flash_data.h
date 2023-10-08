/*
 * spi_flash_data.h
 *
 *  Created on: Sep 23, 2023
 *      Author: smile
 */

#ifndef SPI_FLASH_DATA_H_
#define SPI_FLASH_DATA_H_

#include "main.h"

#define PICTURE_1_ADDR   0x00000000
#define PICTURE_2_ADDR   0x0012C000
#define PICTURE_3_ADDR   0x00258000
#define PICTURE_4_ADDR   0x00384000
#define PICTURE_5_ADDR   0x004B0000
#define PICTURE_6_ADDR   0x005DC000

void spi_flash_write_data(uint8_t* pBuffer,uint32_t WriteAddr,uint16_t NumByteToWrite);
void test_spi_flash(void);
void test_picture_show(void);
#endif /* SPI_FLASH_DATA_H_ */
