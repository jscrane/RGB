#include <RGB.h>

RGB led;

void setup()
{
  led.init(9, 10, 11);
}

void loop()
{
  led.fadeToColor(RED, GREEN, 5);
  led.fadeToColor(GREEN, BLUE, 5);
  led.fadeToColor(BLUE, RED, 5);
}

