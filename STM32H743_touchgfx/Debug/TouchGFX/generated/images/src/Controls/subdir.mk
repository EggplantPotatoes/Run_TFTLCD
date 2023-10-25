################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (11.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../TouchGFX/generated/images/src/Controls/image_board_image.cpp \
../TouchGFX/generated/images/src/Controls/image_control_line_indicator.cpp \
../TouchGFX/generated/images/src/Controls/image_controls_2dots.cpp \
../TouchGFX/generated/images/src/Controls/image_controls_3dots.cpp \
../TouchGFX/generated/images/src/Controls/image_controls_background.cpp \
../TouchGFX/generated/images/src/Controls/image_dot_indicator_.cpp \
../TouchGFX/generated/images/src/Controls/image_dot_indicator_highlighted.cpp \
../TouchGFX/generated/images/src/Controls/image_icon_brightness_large.cpp \
../TouchGFX/generated/images/src/Controls/image_icon_brightness_small.cpp \
../TouchGFX/generated/images/src/Controls/image_menu_icon.cpp \
../TouchGFX/generated/images/src/Controls/image_menu_icon_pressed.cpp \
../TouchGFX/generated/images/src/Controls/image_slider.cpp \
../TouchGFX/generated/images/src/Controls/image_slider_full.cpp \
../TouchGFX/generated/images/src/Controls/image_slider_knop.cpp \
../TouchGFX/generated/images/src/Controls/image_value_indicator_arrow.cpp \
../TouchGFX/generated/images/src/Controls/image_value_indicator_circle.cpp \
../TouchGFX/generated/images/src/Controls/image_value_indicator_glow.cpp \
../TouchGFX/generated/images/src/Controls/image_value_indicator_wheel.cpp 

OBJS += \
./TouchGFX/generated/images/src/Controls/image_board_image.o \
./TouchGFX/generated/images/src/Controls/image_control_line_indicator.o \
./TouchGFX/generated/images/src/Controls/image_controls_2dots.o \
./TouchGFX/generated/images/src/Controls/image_controls_3dots.o \
./TouchGFX/generated/images/src/Controls/image_controls_background.o \
./TouchGFX/generated/images/src/Controls/image_dot_indicator_.o \
./TouchGFX/generated/images/src/Controls/image_dot_indicator_highlighted.o \
./TouchGFX/generated/images/src/Controls/image_icon_brightness_large.o \
./TouchGFX/generated/images/src/Controls/image_icon_brightness_small.o \
./TouchGFX/generated/images/src/Controls/image_menu_icon.o \
./TouchGFX/generated/images/src/Controls/image_menu_icon_pressed.o \
./TouchGFX/generated/images/src/Controls/image_slider.o \
./TouchGFX/generated/images/src/Controls/image_slider_full.o \
./TouchGFX/generated/images/src/Controls/image_slider_knop.o \
./TouchGFX/generated/images/src/Controls/image_value_indicator_arrow.o \
./TouchGFX/generated/images/src/Controls/image_value_indicator_circle.o \
./TouchGFX/generated/images/src/Controls/image_value_indicator_glow.o \
./TouchGFX/generated/images/src/Controls/image_value_indicator_wheel.o 

CPP_DEPS += \
./TouchGFX/generated/images/src/Controls/image_board_image.d \
./TouchGFX/generated/images/src/Controls/image_control_line_indicator.d \
./TouchGFX/generated/images/src/Controls/image_controls_2dots.d \
./TouchGFX/generated/images/src/Controls/image_controls_3dots.d \
./TouchGFX/generated/images/src/Controls/image_controls_background.d \
./TouchGFX/generated/images/src/Controls/image_dot_indicator_.d \
./TouchGFX/generated/images/src/Controls/image_dot_indicator_highlighted.d \
./TouchGFX/generated/images/src/Controls/image_icon_brightness_large.d \
./TouchGFX/generated/images/src/Controls/image_icon_brightness_small.d \
./TouchGFX/generated/images/src/Controls/image_menu_icon.d \
./TouchGFX/generated/images/src/Controls/image_menu_icon_pressed.d \
./TouchGFX/generated/images/src/Controls/image_slider.d \
./TouchGFX/generated/images/src/Controls/image_slider_full.d \
./TouchGFX/generated/images/src/Controls/image_slider_knop.d \
./TouchGFX/generated/images/src/Controls/image_value_indicator_arrow.d \
./TouchGFX/generated/images/src/Controls/image_value_indicator_circle.d \
./TouchGFX/generated/images/src/Controls/image_value_indicator_glow.d \
./TouchGFX/generated/images/src/Controls/image_value_indicator_wheel.d 


