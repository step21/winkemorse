#include <Morse.h>

Morse morse(13);

void setup()
{
}

void loop()
{
  morse.dot(); morse.dot(); morse.dot(); morse.dot();
  morse.dot(); morse.dot(); 
  delay(3000);
}
