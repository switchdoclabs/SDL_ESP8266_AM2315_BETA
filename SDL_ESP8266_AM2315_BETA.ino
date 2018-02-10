//
// AM2315 ESP8266 Beta Testing program

// SwitchDoc Labs
// Febrary 2018
//
// BOF preprocessor bug prevent - insert on top of your arduino-code
#if 1
__asm volatile ("nop");
#endif

// Board options

#pragma GCC diagnostic ignored "-Wwrite-strings"

extern "C" {
#include "user_interface.h"
}
//#include "Time/TimeLib.h"
#include "TimeLib.h"


#include <Wire.h>
#include "SDL_ESP8266_HR_AM2315.h"


SDL_ESP8266_HR_AM2315 am2315;

float dataAM2315[2];  //Array to hold data returned by sensor.  [0,1] => [Humidity, Temperature]
boolean myOK;  // 1=successful read

void setup() {
  Serial.begin(115200);
  Serial.println("AM2315 Reliablity Test!");

 }

void loop() {
  myOK = am2315.readData(dataAM2315);
  am2315.printStatistics();
  if (myOK) {
  Serial.print("Hum: "); Serial.println(dataAM2315[0]);
  Serial.print("TempC: "); Serial.println(dataAM2315[1]);

  
  }
else
Serial.println("badRead");

  delay(1000);
}

