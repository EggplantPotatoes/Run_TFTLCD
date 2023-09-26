################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (11.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../user_app/TFTLCD.c \
../user_app/spi_flash_data.c 

OBJS += \
./user_app/TFTLCD.o \
./user_app/spi_flash_data.o 

C_DEPS += \
./user_app/TFTLCD.d \
./user_app/spi_flash_data.d 


# Each subdirectory must supply rules for building sources it contributes
user_app/%.o user_app/%.su user_app/%.cyclo: ../user_app/%.c user_app/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32H743xx -c -I../Core/Inc -I../Drivers/STM32H7xx_HAL_Driver/Inc -I../Drivers/STM32H7xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32H7xx/Include -I../Drivers/CMSIS/Include -I"F:/STM32_TFTLCD/my_code/STM32H743_show_picture/user_app" -I"F:/STM32_TFTLCD/my_code/STM32H743_show_picture/pictures" -I"F:/STM32_TFTLCD/my_code/STM32H743_show_picture/user_bsp" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-user_app

clean-user_app:
	-$(RM) ./user_app/TFTLCD.cyclo ./user_app/TFTLCD.d ./user_app/TFTLCD.o ./user_app/TFTLCD.su ./user_app/spi_flash_data.cyclo ./user_app/spi_flash_data.d ./user_app/spi_flash_data.o ./user_app/spi_flash_data.su

.PHONY: clean-user_app

