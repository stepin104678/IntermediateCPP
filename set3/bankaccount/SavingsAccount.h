#ifndef __SAVINGSCCOUNT_H
#define __SAVINGSACCOUNT_H
#include "bank.h"

class SavingsAccount : public AccountBase 
{
    public:
    SavingsAccount();
    SavingsAccount(std::string, std::string,double);
    SavingsAccount(std::string,std::string);
    void debit(double);//override
    void credit(double); //override
    void dispay() const; //override
};
#endif