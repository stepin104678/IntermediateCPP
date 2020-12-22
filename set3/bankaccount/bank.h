#ifndef __BANK_H
#define __BANK_H

#include <string.h>
#include <iostream>

class AccountBase 
{
    protected:
    std::string m_accNumber;
    std::string m_accName;
    double m_balance;

    public:
    AccountBase();
    AccountBase(std::string,std::string,double);
    AccountBase(std::string,std::string);
    AccountBase(const AccountBase&);
    virtual void debit(double)=0;
    virtual void credit(double)=0;
    virtual void dispay() const = 0;
    double getBalance() const;
    double updateBal();
};

#endif