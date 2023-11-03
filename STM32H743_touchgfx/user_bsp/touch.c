/*
 * touch.c
 *
 *  Created on: Sep 28, 2023
 *      Author: smile
 */


#include "touch.h"
#include "soft_IIC.h"
#include "user_delay.h"

uint8_t touch_iic_addr;
//touch_point_t touch_point[1];

Touch_Struct	User_Touch;
/**
 * @brief       RGB LCD模块触摸硬件复位
 * @param       addr: 复位后使用的IIC通讯地址
 * @retval      无
 */
static void touch_hw_reset(uint8_t addr)
{
    GPIO_InitTypeDef gpio_init_struct = {0};

    /* 配置PEN引脚为输出 */
    gpio_init_struct.Pin    = TP_PEN_Pin;
    gpio_init_struct.Mode   = GPIO_MODE_OUTPUT_PP;
    gpio_init_struct.Pull   = GPIO_PULLUP;
    gpio_init_struct.Speed  = GPIO_SPEED_FREQ_HIGH;
    HAL_GPIO_Init(TP_PEN_GPIO_Port, &gpio_init_struct);

    switch (addr)
    {
        case 0x28:
        {

             HAL_GPIO_WritePin(TP_CS_GPIO_Port, TP_CS_Pin, GPIO_PIN_RESET);
             HAL_GPIO_WritePin(TP_PEN_GPIO_Port, TP_PEN_Pin, GPIO_PIN_RESET);
             HAL_GPIO_WritePin(TP_PEN_GPIO_Port, TP_PEN_Pin, GPIO_PIN_SET);
             user_delay_ms(1);
             HAL_GPIO_WritePin(TP_CS_GPIO_Port, TP_CS_Pin, GPIO_PIN_SET);
             user_delay_ms(10);
            break;
        }
        case 0xBA:
        {
            HAL_GPIO_WritePin(TP_CS_GPIO_Port, TP_CS_Pin, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(TP_PEN_GPIO_Port, TP_PEN_Pin, GPIO_PIN_RESET);
            user_delay_ms(1);
            HAL_GPIO_WritePin(TP_CS_GPIO_Port, TP_CS_Pin, GPIO_PIN_SET);
            user_delay_ms(10);
            break;
       }
        default:
        {
            break;
        }
    }
    /* 重新配置PEN引脚为输入 */
    gpio_init_struct.Pin    = TP_PEN_Pin;
    gpio_init_struct.Mode   = GPIO_MODE_INPUT;
    gpio_init_struct.Pull   = GPIO_NOPULL;
    gpio_init_struct.Speed  = GPIO_SPEED_FREQ_HIGH;
    HAL_GPIO_Init(TP_PEN_GPIO_Port, &gpio_init_struct);

    touch_iic_addr = addr>>1;
    user_delay_ms(100);
}

/**
 * @brief       写RGB LCD模块触摸寄存器
 * @param       reg: 待写寄存器地址
 *              buf: 待写入的数据
 *              len: 待写入数据的长度
 * @retval      1  : 写ATK-RGBLCD模块触摸寄存器成功
 *              0: 写ATK-RGBLCD模块触摸寄存器失败
 */
static uint8_t touch_write_reg(uint16_t reg, uint8_t *buf, uint8_t len)
{
    uint8_t buf_index;
    uint8_t ret;

    iic_start();
    iic_send_byte((touch_iic_addr << 1) | 0);
    iic_wait_ack();
    iic_send_byte((uint8_t)(reg >> 8) & 0xFF);
    iic_wait_ack();
    iic_send_byte((uint8_t)reg & 0xFF);
    iic_wait_ack();

    for (buf_index=0; buf_index<len; buf_index++)
    {
        iic_send_byte(buf[buf_index]);
        ret = iic_wait_ack();
        if (ret != 0)
        {
            break;
        }
    }

    iic_stop();

    if (ret != 0)
    {
        return 0;
    }

    return 1;
}

/**
 * @brief       读RGB LCD模块触摸寄存器
 * @param       reg: 待读寄存器地址
 *              buf: 读取的数据
 *              len: 待读取数据的长度
 * @retval      无
 */
static void touch_read_reg(uint16_t reg, uint8_t *buf, uint8_t len)
{
    uint8_t buf_index;

    iic_start();
    iic_send_byte((touch_iic_addr << 1) | 0);
    iic_wait_ack();
    iic_send_byte((uint8_t)(reg >> 8) & 0xFF);
    iic_wait_ack();
    iic_send_byte((uint8_t)reg & 0xFF);
    iic_wait_ack();
    iic_start();
    iic_send_byte((touch_iic_addr << 1) | 1);
    iic_wait_ack();

    for (buf_index=0; buf_index<len - 1; buf_index++)
    {
        buf[buf_index] = iic_read_byte(1);
    }

    buf[buf_index] = iic_read_byte(0);

    iic_stop();
}

static void touch_sw_reset(void)
{
    uint8_t dat;

    dat = 0x02;
    touch_write_reg(REG_CTRL, &dat, 1);
    user_delay_ms(10);

    dat = 0x00;
    touch_write_reg(REG_CTRL, &dat, 1);
}

/**
 * @brief       获取RGB LCD模块触摸的PID
 * @param       pid: 获取到的PID（ASCII）
 * @retval      无
 */
static void touch_get_pid(char *pid)
{
    touch_read_reg(REG_PID, (uint8_t *)pid, 4);
    pid[4] = '\0';
}

/*
	功能：触摸扫描，判断当前是否被触摸

*/
void touch_Scanf(void)
{
//	static uint8_t timer=0;
	uint8_t i=0;
	uint8_t _temp;	//中间变量
	uint8_t data_temp[6];	//中间变量

//	timer++;
//	if(timer<10) //坐标信息10ms刷新周期
//	{
//		return;
//	}
//	timer=0;

	touch_read_reg(REG_TPINFO, &_temp, 1);

	User_Touch.state = (_temp & 0x80);	//触摸状态
	User_Touch.num = (_temp & 0x0f);	//获取触摸点数

	if(User_Touch.state) //有触摸，并读出数据
	{
		for(i=0; i<User_Touch.num; i++)
		//读出触摸点数的所有数据
		{
			touch_read_reg(REG_TP1+i*8, data_temp, 6);	//读出触摸x坐标的低8位
			User_Touch.point[i].x  = (uint16_t)(data_temp[1] << 8) | data_temp[0];
			User_Touch.point[i].y  = (uint16_t)(data_temp[3] << 8) | data_temp[2];
			User_Touch.point[i].size  = (uint16_t)(data_temp[5] << 8) | data_temp[4];
		}
		_temp = 0;
		touch_write_reg(REG_TPINFO, &_temp, 1);//清除数据标志位
	}
}


void touch_init(void)
{
	char pid[5];
	soft_IIC_Init();  //IIC初始化
	touch_hw_reset(0x28);
	touch_get_pid(pid);
	touch_sw_reset();
}

void touch_test(void)
{
	touch_Scanf();

}



