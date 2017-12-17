#include <driver/dac.h>
#include <math.h>
void setup() 
{
  dac_output_enable(DAC_CHANNEL_1);
  dac_output_enable(DAC_CHANNEL_2);
}

float t = 0;
void loop() 
{
  t += 0.01;
  for(float f = 0; f < M_PI * 2; f+= 0.01)
  {
    dac_output_voltage(DAC_CHANNEL_1, sin(f) * 120 + 120);
    dac_output_voltage(DAC_CHANNEL_2, cos(f + t) * 120 + 120);
  }
  dac_output_voltage(DAC_CHANNEL_1, 255);
  dac_output_voltage(DAC_CHANNEL_2, 255);
  delay(10);
}
