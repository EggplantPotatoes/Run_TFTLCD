################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (11.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../TouchGFX/gui/src/screen2_screen/Screen2Presenter.cpp \
../TouchGFX/gui/src/screen2_screen/Screen2View.cpp 

OBJS += \
./TouchGFX/gui/src/screen2_screen/Screen2Presenter.o \
./TouchGFX/gui/src/screen2_screen/Screen2View.o 

CPP_DEPS += \
./TouchGFX/gui/src/screen2_screen/Screen2Presenter.d \
./TouchGFX/gui/src/screen2_screen/Screen2View.d 


# Each subdirectory must supply rules for building sources it contributes
TouchGFX/gui/src/screen2_screen/%.o TouchGFX/gui/src/screen2_screen/%.su TouchGFX/gui/src/screen2_screen/%.cyclo: ../TouchGFX/gui/src/screen2_screen/%.cpp TouchGFX/gui/src/screen2_screen/subdir.mk
	arm-none-eabi-g++ "$<" -mcpu=cortex-m7 -std=gnu++14 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32H743xx -c -I../Core/Inc -I../Drivers/STM32H7xx_HAL_Driver/Inc -I../Drivers/STM32H7xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32H7xx/Include -I../Drivers/CMSIS/Include -I"F:/STM32_TFTLCD/my_code/STM32H743_touchgfx/pictures" -I"F:/STM32_TFTLCD/my_code/STM32H743_touchgfx/user_app" -I"F:/STM32_TFTLCD/my_code/STM32H743_touchgfx/user_bsp" -I../TouchGFX/App -I../TouchGFX/target/generated -I../TouchGFX/target -I../Middlewares/ST/touchgfx/framework/include -I../TouchGFX/generated/fonts/include -I../TouchGFX/generated/gui_generated/include -I../TouchGFX/generated/images/include -I../TouchGFX/generated/texts/include -I../TouchGFX/generated/videos/include -I../TouchGFX/gui/include -O0 -ffunction-sections -fdata-sections -fno-exceptions -fno-rtti -fno-use-cxa-atexit -Wall -femit-class-debug-always -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-TouchGFX-2f-gui-2f-src-2f-screen2_screen

clean-TouchGFX-2f-gui-2f-src-2f-screen2_screen:
	-$(RM) ./TouchGFX/gui/src/screen2_screen/Screen2Presenter.cyclo ./TouchGFX/gui/src/screen2_screen/Screen2Presenter.d ./TouchGFX/gui/src/screen2_screen/Screen2Presenter.o ./TouchGFX/gui/src/screen2_screen/Screen2Presenter.su ./TouchGFX/gui/src/screen2_screen/Screen2View.cyclo ./TouchGFX/gui/src/screen2_screen/Screen2View.d ./TouchGFX/gui/src/screen2_screen/Screen2View.o ./TouchGFX/gui/src/screen2_screen/Screen2View.su

.PHONY: clean-TouchGFX-2f-gui-2f-src-2f-screen2_screen

