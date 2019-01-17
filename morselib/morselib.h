/*
  morselib.h - Library for flashing Morse code.
  Originally based on Morse by David A. Mellis, November 2, 2007.
  Updated and extended by Florian Idelberger, 2019.
  Released into the public domain.
*/

#ifndef morselib_h
#define morselib_h

#if defined(ARDUINO) && ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <Wire.h>


class morselib
{
  public:
    morselib(int pin);

    void dot();
    void dash();
    void sendString(String);
    void a();
    void b();
    void c();
    void d();
    void e();
    void f();
    void g();
    void h();
    void i();
    void j();
    void k();
  void l();
  void m();
  void n();
  void o();
  void p();
  void q();
  void r();
  void s();
  void t();
  void u();
  void v();
  void w();
  void x();
  void y();
    void z();
    void one();
    void two();
    void three();
    void four();
    void five();
    void six();
    void seven();
    void eight();
    void nine();
    void zero();
  private:
    int _pin;
};

#endif