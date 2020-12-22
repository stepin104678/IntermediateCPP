#include "currency.h"

Currency::Currency() : m_rupees(0), m_paise(0) {}
Currency::Currency(int rupee, int paise) : m_rupees(rupee), m_paise(paise) {}
Currency::Currency(int rupee) : m_rupees(rupee), m_paise(0) {}

Currency Currency::operator+(const Currency &ref) {
  int rr, pp;
  rr = m_rupees + ref.m_rupees;
  pp = m_paise + ref.m_paise;
  if (pp > 99) {
    rr = rr + 1;
    pp = pp % 100;
  }
  return Currency(rr, pp);
}

Currency Currency::operator-(const Currency &ref) {
  int rr, pp;
  rr = m_rupees - ref.m_rupees;
  pp = m_paise - ref.m_paise;
  if (pp < 0) {
    pp = pp + 100;
    rr = rr - 1;
  }
  return Currency(rr, pp);
}

Currency Currency::operator+(int rupees) {
  m_rupees = m_rupees + rupees;
  return Currency(m_rupees, m_paise);
}

Currency Currency::operator-(int rupees) {
  m_rupees = m_rupees - rupees;
  return Currency(m_rupees, m_paise);
}

Currency &Currency::operator++() {
  ++m_rupees;
  ++m_paise;
  return *this;
}
Currency Currency::operator++(int) {

  Currency temp = *this;
  ++(*this);
  return *this;
}

bool Currency::operator==(const Currency &ref) {

  return (m_rupees == ref.m_rupees) && (m_paise == ref.m_paise);
}

bool Currency::operator<(const Currency &ref) {

  return (m_rupees < ref.m_rupees) || (m_paise < ref.m_paise);
}

bool Currency::operator>(const Currency &ref) {

  return (m_rupees > ref.m_rupees) || (m_paise > ref.m_paise);
}

void Currency::display() const { std::cout << m_rupees << "." << m_paise; }

std::ostream &operator<<(std::ostream &rout, const Currency &ref) {

  rout << ref.m_rupees << "." << ref.m_paise;
  return rout;
}

int Currency::getR()
{
  return m_rupees;
}
int Currency::getP()
{
  return m_paise;
}