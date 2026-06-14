#include <stdio.h>
int nthfibonacci (int input1)
{
    if(input1==1)
    {
        return 0;

    }
    else if (input1==2)
    {
        return 1;
    }
    else if (input1==3)
    {
        return 1;
    }
    else
    {
        return nthfibonacci(input1-1) + nthfibonacci(input1-2);

    }


    }
int main()
{
    int number;
    printf("enter a number:");
scanf("%d",&number);
printf("%d",nthfibonacci(number));
return 0;

}