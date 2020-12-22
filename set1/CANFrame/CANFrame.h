#ifndef __CANFRAME_H
#define __CANFRAME_H

#include<string>
#include<iostream>
#include<cstring>
#include<algorithm>
#include<iterator>
using namespace std;

constexpr int max_dlc = 8;

class CANFrame {
  uint32_t m_id;
  uint8_t m_dlc;
  uint8_t m_data[max_dlc];
  public:
  CANFrame();
  CANFrame(uint32_t,uint8_t,uint8_t&);   //id, dlc and data
  CANFrame(uint32_t,uint8_t);            //id, dlc, data will be random
  CANFrame (std::string);                 //650#A1B2C3D4
  int id() const;
  int dlc() const;
  uint8_t* data();
  void dispay() const;
};

#endif