# Each subdirectory must supply rules for building sources it contributes
TouchGFX/generated/images/src/Controls/%.o TouchGFX/generated/images/src/Controls/%.su TouchGFX/generated/images/src/Controls/%.cyclo: ../TouchGFX/generated/images/src/Controls/%.cpp TouchGFX/generated/images/src/Controls/subdir.mk
	arm-none-eabi-g++ "$<" -mcpu=cortex-m7 -std=gnu++14 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32H743xx -c -I../Core/Inc -I../Drivers/STM32H7xx_HAL_Driver/Inc -I../Drivers/STM32H7xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32H7xx/Include -I../Drivers/CMSIS/Include -I"F:/STM32_TFTLCD/my_code/STM32H743_touchgfx/pictures" -I"F:/STM32_TFTLCD/my_code/STM32H743_touchgfx/user_app" -I"F:/STM32_TFTLCD/my_code/STM32H743_touchgfx/user_bsp" -I../TouchGFX/App -I../TouchGFX/target/generated -I../TouchGFX/target -I../Middlewares/ST/touchgfx/framework/include -I../TouchGFX/generated/fonts/include -I../TouchGFX/generated/gui_generated/include -I../TouchGFX/generated/images/include -I../TouchGFX/generated/texts/include -I../TouchGFX/generated/videos/include -I../TouchGFX/gui/include -O0 -ffunction-sections -fdata-sections -fno-exceptions -fno-rtti -fno-use-cxa-atexit -Wall -femit-class-debug-always -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-TouchGFX-2f-generated-2f-images-2f-src-2f-Controls

