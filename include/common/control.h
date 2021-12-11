
//启动串口
/**
 * @brief Construct a new pin Mode object
 * 
 * @param pinnum 串口号
 * @param mode 0:OUTPUT 1:INPUT 2:INPUT_PULLUP
 */
  void set_pinmode(unsigned int pinnum,unsigned int mode);

/**
 * @brief 切换IO口电平状态
 * 
 * @param pinnum 串口号
 * @param switch_led 
 */
void control_light(unsigned int pinnum,unsigned int switch_led);