#include"customer.h"

CustomerBase ::CustomerBase(): m_custId(""), m_custName(""), m_phone(""), m_balance(0.0)
{

}
CustomerBase::CustomerBase(std::string id, std::string name,std::string num, double bal)
    : m_custId(id), m_custName(name), m_phone(num), m_balance(bal)
{

}
CustomerBase ::CustomerBase(std::string id,std::string name,std::string num)
    : m_custId(id), m_custName(name), m_phone(num)
{

}
CustomerBase ::CustomerBase(const CustomerBase& ref)
    : m_custId(ref.m_custId), m_custName(ref.m_custName), m_phone(ref.m_phone), m_balance(ref.m_balance)
{

}
void CustomerBase ::credit(double c_amount)
{
    m_balance = m_balance + c_amount ;
}
void CustomerBase ::makeCall(double time)
{
    m_balance = m_balance - time;
}
double CustomerBase ::getBalance() const
{
    return m_balance;
}
void CustomerBase ::display() const
{
    cout << "Customer ID : " << m_custId << "\nCustomer Name : " << m_custName 
        << "\nPhone Number : " << m_phone << "\nBalance : " << m_balance;
}
