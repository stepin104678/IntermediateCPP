#include"point.h"
#include<iostream>
#include<math.h>

template<typename T>
Point<T>::Point():m_x(0),m_y(0)
{
}

template<typename T>
Point<T>::Point(T x,T y):m_x(x),m_y(y)
{
}

template<typename T>
T Point<T>::xaxis(){
	return m_x;
}

template<typename T>
T Point<T>::yaxis(){
	return m_y;
}
template<typename T>
T Point<T>::distanceFromOrigin(){
	T a;
    a=sqrt((m_x*m_x)+(m_y*m_y));
    return a;
}

template<typename T>
Quadrant Point<T>::quadrant(){
	if(m_x>0 && m_y>0)
      return Q1;
   else if(m_x<0 && m_y>0)
      return Q2;
   else if(m_x<0 && m_y<0)
      return Q3;
   else
      return Q4; 
}

template<typename T>
bool Point<T>::isOnXAxis() const
{
    if(m_x!=0 && m_y==0)
    {
      return true;
    }
    else
    {
      return false;
    }
}
template<typename T>
bool Point<T>::isOnYAxis() const
{
    if(m_x==0 && m_y!=0)
    {
      return true;
    }
    else
    {
      return false;
    }
}

template<typename T>
void Point<T>::display() const
{
    std::cout<<"X-point"<<m_x<<"Y-point"<<m_y;
}
