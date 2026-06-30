#include <stdio.h>

int main() {
    int id[10], qty[10], n, i;

    printf("Enter number of products  ");
    scanf("%d", &n);

    
    for(i = 0; i < n; i++)
     {
        printf("\nEnter Product ID  ");
      
        scanf("%d", &id[i]);

        printf("Enter Quantity  ");
        
        scanf("%d", &qty[i]);
    }

    
    printf(" Inventory Details  ");
  
    printf("Product ID\tQuantity\n");

    for(i = 0; i < n; i++) 
    {
        printf("%d\t\t%d\n", id[i], qty[i]);
    }

    return 0;
}