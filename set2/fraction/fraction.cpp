#include "fraction.h"

Fraction::Fraction() : m_numerator(1), m_denominator(1) {}
Fraction::Fraction(int numerator, int denominator)
    : m_numerator(numerator), m_denominator(denominator) {}
Fraction::Fraction(int numerator) : m_numerator(numerator), m_denominator(1) {}

Fraction Fraction ::operator+(const Fraction &ref) {
  int nn, dd;
  nn = ((m_numerator * ref.m_denominator) + (ref.m_numerator * m_denominator));
  dd = (m_denominator * ref.m_denominator);
  return Fraction(nn, dd);
}

Fraction Fraction::operator-(const Fraction &ref) {
  int nn, dd;
  nn = ((m_numerator * ref.m_denominator) - (ref.m_numerator * m_denominator));
  dd = (m_denominator * ref.m_denominator);
  return Fraction(nn, dd);
}

Fraction Fraction ::operator*(const Fraction &ref) {
  int nn, dd;
  nn = ((m_numerator) * (ref.m_numerator));
  dd = (m_denominator * ref.m_denominator);
  return Fraction(nn, dd);
}

Fraction Fraction::operator+(int number) {

  int nn, dd;
  nn = (m_numerator + (m_denominator * number));
  dd = m_denominator;
  return Fraction(nn, dd);
}
Fraction Fraction::operator-(int number) {

  int nn, dd;
  nn = (m_numerator - (m_denominator * number));
  dd = m_denominator;
  return Fraction(nn, dd);
}

bool Fraction::operator==(const Fraction &ref) 
{
  return (m_numerator == ref.m_numerator) && (m_denominator == ref.m_denominator);
}
bool Fraction::operator<(const Fraction &ref) {

  float num1, num2;
  num1 = (float)m_numerator / (float)m_denominator;
  num2 = (float)ref.m_numerator / (float)ref.m_denominator;
  if (num1 < num2)
    return 1;
  else
    return 0;
}

bool Fraction::operator>(const Fraction &ref) {

  float num1, num2;
  num1 = (float)m_numerator / (float)m_denominator;
  num2 = (float)ref.m_numerator / (float)ref.m_denominator;
  if (num1 > num2)
    return 1;
  else
    return 0;
}

std::ostream &operator<<(std::ostream& rout, const Fraction &f) {

  rout << f.m_numerator << "/" << f.m_denominator;
  return rout;
}

Fraction Fraction::simplify() {
  int d; 
  d = __gcd(m_numerator, m_denominator); 
  m_numerator = m_numerator / d; 
  m_denominator = m_denominator / d; 
  return Fraction(m_numerator, m_denominator);
}

bool Fraction::isSimplest() const
{
  Fraction f1,f2;
  f1.m_numerator = this->m_numerator;
  f1.m_denominator = this->m_denominator;
  f2 = f1.simplify();
  if((f1.m_numerator == f2.m_numerator) && (f1.m_denominator == f2.m_denominator))
  {
    return true;
  }
  else
  {
    return false;
  }
}
void Fraction::display() const 
{ 
  cout << m_numerator << "/" << m_denominator; 
}

int Fraction::getN()
{
  return m_numerator;
}

int Fraction::getD()
{
  return m_denominator;
}