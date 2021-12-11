/**********************************Copyright (c)**********************************
**                       版权所有 (C), 2015-2020, 
**
**                             zhangjun write
**                        所有基础方法目录
*********************************************************************************/
#include <Arduino.h>
/**
 * @brief  ACSII change to 16 hex
 * @param  ACSII
 * @return Hex
 */
unsigned char char_to_hex(unsigned char bHex)
{
  if ((bHex >= 0) && (bHex <= 9))
  {
    bHex += 0x30;
  }
  else if ((bHex > 10) && (bHex <= 15))
  {
    bHex += 0x37;
  }
  else
  {
    bHex = 0xff;
  }
  return bHex;
}

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
void change_hsv_to_rgb(unsigned int hue, unsigned int saturation, unsigned int value, unsigned int *red, unsigned int *green, unsigned int *blue)
{
  float s = saturation / 1000.0f;
  float v = value / 1000.0f;
  float c = v * s;
  float x = c * (1 - abs((hue / 60) % 2) - 1);
  float m = v - c;
  if (hue > 360)
  {
    hue = 0;
  }
  int i = hue / 60;
  float rr;
  float gg;
  float bb;

  switch (i)
  {
  case 0:
    rr = c;
    gg = x;
    bb = 0;
    break;
  case 1:
    rr = x;
    gg = c;
    bb = 0;
    break;
  case 2:
    rr = 0;
    gg = c;
    bb = x;
    break;
  case 3:
    rr = 0;
    gg = x;
    bb = c;
    break;
  case 4:
    rr = x;
    gg = 0;
    bb = c;
    break;
  case 5:
    rr = c;
    gg = 0;
    bb = x;
    break;

  default:
    break;
  }

  *red = (rr + m) * 255;
  *green = (gg + m) * 255;
  *blue = (bb + m) * 255;
}

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
void change_rgb_to_hsv(unsigned int red, unsigned int green, unsigned int blue, unsigned int *hue, unsigned int *saturation, unsigned int *value)
{
  float rr = red / 255;
  float gg = green / 255;
  float bb = blue / 255;

  float rgb_max = max(max(rr, gg), bb);
  float rgb_min = min(min(rr, gg), bb);
  float inter = rgb_max - rgb_min;

  if (inter == 0)
  {
    *hue = 0;
  }
  else if (rgb_max == rr)
  {
    *hue = 60 * ((int)((gg - bb) / inter) % 6);
  }
  else if (rgb_max == gg)
  {
    *hue = 60 * ((bb - rr) / inter + 2);
  }
  else if (rgb_max == bb)
  {
    *hue = 60 * ((rr - gg) / inter + 4);
  }

  if (rgb_max == 0)
  {
    *saturation = 0;
  }
  else
  {
    *saturation = (inter / rgb_max) * 1000;
  }

  *value = rgb_max * 1000;
}