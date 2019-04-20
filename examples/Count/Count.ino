#include "PT6961.h"
// Pin 2 = CS
// Pin 3 = CLK
// Pin 4 = DIN
PT6961 LED(4, 3, 2);
void setup()
{
     LED.initDisplay();
     Serial.begin(9600);
}

void loop()
{
     //count through 0-9,a-f
     for(int i=0; i<16; i++)
     {
          LED.sendDigits(0,0,0,i,0);
          Serial.println(i);
          delay(500);
     }
}
