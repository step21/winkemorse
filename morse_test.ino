#include <morselib.h>

morselib morselib(13); // specifies pin

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  morselib.sendString("aos");
  delay(3000);
}
