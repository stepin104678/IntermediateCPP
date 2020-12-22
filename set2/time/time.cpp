#include "time.h"
#include <iostream>

MyTime::MyTime() : m_hours(0), m_minutes(0), m_seconds(0) {}
MyTime::MyTime(int hr, int min, int sec) : m_hours(hr), m_minutes(min), m_seconds(sec) {}
MyTime::MyTime(int hr, int min) : m_hours(hr), m_minutes(min) {}

MyTime MyTime::operator+(const MyTime &ref) 
{
  int hh, mm, ss;
  hh = this->m_hours + ref.m_hours;
  mm = this->m_minutes + ref.m_minutes;
  ss = this->m_seconds + ref.m_seconds;
  if (ss > 60) 
  {
    ss = ss % 60;
    mm = mm + 1;
  }
  if (mm > 60) 
  {
    mm = mm % 60;
    hh = hh + 1;
  }
  return MyTime(hh, mm, ss);
}

MyTime MyTime::operator-(const MyTime &ref) {
  int hh, mm, ss;
  hh = this->m_hours - ref.m_hours;
  mm = this->m_minutes - ref.m_minutes;
  ss = this->m_seconds - ref.m_seconds;
  if (ss < 0) 
  {
    ss = ss + 60;
    mm = mm - 1;
  }
  if (mm < 0) 
  {
    mm = mm + 60;
    hh = hh - 1;
  }
  return MyTime(hh, mm, ss);
}

MyTime MyTime::operator+(int a) {
  int hh, mm, ss;
  hh = m_hours;
  mm = m_minutes;
  mm = mm + a;
  ss = m_seconds;
  if (mm >= 60) 
  {
    mm = mm % 60;
    hh = hh + 1;
  }
  if (hh > 12) 
  {
    hh = hh % 12;
  }
  return MyTime(hh, mm, ss);
}

MyTime MyTime::operator-(int a) {
  int hh, mm, ss;
  hh = m_hours;
  mm = m_minutes;
  mm = mm - a;
  ss = m_seconds;

  if (mm < 0) {
    mm = mm + 60;
    hh = hh - 1;
  }
  if (hh < 0) {
    hh = hh % 12;
  }

  return MyTime(hh, mm, ss);
}

MyTime &MyTime::operator++() {
  m_hours++;
  m_minutes++;
  m_seconds++;
  return *this;
}
/* Post Increment*/
MyTime MyTime::operator++(int) 
{
  MyTime temp(m_hours, m_minutes, m_seconds);
  this->m_hours++;
  this->m_minutes++;
  this->m_seconds++;
  return temp;
}

MyTime MyTime::operator+=(const MyTime& ref)
{
  MyTime temp = *this;
  temp.m_seconds+=ref.m_seconds;
  temp.m_minutes+=ref.m_minutes;
  temp.m_hours+=ref.m_hours;
  if(temp.m_seconds > 60)
  {
    temp.m_minutes++;
  }
  if (temp.m_minutes > 60)
  {
    temp.m_hours ++;
  }
  return temp;
}

bool MyTime::operator==(const MyTime &ref) 
{
  return ((m_hours == ref.m_hours) && (m_minutes == ref.m_minutes) && (m_seconds == ref.m_seconds));
}

bool MyTime::operator<(const MyTime &ref) 
{
  if ((m_hours < ref.m_hours) && (m_minutes < ref.m_minutes) && (m_seconds < ref.m_seconds)) 
  {
    return true;
  } 
  else 
  {
    return false;
  }
}

bool MyTime::operator>(const MyTime &ref) {
  if ((m_hours > ref.m_hours) || (m_minutes > ref.m_minutes) || (m_seconds > ref.m_seconds)) 
  {
    return true;
  } 
  else 
  {
    return false;
  }
}

void MyTime::display() const
{
  std::cout  << m_hours << ":" << m_minutes << ":" << m_seconds << "\n";
}

std::ostream& operator<<(std::ostream& rout, const MyTime& ref)
{
  rout << ref.m_hours << ":" << ref.m_minutes << ":" << ref.m_seconds;
  return rout;
}

int MyTime::getH() 
{
  return this->m_hours;
}
int MyTime::getM()
{
  return this->m_minutes;
}
int MyTime::getS()
{
  return this->m_seconds;
}