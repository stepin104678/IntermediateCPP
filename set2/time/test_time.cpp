#include "time.h"
#include <gtest/gtest.h>

TEST(MyTime, plus) {
  MyTime a1,a2(11,20,00);
  a1 = a1 + a2;
  EXPECT_EQ(11, a1.getH());
  EXPECT_EQ(20, a1.getM());
  EXPECT_EQ(00, a1.getS());
}
TEST(MyTime, minus) {
  MyTime a1,a2(11,20,00);
  a2 = a2 - a1;
  EXPECT_EQ(11, a2.getH());
  EXPECT_EQ(20, a2.getM());
  EXPECT_EQ(00, a2.getS());
}
TEST(MyTime, PreIncrement) 
{
  MyTime a1(8, 30, 30);
  ++a1;
  EXPECT_EQ(9, a1.getH());
  EXPECT_EQ(31, a1.getM());
  EXPECT_EQ(31, a1.getS());
}
TEST(MyTime, PostIncrement) 
{
  MyTime a1(8, 30, 30);
  MyTime a2 = a1++;
  EXPECT_EQ(8, a2.getH());
  EXPECT_EQ(30, a2.getM());
  EXPECT_EQ(30, a2.getS());
}
TEST(MyTime, Equality) 
{
  MyTime a1(8, 30, 30);
  MyTime a2(8, 30, 30);
  EXPECT_EQ(1,(a1 == a2));
}

TEST(MyTime, LesserThan) 
{
  MyTime a1(8, 30, 30);
  MyTime a2(7, 38, 30);
  bool res;
  res = a1 < a2;
  EXPECT_FALSE(res);
}
TEST(MyTime, GreaterThan) 
{
  MyTime a1(8, 30, 30);
  MyTime a2(7, 38, 30);
  bool res;
  res = (a1 > a2);
  EXPECT_TRUE(res);
}