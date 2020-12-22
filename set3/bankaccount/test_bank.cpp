#include "bank.h"
#include "SavingsAccount.h"
#include "CreditAccount.h"
#include <gtest/gtest.h>

TEST(SavingsAccount, Credit)
{
    SavingsAccount s1("001", "a" , 500);
    s1.credit(500);
    EXPECT_EQ(1000,s1.getBalance());
}

TEST(SavingsAccount, Debit)
{
    SavingsAccount s1("001", "a" , 1000);
    s1.debit(500);
    EXPECT_EQ(500,s1.getBalance());
}

TEST(CreditAccount, Credit)
{
    CreditAccount s1("001", "a" , 600.10);
    s1.credit(500);
    EXPECT_EQ(1100.10,s1.getBalance());
}

TEST(CreditAccount, Debit)
{
    CreditAccount s1("001", "a" , 1000);
    s1.debit(500.20);
    EXPECT_EQ(499.80,s1.getBalance());
}