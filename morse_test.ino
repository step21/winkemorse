#include <morselib.h>

morselib morselib(10); // specifies pin

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  morselib.sendString("hallo");
  delay(3000);
}
