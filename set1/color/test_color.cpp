#include "color.h"
#include <gtest/gtest.h>

TEST(Color, invert) 
{
  Color a1;
  Color a2(255, 255, 255);
  Color a3 = a1;
  a1 = a1.invert();
  EXPECT_EQ(a2.m_r,a1.m_r);
  EXPECT_EQ(a2.m_g,a1.m_g);
  EXPECT_EQ(a2.m_b,a1.m_b);
}

int main()
{
  testing::InitGoogleTest();
  return RUN_ALL_TESTS();
}