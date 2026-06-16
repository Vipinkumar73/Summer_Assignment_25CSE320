#include <stdio.h>

int main()
{
    int a[10], n, i, j, temp;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    j = n - 1;

    for(i = n - 1; i >= 0; i--)
    {
        if(a[i] != 0)
        {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            j--;
        }
    }

    printf("Array after moving zeroes to front:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}