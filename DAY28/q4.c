#include <stdio.h>

struct Contact 
{
    char name[50];
    long long phone;
};

int main() 
{
    struct Contact c[10];
    int n, i;

    printf("Enter number of contacts  ");
    scanf("%d", &n);

    
    for(i = 0; i < n; i++)
     {
        printf("\nEnter Name  ");
       
        scanf("%s", c[i].name);

        printf("Enter Phone Number  ");
        scanf("%lld", &c[i].phone);
    }

    
    printf("\nContact List:\n");
    printf("Name\tPhone Number\n");

    for(i = 0; i < n; i++) 
    {
        printf("%s\t%lld\n", c[i].name, c[i].phone);
    }

    return 0;
}