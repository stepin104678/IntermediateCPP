#ifndef __ACCOUNT_H
#define __ACCOUNT_H

#include <cstring>
#include <iostream>
#include <list>

using namespace std;

class Account {
  int m_custID;
  std::string m_custName;
  double m_balance;
  std::string m_regMobile;

public:
  Account();
  Account(int, std::string, double, std::string);
  Account(const Account &);
  int getID() const;
  std::string getName();
  double getBal();
  std::string getMobile();
  void display();
};

#endif