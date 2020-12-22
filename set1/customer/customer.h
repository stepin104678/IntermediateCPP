#ifndef __CUSTOMER_H
#define __CUSTOMER_H

#include <iostream>
#include <string>
using namespace std;

enum AccountType 
{
Prepaid,
Postpaid
};

class Customer 
{
  protected:
  std::string m_custId;
  std::string m_custName;
  std::string m_phone;
  double m_balance;
  AccountType m_type;
  public:
  Customer();
  Customer(std::string,std::string,std::string,double);
  Customer(std::string,std::string,std::string);
  Customer(const Customer&);
  void credit(double);
  void makeCall(double);
  double getBalance() const;
  void display() const;
};

#endif