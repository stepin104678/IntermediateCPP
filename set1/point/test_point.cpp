#include "point.h"
#include <gtest/gtest.h>

TEST(Point, distanceFromOrigin) 
{
  Point p1(4.0, 3.0);
  EXPECT_EQ(5.0, p1.distanceFromOrigin());
}
TEST(Point, isOrigin) 
{
  Point p1(0, 0);
  ASSERT_TRUE(p1.isOrigin());
  Point p2(4.0, 3.0);
  ASSERT_FALSE(p2.isOrigin());
}

TEST(point, isOnXAxis) 
{
  Point p1(0.0, 3.0);
  ASSERT_TRUE(p1.isOnXAxis());
}

TEST(Point, isOnYAxis) 
{
  Point p1(4.0, 0.0);
  ASSERT_TRUE(p1.isOnYAxis());
}

TEST(Point, QuadrantCheck) 
{
  Point p1(4.0, 3.0);
  EXPECT_EQ(Q1, p1.quadrant());
  Point p2(-4.0, 3.0);
  EXPECT_EQ(Q2, p2.quadrant());
  Point p3(4.0, -3.0);
  EXPECT_EQ(Q3, p3.quadrant());
  Point p4(-4.0, -3.0);
  EXPECT_EQ(Q4, p4.quadrant());
}

int main()
{
  testing::InitGoogleTest();
  return RUN_ALL_TESTS();
}