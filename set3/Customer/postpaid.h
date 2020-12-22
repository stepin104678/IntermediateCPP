#ifndef __POSTPAID_H
#define __POSTPAID_H

#include<string>
#include<cstdint>

#include "customer.h"

class PostpaidCustomer : public CustomerBase {
  public:
  void billPay(double);
  double m_bill;
  PostpaidCustomer();
  PostpaidCustomer(std::string,std::string,std::string,double);
  PostpaidCustomer(std::string,std::string,std::string);
  void credit(double);           //recharge or billPay
  void makeCall(double);
  double getBill() const;
  void display() const;

};

#endif
