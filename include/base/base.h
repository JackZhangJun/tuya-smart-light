/**********************************Copyright (c)**********************************
**                       版权所有 (C), 2015-2020, 
**
**                             zhangjun write
**                        所有基础方法目录
*********************************************************************************/
/**
 * @brief  ACSII change to 16 hex
 * @param  ACSII
 * @return Hex
 */
 unsigned char char_to_hex(unsigned char bHex);

/**
 * @brief 
 * 
 * @param hue 色相
 * @param saturation 饱和度
 * @param value 明度
 * @param red 红色
 * @param green 绿色
 * @param blue 蓝色
 */
 void change_hsv_to_rgb(unsigned int hue,unsigned int saturation,unsigned int value,unsigned int *red,unsigned int *green,unsigned int *blue);

 /**
 * @brief 
 * 
 * H：0~360；S : 0~1000； V : 1000;
 * @param hue 色相  0 ≤ H < 360
 * @param saturation 饱和度 0 ≤ S ≤ 1
 * @param value 明度  0 ≤ V ≤ 1
 * R : 0~1000；G : 0~1000； B : 1000;
 * @param red 红色
 * @param green 绿色
 * @param blue 蓝色
 */
void change_rgb_to_hsv(unsigned int red,unsigned int green,unsigned int blue,unsigned int *hue,unsigned int *saturation,unsigned int *value);
