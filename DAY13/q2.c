#include <stdio.h>

int main()
{
    int i, n;
    float num[20], sum = 0, avg;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%f", &num[i]);
    }

    for(i = 0; i < n; i++)
    {
        sum += num[i];
    }

    avg = sum / n;

    printf("Sum = %.2f\n", sum);
    printf("Average = %.2f\n", avg);

    return 0;
}