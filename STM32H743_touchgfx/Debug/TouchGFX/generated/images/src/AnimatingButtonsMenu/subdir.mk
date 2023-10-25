################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (11.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../TouchGFX/generated/images/src/AnimatingButtonsMenu/image_Animating_buttons_background.cpp \
../TouchGFX/generated/images/src/AnimatingButtonsMenu/image_Animating_buttons_full_table_shadow_bottom.cpp \
../TouchGFX/generated/images/src/AnimatingButtonsMenu/image_Animating_buttons_full_table_shadow_left.cpp \
../TouchGFX/generated/images/src/AnimatingButtonsMenu/image_Animating_buttons_full_table_shadow_right.cpp \
../TouchGFX/generated/images/src/AnimatingButtonsMenu/image_Animating_buttons_table_element_shadow.cpp \
../TouchGFX/generated/images/src/AnimatingButtonsMenu/image_animating_buttons_menu_icons_2048_tiny.cpp \
../TouchGFX/generated/images/src/AnimatingButtonsMenu/image_animating_buttons_menu_icons_controls_tiny.cpp \
../TouchGFX/generated/images/src/AnimatingButtonsMenu/image_animating_buttons_menu_icons_game_2d_tiny.cpp \
../TouchGFX/generated/images/src/AnimatingButtonsMenu/image_animating_buttons_menu_icons_home_automation_tiny.cpp \
../TouchGFX/generated/images/src/AnimatingButtonsMenu/image_animating_buttons_menu_icons_settings_tiny.cpp 

OBJS += \
./TouchGFX/generated/images/src/AnimatingButtonsMenu/image_Animating_buttons_background.o \
./TouchGFX/generated/images/src/AnimatingButtonsMenu/image_Animating_buttons_full_table_shadow_bottom.o \
./TouchGFX/generated/images/src/AnimatingButtonsMenu/image_Animating_buttons_full_table_shadow_left.o \
./TouchGFX/generated/images/src/AnimatingButtonsMenu/image_Animating_buttons_full_table_shadow_right.o \
./TouchGFX/generated/images/src/AnimatingButtonsMenu/image_Animating_buttons_table_element_shadow.o \
./TouchGFX/generated/images/src/AnimatingButtonsMenu/image_animating_buttons_menu_icons_2048_tiny.o \
./TouchGFX/generated/images/src/AnimatingButtonsMenu/image_animating_buttons_menu_icons_controls_tiny.o \
./TouchGFX/generated/images/src/AnimatingButtonsMenu/image_animating_buttons_menu_icons_game_2d_tiny.o \
./TouchGFX/generated/images/src/AnimatingButtonsMenu/image_animating_buttons_menu_icons_home_automation_tiny.o \
./TouchGFX/generated/images/src/AnimatingButtonsMenu/image_animating_buttons_menu_icons_settings_tiny.o 

CPP_DEPS += \
./TouchGFX/generated/images/src/AnimatingButtonsMenu/image_Animating_buttons_background.d \
./TouchGFX/generated/images/src/AnimatingButtonsMenu/image_Animating_buttons_full_table_shadow_bottom.d \
./TouchGFX/generated/images/src/AnimatingButtonsMenu/image_Animating_buttons_full_table_shadow_left.d \
./TouchGFX/generated/images/src/AnimatingButtonsMenu/image_Animating_buttons_full_table_shadow_right.d \
./TouchGFX/generated/images/src/AnimatingButtonsMenu/image_Animating_buttons_table_element_shadow.d \
./TouchGFX/generated/images/src/AnimatingButtonsMenu/image_animating_buttons_menu_icons_2048_tiny.d \
./TouchGFX/generated/images/src/AnimatingButtonsMenu/image_animating_buttons_menu_icons_controls_tiny.d \
./TouchGFX/generated/images/src/AnimatingButtonsMenu/image_animating_buttons_menu_icons_game_2d_tiny.d \
./TouchGFX/generated/images/src/AnimatingButtonsMenu/image_animating_buttons_menu_icons_home_automation_tiny.d \
./TouchGFX/generated/images/src/AnimatingButtonsMenu/image_animating_buttons_menu_icons_settings_tiny.d 


# Each subdirectory must supply rules for building sources it contributes
TouchGFX/generated/images/src/AnimatingButtonsMenu/%.o TouchGFX/generated/images/src/AnimatingButtonsMenu/%.su TouchGFX/generated/images/src/AnimatingButtonsMenu/%.cyclo: ../TouchGFX/generated/images/src/AnimatingButtonsMenu/%.cpp TouchGFX/generated/images/src/AnimatingButtonsMenu/subdir.mk
	arm-none-eabi-g++ "$<" -mcpu=cortex-m7 -std=gnu++14 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32H743xx -c -I../Core/Inc -I../Drivers/STM32H7xx_HAL_Driver/Inc -I../Drivers/STM32H7xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32H7xx/Include -I../Drivers/CMSIS/Include -I"F:/STM32_TFTLCD/my_code/STM32H743_touchgfx/pictures" -I"F:/STM32_TFTLCD/my_code/STM32H743_touchgfx/user_app" -I"F:/STM32_TFTLCD/my_code/STM32H743_touchgfx/user_bsp" -I../TouchGFX/App -I../TouchGFX/target/generated -I../TouchGFX/target -I../Middlewares/ST/touchgfx/framework/include -I../TouchGFX/generated/fonts/include -I../TouchGFX/generated/gui_generated/include -I../TouchGFX/generated/images/include -I../TouchGFX/generated/texts/include -I../TouchGFX/generated/videos/include -I../TouchGFX/gui/include -O0 -ffunction-sections -fdata-sections -fno-exceptions -fno-rtti -fno-use-cxa-atexit -Wall -femit-class-debug-always -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-TouchGFX-2f-generated-2f-images-2f-src-2f-AnimatingButtonsMenu

