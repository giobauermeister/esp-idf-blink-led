## Gpio Class

Inside lib folder you can find a small Gpio library example that has two methods:

```
setMode(gpio_num_t pin, gpio_mode_t mode)
setLevel(gpio_num_t pin, uint8_t level)
```

### Usage
Create an object of class Gpio and call the methods passing pin number, mode and level as parameters.

```
#define LED (gpio_num_t)23;

Gpio gpio;

gpio.setMode(LED, GPIO_MODE_OUTPUT);
gpio.setLevel(LED, 1);
```