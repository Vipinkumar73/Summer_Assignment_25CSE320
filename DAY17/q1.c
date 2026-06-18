#include <stdio.h>

int main() {
    int a1[50], a2[50], merged[100];
    int n1, n2, i, j;

    printf("Enter the size of first array: ");
    scanf("%d", &n1);

    printf("Enter elements of first array:\n");
    for(i = 0; i < n1; i++)
     {
        scanf("%d", &a1[i]);
    }

    printf("Enter the size of second array: ");
    scanf("%d", &n2);

    printf("Enter elements of second array:\n");
    for(i = 0; i < n2; i++)
     {
        scanf("%d", &a2[i]);
    }

    for(i = 0; i < n1; i++)
     {
        merged[i] = a1[i];
    }

    for(j = 0; j < n2; j++)
     {
        merged[i + j] = a2[j];
    }

    printf("Merged Array: ");
    for(i = 0; i < n1 + n2; i++)
     {
        printf("%d ", merged[i]);
    }

    return 0;
}