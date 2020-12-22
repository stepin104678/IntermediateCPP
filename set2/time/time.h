#ifndef __MYTIME_H
#define __MYTIME_H

#include<iostream>
using namespace std;

class MyTime {
  int m_hours;
  int m_minutes;
  int m_seconds;
  public:
  MyTime();
  MyTime(int,int,int);
  MyTime(int,int);
  MyTime operator+(const MyTime&);
  MyTime operator-(const MyTime&);
  MyTime operator+(int);
  MyTime operator-(int);
  MyTime& operator++();
  MyTime operator++(int);
  MyTime operator+=(const MyTime&);
  bool operator==(const MyTime&);
  bool operator<(const MyTime&);
  bool operator>(const MyTime&);
  void display() const;
  friend std::ostream& operator<<(std::ostream&, const MyTime&);

  int getH();
  int getM();
  int getS();
};

#endif
