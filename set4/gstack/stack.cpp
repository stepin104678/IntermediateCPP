#include "stack.h"

using namespace std;

template<typename T>
MyStack <T> :: MyStack():  m_top(-1)
{
}

template<typename T>
MyStack <T> :: MyStack (int top,int len): m_top(top),m_maxlen(len)
{
}

template<typename T>
void MyStack<T> :: push(T val)
{
    if(m_top >=(m_maxlen))
    { 
        cout<<"Stack Overflow"<<endl; 
    }
    else
    {
        m_top++;
        m_arr[m_top]=val;
    }
}

template<typename T>
T MyStack<T> :: pop()
{
    T a;
    if(m_top<=-1) 
    {
        cout<<"Stack underflow";
    }
    else
    {
        a=m_arr[m_top];
        cout<<"popped element is: "<<a;
        m_top--; 
    }
    return a;    
}

template <typename T>
T MyStack <T> :: peek() const
{ 
    for(int i=0; i<m_maxlen; i++) 
    {
        cout<<m_arr[i]<<","; 
    }
}

template <typename T>
bool MyStack <T> :: isEmpty() const
{
    if(m_top<=-1) 
    { 
        return true;
    }
    else
    {
        return false;
    }
}

template <typename T>
bool MyStack <T> :: isFull() const
{
    if(m_top>=m_maxlen-1)
    {
        return true;
    }
    else
    {
        return false;
    }
}
