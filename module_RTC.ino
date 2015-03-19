#include "rtc.h"
#include "Wire.h"

void setup()
{
  Wire.begin();
  Serial.begin(9600);
  // setTime(30,42,21,4,26,11,14);
}

void loop()
{
  Serial.println(getTime());
  delay(1000);
}
