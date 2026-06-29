#include <stdio.h>

int main()
 {
    int accNo;
    char name[50];
    float balance, deposit, withdraw;

    printf("Enter Account Number  ");
   
    scanf("%d", &accNo);

    printf("Enter Account Holder Name  ");
  
    scanf("%s", name);

    printf("Enter Initial Balance ");
   
    scanf("%f", &balance);

    printf("\nEnter Deposit Amount  ");
   
    scanf("%f", &deposit);
  
    balance = balance + deposit;

    printf("Enter Withdraw Amount  ");
  
    scanf("%f", &withdraw);

    if (withdraw <= balance)
     {
        balance = balance - withdraw;
    }
     else
      {
        printf("Insufficient Balance!\n");
    }

    printf("\n   Account Details   \n");
   
    printf("Account Number: %d\n", accNo);
   
    printf("Account Holder: %s\n", name);
   
    printf("Current Balance: %.2f\n", balance);

    return 0;
}