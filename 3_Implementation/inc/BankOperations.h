/**
 * @file BankOperations.h
 * @author your name (you@domain.com)
 * @brief Declaring the functions for user operations
 * @version 0.1
 * @date 2021-11-20
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef BANKOPERATIONS_H /* IF NOT DEFINE THE BANKOPERATIONS_H*/

#define BANKOPERATIONS_H /* DEFINING THE BANKOPERATIONS_H*/
#include "Account_details.h"
/* INCLUDING THE STRUCTURE_H */
int diposite(int totalamount,int amount);  
int withdraw(int totalamount,int amount);
int login(details* Details);
int transfer1(int totalamount,int transferaccount,int amount);

#endif

