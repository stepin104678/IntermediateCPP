#include "image.h"

Image::Image()
  : m_x(0), m_y(0), m_width(0), m_height(0)
{

}
Image::Image(int x,int y,int width,int height)
  : m_x(x), m_y(y), m_width(width), m_height(height)
{

}
Image::Image(const Image& ref)
  : m_x(ref.m_x), m_y(ref.m_y), m_width(ref.m_width), m_height(ref.m_height)
{

}
int Image::move(int x,int y)
{
  return (m_x + x, m_y + y);
}
int Image::scale(int s)
{
  return (m_x * s, m_y * s);
}
int Image::resize(int width,int height)
{
  return (m_x = width, m_y = height);
}
void Image::display() const
{
  cout << "Co-ordinate - " << m_x << " , " << m_y
       << "Image Size - " << m_width << " x " << m_height << endl;
}