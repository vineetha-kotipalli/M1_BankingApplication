# TEST PLAN:

## Table no: High level test plan

| **Test ID** | **Description**                                              | **Exp I/P** | **Exp O/P** | **Actual Out** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  H_01       |Invalid Input|  Accountnumber:######## Password:88888888|error|error|Requirement based |
|  H_02       |Check the login functionality|  Accountnumber:20202020 Password:55555555|0|0|Scenario based    |
|  H_03       |Invalid range of input|  Accountnumber:3030303003 Password:383888388|-9|-9|Boundary based    |

## Table no: Low level test plan

| **Test ID** | **Description**                                              | **Exp IN** | **Exp OUT** | **Actual Out** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  L_01       |Able to enter details  | Accountnumber:12345678 Password:22222222|0|0|Requirement based |
|  L_02       |Check the withdraw status|  withdraw amount:6575|Unable withdraw if the amount is not divisible by 500|Unable withdraw if the amount is not divisible by 500|Scenario based    |
|  L_03       |Insufficient range of deposit amount|amount=-1999|-1999|-1999|Boundary based    |
