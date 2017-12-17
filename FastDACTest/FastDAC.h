#include <driver/dac.h>
#include <soc/rtc.h>
#include <soc/sens_reg.h>

//the code in the comment is the original DAC output code
//there is some overhead to enter the mutex, disable the tone generator, and safe the other bits of the register
//this is taken out the inner loop of our code by doing this stuff just unce using prepare and unprepare
//the functions are inline, so there is no overhead of a function call
//the mutex can be ignored if no other task is messing around with the DAC registers. the compiler will optimize the mutex away then


/*
#define SET_PERI_REG_BITS(reg,bit_map,value,shift) ({                                                                  \
            ASSERT_IF_DPORT_REG((reg), SET_PERI_REG_BITS);                                                             \
            (WRITE_PERI_REG((reg),(READ_PERI_REG(reg)&(~((bit_map)<<(shift))))|(((value) & bit_map)<<(shift)) ));      \
        })

//get field of register
#define GET_PERI_REG_BITS2(reg, mask,shift) ({                                                                         \
            ASSERT_IF_DPORT_REG((reg), GET_PERI_REG_BITS2);                                                            \
            ((READ_PERI_REG(reg)>>(shift))&(mask));                                                                    \
        })
esp_err_t dac_output_voltage(dac_channel_t channel, uint8_t dac_value)
{
    RTC_MODULE_CHECK((channel >= DAC_CHANNEL_1) && (channel < DAC_CHANNEL_MAX), DAC_ERR_STR_CHANNEL_ERROR, ESP_ERR_INVALID_ARG);
    portENTER_CRITICAL(&rtc_spinlock);
    //Disable Tone
    CLEAR_PERI_REG_MASK(SENS_SAR_DAC_CTRL1_REG, SENS_SW_TONE_EN);

    //Disable Channel Tone
    if (channel == DAC_CHANNEL_1) {
        CLEAR_PERI_REG_MASK(SENS_SAR_DAC_CTRL2_REG, SENS_DAC_CW_EN1_M);
    } else if (channel == DAC_CHANNEL_2) {
        CLEAR_PERI_REG_MASK(SENS_SAR_DAC_CTRL2_REG, SENS_DAC_CW_EN2_M);
    }

    //Set the Dac value
    if (channel == DAC_CHANNEL_1) {
        SET_PERI_REG_BITS(RTC_IO_PAD_DAC1_REG, RTC_IO_PDAC1_DAC, dac_value, RTC_IO_PDAC1_DAC_S);   //dac_output
    } else if (channel == DAC_CHANNEL_2) {
        SET_PERI_REG_BITS(RTC_IO_PAD_DAC2_REG, RTC_IO_PDAC2_DAC, dac_value, RTC_IO_PDAC2_DAC_S);   //dac_output
    }

    portEXIT_CRITICAL(&rtc_spinlock);

    return ESP_OK;
}
*/

extern portMUX_TYPE rtc_spinlock;
int cleanRegDAC1;
int cleanRegDAC2;

void inline DACPrepare(const bool useMutex)
{
  if(useMutex)
    portENTER_CRITICAL(&rtc_spinlock);
  CLEAR_PERI_REG_MASK(SENS_SAR_DAC_CTRL1_REG, SENS_SW_TONE_EN);
  CLEAR_PERI_REG_MASK(SENS_SAR_DAC_CTRL2_REG, SENS_DAC_CW_EN1_M);
  CLEAR_PERI_REG_MASK(SENS_SAR_DAC_CTRL2_REG, SENS_DAC_CW_EN2_M);
  SET_PERI_REG_BITS(RTC_IO_PAD_DAC1_REG, RTC_IO_PDAC1_DAC, 255, RTC_IO_PDAC1_DAC_S);
  cleanRegDAC1 = (READ_PERI_REG(RTC_IO_PAD_DAC1_REG)&(~((RTC_IO_PDAC1_DAC)<<(RTC_IO_PDAC1_DAC_S))));
  cleanRegDAC2 = (READ_PERI_REG(RTC_IO_PAD_DAC2_REG)&(~((RTC_IO_PDAC2_DAC)<<(RTC_IO_PDAC2_DAC_S))));
}

void inline DAC1Write(const int value)
{
  WRITE_PERI_REG(RTC_IO_PAD_DAC1_REG, cleanRegDAC1 | ((value & RTC_IO_PDAC1_DAC) << RTC_IO_PDAC1_DAC_S));
}

void inline DAC2Write(const int value)
{
  WRITE_PERI_REG(RTC_IO_PAD_DAC2_REG, cleanRegDAC2 | ((value & RTC_IO_PDAC2_DAC) << RTC_IO_PDAC2_DAC_S));  
}

void inline DACUnprepare(const bool useMutex)
{
  if(useMutex)
    portEXIT_CRITICAL(&rtc_spinlock);
}

