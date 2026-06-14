#include <stdio.h>
int main()
{

    int n,i,sum = 0;

    printf("enter a number");
    scanf("%d", &n);
    for(i=1;i<n;i++)
    {
        if(n%i==0){
            printf("%d",i);


        sum=sum+i;
        }

    }
    printf("\nsum =%d\n",sum);

    if(sum == n)
    printf("prefect number");
    else
    printf("not prefect number");
    return 0;

}