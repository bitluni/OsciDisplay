#pragma once
#include "FastDac.h"
class DACGraphics
{
  public:
  void init()
  {
    dac_output_enable(DAC_CHANNEL_1);
    dac_output_enable(DAC_CHANNEL_2);
  }

  inline void begin()
  {
    DACPrepare(true);
  }

  inline void dot(int x, int y)
  {
    DAC1Write(x);
    DAC2Write(y);
  }

  void liner(int x1, int y1, int x2, int y2, int i = 2)
  {
    if(i == 0 || (x1 == x2 && y1 == y2) )
      dot(x1, y1);
    else
    {
      int x3 = (x1 + x2) >> 1;
      int y3 = (y1 + y2) >> 1;
      liner(x1, y1, x3, y3, i -1);
      liner(x3, y3, x2, y2, i - 1);
    }
  }
  
  void line(int x1, int y1, int x2, int y2)
  {
    int x, y, xe, ye;
    int dx = x2 - x1;
    int dy = y2 - y1;
    int dx1 = labs(dx);
    int dy1 = labs(dy);
    int px = 2 * dy1 - dx1;
    int py = 2 * dx1 - dy1;
    if(dy1 <= dx1)
    {
      if(dx >= 0)
      {
        x = x1;
        y = y1;
        xe = x2;
      }
      else
      {
        x = x2;
        y = y2;
        xe = x1;
      }
      dot(x, y);
      for(int i = 0; x < xe; i++)
      {
        x = x + 1;
        if(px < 0)
        {
          px = px + 2 * dy1;
        }
        else
        {
          if((dx < 0 && dy < 0) || (dx > 0 && dy > 0))
          {
            y = y + 1;
          }
          else
          {
            y = y - 1;
          }
          px = px + 2 *(dy1 - dx1);
        }
        dot(x, y);
      }
    }
    else
    {
      if(dy >= 0)
      {
        x = x1;
        y = y1;
        ye = y2;
      }
      else
      {
        x = x2;
        y = y2;
        ye = y1;
      }
      dot(x, y);
      for(int i = 0; y < ye; i++)
      {
        y = y + 1;
        if(py <= 0)
        {
          py = py + 2 * dx1;
        }
        else
        {
          if((dx < 0 && dy < 0) || (dx > 0 && dy > 0))
          {
            x = x + 1;
          }
          else
          {
            x = x - 1;
          }
          py = py + 2 * (dx1 - dy1);
        }
        dot(x, y);
      }
    }
  }
  
  inline void end()
  {
    DACUnprepare(true);
  }
};

