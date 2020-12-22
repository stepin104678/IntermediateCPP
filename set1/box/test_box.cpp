#include "box.h"
#include <gtest/gtest.h>

TEST(Box, Default_Constructor) 
{
  Box b1;
  EXPECT_EQ(0, b1.length());
  EXPECT_EQ(0, b1.breadth());
  EXPECT_EQ(0, b1.height());
  EXPECT_EQ(0, b1.volume());
}

TEST(Box, Parameterized_Constructor) 
{
  Box b1(2, 3, 5);
  EXPECT_EQ(2, b1.length());
  EXPECT_EQ(3, b1.breadth());
  EXPECT_EQ(5, b1.height());
  EXPECT_EQ(30, b1.volume());
}

TEST(Box, Copy_Constructor) 
{
  Box b1(10, 9, 5);
  Box b2 = b1;
  EXPECT_EQ(10, b1.length());
  EXPECT_EQ(9, b1.breadth());
  EXPECT_EQ(5, b1.height());
  EXPECT_EQ(450, b1.volume());
}

int main()
{
  testing::InitGoogleTest();
  return RUN_ALL_TESTS();
}