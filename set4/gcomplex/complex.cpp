#include<iostream>
#include "complex.h"

using namespace std;

template<typename T>
Complex<T>::Complex():real(0),img(0)
{
}

template<typename T>
Complex<T>::Complex(T a,T b):real(a),img(b)
{
}

template<typename T>
T Complex<T>::freal()
{
	return real;
}

template<typename T>
T Complex<T>::fimg()
{
	return img;
}

template<typename T>
void Complex<T>::display()
{
	std::cout<<"Real Part:"<<real<<'\n'<<"Imaginary Part"<<img;
}

template<typename T>
std::ostream & operator << (std::ostream &out, const Complex<T> &c) 
{ 
    out << c.real; 
    out << "+i" << c.img << endl; 
    return out; 
} 
