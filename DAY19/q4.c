#include <stdio.h>

int main()
 {
    int n, sum = 0;

    printf("Enter the order of matrix: ");
  
    scanf("%d", &n);

    int a[10][10];

    printf("Enter matrix elements:\n");
  
    for(int i = 0; i < n; i++)
     {
  
        for(int j = 0; j < n; j++)
         {
            scanf("%d", &a[i][j]);
        }
    }

    for(int i = 0; i < n; i++)
    {
        sum = sum + a[i][i];
    }

    printf("Sum of diagonal elements = %d", sum);

    return 0;
}