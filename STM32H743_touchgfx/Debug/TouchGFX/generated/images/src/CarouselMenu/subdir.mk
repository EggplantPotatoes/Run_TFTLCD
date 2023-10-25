################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (11.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../TouchGFX/generated/images/src/CarouselMenu/image_carousel_background.cpp \
../TouchGFX/generated/images/src/CarouselMenu/image_carousel_menu_icons_2048_large.cpp \
../TouchGFX/generated/images/src/CarouselMenu/image_carousel_menu_icons_2048_medium.cpp \
../TouchGFX/generated/images/src/CarouselMenu/image_carousel_menu_icons_2048_small.cpp \
../TouchGFX/generated/images/src/CarouselMenu/image_carousel_menu_icons_controls_large.cpp \
../TouchGFX/generated/images/src/CarouselMenu/image_carousel_menu_icons_controls_medium.cpp \
../TouchGFX/generated/images/src/CarouselMenu/image_carousel_menu_icons_controls_small.cpp \
../TouchGFX/generated/images/src/CarouselMenu/image_carousel_menu_icons_game_2d_large.cpp \
../TouchGFX/generated/images/src/CarouselMenu/image_carousel_menu_icons_game_2d_medium.cpp \
../TouchGFX/generated/images/src/CarouselMenu/image_carousel_menu_icons_game_2d_small.cpp \
../TouchGFX/generated/images/src/CarouselMenu/image_carousel_menu_icons_home_automation_large.cpp \
../TouchGFX/generated/images/src/CarouselMenu/image_carousel_menu_icons_home_automation_medium.cpp \
../TouchGFX/generated/images/src/CarouselMenu/image_carousel_menu_icons_home_automation_small.cpp \
../TouchGFX/generated/images/src/CarouselMenu/image_carousel_menu_icons_settings_large.cpp \
../TouchGFX/generated/images/src/CarouselMenu/image_carousel_menu_icons_settings_medium.cpp \
../TouchGFX/generated/images/src/CarouselMenu/image_carousel_menu_icons_settings_small.cpp 

OBJS += \
./TouchGFX/generated/images/src/CarouselMenu/image_carousel_background.o \
./TouchGFX/generated/images/src/CarouselMenu/image_carousel_menu_icons_2048_large.o \
./TouchGFX/generated/images/src/CarouselMenu/image_carousel_menu_icons_2048_medium.o \
./TouchGFX/generated/images/src/CarouselMenu/image_carousel_menu_icons_2048_small.o \
./TouchGFX/generated/images/src/CarouselMenu/image_carousel_menu_icons_controls_large.o \
./TouchGFX/generated/images/src/CarouselMenu/image_carousel_menu_icons_controls_medium.o \
./TouchGFX/generated/images/src/CarouselMenu/image_carousel_menu_icons_controls_small.o \
./TouchGFX/generated/images/src/CarouselMenu/image_carousel_menu_icons_game_2d_large.o \
./TouchGFX/generated/images/src/CarouselMenu/image_carousel_menu_icons_game_2d_medium.o \
./TouchGFX/generated/images/src/CarouselMenu/image_carousel_menu_icons_game_2d_small.o \
./TouchGFX/generated/images/src/CarouselMenu/image_carousel_menu_icons_home_automation_large.o \
./TouchGFX/generated/images/src/CarouselMenu/image_carousel_menu_icons_home_automation_medium.o \
./TouchGFX/generated/images/src/CarouselMenu/image_carousel_menu_icons_home_automation_small.o \
./TouchGFX/generated/images/src/CarouselMenu/image_carousel_menu_icons_settings_large.o \
./TouchGFX/generated/images/src/CarouselMenu/image_carousel_menu_icons_settings_medium.o \
./TouchGFX/generated/images/src/CarouselMenu/image_carousel_menu_icons_settings_small.o 

CPP_DEPS += \
./TouchGFX/generated/images/src/CarouselMenu/image_carousel_background.d \
./TouchGFX/generated/images/src/CarouselMenu/image_carousel_menu_icons_2048_large.d \
./TouchGFX/generated/images/src/CarouselMenu/image_carousel_menu_icons_2048_medium.d \
./TouchGFX/generated/images/src/CarouselMenu/image_carousel_menu_icons_2048_small.d \
./TouchGFX/generated/images/src/CarouselMenu/image_carousel_menu_icons_controls_large.d \
./TouchGFX/generated/images/src/CarouselMenu/image_carousel_menu_icons_controls_medium.d \
./TouchGFX/generated/images/src/CarouselMenu/image_carousel_menu_icons_controls_small.d \
./TouchGFX/generated/images/src/CarouselMenu/image_carousel_menu_icons_game_2d_large.d \
./TouchGFX/generated/images/src/CarouselMenu/image_carousel_menu_icons_game_2d_medium.d \
./TouchGFX/generated/images/src/CarouselMenu/image_carousel_menu_icons_game_2d_small.d \
./TouchGFX/generated/images/src/CarouselMenu/image_carousel_menu_icons_home_automation_large.d \
./TouchGFX/generated/images/src/CarouselMenu/image_carousel_menu_icons_home_automation_medium.d \
./TouchGFX/generated/images/src/CarouselMenu/image_carousel_menu_icons_home_automation_small.d \
./TouchGFX/generated/images/src/CarouselMenu/image_carousel_menu_icons_settings_large.d \
./TouchGFX/generated/images/src/CarouselMenu/image_carousel_menu_icons_settings_medium.d \
./TouchGFX/generated/images/src/CarouselMenu/image_carousel_menu_icons_settings_small.d 


