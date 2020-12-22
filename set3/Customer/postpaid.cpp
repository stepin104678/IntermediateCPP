#include "postpaid.h"

  void PostpaidCustomer::billPay(double amount)
  {

  }
  PostpaidCustomer::PostpaidCustomer():CustomerBase(){}
  PostpaidCustomer::PostpaidCustomer(std::string id,std::string name,std::string phone,double amount):CustomerBase(id,name,phone,amount){}
  PostpaidCustomer::PostpaidCustomer(std::string id,std::string name,std::string phone):CustomerBase(id,name,phone){}
  void PostpaidCustomer::credit(double amount)
  {
      m_balance=m_balance+amount;
  }           //recharge or billPay
  void PostpaidCustomer::makeCall(double time)
  {
      m_bill=m_bill+(time*1);
  }
  double PostpaidCustomer::getBill() const
  {
      return m_bill;
  }
  void PostpaidCustomer::display() const
  {
      cout << "Customer ID : " << m_custId << "\nCustomer Name : " << m_custName 
        << "\nPhone Number : " << m_phone << "\nBalance : " << m_balance;
  }