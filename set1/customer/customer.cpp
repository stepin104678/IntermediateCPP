#include "customer.h"

Customer::Customer()
    : m_custId(""), m_custName(""), m_phone(""), m_balance(0.0), m_type()
{

}
Customer::Customer(std::string id, std::string name,std::string num, double bal)
    : m_custId(id), m_custName(name), m_phone(num), m_balance(bal)
{

}
Customer::Customer(std::string id,std::string name,std::string num)
    : m_custId(id), m_custName(name), m_phone(num)
{

}
Customer::Customer(const Customer& ref)
    : m_custId(ref.m_custId), m_custName(ref.m_custName), m_phone(ref.m_phone), m_balance(ref.m_balance)
{

}
void Customer::credit(double c_amount)
{
    m_balance = m_balance + c_amount ;
}
void Customer::makeCall(double time)
{
    m_balance = m_balance - time;
}
double Customer::getBalance() const
{
    return m_balance;
}
void Customer::display() const
{
    cout << "Customer ID : " << m_custId << "\nCustomer Name : " << m_custName 
        << "\nPhone Number : " << m_phone << "\nBalance : " << m_balance;
}