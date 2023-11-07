################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (11.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../user_bsp/QSPI_flash.c \
../user_bsp/key_led.c \
../user_bsp/sdram.c \
../user_bsp/soft_IIC.c \
../user_bsp/touch.c \
../user_bsp/user_delay.c \
../user_bsp/user_uart.c 

C_DEPS += \
./user_bsp/QSPI_flash.d \
./user_bsp/key_led.d \
./user_bsp/sdram.d \
./user_bsp/soft_IIC.d \
./user_bsp/touch.d \
./user_bsp/user_delay.d \
./user_bsp/user_uart.d 

OBJS += \
./user_bsp/QSPI_flash.o \
./user_bsp/key_led.o \
./user_bsp/sdram.o \
./user_bsp/soft_IIC.o \
./user_bsp/touch.o \
./user_bsp/user_delay.o \
./user_bsp/user_uart.o 


# Each subdirectory must supply rules for building sources it contributes
user_bsp/%.o user_bsp/%.su user_bsp/%.cyclo: ../user_bsp/%.c user_bsp/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32H743xx -c -I../Core/Inc -I../TouchGFX/App -I../TouchGFX/target/generated -I../TouchGFX/target -I../Drivers/STM32H7xx_HAL_Driver/Inc -I../Drivers/STM32H7xx_HAL_Driver/Inc/Legacy -I../Middlewares/Third_Party/FreeRTOS/Source/include -I../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM4F -I../Drivers/CMSIS/Device/ST/STM32H7xx/Include -I../Drivers/CMSIS/Include -I../Middlewares/ST/touchgfx/framework/include -I../TouchGFX/generated/fonts/include -I../TouchGFX/generated/gui_generated/include -I../TouchGFX/generated/images/include -I../TouchGFX/generated/texts/include -I../TouchGFX/generated/videos/include -I../TouchGFX/gui/include -I"F:/STM32_TFTLCD/my_code/TouchGFX_MemoryMapped/user_bsp" -I../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-user_bsp

clean-user_bsp:
	-$(RM) ./user_bsp/QSPI_flash.cyclo ./user_bsp/QSPI_flash.d ./user_bsp/QSPI_flash.o ./user_bsp/QSPI_flash.su ./user_bsp/key_led.cyclo ./user_bsp/key_led.d ./user_bsp/key_led.o ./user_bsp/key_led.su ./user_bsp/sdram.cyclo ./user_bsp/sdram.d ./user_bsp/sdram.o ./user_bsp/sdram.su ./user_bsp/soft_IIC.cyclo ./user_bsp/soft_IIC.d ./user_bsp/soft_IIC.o ./user_bsp/soft_IIC.su ./user_bsp/touch.cyclo ./user_bsp/touch.d ./user_bsp/touch.o ./user_bsp/touch.su ./user_bsp/user_delay.cyclo ./user_bsp/user_delay.d ./user_bsp/user_delay.o ./user_bsp/user_delay.su ./user_bsp/user_uart.cyclo ./user_bsp/user_uart.d ./user_bsp/user_uart.o ./user_bsp/user_uart.su

.PHONY: clean-user_bsp

