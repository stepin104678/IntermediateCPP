#include"complex.cpp"
#include<iostream>
#include<gtest/gtest.h>

TEST(Complex,CheckForRealAndImaginary){
	Complex<int> p1(21,1);
	EXPECT_EQ(21, p1.freal());
	EXPECT_EQ(1, p1.fimg());
	p1.display();
}
