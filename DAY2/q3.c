#include <stdio.h>

int main()

{
    int n,m,i,gcd;
printf("enter the two numbers");
scanf("%d%d",&m,&n);
m=m>0?m:-m;
n=n>0?n:-n;

for(i=1;i<=m&&i<=n;i++)
{
    if(m%i==0&&n%i==0)
    gcd=i;
}

printf("the gcd of %d and %d is %d",m,n,gcd);
return 0;

}