# Each subdirectory must supply rules for building sources it contributes
TouchGFX/generated/images/src/CarouselMenu/%.o TouchGFX/generated/images/src/CarouselMenu/%.su TouchGFX/generated/images/src/CarouselMenu/%.cyclo: ../TouchGFX/generated/images/src/CarouselMenu/%.cpp TouchGFX/generated/images/src/CarouselMenu/subdir.mk
	arm-none-eabi-g++ "$<" -mcpu=cortex-m7 -std=gnu++14 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32H743xx -c -I../Core/Inc -I../Drivers/STM32H7xx_HAL_Driver/Inc -I../Drivers/STM32H7xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32H7xx/Include -I../Drivers/CMSIS/Include -I"F:/STM32_TFTLCD/my_code/STM32H743_touchgfx/pictures" -I"F:/STM32_TFTLCD/my_code/STM32H743_touchgfx/user_app" -I"F:/STM32_TFTLCD/my_code/STM32H743_touchgfx/user_bsp" -I../TouchGFX/App -I../TouchGFX/target/generated -I../TouchGFX/target -I../Middlewares/ST/touchgfx/framework/include -I../TouchGFX/generated/fonts/include -I../TouchGFX/generated/gui_generated/include -I../TouchGFX/generated/images/include -I../TouchGFX/generated/texts/include -I../TouchGFX/generated/videos/include -I../TouchGFX/gui/include -O0 -ffunction-sections -fdata-sections -fno-exceptions -fno-rtti -fno-use-cxa-atexit -Wall -femit-class-debug-always -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-TouchGFX-2f-generated-2f-images-2f-src-2f-CarouselMenu

