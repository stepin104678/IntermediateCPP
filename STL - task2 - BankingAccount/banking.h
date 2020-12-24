#ifndef __BANKING_H
#define __BANKING_H

#include "account.h"

class Banking {

  std::list<Account> accounts;

public:
  void addAccount(int, std::string, double, std::string);
  bool removeAccbyID(int);
  void displayALL();
  Account& findAccbyID(int);
  bool accbyID(int);
  void accbyName(std::string);
  double findAVGBal();
  Account &maxBal();
  int rangeCount(double, double);
  int lowBal(int);
  int count() { return accounts.size(); }
};

#endif
