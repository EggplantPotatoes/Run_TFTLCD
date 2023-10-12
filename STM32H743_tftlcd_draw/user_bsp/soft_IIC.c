/*
 * soft_IIC.c
 *
 *  Created on: Sep 16, 2023
 *      Author: smile
 */
#include "soft_IIC.h"
#include "user_delay.h"


void soft_IIC_Init(void)
{

	user_delay_init(400);
    iic_stop(); /* 停止总线上所有设备 */
}


/**
 * @brief       IIC延时函数,用于控制IIC读写速度
 * @param       无
 * @retval      无
 */
static void iic_delay(void)
{
	user_delay_us(1); /* 2us的延时, 读写速度在250Khz以内 */
}

/**
 * @brief       产生IIC起始信号
 * @param       无
 * @retval      无
 */
void iic_start(void)
{
    IIC_SDA(1);
    IIC_SCL(1);
    iic_delay();
    IIC_SDA(0); /* START信号: 当SCL为高时, SDA从高变成低, 表示起始信号 */
    iic_delay();
    IIC_SCL(0); /* 钳住I2C总线，准备发送或接收数据 */
    iic_delay();
}

/**
 * @brief       产生IIC停止信号
 * @param       无
 * @retval      无
 */
void iic_stop(void)
{
    IIC_SDA(0); /* STOP信号: 当SCL为高时, SDA从低变成高, 表示停止信号 */
    iic_delay();
    IIC_SCL(1);
    iic_delay();
    IIC_SDA(1); /* 发送I2C总线结束信号 */
    iic_delay();
}

/**
 * @brief       等待应答信号到来
 * @param       无
 * @retval      1，接收应答失败
 *              0，接收应答成功
 */
uint8_t iic_wait_ack(void)
{
    uint8_t waittime = 0;
    uint8_t rack = 0;

    IIC_SDA(1); /* 主机释放SDA线(此时外部器件可以拉低SDA线) */
    iic_delay();
    IIC_SCL(1); /* SCL=1, 此时从机可以返回ACK */
    iic_delay();

    while (IIC_READ_SDA) /* 等待应答 */
    {
        waittime++;

        if (waittime > 250)
        {
            iic_stop();
            rack = 1;
            break;
        }
    }

    IIC_SCL(0); /* SCL=0, 结束ACK检查 */
    iic_delay();
    return rack;
}

/**
 * @brief       产生ACK应答
 * @param       无
 * @retval      无
 */
void iic_ack(void)
{
    IIC_SDA(0); /* SCL 0 -> 1 时 SDA = 0,表示应答 */
    iic_delay();
    IIC_SCL(1); /* 产生一个时钟 */
    iic_delay();
    IIC_SCL(0);
    iic_delay();
    IIC_SDA(1); /* 主机释放SDA线 */
    iic_delay();
}

/**
 * @brief       不产生ACK应答
 * @param       无
 * @retval      无
 */
void iic_nack(void)
{
    IIC_SDA(1); /* SCL 0 -> 1  时 SDA = 1,表示不应答 */
    iic_delay();
    IIC_SCL(1); /* 产生一个时钟 */
    iic_delay();
    IIC_SCL(0);
    iic_delay();
}
/**
 * @brief       IIC发送一个字节
 * @param       data: 要发送的数据
 * @retval      无
 */
void iic_send_byte(uint8_t data)
{
    uint8_t t;

    for (t = 0; t < 8; t++)
    {
        IIC_SDA((data & 0x80) >> 7); /* 高位先发送 */
        iic_delay();
        IIC_SCL(1);
        iic_delay();
        IIC_SCL(0);
        data <<= 1; /* 左移1位,用于下一次发送 */
    }
    IIC_SDA(1); /* 发送完成, 主机释放SDA线 */
}

/**
 * @brief       IIC读取一个字节
 * @param       ack:  ack=1时，发送ack; ack=0时，发送nack
 * @retval      接收到的数据
 */
uint8_t iic_read_byte(uint8_t ack)
{
    uint8_t i, receive = 0;

    for (i = 0; i < 8; i++) /* 接收1个字节数据 */
    {
        receive <<= 1; /* 高位先输出,所以先收到的数据位要左移 */
        IIC_SCL(1);
        iic_delay();

        if (IIC_READ_SDA)
        {
            receive++;
        }

        IIC_SCL(0);
        iic_delay();
    }

    if (!ack)
    {
        iic_nack(); /* 发送nACK */
    }
    else
    {
        iic_ack(); /* 发送ACK */
    }

    return receive;
}
// IIC连续写
// addr:器件地址
// reg:寄存器地址
// len:写入长度
// buf:数据区
// 返回值:0,正常
//     其他,错误代码
uint8_t IIC_Write_Len(uint8_t addr, uint8_t reg, uint8_t len, uint8_t *buf)
{
    uint8_t i;
    iic_start();
    iic_send_byte((addr << 1) | 0); // 发送器件地址+写命令
    if (iic_wait_ack())             // 等待应答
    {
        iic_stop();
        return 1;
    }
    iic_send_byte(reg); // 写寄存器地址
    iic_wait_ack();     // 等待应答
    for (i = 0; i < len; i++)
    {
        iic_send_byte(buf[i]); // 发送数据
        if (iic_wait_ack())    // 等待ACK
        {
            iic_stop();
            return 1;
        }
    }
    iic_stop();
    return 0;
}
// IIC连续读
// addr:器件地址
// reg:要读取的寄存器地址
// len:要读取的长度
// buf:读取到的数据存储区
// 返回值:0,正常
//     其他,错误代码
uint8_t IIC_Read_Len(uint8_t addr, uint8_t reg, uint8_t len, uint8_t *buf)
{
    iic_start();
    iic_send_byte((addr << 1) | 0); // 发送器件地址+写命令
    if (iic_wait_ack())             // 等待应答
    {
        iic_stop();
        return 1;
    }
    iic_send_byte(reg); // 写寄存器地址
    iic_wait_ack();     // 等待应答
    iic_start();
    iic_send_byte((addr << 1) | 1); // 发送器件地址+读命令
    iic_wait_ack();                 // 等待应答
    while (len)
    {
        if (len == 1)
            *buf = iic_read_byte(0); // 读数据,发送nACK
        else
            *buf = iic_read_byte(1); // 读数据,发送ACK
        len--;
        buf++;
    }
    iic_stop(); // 产生一个停止条件
    return 0;
}
