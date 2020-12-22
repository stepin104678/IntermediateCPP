#ifndef __COMPLEX_H
#define __COMPLEX_H

#include <iostream>

template<typename T>
class Complex {
  public:
  T real;
  T img;
  Complex();
  Complex(T,T);
  T freal();
  T fimg();
  void display();
  friend std::ostream& operator<<(std::ostream&, const Complex&);
};
#endif
