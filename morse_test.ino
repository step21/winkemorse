#include <WiFiMan.h>

#include <morselib.h>

#define GREEN 4
#define RED 12
#define BLUE 14

morselib morselib(RED); // specifies pin

// BLUE, GREEN
void setup() {
  // put your setup code here, to run once:
  // sets authentication to true
  WiFiMan(true);
  // needed to get serial output
  Serial.begin(57600);
  Serial.print("Setup code run.");
}

void loop() {
  // put your main code here, to run repeatedly:
  morselib.sendString("hallo");
  Serial.print("String sent.");
  delay(3000);
  Serial.print("Waiting.");
}
