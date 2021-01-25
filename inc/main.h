/**
 ******************************************************************************
 * @file           : app_utils.h
 * @brief          : Appplication utility header file
 ******************************************************************************
 * @attention
 *
 * <h2><center>&copy; Copyright (c) 2020 InnoTeknoloji.
 * All rights reserved.</center></h2>
 *
 *
 ******************************************************************************
 */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef MAIN_H_
#define MAIN_H_

/* Includes ------------------------------------------------------------------*/
#include "mbed.h"


/* Exported types ------------------------------------------------------------*/
/* Exported constants --------------------------------------------------------*/
//Communication timeout defines
#define CONNECTION_OK_LED_BLINK_TIMEOUT						5000ms


/* Exported macro ------------------------------------------------------------*/

/* Exported functions ------------------------------------------------------- */
extern DigitalOut led_1;
extern DigitalOut led_2;
extern DigitalOut led_3;







#endif /* MAIN_H_ */