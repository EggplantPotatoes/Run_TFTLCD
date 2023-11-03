/*
 * touch.h
 *
 *  Created on: Sep 28, 2023
 *      Author: smile
 */

#ifndef TOUCH_H_
#define TOUCH_H_

#include "main.h"

/* RGB LCD模块触摸的PID */
#define TOUCH_PID                "911"
#define TOUCH_PID1               "9147"
#define TOUCH_PID2               "9271"
#define TOUCH_PID3               "1158"

/* RGB LCD模块最大触摸点数量 */
#define TOUCH_TP_MAX             5

/* RGB LCD模块触摸部分寄存器定义 */
#define REG_CTRL           0x8040  /* 控制寄存器 */
#define REG_PID            0x8140  /* PID寄存器 */
#define REG_TPINFO         0x814E  /* 触摸状态寄存器 */
#define REG_TP1            0x8150  /* 触摸点1数据寄存器 */
#define REG_TP2            0x8158  /* 触摸点2数据寄存器 */
#define REG_TP3            0x8160  /* 触摸点3数据寄存器 */
#define REG_TP4            0x8168  /* 触摸点4数据寄存器 */
#define REG_TP5            0x8170  /* 触摸点5数据寄存器 */

/* 触摸状态寄存器掩码 */
#define TPINFO_MASK_STA    0x80
#define TPINFO_MASK_CNT    0x0F

/* RGB LCD模块触摸点数据寄存器 */
static const uint16_t touch_tp_reg[TOUCH_TP_MAX] = {
    REG_TP1,
    REG_TP2,
    REG_TP3,
    REG_TP4,
    REG_TP5,
};

/* 触摸点坐标数据结构 */
typedef struct
{
    uint16_t x;     /* 触摸点X坐标 */
    uint16_t y;     /* 触摸点Y坐标 */
    uint16_t size;  /* 触摸点大小 */
} touch_point_t;

/*触摸结构体*/
typedef struct
{
	uint8_t state				;	//触摸状态
	uint8_t num			;	//触摸数量
	touch_point_t point[TOUCH_TP_MAX]	;	//触摸的x坐标，对于gt911最多5个点的坐标
}Touch_Struct;	//触摸信息结构体


extern Touch_Struct	User_Touch;


//void touch_Scanf(void);
//void touch_init(void);
void touch_test(void);
#endif /* TOUCH_H_ */
