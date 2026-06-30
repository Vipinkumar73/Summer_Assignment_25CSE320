#include <stdio.h>

int main()
 {
    int choice;
    float num1, num2, result;

    do {
        printf("   CALCULATOR   ");
       
        printf("1. Addition ");
       
        printf("2. Subtraction ");
        
        printf("3. Multiplication ");
      
        printf("4. Division ");
       
        printf("5. Exit ");
       
        printf("Enter your choice  ");
       
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 4) 
        {
            printf("Enter two numbers: ");
          
            scanf("%f %f", &num1, &num2);
        }

        switch (choice)
         {
            case 1:
                result = num1 + num2;
                printf("Result = %.2f", result);
                break;

            case 2:
                result = num1 - num2;
                printf("Result = %.2f", result);
                break;

            case 3:
                result = num1 * num2;
                printf("Result = %.2f", result);
                break;

            case 4:
                if (num2 != 0) {
                    result = num1 / num2;
                    printf("Result = %.2f", result);
                } 
                else
                 {
                    printf("Error! Division by zero is not allowed. ");
                }
                break;

            case 5:
                printf("Thank you! Exiting the program.");
                break;

            default:
                printf("Invalid choice! Please try again.");
        }

    } while (choice != 5);

    return 0;
}