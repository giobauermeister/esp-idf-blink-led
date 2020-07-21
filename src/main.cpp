#include <stdio.h>
#include "sdkconfig.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

#include "Gpio.h"

#define STATUS_LED (gpio_num_t)23

Gpio gpio;

extern "C" {
    void app_main(void);
}

void app_main() {
  printf("Hello world!\n");

  gpio.setMode(STATUS_LED, GPIO_MODE_OUTPUT);

  while(1) {
    printf("Turning off the LED\n");
    gpio.setLevel(STATUS_LED, 0);
    vTaskDelay(1000 / portTICK_PERIOD_MS);
    printf("Turning on the LED\n");
    gpio.setLevel(STATUS_LED, 1);
    vTaskDelay(1000 / portTICK_PERIOD_MS);
  }
  
}