#include <stdio.h>
int main()
{
    int i,a[5];
    printf("enter array elements:");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);

    }
    printf("array elements are:");
    for(i=0;i<5;i++)
    {
        printf("%d",a[i]);

    }
    return 0;

}