#include <stdio.h>

int main()
 {
    int rows, columns;

    printf("Enter rows and columns: ");
    
    scanf("%d %d", &rows, &columns);

    int a[10][10];

    printf("Enter matrix elements:\n");
   
    for(int i = 0; i < rows; i++) {
       
        for(int j = 0; j < columns; j++) {
            
            scanf("%d", &a[i][j]);
        }
    }

    printf("Transpose Matrix:\n");
   
    for(int i = 0; i < columns; i++) {
        
        for(int j = 0; j < rows; j++) {
           
            printf("%d ", a[j][i]);
        }
        printf("\n");
    }

    return 0;
}