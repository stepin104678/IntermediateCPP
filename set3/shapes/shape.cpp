#include <iostream>
#include<cmath>
#include"shape.h"
#include"polygon.h"
#include"circle.h"
#include"rectangle.h"
#include"triangle.h"


using namespace std;




Polygon::Polygon(int n):m_sides{n}{}

Rectangle::Rectangle(int l,int b):Polygon(4),m_length{l},m_breadth{b}{}

double Rectangle::area()
{
    cout<<"Area="<<m_length*m_breadth<<endl;
    return m_length*m_breadth;
}

double Rectangle::circumference()
{
    cout<<"Circumference="<<2*(m_length+m_breadth)<<endl;
    return 2*(m_length+m_breadth);
}


Triangle::Triangle(int x,int y,int z):Polygon(3),m_a{x},m_b{y},m_c{z}{}


double Triangle::area()
{
    int p=(m_a+m_b+m_c)/2;
    cout<<"Area="<<sqrt(p*(p-m_a)*(p-m_b)*(p-m_c))<<endl;
    return sqrt(p*(p-m_a)*(p-m_b)*(p-m_c));
}

double Triangle::circumference()
{
    cout<<"Circumference="<<m_a+m_b+m_c<<endl;
    return m_a+m_b+m_c;
}


Circle::Circle(double r):m_radius{r}{}

double Circle::area()
{

    cout<<"Area="<<PI*m_radius*m_radius<<endl;
    return PI*m_radius*m_radius;
}

double Circle::circumference()
{
    cout<<"Circumference="<<2*PI*m_radius<<endl;
    return 2*PI*m_radius;
}


