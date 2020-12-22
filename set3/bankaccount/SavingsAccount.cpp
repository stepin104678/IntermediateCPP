#include "SavingsAccount.h"

SavingsAccount::SavingsAccount():AccountBase()
{

}
SavingsAccount::SavingsAccount(std::string num,std::string name,double bal):
    AccountBase(num, name , bal)
{
    
}
SavingsAccount::SavingsAccount(std::string num,std::string name):
    AccountBase(num, name)
{

}
void SavingsAccount::debit(double bal) 
{
    double b = getBalance();
    this->m_balance = b - bal ;    
}
void SavingsAccount::credit(double bal)
{
    double b = getBalance();
    this->m_balance = b + bal;    
}
void SavingsAccount::dispay() const
{
    std::cout << "Name :" << this->m_accName << "\nAccount Num : " << this->m_accNumber << "\nBalance : " << this->m_balance;
}
