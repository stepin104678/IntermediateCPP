#include<gtest/gtest.h>
#include"customer.h"
#include"postpaid.h"
#include"prepaid.h"

namespace{
TEST(PostpaidCustomer,AllTest)
{
    PostpaidCustomer p1("101","XYZ","9090",100.0);
    
    p1.makeCall(4.0);

    EXPECT_EQ(4.0,p1.getBill());
}
TEST(PrepaidCustomer,AllTest)
{
    PrepaidCustomer p1("101","XYZ","9090",100.00);

    p1.credit(10.0);

    EXPECT_EQ(110.0,p1.getBalance());

    p1.makeCall(10);

    EXPECT_EQ(100.0,p1.getBalance());

}
}
