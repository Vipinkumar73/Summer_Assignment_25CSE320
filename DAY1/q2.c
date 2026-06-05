#include <stdio.h>

int main(){
    int number = 0;
    int reversed = 0;
    int digit = 0;

    printf("enter a number:");
    scanf("%d", &number);

    while (number != 0){
        digit = number % 10;
        reversed = reversed * 10 + digit;
        number = number / 10;
    }
    printf("reversed: %d\n", reversed);

    return 0;
}