#include "CANFrame.h"
#include <gtest/gtest.h>

TEST(CANFrame, id)
{
    CANFrame cf;
    EXPECT_EQ(0,cf.id());
    uint8_t arr[8] = {1,2,3,4,5,4,3};
    CANFrame cf1(100,4,*arr);
    EXPECT_EQ(100,cf1.id());
}
TEST(CANFrame, dlc)
{
    CANFrame cf;
    EXPECT_EQ(0,cf.dlc());
    uint8_t arr[8] = {1,2,3,4,5,4,3};
    CANFrame cf1(100,4,*arr);
    EXPECT_EQ(4,cf1.dlc());
}

TEST(CANFrame, data)
{
    uint8_t arr1[8] = {0};
    CANFrame cf;
    uint8_t *ar = cf.data();
    bool flag = true;
    for(int i=0; i<8 ; i++)
    {
        if(arr1[i]== *(ar+i))
        {
            flag = true;
        } 
        else
        {
            flag = false;
        }
        
    }
    EXPECT_TRUE(flag);
    uint8_t arr[8] = {1,2,3,4,5,4,3};
    CANFrame cf1(100,4,*arr);
    flag = true;
    for(int i=0; i<8 ; i++)
    {
        if(arr1[i]== *(ar+i))
        {
            flag = true;
        } 
        else
        {
            flag = false;
        }
        
    }
    EXPECT_TRUE(flag);
}