#include "color.h"

Color::Color()
  : m_r(0), m_g(0), m_b(0)
{

}
Color::Color(int r,int g,int b)       //r,g,b values
  : m_r(r), m_g(g), m_b(b)
{

}
Color::Color(int c)               //Hex value as int
  : m_r(c), m_g(c), m_b(c)
{

}
Color::Color(std::string cs)       //Hex value as string
  : m_r(stoi(cs)), m_g(stoi(cs)), m_b(stoi(cs))
{

}

Color::Color(color_t a) {
  switch (a) {
  case RED:
    m_r = 255;
    m_g = 0;
    m_b = 0;
    break;
  case BLUE:
    m_r = 0;
    m_g = 0;
    m_b = 255;
    break;
  case GREEN:
    m_r = 0;
    m_g = 255;
    m_b = 0;
    break;
  case WHITE:
    m_r = 255;
    m_g = 255;
    m_b = 255;
    break;
  case BLACK:
    m_r = 0;
    m_g = 0;
    m_b = 0;
    break;
  }
}
Color Color::invert() const
{
  int r = 255 - m_r; 
  int g = 255 - m_g;
  int b = 255 - m_b;
  return Color(r,g,b);
}
void Color::display() const
{
  cout<< "R - " << m_r << "\nG - " << m_g << "\nB - " << m_b << endl;
}