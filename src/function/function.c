#include <Arduino.h>
#include "constant.h"

//打开或者关闭等 0:关/1:开
void control_light(unsigned int switch_led)
{
  if (switch_led == 0)
  {
    digitalWrite(brightPin, LOW);
  }
  else
  {
    digitalWrite(brightPin, HIGH);
  }
}

//调节亮度（0～255）
void control_light_bright(unsigned long bright_value)
{
  unsigned long bright;
  bright = 256 * (bright_value / 1000);
  analogWrite(brightPin, bright);
}

//调节色温（0～255）
void control_light_temp(unsigned long temp_value)
{
  unsigned long temp;
  temp = 256 * (temp_value / 1000);
  analogWrite(tempPin, temp);
}

//调节红灯颜色（0～255）
void control_light_red(unsigned long red_value)
{
  unsigned long red;
  red = 256 * (red_value / 1000);
  analogWrite(redPin, red);
}

//调节绿灯颜色（0～255）
void control_light_green(unsigned long green_value)
{
  unsigned long green;
  green = 256 * (green_value / 1000);
  analogWrite(greenPin, green);
}

//调节蓝灯颜色（0～255）
void control_light_blue(unsigned long blue_value)
{
  unsigned long blue;
  blue = 256 * (blue_value / 1000);
  analogWrite(bluePin, blue);
}

//设置PWM频率和占空比
void set_pwm_frequency_dutycycle(int pin_num, unsigned long frequency, unsigned int dutycycle)
{
  digitalWrite(pin_num, HIGH);
  delayMicroseconds(dutycycle);
  digitalWrite(pin_num, LOW);
  delayMicroseconds(frequency - dutycycle);
}
