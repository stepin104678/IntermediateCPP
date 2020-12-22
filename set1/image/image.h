#ifndef __IMAGE_H
#define __IMAGE_H

#include <iostream>
using namespace std;

class Image {
  int m_x;
  int m_y;
  int m_width;
  int m_height;
  public:
  Image();
  Image(int,int,int,int);
  Image(const Image&);
  int move(int,int);
  int scale(int);
  int resize(int,int);
  void display() const;
};

#endif