clean-TouchGFX-2f-generated-2f-images-2f-src-2f-CarouselMenu:
	-$(RM) ./TouchGFX/generated/images/src/CarouselMenu/image_carousel_background.cyclo ./TouchGFX/generated/images/src/CarouselMenu/image_carousel_background.d ./TouchGFX/generated/images/src/CarouselMenu/image_carousel_background.o ./TouchGFX/generated/images/src/CarouselMenu/image_carousel_background.su ./TouchGFX/generated/images/src/CarouselMenu/image_carousel_menu_icons_2048_large.cyclo ./TouchGFX/generated/images/src/CarouselMenu/image_carousel_menu_icons_2048_large.d ./TouchGFX/generated/images/src/CarouselMenu/image_carousel_menu_icons_2048_large.o ./TouchGFX/generated/images/src/CarouselMenu/image_carousel_menu_icons_2048_large.su ./TouchGFX/generated/images/src/CarouselMenu/image_carousel_menu_icons_2048_medium.cyclo ./TouchGFX/generated/images/src/CarouselMenu/image_carousel_menu_icons_2048_medium.d ./TouchGFX/generated/images/src/CarouselMenu/image_carousel_menu_icons_2048_medium.o ./TouchGFX/generated/images/src/CarouselMenu/image_carousel_menu_icons_2048_medium.su ./TouchGFX/generated/images/src/CarouselMenu/image_carousel_menu_icons_2048_small.cyclo ./TouchGFX/generated/images/src/CarouselMenu/image_carousel_menu_icons_2048_small.d ./TouchGFX/generated/images/src/CarouselMenu/image_carousel_menu_icons_2048_small.o ./TouchGFX/generated/images/src/CarouselMenu/image_carousel_menu_icons_2048_small.su ./TouchGFX/generated/images/src/CarouselMenu/image_carousel_menu_icons_controls_large.cyclo ./TouchGFX/generated/images/src/CarouselMenu/image_carousel_menu_icons_controls_large.d ./TouchGFX/generated/images/src/CarouselMenu/image_carousel_menu_icons_controls_large.o ./TouchGFX/generated/images/src/CarouselMenu/image_carousel_menu_icons_controls_large.su ./TouchGFX/generated/images/src/CarouselMenu/image_carousel_menu_icons_controls_medium.cyclo ./TouchGFX/generated/images/src/CarouselMenu/image_carousel_menu_icons_controls_medium.d ./TouchGFX/generated/images/src/CarouselMenu/image_carousel_menu_icons_controls_medium.o ./TouchGFX/generated/images/src/CarouselMenu/image_carousel_menu_icons_controls_medium.su ./TouchGFX/generated/images/src/CarouselMenu/image_carousel_menu_icons_controls_small.cyclo ./TouchGFX/generated/images/src/CarouselMenu/image_carousel_menu_icons_controls_small.d ./TouchGFX/generated/images/src/CarouselMenu/image_carousel_menu_icons_controls_small.o ./TouchGFX/generated/images/src/CarouselMenu/image_carousel_menu_icons_controls_small.su ./TouchGFX/generated/images/src/CarouselMenu/image_carousel_menu_icons_game_2d_large.cyclo ./TouchGFX/generated/images/src/CarouselMenu/image_carousel_menu_icons_game_2d_large.d ./TouchGFX/generated/images/src/CarouselMenu/image_carousel_menu_icons_game_2d_large.o ./TouchGFX/generated/images/src/CarouselMenu/image_carousel_menu_icons_game_2d_large.su ./TouchGFX/generated/images/src/CarouselMenu/image_carousel_menu_icons_game_2d_medium.cyclo ./TouchGFX/generated/images/src/CarouselMenu/image_carousel_menu_icons_game_2d_medium.d ./TouchGFX/generated/images/src/CarouselMenu/image_carousel_menu_icons_game_2d_medium.o ./TouchGFX/generated/images/src/CarouselMenu/image_carousel_menu_icons_game_2d_medium.su ./TouchGFX/generated/images/src/CarouselMenu/image_carousel_menu_icons_game_2d_small.cyclo ./TouchGFX/generated/images/src/CarouselMenu/image_carousel_menu_icons_game_2d_small.d ./TouchGFX/generated/images/src/CarouselMenu/image_carousel_menu_icons_game_2d_small.o ./TouchGFX/generated/images/src/CarouselMenu/image_carousel_menu_icons_game_2d_small.su ./TouchGFX/generated/images/src/CarouselMenu/image_carousel_menu_icons_home_automation_large.cyclo ./TouchGFX/generated/images/src/CarouselMenu/image_carousel_menu_icons_home_automation_large.d ./TouchGFX/generated/images/src/CarouselMenu/image_carousel_menu_icons_home_automation_large.o ./TouchGFX/generated/images/src/CarouselMenu/image_carousel_menu_icons_home_automation_large.su ./TouchGFX/generated/images/src/CarouselMenu/image_carousel_menu_icons_home_automation_medium.cyclo ./TouchGFX/generated/images/src/CarouselMenu/image_carousel_menu_icons_home_automation_medium.d ./TouchGFX/generated/images/src/CarouselMenu/image_carousel_menu_icons_home_automation_medium.o ./TouchGFX/generated/images/src/CarouselMenu/image_carousel_menu_icons_home_automation_medium.su ./TouchGFX/generated/images/src/CarouselMenu/image_carousel_menu_icons_home_automation_small.cyclo ./TouchGFX/generated/images/src/CarouselMenu/image_carousel_menu_icons_home_automation_small.d ./TouchGFX/generated/images/src/CarouselMenu/image_carousel_menu_icons_home_automation_small.o ./TouchGFX/generated/images/src/CarouselMenu/image_carousel_menu_icons_home_automation_small.su ./TouchGFX/generated/images/src/CarouselMenu/image_carousel_menu_icons_settings_large.cyclo ./TouchGFX/generated/images/src/CarouselMenu/image_carousel_menu_icons_settings_large.d ./TouchGFX/generated/images/src/CarouselMenu/image_carousel_menu_icons_settings_large.o ./TouchGFX/generated/images/src/CarouselMenu/image_carousel_menu_icons_settings_large.su ./TouchGFX/generated/images/src/CarouselMenu/image_carousel_menu_icons_settings_medium.cyclo ./TouchGFX/generated/images/src/CarouselMenu/image_carousel_menu_icons_settings_medium.d ./TouchGFX/generated/images/src/CarouselMenu/image_carousel_menu_icons_settings_medium.o ./TouchGFX/generated/images/src/CarouselMenu/image_carousel_menu_icons_settings_medium.su ./TouchGFX/generated/images/src/CarouselMenu/image_carousel_menu_icons_settings_small.cyclo ./TouchGFX/generated/images/src/CarouselMenu/image_carousel_menu_icons_settings_small.d ./TouchGFX/generated/images/src/CarouselMenu/image_carousel_menu_icons_settings_small.o ./TouchGFX/generated/images/src/CarouselMenu/image_carousel_menu_icons_settings_small.su

.PHONY: clean-TouchGFX-2f-generated-2f-images-2f-src-2f-CarouselMenu

