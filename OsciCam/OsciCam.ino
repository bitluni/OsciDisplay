#include "OV7670.h"
#include "FastDAC.h"

//**** find pin definitions in Pins.h *******
#include "Pins.h"
OV7670 *camera;

void setup() 
{
  Serial.begin(115200);
  
  rtc_clk_cpu_freq_set(RTC_CPU_FREQ_240M);
  Serial.println("CPU Clockspeed: ");
  Serial.println(rtc_clk_cpu_freq_value(rtc_clk_cpu_freq_get()));

  camera = new OV7670(OV7670::Resolution::QQQVGA, OV7670::ColorFormat::YUV, SIOD, SIOC, VSYNC, HREF, XCLK, PCLK, D0, D1, D2, D3, D4, D5, D6, D7);
  
  camera->manualExposure(); //for stable osci image
  
  dac_output_enable(DAC_CHANNEL_1);
  dac_output_enable(DAC_CHANNEL_2);
}

void displayOsci(unsigned char * frame, int xres, int yres)
{
  int i = 0;
  DACPrepare(true);
  for(int y = 0; y < yres; y ++)
  {
    i = y * xres * 2;
    DAC2Write(y * 3);
    //dac_output_voltage(DAC_CHANNEL_2, y * 3);
    for(int x = 0; x < xres; x ++)
    {
      int c = frame[i + 1 + x * 2];
      c = c - 20;
      if (c <= 0) //move ray out of frame to get a true black
        DAC1Write(255);
        //dac_output_voltage(DAC_CHANNEL_1, 255);
      else
      {
        DAC1Write(x * 3);
        //dac_output_voltage(DAC_CHANNEL_1, x * 3);
        delayMicroseconds(c >> 4);
      }
    }  
  }
  DAC1Write(255);
  //dac_output_voltage(DAC_CHANNEL_1, 255);
  DAC2Write(255);
  //dac_output_voltage(DAC_CHANNEL_2, 255);
  DACUnprepare(true);
}

void loop()
{
  camera->oneFrame();
  displayOsci(camera->frame, camera->xres, camera->yres);
}
