#include "point.cpp"
#include<iostream>
#include<gtest/gtest.h>

TEST(Point,Default_Constructor){
	Point<int> p1;
	EXPECT_EQ(0, p1.xaxis());
	EXPECT_EQ(0, p1.yaxis());
	EXPECT_EQ(0,p1.distanceFromOrigin());
	EXPECT_EQ(false,p1.isOnXAxis());
	EXPECT_EQ(false,p1.isOnYAxis());
	p1.display();
}
TEST(Point,Parameterized_Constructor){
	Point<int> p1(3,4);
	EXPECT_EQ(3, p1.xaxis());
	EXPECT_EQ(4, p1.yaxis());
	EXPECT_EQ(5,p1.distanceFromOrigin());
	EXPECT_EQ(Q1,p1.quadrant());
	EXPECT_EQ(false,p1.isOnXAxis());
	EXPECT_EQ(false,p1.isOnYAxis());
	p1.display();
}
