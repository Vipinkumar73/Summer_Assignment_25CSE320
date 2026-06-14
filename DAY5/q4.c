#include <stdio.h>
int main(){
    int number,largest,factor = 2;
    printf("enter a number");
    scanf("%d",&number);

    while (number > 1)
    {
        if(number % factor ==0)
        {
            largest = factor;
            number = number/factor;

        }
        else{
            factor++;

        }
    }
    printf("largest prime factor =%d",largest);

    return 0;


}