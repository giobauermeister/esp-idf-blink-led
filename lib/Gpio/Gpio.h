#ifndef GPIO_H
#define GPIO_H
#include "driver/gpio.h"

class Gpio
{
private:
  /* data */
public:
  Gpio(/* args */);
  ~Gpio();
  void setMode(gpio_num_t pin, gpio_mode_t mode);
  void setLevel(gpio_num_t pin, uint8_t level);
};

#endif