#include "image.h"
#include <gtest/gtest.h>

TEST(Image, move) 
{
  Image a1(1, 2, 100, 200);
  EXPECT_EQ((11, 22), a1.move(10, 20));
}
TEST(Image, scale) 
{
  Image a1(1, 2, 1066, 1600);
  EXPECT_EQ((3, 6), a1.scale(3));
}
TEST(Image, resize) {
  Image a1(4, 6, 1066, 1600);
  EXPECT_EQ((2152, 3200), a1.resize(2152, 3200));
}