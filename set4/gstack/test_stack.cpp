#include "stack.cpp"
#include<gtest/gtest.h>

TEST(MyStack, Default_Constructor)
{
	MyStack<int> p1;
	EXPECT_EQ(true,p1.isEmpty());
	EXPECT_EQ(false,p1.isFull());
}
TEST(MyStack, Parameterized_Constructor)
{
	MyStack<int> p2(0,3);
	p2.push(1);
	p2.push(2);
	p2.push(3);
	EXPECT_EQ(3,p2.pop());
	EXPECT_EQ(false,p2.isEmpty());
	EXPECT_EQ(true,p2.isFull());
}

