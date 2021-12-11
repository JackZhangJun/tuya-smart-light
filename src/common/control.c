#include <Arduino.h>

//启动串口
/**
 * @brief Construct a new pin Mode object
 * 
 * @param pinnum 串口号
 * @param mode 0:OUTPUT 1:INPUT 2:INPUT_PULLUP
 */
  void set_pinmode(unsigned int pinnum,unsigned int mode)
  {
      switch (mode)
      {
      case 0:
          pinMode(pinnum,OUTPUT);
          break;
      case 1:
          pinMode(pinnum,INPUT);
          break;
       case 2:
          pinMode(pinnum,INPUT_PULLUP);
          break;
      }
  }

/**
 * @brief 切换IO口电平状态
 * 
 * @param pinnum 串口号
 * @param switch_led 
 */
void control_light(unsigned int pinnum,unsigned char switch_led)
{
  if(switch_led == 0)
  {
    digitalWrite(pinnum,LOW);
  }
  else
  {
    digitalWrite(pinnum,HIGH);
  }
}