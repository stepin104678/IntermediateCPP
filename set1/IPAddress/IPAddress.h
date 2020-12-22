#ifndef __IPADDRESS_H
#define __IPADDRESS_H

#include <cstring>
#include <string>
#include <iostream>
using namespace std;

enum IPClass {
  A,
  B,
  C,
  D,
  E
};

class IPAddress {
  uint32_t ipval;
  public:
  IPAddress();
  IPAddress(uint8_t,uint8_t,uint8_t,uint8_t);   //a,b,c,d vals
  IPAddress(std::string);                       //"a.b.c.d" format
  bool isLoopBack() const;
  IPClass getIPClass() const;
  void display() const;
};

#endif
