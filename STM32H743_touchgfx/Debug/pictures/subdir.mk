################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (11.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../pictures/ceshitu_1.c \
../pictures/ceshitupian1.c \
../pictures/ceshitupian2.c \
../pictures/ceshitupian3.c \
../pictures/ceshitupian4.c \
../pictures/ceshitupian6.c 

C_DEPS += \
./pictures/ceshitu_1.d \
./pictures/ceshitupian1.d \
./pictures/ceshitupian2.d \
./pictures/ceshitupian3.d \
./pictures/ceshitupian4.d \
./pictures/ceshitupian6.d 

OBJS += \
./pictures/ceshitu_1.o \
./pictures/ceshitupian1.o \
./pictures/ceshitupian2.o \
./pictures/ceshitupian3.o \
./pictures/ceshitupian4.o \
./pictures/ceshitupian6.o 


# Each subdirectory must supply rules for building sources it contributes
pictures/%.o pictures/%.su pictures/%.cyclo: ../pictures/%.c pictures/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32H743xx -c -I../Core/Inc -I../Drivers/STM32H7xx_HAL_Driver/Inc -I../Drivers/STM32H7xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32H7xx/Include -I../Drivers/CMSIS/Include -I"F:/STM32_TFTLCD/my_code/STM32H743_touchgfx/pictures" -I"F:/STM32_TFTLCD/my_code/STM32H743_touchgfx/user_app" -I"F:/STM32_TFTLCD/my_code/STM32H743_touchgfx/user_bsp" -I../TouchGFX/App -I../TouchGFX/target/generated -I../TouchGFX/target -I../Middlewares/ST/touchgfx/framework/include -I../TouchGFX/generated/fonts/include -I../TouchGFX/generated/gui_generated/include -I../TouchGFX/generated/images/include -I../TouchGFX/generated/texts/include -I../TouchGFX/generated/videos/include -I../TouchGFX/gui/include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-pictures

clean-pictures:
	-$(RM) ./pictures/ceshitu_1.cyclo ./pictures/ceshitu_1.d ./pictures/ceshitu_1.o ./pictures/ceshitu_1.su ./pictures/ceshitupian1.cyclo ./pictures/ceshitupian1.d ./pictures/ceshitupian1.o ./pictures/ceshitupian1.su ./pictures/ceshitupian2.cyclo ./pictures/ceshitupian2.d ./pictures/ceshitupian2.o ./pictures/ceshitupian2.su ./pictures/ceshitupian3.cyclo ./pictures/ceshitupian3.d ./pictures/ceshitupian3.o ./pictures/ceshitupian3.su ./pictures/ceshitupian4.cyclo ./pictures/ceshitupian4.d ./pictures/ceshitupian4.o ./pictures/ceshitupian4.su ./pictures/ceshitupian6.cyclo ./pictures/ceshitupian6.d ./pictures/ceshitupian6.o ./pictures/ceshitupian6.su

.PHONY: clean-pictures

