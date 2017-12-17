#include "Matrix.h"
#include "DACGraphics.h"
#include "Mesh.h"


namespace mesh0
{
#include "bitlunislablogo.h"
}
namespace mesh1
{
#include "bitlunislab.h"
}

namespace mesh2
{
#include "luni1.h"
}
namespace mesh4
{
#include "dragon.h"
}
namespace mesh6
{
#include "skull.h"
}

DACGraphics graphics;

Mesh<DACGraphics> logo(mesh0::vertexCount, mesh0::vertices, mesh0::edgeCount, mesh0::edges);
Mesh<DACGraphics> lab(mesh1::vertexCount, mesh1::vertices, mesh1::edgeCount, mesh1::edges);
Mesh<DACGraphics> luni(mesh2::vertexCount, mesh2::vertices, mesh2::edgeCount, mesh2::edges);
Mesh<DACGraphics> dragon(mesh4::vertexCount, mesh4::vertices, mesh4::edgeCount, mesh4::edges);
Mesh<DACGraphics> skull(mesh6::vertexCount, mesh6::vertices, mesh6::edgeCount, mesh6::edges);

void setup() 
{
  Serial.begin(115200);
  
  rtc_clk_cpu_freq_set(RTC_CPU_FREQ_240M);
  Serial.println("CPU Clockspeed: ");
  Serial.println(rtc_clk_cpu_freq_value(rtc_clk_cpu_freq_get()));
  
  graphics.init();

  fastDacTest();
}

void fastDacTest()
{
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
  Serial.print(int(10000000000 / (long long)(millis() - t)));
  Serial.println(" Sa/s");
}

Matrix perspective = Matrix::translation(120, 120, 0) * Matrix::scaling(120) * Matrix::perspective(90, 1, 10);

void loop()
{
  int part = (millis() / 10000) & 3;
  switch(part)
  {
    case 0:
    {
      static float u = 0;
      static float v = 0;
      u += 0.04;
      v += 0.02;
      Matrix m0 = perspective * Matrix::translation(0, -1.7, 5) * Matrix::rotation(u, 0, 1, 0) * Matrix::rotation(M_PI, 0, 0, 1) * Matrix::scaling(3);
      logo.transform(m0);
      Matrix m1 = perspective * Matrix::translation(0, 1.1, 5) * Matrix::rotation(-v, 0, 1, 0) * Matrix::rotation(M_PI, 0, 0, 1) * Matrix::scaling(7);
      lab.transform(m1);
      graphics.begin();
      logo.drawEdges(graphics);
      lab.drawVertices(graphics);
      graphics.dot(255, 255);
      graphics.end();
      break;
    }
    case 1:
    {
      static float u = 0;
      u += 0.02;
      Matrix m0 = perspective *  Matrix::translation(0, -1, 5.5) * Matrix::rotation(3.6, 1, 0, 0) * Matrix::rotation(u, 0, 1, 0) * Matrix::scaling(7);
      luni.transform(m0);
      graphics.begin();
      luni.drawVertices(graphics);
      graphics.dot(255, 255);
      graphics.end();
      break;
    }
    case 2:
    {
      static float u = 0;
      static float v = 0;
      static float w = 0;
      u += 0.01;
      v += 0.03;
      w += 0.05;
      Matrix m0 = perspective * Matrix::translation(0, 0, 5.5) * Matrix::rotation(u, 1, 0, 0) * Matrix::rotation(v, 0, 1, 0) * Matrix::rotation(w, 0, 0, 1) * Matrix::scaling(7);
      dragon.transform(m0);
      graphics.begin();
      dragon.drawVertices(graphics);
      graphics.dot(255, 255);
      graphics.end();
      break;
    }
    case 3:
    {
      static float u = 0;
      u += 0.03;
      Matrix m0 = perspective * Matrix::translation(0, -1, 6) * Matrix::rotation(3.6, 1, 0, 0) * Matrix::rotation(u, 0, 1, 0) * Matrix::scaling(6.5);
      skull.transform(m0);
      graphics.begin();
      skull.drawEdges(graphics);
      graphics.dot(255, 255);
      graphics.end();
      break;
    }
  }
  //just to get a clean trigger
  while(millis() & 31);
}
