#include <stdio.h>

int fibonacci(int);

int main()
{
    int number,i;
    printf("enter a number");
    scanf("%d",&number);
    for(i = 0;i < number; i++)
    printf("%d",fibonacci(i));
    return 0;

}
int fibonacci(int n)
{
    if (n == 0)
    return 0;
    else if(n == 1)
    return 1;
    else
    return fibonacci(n-1)+fibonacci(n-2);
    return 0;

}