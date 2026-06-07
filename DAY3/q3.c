#include <stdio.h>
int main()
{
    int n,i,fact = 1;

    printf("enter a number");
    scanf("%d",&n);
    i = n;
    
    while(i >=1)
{
    fact=fact*i;
    i--;

}
printf("factotial =%d",fact);


return 0;


}