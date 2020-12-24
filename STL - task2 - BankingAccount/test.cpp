#include "account.h"
#include "banking.h"
#include <gtest/gtest.h>

class BankingTest : public ::testing::Test {
public:
  void SetUp() {
    b1 = new Banking();
    b1->addAccount(001, "ABC", 100.02, "9876543210");
    b1->addAccount(002, "ABD", 150.02, "9876543211");
    b1->addAccount(003, "ABB", 160.02, "9876543212");
    b1->addAccount(004, "ABF", 50.02, "9876543213");
  }
  void TearDown() { delete b1; }
  Banking *b1;
};

TEST_F(BankingTest, addAccount) { ASSERT_TRUE(b1->accbyID(001)); }

TEST_F(BankingTest, removeAccbyID) { ASSERT_TRUE(b1->removeAccbyID(3)); }

TEST_F(BankingTest, findAccbyID) {
  Account a1 = b1->findAccbyID(001);
  EXPECT_EQ(001, a1.getID());
}
TEST_F(BankingTest, findAVGBal) { EXPECT_EQ(115, b1->findAVGBal()); }
TEST_F(BankingTest, maxBal) {
  Account a2 = b1->maxBal();
  EXPECT_EQ(3, a2.getID());
}
TEST_F(BankingTest, rangeCount) { EXPECT_EQ(3, b1->rangeCount(100, 200)); }
TEST_F(BankingTest, lowBal) { EXPECT_EQ(1, b1->lowBal(100)); }