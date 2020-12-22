#include "currency.h"
#include <gtest/gtest.h>


TEST(Currency, DefaultConstructor) 
{
  Currency a1;
  EXPECT_EQ(0, a1.getR());
  EXPECT_EQ(0, a1.getP());
}

TEST(Currency, plus) {
  Currency a1(10, 50);
  Currency a2(10, 60);
  Currency a3;
  a3 = a1 + a2;
  EXPECT_EQ(21, a3.getR());
  EXPECT_EQ(10, a3.getP());
}

TEST(Currency, minus) 
{
  Currency a1(10, 50);
  Currency a2(9, 60);
  Currency a3;
  a3 = a1 - a2;
  EXPECT_EQ(0, a3.getR());
  EXPECT_EQ(90, a3.getP());
}

TEST(Currency, OperatorPlusValue) {
  Currency a1(10, 50);
  Currency a3;
  a3 = a1 + 50;
  EXPECT_EQ(60, a3.getR());
  EXPECT_EQ(50, a3.getP());
}

TEST(Currency, OperatorMinusValue) {
  Currency a1(50, 50);
  Currency a3;
  a3 = a1 - 50;
  EXPECT_EQ(0, a3.getR());
  EXPECT_EQ(50, a3.getP());
}

TEST(Currency, PreIncrement) {
  Currency a1(50, 50);
  ++a1;
  EXPECT_EQ(51, a1.getR());
  EXPECT_EQ(51, a1.getP());
}

TEST(Currency, PostIncrement) {
  Currency a1(50, 50);
  a1++;
  EXPECT_EQ(51, a1.getR());
  EXPECT_EQ(51, a1.getP());
}

TEST(Currency, Equality) {
  Currency a1(50, 50);
  Currency a2(50, 50);
  EXPECT_TRUE(a1 == a2);
}

TEST(Currency, LesserThan) {
  Currency a1(49, 50);
  Currency a2(50, 50);
  bool res = a1 < a2;
  EXPECT_TRUE(res);
}

TEST(Currency, GreaterThan) {
  Currency a1(59, 50);
  Currency a2(50, 50);
  bool res = a1 > a2;
  EXPECT_TRUE(res);
}