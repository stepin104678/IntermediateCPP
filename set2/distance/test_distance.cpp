#include "distance.h"
#include <gtest/gtest.h>

TEST(Distance, DefaultConstructor) {
  Distance a1;
  EXPECT_EQ(0, a1.getF());
  EXPECT_EQ(0, a1.getI());
}
TEST(Distance, plus) 
{
  Distance a1(10, 10), a2(10,20);
  a1 = a1 + a2;
  EXPECT_EQ(21, a1.getF());
  EXPECT_EQ(6, a1.getI());
}
TEST(Distance, minus) {
  Distance a1(10,20), a2(5,10);
  a1 = a1 - a2;
  EXPECT_EQ(5, a1.getF());
  EXPECT_EQ(10, a1.getI());
}

TEST(Distance, PreIncrement) {
  Distance a1(50, 8);
  ++a1;
  EXPECT_EQ(51, a1.getF());
  EXPECT_EQ(9, a1.getI());
}
TEST(Distance, PostIncrement) {
  Distance a1(50, 8);
  a1++;
  EXPECT_EQ(51, a1.getF());
  EXPECT_EQ(9, a1.getI());
}
TEST(Distance, Equality) 
{
  Distance a1(50, 5);
  Distance a2(50, 5);
  bool res = (a1 == a2);
  EXPECT_TRUE(res);
}
TEST(Distance, LessThan) {
  Distance a1(49, 5);
  Distance a2(50, 5);
  bool res = a1 < a2;
  EXPECT_TRUE(res);
}
TEST(Distance, MoreThan) {
  Distance a1(59, 5);
  Distance a2(50, 5);
  bool res = a1 > a2;
  EXPECT_TRUE(res);
}