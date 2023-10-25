################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (11.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../TouchGFX/generated/images/src/__generated/image_alternate_theme_images_widgets_button_regular_height_50_tiny_round_action.cpp \
../TouchGFX/generated/images/src/__generated/image_alternate_theme_images_widgets_button_regular_height_50_tiny_round_active.cpp \
../TouchGFX/generated/images/src/__generated/image_alternate_theme_images_widgets_button_regular_height_50_tiny_round_disabled.cpp \
../TouchGFX/generated/images/src/__generated/image_alternate_theme_images_widgets_button_regular_height_50_tiny_round_pressed.cpp 

OBJS += \
./TouchGFX/generated/images/src/__generated/image_alternate_theme_images_widgets_button_regular_height_50_tiny_round_action.o \
./TouchGFX/generated/images/src/__generated/image_alternate_theme_images_widgets_button_regular_height_50_tiny_round_active.o \
./TouchGFX/generated/images/src/__generated/image_alternate_theme_images_widgets_button_regular_height_50_tiny_round_disabled.o \
./TouchGFX/generated/images/src/__generated/image_alternate_theme_images_widgets_button_regular_height_50_tiny_round_pressed.o 

CPP_DEPS += \
./TouchGFX/generated/images/src/__generated/image_alternate_theme_images_widgets_button_regular_height_50_tiny_round_action.d \
./TouchGFX/generated/images/src/__generated/image_alternate_theme_images_widgets_button_regular_height_50_tiny_round_active.d \
./TouchGFX/generated/images/src/__generated/image_alternate_theme_images_widgets_button_regular_height_50_tiny_round_disabled.d \
./TouchGFX/generated/images/src/__generated/image_alternate_theme_images_widgets_button_regular_height_50_tiny_round_pressed.d 


# Each subdirectory must supply rules for building sources it contributes
TouchGFX/generated/images/src/__generated/%.o TouchGFX/generated/images/src/__generated/%.su TouchGFX/generated/images/src/__generated/%.cyclo: ../TouchGFX/generated/images/src/__generated/%.cpp TouchGFX/generated/images/src/__generated/subdir.mk
	arm-none-eabi-g++ "$<" -mcpu=cortex-m7 -std=gnu++14 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32H743xx -c -I../Core/Inc -I../Drivers/STM32H7xx_HAL_Driver/Inc -I../Drivers/STM32H7xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32H7xx/Include -I../Drivers/CMSIS/Include -I"F:/STM32_TFTLCD/my_code/STM32H743_touchgfx/pictures" -I"F:/STM32_TFTLCD/my_code/STM32H743_touchgfx/user_app" -I"F:/STM32_TFTLCD/my_code/STM32H743_touchgfx/user_bsp" -I../TouchGFX/App -I../TouchGFX/target/generated -I../TouchGFX/target -I../Middlewares/ST/touchgfx/framework/include -I../TouchGFX/generated/fonts/include -I../TouchGFX/generated/gui_generated/include -I../TouchGFX/generated/images/include -I../TouchGFX/generated/texts/include -I../TouchGFX/generated/videos/include -I../TouchGFX/gui/include -O0 -ffunction-sections -fdata-sections -fno-exceptions -fno-rtti -fno-use-cxa-atexit -Wall -femit-class-debug-always -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-TouchGFX-2f-generated-2f-images-2f-src-2f-__generated

clean-TouchGFX-2f-generated-2f-images-2f-src-2f-__generated:
	-$(RM) ./TouchGFX/generated/images/src/__generated/image_alternate_theme_images_widgets_button_regular_height_50_tiny_round_action.cyclo ./TouchGFX/generated/images/src/__generated/image_alternate_theme_images_widgets_button_regular_height_50_tiny_round_action.d ./TouchGFX/generated/images/src/__generated/image_alternate_theme_images_widgets_button_regular_height_50_tiny_round_action.o ./TouchGFX/generated/images/src/__generated/image_alternate_theme_images_widgets_button_regular_height_50_tiny_round_action.su ./TouchGFX/generated/images/src/__generated/image_alternate_theme_images_widgets_button_regular_height_50_tiny_round_active.cyclo ./TouchGFX/generated/images/src/__generated/image_alternate_theme_images_widgets_button_regular_height_50_tiny_round_active.d ./TouchGFX/generated/images/src/__generated/image_alternate_theme_images_widgets_button_regular_height_50_tiny_round_active.o ./TouchGFX/generated/images/src/__generated/image_alternate_theme_images_widgets_button_regular_height_50_tiny_round_active.su ./TouchGFX/generated/images/src/__generated/image_alternate_theme_images_widgets_button_regular_height_50_tiny_round_disabled.cyclo ./TouchGFX/generated/images/src/__generated/image_alternate_theme_images_widgets_button_regular_height_50_tiny_round_disabled.d ./TouchGFX/generated/images/src/__generated/image_alternate_theme_images_widgets_button_regular_height_50_tiny_round_disabled.o ./TouchGFX/generated/images/src/__generated/image_alternate_theme_images_widgets_button_regular_height_50_tiny_round_disabled.su ./TouchGFX/generated/images/src/__generated/image_alternate_theme_images_widgets_button_regular_height_50_tiny_round_pressed.cyclo ./TouchGFX/generated/images/src/__generated/image_alternate_theme_images_widgets_button_regular_height_50_tiny_round_pressed.d ./TouchGFX/generated/images/src/__generated/image_alternate_theme_images_widgets_button_regular_height_50_tiny_round_pressed.o ./TouchGFX/generated/images/src/__generated/image_alternate_theme_images_widgets_button_regular_height_50_tiny_round_pressed.su

.PHONY: clean-TouchGFX-2f-generated-2f-images-2f-src-2f-__generated

