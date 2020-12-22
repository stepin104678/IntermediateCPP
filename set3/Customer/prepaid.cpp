#include "prepaid.h"
  std::string m_custId;
  std::string m_custName;
  std::string m_phone; 
  double m_balance;
  AccountType m_type;
  
  void PrepaidCustomer::recharge(double amount)
  {
      double b=this->getBalance();
      this->m_balance=this->m_balance-amount;
  }

  PrepaidCustomer::PrepaidCustomer():CustomerBase()
  {

  }
  PrepaidCustomer::PrepaidCustomer(std::string id,std::string name,std::string phone,double amount):CustomerBase(id,name,phone,amount){}
  PrepaidCustomer::PrepaidCustomer(std::string id,std::string name,std::string phone):CustomerBase(id,name,phone){}
  void PrepaidCustomer::credit(double amount)
  {
     double b=this->getBalance();
     this->m_balance=this->m_balance+amount;
  }           //recharge or billPay
  void PrepaidCustomer::makeCall(double time)
  {
      double b=this->getBalance();
      this->m_balance=m_balance-time;
  }
  double PrepaidCustomer::getBalance() const
  {
      return this->m_balance;
  }
  void PrepaidCustomer::display() const
  {
        cout << "Customer ID : " << m_custId << "\nCustomer Name : " << m_custName 
        << "\nPhone Number : " << m_phone << "\nBalance : " << m_balance;
  }