#ifndef __CUSTOMER_H
#define __CUSTOMER_H

#include<string>
#include<cstdint>

#include<iostream>
using namespace std;

enum AccountType {
  Prepaid,
  Postpaid
};

class CustomerBase {
  protected:
  std::string m_custId;
  std::string m_custName;
  std::string m_phone; 
  double m_balance;
  AccountType m_type;
  public:
  CustomerBase();
  CustomerBase(std::string,std::string,std::string,double);
  CustomerBase(std::string,std::string,std::string);
  CustomerBase(const CustomerBase&);
  void credit(double);           //recharge or billPay
  void makeCall(double);
  double getBalance() const;
  void display() const;
};

#endif
