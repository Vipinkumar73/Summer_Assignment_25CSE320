#include <stdio.h>

int main()
    {
    
        int number =0;
        int product = 1;
        int digit = 0;
        printf("enter a number:");
        scanf("%d", &number);
         while (number != 0)
         {
            digit = number % 10;
            product = product * digit;
            number = number / 10;
            
         }
         printf("the product of digits is: %d", product);
    
    return 0;
        }