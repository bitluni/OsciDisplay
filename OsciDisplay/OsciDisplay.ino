void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}//#include Camera.h
#include "soc/soc.h"
#include "soc/gpio_sig_map.h"
#include "soc/i2s_reg.h"
#include "soc/i2s_struct.h"
#include "soc/io_mux_reg.h"

#include <driver/dac.h>

#include "I2S.h"

const int XCLK = 27;
const int VSYNC = 22;
const int HREF = 26;
const int PCLK = 21;
const int D0 = 35;
const int D1 = 17;
const int D2 = 34;
const int D3 = 5;
const int D4 = 39;
const int D5 = 18;
const int D6 = 36;
const int D7 = 19;

//const int DAC1 = 25;
//const int DAC2 = 26;
#include <math.h>

void setup() 
{
  //I2S::I2SInit(VSYNC, HREF, PCLK, D0, D1, D2, D3, D4, D5, D6, D7);
  dac_output_enable(DAC_CHANNEL_1);
  dac_output_enable(DAC_CHANNEL_2);
}

const int XRES = 32;
const int YRES = 32;                   
int i = 0;
float phase = 0;
float zoom = 1;

void loop()
{
  /*int x = i & 63;
  int y = (i >> 6) & 63;
  dac_output_voltage(DAC_CHANNEL_1, x * 4);
  dac_output_voltage(DAC_CHANNEL_2, y * 4);
  //delayMicroseconds(10);
  i++;*/

  const float cX = -0.7;
  const float cY = 0.27015;
  float zx, zy, ozy, tmp;
  zoom = 1 / (sin(phase) + 2);  
  phase += 0.01;      
  for (int y = 0; y < YRES; y++)
  {
    float ozy = 1.0f * (y - YRES * 0.5f) / (0.5f * zoom * YRES);
    for (int x = 0; x < XRES; x++)
    {
      zy = ozy;
      zx = 1.5f * (x - XRES * 0.5f) / (0.5f * zoom * XRES);
      i = 40;
      while (zx * zx + zy * zy < 4 && i > 1)
      {
          tmp = zx * zx - zy * zy + cX;
          zy = 2.0 * zx * zy + cY;
          zx = tmp;
          i -= 1;
      }
      if(i < 20)
      {
        dac_output_voltage(DAC_CHANNEL_1, x * 8);
        dac_output_voltage(DAC_CHANNEL_2, y * 8);
      }
    }
  }
}
