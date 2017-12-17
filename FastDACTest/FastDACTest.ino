#include "FastDAC.h"

void setup() 
{
  Serial.begin(115200);
  rtc_clk_cpu_freq_set(RTC_CPU_FREQ_240M);
  Serial.println("CPU Clockspeed: ");
  Serial.println(rtc_clk_cpu_freq_value(rtc_clk_cpu_freq_get()));
  
  dac_output_enable(DAC_CHANNEL_1);
  dac_output_enable(DAC_CHANNEL_2);

  //speed test
  Serial.print("Writing 1M Samples with API functions: ");
  int t = millis();
  for(int i = 0; i < 1000000; i++)
    dac_output_voltage(DAC_CHANNEL_1, i);
  int m = millis() - t;
  Serial.print(1000000000 / (millis() - t)); 
  Serial.println(" Sa/s"); 

  Serial.print("Writing 1M Samples with FastDAC functions: ");
  t = millis();
  DACPrepare(true);
  for(int i = 0; i < 1000000; i++)
  {
    DAC1Write(i);
  }
  DACUnprepare(true);
  Serial.print(1000000000 / (millis() - t));
  Serial.println(" Sa/s");  
}

void loop() {
}
