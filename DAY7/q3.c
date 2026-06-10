#include <stdio.h>
int sum_of_digits(int n)
{
    if(n < 10)
    return n;
    else
    return n % 10 + sum_of_digits(n/10);

}
int main()
{
    int n;
    printf("enter a number");
    scanf("%d",& n);


    printf("sum of digits of = %d",sum_of_digits(n));
    
    return 0;

}