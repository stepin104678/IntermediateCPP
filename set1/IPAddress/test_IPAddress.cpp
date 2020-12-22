#include "IPAddress.h"
#include <gtest/gtest.h>

TEST(IPAddress, isLoopBack) 
{
  IPAddress a1;
  ASSERT_FALSE(a1.isLoopBack());
  IPAddress a2(127, 231, 2, 10);
  ASSERT_TRUE(a2.isLoopBack());
  IPAddress a3("127.231.2.10");
  ASSERT_TRUE(a3.isLoopBack());
  
}
TEST(IPAddress, getIPClass) 
{
  IPAddress a1("124.231.2.10");
  EXPECT_EQ(A, a1.getIPClass());
  IPAddress a2(130, 255, 16, 1);
  EXPECT_EQ(B, a2.getIPClass());
  IPAddress a3(200, 255, 16, 1);  
  EXPECT_EQ(C, a3.getIPClass());
  IPAddress a4(230, 255, 16, 1);
  EXPECT_EQ(D, a4.getIPClass());
  IPAddress a5(250, 255, 16, 1);
  EXPECT_EQ(E, a5.getIPClass());
}