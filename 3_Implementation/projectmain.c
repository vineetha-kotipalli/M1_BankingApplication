/**
 * @file projectmain.c
 * @author your name (you@domain.com)
 * @brief Bank Application main code
 * @version 0.1
 * @date 2021-11-21
 * 
 * @copyright Copyright (c) 2021
 * 
 */
/*Header files */

#include "./inc/BankOperations.h"
#include "./inc/Account_details.h"
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
/* Starting the application */
int main()
{
int ch;
printf("---------------------------");
printf("  Welcome to the BANK");
printf("---------------------------");

char ct='y';
int amount=0;
int totaldeposit=0;
int totalwithdraw=0;
int totaltransfer=0;
details Details;
int transferamount;
int transferaccountnumber;
printf("\n");
/* Application taking the login details to proceed*/
printf("Please Provide Your account details");
printf("\n");
printf("---------------------------------------");
char name[50];
printf("\nEnter your name=");
scanf("%s",name);
printf("\nEnter your account=");
scanf("%d",&Details.accountnumber);
printf("\n Enter your password=");
scanf("%d",&Details.password);
int totalamount;
totalamount=login(&Details);
if(totalamount!=-9)
 {  
                     /* valid the user*/  
while(ct=='y')            /* Starting the while loop*/
{
    /*Displaying the menu list*/
printf("\nSelect the option to perform");
printf("-----------------------------------");
printf("\n");
printf("\n1.Deposit Amount");
printf("\n");
printf("\n2.Withdraw Amount");
printf("\n");
printf("\n3.Transfer the amount");
printf("\n");
printf("\n4.Check details");
printf("\n");
printf("\n5.exit");
printf("\n");
printf("\nEnter your option=");
scanf("%d",&ch);
printf("-------------------------------");
/* Switch case starts */
switch (ch)
{
case 1:
    printf("\n Enter the amount to deposite=");
    scanf("%d",&amount);
    
     if(amount>0)
     {
	     totaldeposit=amount;
     totalamount=diposite(totalamount,amount);
     printf("\nDeposite is Sucessful ");
     printf("\n");
    printf("The total amount in your account=%d",totalamount);
     }
     else
	     printf("%d Invalid amount",amount);
		
    break;
case 2:
     printf("\nEnter the amount to withdraw=");
     scanf("%d",&amount);
     if(amount>totalamount)   
     { 
         printf("Insufficient Amount to withdraw");
     printf("-------------------------------");
     }
     else if(amount%500==0)   
      {
          totalamount=withdraw(totalamount,amount);
          totalwithdraw=amount;
     
     printf("\nDeposite is Sucessful ");
    printf("\nThe total amount in your account=%d",totalamount);
     }
     else
     {
         printf("\n");
     printf("Unable withdraw if the amount is not divisible by 500");
     }
    break;
case 3:
    
     printf("\nEnter the amount to be transfer=");
     scanf("%d",&transferamount);
     if(transferamount>totalamount)   
     printf("Insufficient Amount to transfer");
     else
      {  
          printf("\nEnter the transfer account number=");
          scanf("%d",&transferaccountnumber);
          totaltransfer=amount;
      totalamount=transfer1(totalamount,transferaccountnumber,transferamount);
      
      if(totalamount>-1)
     {
         printf("\nDeposite is Sucessful ");
    printf("\nThe total amount in your account=%d",totalamount);
     }
     else
     printf("Invalid Transfer Account number");
      }

    break;
case 4:
      printf("\nThe total amount in your account=%d",totalamount);
      printf("\nThe total witdraw of your account=%d",totalwithdraw);
      printf("\nThe total totaldeposit of your account=%d",totaldeposit);
      printf("\nThe total totaltransfer in your account=%d",totaltransfer);
      break;
case 5:
      printf("\nYour Name=%s",name);
      printf("\n");
      printf("Account Number=%d",Details.accountnumber);
      
      printf("\nThe total amount in your account=%d",totalamount);
      printf("\nThe total witdraw of your account=%d",totalwithdraw);
      printf("\nThe total totaldeposit of your account=%d",totaldeposit);
      printf("\nThe total totaltransfer in your account=%d",totaltransfer); 
      printf("\n Happy Banking");
      exit(0);
default:
       printf("Invalid choice");            
}
/* Ending of switch case */
printf("\n\nDo you want to continue?[y/n]:\t");
				scanf("%s",&ct);

}
 /* Ending of while loop*/
}
/* Ending if statement */
else
{
    printf("Invalid details");
}    
printf("\nHAPPY BANKING");
}
/*End of main*/
