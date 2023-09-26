################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (11.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../user_bsp/QSPI_flash.c \
../user_bsp/key_led.c \
../user_bsp/sdram.c \
../user_bsp/user_uart.c 

OBJS += \
./user_bsp/QSPI_flash.o \
./user_bsp/key_led.o \
./user_bsp/sdram.o \
./user_bsp/user_uart.o 

C_DEPS += \
./user_bsp/QSPI_flash.d \
./user_bsp/key_led.d \
./user_bsp/sdram.d \
./user_bsp/user_uart.d 


# Each subdirectory must supply rules for building sources it contributes
user_bsp/%.o user_bsp/%.su user_bsp/%.cyclo: ../user_bsp/%.c user_bsp/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32H743xx -c -I../Core/Inc -I../Drivers/STM32H7xx_HAL_Driver/Inc -I../Drivers/STM32H7xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32H7xx/Include -I../Drivers/CMSIS/Include -I"F:/STM32_TFTLCD/my_code/STM32H743_show_picture/user_app" -I"F:/STM32_TFTLCD/my_code/STM32H743_show_picture/pictures" -I"F:/STM32_TFTLCD/my_code/STM32H743_show_picture/user_bsp" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-user_bsp

clean-user_bsp:
	-$(RM) ./user_bsp/QSPI_flash.cyclo ./user_bsp/QSPI_flash.d ./user_bsp/QSPI_flash.o ./user_bsp/QSPI_flash.su ./user_bsp/key_led.cyclo ./user_bsp/key_led.d ./user_bsp/key_led.o ./user_bsp/key_led.su ./user_bsp/sdram.cyclo ./user_bsp/sdram.d ./user_bsp/sdram.o ./user_bsp/sdram.su ./user_bsp/user_uart.cyclo ./user_bsp/user_uart.d ./user_bsp/user_uart.o ./user_bsp/user_uart.su

.PHONY: clean-user_bsp

