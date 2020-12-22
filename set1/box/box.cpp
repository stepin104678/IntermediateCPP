#include "box.h"
#include <iostream>

Box::Box() 
    : m_length(0), m_breadth(0), m_height(0) 
{

}
Box::Box(int length, int breadth, int height)
    : m_length(length), m_breadth(breadth), m_height(height) 
{

}

Box::Box(const Box &ref)
    : m_length(ref.m_length), m_breadth(ref.m_breadth), m_height(ref.m_height) 
{

}

int Box::length() const 
{ 
    return m_length; 
}

int Box::breadth() const 
{ 
    return m_breadth; 
}

int Box::height() const 
{ 
    return m_height; 
}

int Box::volume() const 
{ 
    return m_length * m_breadth * m_height; 
}

void Box::display() const 
{
    std::cout << "Length : " << length() << "\nBreadth : " << breadth() << "\nHeight : " << height() 
        << "\nVolume : " << volume() << "\n";
}