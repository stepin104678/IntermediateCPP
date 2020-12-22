#include "arrays.cpp"
#include <gtest/gtest.h>
TEST(arrays,Default_Constructor)
{
arrays<int> a1;
EXPECT_EQ(0,a1.sum());
a1.sort();
EXPECT_EQ(false,a1.search(20));
a1.reverse();
}

TEST(arrays,Parameterized_Constructor)
{
arrays<int> a1(5);
a1.append(1,0);
a1.append(2,1);
a1.append(3,2);
a1.append(4,3);
a1.append(5,4);
EXPECT_EQ(15,a1.sum());
a1.sort();
EXPECT_EQ(5,a1.max());
EXPECT_EQ(1,a1.min());
EXPECT_EQ(true,a1.search(3));
a1.reverse();
}
