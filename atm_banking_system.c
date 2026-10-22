#include<stdio.h>
void main()
{
int balance , deposit , withdraw, x;
printf("enter the current balance:");
scanf("%d" ,&balance);
printf("\n1.balance enquiry");
printf("\n2. cash withdrawal");
printf("\n3. cash deposit");
printf("\nEnter the choice:");
scanf("%d" ,&x);
switch(x)
{
case 1: 
       printf("The current balance is %d" ,balance);
       break; 
case 2: 
       printf("Enter the withdrawl amount");
       scanf("%d" ,&withdraw);
       if(withdraw>balance)
       printf("Balance is insufficient");
       else
       printf("Transaction successful and the reamaining balance is %d" , balance-withdraw);
       break;
case 3: 
       printf("Enter the amount to deposit");
       scanf("%d" ,&deposit);
       printf("Deposit successful and the updated balance is %d" ,deposit+balance);
       break;
default: 
        printf("invalid");
}
}  
              
