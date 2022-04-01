#include "../unit/unity.h"
#include "../inc/BankOperations.h"
#include "../inc/Account_details.h"

void setUp()
{
}
void tearDown()
{
}
void test_login(void)
{
    details account2={123456783,111111114,0};
    //int accountnum=12345678,password=11111111;
    details account1={1111111,3322222};
    TEST_ASSERT_EQUAL(-9,login(&account2));
    TEST_ASSERT_EQUAL(-9,login(&account1));
    /* dummy fail*/
    //TEST_ASSERT_EQUAL(0,login(n2,n1));
}
void test_deposit(void)
{
int totalamount=0,amount=600;
TEST_ASSERT_EQUAL(600,diposite(totalamount,amount));
/* dummy fail*/
//TEST_ASSERT_EQUAL(0,diposite(totalamount,amount));

}
void test_withdraw(void)
{
int totalamount=20000,amount=1000;
TEST_ASSERT_EQUAL(19000,withdraw(totalamount,amount));
/* dummy fail*/
//TEST_ASSERT_EQUAL(1000,withdraw(totalamount,amount));

}
void test_transfer(void)
{
int transferacc=23456789,transferamonut=4000,amount=20000;

TEST_ASSERT_EQUAL(16000,transfer1(amount,transferacc,transferamonut));
TEST_ASSERT_EQUAL(-1,transfer1(amount,amount,transferamonut));
/* dummy fail*/
//TEST_ASSERT_EQUAL(0000,transfer1(amount,transferacc,transferamonut));



}
int main(void)
{
    UNITY_BEGIN();
    RUN_TEST(test_login);
    RUN_TEST(test_login);
    RUN_TEST(test_deposit);
    RUN_TEST(test_withdraw);
    RUN_TEST(test_transfer);
    RUN_TEST(test_transfer);
    
    return UNITY_END();
}
