#ifndef __COLOR_H
#define __COLOR_H

#include <string.h>
#include <iostream>
using namespace std;

typedef enum {
  RED=0xFF0000,
  GREEN=0x00FF00,
  BLUE=0x0000FF,
  WHITE=0xFFFFFF,
  BLACK=0x000000
}color_t;

class Color {
  public:
  int m_r;
  int m_g;
  int m_b;
  public:
  Color();
  Color(int,int,int);       //r,g,b values
  Color(int);               //Hex value as int
  Color(std::string);       //Hex value as string
  Color(color_t);           //enum 
  Color invert() const;
  void display() const;
};

#endif
