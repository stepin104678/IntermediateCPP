#ifndef __FRACTION_H
#define __FRACTION_H

#include <iostream>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;

class Fraction {
  int m_numerator;
  int m_denominator;
  public:
  Fraction();
  Fraction(int,int);
  Fraction(int);
  Fraction operator+(const Fraction&);
  Fraction operator-(const Fraction&);
  Fraction operator*(const Fraction&);
  Fraction operator+(int);
  Fraction operator-(int);
  int getN();
  int getD();
  bool operator==(const Fraction&);
  bool operator<(const Fraction&);
  bool operator>(const Fraction&);
  Fraction simplify();
  bool isSimplest() const;
  void display() const;
  friend std::ostream& operator<<( std::ostream&, const Fraction&);
};

#endif
