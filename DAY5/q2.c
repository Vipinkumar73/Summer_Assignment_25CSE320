#include <stdio.h>
int main()
{
    int n,q,r,i,fact=1,result=0;
 printf("enter a munber");
 scanf("%d",&n);
 
 q = n;
 while(q != 0)
 {
    r = q%10;
    for(i=1; i<=r; i++)
    {
        fact = fact*i;

    }
    result = result + fact;
    fact = 1;
    q = q/10; 

 }
 if(result == n)
printf("%d is a strong number",n);
else
printf("%d is not a strong number",n);
return 0;

}