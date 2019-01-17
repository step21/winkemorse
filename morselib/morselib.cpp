/*
  morselib.cpp - Library for flashing Morse code.
  Originally based on Morse by David A. Mellis, November 2, 2007.
  Updated and extended by Florian Idelberger, 2019.
  Released into the public domain.
*/

#if defined(ARDUINO) && ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <Wire.h>
#include "morselib.h"


morselib::morselib(int pin)
{
  pinMode(pin, OUTPUT);
  _pin = pin;
}

// for now, just assume that these are fine

void morselib::dot()
{
  digitalWrite(_pin, HIGH);
  delay(250);
  digitalWrite(_pin, LOW);
  delay(250);  
}

void morselib::dash()
{
  digitalWrite(_pin, HIGH);
  delay(1000);
  digitalWrite(_pin, LOW);
  delay(250);
}

void morselib::sendString(String message)
{
  int ml = message.length();
  printf("Message length %s\n", ml);
  // toCharArray()
  for(int i = 0; i < ml; i++)
    {
      char n = message.charAt(i);
      switch(n) {
      case 'a':
        morselib::a();
        break;
      case 'b':
        morselib::b();
        break;
      case 'c':
        morselib::b();
        break;
      case 'd':
        morselib::b();
        break;
      case 'e':
        morselib::b();
        break;
      case 'f':
        morselib::b();
        break;
      case 'g':
        morselib::b();
        break;
      case 'h':
        morselib::b();
        break;
      case 'i':
        morselib::b();
        break;
      case 'j':
        morselib::b();
        break;
      case 'k':
        morselib::b();
        break;
      case 'l':
        morselib::b();
        break;
      case 'm':
        morselib::b();
        break;
      case 'n':
        morselib::o();
        break;
      case 'o':
        morselib::b();
        break;
      case 'p':
        morselib::b();
        break;
      case 'q':
        morselib::b();
        break;
      case 'r':
        morselib::b();
        break;
      case 's':
        morselib::s();
        break;
      case 't':
        morselib::b();
        break;
      case 'u':
        morselib::b();
        break;
      case 'v':
        morselib::b();
        break;
      case 'w':
        morselib::b();
        break;
      case 'x':
        morselib::b();
        break;
      case 'y':
        morselib::b();
        break;
      case '0':
        morselib::b();
        break;
      case '1':
        morselib::b();
        break;
      case '2':
        morselib::b();
        break;
      case '3':
        morselib::b();
        break;
      case '4':
        morselib::b();
        break;
      case '5':
        morselib::b();
        break;
      case '6':
        morselib::b();
        break;
      case '7':
        morselib::b();
        break;
      case '8':
        morselib::b();
        break;
      case '9':
        morselib::b();
        break;
       }
      }
  }

    void morselib::a() { morselib::dot(); morselib::dash();}
    void morselib::b() { morselib::dash(); morselib::dot(); morselib::dot(); morselib::dot(); }
    void morselib::c() { morselib::dash(); morselib::dot(); morselib::dash(); morselib::dot();}
    void morselib::d() { morselib::dash(); morselib::dot(); morselib::dot(); }
    void morselib::e() { morselib::dot(); }
    void morselib::f() { morselib::dot(); morselib::dot(); morselib::dash(); morselib::dot(); }
    void morselib::g() { morselib::dash(); morselib::dash(); morselib::dot(); }
    void morselib::h() { morselib::dot(); morselib::dot(); morselib::dot(); morselib::dot(); }
    void morselib::i() { morselib::dot(); morselib::dot(); }
    void morselib::j() { morselib::dot(); morselib::dash(); morselib::dash(); morselib::dash(); }
    void morselib::k() { morselib::dash(); morselib::dot(); morselib::dash(); }
    void morselib::l() { morselib::dot(); morselib::dash(); morselib::dot(); morselib::dot(); }
    void morselib::m() { morselib::dash(); morselib::dash(); }
    void morselib::n() { morselib::dash(); morselib::dot(); }
    void morselib::o() { morselib::dash(); morselib::dash(); morselib::dash(); } // The letter O consists of three morselib::dash();es 
    void morselib::p() { morselib::dot(); morselib::dash(); morselib::dash(); morselib::dot(); }
    void morselib::q() { morselib::dash(); morselib::dash(); morselib::dot(); morselib::dash(); }
    void morselib::r() { morselib::dot(); morselib::dash(); morselib::dot(); }
    void morselib::s() { morselib::dot(); morselib::dot(); morselib::dot(); } // The letter S consists of three morselib::dot();s
    void morselib::t() { morselib::dash(); }
    void morselib::u() { morselib::dot(); morselib::dot(); morselib::dash(); }
    void morselib::v() { morselib::dot(); morselib::dot(); morselib::dot(); morselib::dash(); }
    void morselib::w() { morselib::dot(); morselib::dash(); morselib::dash(); }
    void morselib::x() { morselib::dash(); morselib::dot(); morselib::dot(); morselib::dash(); }
    void morselib::y() { morselib::dash(); morselib::dot(); morselib::dash(); morselib::dash(); }
    void morselib::z() { morselib::dash(); morselib::dash(); morselib::dot(); morselib::dot(); }
    void morselib::one() { morselib::dot(); morselib::dash(); morselib::dash(); morselib::dash(); morselib::dash(); }
    void morselib::two() { morselib::dot(); morselib::dot(); morselib::dash(); morselib::dash(); morselib::dash();}
    void morselib::three() { morselib::dot(); morselib::dot(); morselib::dot(); morselib::dash(); morselib::dash(); }
    void morselib::four() { morselib::dot(); morselib::dot(); morselib::dot(); morselib::dot(); morselib::dash(); }
    void morselib::five() { morselib::dot(); morselib::dot(); morselib::dot(); morselib::dot(); morselib::dot(); }
    void morselib::six() { morselib::dash(); morselib::dot(); morselib::dot(); morselib::dot(); morselib::dot(); }
    void morselib::seven() { morselib::dash(); morselib::dash(); morselib::dot(); morselib::dot(); morselib::dot(); }
    void morselib::eight() { morselib::dash(); morselib::dash(); morselib::dash(); morselib::dot(); morselib::dot(); }
    void morselib::nine() { morselib::dash(); morselib::dash(); morselib::dash(); morselib::dash(); morselib::dot(); }
    void morselib::zero() { morselib::dash(); morselib::dash(); morselib::dash(); morselib::dash(); morselib::dash(); }