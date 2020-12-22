#include "distance.h"

Distance::Distance() : m_feets(0), m_inches(0) {}
Distance::Distance(int feet, int inch) : m_feets(feet), m_inches(inch) {}
Distance::Distance(int s) : m_feets(s), m_inches(0) {}

Distance Distance::operator+(const Distance &ref) {
  int f = m_feets + ref.m_feets;
  int i = m_inches + ref.m_inches;
  // 1 feet=12inch
  if (i >= 12) 
  {
    f = f + 1;
    i = i % 12;
  }
  return Distance(f, i);
}

Distance Distance::operator-(const Distance &ref) {
  int f = m_feets - ref.m_feets;
  int i = m_inches - ref.m_inches;
  // 1 feet=12inch
  while (i <= 0)
  {
    f = f - 1;
    i = i + 12;
  }
  return Distance(f, i);
}

Distance Distance::operator+(int feet) {

  m_feets = m_feets + feet;
  return Distance(m_feets, m_inches);
}

Distance Distance::operator-(int feet) {

  m_feets = m_feets - feet;
  return Distance(m_feets, m_inches);
}
Distance &Distance::operator++() {
  ++m_feets;
  ++m_inches;
  return *this;
}
Distance Distance::operator++(int) {

  Distance temp = *this;
  ++(*this);
  return *this;
}

bool Distance::operator==(const Distance &ref) {

  return (m_feets && ref.m_feets) || (m_inches && ref.m_inches);
}
bool Distance::operator<(const Distance &ref) {

  return (m_feets < ref.m_feets) || (m_inches < ref.m_inches);
}
bool Distance::operator>(const Distance &ref) {

  return (m_feets > ref.m_feets) || (m_inches > ref.m_inches);
}
void Distance::display() const { std::cout << m_feets << "-" << m_inches; }

std::ostream& operator<<(std::ostream& rout,const Distance& ref) {

  rout << ref.m_feets << "-" << ref.m_inches;
  return rout;
}
int Distance::getF()
{
  return m_feets;
}
int Distance::getI()
{
  return m_inches;
}
