/* USER CODE BEGIN Header */
/**
 ******************************************************************************
 * @file           : app_threads.cpp
 * @brief          : Appplication threads
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
#include "mbed.h"
#include "app_utils.h"
/* Private includes ----------------------------------------------------------*/
/* Private typedef -----------------------------------------------------------*/
/* Private define ------------------------------------------------------------*/
/* Private macro -------------------------------------------------------------*/

/* Private variables ---------------------------------------------------------*/
// WDT status flags of threads
volatile uint8_t app_controller_thread_state_flag = ALIVE;
volatile uint8_t app_check_server_thread_state_flag = UNKNOWN;
volatile uint8_t lwgsm_thread_produce_state_flag = UNKNOWN;
volatile uint8_t lwgsm_thread_process_state_flag = UNKNOWN;
volatile uint8_t mbus_usart_ll_thread_thread_state_flag = UNKNOWN;
volatile uint8_t app_mbus_thread_thread_state_flag = UNKNOWN;

/* Private function prototypes -----------------------------------------------*/
/* Private user code ---------------------------------------------------------*/

void app_controller_thread(void) {
    while(1){
        app_controller_thread_state_flag = ALIVE;
        
    }    

}

/************************ (C) COPYRIGHT InnoTeknoloji *****END OF FILE****/




