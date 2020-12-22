#include "account.h"
#include <iostream>

Account::Account() : m_accNumber(""), m_accName(""), m_balance(0) {}
Account::Account(std::string accNum, std::string accName, double bal)
    : m_accNumber(accNum), m_accName(accName), m_balance(bal) {}
Account::Account(std::string accNum, std::string accName)
    : m_accNumber(accNum), m_accName(accName) {}
Account::Account(const Account &ref)
    : m_accNumber(ref.m_accNumber), m_accName(ref.m_accName),
      m_balance(ref.m_balance) {}
void Account::credit(double amount) { m_balance += amount; }
void Account::debit(double amount) { m_balance -= amount; }
double Account::getBalance() const { return m_balance; }
void Account::display() const {
  std::cout << "Acc Number : " << m_accNumber << "\nAcc Name : " << m_accName
            << "\nBalance : " << m_balance;
}
