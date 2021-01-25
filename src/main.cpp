/* mbed Microcontroller Library
 * Copyright (c) 2019 ARM Limited
 * SPDX-License-Identifier: Apache-2.0
 */


/* Private includes ----------------------------------------------------------*/
#include "app_utils.h"
#include "mbed.h"

/* Private typedef -----------------------------------------------------------*/
/* Private define ------------------------------------------------------------*/
/* Private macro -------------------------------------------------------------*/

/* Private variables ---------------------------------------------------------*/
// Initialise leds
DigitalOut led_1(LED1);
DigitalOut led_2(LED2);
DigitalOut led_3(LED3);
// Status led ticker
Ticker status_led_ticker;
// Usart_2
static UnbufferedSerial usart_2(PD_5, PD_6, 115200);

/* Private function prototypes -----------------------------------------------*/

/* Private user code ---------------------------------------------------------*/
void on_rx_interrupt() {
  char c;
  // Read the data to clear the receive interrupt.
  if (usart_2.read(&c, 1)) {
    // Echo the input back to the terminal.
    usart_2.write(&c, 1);
  }
}

int main() {
  // init status led ticker
  status_led_ticker.attach(&drive_status_led, 1000ms);

  // Register a callback to process a Rx (receive) interrupt.
  usart_2.attach(&on_rx_interrupt, SerialBase::RxIrq);

  while (true) {
    led_2 = !led_2;
    led_3 = !led_3;
    ThisThread::sleep_for(1000ms);
  }
}


/************************ (C) COPYRIGHT InnoTeknoloji *****END OF FILE****/