clean-TouchGFX-2f-generated-2f-images-2f-src-2f-AnimatingButtonsMenu:
	-$(RM) ./TouchGFX/generated/images/src/AnimatingButtonsMenu/image_Animating_buttons_background.cyclo ./TouchGFX/generated/images/src/AnimatingButtonsMenu/image_Animating_buttons_background.d ./TouchGFX/generated/images/src/AnimatingButtonsMenu/image_Animating_buttons_background.o ./TouchGFX/generated/images/src/AnimatingButtonsMenu/image_Animating_buttons_background.su ./TouchGFX/generated/images/src/AnimatingButtonsMenu/image_Animating_buttons_full_table_shadow_bottom.cyclo ./TouchGFX/generated/images/src/AnimatingButtonsMenu/image_Animating_buttons_full_table_shadow_bottom.d ./TouchGFX/generated/images/src/AnimatingButtonsMenu/image_Animating_buttons_full_table_shadow_bottom.o ./TouchGFX/generated/images/src/AnimatingButtonsMenu/image_Animating_buttons_full_table_shadow_bottom.su ./TouchGFX/generated/images/src/AnimatingButtonsMenu/image_Animating_buttons_full_table_shadow_left.cyclo ./TouchGFX/generated/images/src/AnimatingButtonsMenu/image_Animating_buttons_full_table_shadow_left.d ./TouchGFX/generated/images/src/AnimatingButtonsMenu/image_Animating_buttons_full_table_shadow_left.o ./TouchGFX/generated/images/src/AnimatingButtonsMenu/image_Animating_buttons_full_table_shadow_left.su ./TouchGFX/generated/images/src/AnimatingButtonsMenu/image_Animating_buttons_full_table_shadow_right.cyclo ./TouchGFX/generated/images/src/AnimatingButtonsMenu/image_Animating_buttons_full_table_shadow_right.d ./TouchGFX/generated/images/src/AnimatingButtonsMenu/image_Animating_buttons_full_table_shadow_right.o ./TouchGFX/generated/images/src/AnimatingButtonsMenu/image_Animating_buttons_full_table_shadow_right.su ./TouchGFX/generated/images/src/AnimatingButtonsMenu/image_Animating_buttons_table_element_shadow.cyclo ./TouchGFX/generated/images/src/AnimatingButtonsMenu/image_Animating_buttons_table_element_shadow.d ./TouchGFX/generated/images/src/AnimatingButtonsMenu/image_Animating_buttons_table_element_shadow.o ./TouchGFX/generated/images/src/AnimatingButtonsMenu/image_Animating_buttons_table_element_shadow.su ./TouchGFX/generated/images/src/AnimatingButtonsMenu/image_animating_buttons_menu_icons_2048_tiny.cyclo ./TouchGFX/generated/images/src/AnimatingButtonsMenu/image_animating_buttons_menu_icons_2048_tiny.d ./TouchGFX/generated/images/src/AnimatingButtonsMenu/image_animating_buttons_menu_icons_2048_tiny.o ./TouchGFX/generated/images/src/AnimatingButtonsMenu/image_animating_buttons_menu_icons_2048_tiny.su ./TouchGFX/generated/images/src/AnimatingButtonsMenu/image_animating_buttons_menu_icons_controls_tiny.cyclo ./TouchGFX/generated/images/src/AnimatingButtonsMenu/image_animating_buttons_menu_icons_controls_tiny.d ./TouchGFX/generated/images/src/AnimatingButtonsMenu/image_animating_buttons_menu_icons_controls_tiny.o ./TouchGFX/generated/images/src/AnimatingButtonsMenu/image_animating_buttons_menu_icons_controls_tiny.su ./TouchGFX/generated/images/src/AnimatingButtonsMenu/image_animating_buttons_menu_icons_game_2d_tiny.cyclo ./TouchGFX/generated/images/src/AnimatingButtonsMenu/image_animating_buttons_menu_icons_game_2d_tiny.d ./TouchGFX/generated/images/src/AnimatingButtonsMenu/image_animating_buttons_menu_icons_game_2d_tiny.o ./TouchGFX/generated/images/src/AnimatingButtonsMenu/image_animating_buttons_menu_icons_game_2d_tiny.su ./TouchGFX/generated/images/src/AnimatingButtonsMenu/image_animating_buttons_menu_icons_home_automation_tiny.cyclo ./TouchGFX/generated/images/src/AnimatingButtonsMenu/image_animating_buttons_menu_icons_home_automation_tiny.d ./TouchGFX/generated/images/src/AnimatingButtonsMenu/image_animating_buttons_menu_icons_home_automation_tiny.o ./TouchGFX/generated/images/src/AnimatingButtonsMenu/image_animating_buttons_menu_icons_home_automation_tiny.su ./TouchGFX/generated/images/src/AnimatingButtonsMenu/image_animating_buttons_menu_icons_settings_tiny.cyclo ./TouchGFX/generated/images/src/AnimatingButtonsMenu/image_animating_buttons_menu_icons_settings_tiny.d ./TouchGFX/generated/images/src/AnimatingButtonsMenu/image_animating_buttons_menu_icons_settings_tiny.o ./TouchGFX/generated/images/src/AnimatingButtonsMenu/image_animating_buttons_menu_icons_settings_tiny.su

.PHONY: clean-TouchGFX-2f-generated-2f-images-2f-src-2f-AnimatingButtonsMenu

