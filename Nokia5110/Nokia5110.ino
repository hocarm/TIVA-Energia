#include <stdint.h>
#include "Nokia5110.h"

#define LCD_Backlight PA_4
void setup()
{
  // put your setup code here, to run once:
  Nokia5110_Init();
  Nokia5110_Clear();
  Nokia5110_OutString("************* LCD Test *************Letter: Num:------- ---- ");
  pinMode(LCD_Backlight, OUTPUT);
  digitalWrite(LCD_Backlight, HIGH);
}

void loop()
{
  // put your main code here, to run repeatedly:
  
}
