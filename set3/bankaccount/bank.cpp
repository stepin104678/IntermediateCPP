#include "bank.h"
#include <string.h>

AccountBase::AccountBase():m_accNumber(""),m_accName(""),m_balance(0.0)
{

}
AccountBase::AccountBase(std::string num,std::string name,double bal):
    m_accNumber(num),m_accName(name),m_balance(bal)
{

}
AccountBase::AccountBase(std::string num,std::string name):
    m_accNumber(num),m_accName(name),m_balance(0.0)
{

}
AccountBase::AccountBase(const AccountBase& ref):
    m_accNumber(ref.m_accNumber),m_accName(ref.m_accName),m_balance(ref.m_balance)
{

}

double AccountBase::getBalance() const
{
    return this->m_balance;
}

// Savings Account
