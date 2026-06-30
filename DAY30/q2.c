#include <stdio.h>

int main() 
{

    int id[10], n, i;
   
    char book[10][30];

    printf("Enter number of books  ");
  
    scanf("%d", &n);

    
    for(i = 0; i < n; i++) {
        printf("\nEnter Book ID  ");
       
        scanf("%d", &id[i]);

        printf("Enter Book Name  ");
       
        scanf("%s", book[i]);
    }

    
    printf("Library Books ");
  
    printf("Book ID\tBook Name\n");

    for(i = 0; i < n; i++) {
        printf("%d\t%s\n", id[i], book[i]);
    }

    return 0;
}