clean-TouchGFX-2f-generated-2f-images-2f-src-2f-Controls:
	-$(RM) ./TouchGFX/generated/images/src/Controls/image_board_image.cyclo ./TouchGFX/generated/images/src/Controls/image_board_image.d ./TouchGFX/generated/images/src/Controls/image_board_image.o ./TouchGFX/generated/images/src/Controls/image_board_image.su ./TouchGFX/generated/images/src/Controls/image_control_line_indicator.cyclo ./TouchGFX/generated/images/src/Controls/image_control_line_indicator.d ./TouchGFX/generated/images/src/Controls/image_control_line_indicator.o ./TouchGFX/generated/images/src/Controls/image_control_line_indicator.su ./TouchGFX/generated/images/src/Controls/image_controls_2dots.cyclo ./TouchGFX/generated/images/src/Controls/image_controls_2dots.d ./TouchGFX/generated/images/src/Controls/image_controls_2dots.o ./TouchGFX/generated/images/src/Controls/image_controls_2dots.su ./TouchGFX/generated/images/src/Controls/image_controls_3dots.cyclo ./TouchGFX/generated/images/src/Controls/image_controls_3dots.d ./TouchGFX/generated/images/src/Controls/image_controls_3dots.o ./TouchGFX/generated/images/src/Controls/image_controls_3dots.su ./TouchGFX/generated/images/src/Controls/image_controls_background.cyclo ./TouchGFX/generated/images/src/Controls/image_controls_background.d ./TouchGFX/generated/images/src/Controls/image_controls_background.o ./TouchGFX/generated/images/src/Controls/image_controls_background.su ./TouchGFX/generated/images/src/Controls/image_dot_indicator_.cyclo ./TouchGFX/generated/images/src/Controls/image_dot_indicator_.d ./TouchGFX/generated/images/src/Controls/image_dot_indicator_.o ./TouchGFX/generated/images/src/Controls/image_dot_indicator_.su ./TouchGFX/generated/images/src/Controls/image_dot_indicator_highlighted.cyclo ./TouchGFX/generated/images/src/Controls/image_dot_indicator_highlighted.d ./TouchGFX/generated/images/src/Controls/image_dot_indicator_highlighted.o ./TouchGFX/generated/images/src/Controls/image_dot_indicator_highlighted.su ./TouchGFX/generated/images/src/Controls/image_icon_brightness_large.cyclo ./TouchGFX/generated/images/src/Controls/image_icon_brightness_large.d ./TouchGFX/generated/images/src/Controls/image_icon_brightness_large.o ./TouchGFX/generated/images/src/Controls/image_icon_brightness_large.su ./TouchGFX/generated/images/src/Controls/image_icon_brightness_small.cyclo ./TouchGFX/generated/images/src/Controls/image_icon_brightness_small.d ./TouchGFX/generated/images/src/Controls/image_icon_brightness_small.o ./TouchGFX/generated/images/src/Controls/image_icon_brightness_small.su ./TouchGFX/generated/images/src/Controls/image_menu_icon.cyclo ./TouchGFX/generated/images/src/Controls/image_menu_icon.d ./TouchGFX/generated/images/src/Controls/image_menu_icon.o ./TouchGFX/generated/images/src/Controls/image_menu_icon.su ./TouchGFX/generated/images/src/Controls/image_menu_icon_pressed.cyclo ./TouchGFX/generated/images/src/Controls/image_menu_icon_pressed.d ./TouchGFX/generated/images/src/Controls/image_menu_icon_pressed.o ./TouchGFX/generated/images/src/Controls/image_menu_icon_pressed.su ./TouchGFX/generated/images/src/Controls/image_slider.cyclo ./TouchGFX/generated/images/src/Controls/image_slider.d ./TouchGFX/generated/images/src/Controls/image_slider.o ./TouchGFX/generated/images/src/Controls/image_slider.su ./TouchGFX/generated/images/src/Controls/image_slider_full.cyclo ./TouchGFX/generated/images/src/Controls/image_slider_full.d ./TouchGFX/generated/images/src/Controls/image_slider_full.o ./TouchGFX/generated/images/src/Controls/image_slider_full.su ./TouchGFX/generated/images/src/Controls/image_slider_knop.cyclo ./TouchGFX/generated/images/src/Controls/image_slider_knop.d ./TouchGFX/generated/images/src/Controls/image_slider_knop.o ./TouchGFX/generated/images/src/Controls/image_slider_knop.su ./TouchGFX/generated/images/src/Controls/image_value_indicator_arrow.cyclo ./TouchGFX/generated/images/src/Controls/image_value_indicator_arrow.d ./TouchGFX/generated/images/src/Controls/image_value_indicator_arrow.o ./TouchGFX/generated/images/src/Controls/image_value_indicator_arrow.su ./TouchGFX/generated/images/src/Controls/image_value_indicator_circle.cyclo ./TouchGFX/generated/images/src/Controls/image_value_indicator_circle.d ./TouchGFX/generated/images/src/Controls/image_value_indicator_circle.o ./TouchGFX/generated/images/src/Controls/image_value_indicator_circle.su ./TouchGFX/generated/images/src/Controls/image_value_indicator_glow.cyclo ./TouchGFX/generated/images/src/Controls/image_value_indicator_glow.d ./TouchGFX/generated/images/src/Controls/image_value_indicator_glow.o ./TouchGFX/generated/images/src/Controls/image_value_indicator_glow.su ./TouchGFX/generated/images/src/Controls/image_value_indicator_wheel.cyclo ./TouchGFX/generated/images/src/Controls/image_value_indicator_wheel.d ./TouchGFX/generated/images/src/Controls/image_value_indicator_wheel.o ./TouchGFX/generated/images/src/Controls/image_value_indicator_wheel.su

.PHONY: clean-TouchGFX-2f-generated-2f-images-2f-src-2f-Controls

