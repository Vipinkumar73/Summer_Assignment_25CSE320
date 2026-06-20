#include <stdio.h>

int main()
 {
    int rows, columns;

    printf("Enter number of rows and columns: ");
  
    scanf("%d %d", &rows, &columns);

    int A[10][10], B[10][10], Sub[10][10];

    printf("Enter elements of first matrix:\n");
   
    for(int i = 0; i < rows; i++) {
      
        for(int j = 0; j < columns; j++) {
          
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter elements of second matrix:\n");
   
    for(int i = 0; i < rows; i++) {
      
        for(int j = 0; j < columns; j++) {
         
            scanf("%d", &B[i][j]);
        }
    }

    
    for(int i = 0; i < rows; i++) {
       
        for(int j = 0; j < columns; j++) {
           
            Sub[i][j] = A[i][j] - B[i][j];
        }
    }

    printf("Difference of matrices:\n");
   
    for(int i = 0; i < rows; i++) {
     
        for(int j = 0; j < columns; j++) {
           
           
            printf("%d ", Sub[i][j]);
        }
        printf("\n");
    }
   return 0;
}
