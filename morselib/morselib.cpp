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
#define UNIT 250


morselib::morselib(int rpin)
// int bpin, int gpin, 
{
  //pinMode(bpin, OUTPUT);
  // pinMode(gpin, OUTPUT);
  pinMode(rpin, OUTPUT);
  
  //_bpin = bpin;
  // _gpin = gpin;
  _rpin = rpin;
  
}

// for now, just assume that these are fine

void morselib::dot()
{
  //digitalWrite(_bpin, HIGH);
  //digitalWrite(_gpin, HIGH);
  digitalWrite(_rpin, HIGH);
  delay(250);
  //digitalWrite(_bpin, LOW);
  //digitalWrite(_gpin, LOW);
  digitalWrite(_rpin, LOW);
  delay(250);  
}

// space between letters is three units
// space between words is seven units

void morselib::dash()
{
  //digitalWrite(_bpin, HIGH);
  //digitalWrite(_gpin, HIGH);
  digitalWrite(_rpin, HIGH);
  delay(750);
  //digitalWrite(_bpin, LOW);
  //digitalWrite(_gpin, LOW);
  digitalWrite(_rpin, LOW);
  delay(250);
}

void morselib::sendString(String message)
{
  int ml = message.length();
  //Serial.print("Message length %s", ml);
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
        morselib::c();
        break;
      case 'd':
        morselib::d();
        break;
      case 'e':
        morselib::e();
        break;
      case 'f':
        morselib::f();
        break;
      case 'g':
        morselib::g();
        break;
      case 'h':
        morselib::h();
        break;
      case 'i':
        morselib::i();
        break;
      case 'j':
        morselib::j();
        break;
      case 'k':
        morselib::k();
        break;
      case 'l':
        morselib::l();
        break;
      case 'm':
        morselib::m();
        break;
      case 'n':
        morselib::n();
        break;
      case 'o':
        morselib::o();
        break;
      case 'p':
        morselib::p();
        break;
      case 'q':
        morselib::q();
        break;
      case 'r':
        morselib::r();
        break;
      case 's':
        morselib::s();
        break;
      case 't':
        morselib::t();
        break;
      case 'u':
        morselib::u();
        break;
      case 'v':
        morselib::v();
        break;
      case 'w':
        morselib::w();
        break;
      case 'x':
        morselib::x();
        break;
      case 'y':
        morselib::y();
        break;
      case '0':
        morselib::zero();
        break;
      case '1':
        morselib::one();
        break;
      case '2':
        morselib::two();
        break;
      case '3':
        morselib::three();
        break;
      case '4':
        morselib::four();
        break;
      case '5':
        morselib::five();
        break;
      case '6':
        morselib::six();
        break;
      case '7':
        morselib::seven();
        break;
      case '8':
        morselib::eight();
        break;
      case '9':
        morselib::nine();
        break;
      case '.':
        morselib::fullstop();
        break;
      default:
        morselib::wordpause();
       }
      }
  }

    void morselib::a() { morselib::dot(); morselib::dash(); }
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
    void morselib::fullstop() { morselib::dot(); morselib::dash(); morselib::dot(); morselib::dash(); morselib::dot(); morselib::dash(); }  
    void morselib::wordpause() { delay(7 * UNIT); }
    
