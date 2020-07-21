#include "Gpio.h"
#include "driver/gpio.h"

Gpio::Gpio(/* args */)
{
}

Gpio::~Gpio()
{
}

void Gpio::setMode(gpio_num_t pin, gpio_mode_t mode)
{
  gpio_reset_pin(pin);
  gpio_set_direction(pin, mode);
}

void Gpio::setLevel(gpio_num_t pin, uint8_t level)
{
  gpio_set_level(pin, level);
}