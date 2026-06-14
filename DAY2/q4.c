#include <stdio.h>
int main()
{
    int m,n,lcm;
    printf("enter  two numbers");
    scanf("%d%d", &m,&n);
    if (m>n)
    lcm=m;
    else
    lcm=n;
    while(1)
    {
        if(lcm%m==0&&lcm%n==0)
        {
            printf("the lcm of %d and %d is %d",m,n,lcm);
            break;
        }
        lcm++;
    }
    return 0;
}
