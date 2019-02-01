#include <morselib.h>

#define BLUE 4
#define GREEN 12
#define RED 14

morselib morselib(RED); // specifies pin

// BLUE, GREEN
void setup() {
  // put your setup code here, to run once:
  Serial.print("Setup code run."); 
}

void loop() {
  // put your main code here, to run repeatedly:
  morselib.sendString("hallo dies ist ein test. bitte helfen sie mir. Dies ist Proviant Limonade Gmbh Wicküler Bayreuther Dev Tal Test Overflow Test hallo dies ist ein test. bitte helfen sie mir. Dies ist Proviant Limonade Gmbh Wicküler Bayreuther Dev Tal Test Overflow Test");
  Serial.print("String sent.");
  delay(3000);
  Serial.print("Waiting.");
}
