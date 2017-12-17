#include "OV7670.h"
#include "XClk.h"
#include "Log.h"

OV7670::OV7670(Resolution r, ColorFormat c, const int SIOD, const int SIOC, const int VSYNC, const int HREF, const int XCLK, const int PCLK, const int D0, const int D1, const int D2, const int D3, const int D4, const int D5, const int D6, const int D7)
  :i2c(SIOD, SIOC)
{
  ClockEnable(XCLK, 20000000); //base is 80MHz

  /*while(true)
  {i2c.writeRegister(ADDR, REG_COM8, 0x77);
  delay(10);
  }*/
  
  DEBUG_PRINT("Waiting for VSYNC...");  
  pinMode(VSYNC, INPUT);
  while(!digitalRead(VSYNC));
  while(digitalRead(VSYNC));
  DEBUG_PRINTLN(" done");

  resolution = r;
  xres = ResolutionValues[resolution][0];
  yres = ResolutionValues[resolution][1];
  colorFormat = c;
  i2c.writeRegister(ADDR, REG_COM7, 0b10000000);  //all registers default  
  i2c.writeRegister(ADDR, REG_CLKRC, 0b10000000); //double clock
  i2c.writeRegister(ADDR, REG_COM11, 0b1000 | 0b10); //enable auto 50/60Hz detect + exposure timing can be less...
  
  //i2c.writeRegister(ADDR, REG_COM7, 0b100); //RGB
  //i2c.writeRegister(ADDR, REG_COM15, 0b11000000 | 0b010000); //RGB565
  i2c.writeRegisters(ADDR, ColorFormatRegisters[colorFormat]);

  i2c.writeRegisters(ADDR, ResolutionRegisters[resolution]);

  frameControl(196, 52, 8, 488); //no clue why horizontal needs such strange values, vertical works ok
  
  //i2c.writeRegister(ADDR, REG_COM10, 0x02); //VSYNC negative
  //i2c.writeRegister(ADDR, REG_MVFP, 0x2b);  //mirror flip

  i2c.writeRegister(ADDR, 0xb0, 0x84);// no clue what this is but it's most important for colors
  saturation(0);
  i2c.writeRegister(ADDR, 0x13, 0xe7); //AWB on
  i2c.writeRegister(ADDR, 0x6f, 0x9f); // Simple AWB
  
  //QQVGARGB565();
  I2SCamera::init(xres, yres, VSYNC, HREF, XCLK, PCLK, D0, D1, D2, D3, D4, D5, D6, D7);
}

void OV7670::manualExposure()
{
  i2c.writeRegister(ADDR, REG_COM8, 0); // manual exposure
}

void OV7670::testImage()
{
  i2c.writeRegister(ADDR, 0x71, 0x35 | 0x80);
}
  
void OV7670::saturation(int s)  //-2 to 2
{
  //color matrix values
  i2c.writeRegister(ADDR, 0x4f, 0x80 + 0x20 * s);
  i2c.writeRegister(ADDR, 0x50, 0x80 + 0x20 * s);
  i2c.writeRegister(ADDR, 0x51, 0x00);
  i2c.writeRegister(ADDR, 0x52, 0x22 + (0x11 * s) / 2);
  i2c.writeRegister(ADDR, 0x53, 0x5e + (0x2f * s) / 2);
  i2c.writeRegister(ADDR, 0x54, 0x80 + 0x20 * s);
  i2c.writeRegister(ADDR, 0x58, 0x9e);  //matrix signs
}

void OV7670::frameControl(int hStart, int hStop, int vStart, int vStop)
{
  i2c.writeRegister(ADDR, REG_HSTART, hStart >> 3);
  i2c.writeRegister(ADDR, REG_HSTOP,  hStop >> 3);
  i2c.writeRegister(ADDR, REG_HREF, ((hStop & 0b111) << 3) | (hStart & 0b111));

  i2c.writeRegister(ADDR, REG_VSTART, vStart >> 2);
  i2c.writeRegister(ADDR, REG_VSTOP, vStop >> 2);
  i2c.writeRegister(ADDR, REG_VREF, ((vStop & 0b11) << 2) | (vStart & 0b11));
}

//constant arrays

const int OV7670::ResolutionValues[][2] = 
{
  {640, 480},
  {320, 240},
  {160, 120},
  {80, 60}
};

const unsigned char OV7670::VGARegisters[][2] = {{0xff, 0xff}};
const unsigned char OV7670::QVGARegisters[][2] = {{0xff, 0xff}};
const unsigned char OV7670::QQVGARegisters[][2] = {
    {REG_COM3, 0x04},  //DCW enable  
    {REG_COM14, 0x1a}, //pixel clock divided by 4, manual scaling enable, DCW and PCLK controlled by register
    {REG_SCALING_XSC, 0x3a},
    {REG_SCALING_YSC, 0x35},
    {REG_SCALING_DCWCTR, 0x22}, //downsample by 4
    {REG_SCALING_PCLK_DIV, 0xf2}, //pixel clock divided by 4
    {REG_SCALING_PCLK_DELAY, 0x02},
    {0xff, 0xff}}; //eol
const unsigned char OV7670::QQQVGARegisters[][2] = {
    {REG_COM3, 0x04},  //DCW enable
    {REG_COM14, 0x1b}, //pixel clock divided by 4, manual scaling enable, DCW and PCLK controlled by register
    {REG_SCALING_XSC, 0x3a},
    {REG_SCALING_YSC, 0x35},
    {REG_SCALING_DCWCTR, 0x33}, //downsample by 8
    {REG_SCALING_PCLK_DIV, 0xf3}, //pixel clock divided by 8
    {REG_SCALING_PCLK_DELAY, 0x02}, 
    {0xff, 0xff}}; //eol

const OV7670::RegisterList OV7670::ResolutionRegisters[] = {VGARegisters, QVGARegisters, QQVGARegisters, QQQVGARegisters};

const unsigned char OV7670::YUVRegisters[][2] = {{0xff, 0xff}};
const unsigned char OV7670::RGB565Registers[][2] = {
    {REG_COM7, 0b100}, //RGB
    {REG_COM15, 0b11000000 | 0b010000}, //RGB565
    {0xff, 0xff}}; //eol
const OV7670::RegisterList OV7670::ColorFormatRegisters[] = {YUVRegisters, RGB565Registers};
