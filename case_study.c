/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int choice;
    float balance,amount;
    printf("Enter current balance:");
    scanf("%f",&balance);
    
    printf("\n1.Balance enquiry");
    printf("\n2.Cash withdrawal");
    printf("\n3.Cash deposit");
    
    printf("\nenter your choice:");
    scanf("%d",&choice);
    
    switch(choice)
    {
        case 1:
          printf("Current balance:%.2f",balance);
          break;
        case 2:
          printf("Enter withdrawal amount:");
          scanf("%f",&amount);
        
          if(amount<=balance)
          {
              balance=balance-amount;
              printf("Transaction successful");
              printf("\nRemaining balance:%.2f",balance);
          }
          else
          {
              printf("Insufficient balance");
          }
          break;
        case 3:
          printf("Enter deposit amount:");
          scanf("%f",&amount);
          
          balance=balance+amount;
          printf("Deposit successful");
          printf("\nUpdated balance:%.2f",balance);
          break;
          
          default:
          printf("Invalid option");
    }
     return 0;
}
