//打开或者关闭等 0:关/1:开
void control_light(unsigned int switch_led);

//调节亮度（0～255）
void control_light_bright(unsigned long bright_value);

//调节色温（0～255）
void control_light_temp(unsigned long temp_value);


//调节红灯颜色（0～255）
void control_light_red(unsigned long red_value);

//调节绿灯颜色（0～255）
void control_light_green(unsigned long green_value);

//调节蓝灯颜色（0～255）
void control_light_blue(unsigned long blue_value);