#include "fraction.h"
#include <gtest/gtest.h>

TEST(Fraction, DefaultConstructor) 
{
  Fraction a1;
  EXPECT_EQ(1, a1.getN());
  EXPECT_EQ(1, a1.getD());
}

TEST(Fraction, plus) 
{
  Fraction a1(10, 11);
  Fraction a2(1, 1);
  Fraction a3;
  a3 = a1 + a2;
  EXPECT_EQ(21, a3.getN());
  EXPECT_EQ(11, a3.getD());
}

TEST(Fraction, minus) 
{
  Fraction a1(10, 8);
  Fraction a2(1, 4);
  Fraction a3;
  a3 = a1 - a2;
  EXPECT_EQ(32, a3.getN());
  EXPECT_EQ(32, a3.getD());
}

TEST(Fraction, multiply) {
  Fraction a1(10, 8);
  Fraction a2(1, 4);
  Fraction a3;
  a3 = a1 * a2;
  EXPECT_EQ(10, a3.getN());
  EXPECT_EQ(32, a3.getD());
}

TEST(Fraction, OperatorPlusValue) {
  Fraction a1(10, 11);
  Fraction a3;
  a3 = a1 + 50;
  EXPECT_EQ(560, a3.getN());
  EXPECT_EQ(11, a3.getD());
}

TEST(Fraction, OperatorMinusValue) {
  Fraction a1(50, 5);
  Fraction a3;
  a3 = a1 - 50;
  EXPECT_EQ(-200, a3.getN());
  EXPECT_EQ(5, a3.getD());
}

TEST(Fraction, Equality) {
  Fraction a1(50, 5);
  Fraction a2(50, 5);
  bool res = a1 == a2;
  EXPECT_TRUE(res);
}

TEST(Fraction, LessThan) {
  Fraction a1(49, 5);
  Fraction a2(50, 5);
  bool res = a1 < a2;
  EXPECT_TRUE(res);
}

TEST(Fraction, MoreThan) {
  Fraction a1(59, 5);
  Fraction a2(50, 5);
  bool res = a1 > a2;
  EXPECT_TRUE(res);
}

TEST(Fraction, Simplify) {
  Fraction a2(100, 10);
  a2.simplify();
  EXPECT_EQ(10, a2.getN());
  EXPECT_EQ(1, a2.getD());
}

TEST(Fraction, isSimplest)
{
  Fraction f1 (1, 10);
  EXPECT_TRUE(f1.isSimplest());
}