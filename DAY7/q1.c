#include <stdio.h>
int factorial(int);
int main(){
    int number,fact;
    printf("enter a number");
    scanf("%d",&number);

    fact=factorial(number);
    printf("factorial=%d",fact);


}
int factorial(int n)
{
    if(n==1)
    return 1;
    else
    return n*factorial(n-1);
    return 0;
    
}
