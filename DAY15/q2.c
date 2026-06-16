#include <stdio.h>

int main()
{
    int a[5], i, temp;

    printf("Enter 5 elements:\n");
    for(i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    temp = a[0];

    for(i = 0; i < 4; i++)
    {
        a[i] = a[i + 1];
    }

    a[4] = temp;

    printf("Array after left rotation:\n");
    for(i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}