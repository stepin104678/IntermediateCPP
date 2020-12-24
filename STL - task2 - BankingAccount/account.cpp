#include "account.h"

Account::Account()
    : m_custID(0), m_custName(""), m_balance(0.0), m_regMobile("") {}
Account::Account(int id, std::string name, double bal, std::string mobile)
    : m_custID(id), m_custName(name), m_balance(bal), m_regMobile(mobile) {}
Account::Account(const Account &ref)
    : m_custID(ref.m_custID), m_custName(ref.m_custName),
      m_balance(ref.m_balance), m_regMobile(ref.m_regMobile) {}
int Account::getID() const { return m_custID; }
std::string Account::getName() { return m_custName; }
double Account::getBal() { return m_balance; }
std::string Account::getMobile() { return m_regMobile; }
void Account::display() {
  std::cout << "ID : " << m_custID << "Name : " << m_custName
            << "Balance : " << m_balance << "Mobile : " << m_regMobile << endl;
}
