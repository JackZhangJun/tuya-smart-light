#include <Arduino.h>
#include <constant.h>
#include <base.h>
#include <control.h>
#include <function.h>

void setup()
{
  set_pinmode(redPin, 1);
  set_pinmode(greenPin, 1);
  set_pinmode(bluePin, 1);
  set_pinmode(brightPin, 1);
  set_pinmode(tempPin, 1);
  set_pinmode(internetPin, 1);
  set_pinmode(internetPin, 1);
  
}

void loop()
{
  control_light(brightPin,1);
}