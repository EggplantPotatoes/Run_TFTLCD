/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * File Name          : STM32TouchController.cpp
  ******************************************************************************
  * This file was created by TouchGFX Generator 4.22.1. This file is only
  * generated once! Delete this file from your project and re-generate code
  * using STM32CubeMX or change this file manually to update it.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2023 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* USER CODE BEGIN STM32TouchController */

#include <STM32TouchController.hpp>
#include "touch.h"

extern "C" void touch_init(void);
extern "C" void touch_Scanf(void);


void STM32TouchController::init()
{
    /**
     * Initialize touch controller and driver
     *
     */
	touch_init();
}

bool STM32TouchController::sampleTouch(int32_t& x, int32_t& y)
{
	touch_Scanf();
	if(User_Touch.state) //有触摸，并读出数据
	{
		x = User_Touch.point[0].x;
		y = User_Touch.point[0].y;
		return true;
	}
    return false;
}

/* USER CODE END STM32TouchController */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
