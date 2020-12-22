#include "CreditAccount.h"

CreditAccount::CreditAccount():AccountBase()
{

}
CreditAccount::CreditAccount(std::string num,std::string name,double bal):
    AccountBase(num, name , bal)
{
    
}
CreditAccount::CreditAccount(std::string num,std::string name):
    AccountBase(num, name)
{

}
void CreditAccount::debit(double bal) 
{
    double b = getBalance();
    this->m_balance = b - bal ;    
}
void CreditAccount::credit(double bal)
{
    double b = getBalance();
    this->m_balance = b + bal;    
}
void CreditAccount::dispay() const
{
    std::cout << "Name :" << this->m_accName << "\nAccount Num : " << this->m_accNumber << "\nBalance : " << this->m_balance;
}