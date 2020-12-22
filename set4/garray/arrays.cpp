#include <iostream>
#include "arrays.h"
using namespace std;

template<typename T>
arrays<T>::arrays():m_len(0)
{
}

template<typename T>
arrays<T>::arrays(int len):m_len(len)
{
}

template<typename T>
arrays<T>::~arrays()
{
}
template<typename T>
void arrays<T>::append(T val,int h){
    m_arr[h]=val;
}
template<typename T>
T arrays<T>::at(int index){
    T a;
    for(int i=0;i<m_len;i++)
    {
       if(i==index)
       {
           a=m_arr[i];
       }
    }
    return a;
}
template<typename T>
bool arrays<T>::search(T key) const{
    int k=0;
    for(int i=0;i<m_len;i++)
    {
       if(m_arr[i]==key)
       {
           k=1;
           return true;
           break;
       }
    }
}
template<typename T>
T arrays<T>::sum() const{
    T s=0;
    for(int i=0;i<m_len;i++){
        s=s+m_arr[i];
    }
    return s;
}
template<typename T>
T arrays<T>::min() const{
    T b=1000;
    for(int i=0;i<m_len;i++)
    {
       if(b>m_arr[i])
       {
           b=m_arr[i];
       }
    }
    return b;
}
template<typename T>
T arrays<T>::max() const{
    T c=-1;
    for(int i=0;i<m_len;i++)
    {
       if(c<m_arr[i])
       {
           c=m_arr[i];
       }
    }
    return c;
}
template<typename T>
void arrays<T>::reverse(){
    cout<<"Reverse:"<<'\n';
    for(int i=m_len-1;i>=0;i--)
    {
       cout<<m_arr[i]<<" ";
    }
}
template<typename T>
void arrays<T>::sort(){
    for (int i = 0; i < m_len-1; i++)
    {
        for (int j = 0; j < m_len-i-1; j++)
        {
            if (m_arr[j] > m_arr[j+1])
            {
                int temp = m_arr[j];  
                m_arr[j] = m_arr[j+1];  
                m_arr[j+1] = temp;  
            }
        }  
    }
    cout<<"Sort:"<<'\n';
    for(int i=0;i<m_len;i++)
    {
       cout<<m_arr[i]<<" ";
    }
}