#include <RGB.h>

RGB led;

void setup()
{
  led.init(9, 10, 11);
}

void loop()
{
  led.setColor(RED);
  delay(1000);
  led.setColor(ORANGE);
  delay(1000);
  led.setColor(YELLOW);
  delay(1000);
  led.setColor(GREEN);
  delay(1000);
  led.setColor(BLUE);
  delay(1000);
  led.setColor(INDIGO);
  delay(1000);
  led.setColor(VIOLET);
  delay(1000);
}

