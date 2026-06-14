#include <stdio.h>
int main()
{

    int n,n1,n2,r,i,sum=0,counter=0;
    printf("enter two number as a given range");

    scanf("%d %d", &n1, &n2);

    for(i=n1;i<=n2;i++)
    {
        n=i;
        sum=0;
        while(n>0)
        {
            r=n%10;
            sum=sum+(r*r*r);
            n=n/10;

        }
        if(i == sum)
        {
            printf("%d ", i);
            
            counter++;
        }
    }
    printf("%d", counter);
    return 0;
    
    }


