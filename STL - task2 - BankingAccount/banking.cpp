#include "banking.h"
#include "account.h"

void Banking::addAccount(int id, std::string name, double bal,
                         std::string mobile) {
  accounts.emplace_back(Account(id, name, bal, mobile));
}

bool Banking::removeAccbyID(int id) {
  std::list<Account>::iterator iter;
  for (iter = accounts.begin(); iter != accounts.end(); ++iter) {
    if (iter->getID() == id) {
      break;
    }
  }
  if (iter != accounts.end()) {
    accounts.erase(iter);
    return true;
  } else {
    return false;
  }
  return NULL;
}
void Banking::displayALL() {
  std::list<Account>::iterator iter;
  for (iter = accounts.begin(); iter != accounts.end(); ++iter) {
    iter->display();
  }
}
Account &Banking::findAccbyID(int id) {
  std::list<Account>::iterator iter, nulliter;
  for (iter = accounts.begin(); iter != accounts.end(); ++iter) {
    if (iter->getID() == id) {
      break;
    }
  }
  if (iter != accounts.end()) {
    return *iter;
  } else {
    return *nulliter;
  }
}
void Banking::accbyName(std::string name) {
  std::list<Account>::iterator iter;
  for (iter = accounts.begin(); iter != accounts.end(); ++iter) {
    if (strcmp(iter->getName().c_str(), name.c_str())) {
      iter->display();
    }
  }
}
bool Banking::accbyID(int id) {
  std::list<Account>::iterator iter;
  for (iter = accounts.begin(); iter != accounts.end(); ++iter) {
    if (iter->getID() == id) {
      break;
    }
  }
  if (iter != accounts.end()) {
    return true;
  } else {
    return false;
  }
  return NULL;
}

double Banking::findAVGBal() {
  std::list<Account>::iterator iter;
  int sum = 0;
  double avg = 0.0;
  for (iter = accounts.begin(); iter != accounts.end(); ++iter) {
    sum = sum + iter->getBal();
  }
  avg = sum / count();
  return avg;
}

Account &Banking::maxBal() {
  std::list<Account>::iterator iter = accounts.begin(), maxIter;
  double maxBal = iter->getBal();
  maxIter = iter;
  ++iter;
  for (; iter != accounts.end(); ++iter) {
    if (iter->getBal() > maxBal) {
      maxIter = iter;
    }
  }
  return *maxIter;
}

int Banking::rangeCount(double min, double max) {
  std::list<Account>::iterator iter;
  int c = 0;
  for (iter = accounts.begin(); iter != accounts.end(); ++iter) {
    if ((iter->getBal() > min) && (iter->getBal() < max)) {
      c++;
    }
  }
  return c;
}
int Banking::lowBal(int limit) {
  std::list<Account>::iterator iter;
  int c = 0;
  for (iter = accounts.begin(); iter != accounts.end(); ++iter) {
    if (iter->getBal() < limit) {
      c++;
    }
  }
  return c;
}