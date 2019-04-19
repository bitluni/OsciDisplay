//esp32 mini kit
//boot       0 2 5
//flash      6(clk) 7(sd0) 8(sd1) 9(sd2) 10(sd3) 11(cmd)
//UART       1(tx) 3(rx)
//free pins  4 12(tdi) 13(tck) 14(tms) 15(tdo) 16 17 27 32 33
//spi        18(sck) 19(miso) 23(mosi) 5(ss)
//i2c        21(sda) 22(scl)
//dac        25 26
//input only 34 35 36(svp) 39(svn)  

//pins 0 2 5 are used for boot.. only connect hi-z. can still be used as output without external pullups
//free pins 4 12 13 14 15 16 17 27 32 33
//input only 34, 35, 36(VP), 39(VN)
//dac 25, 26

const int SIOD = 21; //SDA
const int SIOC = 22; //SCL

const int VSYNC = 34;
const int HREF = 35;

const int XCLK = 32;
const int PCLK = 33;

const int D0 = 27;
const int D1 = 17;
const int D2 = 16;
const int D3 = 15;
const int D4 = 14;
const int D5 = 13;
const int D6 = 12;
const int D7 = 4;

const int TFT_DC = 2;
const int TFT_CS = 5;
//DIN <- MOSI 23
//CLK <- SCK 18

//const int DAC1 = 25;
//const int DAC2 = 26;

