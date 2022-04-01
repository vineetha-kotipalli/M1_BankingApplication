#include "../inc/BankOperations.h"
#include "../inc/Account_details.h"
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
int login(details* Details)
{
    if((Details->accountnumber==12345678 && Details->password==11111111)||
    (Details->accountnumber==23456789 && Details->password==22222222)||
    (Details->accountnumber==34567890 && Details->password==333333333)||
    (Details->accountnumber==10101010 && Details->password==44444444)||
    (Details->accountnumber==20202020 && Details->password==55555555))
    return 0;
    else
    return -9;
}
int diposite(int totalamount,int amount)
{   printf("%d total",totalamount);
    return totalamount+amount;
}
int withdraw(int totalamount,int amount)
{
    return totalamount-amount;
}
int transfer1(int totalamount,int transferaccount,int amount)
{
    if((transferaccount==12345678)||
    (transferaccount==23456789)||
    (transferaccount==34567890)||
    (transferaccount==10101010)||
    (transferaccount==20202020))
    return totalamount-amount;
    else
    return -1;
}
