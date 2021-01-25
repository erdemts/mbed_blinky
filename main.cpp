/* mbed Microcontroller Library
 * Copyright (c) 2019 ARM Limited
 * SPDX-License-Identifier: Apache-2.0
 */

#include "mbed.h"

// Blinking rate in milliseconds
#define BLINKING_RATE 1000ms
static UnbufferedSerial usart_2(PD_5, PD_6, 115200);

// Initialise leds
DigitalOut led_1(LED1);
DigitalOut led_2(LED2);
DigitalOut led_3(LED3);

void on_rx_interrupt() {
  char c;

  // Toggle the LED.
  led_1 = !led_1;

  // Read the data to clear the receive interrupt.
  if (usart_2.read(&c, 1)) {
    // Echo the input back to the terminal.
    usart_2.write(&c, 1);
  }
}

int main() {
  // Register a callback to process a Rx (receive) interrupt.
  usart_2.attach(&on_rx_interrupt, SerialBase::RxIrq);

  while (true) {
    led_2 = !led_2;
    led_3 = !led_3;
    ThisThread::sleep_for(BLINKING_RATE);
  }
}
