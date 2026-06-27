#include <stdio.h>

int main()
{
    int pin = 1234, userPin;
  
    int balance = 7000;
  
    int choice, amount;

    printf("Enter PIN ");
    
    scanf("%d", &userPin);

    if (userPin == pin)
    {
        printf("\n1. Balance\n");
      
        printf("2. Deposit\n");

        printf("3. Withdraw\n");
       
        printf("Enter choice ");
        
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
              
            printf("Balance = %d\n", balance);
              
            break;

            case 2:
              
            printf("Enter amount ");
              
            scanf("%d", &amount);
                
            balance = balance + amount;
               
            printf("New Balance = %d\n", balance);
               
            break;

            case 3:
                printf("Enter amount ");
              
                scanf("%d", &amount);

                if (amount <= balance)
                {
                    balance = balance - amount;
                  
                    printf("Remaining Balance = %d\n", balance);
                }
                else
                {
                    printf("Not enough balance\n");
                }
                break;

            default:
                printf("Invalid choice\n");
        }
    }
    else
    {
        printf("Wrong PIN\n");
    }

    return 0;
}