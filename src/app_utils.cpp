/* USER CODE BEGIN Header */
/**
 ******************************************************************************
 * @file           : app_utils.cpp
 * @brief          : Appplication utility functions
 ******************************************************************************
 * @attention
 *
 * <h2><center>&copy; Copyright (c) 2020 InnoTeknoloji.
 * All rights reserved.</center></h2>
 *
 *
 *
 ******************************************************************************
 */
/* USER CODE END Header */

/* Includes ------------------------------------------------------------------*/
#include "app_utils.h"
#include "main.h"
#include "mbed.h"
#include <cstdint>

/* Private includes ----------------------------------------------------------*/
/* Private typedef -----------------------------------------------------------*/
/* Private define ------------------------------------------------------------*/
/* Private macro -------------------------------------------------------------*/

/* Private variables ---------------------------------------------------------*/

/* Private function prototypes -----------------------------------------------*/
/* Private user code ---------------------------------------------------------*/

void drive_status_led() {
  // Toggle the LED.
  led_1 = !led_1;
  /*
    uint8_t c;

      if (connection_status == NO_INTERNET) {
        if (++c % 2) {
          led_1 = !led_1;
        }
      } else {
        led_1 = !led_1;
      }
      */
}

/************************ (C) COPYRIGHT InnoTeknoloji *****END OF FILE****/