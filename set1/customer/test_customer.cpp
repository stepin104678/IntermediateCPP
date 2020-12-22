#include "customer.h"
#include <gtest/gtest.h>

TEST(Customer, credit) 
{
  Customer p1("001", "ABC", "987654321", 125.68);
  EXPECT_EQ(125.68, p1.getBalance());
  p1.credit(200);
  EXPECT_EQ(325.68, p1.getBalance());
}
TEST(Customer, makeCall) 
{
  Customer p1("001", "ABC", "987654321", 125.68);
  EXPECT_EQ(125.68, p1.getBalance());
  p1.makeCall(1.26);
  EXPECT_EQ(124.42, p1.getBalance());
}

TEST(Customer, getBalance)
{
  Customer p1("001", "ABC", "987654321", 15.68);
  EXPECT_EQ(15.68,p1.getBalance());
}

int main()
{
  testing::InitGoogleTest();
  return RUN_ALL_TESTS();
}