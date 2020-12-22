#ifndef __CREDITACCOUNT_H
#define __CREDITACCOUNT_H
#include "bank.h"

class CreditAccount : public AccountBase 
{
    public:
    CreditAccount();
    CreditAccount(std::string,std::string,double);
    CreditAccount(std::string,std::string);
    void debit(double);//override
    void credit(double);//override
    void dispay() const; //override
    
};
#endif